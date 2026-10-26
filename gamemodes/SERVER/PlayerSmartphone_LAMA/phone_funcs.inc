#include <YSI\y_hooks>
new PlayerText: CloseCallButton[MAX_PLAYERS];
new PlayerText: ContactNameTD[MAX_PLAYERS];
new PlayerText: StatusDialingTD[MAX_PLAYERS];
new PlayerText: RedButtonoutComingCall[MAX_PLAYERS];
new PlayerText: RedButtonincomingCall[MAX_PLAYERS];
new PlayerText: GreenButtonincomingCall[MAX_PLAYERS];
new PlayerText: Infinite_phone[MAX_PLAYERS][65];
new PlayerText: infinite_telfon[MAX_PLAYERS][21];
new PlayerText: infinite_login[MAX_PLAYERS][32];
new PlayerText: infinite_flecapv2[MAX_PLAYERS][33];
new PlayerText: phone_info[MAX_PLAYERS][39];

phoneinfoload(playerid)
{
    phone_info[playerid][0] = CreatePlayerTextDraw(playerid, 534.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][0], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][0], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][0], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][0], 1);

    phone_info[playerid][1] = CreatePlayerTextDraw(playerid, 613.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][1], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][1], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][1], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][1], 1);

    phone_info[playerid][2] = CreatePlayerTextDraw(playerid, 613.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][2], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][2], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][2], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][2], 1);

    phone_info[playerid][3] = CreatePlayerTextDraw(playerid, 534.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][3], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][3], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][3], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][3], 1);

    phone_info[playerid][4] = CreatePlayerTextDraw(playerid, 546.000, 178.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][4], 78.000, 242.500);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][4], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][4], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][4], 1);

    phone_info[playerid][5] = CreatePlayerTextDraw(playerid, 537.500, 186.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][5], 93.800, 227.500);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][5], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][5], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][5], 1);

    phone_info[playerid][6] = CreatePlayerTextDraw(playerid, 536.000, 252.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][6], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][6], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][6], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][6], 1);

    phone_info[playerid][7] = CreatePlayerTextDraw(playerid, 536.000, 227.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][7], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][7], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][7], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][7], 1);

    phone_info[playerid][8] = CreatePlayerTextDraw(playerid, 631.000, 235.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][8], 2.000, 30.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][8], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][8], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][8], 1);

    phone_info[playerid][9] = CreatePlayerTextDraw(playerid, 535.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][9], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][9], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][9], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][9], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][9], 1);

    phone_info[playerid][10] = CreatePlayerTextDraw(playerid, 612.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][10], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][10], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][10], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][10], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][10], 1);

    phone_info[playerid][11] = CreatePlayerTextDraw(playerid, 612.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][11], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][11], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][11], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][11], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][11], 1);

    phone_info[playerid][12] = CreatePlayerTextDraw(playerid, 535.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][12], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][12], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][12], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][12], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][12], 1);

    phone_info[playerid][13] = CreatePlayerTextDraw(playerid, 546.000, 179.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][13], 78.000, 240.500);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][13], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][13], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][13], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][13], 1);

    phone_info[playerid][14] = CreatePlayerTextDraw(playerid, 573.000, 391.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][14], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][14], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][14], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, phone_info[playerid][14], 1);

    phone_info[playerid][15] = CreatePlayerTextDraw(playerid, 574.000, 392.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][15], 21.000, 26.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][15], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][15], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][15], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][15], 1);

    phone_info[playerid][16] = CreatePlayerTextDraw(playerid, 536.000, 205.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][16], 2.000, 16.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][16], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][16], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][16], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][16], 1);

    phone_info[playerid][17] = CreatePlayerTextDraw(playerid, 568.000, 179.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][17], 32.000, 6.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][17], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][17], 255);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][17], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][17], 1);

    phone_info[playerid][18] = CreatePlayerTextDraw(playerid, 539.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][18], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][18], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][18], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][18], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][18], 1);

    phone_info[playerid][19] = CreatePlayerTextDraw(playerid, 613.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][19], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][19], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][19], 202116351);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][19], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][19], 1);

    phone_info[playerid][20] = CreatePlayerTextDraw(playerid, 546.000, 200.000, "Details");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][20], 0.180, 1.099);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][20], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][20], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][20], 1);

    phone_info[playerid][21] = CreatePlayerTextDraw(playerid, 543.000, 223.000, "Info");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][21], 0.150, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][21], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][21], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][21], 1);

    phone_info[playerid][22] = CreatePlayerTextDraw(playerid, 544.000, 236.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][22], 79.000, 19.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][22], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][22], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][22], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][22], 1);

    phone_info[playerid][23] = CreatePlayerTextDraw(playerid, 544.000, 260.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][23], 79.000, 19.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][23], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][23], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][23], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][23], 1);

    phone_info[playerid][24] = CreatePlayerTextDraw(playerid, 544.000, 283.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][24], 79.000, 17.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][24], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][24], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][24], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][24], 1);

    phone_info[playerid][25] = CreatePlayerTextDraw(playerid, 544.000, 304.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][25], 79.000, 17.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][25], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][25], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][25], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][25], 1);

    phone_info[playerid][26] = CreatePlayerTextDraw(playerid, 544.000, 336.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][26], 79.000, 17.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][26], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][26], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][26], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][26], 1);

    phone_info[playerid][27] = CreatePlayerTextDraw(playerid, 544.000, 357.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, phone_info[playerid][27], 79.000, 17.000);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][27], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][27], 471604479);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][27], 255);
    PlayerTextDrawFont(playerid, phone_info[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][27], 1);

    phone_info[playerid][28] = CreatePlayerTextDraw(playerid, 548.000, 242.000, "Wallet:");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][28], 0.119, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][28], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][28], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][28], 1);

    phone_info[playerid][29] = CreatePlayerTextDraw(playerid, 547.000, 265.000, "Bank Balance:");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][29], 0.119, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][29], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][29], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][29], 1);

    phone_info[playerid][30] = CreatePlayerTextDraw(playerid, 547.000, 287.000, "Bank id:");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][30], 0.119, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][30], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][30], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][30], 1);

    phone_info[playerid][31] = CreatePlayerTextDraw(playerid, 547.000, 308.000, "Phone Number:");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][31], 0.100, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][31], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][31], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][31], 1);

    phone_info[playerid][32] = CreatePlayerTextDraw(playerid, 545.000, 328.000, "Jobs");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][32], 0.129, 0.899);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][32], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][32], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][32], 1);

    phone_info[playerid][33] = CreatePlayerTextDraw(playerid, 573.000, 340.000, "Unempoyerd");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][33], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][33], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][33], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][33], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][33], 1);

    phone_info[playerid][34] = CreatePlayerTextDraw(playerid, 581.000, 361.000, "N/A");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][34], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][34], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][34], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][34], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][34], 1);

    phone_info[playerid][35] = CreatePlayerTextDraw(playerid, 604.000, 241.000, "$500");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][35], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][35], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][35], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][35], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][35], 1);

    phone_info[playerid][36] = CreatePlayerTextDraw(playerid, 604.000, 265.000, "$500");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][36], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][36], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][36], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][36], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][36], 1);

    phone_info[playerid][37] = CreatePlayerTextDraw(playerid, 604.000, 287.000, "45245");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][37], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][37], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][37], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][37], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][37], 1);

    phone_info[playerid][38] = CreatePlayerTextDraw(playerid, 601.000, 308.000, "4570947");
    PlayerTextDrawLetterSize(playerid, phone_info[playerid][38], 0.119, 0.999);
    PlayerTextDrawAlignment(playerid, phone_info[playerid][38], 1);
    PlayerTextDrawColor(playerid, phone_info[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, phone_info[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, phone_info[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, phone_info[playerid][38], 150);
    PlayerTextDrawFont(playerid, phone_info[playerid][38], 1);
    PlayerTextDrawSetProportional(playerid, phone_info[playerid][38], 1);
}

phoneinfoUnload(playerid)
{
    for(new i; i < 39; i++) PlayerTextDrawDestroy(playerid, phone_info[playerid][i]);

    return 1;
}

ATRPhoneLoad(playerid){
    Infinite_phone[playerid][0] = CreatePlayerTextDraw(playerid, 534.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][0], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][0], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][0], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][0], 1);

    Infinite_phone[playerid][1] = CreatePlayerTextDraw(playerid, 613.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][1], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][1], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][1], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][1], 1);

    Infinite_phone[playerid][2] = CreatePlayerTextDraw(playerid, 613.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][2], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][2], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][2], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][2], 1);

    Infinite_phone[playerid][3] = CreatePlayerTextDraw(playerid, 534.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][3], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][3], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][3], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][3], 1);

    Infinite_phone[playerid][4] = CreatePlayerTextDraw(playerid, 546.000, 178.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][4], 78.000, 242.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][4], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][4], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][4], 1);

    Infinite_phone[playerid][5] = CreatePlayerTextDraw(playerid, 537.500, 186.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][5], 93.800, 227.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][5], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][5], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][5], 1);

    Infinite_phone[playerid][6] = CreatePlayerTextDraw(playerid, 536.000, 252.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][6], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][6], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][6], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][6], 1);

    Infinite_phone[playerid][7] = CreatePlayerTextDraw(playerid, 536.000, 227.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][7], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][7], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][7], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][7], 1);

    Infinite_phone[playerid][8] = CreatePlayerTextDraw(playerid, 631.000, 235.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][8], 2.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][8], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][8], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][8], 1);

    Infinite_phone[playerid][9] = CreatePlayerTextDraw(playerid, 535.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][9], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][9], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][9], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][9], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][9], 1);

    Infinite_phone[playerid][10] = CreatePlayerTextDraw(playerid, 612.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][10], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][10], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][10], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][10], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][10], 1);

    Infinite_phone[playerid][11] = CreatePlayerTextDraw(playerid, 612.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][11], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][11], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][11], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][11], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][11], 1);

    Infinite_phone[playerid][12] = CreatePlayerTextDraw(playerid, 535.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][12], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][12], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][12], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][12], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][12], 1);

    Infinite_phone[playerid][13] = CreatePlayerTextDraw(playerid, 546.000, 179.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][13], 78.000, 240.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][13], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][13], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][13], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][13], 1);

    Infinite_phone[playerid][14] = CreatePlayerTextDraw(playerid, 573.000, 391.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][14], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][14], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][14], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][14], 1);

    Infinite_phone[playerid][15] = CreatePlayerTextDraw(playerid, 574.000, 392.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][15], 21.000, 26.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][15], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][15], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][15], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][15], 1);

    Infinite_phone[playerid][16] = CreatePlayerTextDraw(playerid, 536.000, 205.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][16], 2.000, 16.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][16], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][16], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][16], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][16], 1);

    Infinite_phone[playerid][17] = CreatePlayerTextDraw(playerid, 568.000, 179.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][17], 32.000, 6.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][17], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][17], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][17], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][17], 1);

    Infinite_phone[playerid][18] = CreatePlayerTextDraw(playerid, 539.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][18], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][18], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][18], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][18], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][18], 1);

    Infinite_phone[playerid][19] = CreatePlayerTextDraw(playerid, 613.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][19], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][19], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][19], 6911);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][19], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][19], 1);

    Infinite_phone[playerid][20] = CreatePlayerTextDraw(playerid, 541.000, 235.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][20], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][20], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][20], 16423679);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][20], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][20], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][20], 1);

    Infinite_phone[playerid][21] = CreatePlayerTextDraw(playerid, 562.000, 235.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][21], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][21], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][21], -849584897);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][21], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][21], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][21], 1);

    Infinite_phone[playerid][22] = CreatePlayerTextDraw(playerid, 583.000, 235.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][22], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][22], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][22], 852308735);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][22], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][22], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][22], 1);

    Infinite_phone[playerid][23] = CreatePlayerTextDraw(playerid, 603.000, 235.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][23], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][23], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][23], 16744447);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][23], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][23], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][23], 1);

    Infinite_phone[playerid][24] = CreatePlayerTextDraw(playerid, 541.000, 263.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][24], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][24], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][24], 1768516095);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][24], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][24], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][24], 1);

    Infinite_phone[playerid][25] = CreatePlayerTextDraw(playerid, 562.000, 263.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][25], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][25], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][25], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][25], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][25], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][25], 1);

    Infinite_phone[playerid][26] = CreatePlayerTextDraw(playerid, 584.000, 263.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][26], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][26], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][26], 1211993087);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][26], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][26], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][26], 1);

    Infinite_phone[playerid][27] = CreatePlayerTextDraw(playerid, 604.000, 263.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][27], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][27], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][27], 8388863);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][27], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][27], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][27], 1);

    Infinite_phone[playerid][28] = CreatePlayerTextDraw(playerid, 542.000, 366.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][28], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][28], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][28], -1962934017);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][28], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][28], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][28], 1);

    Infinite_phone[playerid][29] = CreatePlayerTextDraw(playerid, 563.000, 366.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][29], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][29], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][29], -602653441);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][29], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][29], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][29], 1);

    Infinite_phone[playerid][30] = CreatePlayerTextDraw(playerid, 583.000, 366.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][30], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][30], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][30], 1182971135);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][30], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][30], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][30], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][30], 1);

    Infinite_phone[playerid][31] = CreatePlayerTextDraw(playerid, 603.000, 366.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][31], 25.000, 30.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][31], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][31], -12254977);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][31], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][31], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][31], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][31], 1);

    Infinite_phone[playerid][32] = CreatePlayerTextDraw(playerid, 543.000, 237.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][32], 21.000, 26.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][32], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][32], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][32], 1);

    Infinite_phone[playerid][33] = CreatePlayerTextDraw(playerid, 552.000, 243.000, "i");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][33], 0.270, 1.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][33], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][33], 16423679);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][33], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][33], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][33], 1);

    Infinite_phone[playerid][34] = CreatePlayerTextDraw(playerid, 571.000, 243.000, "+");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][34], 0.300, 1.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][34], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][34], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][34], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][34], 1);

    Infinite_phone[playerid][35] = CreatePlayerTextDraw(playerid, 592.000, 242.000, "(");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][35], 0.300, 1.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][35], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][35], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][35], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][35], 1);

    Infinite_phone[playerid][36] = CreatePlayerTextDraw(playerid, 598.000, 247.000, "(");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][36], -0.128, 0.598);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][36], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][36], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][36], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][36], 1);

    Infinite_phone[playerid][37] = CreatePlayerTextDraw(playerid, 599.000, 247.000, "(");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][37], -0.128, 0.598);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][37], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][37], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][37], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][37], 1);

    Infinite_phone[playerid][38] = CreatePlayerTextDraw(playerid, 610.000, 244.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][38], 12.000, 12.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][38], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][38], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][38], 1);

    Infinite_phone[playerid][39] = CreatePlayerTextDraw(playerid, 611.000, 251.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][39], 4.000, 4.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][39], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][39], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][39], 1);

    Infinite_phone[playerid][40] = CreatePlayerTextDraw(playerid, 573.000, 273.000, "X");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][40], 0.180, 0.999);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][40], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][40], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][40], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][40], 1);

    Infinite_phone[playerid][41] = CreatePlayerTextDraw(playerid, 614.000, 277.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][41], 6.000, -1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][41], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][41], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][41], 1);

    Infinite_phone[playerid][42] = CreatePlayerTextDraw(playerid, 614.000, 278.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][42], 6.000, 3.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][42], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][42], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][42], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][42], 1);

    Infinite_phone[playerid][43] = CreatePlayerTextDraw(playerid, 615.000, 280.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][43], 1.000, -1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][43], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][43], 255);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][43], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][43], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][43], 1);

    Infinite_phone[playerid][44] = CreatePlayerTextDraw(playerid, 551.000, 377.000, "HUD:radar_waypoint");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][44], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][44], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][44], -16776961);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][44], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][44], 1);

    Infinite_phone[playerid][45] = CreatePlayerTextDraw(playerid, 573.000, 381.000, "V");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][45], 0.219, -0.500);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][45], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][45], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][45], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][45], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][45], 1);

    Infinite_phone[playerid][46] = CreatePlayerTextDraw(playerid, 573.000, 380.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][46], 5.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][46], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][46], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][46], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][46], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][46], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][46], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][46], 1);

    Infinite_phone[playerid][47] = CreatePlayerTextDraw(playerid, 573.000, 382.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][47], 5.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][47], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][47], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][47], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][47], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][47], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][47], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][47], 1);

    Infinite_phone[playerid][48] = CreatePlayerTextDraw(playerid, 576.000, 384.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][48], 2.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][48], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][48], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][48], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][48], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][48], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][48], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][48], 1);

    Infinite_phone[playerid][49] = CreatePlayerTextDraw(playerid, 573.000, 384.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][49], 2.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][49], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][49], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][49], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][49], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][49], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][49], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][49], 1);

    Infinite_phone[playerid][50] = CreatePlayerTextDraw(playerid, 613.000, 376.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][50], 5.000, 10.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][50], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][50], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][50], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][50], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][50], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][50], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][50], 1);

    Infinite_phone[playerid][51] = CreatePlayerTextDraw(playerid, 612.000, 378.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][51], 5.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][51], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][51], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][51], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][51], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][51], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][51], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][51], 1);

    Infinite_phone[playerid][52] = CreatePlayerTextDraw(playerid, 612.000, 381.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][52], 5.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][52], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][52], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][52], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][52], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][52], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][52], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][52], 1);

    Infinite_phone[playerid][53] = CreatePlayerTextDraw(playerid, 614.000, 378.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][53], 3.000, 4.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][53], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][53], -12254977);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][53], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][53], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][53], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][53], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][53], 1);

    Infinite_phone[playerid][54] = CreatePlayerTextDraw(playerid, 613.000, 381.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][54], 5.000, 4.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][54], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][54], -12254977);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][54], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][54], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][54], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][54], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][54], 1);

    Infinite_phone[playerid][55] = CreatePlayerTextDraw(playerid, 550.000, 276.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][55], 4.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][55], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][55], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][55], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][55], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][55], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][55], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][55], 1);

    Infinite_phone[playerid][56] = CreatePlayerTextDraw(playerid, 550.000, 278.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][56], 3.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][56], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][56], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][56], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][56], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][56], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][56], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][56], 1);

    Infinite_phone[playerid][57] = CreatePlayerTextDraw(playerid, 550.000, 280.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][57], 4.000, 1.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][57], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][57], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][57], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][57], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][57], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][57], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][57], 1);

    Infinite_phone[playerid][58] = CreatePlayerTextDraw(playerid, 554.000, 275.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][58], 5.000, 7.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][58], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][58], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][58], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][58], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][58], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][58], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][58], 1);

    Infinite_phone[playerid][59] = CreatePlayerTextDraw(playerid, 592.000, 377.000, "Ads");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][59], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][59], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][59], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][59], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][59], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][59], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][59], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][59], 1);

    Infinite_phone[playerid][60] = CreatePlayerTextDraw(playerid, 592.000, 275.000, "Trans");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][60], 0.140, 0.699);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][60], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][60], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][60], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][60], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][60], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][60], 0);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][60], 1);

    Infinite_phone[playerid][61] = CreatePlayerTextDraw(playerid, 569.000, 203.000, "05:25");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][61], 0.300, 1.899);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][61], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][61], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][61], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][61], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][61], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][61], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][61], 1);

    Infinite_phone[playerid][62] = CreatePlayerTextDraw(playerid, 565.000, 222.000, "25 Oktober 2023");
    PlayerTextDrawLetterSize(playerid, Infinite_phone[playerid][62], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][62], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][62], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][62], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][62], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][62], 150);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][62], 1);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][62], 1);

    Infinite_phone[playerid][63] = CreatePlayerTextDraw(playerid, 542.000, 289.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][63], 25.000, 28.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][63], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][63], 16744447);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][63], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][63], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][63], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][63], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][63], 1);
    PlayerTextDrawSetSelectable(playerid, Infinite_phone[playerid][63], 1);

    Infinite_phone[playerid][64] = CreatePlayerTextDraw(playerid, 552.000, 298.000, "HUD:radar_impound");
    PlayerTextDrawTextSize(playerid, Infinite_phone[playerid][64], 6.000, 8.000);
    PlayerTextDrawAlignment(playerid, Infinite_phone[playerid][64], 1);
    PlayerTextDrawColor(playerid, Infinite_phone[playerid][64], -1);
    PlayerTextDrawSetShadow(playerid, Infinite_phone[playerid][64], 0);
    PlayerTextDrawSetOutline(playerid, Infinite_phone[playerid][64], 0);
    PlayerTextDrawBackgroundColor(playerid, Infinite_phone[playerid][64], 255);
    PlayerTextDrawFont(playerid, Infinite_phone[playerid][64], 4);
    PlayerTextDrawSetProportional(playerid, Infinite_phone[playerid][64], 1);

}

