#include <YSI\y_hooks>

new PlayerText: Garage_TD[MAX_PLAYERS][30];

hook OnPlayerConnect(playerid)
{
    Garage_TD[playerid][0] = CreatePlayerTextDraw(playerid, 466.000, 120.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][0], 140.000, 270.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][0], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][0], 370751487);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][0], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][0], 1);

    Garage_TD[playerid][1] = CreatePlayerTextDraw(playerid, 475.000, 127.000, "Garasi Bandara");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][1], 0.127, 0.998);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][1], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][1], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][1], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][1], 1);

    Garage_TD[playerid][2] = CreatePlayerTextDraw(playerid, 475.000, 136.000, "Garasi");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][2], 0.196, 1.398);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][2], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][2], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][2], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][2], 1);

    Garage_TD[playerid][3] = CreatePlayerTextDraw(playerid, 475.000, 148.000, "Ambil kendaraan dari garasi");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][3], 0.115, 0.898);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][3], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][3], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][3], 1);

    Garage_TD[playerid][4] = CreatePlayerTextDraw(playerid, 588.000, 137.000, "Exit");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][4], 0.108, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][4], 31.000, 19.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][4], 2);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][4], -1);
    PlayerTextDrawUseBox(playerid, Garage_TD[playerid][4], 1);
    PlayerTextDrawBoxColor(playerid, Garage_TD[playerid][4], 16423459);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][4], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][4], 1);

    Garage_TD[playerid][5] = CreatePlayerTextDraw(playerid, 474.000, 167.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][5], 125.000, 215.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][5], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][5], 16744447);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][5], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][5], 1);

    Garage_TD[playerid][6] = CreatePlayerTextDraw(playerid, 475.000, 168.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][6], 123.000, 213.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][6], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][6], 370750207);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][6], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][6], 1);

    Garage_TD[playerid][7] = CreatePlayerTextDraw(playerid, 479.000, 171.000, "_");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][7], 55.000, 65.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][7], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][7], 1651536790);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][7], 5);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][7], 0);
    PlayerTextDrawSetPreviewModel(playerid, Garage_TD[playerid][7], 560);
    PlayerTextDrawSetPreviewRot(playerid, Garage_TD[playerid][7], -15.000, 0.000, -40.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, Garage_TD[playerid][7], 6, 0);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][7], 1);

    Garage_TD[playerid][8] = CreatePlayerTextDraw(playerid, 480.000, 237.000, "Sultan");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][8], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][8], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][8], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][8], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][8], 1);

    Garage_TD[playerid][9] = CreatePlayerTextDraw(playerid, 480.000, 245.000, "B-1248");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][9], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][9], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][9], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][9], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][9], 1);

    Garage_TD[playerid][10] = CreatePlayerTextDraw(playerid, 479.000, 255.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][10], 55.000, 1.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][10], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][10], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][10], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][10], 1);

    Garage_TD[playerid][11] = CreatePlayerTextDraw(playerid, 539.000, 171.000, "_");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][11], 55.000, 65.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][11], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][11], 1651536790);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][11], 5);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][11], 0);
    PlayerTextDrawSetPreviewModel(playerid, Garage_TD[playerid][11], 411);
    PlayerTextDrawSetPreviewRot(playerid, Garage_TD[playerid][11], -15.000, 0.000, -40.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, Garage_TD[playerid][11], -3, 0);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][11], 1);

    Garage_TD[playerid][12] = CreatePlayerTextDraw(playerid, 540.000, 237.000, "Infernus");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][12], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][12], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][12], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][12], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][12], 1);

    Garage_TD[playerid][13] = CreatePlayerTextDraw(playerid, 540.000, 245.000, "T-1245");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][13], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][13], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][13], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][13], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][13], 1);

    Garage_TD[playerid][14] = CreatePlayerTextDraw(playerid, 539.000, 255.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][14], 55.000, 1.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][14], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][14], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][14], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][14], 1);

    Garage_TD[playerid][15] = CreatePlayerTextDraw(playerid, 479.000, 261.000, "_");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][15], 55.000, 65.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][15], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][15], 1651536790);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][15], 5);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][15], 0);
    PlayerTextDrawSetPreviewModel(playerid, Garage_TD[playerid][15], 468);
    PlayerTextDrawSetPreviewRot(playerid, Garage_TD[playerid][15], -15.000, 0.000, -40.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, Garage_TD[playerid][15], 5, 0);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][15], 1);

    Garage_TD[playerid][16] = CreatePlayerTextDraw(playerid, 480.000, 327.000, "Sanchez");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][16], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][16], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][16], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][16], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][16], 1);

    Garage_TD[playerid][17] = CreatePlayerTextDraw(playerid, 480.000, 335.000, "S-2145");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][17], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][17], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][17], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][17], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][17], 1);

    Garage_TD[playerid][18] = CreatePlayerTextDraw(playerid, 479.000, 345.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][18], 55.000, 1.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][18], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][18], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][18], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][18], 1);

    Garage_TD[playerid][19] = CreatePlayerTextDraw(playerid, 539.000, 261.000, "_");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][19], 55.000, 65.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][19], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][19], 1651536790);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][19], 5);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][19], 0);
    PlayerTextDrawSetPreviewModel(playerid, Garage_TD[playerid][19], 470);
    PlayerTextDrawSetPreviewRot(playerid, Garage_TD[playerid][19], -15.000, 0.000, -40.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, Garage_TD[playerid][19], 0, 0);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][19], 1);

    Garage_TD[playerid][20] = CreatePlayerTextDraw(playerid, 540.000, 327.000, "Patriot");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][20], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][20], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][20], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][20], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][20], 1);

    Garage_TD[playerid][21] = CreatePlayerTextDraw(playerid, 540.000, 335.000, "P-8592");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][21], 0.136, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][21], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][21], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][21], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][21], 1);

    Garage_TD[playerid][22] = CreatePlayerTextDraw(playerid, 539.000, 345.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][22], 55.000, 1.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][22], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][22], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][22], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][22], 1);

    Garage_TD[playerid][23] = CreatePlayerTextDraw(playerid, 364.000, 120.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][23], 100.000, 270.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][23], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][23], 370750207);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][23], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][23], 1);

    Garage_TD[playerid][24] = CreatePlayerTextDraw(playerid, 371.000, 167.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][24], 86.000, 215.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][24], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][24], 16744447);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][24], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][24], 1);

    Garage_TD[playerid][25] = CreatePlayerTextDraw(playerid, 372.000, 168.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][25], 84.000, 213.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][25], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][25], 370750207);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][25], 255);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][25], 1);

    Garage_TD[playerid][26] = CreatePlayerTextDraw(playerid, 374.000, 138.000, "Pilih Kendaraan");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][26], 0.148, 0.998);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][26], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][26], 817731839);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][26], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][26], 1);

    Garage_TD[playerid][27] = CreatePlayerTextDraw(playerid, 374.000, 149.000, "Details");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][27], 0.196, 1.398);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][27], 344.000, 52.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][27], 1);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][27], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][27], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][27], 1);

    Garage_TD[playerid][28] = CreatePlayerTextDraw(playerid, 413.000, 190.000, "Keluarkan Kendaraan");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][28], 0.108, 0.998);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][28], 31.000, 71.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][28], 2);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][28], 817731839);
    PlayerTextDrawUseBox(playerid, Garage_TD[playerid][28], 1);
    PlayerTextDrawBoxColor(playerid, Garage_TD[playerid][28], 16423459);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][28], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][28], 2);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][28], 1);
    PlayerTextDrawSetSelectable(playerid, Garage_TD[playerid][28], 1);

    Garage_TD[playerid][29] = CreatePlayerTextDraw(playerid, 413.000, 206.000, "Kendaraan: Sultan ~n~Plate: B-1245 ~n~Fuel: 100 ~n~Body:1000");
    PlayerTextDrawLetterSize(playerid, Garage_TD[playerid][29], 0.150, 1.098);
    PlayerTextDrawTextSize(playerid, Garage_TD[playerid][29], 60.000, 71.000);
    PlayerTextDrawAlignment(playerid, Garage_TD[playerid][29], 2);
    PlayerTextDrawColor(playerid, Garage_TD[playerid][29], -1);
    PlayerTextDrawUseBox(playerid, Garage_TD[playerid][29], 1);
    PlayerTextDrawBoxColor(playerid, Garage_TD[playerid][29], 1768515910);
    PlayerTextDrawSetShadow(playerid, Garage_TD[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, Garage_TD[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, Garage_TD[playerid][29], -2147483393);
    PlayerTextDrawFont(playerid, Garage_TD[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, Garage_TD[playerid][29], 1);


}

FUNC::GarageString(playerid, vehid)
{
	new str[128];
	format(str, sizeof(str), "Kendaraan: %s ~n~Plate: %s ~n~Fuel: %d ~n~Body:%.1f", GetVehicleModelName(PlayerVehicle[vehid][pVehModelID]), PlayerVehicle[vehid][pVehPlate], PlayerVehicle[vehid][pVehFuel], PlayerVehicle[vehid][pVehHealth]);
	PlayerTextDrawSetString(playerid, Garage_TD[playerid][29], str);
	
	for(new i = 23; i < 30; i++)
	{
		PlayerTextDrawShow(playerid, Garage_TD[playerid][i]);
	}
	return 1;
}
stock GetVehicles(i, Float:pos_x, Float:pos_y, Float:pos_z, Float:pos_a)
{
	//DB
	PlayerVehicle[i][pVehInsuranced] = 0;
	PlayerVehicle[i][pVehBroken] = 0;
	PlayerVehicle[i][pVehParked] = -1;

	PlayerVehicle[i][pVehPos][0] = pos_x;
	PlayerVehicle[i][pVehPos][1] = pos_y;
	PlayerVehicle[i][pVehPos][2] = pos_z;
	PlayerVehicle[i][pVehPos][3] = pos_a;

	OnPlayerVehicleRespawn(i);

	if(PlayerVehicle[i][pVehLocked])
		PlayerVehicle[i][pVehLocked] = false;
    
	SwitchVehicleDoors(PlayerVehicle[i][pVehPhysic], false);
	return 1;
}

TakeVehicleFromGarage(playerid)
{
	if(AccountData[playerid][pUseGarage] == 1)
	{
		AccountData[playerid][pUseGarage] = 0;
		forex(i, 30)
		{
			PlayerTextDrawHide(playerid, Garage_TD[playerid][i]);
		}
		CancelSelectTextDraw(playerid);
	}
	else
	{
		new msg2[64];
		new result = 7,
			garkot_id = 0;

		foreach(new gkid : PublicGarage)
		{
			if(IsPlayerInRangeOfPoint(playerid, 3.5, PublicGarage[gkid][pgPOS][0], PublicGarage[gkid][pgPOS][1],PublicGarage[gkid][pgPOS][2]))
			{
				AccountData[playerid][pGetPARKID] = gkid;
				
				AccountData[playerid][pUseGarage] = 1;

				format(msg2, sizeof(msg2), "%s", PublicGarage[gkid][pgName]);
				PlayerTextDrawSetString(playerid, Garage_TD[playerid][2], msg2);

                AllGui_Status(playerid, false);

				forex(s, 7)
				{
					PlayerTextDrawShow(playerid, Garage_TD[playerid][s]);
				}
				SelectTextDraw(playerid, COLOR_GREY);

				foreach(new i : PvtVehicles) if(PlayerVehicle[i][pVehOwnerID] == AccountData[playerid][pID] && PlayerVehicle[i][pVehParked] == gkid)
				{
					AccountData[playerid][pGarage][garkot_id] = i;
					garkot_id++;

					//1
					PlayerTextDrawSetPreviewModel(playerid, Garage_TD[playerid][result], PlayerVehicle[i][pVehModelID]);
					PlayerTextDrawSetPreviewVehCol(playerid, Garage_TD[playerid][result], PlayerVehicle[i][pVehColor1], PlayerVehicle[i][pVehColor2]);
					PlayerTextDrawShow(playerid, Garage_TD[playerid][result]);

					//2
					result++;
					format(msg2, sizeof(msg2), "%s", GetVehicleModelName(PlayerVehicle[i][pVehModelID]));
					PlayerTextDrawSetString(playerid, Garage_TD[playerid][result], msg2);
					PlayerTextDrawShow(playerid, Garage_TD[playerid][result]);

					//3
					result++;
					format(msg2, sizeof(msg2), "%s", PlayerVehicle[i][pVehPlate]);
					PlayerTextDrawSetString(playerid, Garage_TD[playerid][result], msg2);
					PlayerTextDrawShow(playerid, Garage_TD[playerid][result]);

					//SHOW THE OUTLINE
					result++;
					PlayerTextDrawShow(playerid, Garage_TD[playerid][result]);

					result++;

					if(garkot_id >= 4)
						return 1;
				}
			}
		}
	}
	return 1;
}