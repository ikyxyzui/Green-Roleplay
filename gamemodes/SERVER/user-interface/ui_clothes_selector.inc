// clothing system
#include <YSI_Coding\y_hooks>

new PlayerText: cloth_Txd[MAX_PLAYERS][125];

hook OnPlayerConnect(playerid)
{
    cloth_Txd[playerid][0] = CreatePlayerTextDraw(playerid, 227.000, 93.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][0], 0.109, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][0], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][0], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][0], 1);

    cloth_Txd[playerid][1] = CreatePlayerTextDraw(playerid, 270.000, -321.000, "INDUK");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][1], 0.000, -1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][1], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][1], 1);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][1], 1);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][1], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][1], 1);

    cloth_Txd[playerid][2] = CreatePlayerTextDraw(playerid, 62.000, 88.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][2], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][2], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][2], 64);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][2], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][2], 1);

    cloth_Txd[playerid][3] = CreatePlayerTextDraw(playerid, 62.000, 132.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][3], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][3], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][3], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][3], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][3], 1);

    cloth_Txd[playerid][4] = CreatePlayerTextDraw(playerid, 62.000, 176.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][4], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][4], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][4], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][4], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][4], 1);

    cloth_Txd[playerid][5] = CreatePlayerTextDraw(playerid, 62.000, 220.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][5], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][5], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][5], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][5], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][5], 1);

    cloth_Txd[playerid][6] = CreatePlayerTextDraw(playerid, 62.000, 264.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][6], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][6], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][6], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][6], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][6], 1);

    cloth_Txd[playerid][7] = CreatePlayerTextDraw(playerid, 65.000, 325.000, "Other");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][7], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][7], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][7], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][7], 1);

    cloth_Txd[playerid][8] = CreatePlayerTextDraw(playerid, 62.000, 308.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][8], 145.000, 42.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][8], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][8], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][8], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][8], 1);

    cloth_Txd[playerid][9] = CreatePlayerTextDraw(playerid, 65.000, 281.000, "Toys");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][9], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][9], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][9], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][9], 1);

    cloth_Txd[playerid][10] = CreatePlayerTextDraw(playerid, 141.000, 325.000, "Bone");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][10], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][10], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][10], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][10], 1);

    cloth_Txd[playerid][11] = CreatePlayerTextDraw(playerid, 65.000, 104.000, "Male");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][11], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][11], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][11], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][11], 1);

    cloth_Txd[playerid][12] = CreatePlayerTextDraw(playerid, 141.000, 104.000, "Female");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][12], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][12], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][12], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][12], 1);

    cloth_Txd[playerid][13] = CreatePlayerTextDraw(playerid, 65.000, 149.000, "Hat");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][13], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][13], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][13], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][13], 1);

    cloth_Txd[playerid][14] = CreatePlayerTextDraw(playerid, 141.000, 149.000, "Bone");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][14], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][14], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][14], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][14], 1);

    cloth_Txd[playerid][15] = CreatePlayerTextDraw(playerid, 65.000, 193.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][15], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][15], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][15], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][15], 1);

    cloth_Txd[playerid][16] = CreatePlayerTextDraw(playerid, 141.000, 193.000, "Bone");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][16], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][16], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][16], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][16], 1);

    cloth_Txd[playerid][17] = CreatePlayerTextDraw(playerid, 65.000, 237.000, "Glasses");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][17], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][17], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][17], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][17], 1);

    cloth_Txd[playerid][18] = CreatePlayerTextDraw(playerid, 141.000, 237.000, "Bone");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][18], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][18], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][18], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][18], 1);

    cloth_Txd[playerid][19] = CreatePlayerTextDraw(playerid, 141.000, 281.000, "Bone");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][19], 0.128, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][19], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][19], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][19], 1);

    cloth_Txd[playerid][20] = CreatePlayerTextDraw(playerid, 91.000, 75.000, "Build your character with all your wishes");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][20], 0.136, 0.998);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][20], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][20], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][20], 1);

    cloth_Txd[playerid][21] = CreatePlayerTextDraw(playerid, 78.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][21], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][21], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][21], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][21], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][21], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][21], 1);

    cloth_Txd[playerid][22] = CreatePlayerTextDraw(playerid, 154.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][22], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][22], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][22], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][22], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][22], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][22], 1);

    cloth_Txd[playerid][23] = CreatePlayerTextDraw(playerid, 78.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][23], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][23], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][23], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][23], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][23], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][23], 1);

    cloth_Txd[playerid][24] = CreatePlayerTextDraw(playerid, 154.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][24], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][24], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][24], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][24], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][24], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][24], 1);

    cloth_Txd[playerid][25] = CreatePlayerTextDraw(playerid, 78.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][25], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][25], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][25], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][25], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][25], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][25], 1);

    cloth_Txd[playerid][26] = CreatePlayerTextDraw(playerid, 154.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][26], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][26], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][26], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][26], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][26], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][26], 1);

    cloth_Txd[playerid][27] = CreatePlayerTextDraw(playerid, 78.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][27], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][27], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][27], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][27], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][27], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][27], 1);

    cloth_Txd[playerid][28] = CreatePlayerTextDraw(playerid, 154.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][28], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][28], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][28], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][28], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][28], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][28], 1);

    cloth_Txd[playerid][29] = CreatePlayerTextDraw(playerid, 78.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][29], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][29], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][29], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][29], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][29], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][29], 1);

    cloth_Txd[playerid][30] = CreatePlayerTextDraw(playerid, 154.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][30], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][30], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][30], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][30], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][30], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][30], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][30], 1);

    cloth_Txd[playerid][31] = CreatePlayerTextDraw(playerid, 78.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][31], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][31], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][31], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][31], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][31], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][31], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][31], 1);

    cloth_Txd[playerid][32] = CreatePlayerTextDraw(playerid, 154.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][32], 37.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][32], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][32], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][32], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][32], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][32], 1);

    cloth_Txd[playerid][33] = CreatePlayerTextDraw(playerid, 65.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][33], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][33], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][33], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][33], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][33], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][33], 1);

    cloth_Txd[playerid][34] = CreatePlayerTextDraw(playerid, 117.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][34], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][34], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][34], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][34], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][34], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][34], 1);

    cloth_Txd[playerid][35] = CreatePlayerTextDraw(playerid, 141.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][35], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][35], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][35], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][35], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][35], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][35], 1);

    cloth_Txd[playerid][36] = CreatePlayerTextDraw(playerid, 193.000, 111.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][36], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][36], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][36], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][36], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][36], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][36], 1);

    cloth_Txd[playerid][37] = CreatePlayerTextDraw(playerid, 65.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][37], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][37], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][37], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][37], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][37], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][37], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][37], 1);

    cloth_Txd[playerid][38] = CreatePlayerTextDraw(playerid, 117.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][38], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][38], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][38], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][38], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][38], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][38], 1);

    cloth_Txd[playerid][39] = CreatePlayerTextDraw(playerid, 141.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][39], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][39], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][39], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][39], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][39], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][39], 1);

    cloth_Txd[playerid][40] = CreatePlayerTextDraw(playerid, 193.000, 156.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][40], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][40], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][40], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][40], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][40], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][40], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][40], 1);

    cloth_Txd[playerid][41] = CreatePlayerTextDraw(playerid, 65.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][41], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][41], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][41], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][41], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][41], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][41], 1);

    cloth_Txd[playerid][42] = CreatePlayerTextDraw(playerid, 117.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][42], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][42], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][42], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][42], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][42], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][42], 1);

    cloth_Txd[playerid][43] = CreatePlayerTextDraw(playerid, 141.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][43], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][43], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][43], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][43], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][43], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][43], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][43], 1);

    cloth_Txd[playerid][44] = CreatePlayerTextDraw(playerid, 193.000, 200.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][44], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][44], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][44], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][44], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][44], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][44], 1);

    cloth_Txd[playerid][45] = CreatePlayerTextDraw(playerid, 65.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][45], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][45], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][45], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][45], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][45], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][45], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][45], 1);

    cloth_Txd[playerid][46] = CreatePlayerTextDraw(playerid, 117.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][46], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][46], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][46], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][46], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][46], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][46], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][46], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][46], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][46], 1);

    cloth_Txd[playerid][47] = CreatePlayerTextDraw(playerid, 141.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][47], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][47], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][47], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][47], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][47], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][47], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][47], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][47], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][47], 1);

    cloth_Txd[playerid][48] = CreatePlayerTextDraw(playerid, 193.000, 244.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][48], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][48], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][48], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][48], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][48], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][48], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][48], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][48], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][48], 1);

    cloth_Txd[playerid][49] = CreatePlayerTextDraw(playerid, 65.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][49], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][49], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][49], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][49], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][49], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][49], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][49], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][49], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][49], 1);

    cloth_Txd[playerid][50] = CreatePlayerTextDraw(playerid, 117.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][50], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][50], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][50], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][50], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][50], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][50], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][50], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][50], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][50], 1);

    cloth_Txd[playerid][51] = CreatePlayerTextDraw(playerid, 141.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][51], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][51], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][51], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][51], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][51], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][51], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][51], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][51], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][51], 1);

    cloth_Txd[playerid][52] = CreatePlayerTextDraw(playerid, 193.000, 288.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][52], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][52], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][52], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][52], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][52], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][52], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][52], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][52], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][52], 1);

    cloth_Txd[playerid][53] = CreatePlayerTextDraw(playerid, 65.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][53], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][53], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][53], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][53], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][53], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][53], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][53], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][53], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][53], 1);

    cloth_Txd[playerid][54] = CreatePlayerTextDraw(playerid, 117.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][54], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][54], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][54], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][54], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][54], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][54], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][54], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][54], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][54], 1);

    cloth_Txd[playerid][55] = CreatePlayerTextDraw(playerid, 141.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][55], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][55], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][55], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][55], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][55], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][55], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][55], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][55], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][55], 1);

    cloth_Txd[playerid][56] = CreatePlayerTextDraw(playerid, 193.000, 332.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][56], 11.000, 14.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][56], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][56], 67);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][56], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][56], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][56], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][56], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][56], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][56], 1);

    cloth_Txd[playerid][57] = CreatePlayerTextDraw(playerid, 217.000, 89.000, "LD_POOL:ball");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][57], 14.000, 17.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][57], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][57], 73);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][57], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][57], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][57], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][57], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][57], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][57], 1);

    cloth_Txd[playerid][58] = CreatePlayerTextDraw(playerid, 217.000, 111.000, "LD_POOL:ball");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][58], 14.000, 17.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][58], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][58], 73);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][58], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][58], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][58], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][58], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][58], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][58], 1);

    cloth_Txd[playerid][59] = CreatePlayerTextDraw(playerid, 217.000, 132.000, "LD_POOL:ball");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][59], 14.000, 17.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][59], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][59], 73);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][59], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][59], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][59], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][59], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][59], 1);
    PlayerTextDrawSetSelectable(playerid, cloth_Txd[playerid][59], 1);

    cloth_Txd[playerid][60] = CreatePlayerTextDraw(playerid, 220.000, 95.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][60], 5.000, 5.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][60], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][60], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][60], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][60], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][60], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][60], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][60], 1);

    cloth_Txd[playerid][61] = CreatePlayerTextDraw(playerid, 226.000, 92.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][61], 0.169, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][61], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][61], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][61], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][61], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][61], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][61], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][61], 1);

    cloth_Txd[playerid][62] = CreatePlayerTextDraw(playerid, 222.000, 123.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][62], 6.000, -3.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][62], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][62], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][62], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][62], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][62], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][62], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][62], 1);

    cloth_Txd[playerid][63] = CreatePlayerTextDraw(playerid, 221.000, 123.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][63], 1.000, -7.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][63], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][63], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][63], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][63], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][63], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][63], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][63], 1);

    cloth_Txd[playerid][64] = CreatePlayerTextDraw(playerid, 222.000, 117.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][64], 4.000, -1.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][64], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][64], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][64], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][64], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][64], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][64], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][64], 1);

    cloth_Txd[playerid][65] = CreatePlayerTextDraw(playerid, 227.000, 118.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][65], 1.000, 2.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][65], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][65], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][65], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][65], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][65], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][65], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][65], 1);

    cloth_Txd[playerid][66] = CreatePlayerTextDraw(playerid, 225.000, 116.000, "\\");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][66], 0.210, 0.198);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][66], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][66], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][66], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][66], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][66], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][66], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][66], 1);

    cloth_Txd[playerid][67] = CreatePlayerTextDraw(playerid, 222.000, 136.000, "X");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][67], 0.210, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][67], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][67], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][67], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][67], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][67], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][67], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][67], 1);

    cloth_Txd[playerid][68] = CreatePlayerTextDraw(playerid, 71.000, 202.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][68], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][68], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][68], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][68], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][68], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][68], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][68], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][68], 1);

    cloth_Txd[playerid][69] = CreatePlayerTextDraw(playerid, 123.000, 202.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][69], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][69], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][69], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][69], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][69], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][69], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][69], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][69], 1);

    cloth_Txd[playerid][70] = CreatePlayerTextDraw(playerid, 198.000, 202.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][70], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][70], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][70], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][70], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][70], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][70], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][70], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][70], 1);

    cloth_Txd[playerid][71] = CreatePlayerTextDraw(playerid, 147.000, 202.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][71], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][71], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][71], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][71], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][71], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][71], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][71], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][71], 1);

    cloth_Txd[playerid][72] = CreatePlayerTextDraw(playerid, 71.000, 113.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][72], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][72], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][72], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][72], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][72], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][72], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][72], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][72], 1);

    cloth_Txd[playerid][73] = CreatePlayerTextDraw(playerid, 123.000, 113.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][73], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][73], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][73], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][73], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][73], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][73], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][73], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][73], 1);

    cloth_Txd[playerid][74] = CreatePlayerTextDraw(playerid, 198.000, 113.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][74], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][74], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][74], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][74], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][74], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][74], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][74], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][74], 1);

    cloth_Txd[playerid][75] = CreatePlayerTextDraw(playerid, 147.000, 113.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][75], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][75], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][75], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][75], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][75], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][75], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][75], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][75], 1);

    cloth_Txd[playerid][76] = CreatePlayerTextDraw(playerid, 71.000, 158.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][76], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][76], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][76], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][76], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][76], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][76], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][76], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][76], 1);

    cloth_Txd[playerid][77] = CreatePlayerTextDraw(playerid, 123.000, 158.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][77], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][77], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][77], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][77], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][77], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][77], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][77], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][77], 1);

    cloth_Txd[playerid][78] = CreatePlayerTextDraw(playerid, 198.000, 158.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][78], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][78], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][78], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][78], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][78], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][78], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][78], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][78], 1);

    cloth_Txd[playerid][79] = CreatePlayerTextDraw(playerid, 147.000, 158.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][79], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][79], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][79], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][79], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][79], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][79], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][79], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][79], 1);

    cloth_Txd[playerid][80] = CreatePlayerTextDraw(playerid, 71.000, 246.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][80], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][80], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][80], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][80], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][80], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][80], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][80], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][80], 1);

    cloth_Txd[playerid][81] = CreatePlayerTextDraw(playerid, 123.000, 246.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][81], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][81], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][81], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][81], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][81], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][81], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][81], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][81], 1);

    cloth_Txd[playerid][82] = CreatePlayerTextDraw(playerid, 198.000, 246.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][82], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][82], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][82], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][82], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][82], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][82], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][82], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][82], 1);

    cloth_Txd[playerid][83] = CreatePlayerTextDraw(playerid, 147.000, 246.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][83], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][83], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][83], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][83], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][83], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][83], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][83], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][83], 1);

    cloth_Txd[playerid][84] = CreatePlayerTextDraw(playerid, 71.000, 290.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][84], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][84], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][84], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][84], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][84], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][84], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][84], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][84], 1);

    cloth_Txd[playerid][85] = CreatePlayerTextDraw(playerid, 123.000, 290.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][85], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][85], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][85], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][85], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][85], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][85], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][85], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][85], 1);

    cloth_Txd[playerid][86] = CreatePlayerTextDraw(playerid, 198.000, 290.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][86], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][86], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][86], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][86], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][86], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][86], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][86], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][86], 1);

    cloth_Txd[playerid][87] = CreatePlayerTextDraw(playerid, 147.000, 290.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][87], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][87], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][87], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][87], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][87], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][87], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][87], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][87], 1);

    cloth_Txd[playerid][88] = CreatePlayerTextDraw(playerid, 71.000, 334.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][88], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][88], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][88], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][88], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][88], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][88], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][88], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][88], 1);

    cloth_Txd[playerid][89] = CreatePlayerTextDraw(playerid, 123.000, 334.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][89], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][89], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][89], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][89], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][89], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][89], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][89], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][89], 1);

    cloth_Txd[playerid][90] = CreatePlayerTextDraw(playerid, 198.000, 334.000, ">");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][90], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][90], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][90], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][90], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][90], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][90], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][90], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][90], 1);

    cloth_Txd[playerid][91] = CreatePlayerTextDraw(playerid, 147.000, 334.000, "<");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][91], 0.280, 1.098);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][91], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][91], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][91], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][91], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][91], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][91], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][91], 1);

    cloth_Txd[playerid][92] = CreatePlayerTextDraw(playerid, 64.000, 180.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][92], 0.128, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][92], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][92], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][92], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][92], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][92], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][92], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][92], 1);

    cloth_Txd[playerid][93] = CreatePlayerTextDraw(playerid, 64.000, 223.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][93], 0.128, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][93], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][93], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][93], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][93], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][93], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][93], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][93], 1);

    cloth_Txd[playerid][94] = CreatePlayerTextDraw(playerid, 64.000, 267.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][94], 0.128, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][94], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][94], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][94], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][94], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][94], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][94], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][94], 1);

    cloth_Txd[playerid][95] = CreatePlayerTextDraw(playerid, 64.000, 310.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][95], 0.128, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][95], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][95], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][95], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][95], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][95], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][95], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][95], 1);

    cloth_Txd[playerid][96] = CreatePlayerTextDraw(playerid, 64.000, 137.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][96], 0.128, 0.898);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][96], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][96], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][96], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][96], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][96], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][96], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][96], 1);

    cloth_Txd[playerid][97] = CreatePlayerTextDraw(playerid, 65.000, 95.000, "Skin");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][97], 0.150, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][97], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][97], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][97], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][97], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][97], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][97], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][97], 1);

    cloth_Txd[playerid][98] = CreatePlayerTextDraw(playerid, 96.000, 60.000, "CHARACTER CREATION");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][98], 0.237, 1.399);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][98], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][98], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][98], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][98], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][98], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][98], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][98], 1);

    cloth_Txd[playerid][99] = CreatePlayerTextDraw(playerid, 118.000, 235.000, "0/33");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][99], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][99], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][99], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][99], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][99], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][99], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][99], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][99], 1);

    cloth_Txd[playerid][100] = CreatePlayerTextDraw(playerid, 194.000, 235.000, "0/18");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][100], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][100], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][100], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][100], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][100], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][100], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][100], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][100], 1);

    cloth_Txd[playerid][101] = CreatePlayerTextDraw(playerid, 117.000, 279.000, "0/38");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][101], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][101], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][101], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][101], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][101], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][101], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][101], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][101], 1);

    cloth_Txd[playerid][102] = CreatePlayerTextDraw(playerid, 194.000, 279.000, "0/18");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][102], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][102], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][102], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][102], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][102], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][102], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][102], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][102], 1);

    cloth_Txd[playerid][103] = CreatePlayerTextDraw(playerid, 118.000, 324.000, "0/16");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][103], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][103], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][103], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][103], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][103], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][103], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][103], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][103], 1);

    cloth_Txd[playerid][104] = CreatePlayerTextDraw(playerid, 194.000, 324.000, "0/18");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][104], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][104], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][104], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][104], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][104], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][104], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][104], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][104], 1);

    cloth_Txd[playerid][105] = CreatePlayerTextDraw(playerid, 172.000, 115.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][105], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][105], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][105], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][105], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][105], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][105], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][105], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][105], 1);

    cloth_Txd[playerid][106] = CreatePlayerTextDraw(playerid, 96.000, 158.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][106], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][106], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][106], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][106], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][106], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][106], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][106], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][106], 1);

    cloth_Txd[playerid][107] = CreatePlayerTextDraw(playerid, 173.000, 158.000, "None");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][107], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][107], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][107], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][107], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][107], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][107], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][107], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][107], 1);

    cloth_Txd[playerid][108] = CreatePlayerTextDraw(playerid, 96.000, 202.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][108], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][108], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][108], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][108], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][108], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][108], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][108], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][108], 1);

    cloth_Txd[playerid][109] = CreatePlayerTextDraw(playerid, 173.000, 202.000, "None");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][109], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][109], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][109], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][109], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][109], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][109], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][109], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][109], 1);

    cloth_Txd[playerid][110] = CreatePlayerTextDraw(playerid, 96.000, 246.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][110], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][110], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][110], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][110], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][110], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][110], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][110], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][110], 1);

    cloth_Txd[playerid][111] = CreatePlayerTextDraw(playerid, 173.000, 246.000, "None");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][111], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][111], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][111], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][111], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][111], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][111], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][111], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][111], 1);

    cloth_Txd[playerid][112] = CreatePlayerTextDraw(playerid, 96.000, 290.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][112], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][112], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][112], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][112], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][112], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][112], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][112], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][112], 1);

    cloth_Txd[playerid][113] = CreatePlayerTextDraw(playerid, 173.000, 290.000, "None");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][113], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][113], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][113], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][113], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][113], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][113], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][113], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][113], 1);

    cloth_Txd[playerid][114] = CreatePlayerTextDraw(playerid, 96.000, 334.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][114], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][114], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][114], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][114], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][114], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][114], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][114], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][114], 1);

    cloth_Txd[playerid][115] = CreatePlayerTextDraw(playerid, 173.000, 335.000, "None");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][115], 0.119, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][115], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][115], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][115], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][115], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][115], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][115], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][115], 1);

    cloth_Txd[playerid][116] = CreatePlayerTextDraw(playerid, 117.000, 104.000, "0/177");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][116], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][116], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][116], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][116], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][116], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][116], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][116], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][116], 1);

    cloth_Txd[playerid][117] = CreatePlayerTextDraw(playerid, 193.000, 102.000, "0/60");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][117], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][117], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][117], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][117], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][117], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][117], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][117], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][117], 1);

    cloth_Txd[playerid][118] = CreatePlayerTextDraw(playerid, 117.000, 148.000, "0/87");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][118], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][118], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][118], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][118], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][118], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][118], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][118], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][118], 1);

    cloth_Txd[playerid][119] = CreatePlayerTextDraw(playerid, 193.000, 148.000, "0/18");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][119], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][119], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][119], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][119], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][119], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][119], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][119], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][119], 1);

    cloth_Txd[playerid][120] = CreatePlayerTextDraw(playerid, 117.000, 191.000, "0/7");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][120], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][120], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][120], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][120], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][120], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][120], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][120], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][120], 1);

    cloth_Txd[playerid][121] = CreatePlayerTextDraw(playerid, 193.000, 191.000, "0/18");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][121], 0.149, 0.698);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][121], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][121], -16776961);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][121], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][121], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][121], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][121], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][121], 1);

    cloth_Txd[playerid][122] = CreatePlayerTextDraw(playerid, 96.000, 113.000, "0");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][122], 0.150, 0.888);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][122], 2);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][122], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][122], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][122], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][122], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][122], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][122], 1);

    cloth_Txd[playerid][123] = CreatePlayerTextDraw(playerid, 227.000, 95.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, cloth_Txd[playerid][123], 1.000, 5.000);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][123], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][123], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][123], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][123], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][123], 255);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][123], 4);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][123], 1);

    cloth_Txd[playerid][124] = CreatePlayerTextDraw(playerid, 84.000, 325.000, "Accessories");
    PlayerTextDrawLetterSize(playerid, cloth_Txd[playerid][124], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, cloth_Txd[playerid][124], 1);
    PlayerTextDrawColor(playerid, cloth_Txd[playerid][124], -1);
    PlayerTextDrawSetShadow(playerid, cloth_Txd[playerid][124], 0);
    PlayerTextDrawSetOutline(playerid, cloth_Txd[playerid][124], 0);
    PlayerTextDrawBackgroundColor(playerid, cloth_Txd[playerid][124], 150);
    PlayerTextDrawFont(playerid, cloth_Txd[playerid][124], 1);
    PlayerTextDrawSetProportional(playerid, cloth_Txd[playerid][124], 1);


}
