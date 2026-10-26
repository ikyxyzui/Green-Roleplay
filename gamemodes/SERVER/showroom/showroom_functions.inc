#include <YSI_Coding\y_hooks>

new SelectVeh[MAX_PLAYERS] = {0, ...};
new STREAMER_TAG_CP:ShowroomCheckpoint;
new PlayerText:ChaxwShowRoom[MAX_PLAYERS][40];

ATRPShowroomTD(playerid)
{
    ChaxwShowRoom[playerid][0] = CreatePlayerTextDraw(playerid, 239.000000, 352.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][0], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][0], 39.500000, 33.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][0], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][0], -10066177);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][0], 0);

	ChaxwShowRoom[playerid][1] = CreatePlayerTextDraw(playerid, 230.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][1], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][1], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][1], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][1], -10066177);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][1], 0);

	ChaxwShowRoom[playerid][2] = CreatePlayerTextDraw(playerid, 230.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][2], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][2], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][2], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][2], 0);

	ChaxwShowRoom[playerid][3] = CreatePlayerTextDraw(playerid, 270.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][3], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][3], 17.500000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][3], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][3], -10066177);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][3], 0);

	ChaxwShowRoom[playerid][4] = CreatePlayerTextDraw(playerid, 270.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][4], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][4], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][4], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][4], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][4], 0);

	ChaxwShowRoom[playerid][5] = CreatePlayerTextDraw(playerid, 233.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][5], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][5], 52.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][5], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][5], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][5], 0);

	ChaxwShowRoom[playerid][6] = CreatePlayerTextDraw(playerid, 296.000000, 352.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][6], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][6], 59.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][6], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][6], 1220018175);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][6], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][6], 0);

	ChaxwShowRoom[playerid][7] = CreatePlayerTextDraw(playerid, 286.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][7], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][7], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][7], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][7], 1220018175);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][7], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][7], 0);

	ChaxwShowRoom[playerid][8] = CreatePlayerTextDraw(playerid, 346.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][8], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][8], 17.500000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][8], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][8], 1220018175);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][8], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][8], 0);

	ChaxwShowRoom[playerid][9] = CreatePlayerTextDraw(playerid, 286.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][9], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][9], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][9], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][9], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][9], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][9], 0);

	ChaxwShowRoom[playerid][10] = CreatePlayerTextDraw(playerid, 346.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][10], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][10], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][10], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][10], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][10], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][10], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][10], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][10], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][10], 0);

	ChaxwShowRoom[playerid][11] = CreatePlayerTextDraw(playerid, 289.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][11], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][11], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][11], 72.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][11], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][11], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][11], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][11], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][11], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][11], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][11], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][11], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][11], 0);

	ChaxwShowRoom[playerid][12] = CreatePlayerTextDraw(playerid, 372.000000, 352.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][12], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][12], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][12], 39.500000, 33.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][12], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][12], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][12], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][12], -1863413505);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][12], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][12], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][12], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][12], 0);

	ChaxwShowRoom[playerid][13] = CreatePlayerTextDraw(playerid, 362.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][13], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][13], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][13], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][13], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][13], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][13], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][13], -1863413505);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][13], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][13], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][13], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][13], 0);

	ChaxwShowRoom[playerid][14] = CreatePlayerTextDraw(playerid, 403.000000, 348.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][14], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][14], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][14], 17.500000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][14], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][14], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][14], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][14], -1863413505);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][14], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][14], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][14], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][14], 0);

	ChaxwShowRoom[playerid][15] = CreatePlayerTextDraw(playerid, 362.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][15], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][15], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][15], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][15], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][15], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][15], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][15], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][15], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][15], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][15], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][15], 0);

	ChaxwShowRoom[playerid][16] = CreatePlayerTextDraw(playerid, 403.000000, 365.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][16], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][16], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][16], 18.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][16], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][16], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][16], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][16], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][16], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][16], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][16], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][16], 0);

	ChaxwShowRoom[playerid][17] = CreatePlayerTextDraw(playerid, 365.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][17], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][17], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][17], 53.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][17], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][17], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][17], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][17], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][17], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][17], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][17], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][17], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][17], 0);

	ChaxwShowRoom[playerid][18] = CreatePlayerTextDraw(playerid, 316.000000, 395.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][18], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][18], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][18], 39.500000, 33.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][18], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][18], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][18], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][18], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][18], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][18], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][18], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][18], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][18], 0);

	ChaxwShowRoom[playerid][19] = CreatePlayerTextDraw(playerid, 307.000000, 391.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][19], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][19], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][19], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][19], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][19], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][19], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][19], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][19], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][19], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][19], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][19], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][19], 0);

	ChaxwShowRoom[playerid][20] = CreatePlayerTextDraw(playerid, 307.000000, 407.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][20], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][20], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][20], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][20], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][20], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][20], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][20], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][20], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][20], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][20], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][20], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][20], 0);

	ChaxwShowRoom[playerid][21] = CreatePlayerTextDraw(playerid, 347.000000, 391.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][21], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][21], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][21], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][21], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][21], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][21], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][21], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][21], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][21], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][21], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][21], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][21], 0);

	ChaxwShowRoom[playerid][22] = CreatePlayerTextDraw(playerid, 347.000000, 407.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][22], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][22], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][22], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][22], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][22], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][22], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][22], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][22], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][22], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][22], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][22], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][22], 0);

	ChaxwShowRoom[playerid][23] = CreatePlayerTextDraw(playerid, 310.000000, 402.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][23], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][23], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][23], 52.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][23], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][23], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][23], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][23], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][23], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][23], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][23], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][23], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][23], 1);

	ChaxwShowRoom[playerid][24] = CreatePlayerTextDraw(playerid, 372.000000, 395.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][24], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][24], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][24], 39.500000, 33.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][24], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][24], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][24], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][24], 852308991);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][24], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][24], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][24], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][24], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][24], 0);

	ChaxwShowRoom[playerid][25] = CreatePlayerTextDraw(playerid, 362.000000, 391.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][25], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][25], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][25], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][25], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][25], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][25], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][25], 852308991);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][25], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][25], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][25], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][25], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][25], 0);

	ChaxwShowRoom[playerid][26] = CreatePlayerTextDraw(playerid, 403.000000, 391.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][26], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][26], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][26], 17.500000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][26], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][26], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][26], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][26], 852308991);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][26], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][26], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][26], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][26], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][26], 0);

	ChaxwShowRoom[playerid][27] = CreatePlayerTextDraw(playerid, 362.000000, 407.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][27], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][27], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][27], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][27], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][27], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][27], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][27], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][27], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][27], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][27], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][27], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][27], 0);

	ChaxwShowRoom[playerid][28] = CreatePlayerTextDraw(playerid, 403.000000, 407.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][28], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][28], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][28], 18.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][28], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][28], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][28], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][28], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][28], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][28], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][28], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][28], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][28], 0);

	ChaxwShowRoom[playerid][29] = CreatePlayerTextDraw(playerid, 365.000000, 403.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][29], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][29], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][29], 53.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][29], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][29], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][29], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][29], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][29], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][29], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][29], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][29], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][29], 0);

	ChaxwShowRoom[playerid][30] = CreatePlayerTextDraw(playerid, 239.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][30], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][30], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][30], 39.500000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][30], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][30], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][30], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][30], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][30], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][30], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][30], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][30], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][30], 1);

	ChaxwShowRoom[playerid][31] = CreatePlayerTextDraw(playerid, 372.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][31], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][31], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][31], 39.500000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][31], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][31], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][31], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][31], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][31], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][31], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][31], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][31], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][31], 1);

	ChaxwShowRoom[playerid][32] = CreatePlayerTextDraw(playerid, 296.000000, 360.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][32], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][32], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][32], 59.000000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][32], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][32], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][32], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][32], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][32], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][32], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][32], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][32], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][32], 1);

	ChaxwShowRoom[playerid][33] = CreatePlayerTextDraw(playerid, 372.000000, 403.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][33], 4);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][33], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][33], 39.500000, 25.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][33], 1);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][33], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][33], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][33], 404232447);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][33], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][33], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][33], 1);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][33], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][33], 1);

	ChaxwShowRoom[playerid][34] = CreatePlayerTextDraw(playerid, 250.000000, 361.000000, "<<");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][34], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][34], 0.283333, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][34], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][34], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][34], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][34], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][34], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][34], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][34], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][34], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][34], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][34], 0);

	ChaxwShowRoom[playerid][35] = CreatePlayerTextDraw(playerid, 384.000000, 361.000000, ">>");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][35], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][35], 0.283333, 2.000000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][35], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][35], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][35], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][35], 1);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][35], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][35], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][35], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][35], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][35], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][35], 0);

	ChaxwShowRoom[playerid][36] = CreatePlayerTextDraw(playerid, 324.000000, 361.000000, "Sultan");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][36], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][36], 0.187500, 1.050000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][36], 400.000000, 66.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][36], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][36], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][36], 2);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][36], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][36], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][36], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][36], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][36], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][36], 0);

	ChaxwShowRoom[playerid][37] = CreatePlayerTextDraw(playerid, 324.000000, 370.000000, "_");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][37], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][37], 0.187500, 1.050000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][37], 400.000000, 87.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][37], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][37], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][37], 2);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][37], 9109759);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][37], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][37], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][37], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][37], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][37], 0);

	ChaxwShowRoom[playerid][38] = CreatePlayerTextDraw(playerid, 335.000000, 406.000000, "CANCEL");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][38], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][38], 0.187500, 1.050000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][38], 400.000000, 87.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][38], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][38], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][38], 2);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][38], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][38], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][38], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][38], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][38], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][38], 0);

	ChaxwShowRoom[playerid][39] = CreatePlayerTextDraw(playerid, 391.000000, 406.000000, "BUY");
	PlayerTextDrawFont(playerid, ChaxwShowRoom[playerid][39], 1);
	PlayerTextDrawLetterSize(playerid, ChaxwShowRoom[playerid][39], 0.187500, 1.050000);
	PlayerTextDrawTextSize(playerid, ChaxwShowRoom[playerid][39], 400.000000, 87.500000);
	PlayerTextDrawSetOutline(playerid, ChaxwShowRoom[playerid][39], 0);
	PlayerTextDrawSetShadow(playerid, ChaxwShowRoom[playerid][39], 0);
	PlayerTextDrawAlignment(playerid, ChaxwShowRoom[playerid][39], 2);
	PlayerTextDrawColor(playerid, ChaxwShowRoom[playerid][39], -1);
	PlayerTextDrawBackgroundColor(playerid, ChaxwShowRoom[playerid][39], 255);
	PlayerTextDrawBoxColor(playerid, ChaxwShowRoom[playerid][39], 50);
	PlayerTextDrawUseBox(playerid, ChaxwShowRoom[playerid][39], 0);
	PlayerTextDrawSetProportional(playerid, ChaxwShowRoom[playerid][39], 1);
	PlayerTextDrawSetSelectable(playerid, ChaxwShowRoom[playerid][39], 0);


    return 1;
}