ATRPhoneUnload(playerid)
{
    for(new i; i < 65; i++) PlayerTextDrawDestroy(playerid, Infinite_phone[playerid][i]);

    return 1;
}


ATRPhoneCallLoad(playerid){

    infinite_telfon[playerid][0] = CreatePlayerTextDraw(playerid, 534.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][0], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][0], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][0], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][0], 1);

    infinite_telfon[playerid][1] = CreatePlayerTextDraw(playerid, 613.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][1], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][1], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][1], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][1], 1);

    infinite_telfon[playerid][2] = CreatePlayerTextDraw(playerid, 613.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][2], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][2], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][2], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][2], 1);

    infinite_telfon[playerid][3] = CreatePlayerTextDraw(playerid, 534.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][3], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][3], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][3], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][3], 1);

    infinite_telfon[playerid][4] = CreatePlayerTextDraw(playerid, 546.000, 178.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][4], 78.000, 242.500);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][4], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][4], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][4], 1);

    infinite_telfon[playerid][5] = CreatePlayerTextDraw(playerid, 537.500, 186.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][5], 93.800, 227.500);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][5], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][5], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][5], 1);

    infinite_telfon[playerid][6] = CreatePlayerTextDraw(playerid, 536.000, 252.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][6], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][6], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][6], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][6], 1);

    infinite_telfon[playerid][7] = CreatePlayerTextDraw(playerid, 536.000, 227.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][7], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][7], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][7], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][7], 1);

    infinite_telfon[playerid][8] = CreatePlayerTextDraw(playerid, 631.000, 235.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][8], 2.000, 30.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][8], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][8], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][8], 1);

    infinite_telfon[playerid][9] = CreatePlayerTextDraw(playerid, 535.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][9], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][9], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][9], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][9], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][9], 1);

    infinite_telfon[playerid][10] = CreatePlayerTextDraw(playerid, 612.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][10], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][10], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][10], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][10], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][10], 1);

    infinite_telfon[playerid][11] = CreatePlayerTextDraw(playerid, 612.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][11], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][11], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][11], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][11], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][11], 1);

    infinite_telfon[playerid][12] = CreatePlayerTextDraw(playerid, 535.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][12], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][12], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][12], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][12], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][12], 1);

    infinite_telfon[playerid][13] = CreatePlayerTextDraw(playerid, 546.000, 179.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][13], 78.000, 240.500);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][13], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][13], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][13], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][13], 1);

    infinite_telfon[playerid][14] = CreatePlayerTextDraw(playerid, 569.000, 242.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][14], 31.000, 22.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][14], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][14], 858993663);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][14], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][14], 1);

    infinite_telfon[playerid][15] = CreatePlayerTextDraw(playerid, 574.000, 392.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][15], 21.000, 26.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][15], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][15], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][15], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][15], 1);

    infinite_telfon[playerid][16] = CreatePlayerTextDraw(playerid, 536.000, 205.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][16], 2.000, 16.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][16], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][16], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][16], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][16], 1);

    infinite_telfon[playerid][17] = CreatePlayerTextDraw(playerid, 568.000, 179.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][17], 32.000, 6.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][17], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][17], 255);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][17], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][17], 1);

    infinite_telfon[playerid][18] = CreatePlayerTextDraw(playerid, 539.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][18], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][18], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][18], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][18], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][18], 1);

    infinite_telfon[playerid][19] = CreatePlayerTextDraw(playerid, 613.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][19], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][19], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][19], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][19], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][19], 1);

    infinite_telfon[playerid][20] = CreatePlayerTextDraw(playerid, 573.000, 219.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_telfon[playerid][20], 22.000, 28.000);
    PlayerTextDrawAlignment(playerid, infinite_telfon[playerid][20], 1);
    PlayerTextDrawColor(playerid, infinite_telfon[playerid][20], 858993663);
    PlayerTextDrawSetShadow(playerid, infinite_telfon[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, infinite_telfon[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_telfon[playerid][20], 255);
    PlayerTextDrawFont(playerid, infinite_telfon[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, infinite_telfon[playerid][20], 1);

    CloseCallButton[playerid] = CreatePlayerTextDraw(playerid, 573.000, 391.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseCallButton[playerid], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, CloseCallButton[playerid], 1);
    PlayerTextDrawColor(playerid, CloseCallButton[playerid], 255);
    PlayerTextDrawSetShadow(playerid, CloseCallButton[playerid], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallButton[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallButton[playerid], 255);
    PlayerTextDrawFont(playerid, CloseCallButton[playerid], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallButton[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, CloseCallButton[playerid], 1);

    ContactNameTD[playerid] = CreatePlayerTextDraw(playerid, 570.000, 264.000, "Raden_Ramadan");
    PlayerTextDrawLetterSize(playerid, ContactNameTD[playerid], 0.119, 0.799);
    PlayerTextDrawAlignment(playerid, ContactNameTD[playerid], 1);
    PlayerTextDrawColor(playerid, ContactNameTD[playerid], 1768516095);
    PlayerTextDrawSetShadow(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, ContactNameTD[playerid], 150);
    PlayerTextDrawFont(playerid, ContactNameTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, ContactNameTD[playerid], 1);

    StatusDialingTD[playerid] = CreatePlayerTextDraw(playerid, 575.000, 272.000, "Berdering..");
    PlayerTextDrawLetterSize(playerid, StatusDialingTD[playerid], 0.119, 0.799);
    PlayerTextDrawAlignment(playerid, StatusDialingTD[playerid], 1);
    PlayerTextDrawColor(playerid, StatusDialingTD[playerid], 1768516095);
    PlayerTextDrawSetShadow(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, StatusDialingTD[playerid], 150);
    PlayerTextDrawFont(playerid, StatusDialingTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, StatusDialingTD[playerid], 1);

    RedButtonoutComingCall[playerid] = CreatePlayerTextDraw(playerid, 572.000, 349.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, RedButtonoutComingCall[playerid], 26.000, 29.000);
    PlayerTextDrawAlignment(playerid, RedButtonoutComingCall[playerid], 1);
    PlayerTextDrawColor(playerid, RedButtonoutComingCall[playerid], -1962934017);
    PlayerTextDrawSetShadow(playerid, RedButtonoutComingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, RedButtonoutComingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, RedButtonoutComingCall[playerid], 255);
    PlayerTextDrawFont(playerid, RedButtonoutComingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, RedButtonoutComingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, RedButtonoutComingCall[playerid], 1);

    RedButtonincomingCall[playerid] = CreatePlayerTextDraw(playerid, 555.000, 355.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, RedButtonincomingCall[playerid], 26.000, 29.000);
    PlayerTextDrawAlignment(playerid, RedButtonincomingCall[playerid], 1);
    PlayerTextDrawColor(playerid, RedButtonincomingCall[playerid], -1962934017);
    PlayerTextDrawSetShadow(playerid, RedButtonincomingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, RedButtonincomingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, RedButtonincomingCall[playerid], 255);
    PlayerTextDrawFont(playerid, RedButtonincomingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, RedButtonincomingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, RedButtonincomingCall[playerid], 1);

    GreenButtonincomingCall[playerid] = CreatePlayerTextDraw(playerid, 590.000, 355.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, GreenButtonincomingCall[playerid], 26.000, 29.000);
    PlayerTextDrawAlignment(playerid, GreenButtonincomingCall[playerid], 1);
    PlayerTextDrawColor(playerid, GreenButtonincomingCall[playerid], 579543807);
    PlayerTextDrawSetShadow(playerid, GreenButtonincomingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, GreenButtonincomingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, GreenButtonincomingCall[playerid], 255);
    PlayerTextDrawFont(playerid, GreenButtonincomingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, GreenButtonincomingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, GreenButtonincomingCall[playerid], 1);

    return 1;
}

ATRPhoneCallUnload(playerid)
{
    for(new i; i < 21; i++) PlayerTextDrawDestroy(playerid, infinite_telfon[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseCallButton[playerid]);
    PlayerTextDrawDestroy(playerid, ContactNameTD[playerid]);
    PlayerTextDrawDestroy(playerid, StatusDialingTD[playerid]);
    PlayerTextDrawDestroy(playerid, RedButtonoutComingCall[playerid]);
    PlayerTextDrawDestroy(playerid, RedButtonincomingCall[playerid]);
    PlayerTextDrawDestroy(playerid, GreenButtonincomingCall[playerid]);
    return 1;
}

ATRPhoneBankLoad(playerid){

    infinite_flecapv2[playerid][0] = CreatePlayerTextDraw(playerid, 534.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][0], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][0], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][0], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][0], 1);

    infinite_flecapv2[playerid][1] = CreatePlayerTextDraw(playerid, 613.000, 174.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][1], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][1], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][1], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][1], 1);

    infinite_flecapv2[playerid][2] = CreatePlayerTextDraw(playerid, 613.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][2], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][2], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][2], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][2], 1);

    infinite_flecapv2[playerid][3] = CreatePlayerTextDraw(playerid, 534.000, 400.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][3], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][3], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][3], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][3], 1);

    infinite_flecapv2[playerid][4] = CreatePlayerTextDraw(playerid, 546.000, 178.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][4], 78.000, 242.500);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][4], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][4], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][4], 1);

    infinite_flecapv2[playerid][5] = CreatePlayerTextDraw(playerid, 537.500, 186.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][5], 93.800, 227.500);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][5], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][5], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][5], 1);

    infinite_flecapv2[playerid][6] = CreatePlayerTextDraw(playerid, 536.000, 252.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][6], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][6], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][6], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][6], 1);

    infinite_flecapv2[playerid][7] = CreatePlayerTextDraw(playerid, 536.000, 227.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][7], 2.000, 21.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][7], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][7], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][7], 1);

    infinite_flecapv2[playerid][8] = CreatePlayerTextDraw(playerid, 631.000, 235.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][8], 2.000, 30.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][8], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][8], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][8], 1);

    infinite_flecapv2[playerid][9] = CreatePlayerTextDraw(playerid, 535.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][9], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][9], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][9], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][9], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][9], 1);

    infinite_flecapv2[playerid][10] = CreatePlayerTextDraw(playerid, 612.000, 175.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][10], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][10], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][10], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][10], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][10], 1);

    infinite_flecapv2[playerid][11] = CreatePlayerTextDraw(playerid, 612.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][11], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][11], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][11], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][11], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][11], 1);

    infinite_flecapv2[playerid][12] = CreatePlayerTextDraw(playerid, 535.000, 399.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][12], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][12], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][12], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][12], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][12], 1);

    infinite_flecapv2[playerid][13] = CreatePlayerTextDraw(playerid, 546.000, 179.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][13], 78.000, 240.500);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][13], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][13], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][13], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][13], 1);

    infinite_flecapv2[playerid][14] = CreatePlayerTextDraw(playerid, 573.000, 391.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][14], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][14], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][14], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, infinite_flecapv2[playerid][14], 1);

    infinite_flecapv2[playerid][15] = CreatePlayerTextDraw(playerid, 574.000, 392.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][15], 21.000, 26.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][15], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][15], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][15], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][15], 1);

    infinite_flecapv2[playerid][16] = CreatePlayerTextDraw(playerid, 536.000, 205.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][16], 2.000, 16.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][16], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][16], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][16], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][16], 1);

    infinite_flecapv2[playerid][17] = CreatePlayerTextDraw(playerid, 568.000, 179.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][17], 32.000, 6.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][17], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][17], 255);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][17], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][17], 1);

    infinite_flecapv2[playerid][18] = CreatePlayerTextDraw(playerid, 539.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][18], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][18], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][18], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][18], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][18], 1);

    infinite_flecapv2[playerid][19] = CreatePlayerTextDraw(playerid, 613.000, 185.300, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][19], 17.000, 224.500);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][19], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][19], 471604479);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][19], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][19], 1);

    infinite_flecapv2[playerid][20] = CreatePlayerTextDraw(playerid, 546.000, 200.000, "Fl");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][20], 0.240, 1.299);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][20], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][20], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][20], 1);

    infinite_flecapv2[playerid][21] = CreatePlayerTextDraw(playerid, 553.000, 200.000, "ee");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][21], 0.240, 1.299);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][21], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][21], 579543807);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][21], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][21], 1);

    infinite_flecapv2[playerid][22] = CreatePlayerTextDraw(playerid, 563.000, 200.000, "ca");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][22], 0.240, 1.299);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][22], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][22], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][22], 1);

    infinite_flecapv2[playerid][23] = CreatePlayerTextDraw(playerid, 573.000, 201.000, "Bank");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][23], 0.190, 1.099);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][23], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][23], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][23], 1);

    infinite_flecapv2[playerid][24] = CreatePlayerTextDraw(playerid, 545.000, 212.000, "Transfer money with cause.");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][24], 0.109, 0.599);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][24], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][24], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][24], 1);

    infinite_flecapv2[playerid][25] = CreatePlayerTextDraw(playerid, 545.000, 229.000, "My Total Balence");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][25], 0.109, 0.599);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][25], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][25], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][25], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][25], 1);

    infinite_flecapv2[playerid][26] = CreatePlayerTextDraw(playerid, 545.000, 236.000, "$500");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][26], 0.129, 0.799);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][26], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][26], 579543807);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][26], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][26], 1);

    infinite_flecapv2[playerid][27] = CreatePlayerTextDraw(playerid, 547.000, 259.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][27], 74.000, 32.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][27], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][27], 858993663);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][27], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][27], 1);

    infinite_flecapv2[playerid][28] = CreatePlayerTextDraw(playerid, 547.000, 297.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, infinite_flecapv2[playerid][28], 74.000, 18.000);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][28], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][28], 858993663);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][28], 255);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][28], 1);
    PlayerTextDrawSetSelectable(playerid, infinite_flecapv2[playerid][28], 1);

    infinite_flecapv2[playerid][29] = CreatePlayerTextDraw(playerid, 561.000, 261.000, "Sending Money From");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][29], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][29], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][29], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][29], 1);

    infinite_flecapv2[playerid][30] = CreatePlayerTextDraw(playerid, 553.000, 267.000, "Plese, re check all info  pet-in");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][30], 0.119, 0.599);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][30], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][30], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][30], 1);

    infinite_flecapv2[playerid][31] = CreatePlayerTextDraw(playerid, 553.000, 273.000, "bases inside");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][31], 0.119, 0.599);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][31], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][31], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][31], 1);

    infinite_flecapv2[playerid][32] = CreatePlayerTextDraw(playerid, 573.000, 301.000, "Transfer");
    PlayerTextDrawLetterSize(playerid, infinite_flecapv2[playerid][32], 0.160, 0.799);
    PlayerTextDrawAlignment(playerid, infinite_flecapv2[playerid][32], 1);
    PlayerTextDrawColor(playerid, infinite_flecapv2[playerid][32], 1768516095);
    PlayerTextDrawSetShadow(playerid, infinite_flecapv2[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, infinite_flecapv2[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, infinite_flecapv2[playerid][32], 150);
    PlayerTextDrawFont(playerid, infinite_flecapv2[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, infinite_flecapv2[playerid][32], 1);


    return 1;
}

ATRPhoneBankUnload(playerid)
{
    for(new i; i < 33; i++) PlayerTextDrawDestroy(playerid, infinite_flecapv2[playerid][i]);
    return 1;
}


hook OnPlayerConnect(playerid)
{
    if (IsValidDynamicMapIcon(SharelocSender[playerid]))
    {
        DestroyDynamicMapIcon(SharelocSender[playerid]);
        SharelocSender[playerid] = INVALID_STREAMER_ID;
    }

    ATRPhoneLoad(playerid);
    ATRPhoneCallLoad(playerid);
    ATRPhoneBankLoad(playerid);
    phoneinfoload(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, reason)
{
    if (IsValidDynamicMapIcon(SharelocSender[playerid]))
    {
        DestroyDynamicMapIcon(SharelocSender[playerid]);
        SharelocSender[playerid] = INVALID_STREAMER_ID;
        SharelocTimer[playerid] = 0;
    }
    ATRPhoneUnload(playerid);
    ATRPhoneCallUnload(playerid);
    ATRPhoneBankUnload(playerid);
    phoneinfoUnload(playerid);
    return 1;
}

Toggle_PhoneTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 65; i++) PlayerTextDrawHide(playerid, Infinite_phone[playerid][i]);

    }
    else
    {
        for(new i; i < 65; i++) PlayerTextDrawShow(playerid, Infinite_phone[playerid][i]);
    }
    return 1;
}

