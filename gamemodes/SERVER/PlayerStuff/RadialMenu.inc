new PlayerText:CHAXWGENERAL[MAX_PLAYERS][40];
new PlayerText:CHAXWUTAMA[MAX_PLAYERS][48];

#include <YSI\y_hooks>

CreateRadialGeneral(playerid)
{
	CHAXWGENERAL[playerid][0] = CreatePlayerTextDraw(playerid, 235.000000, 148.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][0], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][0], 48.000000, 82.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][0], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][0], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][0], 0);

	CHAXWGENERAL[playerid][1] = CreatePlayerTextDraw(playerid, 305.000000, 148.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][1], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][1], 48.000000, 82.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][1], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][1], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][1], 0);

	CHAXWGENERAL[playerid][2] = CreatePlayerTextDraw(playerid, 376.000000, 148.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][2], 48.000000, 82.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][2], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][2], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][2], 0);

	CHAXWGENERAL[playerid][3] = CreatePlayerTextDraw(playerid, 225.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][3], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][3], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][3], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][3], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][3], 0);

	CHAXWGENERAL[playerid][4] = CreatePlayerTextDraw(playerid, 225.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][4], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][4], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][4], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][4], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][4], 0);

	CHAXWGENERAL[playerid][5] = CreatePlayerTextDraw(playerid, 273.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][5], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][5], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][5], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][5], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][5], 0);

	CHAXWGENERAL[playerid][6] = CreatePlayerTextDraw(playerid, 273.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][6], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][6], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][6], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][6], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][6], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][6], 0);

	CHAXWGENERAL[playerid][7] = CreatePlayerTextDraw(playerid, 295.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][7], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][7], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][7], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][7], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][7], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][7], 0);

	CHAXWGENERAL[playerid][8] = CreatePlayerTextDraw(playerid, 343.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][8], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][8], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][8], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][8], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][8], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][8], 0);

	CHAXWGENERAL[playerid][9] = CreatePlayerTextDraw(playerid, 295.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][9], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][9], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][9], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][9], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][9], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][9], 0);

	CHAXWGENERAL[playerid][10] = CreatePlayerTextDraw(playerid, 343.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][10], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][10], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][10], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][10], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][10], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][10], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][10], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][10], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][10], 0);

	CHAXWGENERAL[playerid][11] = CreatePlayerTextDraw(playerid, 366.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][11], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][11], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][11], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][11], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][11], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][11], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][11], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][11], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][11], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][11], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][11], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][11], 0);

	CHAXWGENERAL[playerid][12] = CreatePlayerTextDraw(playerid, 413.000000, 144.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][12], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][12], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][12], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][12], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][12], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][12], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][12], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][12], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][12], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][12], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][12], 0);

	CHAXWGENERAL[playerid][13] = CreatePlayerTextDraw(playerid, 366.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][13], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][13], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][13], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][13], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][13], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][13], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][13], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][13], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][13], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][13], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][13], 0);

	CHAXWGENERAL[playerid][14] = CreatePlayerTextDraw(playerid, 413.000000, 210.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][14], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][14], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][14], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][14], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][14], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][14], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][14], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][14], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][14], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][14], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][14], 0);

	CHAXWGENERAL[playerid][15] = CreatePlayerTextDraw(playerid, 228.500000, 155.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][15], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][15], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][15], 61.000000, 66.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][15], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][15], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][15], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][15], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][15], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][15], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][15], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][15], 1);

	CHAXWGENERAL[playerid][16] = CreatePlayerTextDraw(playerid, 298.500000, 155.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][16], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][16], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][16], 61.000000, 66.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][16], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][16], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][16], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][16], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][16], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][16], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][16], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][16], 1);

	CHAXWGENERAL[playerid][17] = CreatePlayerTextDraw(playerid, 369.500000, 155.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][17], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][17], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][17], 60.000000, 66.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][17], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][17], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][17], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][17], 1841757951);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][17], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][17], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][17], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][17], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][17], 1);

	CHAXWGENERAL[playerid][18] = CreatePlayerTextDraw(playerid, 314.000000, 240.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][18], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][18], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][18], 30.500000, 39.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][18], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][18], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][18], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][18], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][18], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][18], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][18], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][18], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][18], 0);

	CHAXWGENERAL[playerid][19] = CreatePlayerTextDraw(playerid, 304.000000, 236.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][19], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][19], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][19], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][19], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][19], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][19], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][19], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][19], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][19], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][19], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][19], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][19], 0);

	CHAXWGENERAL[playerid][20] = CreatePlayerTextDraw(playerid, 335.000000, 236.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][20], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][20], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][20], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][20], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][20], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][20], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][20], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][20], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][20], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][20], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][20], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][20], 0);

	CHAXWGENERAL[playerid][21] = CreatePlayerTextDraw(playerid, 304.000000, 259.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][21], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][21], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][21], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][21], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][21], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][21], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][21], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][21], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][21], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][21], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][21], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][21], 0);

	CHAXWGENERAL[playerid][22] = CreatePlayerTextDraw(playerid, 335.000000, 259.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][22], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][22], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][22], 20.000000, 24.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][22], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][22], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][22], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][22], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][22], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][22], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][22], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][22], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][22], 0);

	CHAXWGENERAL[playerid][23] = CreatePlayerTextDraw(playerid, 307.500000, 249.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][23], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][23], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][23], 44.000000, 23.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][23], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][23], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][23], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][23], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][23], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][23], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][23], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][23], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][23], 1);

	CHAXWGENERAL[playerid][24] = CreatePlayerTextDraw(playerid, 246.000000, 158.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][24], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][24], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][24], 22.500000, 26.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][24], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][24], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][24], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][24], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][24], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][24], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][24], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][24], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][24], 0);

	CHAXWGENERAL[playerid][25] = CreatePlayerTextDraw(playerid, 237.000000, 178.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][25], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][25], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][25], 42.500000, 28.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][25], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][25], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][25], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][25], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][25], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][25], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][25], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][25], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][25], 0);

	CHAXWGENERAL[playerid][26] = CreatePlayerTextDraw(playerid, 244.500000, 191.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][26], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][26], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][26], 27.500000, 11.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][26], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][26], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][26], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][26], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][26], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][26], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][26], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][26], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][26], 0);

	CHAXWGENERAL[playerid][27] = CreatePlayerTextDraw(playerid, 315.500000, 165.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][27], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][27], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][27], 27.500000, 11.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][27], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][27], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][27], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][27], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][27], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][27], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][27], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][27], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][27], 0);

	CHAXWGENERAL[playerid][28] = CreatePlayerTextDraw(playerid, 315.500000, 178.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][28], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][28], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][28], 27.500000, 11.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][28], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][28], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][28], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][28], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][28], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][28], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][28], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][28], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][28], 0);

	CHAXWGENERAL[playerid][29] = CreatePlayerTextDraw(playerid, 315.500000, 191.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][29], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][29], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][29], 27.500000, 11.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][29], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][29], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][29], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][29], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][29], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][29], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][29], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][29], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][29], 0);

	CHAXWGENERAL[playerid][30] = CreatePlayerTextDraw(playerid, 385.500000, 183.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][30], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][30], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][30], 30.000000, 16.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][30], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][30], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][30], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][30], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][30], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][30], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][30], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][30], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][30], 0);

	CHAXWGENERAL[playerid][31] = CreatePlayerTextDraw(playerid, 385.500000, 163.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][31], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][31], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][31], 2.500000, 21.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][31], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][31], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][31], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][31], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][31], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][31], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][31], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][31], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][31], 0);

	CHAXWGENERAL[playerid][32] = CreatePlayerTextDraw(playerid, 413.500000, 176.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][32], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][32], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][32], 2.500000, 23.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][32], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][32], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][32], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][32], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][32], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][32], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][32], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][32], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][32], 0);

	CHAXWGENERAL[playerid][33] = CreatePlayerTextDraw(playerid, 386.500000, 163.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][33], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][33], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][33], 29.500000, 3.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][33], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][33], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][33], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][33], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][33], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][33], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][33], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][33], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][33], 0);

	CHAXWGENERAL[playerid][34] = CreatePlayerTextDraw(playerid, 389.500000, 168.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][34], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][34], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][34], 29.500000, 3.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][34], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][34], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][34], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][34], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][34], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][34], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][34], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][34], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][34], 0);

	CHAXWGENERAL[playerid][35] = CreatePlayerTextDraw(playerid, 389.500000, 172.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][35], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][35], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][35], 29.500000, 3.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][35], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][35], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][35], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][35], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][35], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][35], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][35], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][35], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][35], 0);

	CHAXWGENERAL[playerid][36] = CreatePlayerTextDraw(playerid, 322.000000, 246.000000, "X");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][36], 1);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][36], 0.600000, 2.599997);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][36], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][36], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][36], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][36], 1);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][36], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][36], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][36], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][36], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][36], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][36], 0);

	CHAXWGENERAL[playerid][37] = CreatePlayerTextDraw(playerid, 258.000000, 217.000000, "ACTION");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][37], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][37], 0.166666, 1.200000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][37], 400.000000, 53.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][37], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][37], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][37], 2);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][37], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][37], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][37], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][37], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][37], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][37], 0);

	CHAXWGENERAL[playerid][38] = CreatePlayerTextDraw(playerid, 330.000000, 217.000000, "GENERAL");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][38], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][38], 0.166666, 1.200000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][38], 400.000000, 53.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][38], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][38], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][38], 2);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][38], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][38], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][38], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][38], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][38], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][38], 0);

	CHAXWGENERAL[playerid][39] = CreatePlayerTextDraw(playerid, 399.000000, 217.000000, "VEHICLE");
	PlayerTextDrawFont(playerid, CHAXWGENERAL[playerid][39], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWGENERAL[playerid][39], 0.166666, 1.200000);
	PlayerTextDrawTextSize(playerid, CHAXWGENERAL[playerid][39], 400.000000, 53.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWGENERAL[playerid][39], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWGENERAL[playerid][39], 0);
	PlayerTextDrawAlignment(playerid, CHAXWGENERAL[playerid][39], 2);
	PlayerTextDrawColor(playerid, CHAXWGENERAL[playerid][39], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWGENERAL[playerid][39], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWGENERAL[playerid][39], 50);
	PlayerTextDrawUseBox(playerid, CHAXWGENERAL[playerid][39], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWGENERAL[playerid][39], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWGENERAL[playerid][39], 0);
}