Toggle_ShowroomTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 40; i ++) PlayerTextDrawHide(playerid, ChaxwShowRoom[playerid][i]);
        AllGui_Status(playerid, true);
        if(AccountData[playerid][pNewBiePlayer] > 0)
        {
            UpdateNewbieTextdraw(playerid);
            ShowNewbieTextdraw(playerid); // <== TARUH DI SINI
        }
    }
    else
    {
        AllGui_Status(playerid, false);
        HideNewbieTextdraw(playerid);
        for(new i; i < 40; i ++) PlayerTextDrawShow(playerid, ChaxwShowRoom[playerid][i]);
    }
    return 1;
}

hook OnPlayerConnect(playerid)
{
    ATRPShowroomTD(playerid);
    SetPVarInt(playerid, "SelectShowroomID", 0);
    SelectVeh[playerid] = 0;
    return 1;
}

hook OnPlayerDisconnect(playerid, reason)
{
    if(GetPVarInt(playerid, "SelectShowroomID") != 0)
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }
    for(new x; x < 40; x ++) PlayerTextDrawDestroy(playerid, ChaxwShowRoom[playerid][x]);
    return 1;
}

hook OnScriptInit()
{
    ShowroomCheckpoint = CreateDynamicCP(1042.3744, 234.2350, 15.5392, 2.0, -1, 2, -1, 10.0);
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, STREAMER_TAG_CP:checkpointid)
{
    if(checkpointid == ShowroomCheckpoint)
    {
        ShowNotifBox(playerid, "ALT Menu Showroom");
    }
    return 1;
}

