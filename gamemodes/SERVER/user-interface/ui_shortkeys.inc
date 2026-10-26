#include <YSI\y_hooks>

new PlayerText:ChaxwShorKEY[MAX_PLAYERS][12];

hook OnPlayerConnect(playerid)
{
    ChaxwShorKEY[playerid][0] = CreatePlayerTextDraw(playerid, 10.000000, 211.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][0], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][0], 77.000000, 30.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][0], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][0], 0);

	ChaxwShorKEY[playerid][1] = CreatePlayerTextDraw(playerid, 1.000000, 207.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][1], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][1], 17.500000, 22.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][1], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][1], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][1], 0);

	ChaxwShorKEY[playerid][2] = CreatePlayerTextDraw(playerid, 1.000000, 223.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][2], 17.000000, 22.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][2], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][2], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][2], 0);

	ChaxwShorKEY[playerid][3] = CreatePlayerTextDraw(playerid, 78.000000, 207.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][3], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][3], 18.500000, 22.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][3], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][3], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][3], 0);

	ChaxwShorKEY[playerid][4] = CreatePlayerTextDraw(playerid, 78.000000, 223.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][4], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][4], 18.500000, 22.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][4], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][4], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][4], 0);

	ChaxwShorKEY[playerid][5] = CreatePlayerTextDraw(playerid, 4.000000, 218.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][5], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][5], 89.500000, 17.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][5], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][5], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][5], 0);

	ChaxwShorKEY[playerid][6] = CreatePlayerTextDraw(playerid, 10.000000, 241.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][6], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][6], 78.000000, 1.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][6], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][6], -59996673);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][6], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][6], 0);

	ChaxwShorKEY[playerid][7] = CreatePlayerTextDraw(playerid, 5.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][7], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][7], 18.000000, 20.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][7], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][7], -59996673);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][7], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][7], 0);

	ChaxwShorKEY[playerid][8] = CreatePlayerTextDraw(playerid, 10.000000, 214.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][8], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][8], 5.000000, 6.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][8], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][8], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][8], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][8], 0);

	ChaxwShorKEY[playerid][9] = CreatePlayerTextDraw(playerid, 14.000000, 215.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][9], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][9], 5.000000, 6.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][9], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][9], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][9], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][9], 0);

	ChaxwShorKEY[playerid][10] = CreatePlayerTextDraw(playerid, 11.000000, 219.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][10], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][10], 5.000000, 6.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][10], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][10], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][10], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][10], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][10], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][10], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][10], 0);

	ChaxwShorKEY[playerid][11] = CreatePlayerTextDraw(playerid, 24.000000, 216.000000, "ALT untuk akses garansi umum");
	PlayerTextDrawFont(playerid, ChaxwShorKEY[playerid][11], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShorKEY[playerid][11], 0.145833, 0.949998);
	PlayerTextDrawTextSize(playerid, ChaxwShorKEY[playerid][11], 92.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShorKEY[playerid][11], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShorKEY[playerid][11], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShorKEY[playerid][11], 1);
	PlayerTextDrawColor(playerid, ChaxwShorKEY[playerid][11], 1296911871);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShorKEY[playerid][11], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShorKEY[playerid][11], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShorKEY[playerid][11], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShorKEY[playerid][11], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShorKEY[playerid][11], 0);
}

ShowNotifBox(playerid, string[]) 
{
	if(AccountData[playerid][pShowNotifBox]) 
    {
		for(new x = 0; x < 12; x ++) PlayerTextDrawHide(playerid, ChaxwShorKEY[playerid][x]);
	}
    PlayerPlaySound(playerid, 30801, 0.0, 0.0, 0.0);
	PlayerTextDrawSetString(playerid, ChaxwShorKEY[playerid][11], string);
	for(new x = 0; x < 12; x ++) PlayerTextDrawShow(playerid, ChaxwShorKEY[playerid][x]);

	AccountData[playerid][pShowNotifBox] = true;
}

HideNotifBox(playerid) 
{
	if (!AccountData[playerid][pShowNotifBox])
	    return 0;
		
	AccountData[playerid][pShowNotifBox] = false;
	for(new x = 0; x < 12; x ++) PlayerTextDrawHide(playerid, ChaxwShorKEY[playerid][x]);
	return 1;
}