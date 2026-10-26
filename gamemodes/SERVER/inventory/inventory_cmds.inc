#include <YSI\y_hooks>

new PlayerText: i_box[MAX_PLAYERS][MAX_INVENTORY];
new PlayerText: i_model[MAX_PLAYERS][MAX_INVENTORY];
new PlayerText: i_bar[MAX_PLAYERS][MAX_INVENTORY];
new PlayerText: i_item[MAX_PLAYERS][MAX_INVENTORY];
new PlayerText: i_qwt[MAX_PLAYERS][MAX_INVENTORY];
new PlayerText: i_textdraw[MAX_PLAYERS][31];

CreateInventoryTextdraw(playerid)
{
    i_box[playerid][0] = CreatePlayerTextDraw(playerid, 270.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][0], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][0], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][0], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][0], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][0], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][0], 1);

    i_box[playerid][1] = CreatePlayerTextDraw(playerid, 305.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][1], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][1], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][1], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][1], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][1], 1);

    i_box[playerid][2] = CreatePlayerTextDraw(playerid, 341.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][2], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][2], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][2], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][2], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][2], 1);

    i_box[playerid][3] = CreatePlayerTextDraw(playerid, 377.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][3], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][3], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][3], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][3], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][3], 1);

    i_box[playerid][4] = CreatePlayerTextDraw(playerid, 413.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][4], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][4], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][4], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][4], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][4], 1);

    i_box[playerid][5] = CreatePlayerTextDraw(playerid, 270.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][5], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][5], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][5], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][5], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][5], 1);

    i_box[playerid][6] = CreatePlayerTextDraw(playerid, 305.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][6], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][6], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][6], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][6], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][6], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][6], 1);

    i_box[playerid][7] = CreatePlayerTextDraw(playerid, 341.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][7], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][7], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][7], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][7], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][7], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][7], 1);

    i_box[playerid][8] = CreatePlayerTextDraw(playerid, 377.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][8], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][8], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][8], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][8], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][8], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][8], 1);

    i_box[playerid][9] = CreatePlayerTextDraw(playerid, 413.000, 186.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][9], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][9], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][9], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][9], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][9], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][9], 1);

    i_box[playerid][10] = CreatePlayerTextDraw(playerid, 270.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][10], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][10], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][10], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][10], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][10], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][10], 1);

    i_box[playerid][11] = CreatePlayerTextDraw(playerid, 305.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][11], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][11], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][11], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][11], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][11], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][11], 1);

    i_box[playerid][12] = CreatePlayerTextDraw(playerid, 341.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][12], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][12], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][12], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][12], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][12], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][12], 1);

    i_box[playerid][13] = CreatePlayerTextDraw(playerid, 377.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][13], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][13], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][13], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][13], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][13], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][13], 1);

    i_box[playerid][14] = CreatePlayerTextDraw(playerid, 413.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][14], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][14], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][14], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][14], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][14], 1);

    i_box[playerid][15] = CreatePlayerTextDraw(playerid, 270.000, 299.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][15], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][15], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][15], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][15], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][15], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][15], 1);

    i_box[playerid][16] = CreatePlayerTextDraw(playerid, 305.000, 299.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][16], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][16], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][16], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][16], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][16], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][16], 1);

    i_box[playerid][17] = CreatePlayerTextDraw(playerid, 341.000, 299.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][17], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][17], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][17], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][17], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][17], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][17], 1);

    i_box[playerid][18] = CreatePlayerTextDraw(playerid, 377.000, 299.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][18], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][18], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][18], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][18], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][18], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][18], 1);

    i_box[playerid][19] = CreatePlayerTextDraw(playerid, 413.000, 299.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_box[playerid][19], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, i_box[playerid][19], 1);
    PlayerTextDrawColor(playerid, i_box[playerid][19], 177);
    PlayerTextDrawSetShadow(playerid, i_box[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, i_box[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, i_box[playerid][19], 255);
    PlayerTextDrawFont(playerid, i_box[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, i_box[playerid][19], 1);
    PlayerTextDrawSetSelectable(playerid, i_box[playerid][19], 1);

    i_model[playerid][0] = CreatePlayerTextDraw(playerid, 280.000, 147.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][0], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][0], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][0], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][0], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][0], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][0], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][0], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][0], 0, 0);

    i_model[playerid][1] = CreatePlayerTextDraw(playerid, 313.000, 147.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][1], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][1], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][1], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][1], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][1], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][1], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][1], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][1], 0, 0);

    i_model[playerid][2] = CreatePlayerTextDraw(playerid, 349.000, 147.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][2], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][2], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][2], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][2], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][2], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][2], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][2], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][2], 0, 0);

    i_model[playerid][3] = CreatePlayerTextDraw(playerid, 386.000, 147.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][3], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][3], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][3], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][3], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][3], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][3], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][3], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][3], 0, 0);

    i_model[playerid][4] = CreatePlayerTextDraw(playerid, 423.000, 147.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][4], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][4], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][4], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][4], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][4], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][4], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][4], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][4], 0, 0);

    i_model[playerid][5] = CreatePlayerTextDraw(playerid, 280.000, 189.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][5], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][5], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][5], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][5], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][5], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][5], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][5], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][5], 0, 0);

    i_model[playerid][6] = CreatePlayerTextDraw(playerid, 316.000, 189.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][6], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][6], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][6], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][6], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][6], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][6], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][6], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][6], 0, 0);

    i_model[playerid][7] = CreatePlayerTextDraw(playerid, 350.000, 189.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][7], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][7], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][7], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][7], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][7], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][7], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][7], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][7], 0, 0);

    i_model[playerid][8] = CreatePlayerTextDraw(playerid, 387.000, 189.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][8], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][8], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][8], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][8], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][8], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][8], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][8], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][8], 0, 0);

    i_model[playerid][9] = CreatePlayerTextDraw(playerid, 422.000, 189.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][9], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][9], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][9], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][9], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][9], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][9], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][9], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][9], 0, 0);

    i_model[playerid][10] = CreatePlayerTextDraw(playerid, 280.000, 262.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][10], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][10], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][10], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][10], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][10], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][10], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][10], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][10], 0, 0);

    i_model[playerid][11] = CreatePlayerTextDraw(playerid, 313.000, 262.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][11], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][11], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][11], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][11], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][11], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][11], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][11], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][11], 0, 0);

    i_model[playerid][12] = CreatePlayerTextDraw(playerid, 349.000, 262.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][12], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][12], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][12], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][12], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][12], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][12], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][12], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][12], 0, 0);

    i_model[playerid][13] = CreatePlayerTextDraw(playerid, 386.000, 262.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][13], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][13], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][13], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][13], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][13], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][13], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][13], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][13], 0, 0);

    i_model[playerid][14] = CreatePlayerTextDraw(playerid, 423.000, 262.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][14], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][14], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][14], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][14], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][14], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][14], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][14], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][14], 0, 0);

    i_model[playerid][15] = CreatePlayerTextDraw(playerid, 280.000, 304.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][15], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][15], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][15], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][15], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][15], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][15], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][15], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][15], 0, 0);

    i_model[playerid][16] = CreatePlayerTextDraw(playerid, 316.000, 304.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][16], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][16], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][16], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][16], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][16], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][16], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][16], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][16], 0, 0);

    i_model[playerid][17] = CreatePlayerTextDraw(playerid, 350.000, 304.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][17], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][17], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][17], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][17], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][17], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][17], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][17], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][17], 0, 0);

    i_model[playerid][18] = CreatePlayerTextDraw(playerid, 387.000, 304.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][18], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][18], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][18], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][18], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][18], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][18], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][18], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][18], 0, 0);

    i_model[playerid][19] = CreatePlayerTextDraw(playerid, 422.000, 304.000, "_");
    PlayerTextDrawTextSize(playerid, i_model[playerid][19], 15.000, 28.000);
    PlayerTextDrawAlignment(playerid, i_model[playerid][19], 1);
    PlayerTextDrawColor(playerid, i_model[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, i_model[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, i_model[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, i_model[playerid][19], 0);
    PlayerTextDrawFont(playerid, i_model[playerid][19], 5);
    PlayerTextDrawSetProportional(playerid, i_model[playerid][19], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_model[playerid][19], 3026);
    PlayerTextDrawSetPreviewRot(playerid, i_model[playerid][19], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_model[playerid][19], 0, 0);

    i_item[playerid][0] = CreatePlayerTextDraw(playerid, 296.000, 173.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][0], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][0], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][0], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][0], 1);

    i_item[playerid][1] = CreatePlayerTextDraw(playerid, 330.000, 173.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][1], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][1], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][1], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][1], 1);

    i_item[playerid][2] = CreatePlayerTextDraw(playerid, 367.000, 173.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][2], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][2], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][2], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][2], 1);

    i_item[playerid][3] = CreatePlayerTextDraw(playerid, 403.000, 173.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][3], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][3], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][3], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][3], 1);

    i_item[playerid][4] = CreatePlayerTextDraw(playerid, 438.000, 173.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][4], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][4], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][4], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][4], 1);

    i_item[playerid][5] = CreatePlayerTextDraw(playerid, 296.000, 216.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][5], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][5], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][5], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][5], 1);

    i_item[playerid][6] = CreatePlayerTextDraw(playerid, 330.000, 217.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][6], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][6], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][6], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][6], 1);

    i_item[playerid][7] = CreatePlayerTextDraw(playerid, 367.000, 217.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][7], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][7], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][7], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][7], 1);

    i_item[playerid][8] = CreatePlayerTextDraw(playerid, 403.000, 217.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][8], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][8], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][8], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][8], 1);

    i_item[playerid][9] = CreatePlayerTextDraw(playerid, 438.000, 217.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][9], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][9], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][9], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][9], 1);

    i_item[playerid][10] = CreatePlayerTextDraw(playerid, 296.000, 286.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][10], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][10], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][10], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][10], 1);

    i_item[playerid][11] = CreatePlayerTextDraw(playerid, 330.000, 286.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][11], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][11], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][11], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][11], 1);

    i_item[playerid][12] = CreatePlayerTextDraw(playerid, 367.000, 286.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][12], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][12], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][12], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][12], 1);

    i_item[playerid][13] = CreatePlayerTextDraw(playerid, 403.000, 286.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][13], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][13], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][13], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][13], 1);

    i_item[playerid][14] = CreatePlayerTextDraw(playerid, 438.000, 286.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][14], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][14], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][14], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][14], 1);

    i_item[playerid][15] = CreatePlayerTextDraw(playerid, 296.000, 330.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][15], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][15], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][15], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][15], 1);

    i_item[playerid][16] = CreatePlayerTextDraw(playerid, 330.000, 330.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][16], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][16], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][16], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][16], 1);

    i_item[playerid][17] = CreatePlayerTextDraw(playerid, 367.000, 330.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][17], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][17], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][17], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][17], 1);

    i_item[playerid][18] = CreatePlayerTextDraw(playerid, 403.000, 330.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][18], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][18], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][18], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][18], 1);

    i_item[playerid][19] = CreatePlayerTextDraw(playerid, 438.000, 330.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_item[playerid][19], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_item[playerid][19], 3);
    PlayerTextDrawColor(playerid, i_item[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, i_item[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, i_item[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, i_item[playerid][19], 150);
    PlayerTextDrawFont(playerid, i_item[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, i_item[playerid][19], 1);

    i_qwt[playerid][0] = CreatePlayerTextDraw(playerid, 291.000, 142.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][0], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][0], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][0], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][0], 1);

    i_qwt[playerid][1] = CreatePlayerTextDraw(playerid, 325.000, 142.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][1], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][1], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][1], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][1], 1);

    i_qwt[playerid][2] = CreatePlayerTextDraw(playerid, 361.000, 142.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][2], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][2], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][2], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][2], 1);

    i_qwt[playerid][3] = CreatePlayerTextDraw(playerid, 398.000, 142.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][3], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][3], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][3], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][3], 1);

    i_qwt[playerid][4] = CreatePlayerTextDraw(playerid, 434.000, 142.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][4], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][4], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][4], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][4], 1);

    i_qwt[playerid][5] = CreatePlayerTextDraw(playerid, 291.000, 186.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][5], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][5], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][5], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][5], 1);

    i_qwt[playerid][6] = CreatePlayerTextDraw(playerid, 325.000, 186.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][6], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][6], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][6], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][6], 1);

    i_qwt[playerid][7] = CreatePlayerTextDraw(playerid, 361.000, 186.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][7], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][7], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][7], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][7], 1);

    i_qwt[playerid][8] = CreatePlayerTextDraw(playerid, 398.000, 186.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][8], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][8], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][8], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][8], 1);

    i_qwt[playerid][9] = CreatePlayerTextDraw(playerid, 434.000, 186.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][9], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][9], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][9], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][9], 1);

    i_qwt[playerid][10] = CreatePlayerTextDraw(playerid, 291.000, 255.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][10], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][10], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][10], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][10], 1);

    i_qwt[playerid][11] = CreatePlayerTextDraw(playerid, 325.000, 255.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][11], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][11], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][11], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][11], 1);

    i_qwt[playerid][12] = CreatePlayerTextDraw(playerid, 361.000, 255.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][12], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][12], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][12], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][12], 1);

    i_qwt[playerid][13] = CreatePlayerTextDraw(playerid, 398.000, 255.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][13], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][13], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][13], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][13], 1);

    i_qwt[playerid][14] = CreatePlayerTextDraw(playerid, 434.000, 255.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][14], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][14], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][14], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][14], 1);

    i_qwt[playerid][15] = CreatePlayerTextDraw(playerid, 291.000, 299.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][15], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][15], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][15], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][15], 1);

    i_qwt[playerid][16] = CreatePlayerTextDraw(playerid, 325.000, 299.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][16], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][16], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][16], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][16], 1);

    i_qwt[playerid][17] = CreatePlayerTextDraw(playerid, 361.000, 299.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][17], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][17], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][17], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][17], 1);

    i_qwt[playerid][18] = CreatePlayerTextDraw(playerid, 398.000, 299.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][18], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][18], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][18], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][18], 1);

    i_qwt[playerid][19] = CreatePlayerTextDraw(playerid, 434.000, 299.000, "x100");
    PlayerTextDrawLetterSize(playerid, i_qwt[playerid][19], 0.128, 0.799);
    PlayerTextDrawAlignment(playerid, i_qwt[playerid][19], 3);
    PlayerTextDrawColor(playerid, i_qwt[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, i_qwt[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, i_qwt[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, i_qwt[playerid][19], 150);
    PlayerTextDrawFont(playerid, i_qwt[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, i_qwt[playerid][19], 1);

    i_textdraw[playerid][0] = CreatePlayerTextDraw(playerid, 454.000, 256.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][0], 1.000, 83.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][0], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][0], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][0], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][0], 1);
    //PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][0], 1);

    i_textdraw[playerid][1] = CreatePlayerTextDraw(playerid, 453.000, 254.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][1], 3.000, 42.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][1], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][1], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][1], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][1], 1);
    //PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][1], 1);

    i_textdraw[playerid][2] = CreatePlayerTextDraw(playerid, 445.000, 130.000, "0,300/30");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][2], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][2], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][2], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][2], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][2], 1);

    i_textdraw[playerid][3] = CreatePlayerTextDraw(playerid, 311.000, 128.000, "Jezzy_Bertique");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][3], 0.170, 1.098);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][3], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][3], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][3], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][3], 1);

    i_textdraw[playerid][4] = CreatePlayerTextDraw(playerid, 262.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][4], 1.000, 200.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][4], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][4], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][4], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][4], 1);

    i_textdraw[playerid][5] = CreatePlayerTextDraw(playerid, 261.000, 141.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][5], 3.000, 38.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][5], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][5], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][5], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][5], 1);

    i_textdraw[playerid][6] = CreatePlayerTextDraw(playerid, 295.000, 240.000, "Backpack");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][6], 0.170, 1.098);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][6], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][6], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][6], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][6], 1);

    i_textdraw[playerid][7] = CreatePlayerTextDraw(playerid, 108.000, 143.000, "_");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][7], 150.000, 187.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][7], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][7], 0);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][7], 5);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][7], 0);
    PlayerTextDrawSetPreviewModel(playerid, i_textdraw[playerid][7], 25);
    PlayerTextDrawSetPreviewRot(playerid, i_textdraw[playerid][7], 0.000, 0.000, 0.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, i_textdraw[playerid][7], 0, 0);

    i_textdraw[playerid][8] = CreatePlayerTextDraw(playerid, 221.000, 160.000, "Kepala");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][8], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][8], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][8], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][8], 1);

    i_textdraw[playerid][9] = CreatePlayerTextDraw(playerid, 252.000, 194.000, "Tangan Kanan");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][9], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][9], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][9], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][9], 1);

    i_textdraw[playerid][10] = CreatePlayerTextDraw(playerid, 240.000, 260.000, "Kaki Kanan");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][10], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][10], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][10], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][10], 1);

    i_textdraw[playerid][11] = CreatePlayerTextDraw(playerid, 151.000, 260.000, "Kaki Kiri");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][11], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][11], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][11], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][11], 1);

    i_textdraw[playerid][12] = CreatePlayerTextDraw(playerid, 154.000, 197.000, "Tangan Kiri");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][12], 0.180, 0.898);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][12], 3);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][12], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][12], 1);

    i_textdraw[playerid][13] = CreatePlayerTextDraw(playerid, 202.000, 173.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][13], 20.000, 2.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][13], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][13], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][13], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][13], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][13], 1);

    i_textdraw[playerid][14] = CreatePlayerTextDraw(playerid, 212.000, 208.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][14], 20.000, 2.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][14], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][14], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][14], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][14], 1);

    i_textdraw[playerid][15] = CreatePlayerTextDraw(playerid, 208.000, 275.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][15], 20.000, 2.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][15], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][15], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][15], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][15], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][15], 1);

    i_textdraw[playerid][16] = CreatePlayerTextDraw(playerid, 128.000, 275.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][16], 20.000, 2.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][16], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][16], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][16], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][16], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][16], 1);

    i_textdraw[playerid][17] = CreatePlayerTextDraw(playerid, 121.000, 213.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][17], 20.000, 2.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][17], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][17], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][17], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][17], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][17], 1);

    i_textdraw[playerid][18] = CreatePlayerTextDraw(playerid, 261.000, 347.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][18], 38.000, 14.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][18], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][18], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][18], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][18], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][18], 1);

    i_textdraw[playerid][19] = CreatePlayerTextDraw(playerid, 280.000, 349.000, "Amount");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][19], 0.159, 0.898);
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][19], 2.000, 6.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][19], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][19], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][19], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][19], 1);

    i_textdraw[playerid][21] = CreatePlayerTextDraw(playerid, 301.000, 347.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][21], 38.000, 14.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][21], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][21], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][21], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][21], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][21], 1);

    i_textdraw[playerid][22] = CreatePlayerTextDraw(playerid, 319.000, 349.000, "Use");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][22], 0.159, 0.898);
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][22], 2.000, 6.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][22], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][22], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][22], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][22], 1);

    i_textdraw[playerid][23] = CreatePlayerTextDraw(playerid, 341.000, 347.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][23], 38.000, 14.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][23], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][23], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][23], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][23], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][23], 1);

    i_textdraw[playerid][24] = CreatePlayerTextDraw(playerid, 360.000, 349.000, "Give");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][24], 0.159, 0.898);
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][24], 2.000, 6.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][24], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][24], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][24], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][24], 1);

    i_textdraw[playerid][25] = CreatePlayerTextDraw(playerid, 381.000, 347.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][25], 38.000, 14.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][25], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][25], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][25], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][25], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][25], 1);

    i_textdraw[playerid][26] = CreatePlayerTextDraw(playerid, 400.000, 349.000, "Drop");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][26], 0.170, 0.898);
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][26], 2.000, 6.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][26], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][26], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][26], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][26], 1);

    i_textdraw[playerid][27] = CreatePlayerTextDraw(playerid, 422.000, 347.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][27], 15.000, 14.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][27], 1);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][27], 177);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][27], 255);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][27], 1);
    PlayerTextDrawSetSelectable(playerid, i_textdraw[playerid][27], 1);

    i_textdraw[playerid][28] = CreatePlayerTextDraw(playerid, 430.000, 349.000, "X");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][28], 0.180, 0.898);
    PlayerTextDrawTextSize(playerid, i_textdraw[playerid][28], 2.000, 6.000);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][28], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][28], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][28], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][28], 1);

    i_textdraw[playerid][30] = CreatePlayerTextDraw(playerid, 145.000, 134.000, "Body");
    PlayerTextDrawLetterSize(playerid, i_textdraw[playerid][30], 0.200, 0.999);
    PlayerTextDrawAlignment(playerid, i_textdraw[playerid][30], 2);
    PlayerTextDrawColor(playerid, i_textdraw[playerid][30], -65281);
    PlayerTextDrawSetShadow(playerid, i_textdraw[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, i_textdraw[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, i_textdraw[playerid][30], 150);
    PlayerTextDrawFont(playerid, i_textdraw[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, i_textdraw[playerid][30], 1);

}

hook OnPlayerConnect(playerid)
{
    CreateInventoryTextdraw(playerid);
    return 1;
}

ShowInventoryTD(playerid)
{ 
    PlayerTextDrawTextSize(playerid, inv::textdraw[playerid][13], AccountData[playerid][pHead] * 20.0/100, 2.0);
    PlayerTextDrawTextSize(playerid, inv::textdraw[playerid][14], AccountData[playerid][pRHand] * 20.0/100, 2.0);
    PlayerTextDrawTextSize(playerid, inv::textdraw[playerid][15], AccountData[playerid][pRFoot] * 20.0/100, 2.0);
    PlayerTextDrawTextSize(playerid, inv::textdraw[playerid][16], AccountData[playerid][pLFoot] * 20.0/100, 2.0);
    PlayerTextDrawTextSize(playerid, inv::textdraw[playerid][17], AccountData[playerid][pLHand] * 20.0/100, 2.0);

    AccountData[playerid][pAmountInv] = 0;
    PlayerTextDrawSetString(playerid, inv::textdraw[playerid][19], "Amount");
    PlayerTextDrawSetPreviewModel(playerid, inv::textdraw[playerid][7], GetPlayerSkin(playerid));

    forex(i, 31)
    {
        PlayerTextDrawShow(playerid, inv::textdraw[playerid][i]);
    }
}

Inventory_Show(playerid)
{
    AllGui_Status(playerid, false);

    if(!IsPlayerConnected(playerid)) return 0;

    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");
    SendClientMessage(playerid, -1, " ");

    AccountData[playerid][pSelectItem] = -1;

    ShowInventoryTD(playerid);
    new str[120];
    for(new index; index < MAX_INVENTORY; index ++) 
    {
        PlayerTextDrawColor(playerid, inv::box[playerid][index], 177);

        PlayerTextDrawShow(playerid, inv::box[playerid][index]);
        if(InventoryData[playerid][index][invExists])
        {
            for (new i; i < sizeof(g_aInventoryItems); i ++) if(!strcmp(g_aInventoryItems[i][e_InventoryItem], InventoryData[playerid][index][invItem], true))
            {
                
                PlayerTextDrawSetPreviewModel(playerid, inv::model[playerid][index], InventoryData[playerid][index][invModel]);
                PlayerTextDrawShow(playerid, inv::model[playerid][index]);

                format(str, sizeof(str), "%s", g_aInventoryItems[i][e_InventoryItem], InventoryData[playerid][index][invQuantity]);
                PlayerTextDrawSetString(playerid, inv::item[playerid][index], str);
                PlayerTextDrawShow(playerid, inv::item[playerid][index]);

                format(str, sizeof(str), "x%d", InventoryData[playerid][index][invQuantity], Float:GetInventoryWeight(g_aInventoryItems[i][e_InventoryItem], InventoryData[playerid][index][invQuantity]));
                PlayerTextDrawSetString(playerid, inv::qwt[playerid][index], str);
                PlayerTextDrawShow(playerid, inv::qwt[playerid][index]);
            }
        }
    }
    
    format(str, sizeof(str), "%.1f/50", AccountData[playerid][pBeratItem]);
    PlayerTextDrawSetString(playerid, inv::textdraw[playerid][3], str);

    format(str, sizeof(str), "%s", AccountData[playerid][pName]);
    PlayerTextDrawSetString(playerid, inv::textdraw[playerid][3], str);
    
    SelectTextDraw(playerid, COLOR_RED);
    return 1;
}

Inventory_Close(playerid)
{
    forex(ko,31)
    {
        PlayerTextDrawHide(playerid, inv::textdraw[playerid][ko]);
    }
    forex(i, MAX_INVENTORY)
    {
        PlayerTextDrawHide(playerid, inv::box[playerid][i]);
        PlayerTextDrawHide(playerid, inv::model[playerid][i]);
        PlayerTextDrawHide(playerid, inv::item[playerid][i]);
        PlayerTextDrawHide(playerid, inv::qwt[playerid][i]);
        PlayerTextDrawHide(playerid, inv::bar[playerid][i]);
    }
    AllGui_Status(playerid, true);
    CancelSelectTextDraw(playerid);
    AccountData[playerid][pSelectItem] = -1;
    AccountData[playerid][pAmountInv] = 0;
    return 1;
}


stock SelectItem(playerid, i)
{
    AccountData[playerid][pSelectItem] = i;
    PlayerTextDrawColor(playerid, inv::box[playerid][i], -65281);
    PlayerTextDrawShow(playerid, inv::box[playerid][i]);
    PlayerPlaySound(playerid, 1052, 0, 0, 0);
    return 1;
}

stock UnselectItem(playerid)
{
    if(AccountData[playerid][pSelectItem] != -1)
    {
        PlayerTextDrawHide(playerid, inv::box[playerid][AccountData[playerid][pSelectItem]]);
        PlayerTextDrawColor(playerid, inv::box[playerid][AccountData[playerid][pSelectItem]], 177);
		PlayerTextDrawShow(playerid, inv::box[playerid][AccountData[playerid][pSelectItem]]);
    }
    AccountData[playerid][pSelectItem] = -1;
    return 1;
}

/*stock MoveItemToNewSlot(playerid, b, a)
{
    //textdraw slot before moving
	PlayerTextDrawSetPreviewModel(playerid, inv::model[playerid][b], 11477);
	PlayerTextDrawSetString(playerid, inv::item[playerid][b], "_");
	PlayerTextDrawSetString(playerid, inv::qwt[playerid][b], "_");
    //var inv item
	InventoryData[playerid][a][invExists] = true;
	InventoryData[playerid][a][invModel] = InventoryData[playerid][b][invModel];
	InventoryData[playerid][a][invQuantity] = InventoryData[playerid][b][invQuantity];
	strpack(InventoryData[playerid][a][invItem], InventoryData[playerid][b][invItem], 32 char);
    //var after inv item
	InventoryData[playerid][b][invExists] = false;
	InventoryData[playerid][b][invModel] = 0;
	InventoryData[playerid][b][invQuantity] = 0;
	strpack(InventoryData[playerid][b][invItem], "", 32 char);
    //textdrawslot after moving
	new invStr[64];
	format(invStr, 64, "%dx", InventoryData[playerid][a][invQuantity], Float:GetInventoryWeight(InventoryData[playerid][a][invItem], InventoryData[playerid][a][invQuantity]));
	PlayerTextDrawSetPreviewModel(playerid, inv::model[playerid][a], InventoryData[playerid][a][invModel]);
	PlayerTextDrawSetString(playerid, inv::item[playerid][a], InventoryData[playerid][a][invItem]);
	PlayerTextDrawSetString(playerid, inv::qwt[playerid][a], invStr);
	//all show and hide slot textdraw
	PlayerTextDrawHide(playerid, inv::box[playerid][b]);
	PlayerTextDrawHide(playerid, inv::model[playerid][b]);
	PlayerTextDrawHide(playerid, inv::qwt[playerid][b]);
	PlayerTextDrawHide(playerid, inv::item[playerid][b]);
	PlayerTextDrawShow(playerid, inv::box[playerid][a]);
	PlayerTextDrawShow(playerid, inv::model[playerid][a]);
	PlayerTextDrawShow(playerid, inv::qwt[playerid][a]);
	PlayerTextDrawShow(playerid, inv::item[playerid][a]);
    return 1;
}*/