hook OnPlayerLeaveDynamicCP(playerid, STREAMER_TAG_CP:checkpointid)
{
    if(checkpointid == ShowroomCheckpoint)
    {
        HideNotifBox(playerid);
    }
    return 1;
}

new MotorShowroom[10] = 
{
    509, 481, 510, 462, 461, 581, 521, 463, 468, 586
};

new TrukShowroom[8] = 
{
    422, 482, 478, 554, 543, 440, 413, 418
};

new SuvShowroom[7] = 
{
    579, 400, 404, 589, 505, 479, 458
};

new ClassicShowroom[6] = 
{
    536, 575, 534, 567, 576, 412
};

new CompactShowroom[15] = 
{
    602, 496, 401, 518, 527, 589, 419, 587, 533, 526, 545, 474, 517, 419, 600
};

new LuxuryShowroom[18] = 
{
    445, 507, 585, 466, 492, 546, 551, 516, 426, 467, 547, 580, 550, 566, 540, 421, 529, 560
};

LuxuryCost(playerid)
{
    if(LuxuryShowroom[SelectVeh[playerid]] == 445) return 23450;
    if(LuxuryShowroom[SelectVeh[playerid]] == 507) return 23250;
    if(LuxuryShowroom[SelectVeh[playerid]] == 585) return 23400;
    if(LuxuryShowroom[SelectVeh[playerid]] == 466) return 23150;
    if(LuxuryShowroom[SelectVeh[playerid]] == 492) return 22650;
    if(LuxuryShowroom[SelectVeh[playerid]] == 546) return 22750;
    if(LuxuryShowroom[SelectVeh[playerid]] == 551) return 22900;
    if(LuxuryShowroom[SelectVeh[playerid]] == 516) return 23050;
    if(LuxuryShowroom[SelectVeh[playerid]] == 426) return 23500;
    if(LuxuryShowroom[SelectVeh[playerid]] == 467) return 22900;
    if(LuxuryShowroom[SelectVeh[playerid]] == 547) return 22700;
    if(LuxuryShowroom[SelectVeh[playerid]] == 580) return 23050;
    if(LuxuryShowroom[SelectVeh[playerid]] == 550) return 23850;
    if(LuxuryShowroom[SelectVeh[playerid]] == 566) return 23000;
    if(LuxuryShowroom[SelectVeh[playerid]] == 540) return 22900;
    if(LuxuryShowroom[SelectVeh[playerid]] == 421) return 23100;
    if(LuxuryShowroom[SelectVeh[playerid]] == 529) return 22500;
    if(LuxuryShowroom[SelectVeh[playerid]] == 560) return 27500;

    return -1;
}

