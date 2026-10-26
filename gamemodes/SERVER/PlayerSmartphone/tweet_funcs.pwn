#define MAX_TWEET 50
#define     DIL_MAX_BUFFER      128
#define     HUD_LISTE_BUFFER    2000
#define     HUD_LISTE_ICERIK    3

enum tweetDataa
{
	bool:twExists,
	twText[128 char],
    twUsername[32],
	twType,
    twjam,
    twmenit,
    twPhone,
}
new listtwitter[MAX_PLAYERS] = 1;
new
    gIndex = -1,
    twList[MAX_PLAYERS][3];

new tweetData[MAX_TWEET][tweetDataa],
	Iterator:pagetweet<MAX_TWEET>;

new tweet[60];
GetTwitterLog()
{
	new tmpcount = 0;
	for (new i = 0; i != MAX_TWEET; i ++)
    {
        if(tweetData[i][twExists])
        {
			tmpcount++;
		}
	}
	return tmpcount;
}

TwitterResetLog()
{
	for (new i = 0; i != MAX_TWEET; i ++)
    {
        if(tweetData[i][twExists])
        {
            tweetData[i][twExists] = false;
            tweetData[i][twType] = -1;
            tweetData[i][twjam] = 0;
            tweetData[i][twmenit] = 0;
            
            tweetData[i][twText] = 0;
            tweetData[i][twUsername] = 0;

			Iter_Remove(pagetweet, i);
		}
	}
}

Tweet_Add(playerid, const text[], type)
{
    if(GetTwitterLog() > 48)
	{
		TwitterResetLog();
	}
    for (new i = 0; i != MAX_TWEET; i ++)
    {
        if(!tweetData[i][twExists])
        {
            new hour,minuite,second;
            new day,month,year;
            getdate(year, month, day);
            gettime(hour,minuite,second);

            tweetData[i][twExists] = true;
            tweetData[i][twType] = type;
            tweetData[i][twjam] = hour;
            tweetData[i][twmenit] = minuite;
            tweetData[i][twPhone] = AccountData[playerid][pPhone];
            
            strpack(tweetData[i][twText], text, 128 char);
            format(tweetData[i][twUsername], 32, "%s", AccountData[playerid][pName]);
			Iter_Add(pagetweet, i);
            return i;
        }
    }
    return -1;
}
Halaman1(page, limit)
{
    if(page <= 0) page = 1;
	return (page - 1) * limit;
}

Halaman2(page, total, limit)
{
    new pos = page * limit;
    pos = (pos >= total) ? (total) : (pos);
    return pos;
}

Max_Page(total, limit)
{
    return ((total - 1) / limit) + 1;
}

PageMenu(playerid)
{
    new index, mstr[64], lstr[128], count = 0;

	new hal1, hal2;
	hal1 = Halaman1(listtwitter[playerid], HUD_LISTE_ICERIK);
    hal2 = Halaman2(listtwitter[playerid], Iter_Count(pagetweet), HUD_LISTE_ICERIK);

    for(new l = 0; l < 12; l++)
    {
        PlayerTextDrawHide(playerid, SVRP_TwitterPageTD[playerid][l]);
    }

    new result = 0;
	for(new i = hal1, j = 0; i < hal2; i++, j++)
    {
		strunpack(mstr, tweetData[i][twText]);

        index = Iter_Index(pagetweet, i);
        if(index == gIndex)
        {
            //1
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //2
            result++;
            format(lstr, sizeof(lstr), "%s", tweetData[index][twUsername]);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //3
            result++;
            format(lstr, sizeof(lstr), "%s", mstr);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //4
            result++;
            format(lstr, sizeof(lstr), "%02d:%02d", tweetData[index][twjam], tweetData[index][twmenit]);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

			count++;
            result++;
        }
        else
        {
            //3
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //4
            result++;
            format(lstr, sizeof(lstr), "%s", tweetData[index][twUsername]);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //5
            result++;
            format(lstr, sizeof(lstr), "%s", mstr);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

            //6
            result++;
            format(lstr, sizeof(lstr), "%02d:%02d", tweetData[index][twjam], tweetData[index][twmenit]);
            PlayerTextDrawSetString(playerid, SVRP_TwitterPageTD[playerid][result], lstr);
            PlayerTextDrawShow(playerid, SVRP_TwitterPageTD[playerid][result]);

			count++;
            result++;
        }
        twList[playerid][j] = index;
    }

    PlayerTextDrawHide(playerid, SVRP_TwitterHomePageTD[playerid][1]);
    PlayerTextDrawHide(playerid, SVRP_TwitterHomePageTD[playerid][7]);
    PlayerTextDrawHide(playerid, SVRP_TwitterHomePageTD[playerid][2]);
    PlayerTextDrawHide(playerid, SVRP_TwitterHomePageTD[playerid][8]);

    if(count > 2)
    {
        PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][2]);
        PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][8]);
    }
    if(listtwitter[playerid] > 1)
    {
        PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][1]);
        PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][7]);
    }
    return 1;
}

#include <YSI_Coding\y_hooks>
hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    switch(dialogid)
    {
        case DIALOG_TWEET_CREATE_INPUT:
        {
            if(response)
            {
                if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWEET_CREATE_INPUT, DIALOG_STYLE_INPUT, "Server {FF0000}/{FFFFFF}/ Post Tweet", "Tulis yang ingin kamu post dibawah ini:\n\n"RED_E"Gunakan media sosial dengan bijak!", "Input", "Keluar");

                // Decide about multi-line msgs
                strcpy(tweet, inputtext);
                new i = -1;
                new line[512];
                if(strlen(tweet) > 70)
                {
                    i = strfind(tweet, " ", false, 60);
                    if(i > 80 || i == -1) i = 70;

                    // store the second line text
                    line = " ";
                    strcat(line, tweet[i]);

                    // delete the rest from msg
                    tweet[i] = EOS;
                }

                Tweet_Add(playerid, inputtext, AccountData[playerid][pTweetType]);
                
                AccountData[playerid][pTweetType] = 0;
                PageMenu(playerid);
            }
        }
	}
	return 1;
}