Toggle_CallTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, infinite_telfon[playerid][i]);
        PlayerTextDrawHide(playerid, CloseCallButton[playerid]);
        PlayerTextDrawHide(playerid, ContactNameTD[playerid]);
        PlayerTextDrawHide(playerid, StatusDialingTD[playerid]);
    }
    else
    {
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, infinite_telfon[playerid][i]);
        PlayerTextDrawShow(playerid, CloseCallButton[playerid]);
        PlayerTextDrawShow(playerid, ContactNameTD[playerid]);
        PlayerTextDrawShow(playerid, StatusDialingTD[playerid]);
    }
    return 1;
}

Toggle_BankTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 33; i++) PlayerTextDrawHide(playerid, infinite_flecapv2[playerid][i]);

    }
    else
    {
        PlayerTextDrawSetString(playerid, infinite_flecapv2[playerid][26], sprintf("%s", FormatMoney(AccountData[playerid][pBankMoney])));
        for(new i; i < 33; i++) PlayerTextDrawShow(playerid, infinite_flecapv2[playerid][i]);
    }
    return 1;
}

Toggle_Phoneinfo(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 39; i++) PlayerTextDrawHide(playerid, phone_info[playerid][i]);

    }
    else
    {
        PlayerTextDrawSetString(playerid, phone_info[playerid][36], sprintf("%s", FormatMoney(AccountData[playerid][pBankMoney])));
        PlayerTextDrawSetString(playerid, phone_info[playerid][37], sprintf("%d", AccountData[playerid][pBankRek]));
        for(new i; i < 39; i++) PlayerTextDrawShow(playerid, phone_info[playerid][i]);

    }
    return 1;
}

HideAllSmartphone(playerid)
{
    Toggle_PhoneTD(playerid, false);
    Toggle_BankTD(playerid, false);
    Toggle_Phoneinfo(playerid, false);
    return 1;
}