CompactCost(playerid)
{
    if(CompactShowroom[SelectVeh[playerid]] == 602) return 23450;
    if(CompactShowroom[SelectVeh[playerid]] == 496) return 23250;
    if(CompactShowroom[SelectVeh[playerid]] == 401) return 23400;
    if(CompactShowroom[SelectVeh[playerid]] == 518) return 23150;
    if(CompactShowroom[SelectVeh[playerid]] == 527) return 22650;
    if(CompactShowroom[SelectVeh[playerid]] == 589) return 22750;
    if(CompactShowroom[SelectVeh[playerid]] == 419) return 22900;
    if(CompactShowroom[SelectVeh[playerid]] == 587) return 23050;
    if(CompactShowroom[SelectVeh[playerid]] == 533) return 23500;
    if(CompactShowroom[SelectVeh[playerid]] == 526) return 22900;
    if(CompactShowroom[SelectVeh[playerid]] == 545) return 22700;
    if(CompactShowroom[SelectVeh[playerid]] == 474) return 23050;
    if(CompactShowroom[SelectVeh[playerid]] == 517) return 23850;
    if(CompactShowroom[SelectVeh[playerid]] == 419) return 23000;
    if(CompactShowroom[SelectVeh[playerid]] == 600) return 22900;
    return -1;
}

ClassicCost(playerid)
{
    if(ClassicShowroom[SelectVeh[playerid]] == 536) return 22150;
    if(ClassicShowroom[SelectVeh[playerid]] == 575) return 22700;
    if(ClassicShowroom[SelectVeh[playerid]] == 534) return 22350;
    if(ClassicShowroom[SelectVeh[playerid]] == 567) return 22000;
    if(ClassicShowroom[SelectVeh[playerid]] == 535) return 22300;
    if(ClassicShowroom[SelectVeh[playerid]] == 576) return 21950;
    if(ClassicShowroom[SelectVeh[playerid]] == 412) return 22100;

    return -1;
}

TrukCost(playerid)
{
    if(TrukShowroom[SelectVeh[playerid]] == 422) return 22250;
    if(TrukShowroom[SelectVeh[playerid]] == 482) return 22500;
    if(TrukShowroom[SelectVeh[playerid]] == 478) return 21900;
    if(TrukShowroom[SelectVeh[playerid]] == 554) return 22750;
    if(TrukShowroom[SelectVeh[playerid]] == 543) return 22100;
    if(TrukShowroom[SelectVeh[playerid]] == 440) return 21800;
    if(TrukShowroom[SelectVeh[playerid]] == 413) return 22000;
    if(TrukShowroom[SelectVeh[playerid]] == 418) return 22000;
    return -1;
}

SuvCost(playerid)
{
    if(SuvShowroom[SelectVeh[playerid]] == 579) return 22250;
    if(SuvShowroom[SelectVeh[playerid]] == 400) return 22500;
    if(SuvShowroom[SelectVeh[playerid]] == 404) return 21900;
    if(SuvShowroom[SelectVeh[playerid]] == 589) return 22750;
    if(SuvShowroom[SelectVeh[playerid]] == 505) return 22100;
    if(SuvShowroom[SelectVeh[playerid]] == 479) return 21800;
    if(SuvShowroom[SelectVeh[playerid]] == 458) return 22000;
    return -1;
}

MotorCost(playerid)
{
    if(MotorShowroom[SelectVeh[playerid]] == 509) return 200;
    if(MotorShowroom[SelectVeh[playerid]] == 481) return 250;
    if(MotorShowroom[SelectVeh[playerid]] == 510) return 500;
    if(MotorShowroom[SelectVeh[playerid]] == 462) return 700;
    if(MotorShowroom[SelectVeh[playerid]] == 461) return 11100;
    if(MotorShowroom[SelectVeh[playerid]] == 581) return 11200;
    if(MotorShowroom[SelectVeh[playerid]] == 521) return 11450;
    if(MotorShowroom[SelectVeh[playerid]] == 463) return 11700;
    if(MotorShowroom[SelectVeh[playerid]] == 468) return 4000;
    if(MotorShowroom[SelectVeh[playerid]] == 586) return 11000;
    return -1;
}

/* Other Func */
VehicleTruckSelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(TrukShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
    return 1;
}

VehicleSuvSelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(SuvShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
}

VehicleMotorSelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(MotorShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
}

VehicleLowriderSelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(ClassicShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
}

VehicleCompactSelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(CompactShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
}

