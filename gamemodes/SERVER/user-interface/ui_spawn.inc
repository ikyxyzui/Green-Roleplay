#include <YSI_Coding\y_hooks>

new PlayerText: SpawnSelect[MAX_PLAYERS][23];

hook OnPlayerConnect(playerid)
{
    SpawnSelect[playerid][0] = CreatePlayerTextDraw(playerid, 255.000, 154.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][0], 128.000, 130.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][0], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][0], 438578868);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][0], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][0], 1);

    SpawnSelect[playerid][1] = CreatePlayerTextDraw(playerid, 255.000, 158.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][1], 128.000, 27.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][1], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][1], 438578688);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][1], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, SpawnSelect[playerid][1], 1);

    SpawnSelect[playerid][2] = CreatePlayerTextDraw(playerid, 255.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][2], 128.000, 27.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][2], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][2], 438578688);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][2], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, SpawnSelect[playerid][2], 1);

    SpawnSelect[playerid][3] = CreatePlayerTextDraw(playerid, 255.000, 226.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][3], 128.000, 27.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][3], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][3], 438578688);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][3], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, SpawnSelect[playerid][3], 1);

    SpawnSelect[playerid][4] = CreatePlayerTextDraw(playerid, 255.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][4], 128.000, 27.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][4], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][4], 438578688);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][4], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, SpawnSelect[playerid][4], 1);

    SpawnSelect[playerid][5] = CreatePlayerTextDraw(playerid, 255.000, 218.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][5], 42.000, 1.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][5], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][5], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][5], 1);

    SpawnSelect[playerid][6] = CreatePlayerTextDraw(playerid, 304.000, 214.000, "PROPERTY");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][6], 0.150, 0.898);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][6], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][6], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][6], 2);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][6], 1);

    SpawnSelect[playerid][7] = CreatePlayerTextDraw(playerid, 341.000, 218.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][7], 42.000, 1.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][7], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][7], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][7], 1);

    SpawnSelect[playerid][8] = CreatePlayerTextDraw(playerid, 302.000, 164.000, "Bandara");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][8], 0.218, 0.999);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][8], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][8], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][8], 1);

    SpawnSelect[playerid][9] = CreatePlayerTextDraw(playerid, 299.000, 193.000, "Pelabuhan");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][9], 0.218, 0.999);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][9], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][9], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][9], 1);

    SpawnSelect[playerid][10] = CreatePlayerTextDraw(playerid, 306.000, 235.000, "Rumah");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][10], 0.218, 0.999);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][10], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][10], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][10], 1);

    SpawnSelect[playerid][11] = CreatePlayerTextDraw(playerid, 294.000, 263.000, "Faction");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][11], 0.218, 0.999);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][11], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][11], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][11], 1);

    SpawnSelect[playerid][12] = CreatePlayerTextDraw(playerid, 255.000, 286.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][12], 128.000, 27.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][12], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][12], 461064191);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][12], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][12], 1);
    PlayerTextDrawSetSelectable(playerid, SpawnSelect[playerid][12], 1);

    SpawnSelect[playerid][13] = CreatePlayerTextDraw(playerid, 318.000, 295.000, "Last_Locations");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][13], 0.218, 0.999);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][13], 2);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][13], 150);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][13], 1);

    SpawnSelect[playerid][14] = CreatePlayerTextDraw(playerid, 297.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][14], 4.000, 5.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][14], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][14], 12582911);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][14], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][14], 1);

    SpawnSelect[playerid][15] = CreatePlayerTextDraw(playerid, 297.000, 133.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][15], 5.000, 11.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][15], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][15], 12582911);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][15], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][15], 1);

    SpawnSelect[playerid][16] = CreatePlayerTextDraw(playerid, 305.000, 133.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][16], 2.000, 18.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][16], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][16], 12582911);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][16], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][16], 1);

    SpawnSelect[playerid][17] = CreatePlayerTextDraw(playerid, 298.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][17], 4.000, 5.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][17], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][17], 1027497471);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][17], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][17], 1);

    SpawnSelect[playerid][18] = CreatePlayerTextDraw(playerid, 298.000, 133.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][18], 4.000, 11.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][18], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][18], 1027497471);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][18], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][18], 1);

    SpawnSelect[playerid][19] = CreatePlayerTextDraw(playerid, 306.000, 133.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][19], 4.000, 18.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][19], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][19], 1027497471);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][19], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][19], 1);

    SpawnSelect[playerid][20] = CreatePlayerTextDraw(playerid, 301.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][20], 7.000, 3.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][20], 1);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][20], 1027497471);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][20], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][20], 1);

    SpawnSelect[playerid][21] = CreatePlayerTextDraw(playerid, 327.000, 133.000, "NEWPIXEL");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][21], 0.199, 1.098);
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][21], 2.000, 7.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][21], 2);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][21], 1768516095);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][21], 1);

    SpawnSelect[playerid][22] = CreatePlayerTextDraw(playerid, 324.000, 143.000, "ROLEPLAY");
    PlayerTextDrawLetterSize(playerid, SpawnSelect[playerid][22], 0.158, 0.697);
    PlayerTextDrawTextSize(playerid, SpawnSelect[playerid][22], 0.000, 3.000);
    PlayerTextDrawAlignment(playerid, SpawnSelect[playerid][22], 2);
    PlayerTextDrawColor(playerid, SpawnSelect[playerid][22], -1448498689);
    PlayerTextDrawSetShadow(playerid, SpawnSelect[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, SpawnSelect[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, SpawnSelect[playerid][22], 255);
    PlayerTextDrawFont(playerid, SpawnSelect[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, SpawnSelect[playerid][22], 1);
}

stock SpawnMenu(playerid, bool: show = true)
{
    if(show == true)
    {
        forex(i, 14)
        {
            PlayerTextDrawShow(playerid, SpawnSelect[playerid][i]);
        }
        SelectTextDraw(playerid, -1);
    }
    else
    {
        forex(i, 14)
        {
            PlayerTextDrawHide(playerid, SpawnSelect[playerid][i]);
        }
        AccountData[playerid][playerClickSpawn] = 1;
        CancelSelectTextDraw(playerid);
    }
	return 1;
}