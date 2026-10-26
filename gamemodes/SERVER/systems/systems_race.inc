#include <YSI_Coding\y_hooks>

#define             MAX_RACING_CP             51
#define INVALID_RACE_ID    -1


new PlayerText: Race_Tablet[MAX_PLAYERS][35];
new PlayerText: Race_Leaderboard[MAX_PLAYERS][8];

new ListedItems[MAX_PLAYERS][50];

enum E_PLAYER_RACING {
    bool:raceExists,
    bool:raceStarted,
    raceWinner,
    raceFinish,
    Float:raceX[MAX_RACING_CP],
    Float:raceY[MAX_RACING_CP],
    Float:raceZ[MAX_RACING_CP],
    bool:racePosExists[MAX_RACING_CP],
    raceCountdown,
    Timer:raceTimer,
};

enum {
    RACE_CP_NORMAL = 0,
    RACE_CP_FINISH
};
new
    RaceData[MAX_PLAYERS][E_PLAYER_RACING],
    RaceWith[MAX_PLAYERS],
    InRace[MAX_PLAYERS],
    RaceIndex[MAX_PLAYERS];

//new gRaceLeaderboard[3][MAX_PLAYER_NAME];
//new gRaceProgressTop[3];


hook OnPlayerConnect(playerid)
{
    Race_Tablet[playerid][0] = CreatePlayerTextDraw(playerid, 195.000, 146.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][0], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][0], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][0], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][0], 1);

    Race_Tablet[playerid][1] = CreatePlayerTextDraw(playerid, 195.000, 310.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][1], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][1], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][1], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][1], 1);

    Race_Tablet[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 309.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][2], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][2], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][2], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][2], 1);

    Race_Tablet[playerid][3] = CreatePlayerTextDraw(playerid, 422.000, 146.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][3], 23.000, 28.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][3], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][3], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][3], 1);

    Race_Tablet[playerid][4] = CreatePlayerTextDraw(playerid, 206.000, 151.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][4], 227.000, 7.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][4], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][4], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][4], 1);

    Race_Tablet[playerid][5] = CreatePlayerTextDraw(playerid, 206.000, 305.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][5], 175.000, 7.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][5], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][5], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][5], 1);

    Race_Tablet[playerid][6] = CreatePlayerTextDraw(playerid, 199.000, 158.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][6], 5.000, 166.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][6], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][6], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][6], 1);

    Race_Tablet[playerid][7] = CreatePlayerTextDraw(playerid, 434.000, 158.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][7], 7.000, 163.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][7], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][7], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][7], 1);

    Race_Tablet[playerid][8] = CreatePlayerTextDraw(playerid, 203.000, 158.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][8], 232.000, 175.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][8], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][8], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][8], 1);

    Race_Tablet[playerid][9] = CreatePlayerTextDraw(playerid, 206.000, 158.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][9], 228.000, 167.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][9], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][9], 331519);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][9], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][9], 1);

    Race_Tablet[playerid][10] = CreatePlayerTextDraw(playerid, 207.000, 158.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][10], 227.000, 15.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][10], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][10], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][10], 1);

    Race_Tablet[playerid][11] = CreatePlayerTextDraw(playerid, 406.000, 162.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][11], 13.000, 7.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][11], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][11], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][11], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][11], 1);

    Race_Tablet[playerid][12] = CreatePlayerTextDraw(playerid, 408.000, 163.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][12], 10.000, 4.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][12], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][12], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][12], 1);

    Race_Tablet[playerid][13] = CreatePlayerTextDraw(playerid, 409.000, 163.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][13], 8.000, 4.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][13], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][13], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][13], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][13], 1);

    Race_Tablet[playerid][14] = CreatePlayerTextDraw(playerid, 411.000, 163.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][14], 4.000, 4.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][14], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][14], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][14], 1);

    Race_Tablet[playerid][15] = CreatePlayerTextDraw(playerid, 419.000, 163.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][15], 2.000, 4.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][15], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][15], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][15], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][15], 1);

    Race_Tablet[playerid][16] = CreatePlayerTextDraw(playerid, 221.000, 161.000, "08:09");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][16], 0.160, 0.999);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][16], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][16], 255);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][16], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][16], 1);

    Race_Tablet[playerid][17] = CreatePlayerTextDraw(playerid, 235.000, 181.000, "Selamat Datang");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][17], 0.180, 1.199);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][17], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][17], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][17], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][17], 1);

    Race_Tablet[playerid][18] = CreatePlayerTextDraw(playerid, 232.000, 195.000, "Alvian_Jagata");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][18], 0.180, 1.199);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][18], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][18], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][18], 16744447);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][18], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][18], 1);

    Race_Tablet[playerid][19] = CreatePlayerTextDraw(playerid, 211.000, 291.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][19], 51.000, 24.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][19], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][19], 16744447);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][19], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][19], 1);

    Race_Tablet[playerid][20] = CreatePlayerTextDraw(playerid, 267.000, 291.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][20], 51.000, 24.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][20], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][20], 16744447);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][20], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][20], 1);

    Race_Tablet[playerid][21] = CreatePlayerTextDraw(playerid, 323.000, 291.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][21], 51.000, 24.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][21], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][21], 16744447);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][21], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][21], 1);

    Race_Tablet[playerid][22] = CreatePlayerTextDraw(playerid, 379.000, 291.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][22], 51.000, 24.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][22], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][22], 16744447);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][22], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][22], 1);

    //player menu
    Race_Tablet[playerid][23] = CreatePlayerTextDraw(playerid, 212.000, 292.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][23], 49.000, 22.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][23], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][23], 331519);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][23], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][23], 1);
    PlayerTextDrawSetSelectable(playerid, Race_Tablet[playerid][23], 1);

    //keluar balapan
    Race_Tablet[playerid][24] = CreatePlayerTextDraw(playerid, 268.000, 292.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][24], 49.000, 21.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][24], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][24], 331519);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][24], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][24], 1);
    PlayerTextDrawSetSelectable(playerid, Race_Tablet[playerid][24], 1);

    //track list
    Race_Tablet[playerid][25] = CreatePlayerTextDraw(playerid, 324.000, 292.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][25], 49.000, 22.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][25], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][25], 331519);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][25], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][25], 1);
    PlayerTextDrawSetSelectable(playerid, Race_Tablet[playerid][25], 1);

    //buat track
    Race_Tablet[playerid][26] = CreatePlayerTextDraw(playerid, 380.000, 292.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][26], 49.000, 22.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][26], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][26], 331519);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][26], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][26], 1);
    PlayerTextDrawSetSelectable(playerid, Race_Tablet[playerid][26], 1);

    Race_Tablet[playerid][27] = CreatePlayerTextDraw(playerid, 237.000, 275.000, "Player Menu");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][27], 0.180, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][27], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][27], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][27], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][27], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][27], 1);

    Race_Tablet[playerid][28] = CreatePlayerTextDraw(playerid, 292.000, 275.000, "Keluar Balapan");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][28], 0.180, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][28], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][28], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][28], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][28], 1);

    Race_Tablet[playerid][29] = CreatePlayerTextDraw(playerid, 347.000, 275.000, "Track List");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][29], 0.180, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][29], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][29], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][29], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][29], 1);

    Race_Tablet[playerid][30] = CreatePlayerTextDraw(playerid, 406.000, 275.000, "Buat Track");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][30], 0.180, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][30], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][30], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][30], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][30], 1);

    Race_Tablet[playerid][31] = CreatePlayerTextDraw(playerid, 271.000, 181.000, "_");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][31], 98.000, 90.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][31], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][31], 0);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][31], 5);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][31], 0);
    PlayerTextDrawSetPreviewModel(playerid, Race_Tablet[playerid][31], 19166);
    PlayerTextDrawSetPreviewRot(playerid, Race_Tablet[playerid][31], -89.000, 0.000, 0.000, 0.598);
    PlayerTextDrawSetPreviewVehCol(playerid, Race_Tablet[playerid][31], 0, 0);

    Race_Tablet[playerid][32] = CreatePlayerTextDraw(playerid, 400.000, 176.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][32], 24.000, 25.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][32], 1);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][32], -2147483495);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][32], 255);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][32], 1);
    PlayerTextDrawSetSelectable(playerid, Race_Tablet[playerid][32], 1);

    Race_Tablet[playerid][33] = CreatePlayerTextDraw(playerid, 410.000, 182.000, "[");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][33], 0.180, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][33], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][33], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][33], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][33], 1);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][33], 1);

    Race_Tablet[playerid][34] = CreatePlayerTextDraw(playerid, 414.000, 182.000, "->");
    PlayerTextDrawLetterSize(playerid, Race_Tablet[playerid][34], 0.129, 1.090);
    PlayerTextDrawTextSize(playerid, Race_Tablet[playerid][34], 68.000, 70.000);
    PlayerTextDrawAlignment(playerid, Race_Tablet[playerid][34], 2);
    PlayerTextDrawColor(playerid, Race_Tablet[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, Race_Tablet[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, Race_Tablet[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Tablet[playerid][34], 150);
    PlayerTextDrawFont(playerid, Race_Tablet[playerid][34], 2);
    PlayerTextDrawSetProportional(playerid, Race_Tablet[playerid][34], 1);

    Race_Leaderboard[playerid][0] = CreatePlayerTextDraw(playerid, 29.000, 177.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Leaderboard[playerid][0], 92.000, 21.000);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][0], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][0], 118233343);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][0], 255);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][0], 1);

    Race_Leaderboard[playerid][1] = CreatePlayerTextDraw(playerid, 29.000, 198.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Leaderboard[playerid][1], 92.000, 20.000);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][1], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][1], -1351540225);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][1], 255);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][1], 1);

    Race_Leaderboard[playerid][2] = CreatePlayerTextDraw(playerid, 29.000, 218.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Leaderboard[playerid][2], 92.000, 20.000);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][2], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][2], -2139062017);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][2], 255);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][2], 1);

    Race_Leaderboard[playerid][3] = CreatePlayerTextDraw(playerid, 29.000, 237.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, Race_Leaderboard[playerid][3], 92.000, 20.000);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][3], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][3], 2071743487);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][3], 255);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][3], 1);

    Race_Leaderboard[playerid][4] = CreatePlayerTextDraw(playerid, 75.000, 182.000, "Racing Leaderboard");
    PlayerTextDrawLetterSize(playerid, Race_Leaderboard[playerid][4], 0.190, 1.199);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][4], 2);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][4], 150);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][4], 1);

    Race_Leaderboard[playerid][5] = CreatePlayerTextDraw(playerid, 33.000, 201.000, "1. -");
    PlayerTextDrawLetterSize(playerid, Race_Leaderboard[playerid][5], 0.190, 1.099);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][5], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][5], 150);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][5], 1);

    Race_Leaderboard[playerid][6] = CreatePlayerTextDraw(playerid, 33.000, 220.000, "2. -");
    PlayerTextDrawLetterSize(playerid, Race_Leaderboard[playerid][6], 0.190, 1.099);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][6], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][6], 150);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][6], 1);

    Race_Leaderboard[playerid][7] = CreatePlayerTextDraw(playerid, 33.000, 241.000, "3. -");
    PlayerTextDrawLetterSize(playerid, Race_Leaderboard[playerid][7], 0.190, 1.099);
    PlayerTextDrawAlignment(playerid, Race_Leaderboard[playerid][7], 1);
    PlayerTextDrawColor(playerid, Race_Leaderboard[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, Race_Leaderboard[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, Race_Leaderboard[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, Race_Leaderboard[playerid][7], 150);
    PlayerTextDrawFont(playerid, Race_Leaderboard[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, Race_Leaderboard[playerid][7], 1);

    Race_ResetData(playerid);

    RaceWith[playerid] = INVALID_PLAYER_ID;
    InRace[playerid] = false;
    RaceIndex[playerid] = -1;
}


Race_UpdateGroupLeaderboard(racing)
{
    new temp[MAX_PLAYERS][2], count = 0;

    // kumpulin semua player yg ikut race ini
    foreach(new i : Player)
    {
        if(InRace[i] && RaceWith[i] == racing)
        {
            temp[count][0] = i;                  // simpan playerid
            temp[count][1] = RaceIndex[i];       // simpan progress checkpoint
            count++;
        }
    }

    // urutkan descending (progress paling tinggi = ranking atas)
    for(new a = 0; a < count; a++)
    {
        for(new b = a + 1; b < count; b++)
        {
            if(temp[b][1] > temp[a][1])
            {
                new swap[2];
                swap[0] = temp[a][0];
                swap[1] = temp[a][1];
                temp[a][0] = temp[b][0];
                temp[a][1] = temp[b][1];
                temp[b][0] = swap[0];
                temp[b][1] = swap[1];
            }
        }
    }

    // update textdraw ke semua peserta race ini
    foreach(new i : Player)
    {
        if(InRace[i] && RaceWith[i] == racing)
        {
            // reset dulu biar gak ada sampah nama
            PlayerTextDrawSetString(i, Race_Leaderboard[i][5], "1. -");
            PlayerTextDrawSetString(i, Race_Leaderboard[i][6], "2. -");
            PlayerTextDrawSetString(i, Race_Leaderboard[i][7], "3. -");

            new str[64];

            for(new x = 0; x < 3 && x < count; x++) // cuma top 3
            {
                format(str, sizeof(str), "%d. %s", x+1, ReturnName(i));

                PlayerTextDrawSetString(i, Race_Leaderboard[i][5 + x], str);
            }
        }
    }
}


Race_ResetData(playerid) {

    RaceData[playerid][raceExists] = false;
    RaceData[playerid][raceStarted] = false;
    RaceData[playerid][raceWinner] = INVALID_PLAYER_ID;
    RaceData[playerid][raceFinish] = -1;

    for(new i = 0; i < MAX_RACING_CP; i++) {
        RaceData[playerid][raceX][i] = 0.0;
        RaceData[playerid][raceY][i] = 0.0;
        RaceData[playerid][raceZ][i] = 0.0;
        RaceData[playerid][racePosExists][i] = false;
    }

    return 1;
}

Race_ShowTablet(playerid, bool: show = true)
{
    if(show == true)
    {
        AllGui_Status(playerid, false);
        forex(i, 35) PlayerTextDrawShow(playerid, Race_Tablet[playerid][i]);
        SelectTextDraw(playerid, -1);
    }
    else
    {
        forex(i, 35) PlayerTextDrawHide(playerid, Race_Tablet[playerid][i]);
        CancelSelectTextDraw(playerid);
        AllGui_Status(playerid, true);
    }
}

Race_ShowLeaderboard(playerid, bool: show = true)
{
    if(show == true)
    {
        forex(i, 8) PlayerTextDrawShow(playerid, Race_Leaderboard[playerid][i]);
    }
    else
    {
        forex(i, 8) PlayerTextDrawHide(playerid, Race_Leaderboard[playerid][i]);
    }
}

Race_SetCheckpoint(playerid, index) {

    if(!IsPlayerConnected(playerid))
        return 0;

    new Float:x, Float:y, Float:z;

    if(IsPlayerInAnyVehicle(playerid))
        GetVehiclePos(GetPlayerVehicleID(playerid), x, y, z);
    else 
        GetPlayerPos(playerid, x, y, z);

    RaceData[playerid][raceX][index] = x;
    RaceData[playerid][raceY][index] = y;
    RaceData[playerid][raceZ][index] = z;
    RaceData[playerid][racePosExists][index] = true;

    Info(playerid, "Checkpoint ke %d berhasil diatur!", index + 1);
    return 1;
}

IsPlayerHasRaceCP(playerid) {

    new is_have = 0;
    for(new i = 0; i < MAX_RACING_CP; i++) if(RaceData[playerid][racePosExists][i]) {
        is_have = 1;
        break;
    }
    return is_have;
}

Race_GetLastAvailableCP(playerid) {

    new index_result = -1;
    for(new i = 0; i < MAX_RACING_CP; i++) if(!RaceData[playerid][racePosExists][i]) {
        index_result = i;
        break;
    }
    return index_result;
}

Race_ShowPlayerCount(playerid)
{
    new race_id = RaceWith[playerid];
    if(race_id == INVALID_RACE_ID) return 1;

    new list[512], line[64];
    format(list, sizeof list, "Player\tProgress CP\n");

    foreach(new i : Player)
    {
        if(InRace[i] && RaceWith[i] == race_id)
        {
            format(line, sizeof line, "%s\t%d\n", ReturnName(i), RaceIndex[i]);
            strcat(list, line);
        }
    }

    ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_TABLIST_HEADERS, "Player dalam Race", list, "OK", "");
    return 1;
}


Race_ResetPlayer(playerid) {

    InRace[playerid] = false;
    RaceIndex[playerid] = -1;
    RaceWith[playerid] = INVALID_PLAYER_ID;

    DisablePlayerRaceCheckpoint(playerid);
    return 1;
}
Race_ProgressCP(playerid) {

    new
        racing = RaceWith[playerid], 
        index = -1;

    index = RaceIndex[playerid];
    
    if(RaceIndex[playerid] == RaceData[racing][raceFinish]) {
        if(RaceData[racing][raceWinner] == INVALID_PLAYER_ID) 
            RaceData[racing][raceWinner] = playerid;

        if(RaceData[racing][raceWinner] == playerid) {
            foreach(new i : Player) if(InRace[i] && RaceWith[i] == racing) {
                SendClientMessageEx(i, X11_LIGHTBLUE, "[Race]: "WHITE"Posisi finish pertama didapatkan oleh "YELLOW"%s", ReturnName(playerid));
                Race_ShowLeaderboard(i, false);
            }
        }

        Race_ResetPlayer(playerid);

        if(Race_IsAnyPlayerInRace(racing) == INVALID_PLAYER_ID) {
            SendClientMessage(racing, X11_LIGHTBLUE, "[Race]: "WHITE"Balapan selesai, semua player yang ikut balapan sudah memasuki checkpoint finish!");

            RaceData[racing][raceStarted] = false;
        }
    }
    else if(RaceIndex[playerid] == RaceData[racing][raceFinish] - 1) {
        SetPlayerRaceCheckpoint(playerid, 1, RaceData[racing][raceX][index],  RaceData[racing][raceY][index],  RaceData[racing][raceZ][index], 0.0, 0.0, 0.0, 5.0);
        RemovePlayerMapIcon(playerid, 98);
    }
    else {
        PlayerPlaySound(playerid, 1139, 0.0, 0.0, 0.0);
        SetPlayerRaceCheckpoint(playerid, 0, RaceData[racing][raceX][index],  RaceData[racing][raceY][index],  RaceData[racing][raceZ][index], RaceData[racing][raceX][index + 1],  RaceData[racing][raceY][index + 1],  RaceData[racing][raceZ][index + 1], 5.0);
        SetPlayerMapIcon(playerid, 98, RaceData[racing][raceX][index + 1],  RaceData[racing][raceY][index + 1],  RaceData[racing][raceZ][index + 1], 56, X11_WHITE, MAPICON_GLOBAL);
    }

    if(racing != INVALID_PLAYER_ID) Race_UpdateGroupLeaderboard(racing);

    return 1;
}

Race_SetStart(playerid, time) {

    RaceData[playerid][raceStarted] = true;
    RaceData[playerid][raceTimer] = repeat Race_Countdown[1000](playerid);
    RaceData[playerid][raceCountdown] = time;

    return 1;
}

Race_IsAnyPlayerInRace(playerid) {
    new index = INVALID_PLAYER_ID;
    foreach(new i : Player) if(InRace[i] && RaceWith[i] == playerid) {

        index = i;
        break;
    }
    return index;
}


hook OnPlayerEnterRaceCP(playerid) {
    if(InRace[playerid] && RaceWith[playerid] != INVALID_PLAYER_ID) {

        RaceIndex[playerid]++;
        Race_ProgressCP(playerid);
    }
}

hook OnPlayerDisconnectEx(playerid) {

    foreach(new i : Player) if(InRace[i] && RaceWith[i] == playerid) {

        if(i == playerid)
            continue;

        Race_ResetPlayer(i);
        Info(playerid, "Penyelenggara balapan keluar dari server, balapan otomatis dihentikan.");
    }
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) {
    if(dialogid == DIALOG_LOAD_RACE) {
        if(response) {

            new query[172];
            mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_cps` WHERE `RaceID` = '%d' ORDER BY `ID` ASC;", ListedItems[playerid][listitem]);
            mysql_tquery(g_SQL, query, "OnLoadRace", "d", playerid);
        }
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

timer Race_Countdown[1000](playerid) 
{
    if(RaceData[playerid][raceCountdown] == 0) {
        foreach(new i : Player) if(RaceWith[i] == playerid) {
            GameTextForPlayer(i, "Start!", 3000, 3);
            PlayerPlaySound(i, 1057, 0,0,0);
            InRace[i] = true;
            RaceIndex[i] = 0;

            SetPlayerRaceCheckpoint(i, 0, RaceData[playerid][raceX][0], RaceData[playerid][raceY][0], RaceData[playerid][raceZ][0], RaceData[playerid][raceX][1], RaceData[playerid][raceY][1], RaceData[playerid][raceZ][1], 5.0);
            TogglePlayerControllable(i, 1);
            Race_ShowLeaderboard(i);
        }

        stop RaceData[playerid][raceTimer];
    }
    else {

        RaceData[playerid][raceCountdown]--;
        foreach(new i : Player) if(RaceWith[i] == playerid) {
            GameTextForPlayer(i, sprintf("%d", RaceData[playerid][raceCountdown]), 1000, 3);
            PlayerPlaySound(i, 1056, 0,0,0);
        }
    }
}


function OnRaceListCreated(playerid) {
    
    new get_id = cache_insert_id();
    new string[512];

    for(new i = 0; i < 50; i++) if(RaceData[playerid][racePosExists][i]) {

        if(i == RaceData[playerid][raceFinish]) {

            mysql_format(g_SQL, string, sizeof(string), "INSERT INTO `race_cps` (`RaceID`, `Type`, `PosX`, `PosY`, `PosZ`, `CPIndex`) VALUES('%d', '%d', '%f', '%f', '%f', 'Index_%d')", get_id, RACE_CP_FINISH, RaceData[playerid][raceX][i], RaceData[playerid][raceY][i], RaceData[playerid][raceZ][i], i);
            mysql_tquery(g_SQL, string);
        } 
        else {
            mysql_format(g_SQL, string, sizeof(string), "INSERT INTO `race_cps` (`RaceID`, `Type`, `PosX`, `PosY`, `PosZ`, `CPIndex`) VALUES('%d', '%d', '%f', '%f', '%f', 'Index_%d')", get_id, RACE_CP_NORMAL, RaceData[playerid][raceX][i], RaceData[playerid][raceY][i], RaceData[playerid][raceZ][i], i);
            mysql_tquery(g_SQL, string);
        }
    }
    return 1;
}
/* Commands */

CMD:race(playerid, params[]) {
    
    new type[24], string[128];
        
    if(sscanf(params, "s[24]S()[128]", type, string))
        return Syntax(playerid, "/race [scp/finish/invite/kick/start/removefinish/leave/tablet]");


    if(!strcmp(type, "scp", true)) {

        new index,
            real_index;

        if(sscanf(string, "d", index))
            return Syntax(playerid, "/race [scp] [Checkpoint 1 - 50]"), SendClientMessage(playerid, -1, "INFO: Tidak wajib sampai 50, 50 hanya untuk limitasi maksimal checkpoint.");


        if(index < 1 || index > 50)
            return Error(playerid, "Invalid checkpoint index!");

        real_index = index - 1;

        if(index > 1 && !RaceData[playerid][racePosExists][real_index - 1])
            return Error(playerid, "Checkpoint ke %d masih belum ada! kamu harus set Checkpoint sebelumnya terlebih dahulu!", real_index);

        Race_SetCheckpoint(playerid, real_index);
    }
    else if(!strcmp(type, "save", true)) {

        if(!IsPlayerHasRaceCP(playerid))
            return Error(playerid, "Kamu belum mengatur checkpoint satupun!");

        if(RaceData[playerid][raceFinish] == -1)
            return Error(playerid, "Kamu belum mengatur checkpoint finish!");
            
        if(isnull(string))
            return Syntax(playerid, "/race [save] <name>");

        if(strlen(string) > 24)
            return Error(playerid, "Nama map balapan tidak boleh lebih dari 24 huruf.");

        new query[156];
        mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_list` WHERE `RaceName` = '%s'", string);
        mysql_tquery(g_SQL, query, "CheckRaceName", "ds", playerid, string);

    }
    /*
    else if(!strcmp(type, "load", true)) {

        new query[156];
        mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_list` WHERE `OwnerID` = '%d'", AccountData[playerid][pID]);
        mysql_tquery(g_SQL, query, "OnLoadRaceCheck", "d", playerid);    
    }
    else if(!strcmp(type, "removefinish", true)) {

        if(RaceData[playerid][raceStarted])
            return Error(playerid, "Tidak bisa menggunakan ini ketika balapan sudah dimulai.");

        if(RaceData[playerid][raceFinish] == -1)
            return Error(playerid, "Kamu belum mengatur checkpoint finish.");

        Info(playerid, "Kamu telah menghapus checkpoint finish.");

        new
            index = RaceData[playerid][raceFinish];

        RaceData[playerid][raceFinish] = -1;
        RaceData[playerid][raceX][index] = 0.0;
        RaceData[playerid][raceY][index] = 0.0;
        RaceData[playerid][raceZ][index] = 0.0;
        RaceData[playerid][racePosExists][index] = false;
    }*/
    else if(!strcmp(type, "kick", true)) {
        new targetid;

        if(sscanf(string, "u", targetid))
            return Syntax(playerid, "/race [kick] [playerid/PartOfName]");

        if(!IsPlayerConnected(targetid) || !IsPlayerNearPlayer(playerid, targetid, 5.0))
            return Error(playerid, "You must near this player.");    

        if(RaceWith[targetid] != playerid)
            return Error(playerid, "Player tersebut tidak ada pada balapanmu!");

        Race_ResetPlayer(targetid); 
        Info(playerid, "Kamu telah mengeluarkan %s dari balapanmu.", ReturnName(targetid));
        Info(targetid, "Kamu telah dikeluarkan dari balapan oleh %s.", ReturnName(playerid));
    }
    else if(!strcmp(type, "leave", true)) {

        if(RaceWith[playerid] == INVALID_PLAYER_ID)
            return Error(playerid, "Kamu tidak berada pada balapan manapun.");

        if(RaceData[playerid][raceStarted])
            return Error(playerid, "Kamu tidak bisa keluar pada balapanmu sendiri!");

        
        Race_ResetPlayer(playerid);
        SendClientMessage(playerid, X11_LIGHTBLUE, "[Race]: "WHITE"Kamu telah keluar dari balapan.");
    }
    else if(!strcmp(type, "invite", true)) {
        new targetid;

        if(sscanf(string, "u", targetid))
            return Syntax(playerid, "/race [invite] [playerid/PartOfName]");

        if(!IsPlayerConnected(targetid) || !IsPlayerNearPlayer(playerid, targetid, 5.0))
            return Error(playerid, "You must near this player.");

        if(RaceWith[targetid] != INVALID_PLAYER_ID)
            return Error(playerid, "Player tersebut sudah pada balapan lain.");

        RaceWith[targetid] = playerid;
        Info(playerid, "Kamu telah mengundang %s kedalam balapanmu.", ReturnName(targetid));
        Info(targetid, "Kamu telah diundah oleh %s ke balapannya, gunakan \"/race leave\" untuk keluar.", ReturnName(playerid));
    }
    else if(!strcmp(type, "finish", true)) {

        if(!IsPlayerHasRaceCP(playerid))
            return Error(playerid, "Kamu belum mengatur checkpoint satupun!");

        if(RaceData[playerid][raceFinish] != -1) 
            return Error(playerid, "Kamu sudah mengatur Checkpoint finish! (/race removefinish terlebih dahulu)");
        new index = Race_GetLastAvailableCP(playerid),
            Float:x, Float:y, Float:z;

        if(index == -1)
            return Error(playerid, "Tidak dapat mengatur Checkpoint untuk finish, silahkan lapor ke Developer.");

        if(index == 1)
            return Error(playerid, "Tidak dapat membuat Finish, silahkan buat 1 Checkpoint lagi.");
            
        if(IsPlayerInAnyVehicle(playerid))
            GetVehiclePos(GetPlayerVehicleID(playerid), x, y, z);
        else 
            GetPlayerPos(playerid, x, y, z);
            
        RaceData[playerid][raceFinish] = index;
        RaceData[playerid][raceX][index] = x;
        RaceData[playerid][raceY][index] = y;
        RaceData[playerid][raceZ][index] = z;
        RaceData[playerid][racePosExists][index] = true;

        Info(playerid, "Checkpoint finish berhasil diatur!");
    }
    else if(!strcmp(type, "start", true)) {

        if(!IsPlayerHasRaceCP(playerid))
            return Error(playerid, "Kamu belum mengatur checkpoint satupun!");

        if(RaceData[playerid][raceFinish] == -1)
            return Error(playerid, "Kamu belum mengatur checkpoint finish!");

        if(RaceData[playerid][raceStarted])
            return Error(playerid, "Balapan sudah dimulai!");
            
        new time, freeze;

        if(sscanf(string, "dd", time, freeze))
            return Syntax(playerid, "/race [start] [countdown (second)] [freeze = 0 | not freeze = 1]");

        if(time < 1 || time > 20)
            return Error(playerid, "Invalid time in second!");

        if(freeze < 0 || freeze > 1)
            return Error(playerid, "Invalid freeze option.");

        RaceWith[playerid] = playerid;
        Race_SetStart(playerid, time + 1);

        foreach(new i : Player) if(RaceWith[i] == playerid) {
            TogglePlayerControllable(i, freeze);
            SetCameraBehindPlayer(i);
            SendClientMessageEx(i, X11_YELLOW, "[Race]: "WHITE"%s telah menginisiasikan untuk memulai balapan dalam %d detik.", ReturnName(playerid), time);
        }
    }
    else if(!strcmp(type, "tablet", true)) {

        if(GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
            ShowTDN(playerid, NOTIFICATION_ERROR, "Anda harus berada dari kendaraan");

        Race_ShowTablet(playerid);
    }
    return 1;
}

function OnLoadRaceCheck(playerid) {
    new e_str[512], count = 0;
    if(cache_num_rows()) {
        for(new i = 0; i < cache_num_rows(); i++) {
            new race_name[24], build_date[26], id;
            cache_get_value_name(i, "RaceName", race_name);
            cache_get_value_name(i, "CreationDate", build_date);
            id = cache_get_field_int(i, "ID");

            strcat(e_str, sprintf("%s\t%s\n", race_name, build_date));

            ListedItems[playerid][count++] = id;
        }
        ShowPlayerDialog(playerid, DIALOG_LOAD_RACE, DIALOG_STYLE_TABLIST, "Race List", e_str, "Load", "Close");
    }
    return 1;
}

function CheckRaceName(playerid, name[]) {
    if(cache_num_rows()) {
        Error(playerid, "Nama map ini sudah digunakan!");
    }
    else {
        new query[352];
        mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `race_list` (`OwnerID`, `RaceName`, `CreationDate`) VALUES('%d','%e','%e')", AccountData[playerid][pID], name, ReturnDates(false));
        mysql_tquery(g_SQL, query, "OnRaceListCreated", "d", playerid);

        Info(playerid, "Kamu telah menyimpan map balapan dengan nama "YELLOW"%s", name);
    }
    return 1;
}

function OnLoadRace(playerid) {
    if(cache_num_rows()) {

        RaceData[playerid][raceFinish] = -1;

        for(new i = 0; i < MAX_RACING_CP; i++) {
            RaceData[playerid][raceX][i] = 0.0;
            RaceData[playerid][raceY][i] = 0.0;
            RaceData[playerid][raceZ][i] = 0.0;
            RaceData[playerid][racePosExists][i] = false;
        }

        for(new i = 0; i < cache_num_rows(); i++) {
            new race_idx[16], type = cache_get_field_int(i, "Type"), 
                Float:x,
                Float:y,
                Float:z
            ;
            cache_get_value_name(i, "CPIndex", race_idx, sizeof(race_idx));
            cache_get_value_name_float(i, "PosX", x);
            cache_get_value_name_float(i, "PosY", y);
            cache_get_value_name_float(i, "PosZ", z);

            RaceData[playerid][raceX][i] = x;
            RaceData[playerid][raceY][i] = y;
            RaceData[playerid][raceZ][i] = z;
            RaceData[playerid][racePosExists][i] = true;

            if(type == RACE_CP_FINISH) {
                RaceData[playerid][raceFinish] = i;
            }
        }
        SendClientMessage(playerid, X11_YELLOW, "[Race]: "WHITE"Kamu berhasil me-load map race.");
    }
    return 1;
}

hook OnClickDynPlayerTextDraw(playerid, PlayerText:textid)
{
    if(textid == Race_Tablet[playerid][23]) //player menu
    {
        if(GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
            return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda harus berada di dalam kendaraan");

        Dialog_Show(playerid, Race_PlayerMenu, DIALOG_STYLE_TABLIST, ""RED"CHAXW PROJECT "WHITE"- Race Player Menu", 
        "Invite Ke Balapan\n"GRAY"Kick Dari Balapan\nLiat Orang Di Dalam Balapan", "Select", "Close");
    }
    if(textid == Race_Tablet[playerid][24]) //keluar balapan
    {
        if(RaceWith[playerid] == INVALID_PLAYER_ID)
            return Error(playerid, "Kamu tidak berada pada balapan manapun.");

        if(RaceData[playerid][raceStarted])
            return Error(playerid, "Kamu tidak bisa keluar pada balapanmu sendiri!");

        
        Race_ResetPlayer(playerid);
        SendClientMessage(playerid, X11_LIGHTBLUE, "[Race]: "WHITE"Kamu telah keluar dari balapan.");
    }
    if(textid == Race_Tablet[playerid][25]) //track list
    {
        new query[156];
        mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_list` WHERE `OwnerID` = '%d'", AccountData[playerid][pID]);
        mysql_tquery(g_SQL, query, "OnLoadRaceCheck", "d", playerid);  
    }
    if(textid == Race_Tablet[playerid][26]) //buat track
    {   
        if(!IsPlayerHasRaceCP(playerid))
            return Error(playerid, "Kamu belum mengatur checkpoint satupun!");

        if(RaceData[playerid][raceFinish] == -1)
            return Error(playerid, "Kamu belum mengatur checkpoint finish!");

        Dialog_Show(playerid, Race_Save, DIALOG_STYLE_TABLIST, ""RED"CHAXW PROJECT "WHITE"- Race Player Menu", 
        "Masukan Nama Track untuk di simpan ke dalam database\
        \nExample: Track Lembah", "Select", "Close");

        /*
        if(!IsPlayerHasRaceCP(playerid))
            return Error(playerid, "Kamu belum mengatur checkpoint satupun!");

        if(RaceData[playerid][raceFinish] == -1)
            return Error(playerid, "Kamu belum mengatur checkpoint finish!");
            
        if(isnull(string))
            return Syntax(playerid, "/race [save] <name>");

        if(strlen(string) > 24)
            return Error(playerid, "Nama map balapan tidak boleh lebih dari 24 huruf.");

        new query[156];
        mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_list` WHERE `RaceName` = '%s'", string);
        mysql_tquery(g_SQL, query, "CheckRaceName", "ds", playerid, string);*/
    }   
    if(textid == Race_Tablet[playerid][32]) //keluar
    { 
        Race_ShowTablet(playerid, false);
    }
    return 1;
}

Dialog:Race_PlayerMenu(playerid, response, listitem, inputtext[])
{
    if(response)
    {
        if(listitem == 0)
        {
            new count = 0, frmxt[128];
            foreach(new i : Player) if(i != playerid) if(IsPlayerNearPlayer(playerid, i, 2.5))
            {
                format(frmxt, sizeof(frmxt), "%sPlayer ID: %d\n", frmxt, i);
                NearestPlayer[playerid][count++] = i;
            }
            
            if(count == 0)
            {
                ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Invite Race",
                "Tidak ada player yang dekat dengan anda!", "Tutup", "");
            }

            Dialog_Show(playerid, Race_PlayerMenuGive, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Invite Race", frmxt, "Pilih", "Close");

        }
        if(listitem == 1)
        {
            new count = 0, frmxt[128];
            foreach(new i : Player) if(i != playerid) if(IsPlayerNearPlayer(playerid, i, 2.5))
            {
                format(frmxt, sizeof(frmxt), "%sPlayer ID: %d\n", frmxt, i);
                NearestPlayer[playerid][count++] = i;
            }
            
            if(count == 0)
            {
                ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Kick Race",
                "Tidak ada player yang dekat dengan anda!", "Tutup", "");
            }

            Dialog_Show(playerid, Race_PlayerMenuKick, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Kick Race", frmxt, "Pilih", "Close");

        }
        if(listitem == 2)
        {
            if(!InRace[playerid])  
                return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda harus berada di dalam race!");

            Race_ShowPlayerCount(playerid);
        }
    }
    return 1;
}

Dialog:Race_PlayerMenuGive(playerid, response, listitem, inputtext[])
{
    if(response) 
    {
        new targetid = NearestPlayer[playerid][listitem];

        if(!IsPlayerConnected(targetid) || !IsPlayerNearPlayer(playerid, targetid, 5.0))
            return Error(playerid, "You must near this player.");

        if(RaceWith[targetid] != INVALID_PLAYER_ID)
            return Error(playerid, "Player tersebut sudah pada balapan lain.");

        RaceWith[targetid] = playerid;
        Info(playerid, "Kamu telah mengundang %s kedalam balapanmu.", ReturnName(targetid));
        Info(targetid, "Kamu telah diundah oleh %s ke balapannya, gunakan \"/race leave\" untuk keluar.", ReturnName(playerid));
    }
    return 1;
}

Dialog:Race_PlayerMenuKick(playerid, response, listitem, inputtext[])
{
    if(response) 
    {
        new targetid = NearestPlayer[playerid][listitem];

        if(!IsPlayerConnected(targetid) || !IsPlayerNearPlayer(playerid, targetid, 5.0))
            return Error(playerid, "You must near this player.");    

        if(RaceWith[targetid] != playerid)
            return Error(playerid, "Player tersebut tidak ada pada balapanmu!");

        Race_ResetPlayer(targetid); 
        Info(playerid, "Kamu telah mengeluarkan %s dari balapanmu.", ReturnName(targetid));
        Info(targetid, "Kamu telah dikeluarkan dari balapan oleh %s.", ReturnName(playerid));
    }
    return 1;
}

Dialog:Race_Save(playerid, response, listitem, inputtext[])
{
    if(response) 
    {
        if(strlen(inputtext) > 24)
            return Error(playerid, "Nama map balapan tidak boleh lebih dari 24 huruf."),
            Dialog_Show(playerid, Race_Save, DIALOG_STYLE_TABLIST, ""RED"CHAXW PROJECT "WHITE"- Race Player Menu", 
            "Masukan Nama Track untuk di simpan ke dalam database\
            \nExample: Track Lembah", "Select", "Close");

        if(isnull(inputtext))
            return Error(playerid, "Invalid name"),
            Dialog_Show(playerid, Race_Save, DIALOG_STYLE_TABLIST, ""RED"CHAXW PROJECT "WHITE"- Race Player Menu", 
            "Masukan Nama Track untuk di simpan ke dalam database\
            \nExample: Track Lembah", "Select", "Close");

        new query[156];
        mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `race_list` WHERE `RaceName` = '%s'", inputtext);
        mysql_tquery(g_SQL, query, "CheckRaceName", "ds", playerid, inputtext);
    }
    return 1;
}