VehicleLuxurySelect(playerid)
{
    if(IsValidVehicle(ShowroomVeh[playerid]))
    {
        DestroyVehicle(ShowroomVeh[playerid]);
        ShowroomVeh[playerid] = INVALID_VEHICLE_ID;
    }

    ShowroomVeh[playerid] = CreateVehicle(LuxuryShowroom[SelectVeh[playerid]], 1027.7688, 237.1656, 15.2641, 324.3192, random(255), random(255), 60000, 0);
    LinkVehicleToInterior(ShowroomVeh[playerid], GetPlayerInterior(playerid));
    SetVehicleVirtualWorld(ShowroomVeh[playerid], GetPlayerVirtualWorld(playerid));
    SetValidVehicleHealth(ShowroomVeh[playerid], 1000.0);
    
    PutPlayerInVehicle(playerid, ShowroomVeh[playerid], 0);
    SetPlayerCameraPos(playerid, 1036.682, 242.037, 16.233);
    SetPlayerCameraLookAt(playerid, 1032.315, 239.626, 15.901);
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys & KEY_WALK && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
    {
        if(IsPlayerInDynamicCP(playerid, ShowroomCheckpoint))
        {
            if(AccountData[playerid][pInjured]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sedang pingsan!");
            EnableAntiCheatForPlayer(playerid, 4, false);
            
            ShowPlayerDialog(playerid, DIALOG_SHOWROOM_MENU, DIALOG_STYLE_LIST, ""RED_E"CHAXW PROJECT "WHITE"- Showroom",
            "Truk Ringan & Vans\
            \n"GRAY"SUV & Wagon\
            \nMotor & Sepeda\
            \n"GRAY"Classic & Lowrider\
            \n2 Pintu & Compact\
            \n"GRAY"4 Pintu & Luxury\
            \n"RED"(Jual Kendaraan Ke Negara)", "Pilih", "Batal");
        }
    }
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    switch(dialogid)
    {
        case DIALOG_SHOWROOM_MENU:
        {
            if(!response)
            {
                SetPVarInt(playerid, "SelectShowroomID", 0);
                EnableAntiCheatForPlayer(playerid, 4, true);
                return 1;
            }
            
            if(AccountData[playerid][pInjured])
            {
                ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sedang pingsan!");
                return 1;
            }

            switch(listitem)
            {
                case 0: 
                {
                    SetPVarInt(playerid, "SelectShowroomID", 1); // truk
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleTruckSelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(TrukShowroom[SelectVeh[playerid]]), FormatMoney(TrukCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 1: 
                {
                    SetPVarInt(playerid, "SelectShowroomID", 2); // SUV
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleSuvSelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(SuvShowroom[SelectVeh[playerid]]), FormatMoney(SuvCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 2: 
                {
                    SetPVarInt(playerid, "SelectShowroomID", 3); // Motor
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleMotorSelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(MotorShowroom[SelectVeh[playerid]]), FormatMoney(MotorCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 3: //
                {
                    SetPVarInt(playerid, "SelectShowroomID", 4); // Low ride
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleLowriderSelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(ClassicShowroom[SelectVeh[playerid]]), FormatMoney(ClassicCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 4:
                {
                    SetPVarInt(playerid, "SelectShowroomID", 5); // Two Door
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleCompactSelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(CompactShowroom[SelectVeh[playerid]]), FormatMoney(CompactCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 5:
                {
                    SetPVarInt(playerid, "SelectShowroomID", 6); // Luxury
                    SetPlayerVirtualWorld(playerid, (playerid+1));
                    TogglePlayerControllable(playerid, 0);
                    VehicleLuxurySelect(playerid);

                    PlayerTextDrawSetString(playerid, ChaxwShowRoom[playerid][36], sprintf("%s~n~~g~%s", GetVehicleModelName(LuxuryShowroom[SelectVeh[playerid]]), FormatMoney(LuxuryCost(playerid))));
                    Toggle_ShowroomTD(playerid, true);
                    SelectTextDraw(playerid, 0xFF9999FF);
                }
                case 6: 
                {
                    ShowPlayerDialog(playerid, DIALOG_SHOWROOM_SELL, DIALOG_STYLE_INPUT, ""RED_E"CHAXW PROJECT "WHITE"- Jual Kendaraan",
                    "Hai, kamu ingin menjual kendaraan?\n(Mohon masukkan VID Kendaraan anda yang ingin dijual di kolom bawah ini):", "Submit", "Batal");
                }
            }
        }
        case DIALOG_SHOWROOM_SELL:
        {
            if(!response)
            {
                ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan");
                EnableAntiCheatForPlayer(playerid, 4, true);
                return 1;
            }

            foreach(new i : PvtVehicles) if(PlayerVehicle[i][pVehExists])
            {
                if(strval(inputtext) == PlayerVehicle[i][pVehPhysic])
                {
                    if(!IsValidVehicle(PlayerVehicle[i][pVehPhysic])) return ShowTDN(playerid, NOTIFICATION_ERROR, "Kendaraan tersebut tidak spawn!");
                    if(PlayerVehicle[i][pVehRental] != -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak dapat menjual kendaraan rental!");
                    if(PlayerVehicle[i][pVehOwnerID] != AccountData[playerid][pID]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Kendaraan ini bukan milik anda!");
                    if(PlayerVehicle[i][pVehFaction] > FACTION_NONE) return ShowTDN(playerid, NOTIFICATION_ERROR, "Kendaraan milik instansi tidak dapat dijual di Showroom!");
                    if(!IsABicycle(PlayerVehicle[i][pVehPhysic]) && PlayerVehicle[i][pVehPlateOwn] != 1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Kendaraan ini belum memiliki plat!");
                    
                    new value = (PlayerVehicle[i][pVehPrice]/100)*50;
                    PlayerVehicle[i][pVehExists] = false;
                    DestroyVehicle(PlayerVehicle[i][pVehPhysic]);
                    GiveMoney(playerid, value);
                    ShowItemBox(playerid, sprintf("Received %s", FormatMoney((PlayerVehicle[i][pVehPrice]/2))), "Uang", 1212);
                    ShowTDN(playerid, NOTIFICATION_SUKSES, "Penjualan berhasil dilakukan.");

                    PlayerVehicle[i][pVehOwnerID] = -1;
                    PlayerVehicle[i][pVehPhysic] = INVALID_VEHICLE_ID;

                    new query[255];
                    mysql_format(g_SQL, query, sizeof(query), "DELETE FROM `player_vehicles` WHERE `id`=%d", PlayerVehicle[i][pVehID]);
                    mysql_tquery(g_SQL, query);
                    Iter_Remove(PvtVehicles, i); 
                }
            }
        }
    }
    return 1;
}


ShowroomVehicle_Create(ownerid, modelid, Float:x, Float:y, Float:z, Float:angle, color1, color2, cost)
{
    static vehicleid;
    if ((vehicleid = Iter_Free(PvtVehicles)) != cellmin)
    {
        Iter_Add(PvtVehicles, vehicleid);

        PlayerVehicle[vehicleid][pVehExists] = true;
        PlayerVehicle[vehicleid][pVehModelID] = modelid;
        PlayerVehicle[vehicleid][pVehOwnerID] = AccountData[ownerid][pID];
        format(PlayerVehicle[vehicleid][pVehPlate], 64, "-");

        PlayerVehicle[vehicleid][pVehPos][0] = x;
        PlayerVehicle[vehicleid][pVehPos][1] = y;
        PlayerVehicle[vehicleid][pVehPos][2] = z;
        PlayerVehicle[vehicleid][pVehPos][3] = angle;

        PlayerVehicle[vehicleid][pVehInsuranced] = false;
        PlayerVehicle[vehicleid][pVehImpounded] = false;

        PlayerVehicle[vehicleid][pVehColor1] = color1;
        PlayerVehicle[vehicleid][pVehColor2] = color2;
        PlayerVehicle[vehicleid][pVehPaintjob] = -1;

        PlayerVehicle[vehicleid][pVehLocked] = false;
        PlayerVehicle[vehicleid][pVehFuel] = MAX_FUEL_FULL;
        PlayerVehicle[vehicleid][pVehHealth] = 1000.0;
        PlayerVehicle[vehicleid][pVehRental] = -1;
        PlayerVehicle[vehicleid][pVehRentTime] = 0;
        PlayerVehicle[vehicleid][pVehParked] = -1;
        PlayerVehicle[vehicleid][pVehHouseGarage] = -1;
        PlayerVehicle[vehicleid][pVehHelipadGarage] = -1;
        PlayerVehicle[vehicleid][pVehFamiliesGarage] = -1;
        PlayerVehicle[vehicleid][pVehFactStored] = -1;
        PlayerVehicle[vehicleid][pVehFaction] = FACTION_NONE;

        PlayerVehicle[vehicleid][pVehPrice] = cost;
        PlayerVehicle[vehicleid][pVehNeon] = 0;
        PlayerVehicle[vehicleid][cTogNeon] = 0;
        
        PlayerVehicle[vehicleid][pVehDamage][0] = 0;
        PlayerVehicle[vehicleid][pVehDamage][1] = 0;
        PlayerVehicle[vehicleid][pVehDamage][2] = 0;
        PlayerVehicle[vehicleid][pVehDamage][3] = 0;

        PlayerVehicle[vehicleid][pVehPlateTime] = 0;
        PlayerVehicle[vehicleid][pVehPlateOwn] = 0;
        PlayerVehicle[vehicleid][pVehInterior] = 0;
        PlayerVehicle[vehicleid][pVehWorld] = 0;

        PlayerVehicle[vehicleid][pVehEngineUpgrade] = 0;
        PlayerVehicle[vehicleid][pVehBodyUpgrade] = 0;
        PlayerVehicle[vehicleid][pVehBodyRepair] = 0;
        
        PlayerVehicle[vehicleid][pVehBroken] = 0;

        PlayerVehicle[vehicleid][vehDonation] = 0;
        PlayerVehicle[vehicleid][pVehCapacity] = 0;
        
        PlayerVehicle[vehicleid][pVehWeapon][0] = 0;
        PlayerVehicle[vehicleid][pVehWeapon][1] = 0;
        PlayerVehicle[vehicleid][pVehWeapon][2] = 0;
        PlayerVehicle[vehicleid][pVehAmmo][0] = 0;
        PlayerVehicle[vehicleid][pVehAmmo][1] = 0;
        PlayerVehicle[vehicleid][pVehAmmo][2] = 0;
        PlayerVehicle[vehicleid][pVehDCTime] = 0;

        for(new j = 0; j < 17; j ++) {
            PlayerVehicle[vehicleid][pVehMod][j] = 0;
        }

        PlayerVehicle[vehicleid][pVehPhysic] = CreateVehicle(PlayerVehicle[vehicleid][pVehModelID], PlayerVehicle[vehicleid][pVehPos][0], PlayerVehicle[vehicleid][pVehPos][1], PlayerVehicle[vehicleid][pVehPos][2], PlayerVehicle[vehicleid][pVehPos][3], PlayerVehicle[vehicleid][pVehColor1], PlayerVehicle[vehicleid][pVehColor2], 600000);
        VehicleCore[PlayerVehicle[vehicleid][pVehPhysic]][vCoreFuel] = PlayerVehicle[vehicleid][pVehFuel];
        SetVehicleNumberPlate(PlayerVehicle[vehicleid][pVehPhysic], PlayerVehicle[vehicleid][pVehPlate]);
        SetVehicleVirtualWorld(PlayerVehicle[vehicleid][pVehPhysic], PlayerVehicle[vehicleid][pVehWorld]);
        LinkVehicleToInterior(PlayerVehicle[vehicleid][pVehPhysic], PlayerVehicle[vehicleid][pVehInterior]);

        SetPlayerPositionEx(ownerid, 520.7665, -1287.1577, 17.9932, 199.5307, 1000);
        SetPlayerInteriorEx(ownerid, 0);
        SetPlayerVirtualWorldEx(ownerid, 0);
        AccountData[ownerid][pInDoor] = -1;
        AccountData[ownerid][pInHouse] = -1;
        AccountData[ownerid][pInRusun] = -1;
        AccountData[ownerid][pInFamily] = -1;
        AccountData[ownerid][pInBiz] = -1;
        SetCameraBehindPlayer(ownerid);
        CancelSelectTextDraw(ownerid);
        EnableAntiCheatForPlayer(ownerid, 4, true);

        mysql_tquery(g_SQL, "INSERT INTO `player_vehicles` (`PVeh_Faction`) VALUES('0')", "OnVehBuyCreated", "dd", ownerid, vehicleid);
        return vehicleid;
    }
    return -1;
}

/*ShowroomVehicle_Create(ownerid, modelid, Float:x, Float:y, Float:z, Float:angle, color1, color2, cost)
{
    new i = Iter_Free(PvtVehicles);
    if(i == INVALID_ITERATOR_SLOT) return printf("Tidak ada Iterator Free pada PvtVehicles");

    PlayerVehicle[i][pVehExists] = true;
    PlayerVehicle[i][pVehModelID] = modelid;
    PlayerVehicle[i][pVehOwnerID] = AccountData[ownerid][pID];
    format(PlayerVehicle[i][pVehPlate], 64, "-");

	PlayerVehicle[i][pVehPos][0] = x;
	PlayerVehicle[i][pVehPos][1] = y;
	PlayerVehicle[i][pVehPos][2] = z;
	PlayerVehicle[i][pVehPos][3] = angle;

	PlayerVehicle[i][pVehInsuranced] = false;
	PlayerVehicle[i][pVehImpounded] = false;

	PlayerVehicle[i][pVehColor1] = color1;
	PlayerVehicle[i][pVehColor2] = color2;
	PlayerVehicle[i][pVehPaintjob] = -1;

	PlayerVehicle[i][pVehLocked] = false;
	PlayerVehicle[i][pVehFuel] = MAX_FUEL_FULL;
	PlayerVehicle[i][pVehHealth] = 1000.0;
	PlayerVehicle[i][pVehRental] = -1;
	PlayerVehicle[i][pVehRentTime] = 0;
	PlayerVehicle[i][pVehParked] = -1;
	PlayerVehicle[i][pVehHouseGarage] = -1;
    PlayerVehicle[i][pVehHelipadGarage] = -1;
	PlayerVehicle[i][pVehFamiliesGarage] = -1;
	PlayerVehicle[i][pVehFactStored] = -1;
	PlayerVehicle[i][pVehFaction] = FACTION_NONE;

    PlayerVehicle[i][pVehPrice] = cost;
	PlayerVehicle[i][pVehNeon] = 0;
	PlayerVehicle[i][cTogNeon] = 0;
	
	PlayerVehicle[i][pVehDamage][0] = 0;
	PlayerVehicle[i][pVehDamage][1] = 0;
	PlayerVehicle[i][pVehDamage][2] = 0;
	PlayerVehicle[i][pVehDamage][3] = 0;

	PlayerVehicle[i][pVehPlateTime] = 0;
	PlayerVehicle[i][pVehPlateOwn] = 0;
	PlayerVehicle[i][pVehInterior] = 0;
	PlayerVehicle[i][pVehWorld] = 0;

    PlayerVehicle[i][pVehEngineUpgrade] = 0;
	PlayerVehicle[i][pVehBodyUpgrade] = 0;
	PlayerVehicle[i][pVehBodyRepair] = 0;
	
	PlayerVehicle[i][pVehBroken] = 0;

	PlayerVehicle[i][vehDonation] = 0;
	PlayerVehicle[i][pVehCapacity] = 0;
	
	PlayerVehicle[i][pVehWeapon][0] = 0;
	PlayerVehicle[i][pVehWeapon][1] = 0;
	PlayerVehicle[i][pVehWeapon][2] = 0;
	PlayerVehicle[i][pVehAmmo][0] = 0;
	PlayerVehicle[i][pVehAmmo][1] = 0;
	PlayerVehicle[i][pVehAmmo][2] = 0;
    PlayerVehicle[i][pVehDCTime] = 0;

    for(new j = 0; j < 17; j ++) {
        PlayerVehicle[i][pVehMod][j] = 0;
    }

    PlayerVehicle[i][pVehPhysic] = CreateVehicle(PlayerVehicle[i][pVehModelID], PlayerVehicle[i][pVehPos][0], PlayerVehicle[i][pVehPos][1], PlayerVehicle[i][pVehPos][2], PlayerVehicle[i][pVehPos][3], PlayerVehicle[i][pVehColor1], PlayerVehicle[i][pVehColor2], 600000, 0);
    VehicleCore[PlayerVehicle[i][pVehPhysic]][vCoreFuel] = PlayerVehicle[i][pVehFuel];
    SetVehicleNumberPlate(PlayerVehicle[i][pVehPhysic], PlayerVehicle[i][pVehPlate]);
    SetVehicleVirtualWorld(PlayerVehicle[i][pVehPhysic], PlayerVehicle[i][pVehWorld]);
    LinkVehicleToInterior(PlayerVehicle[i][pVehPhysic], PlayerVehicle[i][pVehInterior]);

    SetPlayerPositionEx(ownerid, 520.7665, -1287.1577, 17.9932, 199.5307, 1000);
    SetPlayerInteriorEx(ownerid, 0);
    SetPlayerVirtualWorldEx(ownerid, 0);
    AccountData[ownerid][pInDoor] = -1;
    AccountData[ownerid][pInHouse] = -1;
    AccountData[ownerid][pInRusun] = -1;
    AccountData[ownerid][pInFamily] = -1;
    AccountData[ownerid][pInBiz] = -1;
    SetCameraBehindPlayer(ownerid);
    CancelSelectTextDraw(ownerid);
    EnableAntiCheatForPlayer(ownerid, 4, true);

    Iter_Add(PvtVehicles, i);
    
    new cQuery[1048];
    mysql_format(g_SQL, cQuery, sizeof(cQuery), "INSERT INTO `player_vehicles` (`PVeh_OwnerID`, `PVeh_ModelID`, `PVeh_Price`, `PVeh_Fuel`, `PVeh_Health`, `PVeh_Plate`, `PVeh_Parked`, `PVeh_Housed`, `PVeh_Families`, `PVeh_FactionGarage`, `PVeh_Rental`, `PVeh_RentTime`, \
    `PVeh_PosX`, `PVeh_PosY`, `PVeh_PosZ`, `PVeh_PosA`, `PVeh_Color1`, `PVeh_Color2`, `PVeh_Paintjob`, `PVeh_World`, `PVeh_Interior`) VALUES ('%d', '%d', '%d', '%d', '%f', '%s', '%d', '%d', '%d', '%d', '%d', '%d', '%f', '%f', '%f', '%f', '%d', '%d', '%d', '%d', '%d')",
    PlayerVehicle[i][pVehOwnerID], PlayerVehicle[i][pVehModelID], PlayerVehicle[i][pVehPrice], PlayerVehicle[i][pVehFuel], PlayerVehicle[i][pVehHealth], PlayerVehicle[i][pVehPlate], PlayerVehicle[i][pVehParked], PlayerVehicle[i][pVehHouseGarage], PlayerVehicle[i][pVehFamiliesGarage], PlayerVehicle[i][pVehFactStored],
    PlayerVehicle[i][pVehRental], PlayerVehicle[i][pVehRentTime], PlayerVehicle[i][pVehPos][0], PlayerVehicle[i][pVehPos][1], PlayerVehicle[i][pVehPos][2], PlayerVehicle[i][pVehPos][3], PlayerVehicle[i][pVehColor1], PlayerVehicle[i][pVehColor2], PlayerVehicle[i][pVehPaintjob], PlayerVehicle[i][pVehWorld], PlayerVehicle[i][pVehInterior]);
    mysql_tquery(g_SQL, cQuery, "OnVehBuyCreated", "ii", ownerid, i);
    return 1;
}*/