ShowingSmartphone(playerid)
{
    if (IsPlayerInWater(playerid))
    {
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat membuka Smartphone di dalam air!");
    }

    if(!PlayerHasItem(playerid, "Smartphone"))
    {
        CancelSelectTextDraw(playerid);
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memiliki Smartphone!");
    }
    
    if(AccountData[playerid][pInjured])   
    {
        CancelSelectTextDraw(playerid);
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak bisa melakukannya saat ini!");
    }

    if(!AccountData[playerid][phoneShown])
    {
        SendRPMeAboveHead(playerid, "Membuka HP Miliknya", X11_PLUM1);
        if(AccountData[playerid][phoneDurringConversation] && AccountData[playerid][phoneCallingWithPlayerID] != INVALID_PLAYER_ID)
        {
            new otherid = AccountData[playerid][phoneCallingWithPlayerID];
            PlayerTextDrawSetString(playerid, ContactNameTD[playerid], sprintf("%s", GetMySavedContactName(playerid, AccountData[otherid][pPhone])));
            Toggle_CallTD(playerid, true);
            PlayerTextDrawShow(playerid, RedButtonoutComingCall[playerid]);
            AccountData[playerid][phoneShown] = true;
            return 1;
        }

        if(!IsPlayerInAnyVehicle(playerid) && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
        {
            ApplyAnimation(playerid, "ped", "Jetpack_Idle", 4.1, 0, 0, 0, 1, 0, 1);
            SetPlayerAttachedObject(playerid, 9, 18870, 5, 0.043000, 0.022999, -0.006000, -112.000022, -34.900020, -8.500002, 1.000000, 1.000000, 1.000000);    
        }
        AllGui_Status(playerid, false);
        Toggle_PhoneTD(playerid, true);
        AccountData[playerid][phoneShown] = true;
        SelectTextDraw(playerid, X11_PINK);
    }
    else 
    {
        AccountData[playerid][phoneShown] = false;
        Inventory_Close(playerid);
        CancelSelectTextDraw(playerid);
    }

    return 1;
}

CutCallingLine(playerid)
{
    new inlinewithplayerID = AccountData[playerid][phoneCallingWithPlayerID];
    AccountData[playerid][phoneIncomingCall] = false;
    AccountData[playerid][phoneDurringConversation] = false;
    AccountData[playerid][phoneCallingTime] = 0;
    
    if(IsPlayerConnected(inlinewithplayerID))
    {
        AccountData[inlinewithplayerID][phoneCallingWithPlayerID] = INVALID_PLAYER_ID;
        AccountData[inlinewithplayerID][phoneIncomingCall] = false;
        AccountData[inlinewithplayerID][phoneDurringConversation] = false;
        AccountData[inlinewithplayerID][phoneCallingTime] = 0;

        SendRPMeAboveHead(inlinewithplayerID, "Menutup HP miliknya.", X11_PLUM);

        if(!IsPlayerInAnyVehicle(inlinewithplayerID) && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
        {
            ClearAnimations(inlinewithplayerID, 1);
            StopLoopingAnim(inlinewithplayerID);
            ApplyAnimation(inlinewithplayerID, "CARRY", "crry_prtial", 4.0, 0, 0, 0, 0, 0, 1);
        }
        RemovePlayerAttachedObject(inlinewithplayerID, 9);
        HideAllSmartphone(inlinewithplayerID);
        Toggle_CallTD(inlinewithplayerID, false);
        PlayerTextDrawHide(inlinewithplayerID, GreenButtonincomingCall[inlinewithplayerID]);
        PlayerTextDrawHide(inlinewithplayerID, RedButtonincomingCall[inlinewithplayerID]);
        PlayerTextDrawHide(inlinewithplayerID, RedButtonoutComingCall[inlinewithplayerID]);
        if(AccountData[inlinewithplayerID][phoneShown]) 
        {
            AccountData[inlinewithplayerID][phoneShown] = false;
        }
        CallRemoteFunction("DisconnectPlayerCalling", "dd", playerid, inlinewithplayerID);
        Info(inlinewithplayerID, "Telepon terputus...");
    }
    return 1;
}


FUNC:: OnOutcomingCall(playerid, const targetnumber[])
{
    HideAllSmartphone(playerid);

    new contnstr[25];
    format(contnstr, sizeof(contnstr), "%s", targetnumber);
    for(new cid; cid < MAX_CONTACTS; ++cid)
    {
        if(ContactData[playerid][cid][contactExists])
        {
            if(!strcmp(ContactData[playerid][cid][contactNumber], targetnumber, false))
            {
                format(contnstr, sizeof(contnstr), "%s", ContactData[playerid][cid][contactName]);
            }
        }
    }
    PlayerTextDrawSetString(playerid, ContactNameTD[playerid], contnstr);
    PlayerTextDrawSetString(playerid, StatusDialingTD[playerid], "Berdering...");

    new targetnumberownerid = GetNumberOwner(targetnumber);
    if(IsPlayerConnected(targetnumberownerid) && targetnumberownerid != INVALID_PLAYER_ID)
    {
        if(AccountData[targetnumberownerid][phoneAirplaneMode])
        {
            PlayerTextDrawSetString(playerid, StatusDialingTD[playerid], "Nomor tidak aktif...");
            AccountData[playerid][phoneIncomingCall] = true;
        }
        else if(AccountData[targetnumberownerid][phoneIncomingCall] || AccountData[targetnumberownerid][phoneDurringConversation])
        {
            PlayerTextDrawSetString(playerid, StatusDialingTD[playerid], "Panggilan sedang sibuk...");
            AccountData[playerid][phoneIncomingCall] = true;
        }
        else
        {
            AccountData[playerid][phoneCallingWithPlayerID] = targetnumberownerid;
            AccountData[playerid][phoneIncomingCall] = false;
            OnIncomingCall(targetnumberownerid, AccountData[playerid][pPhone]);
        }
    }
    ApplyAnimation(playerid, "ped", "phone_talk", 3.1, 0, 1, 0, 1, 1, 1);
    RemovePlayerAttachedObject(playerid, 9);
    SetPlayerAttachedObject(playerid, 9, 18870, 6,  0.099000, 0.009999, 0.000000,  78.200027, 179.000061, -1.500000,  1.000000, 1.000000, 1.000000); // 276
    Toggle_CallTD(playerid, true);
    PlayerTextDrawShow(playerid, RedButtonoutComingCall[playerid]);
    return 1;
}


FUNC:: OnIncomingCall(playerid, const fromnumber[])
{
    HideAllSmartphone(playerid);

    new contnstr[25];
    format(contnstr, sizeof(contnstr), "%s", fromnumber);
    for(new cid; cid < MAX_CONTACTS; ++cid)
    {
        if(ContactData[playerid][cid][contactExists])
        {
            if(!strcmp(ContactData[playerid][cid][contactNumber], fromnumber, false))
            {
                format(contnstr, sizeof(contnstr), "%s", ContactData[playerid][cid][contactName]);
            }
        }
    }
    if(!AccountData[playerid][phoneShown]) 
        AccountData[playerid][phoneShown] = true;

    PlayerTextDrawSetString(playerid, ContactNameTD[playerid], contnstr);
    PlayerTextDrawSetString(playerid, StatusDialingTD[playerid], "Panggilan masuk...");
    PlayAudioStreamForPlayer(playerid, AccountData[playerid][phoneCallRingtone], 0.0, 0.0, 0.0, 30.0, 0); // Memulai Nada Dering Sendiri

    for(new i; i < 21; i++) PlayerTextDrawShow(playerid, infinite_telfon[playerid][i]);
    PlayerTextDrawShow(playerid, CloseCallButton[playerid]);
    PlayerTextDrawShow(playerid, ContactNameTD[playerid]);
    PlayerTextDrawShow(playerid, StatusDialingTD[playerid]);
    PlayerTextDrawShow(playerid, RedButtonincomingCall[playerid]);
    PlayerTextDrawShow(playerid, GreenButtonincomingCall[playerid]);
    SelectTextDraw(playerid, 0xFF9999FF);
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    switch(dialogid)
    {
        case DIALOG_TWITTER_LOGIN:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGIN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Login Twitter", 
            "Error: Tidak dapat diisi kosong!\nHai, selamat datang di Twitter!\nSilahkan masukkan username Twitter kamu yang telah terdaftar:", "Input", "Batal");

            if(strcmp(inputtext, AccountData[playerid][TwitterName])) return ShowTDN(playerid, NOTIFICATION_ERROR, sprintf("Akum Twitter %s tidak ditemukan!", inputtext));

            ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Hai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", inputtext), "Input", "Batal");
        }
        case DIALOG_TWITTER_LOGINPASSWORD:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Error: Anda harus memasukkan kata sandi!\nHai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", AccountData[playerid][TwitterName]), "Input", "Batal");

            if(strcmp(inputtext, AccountData[playerid][TwitterPassword])) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Error: Kata sandi yang anda masukkan salah!\nHai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", AccountData[playerid][TwitterName]), "Input", "Batal");

            AccountData[playerid][Twitter] = true;
        }
        case DIALOG_TWITTER_SIGN:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Daftar Twitter", "Error: Tidak dapat diisi kosong!\nHai, selamat datang di Twitter!\
            \nSilahkan masukkan username Twitter kamu, ini akan ditampilkan pada setiap post tweet yang kamu buat:\
            \nIngat: Username hanya dapat berupa huruf dan angka, tidak menggunakan simbol!\
            \nPanjang username 7 - 24 karakter!", "Set", "Batal");

            if(strlen(inputtext) < 7 || strlen(inputtext) > 24) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Daftar Twitter", "Error: Nama tidak dapat kurang dari 7 huruf atau lebih dari 24!\nHai, selamat datang di Twitter!\
            \nSilahkan masukkan username Twitter kamu, ini akan ditampilkan pada setiap post tweet yang kamu buat:\
            \nIngat: Username hanya dapat berupa huruf dan angka, tidak menggunakan simbol!\
            \nPanjang username 7 - 24 karakter!", "Set", "Batal");

            format(AccountData[playerid][pTempText], 24, inputtext);
            ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Daftar Twitter", 
            sprintf("Hai %s!\nSilahkan massukan kata sandi untuk akun Twitter kamu:\nIngat: Panjang kata sandi 7 - 32 Karakter!\nTahap ini tidak dapat dibatalkan!", inputtext), "Set", "");
        }
        case DIALOG_TWITTER_SIGNPASSWORD:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Daftar Twitter", 
            sprintf("Error: Tidak dapat diisi kosong!\nHai, %s!\nSilahkan masukkan kata sandi untuk akun Twitter kamu:\nIngat: Panjang kata sandi 7 - 32 Karakter!\nTahap ini tidak dapat dibatalkan!", AccountData[playerid][pTempText]), "Set", "");

            if(strlen(inputtext) < 7 || strlen(inputtext) > 32) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Daftar Twitter", 
            sprintf("Error: Password tidak dapat kurang dari 7 atau 32 huruf!\nHai, %s!\nSilahkan masukkan kata sandi untuk akun Twitter kamu:\nIngat: Panjang kata sandi 7 - 32 Karakter!\nTahap ini tidak dapat dibatalkan!", AccountData[playerid][pTempText]), "Set", "");

            format(AccountData[playerid][TwitterName], 128, AccountData[playerid][pTempText]);
            format(AccountData[playerid][TwitterPassword], 64, inputtext);
            ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil membuat akun twitter, silahkan login!");
        }
        case DialogOpenContact:
        {
            if(!response) return 1;
            switch(listitem)
            {
                case 0: // 
                {
                    ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak", 
                    "Mohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                }
                case 1: //
                {
                    ShowContactList(playerid);
                }
            }
        }
        case DIALOG_AIRDROPDISPLAY:
        {
            if(!response) return 1;
            switch(listitem)
            {
                case 0: // izin airdrop
                {
                    switch(AccountData[playerid][AirdropPermission])
                    {
                        case false: AccountData[playerid][AirdropPermission] = true;
                        case true: AccountData[playerid][AirdropPermission] = false;
                    }

                    new strings[255];
                    format(strings, sizeof(strings), "Status: %s\
                    \nShare Contacts", AccountData[playerid][AirdropPermission] ? ""LIGHTGREEN"Share Contact diizinkan" : ""RED"Share Contact tidak diizinkan");
                    
                    ShowPlayerDialog(playerid, DIALOG_AIRDROPDISPLAY, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Airdrop", strings, "Pilih", "Batal");
                }
                case 1: // share
                {
                    if(!AccountData[playerid][AirdropPermission]) 
                        return ShowTDN(playerid, NOTIFICATION_INFO, "Izinkan terlebih dahulu Permission Share Contact!");

                    new frmxt[255], count = 0;

                    foreach(new i : Player) if (i != playerid) if (IsPlayerNearPlayer(playerid, i, 2.0) && AccountData[i][AirdropPermission])
                    {
                        format(frmxt, sizeof(frmxt), "%sPlayer ID: %d\n", frmxt, i);
                        NearestPlayer[playerid][count++] = i;
                    }

                    if(count == 0)
                    {
                        PlayerPlaySound(playerid, 5206, 0.0, 0.0, 0.0);
                        return ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Airdrop",
                        "Tidak ada player yang dekat dengan anda!", "Tutup", "");
                    }

                    ShowPlayerDialog(playerid, DIALOG_AIRDROP, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Airdrop", frmxt, "Pilih", "Batal");
                }
            }
        }
        case DIALOG_AIRDROP:
        {
            if(!response) return 1;
            new targetid = NearestPlayer[playerid][listitem];
            if(!IsPlayerConnected(targetid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");
            if(!IsPlayerNearPlayer(playerid, targetid, 2.5)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak dekat dengan anda!");
            if(listitem == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda belum memilih orang yang ingin anda bagikan kontak!");

            SetPVarString(targetid, "NumberPhone", AccountData[playerid][pPhone]);
            strpack(AccountData[targetid][pNamaAirdrop], ReturnName(playerid), MAX_PLAYER_NAME);

            new shstr[522];
            format(shstr, sizeof(shstr), "Anda menerima permintaan penyimpanan kotak dari:\nNama: %s\nNomor HP: %s\nApakah anda yakin ingin menyimpan kontak tersebut?", AccountData[playerid][pName], AccountData[playerid][pPhone]);
            ShowPlayerDialog(targetid, DIALOG_AIRDROP_CONF, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Airdrop", shstr, "Iya", "Tidak");
        }
        case DIALOG_AIRDROP_CONF:
        {
            if(!response) return 1;

            new frmtname[64], frmtnumber[64], tss[255];            

            GetPVarString(playerid, "NumberPhone", frmtnumber, sizeof(frmtnumber));
            strunpack(frmtname, AccountData[playerid][pNamaAirdrop]);

            if(IsNumberAlreadySaved(playerid, frmtnumber)) return ShowTDN(playerid, NOTIFICATION_ERROR, sprintf("Nomor tersebut sudah terdaftar di kontak atas nama %s", GetMySavedContactName(playerid, frmtnumber)));
            if(CountPlayerContact(playerid) >= MAX_CONTACTS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Penyimpanan kontak anda penuh!");

            for(new cid = 0; cid < MAX_CONTACTS; cid ++)
            {
                if(!ContactData[playerid][cid][contactExists])
                {
                    ContactData[playerid][cid][contactExists] = true;
                    ContactData[playerid][cid][contactOwnerID] = GetUCPSQLID(playerid);
                    format(ContactData[playerid][cid][contactNumber], sizeof(frmtnumber), "%s", frmtnumber);
                    format(ContactData[playerid][cid][contactName], sizeof(frmtname), "%s", frmtname);

                    mysql_format(g_SQL, tss, sizeof(tss), "INSERT INTO `contacts` SET `ID`=%d, `contactName`='%s', `contactNumber`='%s', `contactOwner`=%d, `contactUnread`=0", GetUCPSQLID(playerid), ContactData[playerid][cid][contactName], ContactData[playerid][cid][contactNumber], ContactData[playerid][cid][contactOwnerID]);
                    mysql_tquery(g_SQL, tss, "OnContactAdded", "dd", playerid, cid);
                    return 1;
                }
            }
        }
        case DANN_BOOMBOX:
        {
            if(!response)
            {
                Info(playerid, "Kamu Membatalkan Music");
                return 1;
            }
            switch(listitem)
            {
                case 0:
                {
                    if(GetPVarType(playerid, "BBArea"))
                    {
                        SendRPMeAboveHead(playerid, "Mematikan musik", X11_PLUM1);
                        foreach(new i : Player)
                        {
                            if(IsPlayerInDynamicArea(i, GetPVarInt(playerid, "BBArea")))
                            {
                                StopStream(i);
                            }
                        }
                        DeletePVar(playerid, "BBStation");
                    }
                    SendClientMessageEx(playerid, COLOR_WHITE, "{00ff00}[!]{ffffff}: Kamu Telah Mematikan Boomboxnya");
                }
                case 1:
                {
                    static jskc[512];
                    format(jskc, sizeof(jskc), ""WHITE"Boombox Music - Cerahi Hidupmu Secerah Matahari Di Pagi Hari\n\n"WHITE"Kami sarankan anda untuk upload file mp3 ke discord terlebih dahulu.\n"RED_E"Note: Fitur ini tidak support link Youtube secara langsung!\n\n"YELLOW"(Apabila file mp3 telah di upload ke discord, silahkan copy linknya dan paste dibawah ini):");
                    ShowPlayerDialog(playerid,DANN_BOOMBOX1,DIALOG_STYLE_INPUT, "Boombox Play Music", jskc, "Play", "Cancel");
                }
            }
        }
        case DANN_BOOMBOX1:
        {
            if(response == 1)
            {
                if(isnull(inputtext))
                {
                    ShowTDN(playerid, NOTIFICATION_INFO, "Kamu belum memasukan URL!");
                    // SendClientMessageEx(playerid, COLOR_WHITE, "{00ff00}[!]{ffffff}: Kamu Tidak Menulis Apapun");
                    return 1;
                }
                if(strlen(inputtext))
                {
                    if(GetPVarType(playerid, "PlacedBB"))
                    {
                        foreach(new i : Player)
                        {
                            if(IsPlayerInDynamicArea(i, GetPVarInt(playerid, "BBArea")))
                            {
                                PlayStream(i, inputtext, GetPVarFloat(playerid, "BBX"), GetPVarFloat(playerid, "BBY"), GetPVarFloat(playerid, "BBZ"), 30.0, 1);
                            }
                        }
                        SetPVarString(playerid, "BBStation", inputtext);
                    }
                }
            }
        }
        case DIALOG_ADD_CONTACT:
        {
            if(!response) return 1;

            if(isnull(inputtext))
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Error: Tidak dapat diisi kosong!\nMohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }

            if(strlen(inputtext) < 1 || strlen(inputtext) > 64)
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Error: Tidak dapat kurang dari 1 huruf atau lebih dari 64!\nMohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }
            
            strpack(AccountData[playerid][pTempText], inputtext, 64);
            ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak",
            sprintf("Mohon masukkan nomor HP dari %s:", inputtext), "Input", "Kembali");
        }
        case DIALOG_ADD_CONTACTNUMB:
        {
            if(!response)
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Mohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }

            if(isnull(inputtext))
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak",
                "Error: Tidak dapat diisi kosong!\nMohon masukkan nomor HP kontak yang akan disimpan dibawah ini:", "Input", "Kembali");
                return 1;
            }

            if(!IsNumeric(inputtext))
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tambah Kontak",
                "Error: Masukkan nomor HP kontak hanya berisi angka!\nMohon masukkan nomor HP kontak yang akan disimpan dibawah ini:", "Input", "Kembali");
                return 1;
            }

            if(IsNumberAlreadySaved(playerid, inputtext)) return ShowTDN(playerid, NOTIFICATION_ERROR, sprintf("Nomor tersebut sudah terdaftar di kontak atas nama %s", GetMySavedContactName(playerid, inputtext)));
            if(CountPlayerContact(playerid) >= MAX_CONTACTS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Penyimpanan kontak anda telah penuh!");

            new tss[255], frmtname[64];

            strunpack(frmtname, AccountData[playerid][pTempText]);
            for(new cid = 0; cid < MAX_CONTACTS; cid++)
            {
                if(!ContactData[playerid][cid][contactExists])
                {
                    ContactData[playerid][cid][contactExists] = true;
                    ContactData[playerid][cid][contactOwnerID] = GetUCPSQLID(playerid);
                    format(ContactData[playerid][cid][contactNumber], 64, inputtext);
                    format(ContactData[playerid][cid][contactName], 64, frmtname);
                
                    mysql_format(g_SQL, tss, sizeof(tss), "INSERT INTO `contacts` SET `ID`=%d, `contactName`='%s', `contactNumber`='%s', `contactOwner`=%d, `contactUnread`=0", GetUCPSQLID(playerid), ContactData[playerid][cid][contactName], ContactData[playerid][cid][contactNumber], ContactData[playerid][cid][contactOwnerID]);
                    mysql_tquery(g_SQL, tss, "OnContactAdded", "dd", playerid, cid);    
                    return 1;
                }
            }
        }
        case DialogTelepon:
        {
            if(!response) return 1;

            if(AccountData[playerid][phoneAirplaneMode])
                return ShowTDN(playerid, NOTIFICATION_ERROR, "Smartphone sedang dalam Mode Pesawat!");

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DialogTelepon, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Telepon", 
            "Error: Tidak dapat diisi kosong!\nMohon masukan nomor telepon yang ingin anda hubungi:", "Input", "Batal");
               
            if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DialogTelepon, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Telepon", 
            "Error: Hanya dapat diisi angka!\nMohon masukan nomor telepon yang ingin anda hubungi:", "Input", "Batal");

            if(!strcmp(inputtext, "110", true)) // Polisi
            {
                Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
                "Masukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
                \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");
            }
            else if(!strcmp(inputtext, "118", true)) // Ems
            {
                Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
                "Masukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
                \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");
            }
            else if(!strcmp(inputtext, "117", true)) // Pemerintah
            {
                Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Call Center Pemerintah",
                "Masukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
                \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");
            }
            else
            {
                new targetnumberownerid = GetNumberOwner(inputtext);
                if(!IsPlayerConnected(targetnumberownerid) || targetnumberownerid == INVALID_PLAYER_ID) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon maaf nomor tersebut sedang tidak aktif!");
                if(!strcmp(AccountData[playerid][pPhone], inputtext, false)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak dapat menghubungi diri sendiri!");
                OnOutcomingCall(playerid, inputtext);
            }

    
        }
        case DialogContact:
        {
            new index = ListedContacts[playerid][listitem];

            if(!response)
            {
                ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan");

                PlayerContactPage[playerid] = 0;
                return true;
            }

            if(strfind(inputtext, "<< Halaman Sebelumnya") != -1)
            {
                PlayerContactPage[playerid] --;
                ShowContactList(playerid);
                return true;
            }

            if(strfind(inputtext, ">> Halaman Selanjutnya") != -1)
            {
                new next_page = PlayerContactPage[playerid] + 1;
                new start_index = next_page * 15;
                if(ContactData[playerid][start_index][contactExists])
                {
                    PlayerContactPage[playerid] ++;
                    ShowContactList(playerid);
                }
                else
                {
                    PlayerContactPage[playerid] = PlayerContactPage[playerid];
                    ShowContactList(playerid);
                    Error(playerid, "Anda tidak memiliki kontak lagi di halaman selanjutnya!");
                }
                return true;
            }

            /*if(!strcmp(inputtext, ">> Halaman Selanjutnya", true))
            {
                mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `contacts` WHERE `ID` = %d ORDER BY ID ASC LIMIT %d, 15", AccountData[playerid][pID], (PlayerContactPage[playerid] + 1) * 15);
                result = mysql_query(g_SQL, query, true);
                if(cache_num_rows())
                {
                    cache_delete(result);
                    PlayerContactPage[playerid] ++;
                    ShowContactList(playerid);
                }
                else
                {
                    cache_delete(result);
                    PlayerContactPage[playerid] = PlayerContactPage[playerid];
                    ShowContactList(playerid);
                }
                return true;
            }*/

            if(ContactData[playerid][index][contactExists])
            {
                AccountData[playerid][pContact] = index;
                
                ShowPlayerDialog(playerid, DialogContactMenu, DIALOG_STYLE_LIST, sprintf(""KOTAHIDUP"CHAXW PROJECT"WHITE" - %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), 
                "Panggil\
                \n"GRAY"Whatsapp\
                \nShareloc\
                \n"GRAY"Edit Nama Kontak\
                \nEdit Nomor Kontak\
                \n"GRAY"Blokir/Buka Blokir Kontak\
                \nHapus Kontak", "Pilih", "Batal");
            }
            
            for(new i = 0; i < MAX_CONTACTS; i++) {
                ListedContacts[playerid][i] = -1;
            }
        }
        case DIALOG_YELLOW_PAGE_EMPTY:
        {
            if(!response)
            {
                return AccountData[playerid][CurrentlyReadYellow] = false;
            }

            ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Buat Iklan", "Masukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
        }
        case DIALOG_YELLOW_PAGE:
        {
            if(!response)
            {
                return AccountData[playerid][CurrentlyReadYellow] = false;
            }
            
            new cQuery[333];
            mysql_format(g_SQL, cQuery, sizeof(cQuery), "SELECT * FROM `yellowpages` WHERE ID=1");
            mysql_query(g_SQL, cQuery);
            if(cache_num_rows())
            {
                new YellowSender[64], YellowNumber[64], YellowMessage[128], frmxt[598];
                if(listitem >= 0 && listitem < cache_num_rows())
                {
                    cache_get_value_name(listitem, "YellowFrom", YellowSender);
                    cache_get_value_name(listitem, "YellowPhone", YellowNumber);
                    cache_get_value_name(listitem, "YellowText", YellowMessage);
                
                    SetPVarString(playerid, "YellowNumber", YellowNumber);
                    format(frmxt, sizeof(frmxt), ""WHITE"Pengirim: "YELLOW"%s\n"BLUEJEGE"%s", YellowSender, YellowMessage);
                    ShowPlayerDialog(playerid, DIALOG_YELLOW_CALL, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Iklan",
                    frmxt, "Hubungi", "Batal");
                }
            }
        }
        case DIALOG_YELLOW_PAGE_MENU:
        {
            if(!response)
            {
                AccountData[playerid][CurrentlyReadYellow] = false;
                return 1;
            }
            
            switch(listitem)
            {
                case 0: // Lihat Iklan
                {
                    ShowPlayerYellowsPage(playerid);
                }
                case 1: //Buat Iklan
                {
                    ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Buat Iklan", 
                    "Masukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
                }
            }
        }
        case DIALOG_YELLOW_CALL:
        {
            if(!response)
            {
                SetPVarString(playerid, "YellowNumber", "");
                ShowPlayerYellowsPage(playerid);
                return 1;
            }

            new YellowPhoneNumber[64];
            GetPVarString(playerid, "YellowNumber", YellowPhoneNumber, sizeof(YellowPhoneNumber));
            
            new ownernumberID = GetNumberOwner(YellowPhoneNumber);
            if(!strcmp(YellowPhoneNumber, AccountData[playerid][pPhone], false)) 
            {
                AccountData[playerid][CurrentlyReadYellow] = false;
                return ShowTDN(playerid, NOTIFICATION_ERROR, "Nomor tersebut sedang sibuk!");
            }

            if(!IsPlayerConnected(ownernumberID)) 
            {
                AccountData[playerid][CurrentlyReadYellow] = false;
                return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");
            }

            OnOutcomingCall(playerid, sprintf("%s", YellowPhoneNumber));
            AccountData[playerid][CurrentlyReadYellow] = false;
        }
        case DIALOG_YELLOW_PAGE_SEND:
        {
            if(!response) 
            {
                AccountData[playerid][CurrentlyReadYellow] = false;
                return 1;
            }

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Buat Iklan",
                "Error: Iklan tidak dapat kosong!\nMasukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(strlen(inputtext) < 1 || strlen(inputtext) > 128) return ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Buat Iklan",
                "Error: Iklan tidak boleh kurang dari 1 atau lebih dari 128 huruf!\nMasukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet",
                "Error: Dilarang menggunakan tanda '\'' atau apapun itu!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            new frmttime[255], query[600];
            new hours, minutes, seconds, years, months, days;
            gettime(hours, minutes, seconds);
            getdate(years, months, days);
            format(frmttime, sizeof(frmttime), "%02d/%02d/%02d %02d:%02d:%02d", years, months, days, hours, minutes, seconds);

            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `yellowpages` (`ID`, `YellowFrom`, `YellowPhone`, `YellowDate`, `YellowText`) VALUES ('1', '%s', '%s', '%s', '%s')", ReturnName(playerid), AccountData[playerid][pPhone], frmttime, inputtext);
            mysql_tquery(g_SQL, query, "OnPlayerAdvert", "d", playerid);
            foreach(new i : Player) if (IsPlayerConnected(i) && AccountData[i][IsLoggedIn]) if (i != playerid)
            {
                if(AccountData[i][CurrentlyReadYellow]) return ShowPlayerYellowsPage(i);
            }
        }
        case DIALOG_WHATSAPP_CHAT:
        {
            new cidt = AccountData[playerid][pContact];
            if(!response) 
            {
                ShowContactList(playerid);
                AccountData[playerid][CurrentlyReadWA] = false;
            }
            else
            {
                new title[100];
                format(title, sizeof(title), "WhatsApp Chat - %s", ContactData[playerid][cidt][contactName]);
                ShowPlayerDialog(playerid, DIALOG_WHATSAPP_SEND, DIALOG_STYLE_INPUT, title, "Masukkan pesan WhatsApp yang ingin anda kirim dibawah ini:", "Kirim", "Kembali");
            }
            return 1;
        }
        case DIALOG_WHATSAPP_CHAT_EMPTY:
        {
            new cidt = AccountData[playerid][pContact];
            if(!response) 
            {
                ShowContactList(playerid);
                AccountData[playerid][CurrentlyReadWA] = false;
            }
            else
            {
                new title[100];
                format(title, sizeof(title), "WhatsApp Chat - %s", ContactData[playerid][cidt][contactName]);
                ShowPlayerDialog(playerid, DIALOG_WHATSAPP_SEND, DIALOG_STYLE_INPUT, title, "Masukkan pesan WhatsApp yang ingin anda kirim dibawah ini:", "Kirim", "Kembali");
            }
            return 1;
        }
        case DIALOG_WHATSAPP_SEND:
        {
            if(!response) 
            {
                AccountData[playerid][CurrentlyReadWA] = false;
                return 1;
            }
            
            new cidt = AccountData[playerid][pContact];
            new targetid = GetNumberOwner(ContactData[playerid][cidt][contactNumber]);
            if(targetid == INVALID_PLAYER_ID) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon maaf nomor telepon itu sedang tidak aktif!");
            new ChatID = (AccountData[playerid][pMaskID]+AccountData[targetid][pMaskID]);

            new title[100];
            format(title, sizeof(title), "WhatsApp Chat - %s", ContactData[playerid][cidt][contactName]);

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_WHATSAPP_SEND, DIALOG_STYLE_INPUT, title, 
            "Error: Pesan tidak boleh kosong!\nMasukkan pesan WhatsApp yang ingin anda kirim dibawah ini:", "Kirim", "Kembali");

            if(strlen(inputtext) < 1 || strlen(inputtext) > 128) return ShowPlayerDialog(playerid, DIALOG_WHATSAPP_SEND, DIALOG_STYLE_INPUT, title, 
            "Error: Pesan tidak dapat kurang dari 1 atau lebih dari 128 huruf!\nMasukkan pesan WhatsApp yang ingin anda kirim dibawah ini:", "Kirim", "Kembali");

            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet",
            "Error: Dilarang menggunakan tanda '\'' atau apapun itu!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            if(CheckNumberBlocked(targetid, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda tidak dapat mengirim pesan, nomor anda di Blokir!");

            for(new i; i < MAX_CONTACTS; i ++) {
                if(ContactData[targetid][i][contactExists]) {
                    if(!strcmp(ContactData[targetid][i][contactNumber], AccountData[playerid][pPhone], false)) {
                        ContactData[targetid][i][contactUnread] += 1;
                    }
                }
                new dbstr[151];
                mysql_format(g_SQL, dbstr, sizeof(dbstr), "UPDATE `contacts` SET `contactUnread` = %d WHERE `contactID` = %d", ContactData[targetid][i][contactUnread], ContactData[targetid][i][contactID]);
                mysql_tquery(g_SQL, dbstr);
            }
            new frmttime[255];
            new hours, minutes, seconds, years, months, days;
            gettime(hours, minutes, seconds);
            getdate(years, months, days);
            format(frmttime, sizeof(frmttime), "%02d-%02d-%02d %02d:%02d:%02d", years, months, days, hours, minutes, seconds);

            new query[1048];
            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `whatsapp_chats` (`ID`, `chatTimestamp`, `chatSender`, `chatMessage`) VALUES ('%d', '%s', '%s', '%s')", ChatID, frmttime, GetMySavedContactName(targetid, AccountData[playerid][pPhone]), inputtext);
            mysql_tquery(g_SQL, query, "OnWhatsappSent", "iiii", playerid, targetid, cidt, (AccountData[playerid][pMaskID]+AccountData[targetid][pMaskID]));
        }
        case DIALOG_TWITTER_POST_EMPTY:
        {
            if(!response)
            {
                AccountData[playerid][CurrentlyReadTwitter] = false;
                return 1;
            }

            ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet", "Masukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
        }
        case DIALOG_TWITTER_POST:
        {
            if(!response)
            {
                AccountData[playerid][CurrentlyReadTwitter] = false;
                return 1;
            }

            ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet", "Masukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
        }
        case DIALOG_TWITTER_POST_SEND:
        {
            if(!response) 
            {
                AccountData[playerid][CurrentlyReadTwitter] = false;
                return 1;
            }

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet",
                "Error: Tweet tidak dapat kosong!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(strlen(inputtext) < 1 || strlen(inputtext) > 128) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet",
                "Error: Tweet tidak boleh kurang dari 1 atau lebih dari 128 huruf!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "GRAY"- Kirim Tweet",
            "Error: Dilarang menggunakan tanda '\'' atau apapun itu!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            ShowTweetSending(playerid, inputtext, 2500);
        }
        case DialogContactMenu:
        {
            if(!response)
            {
                ShowContactList(playerid);
                return 1;
            }

            new cidt = AccountData[playerid][pContact];
            new ownernumber = GetNumberOwner(ContactData[playerid][cidt][contactNumber]);
            switch(listitem)
            {
                case 0:// Panggil
                {
                    if(AccountData[playerid][phoneAirplaneMode]) 
                        return ShowTDN(playerid, NOTIFICATION_ERROR, "Smartphone sedang dalam Mode Pesawat!");
                        
                    new targetnumber[25];
                    format(targetnumber, sizeof(targetnumber), "%s", ContactData[playerid][cidt][contactNumber]);
                    if(!strcmp(AccountData[playerid][pPhone], targetnumber, false)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak dapat menghubungi diri sendiri!");
                    if(!IsPlayerConnected(ownernumber)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon maaf nomor tersebut sedang tidak aktif!");
                    if(CheckNumberBlocked(playerid, AccountData[ownernumber][pPhone])) return ShowTDN(playerid, NOTIFICATION_ERROR, "Nomor tersebut anda blokir, buka terlebih dahulu!");
                    if(CheckNumberBlocked(ownernumber, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_INFO, "Tidak dapat melakukan panggilan ini, nomor anda diblokir!");
                    OnOutcomingCall(playerid, targetnumber);
                }
                case 1:// Whatsapp
                {
                    if(AccountData[playerid][phoneAirplaneMode]) 
                        return ShowTDN(playerid, NOTIFICATION_ERROR, "Smartphone sedang dalam Mode Pesawat!");

                    if(!IsPlayerConnected(ownernumber)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon maaf nomor tersebut tidak aktif di kota!");
                    if(CheckNumberBlocked(playerid, AccountData[ownernumber][pPhone])) return ShowTDN(playerid, NOTIFICATION_ERROR, "Nomor tersebut anda blokir, buka terlebih dahulu!");

                    new query[525], harlem[128];
                    mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `whatsapp_chats` WHERE `ID`=%d ORDER BY `chatTimestamp` ASC LIMIT 30", AccountData[playerid][pMaskID]+AccountData[ownernumber][pMaskID]);
                    mysql_query(g_SQL, query);
                    if(cache_num_rows())
                    {
                        if(cache_num_rows() >= 30)
                        {
                            mysql_format(g_SQL, harlem, sizeof(harlem), "DELETE FROM `whatsapp_chats` WHERE `ID`=%d", AccountData[playerid][pMaskID]+AccountData[ownernumber][pMaskID]);
                            mysql_tquery(g_SQL, harlem);
                        }

                        new list[2500], date[64], issuer[24], watext[128];

                        ContactData[playerid][cidt][contactUnread] = 0;
                        mysql_format(g_SQL, query, sizeof(query), "UPDATE `contacts` SET `contactUnread`= 0 WHERE `contactID`=%d", ContactData[playerid][cidt][contactID]);
                        mysql_tquery(g_SQL, query);

                        format(list, sizeof(list), "Tanggal\tPengirim\tPesan\n");
                        for(new i; i < cache_num_rows(); ++i)
                        {
                            cache_get_value_name(i, "chatTimestamp", date);
                            cache_get_value_name(i, "chatSender", issuer);
                            cache_get_value_name(i, "chatMessage", watext);
                        
                            format(list, sizeof(list), "%s%s\t%s\t%s\n", list, date, issuer, watext);
                        }
                        new title[100];
                        format(title, sizeof(title), "WhatsApp Chat - %s", ContactData[playerid][cidt][contactName]);
                        ShowPlayerDialog(playerid, DIALOG_WHATSAPP_CHAT, DIALOG_STYLE_TABLIST_HEADERS, title, list, "Kirim", "Kembali");
                    }
                    else 
                    {
                        new list[208], title[102];
                        format(list, sizeof(list), "Tanggal\tPengirim\tPesan\n");
                        format(list, sizeof(list), "%sPesan dan panggilan terenkripsi secara end-to-end.", list);
                        format(title, sizeof(title), "WhatsApp Chat - %s", ContactData[playerid][cidt][contactName]);
                        ShowPlayerDialog(playerid, DIALOG_WHATSAPP_CHAT_EMPTY, DIALOG_STYLE_TABLIST_HEADERS, title, list, "Kirim", "Kembali");
                    }
                    AccountData[playerid][CurrentlyReadWA] = true;
                }
                case 2:// Shareloc
                {
                    if(AccountData[playerid][phoneAirplaneMode]) 
                        return ShowTDN(playerid, NOTIFICATION_ERROR, "Smartphone sedang dalam Mode Pesawat!");

                    if(!IsPlayerConnected(ownernumber)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Mohon maaf nomor tersebut tidak aktif di kota!");
                    if(CheckNumberBlocked(playerid, AccountData[ownernumber][pPhone])) return ShowTDN(playerid, NOTIFICATION_ERROR, "Nomor tersebut anda blokir, buka terlebih dahulu!");
                    if(CheckNumberBlocked(ownernumber, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda tidak dapat mengirim shareloc, nomor anda di Blokir!");

                    static Float:x, Float:y, Float:z;
                    GetPlayerPos(playerid, x, y, z);

                    if (SharelocSender[ownernumber] != INVALID_STREAMER_ID) 
                        DestroyDynamicMapIcon(SharelocSender[ownernumber]);

                    SharelocSender[ownernumber] = CreateDynamicMapIcon(x, y, z, 0, COLOR_CLIENT, GetPlayerVirtualWorld(playerid), GetPlayerInterior(playerid), ownernumber, 5000.0, MAPICON_GLOBAL, -1, 0);
                    SharelocTimer[ownernumber] = 120;
                    ShowTDN(playerid, NOTIFICATION_SUKSES, sprintf("Berhasil mengirim lokasi kepada %s", ReturnName(ownernumber)));
                    Syntax(ownernumber, "%s mengirimkan shareloc kepada anda", GetMySavedContactName(ownernumber, AccountData[playerid][pPhone]));
                }
                case 3: // Edit Nama Kontak
                {
                    ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                    sprintf("Mohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][cidt][contactName]), "Save", "Batal");
                }
                case 4: // Edit Number
                {
                    ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nomor Kontak",
                    sprintf("Mohon masukkan nomor baru untuk diterapkan pada kontak %s", ContactData[playerid][cidt][contactName]), "Save", "Batal");
                }
                case 5: // Blokir Kontak
                {
                    switch(ContactData[playerid][cidt][contactBlocked])
                    {
                        case 0:
                        {
                            ContactData[playerid][cidt][contactBlocked] = 1;
                            mysql_query(g_SQL, sprintf("UPDATE `contacts` SET `contactBlocked` = %d WHERE `ID` = '%d' AND `contactID` = '%d'", ContactData[playerid][cidt][contactBlocked], AccountData[playerid][pID], ContactData[playerid][cidt][contactID]), false);
                            ShowContactList(playerid);
                            
                            Info(playerid, "Anda memblokir kontak %s (%s)", ContactData[playerid][cidt][contactName], ContactData[playerid][cidt][contactNumber]);
                        }
                        case 1:
                        {
                            ContactData[playerid][cidt][contactBlocked] = 0;
                            mysql_query(g_SQL, sprintf("UPDATE `contacts` SET `contactBlocked` = %d WHERE `ID` = '%d' AND `contactID` = '%d'", ContactData[playerid][cidt][contactBlocked], AccountData[playerid][pID], ContactData[playerid][cidt][contactID]), false);
                            ShowContactList(playerid);
                            
                            Info(playerid, "Anda membuka memblokir kontak %s (%s)", ContactData[playerid][cidt][contactName], ContactData[playerid][cidt][contactNumber]);
                        }
                    }
                }
                case 6:// Hapus Kontak
                {
                    ShowTDN(playerid, NOTIFICATION_SUKSES, sprintf("Anda telah menghapus %s dari daftar kontak!", ContactData[playerid][cidt][contactName]));
                    
                    static frmtx[188];
                    mysql_format(g_SQL, frmtx, sizeof(frmtx), "DELETE FROM `contacts` WHERE `ID` = '%d' AND `contactID` = '%d'", AccountData[playerid][pID], ContactData[playerid][cidt][contactID]);
                    mysql_query(g_SQL, frmtx);
                    
                    ContactData[playerid][cidt][contactExists] = false;
                    ContactData[playerid][cidt][contactNumber] = 0;
                    ContactData[playerid][cidt][contactID] = 0;
                    PlayerContactPage[playerid] = 0;
                    
                    for (new i = 0; i < MAX_CONTACTS; i ++) {
                        ContactData[playerid][i][contactExists] = false;
                    }
                    
                    static cQuery[200];
                    mysql_format(g_SQL, cQuery, sizeof(cQuery), "SELECT * FROM `contacts` WHERE `ID`=%d AND `contactOwner`=%d", AccountData[playerid][pID], AccountData[playerid][pID]);
                    mysql_tquery(g_SQL, cQuery, "LoadPlayerContact", "d", playerid);
                    // ShowContactList(playerid);
                }
            }
        }
        case DIALOG_EDIT_CONTACTNUMBER:
        {
            if(response)
            {
                if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nomor Kontak", 
                sprintf("Error: Tidak dapat diisi kosong!\nMohon masukkan nomor baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nomor Kontak", 
                sprintf("Error: Hanya dapat diisi angka!\nMohon masukkan nomor baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                CallLocalFunction("OnContactEditNumber", "dds", playerid, AccountData[playerid][pContact], inputtext);
            }
            else ShowContactList(playerid);
        }
        case DIALOG_EDIT_CONTACTNAME:
        {
            if(response)
            {
                if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Tidak dapat diisi kosong!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Tidak dapat memasukkan angka semua!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(strlen(inputtext) < 1 || strlen(inputtext) > 32) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Nama tidak dapat kurang dari 1 huruf atau lebih dari 32!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                CallLocalFunction("OnContactEditName", "dds", playerid, AccountData[playerid][pContact], inputtext);
            }
            else ShowContactList(playerid);
        }
        case DialogTransfer:
        {
            if(!response) return false;
            
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Harus diisi tidak dapat kosong!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Hanya dapat diisi angka!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            if(strval(inputtext) == AccountData[playerid][pBankRek]) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Tidak dapat mengirim ke rekening diri sendiri!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            new query[128];
            mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `player_characters` WHERE `Char_BankRek`=%d", strval(inputtext));
            mysql_tquery(g_SQL, query, "SearchBankRek", "dd", playerid, strval(inputtext));
        }
        case DialogTransfer1:
        {
            if(!response) return 1;

            new targetid = GetRekeningOwner(AccountData[playerid][pTransferRek]);

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer",
            "Error: Harus diisi tidak dapat kosong!\nMohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal"); 
        
            if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer",
            "Error: Hanya dapat diisi angka!\nMohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal");
        
            if(strval(inputtext) < 1 || strval(inputtext) > AccountData[playerid][pBankMoney]) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer",
            "Error: Jumlah tidak vaid!\nMohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal");
        
            if(!IsPlayerConnected(targetid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemilik rekening tersebut tidak terkoneksi ke server!");
            AccountData[targetid][pBankMoney] += strval(inputtext);
            AccountData[playerid][pBankMoney] -= strval(inputtext);
            SendClientMessageEx(targetid, -1, "[i] Anda mendapatkan transfer dari // Nama Rek: %s // Jumlah Transfer: "GREEN"%s", AccountData[playerid][pName], FormatMoney(strval(inputtext)));
            ShowTDN(playerid, NOTIFICATION_SUKSES, sprintf("Berhasil mengirim %s ke rekening %d", FormatMoney(strval(inputtext)), AccountData[playerid][pTransferRek]));
            
            foreach(new i : Player) if (AccountData[i][pAdmin] >= 1 && IsPlayerConnected(i))
            {
                SendClientMessageEx(i, -1, ""YELLOW"[Transfer Logs]: %s(%d) Mentransfer uang sebesar %s kepada %s(%d)", AccountData[playerid][pName], playerid, FormatMoney(strval(inputtext)), AccountData[targetid][pName], targetid);
            }
            new frmxt[255];
            format(frmxt, sizeof(frmxt), "Menstransfer uang kepada rekening %d sebesar $%d", AccountData[playerid][pTransferRek], strval(inputtext));
            AddPMoneyLog(AccountData[playerid][pName], AccountData[playerid][pUCP], frmxt, strval(inputtext));
            AccountData[playerid][pTransferRek] = 0;
        }
        case DialogSpotify:
        {
            if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda membatalkan musik");
            if(response)
            {
                switch(listitem)
                {
                    case 0:
                    {
                        SendRPMeAboveHead(playerid, "Mematikan musik di Spotifynya", X11_PLUM1);
                        StopStream(playerid);
                    }
                    case 1:
                    {
                        static jskc[512];
                        format(jskc, sizeof(jskc), ""WHITE"Spotify Music - Cerahi Hidupmu Secerah Matahari Di Pagi Hari\n\n"WHITE"Kami sarankan anda untuk upload file mp3 ke discord terlebih dahulu.\n"RED_E"Note: Fitur ini tidak support link Youtube secara langsung!\n\n"YELLOW"(Apabila file mp3 telah di upload ke discord, silahkan copy linknya dan paste dibawah ini):");
                        ShowPlayerDialog(playerid, DialogSpotify1, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Spotify", jskc, "Input", "Cancel");
                    }
                }
            }
        }
        case DialogSpotify1:
        {
            if(response == 1)
            {
                if(isnull(inputtext))
                {
                    ShowTDN(playerid, NOTIFICATION_INFO, "Anda belum memasukan URL musik!");
                    return 1;
                }
                if(strlen(inputtext))
                {
                    PlayStream(playerid, inputtext, 0.0, 0.0, 0.0, 1, 0);
                }
            }
        }
        case LokasiGps:
        {
            if(!response) return 1;
            if(!PlayerHasItem(playerid, "Smartphone")) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memiliki smartphone!");

            switch(listitem)
            {
                case 0:
                {
                    new minsty[4096];
                    format(minsty, sizeof(minsty), "Nama\tLokasi\tJarak\
                    \nBalai Kota\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Kantor Kepolisian\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nRumah Sakit Central\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Bengkel Kota CHAXW PROJECT\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nAsuransi los santos\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Asuransi LV\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nRestaurant CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Pasar Haji Den\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nShowroom CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(-1740.3242,13.5469,179.7488,), GetPlayerDistanceFromPoint(playerid, -1740.3242,13.5469,179.7488,),//balkot
                    GetLocation(1815.0625,-1753.6061,13.5469), GetPlayerDistanceFromPoint(playerid, 1815.0625,-1753.6061,13.5469),//kanpoll
                    GetLocation(341.4148, -1527.4237, 33.2915), GetPlayerDistanceFromPoint(playerid, 341.4148, -1527.4237, 33.2915),//ems
                    GetLocation(-75.1937, 1035.4578, 19.7411), GetPlayerDistanceFromPoint(playerid, -75.1937, 1035.4578, 19.7411),//bengkel
                    GetLocation(426.7172,-1321.7130,15.0211), GetPlayerDistanceFromPoint(playerid, 426.7172,-1321.7130,15.0211),//ansuransils  
                    GetLocation(41.2042,1218.0547,19.0916), GetPlayerDistanceFromPoint(playerid, 41.2042,1218.0547,19.0916),//ansuransilv  
                    GetLocation(428.7217,-1786.4092,5.5399), GetPlayerDistanceFromPoint(playerid, 428.7217,-1786.4092,5.5399),//resturan infinite 
                    GetLocation(2837.0078,-1185.2463,24.5277), GetPlayerDistanceFromPoint(playerid, 2837.0078,-1185.2463,24.5277),//pasar infinite  
                    GetLocation(353.0182,-1366.3049,14.4485), GetPlayerDistanceFromPoint(playerid, -1265.3986,17.2422,166.9020,));//showroom infinite  
                    ShowPlayerDialog(playerid, LokasiUmum, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 1:
                {
                    new minsty[4012];
                    format(minsty, sizeof(minsty), "Pekerjaan\tNama\tLokasi\tJarak\
                    \n"GRAY"Tukang Ayam #1\t"GRAY"Kandang Ayam CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \nTukang Ayam #2\tKantor Ayam CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Petani #1\t"GRAY"Pembelian Bibit\t%s\t"YELLOW"%.2f m\
                    \nPetani #2\tLadang Tanaman\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Petani #3\t"GRAY"Olah Tanaman\t%s\t"YELLOW"%.2f m\
                    \nTukang Kayu\tHutan Kayu\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Kargo\t"GRAY"Pengambilan Truck Kargo\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Penambang #1\t"GRAY"Pertambangan CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \nPenambang #2\tPencucian Batu\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Penambang #3\t"GRAY"Peleburan Batu\t%s\t"YELLOW"%.2f m\
                    \nTukang Minyak #1\tAmbil Minyak\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Tukang Minyak #2\t"GRAY"Refined Minyak\t%s\t"YELLOW"%.2f m\
                    \nTukang Minyak #3\tMixxing Minyak\t%s\t"YELLOW"%.2f m\
                    \nDriver Courier\t"GRAY"Mulai Bekerja\t"GRAY"%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(1909.9432,176.1390,37.2448), GetPlayerDistanceFromPoint(playerid, 1909.9432,176.1390,37.2448),//ayam1
                    GetLocation(207.1262,-261.3802,1.5781), GetPlayerDistanceFromPoint(playerid, 207.1262,-261.3802,1.5781),//ayam2
                    GetLocation(-356.0192,-1053.4971,59.3099), GetPlayerDistanceFromPoint(playerid, -356.0192,-1053.4971,59.3099),//petani1
                    GetLocation(-375.8065,-1443.9779,25.7266), GetPlayerDistanceFromPoint(playerid, -375.8065,-1443.9779,25.7266),//petani2
                    GetLocation(-27.9775,162.3992,2.4297), GetPlayerDistanceFromPoint(playerid, -27.9775,162.3992,2.4297),//petani3
                    GetLocation(-1994.7172,-2485.7100,31.3549), GetPlayerDistanceFromPoint(playerid, -1994.7172,-2485.7100,31.3549),//kayu lumberject
                    GetLocation(-1710.3508,50.1472,3.5495), GetPlayerDistanceFromPoint(playerid, -1710.3508,50.1472,3.5495),//kargo
                    GetLocation(621.8278,868.0755,-42.9609), GetPlayerDistanceFromPoint(playerid, 621.8278,868.0755,-42.9609),//penambang1
                    GetLocation(-4.9302,-1139.9332,7.3042), GetPlayerDistanceFromPoint(playerid, -4.9302,-1139.9332,7.3042),//penambang2
                    GetLocation(1035.6212,-339.8348,73.9922), GetPlayerDistanceFromPoint(playerid, 1035.6212,-339.8348,73.9922),//penambang3
                    GetLocation(607.9793,1517.6519,7.9728), GetPlayerDistanceFromPoint(playerid, 607.9793,1517.6519,7.9728),//minyak1
                    GetLocation(-801.2167,2426.8120,157.0604), GetPlayerDistanceFromPoint(playerid, -801.2167,2426.8120,157.0604),//minyak2
                    GetLocation(265.4140,1364.2388,10.5859), GetPlayerDistanceFromPoint(playerid, 265.4140,1364.2388,10.5859),//minyak3                                     
                    GetLocation(-502.5028,-488.8751,25.5234), GetPlayerDistanceFromPoint(playerid, -502.5028,-488.8751,25.5234));//cuurier
                    ShowPlayerDialog(playerid, LokasiPekerjaan, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 2:
                {
                    new minsty[1218];
                    format(minsty, sizeof(minsty), "Hobi\tNama\tLokasi\tJarak\
                    \nMemancing #1\tSpot Pemancingan\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Memancing #2\t"GRAY"Penjualan Ikan\t%s\t"YELLOW"%.2f m\
                    \nBerburu #1\tSpot Perburuan\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Berburu #2\t"GRAY"Penjualan Hasil Buruan\t%s\t"YELLOW"%.2f m\
                    \nBowling Area\tarea Sport\t%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(383.1566,-2075.2007,7.8359), GetPlayerDistanceFromPoint(playerid, 383.1566,-2075.2007,7.8359),
                    GetLocation(1052.0156,-345.4073,73.9922), GetPlayerDistanceFromPoint(playerid, 1052.0156,-345.4073,73.9922),
                    GetLocation(-387.3126,-2259.8279,45.5646), GetPlayerDistanceFromPoint(playerid, -387.3126,-2259.8279,45.5646),
                    GetLocation(-1693.3431,-88.9088,3.5654), GetPlayerDistanceFromPoint(playerid, -1693.3431,-88.9088,3.5654),
                    GetLocation(-91.7437,1193.4529,19.5902), GetPlayerDistanceFromPoint(playerid, -91.7437,1193.4529,19.5902));
                    ShowPlayerDialog(playerid, LokasiHobi, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 3:
                {
                    ShowPlayerDialog(playerid, LokasiPertokoan, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- GPS", 
                    "Toko Pakaian Terdekat\
                    \n"GRAY"Toko Elektronik Terdekat", "Pilih", "Batal");
                }
                case 4:
                {
                    new id = NearestAtm(playerid);
                    if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada ATM terdekat dari posisi anda!");
                    
                    SetPlayerRaceCheckpoint(playerid, 1, AtmData[id][atmX], AtmData[id][atmY], AtmData[id][atmZ], AtmData[id][atmX], AtmData[id][atmY], AtmData[id][atmZ], 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 5:
                {
                    new id = GarkotNearby(playerid);
                    if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Garasi Umum terdekat dari posisi anda!");

                    SetPlayerRaceCheckpoint(playerid, 1, PublicGarage[id][pgPOS][0], PublicGarage[id][pgPOS][1], PublicGarage[id][pgPOS][2], PublicGarage[id][pgPOS][0], PublicGarage[id][pgPOS][1], PublicGarage[id][pgPOS][2], 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 6:
                {
                    new id = NearbyTrash(playerid);
                    if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Tong Sampah terdekat dari posisi anda!");
                    
                    SetPlayerRaceCheckpoint(playerid, 1, TrashData[id][trashPos][0], TrashData[id][trashPos][1], TrashData[id][trashPos][2], 0.0, 0.0, 0.0 ,5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 7:
                {
                    new id = WarungNearby(playerid);
                    if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Warung terdekat dari posisi anda!");

                    SetPlayerRaceCheckpoint(playerid, 1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 8: // Pom bensin
                {
                    new id = GasFuelNearby(playerid);
                    if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Pom Bensin terdekat dari posisi anda!");
                    
                    SetPlayerRaceCheckpoint(playerid, 1, PomNearest[id][0], PomNearest[id][1], PomNearest[id][2], PomNearest[id][0], PomNearest[id][1], PomNearest[id][2], 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 9: // Bengkel Modshop
                {
                    SetPlayerRaceCheckpoint(playerid, 1, 1101.4049, -1233.4498, 15.8203, 1101.4049, -1233.4498, 15.8203, 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 10:// Rumah saya
                {
                    new bool: found = false;
                    foreach(new id : House)
                    {
                        if(House_HaveAccess(playerid, id))
                        {
                            AccountData[playerid][pTrackHoused] = true;
                            SetPlayerRaceCheckpoint(playerid, 1, HouseData[id][hsExtPos][0], HouseData[id][hsExtPos][1], HouseData[id][hsExtPos][2], HouseData[id][hsExtPos][0], HouseData[id][hsExtPos][1], HouseData[id][hsExtPos][2], 4.0);
                            ShowTDN(playerid, NOTIFICATION_INFO, "Lokasi telah ditandai di map!");
                            found = true;
                        }
                    }
                    if(!found) ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memiliki/memegang kunci Rumah!");
                }
                case 11:
                {
                    DisablePlayerRaceCheckpoint(playerid);
                    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil menghapus Checkpoint");
                    pMapCP[playerid] = false;
                }
                case 12:
                {
                    if(!IsValidDynamicMapIcon(SharelocSender[playerid]))
                    {
                        return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada yang mengirimkan anda share lokasi!");
                    }
                    else
                    {
                        ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil menghapus Shareloc!");

                        DestroyDynamicMapIcon(SharelocSender[playerid]);
                        SharelocSender[playerid] = INVALID_STREAMER_ID;
                        SharelocTimer[playerid] = 0;
                    }
                }
            }
        }
        case LokasiPertokoan:
        {
            if(!response)
            {
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Lokasi",
                "Lokasi Umum\
                \n"GRAY"Lokasi Pekerjaan\
                \nLokasi Hobi\
                \n"GRAY"Lokasi Pertokoan\
                \nATM Terdekat\
                \n"GRAY"Garasi Umum Terdekat\
                \nTong Sampah Terdekat\
                \n"GRAY"Warung Terdekat\
                \nPom Bensin Terdekat\
                \n"GRAY"Bengkel Modshop\
                \nRumah Saya\
                \n"RED"(Disable Checkpoint)\
                \n"RED"(Disable Shareloc)", "Pilih", "Batal");
            }
            if(response)
            {
                switch(listitem)
                {
                    case 0: // pakaian
                    {
                        new id = ClothesStoreNearby(playerid);
                        if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Toko Pakaian terdekat dari posisi anda!");

                        SetPlayerRaceCheckpoint(playerid, 1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 5.0);
                        pMapCP[playerid] = true;
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                    }
                    case 1: // elektronik
                    {
                        new id = ElectronicStoreNearby(playerid);
                        if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Toko Elektronik terdekat dari posisi anda!");

                        SetPlayerRaceCheckpoint(playerid, 1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 5.0);
                        pMapCP[playerid] = true;
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                    }
                }
            }
        }
        case LokasiPekerjaan:
        {
            if(!response) 
            {
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Lokasi",
                "Lokasi Umum\
                \n"GRAY"Lokasi Pekerjaan\
                \nLokasi Hobi\
                \n"GRAY"Lokasi Pertokoan\
                \nATM Terdekat\
                \n"GRAY"Garasi Umum Terdekat\
                \nTong Sampah Terdekat\
                \n"GRAY"Warung Terdekat\
                \nPom Bensin Terdekat\
                \n"GRAY"Bengkel Modshop\
                \nRumah Saya\
                \n"RED"(Disable Checkpoint)\
                \n"RED"(Disable Shareloc)", "Pilih", "Batal");
            }
            if(response)// list job gps
            {
                switch(listitem)
                {
                    case 0:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1909.9432,176.1390,37.2448, 1909.9432,176.1390,37.2448, 5.0);//ayam1
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 1:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 207.1262,-261.3802,1.5781, 207.1262,-261.3802,1.5781, 5.0);//ayam2
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 2:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -356.0192,-1053.4971,59.3099, -356.0192,-1053.4971,59.3099, 5.0);//petani1
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 3:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -375.8065,-1443.9779,25.7266, -375.8065,-1443.9779,25.7266, 5.0);//petani2
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 4:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -27.9775,162.3992,2.4297, -27.9775,162.3992,2.4297, 5.0);//petani3
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 5:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -1994.7172,-2485.7100,31.3549, -1994.7172,-2485.7100,31.3549, 5.0);//kayu
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 6:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -1710.3508,50.1472,3.5495, -1710.3508,50.1472,3.5495, 5.0);//kargo
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 7:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 621.8278,868.0755,-42.9609, 621.8278,868.0755,-42.9609, 5.0);//penambang1
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 8:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -4.9302,-1139.9332,7.3042, -4.9302,-1139.9332,7.3042, 5.0);//penambang2
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 9:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1035.6212,-339.8348,73.9922, 1035.6212,-339.8348,73.9922, 5.0);//penambang3
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 10:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 607.9793,1517.6519,7.9728, 607.9793,1517.6519,7.9728, 5.0);//minyak1
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 11:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -801.2167,2426.8120,157.0604, -801.2167,2426.8120,157.0604, 5.0);//minyak2
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 12:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 265.4140,1364.2388,10.5859, 265.4140,1364.2388,10.5859, 5.0);//minyak3
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 13:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -502.5028,-488.8751,25.5234, -502.5028,-488.8751,25.5234, 5.0);//courier
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                }
            }
        }
        case LokasiUmum: //lokasiumumn
        {
            if(!response)
            {
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Lokasi",
                "Lokasi Umum\
                \n"GRAY"Lokasi Pekerjaan\
                \nLokasi Hobi\
                \n"GRAY"Lokasi Pertokoan\
                \nATM Terdekat\
                \n"GRAY"Garasi Umum Terdekat\
                \nTong Sampah Terdekat\
                \n"GRAY"Warung Terdekat\
                \nPom Bensin Terdekat\
                \n"GRAY"Bengkel Modshop\
                \nRumah Saya\
                \n"RED"(Disable Checkpoint)\
                \n"RED"(Disable Shareloc)", "Pilih", "Batal");
            }
            if(response)
            {
                switch(listitem)
                {
                    case 0:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1485.6552,-1741.0122,13.5469, 1485.6552,-1741.0122,13.5469, 5.0); //balkot
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 1:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1815.0625,-1753.6061,13.5469, 1815.0625,-1753.6061,13.5469, 5.0); //pd
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 2:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1,341.4148, -1527.4237, 33.2915, 341.4148, -1527.4237, 33.2915, 5.0); //ems
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 3:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -75.1937, 1035.4578, 19.7411, -75.1937, 1035.4578, 19.7411, 5.0); // bengkel
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 4:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1,426.7172,-1321.7130,15.0211, 426.7172,-1321.7130,15.0211, 5.0); //insuls
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 5:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 41.2042,1218.0547,19.0916, 41.2042,1218.0547,19.0916, 5.0); // insuslv
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 6:
                    {                        
                        SetPlayerRaceCheckpoint(playerid, 1,428.7217,-1786.4092,5.5399, 428.7217,-1786.4092,5.5399, 5.0); //restauraninfinite
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;                     
                    }
                    case 7:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2837.0078,-1185.2463,24.5277, 2837.0078,-1185.2463,24.5277, 5.0); // pasar infinite
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 8:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1,353.0182,-1366.3049,14.4485, 353.0182,-1366.3049,14.4485, 5.0); //showroom infnite 
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;              
                    }
                }
            }
        }
        case LokasiHobi:
        {
            if(!response) 
            {
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Lokasi",
                "Lokasi Umum\
                \n"GRAY"Lokasi Pekerjaan\
                \nLokasi Hobi\
                \n"GRAY"Lokasi Pertokoan\
                \nATM Terdekat\
                \n"GRAY"Garasi Umum Terdekat\
                \nTong Sampah Terdekat\
                \n"GRAY"Warung Terdekat\
                \nPom Bensin Terdekat\
                \n"GRAY"Bengkel Modshop\
                \nRumah Saya\
                \n"RED"(Disable Checkpoint)\
                \n"RED"(Disable Shareloc)", "Pilih", "Batal");
            }
            if(response)
            {
                switch(listitem)
                {
                    case 0:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 383.1566,-2075.2007,7.8359, 383.1566,-2075.2007,7.8359, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 1:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -2057.3674, -2464.5283, 31.1797, -2057.3674, -2464.5283, 31.1797, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 2:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -387.3126,-2259.8279,45.5646, -387.3126,-2259.8279,45.5646, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 3:
                    {   
                        SetPlayerRaceCheckpoint(playerid, 1, -1693.3431,-88.9088,3.5654, -1693.3431,-88.9088,3.5654, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 4:
                    {   
                        SetPlayerRaceCheckpoint(playerid, 1, -91.7437,1193.4529,19.5902, -91.7437,1193.4529,19.5902, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }                    
                }
            }
        }
    }
    return 1;
}




ShowPlayerYellowsPage(playerid)
{
    AccountData[playerid][CurrentlyReadYellow] = true;
    mysql_query(g_SQL, "SELECT * FROM `yellowpages` WHERE `ID`=1 ORDER BY `YellowDate` ASC LIMIT 30");
    new rowcount = cache_num_rows(), list[4500], tempYellowFrom[24], tempYellowDate[64], tempYellowText[128], tempYellowPhone[24];
    if(rowcount)
    {
        if(rowcount >= 30)
        {
            mysql_tquery(g_SQL, "DELETE FROM `yellowpages` WHERE `ID`=1");
        }

        format(list, sizeof(list), "Nama\tTanggal\tIklan\n");
        for(new i; i < rowcount; ++i)
        {
            cache_get_value_name(i, "YellowFrom", tempYellowFrom);
            cache_get_value_name(i, "YellowPhone", tempYellowPhone);
            cache_get_value_name(i, "YellowDate", tempYellowDate);
            cache_get_value_name(i, "YellowText", tempYellowText);
            
            if(strlen(tempYellowText) > 24) {
                format(list, sizeof(list), "%s"YELLOW"%s - %s\t"GRAY"%s\t"WHITE"%.24s...\n", list, tempYellowFrom, tempYellowPhone, tempYellowDate, tempYellowText);
            } else format(list, sizeof(list), "%s"YELLOW"%s - %s\t"GRAY"%s\t"WHITE"%s\n", list, tempYellowFrom, tempYellowPhone, tempYellowDate, tempYellowText);
        }
        ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Yellow Pages", list, "Iklan", "Kembali");
    }
    else
    {
        format(list, sizeof(list), "Nama\tTanggal\tIklan\n");
        format(list, sizeof(list), "%sJadilah orang pertama yang membuat iklan!", list);
        ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_EMPTY, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Yellow Pages", list, "Iklan", "Kembali");
    }
    return 1;
}


FUNC:: SearchBankRek(playerid, norekening)
{
    if(!cache_num_rows())
    {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Nomor rekening tidak terdaftar!");
        return 1;
    }
    else 
    {
        new ownerRek = GetRekeningOwner(norekening);
        if(!IsPlayerConnected(ownerRek)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");
        AccountData[playerid][pTransferRek] = norekening;
        ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Transfer",
        "Mohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal");
    }
    return 1;
}

Dialog:SettingPhone(playerid, response, listitem, inputtext[])
{
    if(response)
    {
        switch(listitem)
        {
            case 0: //ttg ponsel
            {
                static minsty[200];
                format(minsty, sizeof(minsty), "Aevhone X25 Milik: %s\
                \nNomor Telepon: %s\
                \nNama Series Model: X25\
                \nNomor Serial: VR81AXS23S33\nIMEI (slot 1): 7182991211\nIMEI (slot 2): 9928192882", ReturnName(playerid), AccountData[playerid][pPhone]);
                ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Tentang Ponsel", minsty, "Tutup", "");
            }
            case 1: // Ubah Nada Dering
            {
                Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Ubah Nada Dering",
                "Mohon masukkan link mp3 yang sudah anda upload dimanapun itu untuk dijadikan sebagai nada dering saat ada panggilan masuk\
                \nNOTE: Tidak dapat memasukkan link langsung dari YouTube!", "Submit", "Batal");
            }
            case 2: // Hapus Nada Dering
            {
                AccountData[playerid][phoneCallRingtone][0] = EOS;
                ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil menghapus nada dering!");
            }
            case 3: // Mode Pesawat
            {
                switch(AccountData[playerid][phoneAirplaneMode])
                {
                    case false:
                    {
                        AccountData[playerid][phoneAirplaneMode] = true;
                        ShowTDN(playerid, NOTIFICATION_INFO, "Anda mengaktifkan Mode Pesawat");
                    }
                    case true:
                    {
                        AccountData[playerid][phoneAirplaneMode] = false;
                        ShowTDN(playerid, NOTIFICATION_INFO, "Anda menonaktifkan Mode Pesawat");
                    }
                }
            }
        }
    }
    else ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
    return 1;
}