hook OnPlayerConnect(playerid)
{
	CreateRadialGeneral(playerid);
	CreateRadialUtama(playerid);
}

CreateRadialUtama(playerid)
{
	CHAXWUTAMA[playerid][0] = CreatePlayerTextDraw(playerid, 242.000000, 150.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][0], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][0], 28.000000, 44.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][0], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][0], 0);

	CHAXWUTAMA[playerid][1] = CreatePlayerTextDraw(playerid, 244.000000, 153.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][1], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][1], 24.000000, 5.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][1], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][1], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][1], 0);

	CHAXWUTAMA[playerid][2] = CreatePlayerTextDraw(playerid, 244.000000, 159.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][2], 12.500000, 5.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][2], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][2], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][2], 0);

	CHAXWUTAMA[playerid][3] = CreatePlayerTextDraw(playerid, 256.000000, 165.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][3], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][3], 12.500000, 5.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][3], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][3], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][3], 0);

	CHAXWUTAMA[playerid][4] = CreatePlayerTextDraw(playerid, 256.000000, 182.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][4], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][4], 12.500000, 5.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][4], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][4], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][4], 0);

	CHAXWUTAMA[playerid][5] = CreatePlayerTextDraw(playerid, 249.000000, 176.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][5], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][5], 12.500000, 5.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][5], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][5], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][5], 0);

	CHAXWUTAMA[playerid][6] = CreatePlayerTextDraw(playerid, 306.000000, 163.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][6], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][6], 28.000000, 25.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][6], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][6], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][6], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][6], 0);

	CHAXWUTAMA[playerid][7] = CreatePlayerTextDraw(playerid, 308.000000, 150.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][7], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][7], 2.500000, 43.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][7], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][7], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][7], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][7], 0);

	CHAXWUTAMA[playerid][8] = CreatePlayerTextDraw(playerid, 329.000000, 150.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][8], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][8], 2.500000, 43.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][8], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][8], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][8], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][8], 0);

	CHAXWUTAMA[playerid][9] = CreatePlayerTextDraw(playerid, 308.000000, 192.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][9], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][9], 23.500000, 2.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][9], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][9], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][9], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][9], 0);

	CHAXWUTAMA[playerid][10] = CreatePlayerTextDraw(playerid, 314.000000, 145.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][10], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][10], 2.500000, 43.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][10], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][10], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][10], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][10], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][10], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][10], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][10], 0);

	CHAXWUTAMA[playerid][11] = CreatePlayerTextDraw(playerid, 323.000000, 145.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][11], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][11], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][11], 2.500000, 43.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][11], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][11], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][11], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][11], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][11], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][11], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][11], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][11], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][11], 0);

	CHAXWUTAMA[playerid][12] = CreatePlayerTextDraw(playerid, 314.000000, 145.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][12], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][12], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][12], 10.000000, 2.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][12], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][12], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][12], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][12], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][12], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][12], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][12], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][12], 0);

	CHAXWUTAMA[playerid][13] = CreatePlayerTextDraw(playerid, 303.000000, 142.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][13], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][13], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][13], 32.500000, 2.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][13], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][13], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][13], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][13], -1680212225);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][13], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][13], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][13], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][13], 0);

	CHAXWUTAMA[playerid][14] = CreatePlayerTextDraw(playerid, 373.000000, 141.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][14], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][14], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][14], 28.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][14], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][14], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][14], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][14], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][14], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][14], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][14], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][14], 0);

	CHAXWUTAMA[playerid][15] = CreatePlayerTextDraw(playerid, 374.000000, 142.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][15], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][15], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][15], 26.000000, 53.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][15], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][15], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][15], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][15], 1296911871);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][15], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][15], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][15], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][15], 0);

	CHAXWUTAMA[playerid][16] = CreatePlayerTextDraw(playerid, 401.000000, 153.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][16], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][16], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][16], 0.500000, 7.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][16], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][16], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][16], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][16], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][16], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][16], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][16], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][16], 0);

	CHAXWUTAMA[playerid][17] = CreatePlayerTextDraw(playerid, 372.000000, 147.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][17], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][17], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][17], 0.500000, 7.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][17], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][17], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][17], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][17], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][17], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][17], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][17], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][17], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][17], 0);

	CHAXWUTAMA[playerid][18] = CreatePlayerTextDraw(playerid, 372.000000, 155.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][18], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][18], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][18], 0.500000, 7.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][18], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][18], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][18], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][18], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][18], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][18], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][18], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][18], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][18], 0);

	CHAXWUTAMA[playerid][19] = CreatePlayerTextDraw(playerid, 375.000000, 197.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][19], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][19], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][19], 7.000000, 0.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][19], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][19], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][19], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][19], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][19], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][19], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][19], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][19], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][19], 0);

	CHAXWUTAMA[playerid][20] = CreatePlayerTextDraw(playerid, 378.000000, 193.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][20], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][20], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][20], 18.000000, 1.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][20], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][20], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][20], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][20], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][20], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][20], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][20], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][20], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][20], 0);

	CHAXWUTAMA[playerid][21] = CreatePlayerTextDraw(playerid, 378.000000, 143.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][21], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][21], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][21], 18.000000, 3.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][21], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][21], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][21], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][21], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][21], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][21], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][21], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][21], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][21], 0);

	CHAXWUTAMA[playerid][22] = CreatePlayerTextDraw(playerid, 274.000000, 225.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][22], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][22], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][22], 28.500000, 48.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][22], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][22], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][22], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][22], -11250177);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][22], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][22], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][22], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][22], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][22], 0);

	CHAXWUTAMA[playerid][23] = CreatePlayerTextDraw(playerid, 276.000000, 227.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][23], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][23], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][23], 25.000000, 14.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][23], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][23], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][23], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][23], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][23], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][23], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][23], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][23], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][23], 0);

	CHAXWUTAMA[playerid][24] = CreatePlayerTextDraw(playerid, 276.000000, 242.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][24], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][24], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][24], 12.500000, 6.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][24], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][24], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][24], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][24], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][24], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][24], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][24], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][24], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][24], 0);

	CHAXWUTAMA[playerid][25] = CreatePlayerTextDraw(playerid, 276.000000, 249.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][25], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][25], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][25], 12.500000, 6.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][25], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][25], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][25], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][25], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][25], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][25], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][25], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][25], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][25], 0);

	CHAXWUTAMA[playerid][26] = CreatePlayerTextDraw(playerid, 284.000000, 257.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][26], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][26], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][26], 12.500000, 6.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][26], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][26], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][26], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][26], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][26], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][26], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][26], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][26], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][26], 0);

	CHAXWUTAMA[playerid][27] = CreatePlayerTextDraw(playerid, 334.000000, 225.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][27], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][27], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][27], 37.000000, 12.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][27], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][27], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][27], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][27], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][27], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][27], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][27], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][27], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][27], 0);

	CHAXWUTAMA[playerid][28] = CreatePlayerTextDraw(playerid, 341.000000, 235.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][28], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][28], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][28], 23.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][28], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][28], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][28], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][28], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][28], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][28], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][28], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][28], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][28], 0);

	CHAXWUTAMA[playerid][29] = CreatePlayerTextDraw(playerid, 346.000000, 226.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][29], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][29], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][29], 0.500000, 7.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][29], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][29], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][29], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][29], 1296911871);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][29], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][29], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][29], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][29], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][29], 0);

	CHAXWUTAMA[playerid][30] = CreatePlayerTextDraw(playerid, 358.000000, 226.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][30], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][30], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][30], 0.500000, 7.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][30], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][30], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][30], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][30], 1296911871);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][30], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][30], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][30], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][30], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][30], 0);

	CHAXWUTAMA[playerid][31] = CreatePlayerTextDraw(playerid, 310.000000, 295.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][31], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][31], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][31], 26.500000, 26.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][31], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][31], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][31], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][31], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][31], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][31], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][31], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][31], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][31], 1);

	CHAXWUTAMA[playerid][32] = CreatePlayerTextDraw(playerid, 301.000000, 292.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][32], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][32], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][32], 17.500000, 20.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][32], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][32], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][32], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][32], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][32], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][32], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][32], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][32], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][32], 0);

	CHAXWUTAMA[playerid][33] = CreatePlayerTextDraw(playerid, 301.000000, 304.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][33], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][33], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][33], 17.500000, 20.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][33], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][33], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][33], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][33], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][33], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][33], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][33], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][33], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][33], 0);

	CHAXWUTAMA[playerid][34] = CreatePlayerTextDraw(playerid, 328.000000, 292.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][34], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][34], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][34], 17.500000, 20.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][34], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][34], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][34], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][34], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][34], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][34], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][34], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][34], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][34], 0);

	CHAXWUTAMA[playerid][35] = CreatePlayerTextDraw(playerid, 328.000000, 304.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][35], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][35], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][35], 17.500000, 20.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][35], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][35], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][35], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][35], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][35], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][35], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][35], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][35], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][35], 0);

	CHAXWUTAMA[playerid][36] = CreatePlayerTextDraw(playerid, 304.000000, 304.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][36], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][36], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][36], 38.500000, 10.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][36], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][36], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][36], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][36], -25527041);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][36], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][36], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][36], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][36], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][36], 0);

	CHAXWUTAMA[playerid][37] = CreatePlayerTextDraw(playerid, 316.000000, 299.000000, "X");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][37], 1);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][37], 0.533333, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][37], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][37], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][37], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][37], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][37], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][37], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][37], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][37], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][37], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][37], 0);

	CHAXWUTAMA[playerid][38] = CreatePlayerTextDraw(playerid, 226.000000, 128.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][38], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][38], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][38], 62.500000, 85.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][38], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][38], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][38], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][38], -25527296);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][38], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][38], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][38], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][38], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][38], 1);

	CHAXWUTAMA[playerid][39] = CreatePlayerTextDraw(playerid, 292.000000, 128.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][39], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][39], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][39], 62.500000, 85.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][39], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][39], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][39], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][39], -25527296);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][39], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][39], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][39], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][39], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][39], 1);

	CHAXWUTAMA[playerid][40] = CreatePlayerTextDraw(playerid, 357.000000, 128.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][40], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][40], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][40], 62.500000, 85.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][40], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][40], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][40], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][40], -25527296);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][40], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][40], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][40], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][40], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][40], 1);

	CHAXWUTAMA[playerid][41] = CreatePlayerTextDraw(playerid, 256.000000, 209.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][41], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][41], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][41], 62.500000, 85.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][41], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][41], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][41], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][41], -25527296);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][41], 0);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][41], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][41], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][41], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][41], 1);

	CHAXWUTAMA[playerid][42] = CreatePlayerTextDraw(playerid, 321.000000, 211.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][42], 4);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][42], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][42], 62.500000, 85.000000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][42], 1);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][42], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][42], 1);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][42], -25527296);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][42], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][42], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][42], 1);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][42], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][42], 1);

	CHAXWUTAMA[playerid][43] = CreatePlayerTextDraw(playerid, 256.000000, 196.000000, "DOCUMENT");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][43], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][43], 0.150000, 1.250000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][43], 461.000000, 144.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][43], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][43], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][43], 2);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][43], -1863413505);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][43], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][43], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][43], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][43], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][43], 0);

	CHAXWUTAMA[playerid][44] = CreatePlayerTextDraw(playerid, 320.000000, 196.000000, "INVENTORY");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][44], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][44], 0.150000, 1.250000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][44], 461.000000, 144.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][44], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][44], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][44], 2);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][44], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][44], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][44], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][44], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][44], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][44], 0);

	CHAXWUTAMA[playerid][45] = CreatePlayerTextDraw(playerid, 386.000000, 196.000000, "PHONE");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][45], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][45], 0.150000, 1.250000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][45], 461.000000, 144.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][45], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][45], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][45], 2);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][45], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][45], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][45], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][45], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][45], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][45], 0);

	CHAXWUTAMA[playerid][46] = CreatePlayerTextDraw(playerid, 288.000000, 272.000000, "INVOICE");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][46], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][46], 0.150000, 1.250000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][46], 461.000000, 144.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][46], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][46], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][46], 2);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][46], -1863413505);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][46], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][46], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][46], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][46], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][46], 0);

	CHAXWUTAMA[playerid][47] = CreatePlayerTextDraw(playerid, 353.000000, 272.000000, "TOYS");
	PlayerTextDrawFont(playerid, CHAXWUTAMA[playerid][47], 2);
	PlayerTextDrawLetterSize(playerid, CHAXWUTAMA[playerid][47], 0.150000, 1.250000);
	PlayerTextDrawTextSize(playerid, CHAXWUTAMA[playerid][47], 461.000000, 144.500000);
	PlayerTextDrawSetOutline(playerid, CHAXWUTAMA[playerid][47], 0);
	PlayerTextDrawSetShadow(playerid, CHAXWUTAMA[playerid][47], 0);
	PlayerTextDrawAlignment(playerid, CHAXWUTAMA[playerid][47], 2);
	PlayerTextDrawColor(playerid, CHAXWUTAMA[playerid][47], -1);
	PlayerTextDrawBackgroundColor(playerid, CHAXWUTAMA[playerid][47], 255);
	PlayerTextDrawBoxColor(playerid, CHAXWUTAMA[playerid][47], 50);
	PlayerTextDrawUseBox(playerid, CHAXWUTAMA[playerid][47], 0);
	PlayerTextDrawSetProportional(playerid, CHAXWUTAMA[playerid][47], 1);
	PlayerTextDrawSetSelectable(playerid, CHAXWUTAMA[playerid][47], 0);
}

ShowRadial(playerid, bool: status)
{
    if(status)
    {
		AllGui_Status(playerid, false);
		forex(txd, 48)
		{
			PlayerTextDrawShow(playerid, CHAXWUTAMA[playerid][txd]);
		}
        SelectTextDraw(playerid, X11_LIGHTGREEN);
    }
    else
    {
		forex(txd, 48)
		{
			PlayerTextDrawHide(playerid, CHAXWUTAMA[playerid][txd]);
		}
        CancelSelectTextDraw(playerid);
		AllGui_Status(playerid, true);
    }
    return 1;
}

ShowRadialGeneral(playerid)
{
	AllGui_Status(playerid, false);
	forex(txd, 40)
	{
		PlayerTextDrawShow(playerid, CHAXWGENERAL[playerid][txd]);
	}
	SelectTextDraw(playerid, X11_LIGHTGREEN);
	return 1;
}

HideRadialGeneral(playerid)
{
	forex(txd, 40)
	{
		PlayerTextDrawHide(playerid, CHAXWGENERAL[playerid][txd]);
	}
	AllGui_Status(playerid, true);
	CancelSelectTextDraw(playerid);
	return 1;
}