Dialog:PhoneRingtone(playerid, response, listitem, inputtext[])
{
    if(!response) 
    {
        return Dialog_Show(playerid, SettingPhone, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Pengaturan",
        "Tentang Ponsel\
        \nUbah Nada Dering Telepon", "Pilih", "Batal");
    }

    if(isnull(inputtext)) return Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Ubah Nada Dering",
    "Error: Tidak dapat diisi kosong!\nMohon masukkan link mp3 yang sudah anda upload dimanapun itu untuk dijadikan sebagai nada dering saat ada panggilan masuk\
    \nNOTE: Tidak dapat memasukkan link langsung dari YouTube!", "Submit", "Batal");
    
    if(IsNumeric(inputtext)) return Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Ubah Nada Dering",
    "Error: Tidak dapat diisi angka!\nMohon masukkan link mp3 yang sudah anda upload dimanapun itu untuk dijadikan sebagai nada dering saat ada panggilan masuk\
    \nNOTE: Tidak dapat memasukkan link langsung dari YouTube!", "Submit", "Batal");

    format(AccountData[playerid][phoneCallRingtone], 128, inputtext);
    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil mengubah nada dering panggilan!");
    return 1;
}

Dialog:GpsMenu(playerid, response, listitem, inputtext[])
{
    if(response)
    {
        switch(listitem)
        {
            case 0: //Lokasi GPS
            {
                ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Lokasi",
                "Lokasi Umum\
                \n"GRAY"Lokasi Pekerjaan\
                \nLokasi Hobi\
                \n"GRAY"Lokasi Pertokoan\
                \nATM Terdekat\
                \n"GRAY"Garasi Umum Terdekat\
                \nTong Sampah Terdekat\
                \n"GRAY"Warung Terdekat\
                \nPom Bensin Terdekat\
                \n"GRAY"Bengkel Modshop\
                \nRumah Saya\
                \n"RED"(Disable Checkpoint)\
                \n"RED"(Disable Shareloc)", "Pilih", "Batal");
            }
            case 1: // Emergency Signal
            {
                if(AccountData[playerid][pFaction] != FACTION_EMS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan anggota Mitra EMS Infinite!");
                if(!AccountData[playerid][pDutyEms]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang duty EMS!");

                new list[525], count = 0;
                format(list, sizeof(list), "#No\tKorban\tLokasi\n");
                foreach(new i : Player) if (AccountData[i][pSpawned] && SignalExists[i])
                {
                    format(list, sizeof(list), "%s%d\t%s(%d)\t%s\n", list, count, ReturnName(i), i, GetLocation(SignalPos[i][0], SignalPos[i][1], SignalPos[i][2]));
                    ListSignal[playerid][count ++] = i;
                }

                if(count == 0)
                {
                    return Dialog_Show(playerid, ShowOnly, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Emergency Signal",
                    "Tidak ada seseorang manapun yang mengirim Emergency Signal!", "Tutup", "");
                }

                Dialog_Show(playerid, EmergencySignal, DIALOG_STYLE_TABLIST_HEADERS, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Emergency Signal", list, "Pilih", "Batal");
            }
        }
    }
    return 1;
}

Dialog:EmergencySignal(playerid, response, listitem, inputtext[])
{
    if(response)
    {   
        if(AccountData[playerid][pFaction] != FACTION_EMS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan anggota Mitra EMS Infinite!");
        if(!AccountData[playerid][pDutyEms]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang duty EMS!");

        new id = ListSignal[playerid][listitem];
        if(!IsPlayerConnected(id)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");
        if(!SignalExists[id]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Emergency signal sudah tidak ada/dihandle anggota lain!"); 
        // if(!AccountData[id][pInjured]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Orang yang mengirim signal sudah terbangun dari pingsannya!");
        
        SetPlayerRaceCheckpoint(playerid, 1, SignalPos[id][0], SignalPos[id][1], SignalPos[id][2], 0.0, 0.0, 0.0, 4.0);
        Info(playerid, "Anda telah menerima signal emergency di daerah "YELLOW"%s", GetLocation(SignalPos[id][0], SignalPos[id][1], SignalPos[id][2]));
        Info(id, "Anggota Mitra EMS telah merespon signal emergency yang anda kirim. Harap tunggu di lokasi hingga petugas datang!");
        static str[218];
        format(str, sizeof(str), ""RED"EMS %s | telah menerima Emergency Signal di daerah "YELLOW"%s", AccountData[playerid][pName], GetLocation(SignalPos[id][0], SignalPos[id][1], SignalPos[id][2]));
        SendClientMessageToAll(COLOR_RED, str);
        SignalExists[id] = false;
        SignalPos[id][0] = SignalPos[id][1] = SignalPos[id][2] = 0.0;
        pMapCP[playerid] = true;
    }
    else ShowTDN(playerid, NOTIFICATION_ERROR, "Anda telah membatalkan pilihan!");
    return 1;
}

Dialog:CALLCENTER_POLISI(playerid, response, listitem, inputtext[])
{
    if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
    new Float:X, Float:Y, Float:Z;
    GetPlayerPos(playerid, X, Y, Z);

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime()){
        ShowTDN(playerid, NOTIFICATION_INFO, sprintf("Mohon menunggu %d detik untuk mengirim hotline ke factions kembali", AccountData[playerid][pHotlineTime] - gettime()));
        return 1;
    }
    foreach(new i : Player) {
        if(AccountData[i][pFaction] == 1 && AccountData[i][pDutyPD]) {
            SendClientMessageEx(i, -1, ""GRAY"[Pesan Darurat] "WHITE"Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
            SendClientMessageEx(i, -1, ""WHITE"-> %s", inputtext);
        }
    }
    AccountData[playerid][pHotlineTime] = gettime() + 180;
    SendClientMessageEx(playerid, -1, ""GRAY"[Pesan Darurat] "WHITE"Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
    SendClientMessageEx(playerid, -1, ""WHITE"-> %s", inputtext);
    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil mengirim pesan darurat kepolisian!");
    return 1;
}

Dialog:CALLCENTER_EMS(playerid, response, listitem, inputtext[])
{
    if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
    new Float:X, Float:Y, Float:Z;
    GetPlayerPos(playerid, X, Y, Z);

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime())
    {
        ShowTDN(playerid, NOTIFICATION_INFO, sprintf("Mohon menunggu %d detik untuk mengirim hotline factions kembali!", AccountData[playerid][pHotlineTime] - gettime()));
        return 1;
    }

    foreach(new i : Player) {
        if(AccountData[i][pFaction] == 3 && AccountData[i][pDutyEms]) {
            SendClientMessageEx(i, -1, ""C_DOKTER"[EMS CALL CENTER]"WHITE" Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
            SendClientMessageEx(i, -1, ""WHITE"-> %s", inputtext);
        }
    }
    AccountData[playerid][pHotlineTime] = gettime() + 180;
    SendClientMessageEx(playerid, -1, ""C_DOKTER"[EMS CALL CENTER]"WHITE" Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
    SendClientMessageEx(playerid, -1, ""WHITE"-> %s", inputtext);
    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil mengirim pesan darurat Rumah Sakit!");
    return 1;
}

Dialog:CALLCENTER_PEMDA(playerid, response, listitem, inputtext[])
{
    if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
    new Float:X, Float:Y, Float:Z;
    GetPlayerPos(playerid, X, Y, Z);

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime())
    {
        ShowTDN(playerid, NOTIFICATION_INFO, sprintf("Mohon menunggu %d detik untuk mengirim hotline factions kembali!", AccountData[playerid][pHotlineTime] - gettime()));
        return 1;
    }

    foreach(new i : Player) {
        if(AccountData[i][pFaction] == FACTION_PEMERINTAH && AccountData[i][pDutyPemerintah]) {
            SendClientMessageEx(i, -1, ""SKYBLUE"[PEMDA CALL CENTER]"WHITE" Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
            SendClientMessageEx(i, -1, ""WHITE"-> %s", inputtext);
        }
    }
    AccountData[playerid][pHotlineTime] = gettime() + 180;
    SendClientMessageEx(playerid, -1, ""SKYBLUE"[PEMDA CALL CENTER]"WHITE" Laporan Dari %s (%d) // Lokasi: %s // No Telpon: %s", GetRPName(playerid), playerid, GetLocation(X, Y, Z), AccountData[playerid][pPhone]);
    SendClientMessageEx(playerid, -1, ""WHITE"-> %s", inputtext);
    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil mengirim pesan ke Call Center Pemerintah!");
    return 1;
}

// ------------------------------------------------------------------------------- //
ptask CallTimer_Update[1000](playerid)
{
    if(AccountData[playerid][phoneDurringConversation] && AccountData[playerid][phoneCallingWithPlayerID] != INVALID_PLAYER_ID)
    {
        new times[3];
        GetElapsedTime(AccountData[playerid][phoneCallingTime]++, times[0], times[1], times[2]);
        PlayerTextDrawSetString(playerid, StatusDialingTD[playerid], sprintf("%02d:%02d:%02d", times[0], times[1], times[2]));
        PlayerTextDrawShow(playerid, StatusDialingTD[playerid]);
        if(!AccountData[playerid][phoneShown]){
            PlayerTextDrawHide(playerid, StatusDialingTD[playerid]);
        }
    }
    return 1;
}

ptask SharelocRemove[1000](playerid)
{
    if(SharelocTimer[playerid] > 0)
    {
        SharelocTimer[playerid] --;
        if(!SharelocTimer[playerid])
        {
            if(SharelocSender[playerid] != INVALID_STREAMER_ID)
                DestroyDynamicMapIcon(SharelocSender[playerid]), SharelocSender[playerid] = INVALID_STREAMER_ID;
            
            SharelocTimer[playerid] = 0;
        }
    }
    return 1;
}

ptask PhoneClockTD[1000](playerid)
{
    if(AccountData[playerid][phoneShown])
    {
        static const MonthName[12][] =
        {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        new datestring[32], timestring[16];
        new hours, minutes, seconds, days, months, years;
        
        getdate(years, months, days);
        gettime(hours, minutes, seconds);

        // Format tanggal
        format(datestring, sizeof datestring, "%02d_%s_%02d", days, MonthName[months - 1], years % 100);

        // Format waktu
        format(timestring, sizeof timestring, "%02d:%02d", hours, minutes);

        // Update TextDraw
        PlayerTextDrawSetString(playerid, Infinite_phone[playerid][62], datestring);
        PlayerTextDrawSetString(playerid, Infinite_phone[playerid][61], timestring);
    }
    return 1;
}

ShowTweetSending(playerid, text[], time = 10000)
{
	if(TweetNotify[playerid]) 
	{
        for(new i = 0; i < 19; i++) 
        {
            TextDrawHideForPlayer(playerid, infinite_notif[i]);
			KillTimer(TweetNotifyTimer[playerid]);
		}
	}
	TextDrawSetString(infinite_notif[17], text);
	TextDrawSetString(infinite_notif[16], sprintf("%s", GetName(playerid)));
	for(new i = 0; i < 19; i++) 
    {
		TextDrawShowForPlayer(playerid, infinite_notif[i]);

	}
	TweetNotify[playerid] = true;
	TweetNotifyTimer[playerid] = SetTimerEx("HideTweetTextDraw", time, false, "d", playerid);
	return 1;
}

FUNC:: HideTweetTextDraw(playerid, targetid)
{
	if(!TweetNotify[playerid])
		return 0;
	
	TweetNotify[playerid] = false;
	KillTimer(TweetNotifyTimer[playerid]);
	TweetNotifyTimer[playerid] = 0;
	for(new i = 0; i < 19; i++) 
    {
		TextDrawHideForPlayer(playerid, infinite_notif[i]);
	}
	return 1;
}
