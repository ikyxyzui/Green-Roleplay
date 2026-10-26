#include <YSI\y_hooks>

new PlayerText: SVRP_Phone[MAX_PLAYERS][21];
new PlayerText: IphoneNyaNih[MAX_PLAYERS][12];
new PlayerText: ContactButtonPhone[MAX_PLAYERS];
new PlayerText: GpsButtonPhone[MAX_PLAYERS];
new PlayerText: LayananButtonPhone[MAX_PLAYERS];
new PlayerText: BankButtonPhone[MAX_PLAYERS];
new PlayerText: LainnyaButtonPhone[MAX_PLAYERS];
new PlayerText: TransButtonPhone[MAX_PLAYERS];
new PlayerText: YellowButtonPhone[MAX_PLAYERS];
new PlayerText: TwitterButtonPhone[MAX_PLAYERS];
new PlayerText: VehicleButtonPhone[MAX_PLAYERS];
new PlayerText: InformationButtonPhone[MAX_PLAYERS];
new PlayerText: WhatsappButtonPhone[MAX_PLAYERS];
new PlayerText: CallButtonPhone[MAX_PLAYERS];
new PlayerText: PhoneAppLogo[MAX_PLAYERS][37];
new PlayerText: CloseButtonPhone[MAX_PLAYERS][3];

//Information Gui
new PlayerText: InformGui[MAX_PLAYERS][46];
new PlayerText: CloseInforGuiButton[MAX_PLAYERS][3];

//phone cal func
new PlayerText: ContactNameTD[MAX_PLAYERS];
new PlayerText: StatusDialingTD[MAX_PLAYERS];
new PlayerText: SVRP_CallTD[MAX_PLAYERS][2];
new PlayerText: CloseCallButton[MAX_PLAYERS][3];
new PlayerText: RedButtonoutComingCall[MAX_PLAYERS];
new PlayerText: RedButtonincomingCall[MAX_PLAYERS];
new PlayerText: GreenButtonincomingCall[MAX_PLAYERS];

//phone call app
new PlayerText: PhoneCallGuiReal[MAX_PLAYERS][36];
new PlayerText: CloseCallGuiButton[MAX_PLAYERS][3];

//BankGui
new PlayerText: SVRP_GuiBankTD[MAX_PLAYERS][15];
new PlayerText: SVRP_GuiBankDollar[MAX_PLAYERS];
new PlayerText: TransferBankButton[MAX_PLAYERS];
new PlayerText: TransferText[MAX_PLAYERS];
new PlayerText: CloseBankButton[MAX_PLAYERS][3];
new PlayerText: SVRP_BankString[MAX_PLAYERS][2];

new PlayerText: ATRP_SpotifyTD[MAX_PLAYERS][26];
new PlayerText: CloseSpotifyButton[MAX_PLAYERS];

// HomeTD Phone
new PlayerText: SVRP_TwitterHomeTD[MAX_PLAYERS][8];
new PlayerText: CloseTwitterHome[MAX_PLAYERS][3];

// NEW TWEET
new PlayerText: SVRP_TwitterHomePageTD[MAX_PLAYERS][9];
new PlayerText: CloseTwitterHomePage[MAX_PLAYERS][3];
new PlayerText: SVRP_TwitterPageTD[MAX_PLAYERS][12];

MainPhoneUnload(playerid)
{
    for(new i; i < 21; i++) PlayerTextDrawDestroy(playerid, SVRP_Phone[playerid][i]);
    for(new ipnn; ipnn < 12; ipnn++) PlayerTextDrawDestroy(playerid, IphoneNyaNih[playerid][ipnn]);
    for(new plg; plg < 37; plg++) PlayerTextDrawDestroy(playerid, PhoneAppLogo[playerid][plg]);
    PlayerTextDrawDestroy(playerid, ContactButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, GpsButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, LayananButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, LainnyaButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, VehicleButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, WhatsappButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, InformationButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, BankButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, TransButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, TwitterButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, YellowButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, CallButtonPhone[playerid]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][2]);
    return 1;
}

InforGuiUnload(playerid)
{
    for(new i; i < 46; i++) PlayerTextDrawDestroy(playerid, InformGui[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseButtonPhone[playerid][2]);
    return 1;
}

BankTdUnload(playerid)
{
    for(new i; i < 15; i++) PlayerTextDrawDestroy(playerid, SVRP_GuiBankTD[playerid][i]);
    PlayerTextDrawDestroy(playerid, SVRP_GuiBankDollar[playerid]);
    PlayerTextDrawDestroy(playerid, TransferBankButton[playerid]);
    PlayerTextDrawDestroy(playerid, TransferText[playerid]);
    PlayerTextDrawDestroy(playerid, CloseBankButton[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseBankButton[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseBankButton[playerid][2]);
    for(new bstr; bstr < 2; bstr++) PlayerTextDrawDestroy(playerid, SVRP_BankString[playerid][bstr]);
    return 1;
}

TwitterHomeUnload(playerid)
{
    for(new i; i < 8; i++) PlayerTextDrawDestroy(playerid, SVRP_TwitterHomeTD[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHome[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHome[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHome[playerid][2]);
    return 1;
}

TwitterHomePageUnload(playerid)
{
    for(new i; i < 9; i++) PlayerTextDrawDestroy(playerid, SVRP_TwitterHomePageTD[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHomePage[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHomePage[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseTwitterHomePage[playerid][2]);
    for(new gtw; gtw < 12; gtw++) PlayerTextDrawDestroy(playerid, SVRP_TwitterPageTD[playerid][gtw]);
    return 1;
}

CallGuiUnload(playerid)
{
    for(new i; i < 36; i++) PlayerTextDrawDestroy(playerid, PhoneCallGuiReal[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseCallGuiButton[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseCallGuiButton[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseCallGuiButton[playerid][2]);
    return 1;
}

CallTDUnload(playerid)
{
    PlayerTextDrawDestroy(playerid, ContactNameTD[playerid]);
    PlayerTextDrawDestroy(playerid, StatusDialingTD[playerid]);
    for(new i; i < 2; i++) PlayerTextDrawDestroy(playerid, SVRP_CallTD[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseCallButton[playerid][0]);
    PlayerTextDrawDestroy(playerid, CloseCallButton[playerid][1]);
    PlayerTextDrawDestroy(playerid, CloseCallButton[playerid][2]);
    PlayerTextDrawDestroy(playerid, RedButtonoutComingCall[playerid]);
    PlayerTextDrawDestroy(playerid, RedButtonincomingCall[playerid]);
    PlayerTextDrawDestroy(playerid, GreenButtonincomingCall[playerid]);
    return 1;
}

SpotifyUnload(playerid)
{
    for(new i; i < 26; i++) PlayerTextDrawDestroy(playerid, ATRP_SpotifyTD[playerid][i]);
    PlayerTextDrawDestroy(playerid, CloseSpotifyButton[playerid]);
    return 1;
}

SVPhoneCallGuiLoad(playerid)
{
    PhoneCallGuiReal[playerid][0] = CreatePlayerTextDraw(playerid, 454.500, 181.000, "081234567890");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][0], 0.187, 1.095);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][0], 2);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][0], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][0], 1);

    PhoneCallGuiReal[playerid][1] = CreatePlayerTextDraw(playerid, 404.000, 201.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][1], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][1], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][1], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][1], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][1], 1);

    PhoneCallGuiReal[playerid][2] = CreatePlayerTextDraw(playerid, 437.000, 201.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][2], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][2], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][2], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][2], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][2], 1);

    PhoneCallGuiReal[playerid][3] = CreatePlayerTextDraw(playerid, 470.000, 201.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][3], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][3], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][3], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][3], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][3], 1);

    PhoneCallGuiReal[playerid][4] = CreatePlayerTextDraw(playerid, 404.000, 242.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][4], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][4], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][4], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][4], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][4], 1);

    PhoneCallGuiReal[playerid][5] = CreatePlayerTextDraw(playerid, 437.000, 242.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][5], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][5], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][5], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][5], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][5], 1);

    PhoneCallGuiReal[playerid][6] = CreatePlayerTextDraw(playerid, 470.000, 242.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][6], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][6], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][6], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][6], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][6], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][6], 1);

    PhoneCallGuiReal[playerid][7] = CreatePlayerTextDraw(playerid, 404.000, 283.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][7], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][7], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][7], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][7], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][7], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][7], 1);

    PhoneCallGuiReal[playerid][8] = CreatePlayerTextDraw(playerid, 437.000, 283.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][8], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][8], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][8], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][8], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][8], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][8], 1);

    PhoneCallGuiReal[playerid][9] = CreatePlayerTextDraw(playerid, 470.000, 283.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][9], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][9], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][9], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][9], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][9], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][9], 1);

    PhoneCallGuiReal[playerid][10] = CreatePlayerTextDraw(playerid, 404.000, 324.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][10], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][10], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][10], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][10], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][10], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][10], 1);

    PhoneCallGuiReal[playerid][11] = CreatePlayerTextDraw(playerid, 437.000, 324.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][11], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][11], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][11], 1018393087);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][11], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][11], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][11], 1);

    PhoneCallGuiReal[playerid][12] = CreatePlayerTextDraw(playerid, 470.000, 324.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][12], 33.000, 41.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][12], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][12], -2139062017);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][12], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][12], 1);
    PlayerTextDrawSetSelectable(playerid, PhoneCallGuiReal[playerid][12], 1);

    PhoneCallGuiReal[playerid][13] = CreatePlayerTextDraw(playerid, 451.100, 225.589, "ABC");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][13], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][13], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][13], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][13], 1);

    PhoneCallGuiReal[playerid][14] = CreatePlayerTextDraw(playerid, 484.100, 225.589, "DEF");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][14], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][14], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][14], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][14], 1);

    PhoneCallGuiReal[playerid][15] = CreatePlayerTextDraw(playerid, 418.100, 265.589, "GHI");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][15], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][15], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][15], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][15], 1);

    PhoneCallGuiReal[playerid][16] = CreatePlayerTextDraw(playerid, 451.100, 265.589, "JKL");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][16], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][16], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][16], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][16], 1);

    PhoneCallGuiReal[playerid][17] = CreatePlayerTextDraw(playerid, 483.100, 265.589, "MNO");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][17], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][17], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][17], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][17], 1);

    PhoneCallGuiReal[playerid][18] = CreatePlayerTextDraw(playerid, 417.100, 306.589, "PQRS");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][18], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][18], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][18], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][18], 1);

    PhoneCallGuiReal[playerid][19] = CreatePlayerTextDraw(playerid, 451.100, 307.589, "TUV");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][19], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][19], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][19], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][19], 1);

    PhoneCallGuiReal[playerid][20] = CreatePlayerTextDraw(playerid, 483.100, 306.589, "WXYZ");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][20], 0.100, 0.589);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][20], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][20], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][20], 1);

    PhoneCallGuiReal[playerid][21] = CreatePlayerTextDraw(playerid, 420.500, 346.000, "+");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][21], 0.209, 1.099);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][21], 2);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][21], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][21], 1);

    PhoneCallGuiReal[playerid][22] = CreatePlayerTextDraw(playerid, 418.000, 215.000, "1");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][22], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][22], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][22], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][22], 1);

    PhoneCallGuiReal[playerid][23] = CreatePlayerTextDraw(playerid, 451.000, 215.000, "2");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][23], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][23], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][23], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][23], 1);

    PhoneCallGuiReal[playerid][24] = CreatePlayerTextDraw(playerid, 484.000, 215.000, "3");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][24], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][24], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][24], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][24], 1);

    PhoneCallGuiReal[playerid][25] = CreatePlayerTextDraw(playerid, 418.000, 255.000, "4");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][25], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][25], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][25], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][25], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][25], 1);

    PhoneCallGuiReal[playerid][26] = CreatePlayerTextDraw(playerid, 451.000, 255.000, "5");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][26], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][26], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][26], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][26], 1);

    PhoneCallGuiReal[playerid][27] = CreatePlayerTextDraw(playerid, 484.000, 255.000, "6");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][27], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][27], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][27], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][27], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][27], 1);

    PhoneCallGuiReal[playerid][28] = CreatePlayerTextDraw(playerid, 418.000, 296.000, "7");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][28], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][28], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][28], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][28], 1);

    PhoneCallGuiReal[playerid][29] = CreatePlayerTextDraw(playerid, 451.000, 296.000, "8");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][29], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][29], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][29], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][29], 1);

    PhoneCallGuiReal[playerid][30] = CreatePlayerTextDraw(playerid, 484.000, 296.000, "9");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][30], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][30], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][30], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][30], 1);

    PhoneCallGuiReal[playerid][31] = CreatePlayerTextDraw(playerid, 418.000, 337.000, "0");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][31], 0.259, 1.289);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][31], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][31], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][31], 1);

    PhoneCallGuiReal[playerid][32] = CreatePlayerTextDraw(playerid, 484.000, 338.000, "<");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][32], 0.180, 1.599);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][32], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][32], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][32], 1);

    PhoneCallGuiReal[playerid][33] = CreatePlayerTextDraw(playerid, 455.000, 339.000, "/");
    PlayerTextDrawLetterSize(playerid, PhoneCallGuiReal[playerid][33], -0.359, 1.199);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][33], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][33], 150);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][33], 1);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][33], 1);

    PhoneCallGuiReal[playerid][34] = CreatePlayerTextDraw(playerid, 449.000, 339.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][34], 6.000, 5.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][34], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][34], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][34], 1);

    PhoneCallGuiReal[playerid][35] = CreatePlayerTextDraw(playerid, 452.000, 346.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneCallGuiReal[playerid][35], 5.000, 5.000);
    PlayerTextDrawAlignment(playerid, PhoneCallGuiReal[playerid][35], 1);
    PlayerTextDrawColor(playerid, PhoneCallGuiReal[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, PhoneCallGuiReal[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, PhoneCallGuiReal[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneCallGuiReal[playerid][35], 255);
    PlayerTextDrawFont(playerid, PhoneCallGuiReal[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, PhoneCallGuiReal[playerid][35], 1);

    CloseCallGuiButton[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseCallGuiButton[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseCallGuiButton[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseCallGuiButton[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallGuiButton[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallGuiButton[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallGuiButton[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseCallGuiButton[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallGuiButton[playerid][0], 1);

    CloseCallGuiButton[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseCallGuiButton[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseCallGuiButton[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseCallGuiButton[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallGuiButton[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallGuiButton[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallGuiButton[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseCallGuiButton[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallGuiButton[playerid][1], 1);

    CloseCallGuiButton[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseCallGuiButton[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseCallGuiButton[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseCallGuiButton[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallGuiButton[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallGuiButton[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallGuiButton[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseCallGuiButton[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallGuiButton[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseCallGuiButton[playerid][2], 1);
}

SVPhoneTwitterHomepageLoad(playerid)
{
    SVRP_TwitterHomePageTD[playerid][0] = CreatePlayerTextDraw(playerid, 488.000, 147.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][0], 14.000, 16.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][0], 1097458175);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][0], 1);
    PlayerTextDrawSetSelectable(playerid, SVRP_TwitterHomePageTD[playerid][0], 1);

    SVRP_TwitterHomePageTD[playerid][1] = CreatePlayerTextDraw(playerid, 402.000, 351.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][1], 14.000, 16.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][1], 1097458175);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, SVRP_TwitterHomePageTD[playerid][1], 1);

    SVRP_TwitterHomePageTD[playerid][2] = CreatePlayerTextDraw(playerid, 491.000, 351.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][2], 14.000, 16.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][2], 1097458175);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, SVRP_TwitterHomePageTD[playerid][2], 1);

    SVRP_TwitterHomePageTD[playerid][3] = CreatePlayerTextDraw(playerid, 450.000, 147.000, "X");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][3], 0.246, 1.399);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][3], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][3], 1);

    SVRP_TwitterHomePageTD[playerid][4] = CreatePlayerTextDraw(playerid, 451.000, 147.000, "X");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][4], 0.246, 1.399);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][4], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][4], 1);

    SVRP_TwitterHomePageTD[playerid][5] = CreatePlayerTextDraw(playerid, 495.000, 148.000, "+");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][5], 0.246, 1.399);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][5], 10.000, 9.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][5], 2);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][5], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][5], 1);

    SVRP_TwitterHomePageTD[playerid][6] = CreatePlayerTextDraw(playerid, 413.000, 166.000, "Hi Daple_Alperino, Welcome to X");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][6], 0.155, 0.898);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][6], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][6], 1);

    SVRP_TwitterHomePageTD[playerid][7] = CreatePlayerTextDraw(playerid, 409.000, 352.000, "<");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][7], 0.246, 1.399);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][7], 10.000, 9.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][7], 2);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][7], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][7], 1);

    SVRP_TwitterHomePageTD[playerid][8] = CreatePlayerTextDraw(playerid, 498.000, 352.000, "<");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomePageTD[playerid][8], -0.238, 1.389);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomePageTD[playerid][8], 10.000, 9.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomePageTD[playerid][8], 2);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomePageTD[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomePageTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomePageTD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomePageTD[playerid][8], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomePageTD[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomePageTD[playerid][8], 1);

    CloseTwitterHomePage[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseTwitterHomePage[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHomePage[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHomePage[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHomePage[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHomePage[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHomePage[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHomePage[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHomePage[playerid][0], 1);

    CloseTwitterHomePage[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseTwitterHomePage[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHomePage[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHomePage[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHomePage[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHomePage[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHomePage[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHomePage[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHomePage[playerid][1], 1);

    CloseTwitterHomePage[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseTwitterHomePage[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHomePage[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHomePage[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHomePage[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHomePage[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHomePage[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHomePage[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHomePage[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseTwitterHomePage[playerid][2], 1);

    SVRP_TwitterPageTD[playerid][0] = CreatePlayerTextDraw(playerid, 402.000, 178.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][0], 103.000, 48.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][0], 1768516095);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][0], 1);

    SVRP_TwitterPageTD[playerid][1] = CreatePlayerTextDraw(playerid, 405.000, 180.000, "Daple_alperino");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][1], 0.135, 0.796);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][1], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][1], 1);

    SVRP_TwitterPageTD[playerid][2] = CreatePlayerTextDraw(playerid, 405.000, 190.000, "[OPEN] NICANITY GARAGE OPEN MODIF & REPAIR LOC ** GPS>NICANITY GARAGE MULLHOLAND ");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][2], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][2], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][2], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][2], 1);

    SVRP_TwitterPageTD[playerid][3] = CreatePlayerTextDraw(playerid, 501.000, 216.000, "30Sec");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][3], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][3], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][3], 3);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][3], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][3], 1);

    SVRP_TwitterPageTD[playerid][4] = CreatePlayerTextDraw(playerid, 402.000, 232.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][4], 103.000, 48.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][4], 1768516095);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][4], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][4], 1);

    SVRP_TwitterPageTD[playerid][5] = CreatePlayerTextDraw(playerid, 405.000, 234.000, "Daple_alperino");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][5], 0.135, 0.796);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][5], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][5], 1);

    SVRP_TwitterPageTD[playerid][6] = CreatePlayerTextDraw(playerid, 405.000, 244.000, "[OPEN] NICANITY GARAGE OPEN MODIF & REPAIR LOC ** GPS>NICANITY GARAGE MULLHOLAND ");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][6], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][6], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][6], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][6], 1);

    SVRP_TwitterPageTD[playerid][7] = CreatePlayerTextDraw(playerid, 501.000, 270.000, "30Sec");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][7], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][7], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][7], 3);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][7], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][7], 1);

    SVRP_TwitterPageTD[playerid][8] = CreatePlayerTextDraw(playerid, 402.000, 286.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][8], 103.000, 48.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][8], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][8], 1768516095);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][8], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][8], 1);

    SVRP_TwitterPageTD[playerid][9] = CreatePlayerTextDraw(playerid, 405.000, 288.000, "Daple_alperino");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][9], 0.135, 0.796);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][9], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][9], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][9], 1);

    SVRP_TwitterPageTD[playerid][10] = CreatePlayerTextDraw(playerid, 405.000, 298.000, "[OPEN] NICANITY GARAGE OPEN MODIF & REPAIR LOC ** GPS>NICANITY GARAGE MULLHOLAND ");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][10], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][10], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][10], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][10], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][10], 1);

    SVRP_TwitterPageTD[playerid][11] = CreatePlayerTextDraw(playerid, 501.000, 324.000, "30Sec");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterPageTD[playerid][11], 0.135, 0.796);
    PlayerTextDrawTextSize(playerid, SVRP_TwitterPageTD[playerid][11], 502.000, -4.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterPageTD[playerid][11], 3);
    PlayerTextDrawColor(playerid, SVRP_TwitterPageTD[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterPageTD[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterPageTD[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterPageTD[playerid][11], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterPageTD[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterPageTD[playerid][11], 1);
    return 1;
}

SVPhoneTwitterHomeLoad(playerid)
{
    SVRP_TwitterHomeTD[playerid][0] = CreatePlayerTextDraw(playerid, 450.000, 147.000, "X");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomeTD[playerid][0], 0.246, 1.399);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][0], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][0], 1);

    SVRP_TwitterHomeTD[playerid][1] = CreatePlayerTextDraw(playerid, 451.000, 147.000, "X");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomeTD[playerid][1], 0.246, 1.399);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][1], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][1], 1);

    SVRP_TwitterHomeTD[playerid][2] = CreatePlayerTextDraw(playerid, 443.000, 171.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomeTD[playerid][2], 21.000, 24.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][2], 1);

    SVRP_TwitterHomeTD[playerid][3] = CreatePlayerTextDraw(playerid, 432.000, 190.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomeTD[playerid][3], 44.000, 22.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][3], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][3], 1);

    SVRP_TwitterHomeTD[playerid][4] = CreatePlayerTextDraw(playerid, 414.000, 227.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomeTD[playerid][4], 79.000, 14.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][4], 1768516095);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][4], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, SVRP_TwitterHomeTD[playerid][4], 1);

    SVRP_TwitterHomeTD[playerid][5] = CreatePlayerTextDraw(playerid, 414.000, 250.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_TwitterHomeTD[playerid][5], 79.000, 14.000);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][5], 1768516095);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][5], 255);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, SVRP_TwitterHomeTD[playerid][5], 1);

    SVRP_TwitterHomeTD[playerid][6] = CreatePlayerTextDraw(playerid, 442.000, 229.000, "LOG IN");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomeTD[playerid][6], 0.188, 0.999);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][6], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][6], 1);

    SVRP_TwitterHomeTD[playerid][7] = CreatePlayerTextDraw(playerid, 441.000, 252.000, "SIGN UP");
    PlayerTextDrawLetterSize(playerid, SVRP_TwitterHomeTD[playerid][7], 0.188, 0.999);
    PlayerTextDrawAlignment(playerid, SVRP_TwitterHomeTD[playerid][7], 1);
    PlayerTextDrawColor(playerid, SVRP_TwitterHomeTD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_TwitterHomeTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_TwitterHomeTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_TwitterHomeTD[playerid][7], 150);
    PlayerTextDrawFont(playerid, SVRP_TwitterHomeTD[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_TwitterHomeTD[playerid][7], 1);

    CloseTwitterHome[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseTwitterHome[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHome[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHome[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHome[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHome[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHome[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHome[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHome[playerid][0], 1);

    CloseTwitterHome[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseTwitterHome[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHome[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHome[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHome[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHome[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHome[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHome[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHome[playerid][1], 1);

    CloseTwitterHome[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseTwitterHome[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseTwitterHome[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseTwitterHome[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseTwitterHome[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseTwitterHome[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseTwitterHome[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseTwitterHome[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseTwitterHome[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseTwitterHome[playerid][2], 1);
    return 1;
}

SVPhoneLoad(playerid)
{
    SVRP_Phone[playerid][0] = CreatePlayerTextDraw(playerid, 387.000, 112.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][0], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][0], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][0], 1);

    SVRP_Phone[playerid][1] = CreatePlayerTextDraw(playerid, 465.000, 112.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][1], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][1], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][1], 1);

    SVRP_Phone[playerid][2] = CreatePlayerTextDraw(playerid, 414.000, 121.597, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][2], 79.000, 288.500);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][2], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][2], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][2], 1);

    SVRP_Phone[playerid][3] = CreatePlayerTextDraw(playerid, 396.000, 143.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][3], 115.000, 246.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][3], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][3], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][3], 1);

    SVRP_Phone[playerid][4] = CreatePlayerTextDraw(playerid, 387.000, 360.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][4], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][4], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][4], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][4], 1);

    SVRP_Phone[playerid][5] = CreatePlayerTextDraw(playerid, 465.000, 360.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][5], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][5], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][5], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][5], 1);

    SVRP_Phone[playerid][6] = CreatePlayerTextDraw(playerid, 388.000, 113.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][6], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][6], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][6], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][6], 1);

    SVRP_Phone[playerid][7] = CreatePlayerTextDraw(playerid, 464.000, 113.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][7], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][7], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][7], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][7], 1);

    SVRP_Phone[playerid][8] = CreatePlayerTextDraw(playerid, 414.000, 122.696, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][8], 77.000, 286.299);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][8], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][8], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][8], 1);

    SVRP_Phone[playerid][9] = CreatePlayerTextDraw(playerid, 388.000, 359.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][9], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][9], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][9], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][9], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][9], 1);

    SVRP_Phone[playerid][10] = CreatePlayerTextDraw(playerid, 464.000, 359.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][10], 55.000, 60.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][10], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][10], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][10], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][10], 1);

    SVRP_Phone[playerid][11] = CreatePlayerTextDraw(playerid, 397.000, 143.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][11], 113.000, 244.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][11], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][11], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][11], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][11], 1);

    SVRP_Phone[playerid][12] = CreatePlayerTextDraw(playerid, 390.000, 115.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][12], 52.000, 59.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][12], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][12], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][12], 1);

    SVRP_Phone[playerid][13] = CreatePlayerTextDraw(playerid, 465.000, 115.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][13], 52.000, 59.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][13], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][13], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][13], 1);

    SVRP_Phone[playerid][14] = CreatePlayerTextDraw(playerid, 465.000, 358.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][14], 52.000, 59.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][14], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][14], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][14], 1);

    SVRP_Phone[playerid][15] = CreatePlayerTextDraw(playerid, 390.000, 358.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][15], 52.000, 59.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][15], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][15], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][15], 1);

    SVRP_Phone[playerid][16] = CreatePlayerTextDraw(playerid, 399.000, 143.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][16], 109.000, 242.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][16], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][16], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][16], 1);

    SVRP_Phone[playerid][17] = CreatePlayerTextDraw(playerid, 414.000, 125.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][17], 75.000, 282.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][17], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 1032769535);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][17], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][17], 1);

    SVRP_Phone[playerid][18] = CreatePlayerTextDraw(playerid, 442.000, 129.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][18], 22.000, 12.000);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][18], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][18], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][18], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][18], 1);

    SVRP_Phone[playerid][19] = CreatePlayerTextDraw(playerid, 434.000, 126.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][19], 16.000, 17.298);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][19], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][19], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][19], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][19], 1);

    SVRP_Phone[playerid][20] = CreatePlayerTextDraw(playerid, 457.000, 126.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_Phone[playerid][20], 16.000, 17.298);
    PlayerTextDrawAlignment(playerid, SVRP_Phone[playerid][20], 1);
    PlayerTextDrawColor(playerid, SVRP_Phone[playerid][20], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_Phone[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_Phone[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_Phone[playerid][20], 255);
    PlayerTextDrawFont(playerid, SVRP_Phone[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_Phone[playerid][20], 1);

    IphoneNyaNih[playerid][0] = CreatePlayerTextDraw(playerid, 403.000, 349.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][0], 23.000, 43.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][0], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][0], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][0], 1);

    IphoneNyaNih[playerid][1] = CreatePlayerTextDraw(playerid, 415.000, 356.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][1], 77.000, 29.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][1], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][1], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][1], 1);

    IphoneNyaNih[playerid][2] = CreatePlayerTextDraw(playerid, 481.000, 349.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][2], 23.000, 43.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][2], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][2], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][2], 1);

    IphoneNyaNih[playerid][3] = CreatePlayerTextDraw(playerid, 414.000, 153.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][3], 28.000, 34.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][3], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][3], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][3], 1);

    IphoneNyaNih[playerid][4] = CreatePlayerTextDraw(playerid, 437.000, 151.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][4], 11.000, 13.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][4], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][4], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][4], 1);

    IphoneNyaNih[playerid][5] = CreatePlayerTextDraw(playerid, 437.000, 176.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][5], 11.000, 13.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][5], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][5], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][5], 1);

    IphoneNyaNih[playerid][6] = CreatePlayerTextDraw(playerid, 409.000, 151.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][6], 13.000, 13.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][6], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][6], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][6], 1);

    IphoneNyaNih[playerid][7] = CreatePlayerTextDraw(playerid, 409.000, 176.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][7], 13.000, 13.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][7], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][7], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][7], 1);

    IphoneNyaNih[playerid][8] = CreatePlayerTextDraw(playerid, 411.000, 157.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, IphoneNyaNih[playerid][8], 35.500, 26.000);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][8], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][8], 255);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][8], 1);

    IphoneNyaNih[playerid][9] = CreatePlayerTextDraw(playerid, 475.500, 162.000, "19:54");
    PlayerTextDrawLetterSize(playerid, IphoneNyaNih[playerid][9], 0.279, 1.498);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][9], 2);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][9], 150);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][9], 1);

    IphoneNyaNih[playerid][10] = CreatePlayerTextDraw(playerid, 414.500, 158.000, "March 2025");
    PlayerTextDrawLetterSize(playerid, IphoneNyaNih[playerid][10], 0.108, 0.898);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][10], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][10], -1306385665);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][10], 150);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][10], 1);

    IphoneNyaNih[playerid][11] = CreatePlayerTextDraw(playerid, 414.500, 167.000, "11");
    PlayerTextDrawLetterSize(playerid, IphoneNyaNih[playerid][11], 0.108, 0.898);
    PlayerTextDrawAlignment(playerid, IphoneNyaNih[playerid][11], 1);
    PlayerTextDrawColor(playerid, IphoneNyaNih[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, IphoneNyaNih[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, IphoneNyaNih[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, IphoneNyaNih[playerid][11], 150);
    PlayerTextDrawFont(playerid, IphoneNyaNih[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, IphoneNyaNih[playerid][11], 1);

    CallButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 418.000, 360.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CallButtonPhone[playerid], 18.000, 21.000);
    PlayerTextDrawAlignment(playerid, CallButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, CallButtonPhone[playerid], 836720895);
    PlayerTextDrawSetShadow(playerid, CallButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, CallButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, CallButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, CallButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, CallButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, CallButtonPhone[playerid], 1);

    ContactButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 470.000, 360.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, ContactButtonPhone[playerid], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, ContactButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, ContactButtonPhone[playerid], 1768516095);
    PlayerTextDrawSetShadow(playerid, ContactButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, ContactButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, ContactButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, ContactButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, ContactButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, ContactButtonPhone[playerid], 1);

    WhatsappButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 444.000, 360.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, WhatsappButtonPhone[playerid], 18.000, 21.000);
    PlayerTextDrawAlignment(playerid, WhatsappButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, WhatsappButtonPhone[playerid], 314785279);
    PlayerTextDrawSetShadow(playerid, WhatsappButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, WhatsappButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, WhatsappButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, WhatsappButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, WhatsappButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, WhatsappButtonPhone[playerid], 1);

    InformationButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 411.000, 201.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InformationButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, InformationButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, InformationButtonPhone[playerid], 425831935);
    PlayerTextDrawSetShadow(playerid, InformationButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, InformationButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, InformationButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, InformationButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, InformationButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, InformationButtonPhone[playerid], 1);

    LayananButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 442.000, 201.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, LayananButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, LayananButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, LayananButtonPhone[playerid], -181516545);
    PlayerTextDrawSetShadow(playerid, LayananButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, LayananButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, LayananButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, LayananButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, LayananButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, LayananButtonPhone[playerid], 1);

    BankButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 474.000, 201.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BankButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, BankButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, BankButtonPhone[playerid], -2008956673);
    PlayerTextDrawSetShadow(playerid, BankButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, BankButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, BankButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, BankButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, BankButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, BankButtonPhone[playerid], 1);

    TwitterButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 411.000, 238.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, TwitterButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, TwitterButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, TwitterButtonPhone[playerid], 255);
    PlayerTextDrawSetShadow(playerid, TwitterButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, TwitterButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, TwitterButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, TwitterButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, TwitterButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, TwitterButtonPhone[playerid], 1);

    YellowButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 442.000, 238.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, YellowButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, YellowButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, YellowButtonPhone[playerid], -961214721);
    PlayerTextDrawSetShadow(playerid, YellowButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, YellowButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, YellowButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, YellowButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, YellowButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, YellowButtonPhone[playerid], 1);

    TransButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 474.000, 238.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, TransButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, TransButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, TransButtonPhone[playerid], -994287873);
    PlayerTextDrawSetShadow(playerid, TransButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, TransButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, TransButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, TransButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, TransButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, TransButtonPhone[playerid], 1);

    GpsButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 411.000, 278.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, GpsButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, GpsButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, GpsButtonPhone[playerid], -2147483393);
    PlayerTextDrawSetShadow(playerid, GpsButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, GpsButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, GpsButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, GpsButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, GpsButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, GpsButtonPhone[playerid], 1);

    VehicleButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 442.000, 278.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, VehicleButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, VehicleButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, VehicleButtonPhone[playerid], 793157887);
    PlayerTextDrawSetShadow(playerid, VehicleButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, VehicleButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, VehicleButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, VehicleButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, VehicleButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, VehicleButtonPhone[playerid], 1);

    LainnyaButtonPhone[playerid] = CreatePlayerTextDraw(playerid, 474.000, 278.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, LainnyaButtonPhone[playerid], 22.000, 25.000);
    PlayerTextDrawAlignment(playerid, LainnyaButtonPhone[playerid], 1);
    PlayerTextDrawColor(playerid, LainnyaButtonPhone[playerid], 793157887);
    PlayerTextDrawSetShadow(playerid, LainnyaButtonPhone[playerid], 0);
    PlayerTextDrawSetOutline(playerid, LainnyaButtonPhone[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, LainnyaButtonPhone[playerid], 255);
    PlayerTextDrawFont(playerid, LainnyaButtonPhone[playerid], 4);
    PlayerTextDrawSetProportional(playerid, LainnyaButtonPhone[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, LainnyaButtonPhone[playerid], 1);

    PhoneAppLogo[playerid][0] = CreatePlayerTextDraw(playerid, 451.500, 374.000, "/");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][0], 0.259, 0.398);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][0], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][0], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][0], 1);

    PhoneAppLogo[playerid][1] = CreatePlayerTextDraw(playerid, 444.000, 362.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][1], 18.000, 17.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][1], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][1], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][1], 1);

    PhoneAppLogo[playerid][2] = CreatePlayerTextDraw(playerid, 426.500, 365.000, "/");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][2], -0.560, 1.297);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][2], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][2], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][2], 1);

    PhoneAppLogo[playerid][3] = CreatePlayerTextDraw(playerid, 422.000, 363.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][3], 7.000, 7.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][3], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][3], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][3], 1);

    PhoneAppLogo[playerid][4] = CreatePlayerTextDraw(playerid, 426.000, 372.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][4], 7.000, 7.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][4], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][4], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][4], 1);

    PhoneAppLogo[playerid][5] = CreatePlayerTextDraw(playerid, 421.500, 188.000, "Kalender");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][5], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][5], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][5], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][5], 1);

    PhoneAppLogo[playerid][6] = CreatePlayerTextDraw(playerid, 421.500, 226.000, "Informasi");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][6], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][6], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][6], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][6], 1);

    PhoneAppLogo[playerid][7] = CreatePlayerTextDraw(playerid, 452.500, 226.000, "Layanan");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][7], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][7], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][7], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][7], 1);

    PhoneAppLogo[playerid][8] = CreatePlayerTextDraw(playerid, 484.500, 226.000, "Bank");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][8], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][8], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][8], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][8], 1);

    PhoneAppLogo[playerid][9] = CreatePlayerTextDraw(playerid, 421.500, 263.000, "X");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][9], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][9], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][9], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][9], 1);

    PhoneAppLogo[playerid][10] = CreatePlayerTextDraw(playerid, 452.500, 263.000, "Iklan");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][10], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][10], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][10], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][10], 1);

    PhoneAppLogo[playerid][11] = CreatePlayerTextDraw(playerid, 485.500, 263.000, "Trans");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][11], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][11], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][11], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][11], 1);

    PhoneAppLogo[playerid][12] = CreatePlayerTextDraw(playerid, 421.500, 303.000, "Maps");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][12], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][12], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][12], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][12], 1);

    PhoneAppLogo[playerid][13] = CreatePlayerTextDraw(playerid, 453.500, 303.000, "Garasi");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][13], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][13], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][13], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][13], 1);

    PhoneAppLogo[playerid][14] = CreatePlayerTextDraw(playerid, 484.500, 303.000, "Lainnya");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][14], 0.108, 0.796);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][14], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][14], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][14], 1);

    PhoneAppLogo[playerid][15] = CreatePlayerTextDraw(playerid, 473.000, 371.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][15], 10.000, 7.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][15], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][15], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][15], 1);

    PhoneAppLogo[playerid][16] = CreatePlayerTextDraw(playerid, 475.000, 365.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][16], 6.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][16], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][16], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][16], 1);

    PhoneAppLogo[playerid][17] = CreatePlayerTextDraw(playerid, 485.000, 359.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][17], 1.000, 22.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][17], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][17], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][17], 1);

    PhoneAppLogo[playerid][18] = CreatePlayerTextDraw(playerid, 486.000, 362.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][18], 3.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][18], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][18], 12582911);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][18], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][18], 1);

    PhoneAppLogo[playerid][19] = CreatePlayerTextDraw(playerid, 486.000, 368.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][19], 3.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][19], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][19], -12254977);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][19], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][19], 1);

    PhoneAppLogo[playerid][20] = CreatePlayerTextDraw(playerid, 486.000, 373.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][20], 3.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][20], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][20], 16711935);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][20], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][20], 1);

    PhoneAppLogo[playerid][21] = CreatePlayerTextDraw(playerid, 420.500, 203.000, "i");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][21], 0.518, 1.998);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][21], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][21], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][21], 0);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][21], 1);

    PhoneAppLogo[playerid][22] = CreatePlayerTextDraw(playerid, 421.500, 245.000, "X");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][22], 0.279, 1.299);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][22], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][22], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][22], 1);

    PhoneAppLogo[playerid][23] = CreatePlayerTextDraw(playerid, 452.500, 245.000, "Ads");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][23], 0.209, 1.199);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][23], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][23], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][23], 1);

    PhoneAppLogo[playerid][24] = CreatePlayerTextDraw(playerid, 484.500, 245.000, "Trans");
    PlayerTextDrawLetterSize(playerid, PhoneAppLogo[playerid][24], 0.209, 1.199);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][24], 2);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][24], 150);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][24], 0);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][24], 1);

    PhoneAppLogo[playerid][25] = CreatePlayerTextDraw(playerid, 419.000, 287.000, "HUD:radar_waypoint");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][25], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][25], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][25], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][25], 1);

    PhoneAppLogo[playerid][26] = CreatePlayerTextDraw(playerid, 450.000, 286.000, "HUD:radar_impound");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][26], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][26], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][26], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][26], 1);

    PhoneAppLogo[playerid][27] = CreatePlayerTextDraw(playerid, 478.000, 209.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][27], 14.000, 9.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][27], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][27], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][27], 1);

    PhoneAppLogo[playerid][28] = CreatePlayerTextDraw(playerid, 479.000, 210.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][28], 11.000, 1.500);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][28], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][28], -2008956673);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][28], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][28], 1);

    PhoneAppLogo[playerid][29] = CreatePlayerTextDraw(playerid, 487.000, 213.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][29], 2.500, 2.500);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][29], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][29], -2008956673);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][29], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][29], 1);

    PhoneAppLogo[playerid][30] = CreatePlayerTextDraw(playerid, 450.000, 215.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][30], 6.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][30], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][30], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][30], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][30], 1);

    PhoneAppLogo[playerid][31] = CreatePlayerTextDraw(playerid, 449.000, 215.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][31], 8.000, 1.500);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][31], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][31], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][31], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][31], 1);

    PhoneAppLogo[playerid][32] = CreatePlayerTextDraw(playerid, 447.500, 211.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][32], 11.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][32], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][32], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][32], 1);

    PhoneAppLogo[playerid][33] = CreatePlayerTextDraw(playerid, 450.000, 208.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][33], 6.000, 6.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][33], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][33], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][33], 1);

    PhoneAppLogo[playerid][34] = CreatePlayerTextDraw(playerid, 478.000, 287.000, "HUD:radar_light");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][34], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][34], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][34], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][34], 1);

    PhoneAppLogo[playerid][35] = CreatePlayerTextDraw(playerid, 482.000, 287.000, "HUD:radar_light");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][35], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][35], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][35], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][35], 1);

    PhoneAppLogo[playerid][36] = CreatePlayerTextDraw(playerid, 486.000, 287.000, "HUD:radar_light");
    PlayerTextDrawTextSize(playerid, PhoneAppLogo[playerid][36], 7.000, 8.000);
    PlayerTextDrawAlignment(playerid, PhoneAppLogo[playerid][36], 1);
    PlayerTextDrawColor(playerid, PhoneAppLogo[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, PhoneAppLogo[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, PhoneAppLogo[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, PhoneAppLogo[playerid][36], 255);
    PlayerTextDrawFont(playerid, PhoneAppLogo[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, PhoneAppLogo[playerid][36], 1);

    CloseButtonPhone[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseButtonPhone[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseButtonPhone[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseButtonPhone[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseButtonPhone[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseButtonPhone[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseButtonPhone[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseButtonPhone[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseButtonPhone[playerid][0], 1);

    CloseButtonPhone[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseButtonPhone[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseButtonPhone[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseButtonPhone[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseButtonPhone[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseButtonPhone[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseButtonPhone[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseButtonPhone[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseButtonPhone[playerid][1], 1);

    CloseButtonPhone[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseButtonPhone[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseButtonPhone[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseButtonPhone[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseButtonPhone[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseButtonPhone[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseButtonPhone[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseButtonPhone[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseButtonPhone[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseButtonPhone[playerid][2], 1);
}

SVPhoneInforGuiLoad(playerid)
{
    InformGui[playerid][0] = CreatePlayerTextDraw(playerid, 404.000, 148.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][0], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][0], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][0], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][0], 1);

    InformGui[playerid][1] = CreatePlayerTextDraw(playerid, 492.000, 148.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][1], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][1], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][1], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][1], 1);

    InformGui[playerid][2] = CreatePlayerTextDraw(playerid, 410.000, 152.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][2], 88.000, 38.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][2], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][2], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][2], 1);

    InformGui[playerid][3] = CreatePlayerTextDraw(playerid, 404.000, 169.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][3], 11.000, 24.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][3], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][3], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][3], 1);

    InformGui[playerid][4] = CreatePlayerTextDraw(playerid, 492.000, 169.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][4], 11.000, 24.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][4], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][4], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][4], 1);

    InformGui[playerid][5] = CreatePlayerTextDraw(playerid, 406.000, 157.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][5], 95.000, 24.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][5], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][5], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][5], 1);

    InformGui[playerid][6] = CreatePlayerTextDraw(playerid, 404.000, 196.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][6], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][6], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][6], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][6], 1);

    InformGui[playerid][7] = CreatePlayerTextDraw(playerid, 492.000, 196.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][7], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][7], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][7], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][7], 1);

    InformGui[playerid][8] = CreatePlayerTextDraw(playerid, 409.000, 200.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][8], 89.000, 153.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][8], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][8], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][8], 1);

    InformGui[playerid][9] = CreatePlayerTextDraw(playerid, 404.000, 335.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][9], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][9], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][9], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][9], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][9], 1);

    InformGui[playerid][10] = CreatePlayerTextDraw(playerid, 492.000, 335.500, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][10], 11.000, 21.290);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][10], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][10], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][10], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][10], 1);

    InformGui[playerid][11] = CreatePlayerTextDraw(playerid, 406.000, 207.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][11], 95.000, 140.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][11], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][11], 255);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][11], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][11], 1);

    InformGui[playerid][12] = CreatePlayerTextDraw(playerid, 406.000, 153.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][12], 28.000, 35.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][12], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][12], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][12], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][12], 1);

    InformGui[playerid][13] = CreatePlayerTextDraw(playerid, 416.000, 162.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][13], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][13], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][13], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][13], 1);

    InformGui[playerid][14] = CreatePlayerTextDraw(playerid, 412.000, 170.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, InformGui[playerid][14], 16.000, 11.000);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][14], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][14], 255);
    PlayerTextDrawFont(playerid, InformGui[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][14], 1);

    InformGui[playerid][15] = CreatePlayerTextDraw(playerid, 430.000, 163.000, "Daple_Alperino");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][15], 0.170, 0.899);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][15], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][15], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][15], 1);

    InformGui[playerid][16] = CreatePlayerTextDraw(playerid, 430.000, 172.000, "Appe ID, iCloud, Media & Purchases");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][16], 0.109, 0.699);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][16], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][16], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][16], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][16], 1);

    InformGui[playerid][17] = CreatePlayerTextDraw(playerid, 440.000, 203.000, "informasi");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][17], 0.170, 0.899);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][17], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][17], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][17], 1);

    InformGui[playerid][18] = CreatePlayerTextDraw(playerid, 411.000, 219.000, "Player ID : 250");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][18], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][18], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][18], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][18], 1);

    InformGui[playerid][19] = CreatePlayerTextDraw(playerid, 411.000, 231.000, "Nomor Telephon : 08123456789");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][19], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][19], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][19], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][19], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][19], 1);

    InformGui[playerid][20] = CreatePlayerTextDraw(playerid, 411.000, 243.000, "Nomor Rekening : 1241236341");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][20], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][20], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][20], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][20], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][20], 1);

    InformGui[playerid][21] = CreatePlayerTextDraw(playerid, 411.000, 256.000, "Uang Disaku : $1.000.000");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][21], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][21], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][21], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][21], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][21], 1);

    InformGui[playerid][22] = CreatePlayerTextDraw(playerid, 411.000, 267.000, "Uang Dibank : $1.000.000");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][22], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][22], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][22], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][22], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][22], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][22], 1);

    InformGui[playerid][23] = CreatePlayerTextDraw(playerid, 439.000, 281.000, "Pekerjaan");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][23], 0.170, 0.899);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][23], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][23], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][23], 1);

    InformGui[playerid][24] = CreatePlayerTextDraw(playerid, 411.000, 294.000, "Pekerjaan : Cooming Soon");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][24], 0.140, 0.799);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][24], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][24], -2139062017);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][24], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][24], 1);

    InformGui[playerid][25] = CreatePlayerTextDraw(playerid, 427.000, 332.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][25], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][25], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][25], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][25], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][25], 1);

    InformGui[playerid][26] = CreatePlayerTextDraw(playerid, 429.000, 327.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][26], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][26], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][26], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][26], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][26], 1);

    InformGui[playerid][27] = CreatePlayerTextDraw(playerid, 437.000, 327.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][27], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][27], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][27], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][27], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][27], 1);

    InformGui[playerid][28] = CreatePlayerTextDraw(playerid, 435.000, 327.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][28], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][28], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][28], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][28], 1);

    InformGui[playerid][29] = CreatePlayerTextDraw(playerid, 437.000, 322.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][29], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][29], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][29], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][29], 1);

    InformGui[playerid][30] = CreatePlayerTextDraw(playerid, 438.000, 320.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][30], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][30], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][30], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][30], 1);

    InformGui[playerid][31] = CreatePlayerTextDraw(playerid, 440.000, 315.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][31], 0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][31], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][31], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][31], 1);

    InformGui[playerid][32] = CreatePlayerTextDraw(playerid, 448.000, 315.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][32], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][32], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][32], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][32], 1);

    InformGui[playerid][33] = CreatePlayerTextDraw(playerid, 450.000, 321.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][33], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][33], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][33], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][33], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][33], 1);

    InformGui[playerid][34] = CreatePlayerTextDraw(playerid, 451.000, 325.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][34], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][34], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][34], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][34], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][34], 1);

    InformGui[playerid][35] = CreatePlayerTextDraw(playerid, 453.000, 331.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][35], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][35], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][35], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][35], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][35], 1);

    InformGui[playerid][36] = CreatePlayerTextDraw(playerid, 454.000, 335.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][36], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][36], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][36], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][36], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][36], 1);

    InformGui[playerid][37] = CreatePlayerTextDraw(playerid, 452.000, 335.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][37], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][37], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][37], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][37], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][37], 1);

    InformGui[playerid][38] = CreatePlayerTextDraw(playerid, 454.000, 330.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][38], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][38], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][38], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][38], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][38], 1);

    InformGui[playerid][39] = CreatePlayerTextDraw(playerid, 456.000, 325.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][39], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][39], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][39], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][39], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][39], 1);

    InformGui[playerid][40] = CreatePlayerTextDraw(playerid, 464.000, 325.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][40], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][40], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][40], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][40], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][40], 1);

    InformGui[playerid][41] = CreatePlayerTextDraw(playerid, 462.000, 325.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][41], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][41], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][41], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][41], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][41], 1);

    InformGui[playerid][42] = CreatePlayerTextDraw(playerid, 464.000, 320.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][42], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][42], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][42], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][42], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][42], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][42], 1);

    InformGui[playerid][43] = CreatePlayerTextDraw(playerid, 466.000, 315.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][43], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][43], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][43], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][43], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][43], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][43], 1);

    InformGui[playerid][44] = CreatePlayerTextDraw(playerid, 468.000, 310.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][44], 0.339, 0.999);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][44], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][44], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][44], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][44], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][44], 1);

    InformGui[playerid][45] = CreatePlayerTextDraw(playerid, 476.000, 310.000, "/");
    PlayerTextDrawLetterSize(playerid, InformGui[playerid][45], -0.330, 0.990);
    PlayerTextDrawAlignment(playerid, InformGui[playerid][45], 1);
    PlayerTextDrawColor(playerid, InformGui[playerid][45], -1);
    PlayerTextDrawSetShadow(playerid, InformGui[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, InformGui[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, InformGui[playerid][45], 150);
    PlayerTextDrawFont(playerid, InformGui[playerid][45], 1);
    PlayerTextDrawSetProportional(playerid, InformGui[playerid][45], 1);

    CloseInforGuiButton[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseInforGuiButton[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseInforGuiButton[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseInforGuiButton[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseInforGuiButton[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseInforGuiButton[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseInforGuiButton[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseInforGuiButton[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseInforGuiButton[playerid][0], 1);

    CloseInforGuiButton[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseInforGuiButton[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseInforGuiButton[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseInforGuiButton[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseInforGuiButton[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseInforGuiButton[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseInforGuiButton[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseInforGuiButton[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseInforGuiButton[playerid][1], 1);

    CloseInforGuiButton[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseInforGuiButton[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseInforGuiButton[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseInforGuiButton[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseInforGuiButton[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseInforGuiButton[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseInforGuiButton[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseInforGuiButton[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseInforGuiButton[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseInforGuiButton[playerid][2], 1);
}

SVPhoneCallLoad(playerid)
{
    SVRP_CallTD[playerid][0] = CreatePlayerTextDraw(playerid, 445.000, 169.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_CallTD[playerid][0], 18.000, 22.000);
    PlayerTextDrawAlignment(playerid, SVRP_CallTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_CallTD[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_CallTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_CallTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_CallTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, SVRP_CallTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_CallTD[playerid][0], 1);

    SVRP_CallTD[playerid][1] = CreatePlayerTextDraw(playerid, 436.000, 187.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_CallTD[playerid][1], 36.000, 22.000);
    PlayerTextDrawAlignment(playerid, SVRP_CallTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_CallTD[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_CallTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_CallTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_CallTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, SVRP_CallTD[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_CallTD[playerid][1], 1);

    ContactNameTD[playerid] = CreatePlayerTextDraw(playerid, 456.000, 210.000, "Cecep_Subanyu");
    PlayerTextDrawLetterSize(playerid, ContactNameTD[playerid], 0.200, 1.098);
    PlayerTextDrawAlignment(playerid, ContactNameTD[playerid], 2);
    PlayerTextDrawColor(playerid, ContactNameTD[playerid], -1);
    PlayerTextDrawSetShadow(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, ContactNameTD[playerid], 150);
    PlayerTextDrawFont(playerid, ContactNameTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, ContactNameTD[playerid], 1);

    StatusDialingTD[playerid] = CreatePlayerTextDraw(playerid, 458.000, 221.000, "Panggilan Masuk...");
    PlayerTextDrawLetterSize(playerid, StatusDialingTD[playerid], 0.200, 1.098);
    PlayerTextDrawAlignment(playerid, StatusDialingTD[playerid], 2);
    PlayerTextDrawColor(playerid, StatusDialingTD[playerid], -1);
    PlayerTextDrawSetShadow(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, StatusDialingTD[playerid], 150);
    PlayerTextDrawFont(playerid, StatusDialingTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, StatusDialingTD[playerid], 1);

    CloseCallButton[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseCallButton[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseCallButton[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseCallButton[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallButton[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallButton[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallButton[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseCallButton[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallButton[playerid][0], 1);

    CloseCallButton[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseCallButton[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseCallButton[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseCallButton[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallButton[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallButton[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallButton[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseCallButton[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallButton[playerid][1], 1);

    CloseCallButton[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseCallButton[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseCallButton[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseCallButton[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseCallButton[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseCallButton[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseCallButton[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseCallButton[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseCallButton[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseCallButton[playerid][2], 1);

    RedButtonoutComingCall[playerid] = CreatePlayerTextDraw(playerid, 440.000, 334.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, RedButtonoutComingCall[playerid], 29.000, 33.000);
    PlayerTextDrawAlignment(playerid, RedButtonoutComingCall[playerid], 1);
    PlayerTextDrawColor(playerid, RedButtonoutComingCall[playerid], -16776961);
    PlayerTextDrawSetShadow(playerid, RedButtonoutComingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, RedButtonoutComingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, RedButtonoutComingCall[playerid], 255);
    PlayerTextDrawFont(playerid, RedButtonoutComingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, RedButtonoutComingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, RedButtonoutComingCall[playerid], 1);

    GreenButtonincomingCall[playerid] = CreatePlayerTextDraw(playerid, 412.000, 334.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, GreenButtonincomingCall[playerid], 29.000, 33.000);
    PlayerTextDrawAlignment(playerid, GreenButtonincomingCall[playerid], 1);
    PlayerTextDrawColor(playerid, GreenButtonincomingCall[playerid], 16711935);
    PlayerTextDrawSetShadow(playerid, GreenButtonincomingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, GreenButtonincomingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, GreenButtonincomingCall[playerid], 255);
    PlayerTextDrawFont(playerid, GreenButtonincomingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, GreenButtonincomingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, GreenButtonincomingCall[playerid], 1);

    RedButtonincomingCall[playerid] = CreatePlayerTextDraw(playerid, 468.000, 334.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, RedButtonincomingCall[playerid], 29.000, 33.000);
    PlayerTextDrawAlignment(playerid, RedButtonincomingCall[playerid], 1);
    PlayerTextDrawColor(playerid, RedButtonincomingCall[playerid], -16776961);
    PlayerTextDrawSetShadow(playerid, RedButtonincomingCall[playerid], 0);
    PlayerTextDrawSetOutline(playerid, RedButtonincomingCall[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, RedButtonincomingCall[playerid], 255);
    PlayerTextDrawFont(playerid, RedButtonincomingCall[playerid], 4);
    PlayerTextDrawSetProportional(playerid, RedButtonincomingCall[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, RedButtonincomingCall[playerid], 1);
    return 1;
}

SVPhoneBankLoad(playerid)
{
    SVRP_GuiBankTD[playerid][0] = CreatePlayerTextDraw(playerid, 405.000, 164.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][0], 17.000, 10.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][0], 1);

    SVRP_GuiBankTD[playerid][1] = CreatePlayerTextDraw(playerid, 409.000, 155.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][1], 9.000, 11.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][1], 1);

    SVRP_GuiBankTD[playerid][2] = CreatePlayerTextDraw(playerid, 401.000, 176.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][2], 14.000, 15.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][2], 1);

    SVRP_GuiBankTD[playerid][3] = CreatePlayerTextDraw(playerid, 492.000, 176.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][3], 14.000, 15.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][3], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][3], 1);

    SVRP_GuiBankTD[playerid][4] = CreatePlayerTextDraw(playerid, 401.000, 232.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][4], 13.000, 18.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][4], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][4], 1);

    SVRP_GuiBankTD[playerid][5] = CreatePlayerTextDraw(playerid, 493.000, 232.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][5], 13.000, 18.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][5], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][5], 1);

    SVRP_GuiBankTD[playerid][6] = CreatePlayerTextDraw(playerid, 408.000, 178.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][6], 91.000, 69.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][6], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][6], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][6], 1);

    SVRP_GuiBankTD[playerid][7] = CreatePlayerTextDraw(playerid, 403.000, 184.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][7], 101.000, 57.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][7], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][7], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][7], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][7], 1);

    SVRP_GuiBankTD[playerid][8] = CreatePlayerTextDraw(playerid, 410.000, 186.000, "Black Card");
    PlayerTextDrawLetterSize(playerid, SVRP_GuiBankTD[playerid][8], 0.150, 0.898);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][8], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][8], -2139062017);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][8], 150);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][8], 1);

    SVRP_GuiBankTD[playerid][9] = CreatePlayerTextDraw(playerid, 485.000, 186.000, "VISA");
    PlayerTextDrawLetterSize(playerid, SVRP_GuiBankTD[playerid][9], 0.150, 0.898);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][9], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][9], 150);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][9], 1);

    SVRP_GuiBankTD[playerid][10] = CreatePlayerTextDraw(playerid, 486.000, 232.000, "25/26");
    PlayerTextDrawLetterSize(playerid, SVRP_GuiBankTD[playerid][10], 0.108, 0.799);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][10], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][10], 150);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][10], 1);

    SVRP_GuiBankTD[playerid][11] = CreatePlayerTextDraw(playerid, 413.000, 231.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][11], 8.000, 9.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][11], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][11], -10270721);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][11], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][11], 1);

    SVRP_GuiBankTD[playerid][12] = CreatePlayerTextDraw(playerid, 409.000, 231.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][12], 8.000, 9.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][12], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][12], -602653441);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][12], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][12], 1);

    SVRP_GuiBankTD[playerid][13] = CreatePlayerTextDraw(playerid, 403.000, 261.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, SVRP_GuiBankTD[playerid][13], 19.000, 21.000);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][13], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][13], 255);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][13], 255);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][13], 1);


    SVRP_GuiBankTD[playerid][14] = CreatePlayerTextDraw(playerid, 410.000, 219.000, "4384 #### #### 2930");
    PlayerTextDrawLetterSize(playerid, SVRP_GuiBankTD[playerid][14], 0.150, 0.999);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankTD[playerid][14], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankTD[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankTD[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankTD[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankTD[playerid][14], 150);
    PlayerTextDrawFont(playerid, SVRP_GuiBankTD[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankTD[playerid][14], 1);

    TransferText[playerid] = CreatePlayerTextDraw(playerid, 453.000, 267.000, "Transfer");
    PlayerTextDrawLetterSize(playerid, TransferText[playerid], 0.158, 0.898);
    PlayerTextDrawAlignment(playerid, TransferText[playerid], 1);
    PlayerTextDrawColor(playerid, TransferText[playerid], -2139062017);
    PlayerTextDrawSetShadow(playerid, TransferText[playerid], 0);
    PlayerTextDrawSetOutline(playerid, TransferText[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, TransferText[playerid], 150);
    PlayerTextDrawFont(playerid, TransferText[playerid], 1);
    PlayerTextDrawSetProportional(playerid, TransferText[playerid], 1);

    CloseBankButton[playerid][0] = CreatePlayerTextDraw(playerid, 419.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseBankButton[playerid][0], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseBankButton[playerid][0], 1);
    PlayerTextDrawColor(playerid, CloseBankButton[playerid][0], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseBankButton[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CloseBankButton[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseBankButton[playerid][0], 255);
    PlayerTextDrawFont(playerid, CloseBankButton[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CloseBankButton[playerid][0], 1);

    CloseBankButton[playerid][1] = CreatePlayerTextDraw(playerid, 482.000, 394.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, CloseBankButton[playerid][1], 8.000, 10.000);
    PlayerTextDrawAlignment(playerid, CloseBankButton[playerid][1], 1);
    PlayerTextDrawColor(playerid, CloseBankButton[playerid][1], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseBankButton[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CloseBankButton[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseBankButton[playerid][1], 255);
    PlayerTextDrawFont(playerid, CloseBankButton[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CloseBankButton[playerid][1], 1);

    CloseBankButton[playerid][2] = CreatePlayerTextDraw(playerid, 422.000, 396.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, CloseBankButton[playerid][2], 65.000, 6.000);
    PlayerTextDrawAlignment(playerid, CloseBankButton[playerid][2], 1);
    PlayerTextDrawColor(playerid, CloseBankButton[playerid][2], -791689217);
    PlayerTextDrawSetShadow(playerid, CloseBankButton[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CloseBankButton[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseBankButton[playerid][2], 255);
    PlayerTextDrawFont(playerid, CloseBankButton[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CloseBankButton[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, CloseBankButton[playerid][2], 1);

    TransferBankButton[playerid] = CreatePlayerTextDraw(playerid, 425.000, 261.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransferBankButton[playerid], 79.000, 21.000);
    PlayerTextDrawAlignment(playerid, TransferBankButton[playerid], 1);
    PlayerTextDrawColor(playerid, TransferBankButton[playerid], 255);
    PlayerTextDrawSetShadow(playerid, TransferBankButton[playerid], 0);
    PlayerTextDrawSetOutline(playerid, TransferBankButton[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, TransferBankButton[playerid], 255);
    PlayerTextDrawFont(playerid, TransferBankButton[playerid], 4);
    PlayerTextDrawSetProportional(playerid, TransferBankButton[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, TransferBankButton[playerid], 1);

    SVRP_GuiBankDollar[playerid] = CreatePlayerTextDraw(playerid, 410.000, 266.000, "$");
    PlayerTextDrawLetterSize(playerid, SVRP_GuiBankDollar[playerid], 0.230, 0.999);
    PlayerTextDrawAlignment(playerid, SVRP_GuiBankDollar[playerid], 1);
    PlayerTextDrawColor(playerid, SVRP_GuiBankDollar[playerid], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_GuiBankDollar[playerid], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_GuiBankDollar[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_GuiBankDollar[playerid], 150);
    PlayerTextDrawFont(playerid, SVRP_GuiBankDollar[playerid], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_GuiBankDollar[playerid], 1);

    SVRP_BankString[playerid][0] = CreatePlayerTextDraw(playerid, 423.000, 160.000, "Daple_Alperino");
    PlayerTextDrawLetterSize(playerid, SVRP_BankString[playerid][0], 0.159, 0.799);
    PlayerTextDrawAlignment(playerid, SVRP_BankString[playerid][0], 1);
    PlayerTextDrawColor(playerid, SVRP_BankString[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_BankString[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_BankString[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_BankString[playerid][0], 150);
    PlayerTextDrawFont(playerid, SVRP_BankString[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_BankString[playerid][0], 1);

    SVRP_BankString[playerid][1] = CreatePlayerTextDraw(playerid, 410.000, 199.000, "$2,000,000");
    PlayerTextDrawLetterSize(playerid, SVRP_BankString[playerid][1], 0.150, 0.898);
    PlayerTextDrawAlignment(playerid, SVRP_BankString[playerid][1], 1);
    PlayerTextDrawColor(playerid, SVRP_BankString[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, SVRP_BankString[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, SVRP_BankString[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, SVRP_BankString[playerid][1], 150);
    PlayerTextDrawFont(playerid, SVRP_BankString[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, SVRP_BankString[playerid][1], 1);
    return 1;
}

SVPhoneSpotifyLoad(playerid)
{
    ATRP_SpotifyTD[playerid][0] = CreatePlayerTextDraw(playerid, 480.000, 148.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][0], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][0], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][0], 1);

    ATRP_SpotifyTD[playerid][1] = CreatePlayerTextDraw(playerid, 487.000, 170.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][1], 115.000, 235.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][1], 1);

    ATRP_SpotifyTD[playerid][2] = CreatePlayerTextDraw(playerid, 567.000, 148.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][2], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][2], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][2], 1);

    ATRP_SpotifyTD[playerid][3] = CreatePlayerTextDraw(playerid, 480.000, 385.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][3], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][3], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][3], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][3], 1);

    ATRP_SpotifyTD[playerid][4] = CreatePlayerTextDraw(playerid, 567.000, 385.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][4], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][4], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][4], 1);

    ATRP_SpotifyTD[playerid][5] = CreatePlayerTextDraw(playerid, 503.000, 155.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][5], 84.000, 265.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][5], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][5], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][5], 1);

    ATRP_SpotifyTD[playerid][6] = CreatePlayerTextDraw(playerid, 484.000, 152.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][6], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][6], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][6], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][6], 1);

    ATRP_SpotifyTD[playerid][7] = CreatePlayerTextDraw(playerid, 491.000, 170.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][7], 107.000, 229.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][7], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][7], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][7], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][7], 1);

    ATRP_SpotifyTD[playerid][8] = CreatePlayerTextDraw(playerid, 563.000, 152.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][8], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][8], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][8], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][8], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][8], 1);

    ATRP_SpotifyTD[playerid][9] = CreatePlayerTextDraw(playerid, 563.000, 381.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][9], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][9], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][9], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][9], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][9], 1);

    ATRP_SpotifyTD[playerid][10] = CreatePlayerTextDraw(playerid, 484.000, 381.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][10], 42.000, 42.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][10], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][10], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][10], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][10], 1);

    ATRP_SpotifyTD[playerid][11] = CreatePlayerTextDraw(playerid, 504.000, 159.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][11], 79.000, 256.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][11], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][11], 505753343);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][11], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][11], 1);

    ATRP_SpotifyTD[playerid][12] = CreatePlayerTextDraw(playerid, 528.000, 166.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][12], 15.000, 16.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][12], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][12], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][12], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][12], 1);

    ATRP_SpotifyTD[playerid][13] = CreatePlayerTextDraw(playerid, 537.000, 169.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][13], 17.000, 10.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][13], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][13], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][13], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][13], 1);

    ATRP_SpotifyTD[playerid][14] = CreatePlayerTextDraw(playerid, 547.000, 166.000, "LD_BEAT:chit");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][14], 15.000, 16.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][14], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][14], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][14], 1);

    ATRP_SpotifyTD[playerid][15] = CreatePlayerTextDraw(playerid, 491.000, 203.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][15], 107.000, 20.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][15], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][15], 943210495);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][15], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][15], 1);

    ATRP_SpotifyTD[playerid][16] = CreatePlayerTextDraw(playerid, 491.000, 227.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][16], 107.000, 20.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][16], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][16], 943210495);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][16], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][16], 1);

    ATRP_SpotifyTD[playerid][17] = CreatePlayerTextDraw(playerid, 545.000, 207.000, "Putar Di Earphone");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][17], 0.210, 1.299);
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][17], 12.000, 79.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][17], 2);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][17], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][17], 1);
    PlayerTextDrawSetSelectable(playerid, ATRP_SpotifyTD[playerid][17], 1);

    ATRP_SpotifyTD[playerid][18] = CreatePlayerTextDraw(playerid, 545.000, 230.000, "Putar Di Boombox");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][18], 0.210, 1.299);
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][18], 12.000, 79.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][18], 2);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][18], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][18], 1);
    PlayerTextDrawSetSelectable(playerid, ATRP_SpotifyTD[playerid][18], 1);

    ATRP_SpotifyTD[playerid][19] = CreatePlayerTextDraw(playerid, 532.000, 255.000, "Hai, bagaimana kabarmu?");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][19], 0.150, 1.099);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][19], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][19], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][19], 1);

    ATRP_SpotifyTD[playerid][20] = CreatePlayerTextDraw(playerid, 498.000, 290.000, "Lagu Favoritmu                      :");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][20], 0.150, 1.099);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][20], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][20], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][20], 1);

    ATRP_SpotifyTD[playerid][21] = CreatePlayerTextDraw(playerid, 494.000, 304.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][21], 101.000, 37.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][21], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][21], 943210495);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][21], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][21], 1);

    ATRP_SpotifyTD[playerid][22] = CreatePlayerTextDraw(playerid, 496.000, 307.000, "LD_BUM:bum2");
    PlayerTextDrawTextSize(playerid, ATRP_SpotifyTD[playerid][22], 31.000, 32.000);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][22], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][22], 255);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][22], 1);

    ATRP_SpotifyTD[playerid][23] = CreatePlayerTextDraw(playerid, 529.000, 305.000, "Album");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][23], 0.150, 1.099);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][23], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][23], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][23], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][23], 1);

    ATRP_SpotifyTD[playerid][24] = CreatePlayerTextDraw(playerid, 529.000, 316.000, "CHAXW PROJECT - Yang telah merelakanmu");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][24], 0.100, 0.899);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][24], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][24], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][24], 1);

    ATRP_SpotifyTD[playerid][25] = CreatePlayerTextDraw(playerid, 529.000, 325.000, "Dengarkan album~n~CHAXW PROJECT");
    PlayerTextDrawLetterSize(playerid, ATRP_SpotifyTD[playerid][25], 0.119, 0.799);
    PlayerTextDrawAlignment(playerid, ATRP_SpotifyTD[playerid][25], 1);
    PlayerTextDrawColor(playerid, ATRP_SpotifyTD[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, ATRP_SpotifyTD[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, ATRP_SpotifyTD[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, ATRP_SpotifyTD[playerid][25], 150);
    PlayerTextDrawFont(playerid, ATRP_SpotifyTD[playerid][25], 1);
    PlayerTextDrawSetProportional(playerid, ATRP_SpotifyTD[playerid][25], 1);

    CloseSpotifyButton[playerid] = CreatePlayerTextDraw(playerid, 528.000, 401.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, CloseSpotifyButton[playerid], 36.000, 8.000);
    PlayerTextDrawAlignment(playerid, CloseSpotifyButton[playerid], 1);
    PlayerTextDrawColor(playerid, CloseSpotifyButton[playerid], -1);
    PlayerTextDrawSetShadow(playerid, CloseSpotifyButton[playerid], 0);
    PlayerTextDrawSetOutline(playerid, CloseSpotifyButton[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, CloseSpotifyButton[playerid], 255);
    PlayerTextDrawFont(playerid, CloseSpotifyButton[playerid], 4);
    PlayerTextDrawSetProportional(playerid, CloseSpotifyButton[playerid], 1);
    PlayerTextDrawSetSelectable(playerid, CloseSpotifyButton[playerid], 1);
    return 1;
}

hook OnPlayerConnect(playerid)
{
    if (IsValidDynamicMapIcon(SharelocSender[playerid]))
    {
        DestroyDynamicMapIcon(SharelocSender[playerid]);
        SharelocSender[playerid] = INVALID_STREAMER_ID;
    }

    SVPhoneLoad(playerid);
    SVPhoneInforGuiLoad(playerid);
    SVPhoneCallGuiLoad(playerid);
    SVPhoneCallLoad(playerid);
    SVPhoneBankLoad(playerid);
    SVPhoneSpotifyLoad(playerid);
    SVPhoneTwitterHomepageLoad(playerid);
    SVPhoneTwitterHomeLoad(playerid);
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

    MainPhoneUnload(playerid);
    InforGuiUnload(playerid);
    BankTdUnload(playerid);
    TwitterHomeUnload(playerid);
    TwitterHomePageUnload(playerid);
    CallGuiUnload(playerid);
    CallTDUnload(playerid);
    SpotifyUnload(playerid);
    return 1;
}

Toggle_PhoneTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new ipnn; ipnn < 12; ipnn++) PlayerTextDrawHide(playerid, IphoneNyaNih[playerid][ipnn]);
        PlayerTextDrawHide(playerid, ContactButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, GpsButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, LayananButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, BankButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, LainnyaButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, TransButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, YellowButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, TwitterButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, VehicleButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, InformationButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, WhatsappButtonPhone[playerid]);
        PlayerTextDrawHide(playerid, CloseButtonPhone[playerid][0]);
        PlayerTextDrawHide(playerid, CloseButtonPhone[playerid][1]);
        PlayerTextDrawHide(playerid, CloseButtonPhone[playerid][2]);
        PlayerTextDrawHide(playerid, CallButtonPhone[playerid]);
        for(new app; app < 37; app++) PlayerTextDrawHide(playerid, PhoneAppLogo[playerid][app]);
        if(AccountData[playerid][pNewBiePlayer] > 0)
        {
            UpdateNewbieTextdraw(playerid);
            ShowNewbieTextdraw(playerid); // <== TARUH DI SINI
        }
    }
    else
    {
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 455496959);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new ipnn; ipnn < 12; ipnn++) PlayerTextDrawShow(playerid, IphoneNyaNih[playerid][ipnn]);
        PlayerTextDrawShow(playerid, ContactButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, GpsButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, LayananButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, BankButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, LainnyaButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, TransButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, YellowButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, TwitterButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, VehicleButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, InformationButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, WhatsappButtonPhone[playerid]);
        PlayerTextDrawShow(playerid, CloseButtonPhone[playerid][0]);
        PlayerTextDrawShow(playerid, CloseButtonPhone[playerid][1]);
        PlayerTextDrawShow(playerid, CloseButtonPhone[playerid][2]);
        PlayerTextDrawShow(playerid, CallButtonPhone[playerid]);
        for(new app; app < 37; app++) PlayerTextDrawShow(playerid, PhoneAppLogo[playerid][app]);
    }
    return 1;
}

Toggle_InforGui(playerid, bool:toggle)
{
    if(!toggle)
    {   
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 46; i++) PlayerTextDrawHide(playerid, InformGui[playerid][i]);
        for(new i; i < 3; i++) PlayerTextDrawHide(playerid, CloseInforGuiButton[playerid][i]);
    }  
    else
    {
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 46; i++) PlayerTextDrawShow(playerid, InformGui[playerid][i]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][15], sprintf("%s", AccountData[playerid][pName]));
        PlayerTextDrawShow(playerid, InformGui[playerid][15]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][18], sprintf("Player ID : %d", playerid));
        PlayerTextDrawShow(playerid, InformGui[playerid][18]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][19], sprintf("Nomor Telephon : %s", AccountData[playerid][pPhone]));
        PlayerTextDrawShow(playerid, InformGui[playerid][19]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][20], sprintf("Nomor Rekening : %d", AccountData[playerid][pBankRek]));
        PlayerTextDrawShow(playerid, InformGui[playerid][20]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][21], sprintf("Uang Disaku : %s", FormatMoney(AccountData[playerid][pMoney])));
        PlayerTextDrawShow(playerid, InformGui[playerid][21]);
        PlayerTextDrawSetString(playerid, InformGui[playerid][22], sprintf("Uang Dibank : %s", FormatMoney(AccountData[playerid][pBankMoney])));
        PlayerTextDrawShow(playerid, InformGui[playerid][22]);
        for(new i; i < 3; i++) PlayerTextDrawShow(playerid, CloseInforGuiButton[playerid][i]);
    }
}

Toggle_CallGui(playerid, bool:toggle)
{
    if(!toggle)
    {   
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 36; i++) PlayerTextDrawHide(playerid, PhoneCallGuiReal[playerid][i]);
        for(new i; i < 3; i++) PlayerTextDrawHide(playerid, CloseCallGuiButton[playerid][i]);
    }  
    else
    {
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 1211993087);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 36; i++) PlayerTextDrawShow(playerid, PhoneCallGuiReal[playerid][i]);
        PlayerTextDrawSetString(playerid, PhoneCallGuiReal[playerid][0], "");
        for(new i; i < 3; i++) PlayerTextDrawShow(playerid, CloseCallGuiButton[playerid][i]);
    }
}

Toggle_CallTD(playerid, bool:toggle)
{
    if(!toggle)
    {   
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 2; i++) PlayerTextDrawHide(playerid, SVRP_CallTD[playerid][i]);
        PlayerTextDrawHide(playerid, ContactNameTD[playerid]);
        PlayerTextDrawHide(playerid, StatusDialingTD[playerid]);
        PlayerTextDrawHide(playerid, CloseCallButton[playerid][0]);
        PlayerTextDrawHide(playerid, CloseCallButton[playerid][1]);
        PlayerTextDrawHide(playerid, CloseCallButton[playerid][2]);
    }
    else
    {
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 455496959);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 455496959);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 2; i++) PlayerTextDrawShow(playerid, SVRP_CallTD[playerid][i]);
        PlayerTextDrawShow(playerid, ContactNameTD[playerid]);
        PlayerTextDrawShow(playerid, StatusDialingTD[playerid]);
        PlayerTextDrawShow(playerid, CloseCallButton[playerid][0]);
        PlayerTextDrawShow(playerid, CloseCallButton[playerid][1]);
        PlayerTextDrawShow(playerid, CloseCallButton[playerid][2]);
    }
    return 1;
}

Toggle_BankTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 15; i++) PlayerTextDrawHide(playerid, SVRP_GuiBankTD[playerid][i]);
        PlayerTextDrawHide(playerid, TransferBankButton[playerid]);
        PlayerTextDrawHide(playerid, TransferText[playerid]);
        PlayerTextDrawHide(playerid, SVRP_GuiBankDollar[playerid]);
        PlayerTextDrawHide(playerid, CloseBankButton[playerid][0]);
        PlayerTextDrawHide(playerid, CloseBankButton[playerid][1]);
        PlayerTextDrawHide(playerid, CloseBankButton[playerid][2]);
        for(new btdstr; btdstr < 2; btdstr++) PlayerTextDrawHide(playerid, SVRP_BankString[playerid][btdstr]);
    }
    else
    {
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 1211993087);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 1211993087);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 15; i++) PlayerTextDrawShow(playerid, SVRP_GuiBankTD[playerid][i]);
        PlayerTextDrawShow(playerid, TransferBankButton[playerid]);
        PlayerTextDrawShow(playerid, TransferText[playerid]);
        PlayerTextDrawShow(playerid, SVRP_GuiBankDollar[playerid]);
        PlayerTextDrawSetString(playerid, SVRP_BankString[playerid][0], sprintf("%s", AccountData[playerid][pName]));
        PlayerTextDrawShow(playerid, SVRP_BankString[playerid][0]);
        PlayerTextDrawSetString(playerid, SVRP_BankString[playerid][1], sprintf("%s", FormatMoney(AccountData[playerid][pBankMoney])));
        PlayerTextDrawShow(playerid, SVRP_BankString[playerid][1]);
        // PlayerTextDrawSetString(playerid, SVRP_BankString[playerid][2], sprintf("%d", AccountData[playerid][pBankRek]));
        // PlayerTextDrawShow(playerid, SVRP_BankString[playerid][2]);
        PlayerTextDrawShow(playerid, CloseBankButton[playerid][0]);
        PlayerTextDrawShow(playerid, CloseBankButton[playerid][1]);
        PlayerTextDrawShow(playerid, CloseBankButton[playerid][2]);
    }
    return 1;
}

Toggle_SpotifyTD(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 26; i++) PlayerTextDrawHide(playerid, ATRP_SpotifyTD[playerid][i]);
        PlayerTextDrawHide(playerid, CloseSpotifyButton[playerid]);
    }
    else
    {
        for(new i; i < 26; i++) PlayerTextDrawShow(playerid, ATRP_SpotifyTD[playerid][i]);
        PlayerTextDrawShow(playerid, CloseSpotifyButton[playerid]);
    }
    return 1;
}

Toggle_TwitterHome(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 8; i++) PlayerTextDrawHide(playerid, SVRP_TwitterHomeTD[playerid][i]);
        PlayerTextDrawHide(playerid, CloseTwitterHome[playerid][0]);
        PlayerTextDrawHide(playerid, CloseTwitterHome[playerid][1]);
        PlayerTextDrawHide(playerid, CloseTwitterHome[playerid][2]);
    }
    else
    {
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 1097458175);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 8; i++) PlayerTextDrawShow(playerid, SVRP_TwitterHomeTD[playerid][i]);
        PlayerTextDrawShow(playerid, CloseTwitterHome[playerid][0]);
        PlayerTextDrawShow(playerid, CloseTwitterHome[playerid][1]);
        PlayerTextDrawShow(playerid, CloseTwitterHome[playerid][2]);
    }
    return 1;
}

Toggle_TwitterHomepage(playerid, bool:toggle)
{
    if(!toggle)
    {
        for(new i; i < 21; i++) PlayerTextDrawHide(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 9; i++) PlayerTextDrawHide(playerid, SVRP_TwitterHomePageTD[playerid][i]);
        for(new i; i < 12; i++) PlayerTextDrawHide(playerid, SVRP_TwitterPageTD[playerid][i]);
        PlayerTextDrawHide(playerid, CloseTwitterHomePage[playerid][0]);
        PlayerTextDrawHide(playerid, CloseTwitterHomePage[playerid][1]);
        PlayerTextDrawHide(playerid, CloseTwitterHomePage[playerid][2]);
    }
    else
    {
        PlayerTextDrawSetString(playerid, SVRP_TwitterHomePageTD[playerid][6], sprintf("Hi %s, Welcome to X", AccountData[playerid][pName]));
        PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][6]);

        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][12], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][13], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][14], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][15], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][16], 1097458175);
        PlayerTextDrawColor(playerid, SVRP_Phone[playerid][17], 1097458175);
        for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
        for(new i; i < 9; i++) PlayerTextDrawShow(playerid, SVRP_TwitterHomePageTD[playerid][i]);
        PlayerTextDrawShow(playerid, CloseTwitterHomePage[playerid][0]);
        PlayerTextDrawShow(playerid, CloseTwitterHomePage[playerid][1]);
        PlayerTextDrawShow(playerid, CloseTwitterHomePage[playerid][2]);

        PageMenu(playerid);
    }
    return 1;
}

HideAllSmartphone(playerid)
{
    Toggle_PhoneTD(playerid, false);
    Toggle_BankTD(playerid, false);
    Toggle_SpotifyTD(playerid, false);
    Toggle_TwitterHome(playerid, false);
    Toggle_TwitterHomepage(playerid, false);
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

forward OnOutcomingCall(playerid, const targetnumber[]);
public OnOutcomingCall(playerid, const targetnumber[])
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
    Toggle_CallGui(playerid, false);
    Toggle_CallTD(playerid, true);
    PlayerTextDrawShow(playerid, RedButtonoutComingCall[playerid]);
    return 1;
}

forward OnIncomingCall(playerid, const fromnumber[]);
public OnIncomingCall(playerid, const fromnumber[])
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

    Toggle_CallGui(playerid, false);
    Toggle_InforGui(playerid, false);
    Toggle_BankTD(playerid, false);
    Toggle_TwitterHomepage(playerid, false);
    Toggle_TwitterHome(playerid, false);
    for(new i; i < 21; i++) PlayerTextDrawShow(playerid, SVRP_Phone[playerid][i]);
    for(new i; i < 2; i++) PlayerTextDrawShow(playerid, SVRP_CallTD[playerid][i]);
    PlayerTextDrawShow(playerid, ContactNameTD[playerid]);
    PlayerTextDrawShow(playerid, StatusDialingTD[playerid]);
    PlayerTextDrawShow(playerid, CloseCallButton[playerid][0]);
    PlayerTextDrawShow(playerid, CloseCallButton[playerid][1]);
    PlayerTextDrawShow(playerid, CloseCallButton[playerid][2]);
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
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGIN, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Login Twitter", 
            "Error: Tidak dapat diisi kosong!\nHai, selamat datang di Twitter!\nSilahkan masukkan username Twitter kamu yang telah terdaftar:", "Input", "Batal");

            if(strcmp(inputtext, AccountData[playerid][TwitterName])) return ShowTDN(playerid, NOTIFICATION_WARNING, sprintf("Akum Twitter %s tidak ditemukan!", inputtext));

            ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Hai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", inputtext), "Input", "Batal");
        }
        case DIALOG_TWITTER_LOGINPASSWORD:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Error: Anda harus memasukkan kata sandi!\nHai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", AccountData[playerid][TwitterName]), "Input", "Batal");

            if(strcmp(inputtext, AccountData[playerid][TwitterPassword])) return ShowPlayerDialog(playerid, DIALOG_TWITTER_LOGINPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Login Twitter", 
            sprintf("Error: Kata sandi yang anda masukkan salah!\nHai, %s!\nSilahkan masukkan kata sandi akun Twitter kamu untuk masuk:", AccountData[playerid][TwitterName]), "Input", "Batal");

            AccountData[playerid][Twitter] = true;
            Toggle_TwitterHome(playerid, false);
            Toggle_TwitterHomepage(playerid, true);
        }
        case DIALOG_TWITTER_SIGN:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGN, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Daftar Twitter", "Error: Tidak dapat diisi kosong!\nHai, selamat datang di Twitter!\
            \nSilahkan masukkan username Twitter kamu, ini akan ditampilkan pada setiap post tweet yang kamu buat:\
            \nIngat: Username hanya dapat berupa huruf dan angka, tidak menggunakan simbol!\
            \nPanjang username 7 - 24 karakter!", "Set", "Batal");

            if(strlen(inputtext) < 7 || strlen(inputtext) > 24) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGN, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Daftar Twitter", "Error: Nama tidak dapat kurang dari 7 huruf atau lebih dari 24!\nHai, selamat datang di Twitter!\
            \nSilahkan masukkan username Twitter kamu, ini akan ditampilkan pada setiap post tweet yang kamu buat:\
            \nIngat: Username hanya dapat berupa huruf dan angka, tidak menggunakan simbol!\
            \nPanjang username 7 - 24 karakter!", "Set", "Batal");

            format(AccountData[playerid][pTempText], 24, inputtext);
            ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Daftar Twitter", 
            sprintf("Hai %s!\nSilahkan massukan kata sandi untuk akun Twitter kamu:\nIngat: Panjang kata sandi 7 - 32 Karakter!\nTahap ini tidak dapat dibatalkan!", inputtext), "Set", "");
        }
        case DIALOG_TWITTER_SIGNPASSWORD:
        {
            if(!response) return 1;
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Daftar Twitter", 
            sprintf("Error: Tidak dapat diisi kosong!\nHai, %s!\nSilahkan masukkan kata sandi untuk akun Twitter kamu:\nIngat: Panjang kata sandi 7 - 32 Karakter!\nTahap ini tidak dapat dibatalkan!", AccountData[playerid][pTempText]), "Set", "");

            if(strlen(inputtext) < 7 || strlen(inputtext) > 32) return ShowPlayerDialog(playerid, DIALOG_TWITTER_SIGNPASSWORD, DIALOG_STYLE_PASSWORD, ""RED_E"CHAXW TEATER "WHITE"- Daftar Twitter", 
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
                    ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak", 
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
                    
                    ShowPlayerDialog(playerid, DIALOG_AIRDROPDISPLAY, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Airdrop", strings, "Pilih", "Batal");
                }
                case 1: // share
                {
                    if(!AccountData[playerid][AirdropPermission]) 
                        return ShowTDN(playerid, NOTIFICATION_WARNING, "Izinkan terlebih dahulu Permission Share Contact!");

                    new frmxt[255], count = 0;

                    foreach(new i : Player) if (i != playerid) if (IsPlayerNearPlayer(playerid, i, 2.0) && AccountData[i][AirdropPermission])
                    {
                        format(frmxt, sizeof(frmxt), "%sPlayer ID: %d\n", frmxt, i);
                        NearestPlayer[playerid][count++] = i;
                    }

                    if(count == 0)
                    {
                        PlayerPlaySound(playerid, 5206, 0.0, 0.0, 0.0);
                        return ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""RED_E"CHAXW TEATER "WHITE"- Airdrop",
                        "Tidak ada player yang dekat dengan anda!", "Tutup", "");
                    }

                    ShowPlayerDialog(playerid, DIALOG_AIRDROP, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Airdrop", frmxt, "Pilih", "Batal");
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
            ShowPlayerDialog(targetid, DIALOG_AIRDROP_CONF, DIALOG_STYLE_MSGBOX, ""RED_E"CHAXW TEATER "WHITE"- Airdrop", shstr, "Iya", "Tidak");
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
                SendClientMessageEx(playerid, COLOR_WHITE, ""WHITE"Kamu Membatalkan Music");
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
                    ShowTDN(playerid, NOTIFICATION_WARNING, "Kamu belum memasukan URL!");
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
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Error: Tidak dapat diisi kosong!\nMohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }

            if(strlen(inputtext) < 1 || strlen(inputtext) > 64)
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Error: Tidak dapat kurang dari 1 huruf atau lebih dari 64!\nMohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }
            
            strpack(AccountData[playerid][pTempText], inputtext, 64);
            ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak",
            sprintf("Mohon masukkan nomor HP dari %s:", inputtext), "Input", "Kembali");
        }
        case DIALOG_ADD_CONTACTNUMB:
        {
            if(!response)
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACT, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak", 
                "Mohon masukkan nama kontak yang akan disimpan dibawah ini:", "Set", "Batal");
                return 1;
            }

            if(isnull(inputtext))
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak",
                "Error: Tidak dapat diisi kosong!\nMohon masukkan nomor HP kontak yang akan disimpan dibawah ini:", "Input", "Kembali");
                return 1;
            }

            if(!IsNumeric(inputtext))
            {
                ShowPlayerDialog(playerid, DIALOG_ADD_CONTACTNUMB, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Tambah Kontak",
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
    
        // }
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
                
                ShowPlayerDialog(playerid, DialogContactMenu, DIALOG_STYLE_LIST, sprintf(""RED_E"CHAXW TEATER "WHITE" - %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), 
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

            ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Buat Iklan", "Masukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
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
                    ShowPlayerDialog(playerid, DIALOG_YELLOW_CALL, DIALOG_STYLE_MSGBOX, ""RED_E"CHAXW TEATER "WHITE"- Iklan",
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
                    ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Buat Iklan", 
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

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Buat Iklan",
                "Error: Iklan tidak dapat kosong!\nMasukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(strlen(inputtext) < 1 || strlen(inputtext) > 128) return ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Buat Iklan",
                "Error: Iklan tidak boleh kurang dari 1 atau lebih dari 128 huruf!\nMasukkan iklan yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet",
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

            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet",
            "Error: Dilarang menggunakan tanda '\'' atau apapun itu!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            if(CheckNumberBlocked(targetid, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_WARNING, "Anda tidak dapat mengirim pesan, nomor anda di Blokir!");

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

            ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet", "Masukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
        }
        case DIALOG_TWITTER_POST:
        {
            if(!response)
            {
                AccountData[playerid][CurrentlyReadTwitter] = false;
                return 1;
            }

            ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet", "Masukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
        }
        case DIALOG_TWITTER_POST_SEND:
        {
            if(!response) 
            {
                AccountData[playerid][CurrentlyReadTwitter] = false;
                return 1;
            }

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet",
                "Error: Tweet tidak dapat kosong!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");
            
            if(strlen(inputtext) < 1 || strlen(inputtext) > 128) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet",
                "Error: Tweet tidak boleh kurang dari 1 atau lebih dari 128 huruf!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            if(!IsValidFormatText(inputtext)) return ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_SEND, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "GRAY"- Kirim Tweet",
            "Error: Dilarang menggunakan tanda '\'' atau apapun itu!\nMasukkan Tweet yang ingin anda buat dibawah sini:", "Kirim", "Kembali");

            new frmttime[255], query[522];
            new hours, minutes, seconds, years, months, days;
            gettime(hours, minutes, seconds);
            getdate(years, months, days);
            format(frmttime, sizeof(frmttime), "%02d/%02d/%02d %02d:%02d:%02d", years, months, days, hours, minutes, seconds);

            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `tweets` (`ID`, `TwitterFrom`, `TwitterDate`, `TwitterText`) VALUES ('1', '%s', '%s', '%s')", AccountData[playerid][TwitterName], frmttime, inputtext);
            mysql_tquery(g_SQL, query, "OnPlayerTweet", "d", playerid);
            AddTweetLog(AccountData[playerid][pName], AccountData[playerid][pUCP], inputtext);

            foreach(new i : Player) if (AccountData[i][pSpawned] && AccountData[i][CurrentlyReadTwitter]) {
                ShowPlayerTwitterPage(i);
            }
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
                    if(CheckNumberBlocked(ownernumber, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_WARNING, "Tidak dapat melakukan panggilan ini, nomor anda diblokir!");
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
                    if(CheckNumberBlocked(ownernumber, AccountData[playerid][pPhone])) return ShowTDN(playerid, NOTIFICATION_WARNING, "Anda tidak dapat mengirim shareloc, nomor anda di Blokir!");

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
                    ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                    sprintf("Mohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][cidt][contactName]), "Save", "Batal");
                }
                case 4: // Edit Number
                {
                    ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nomor Kontak",
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
                if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nomor Kontak", 
                sprintf("Error: Tidak dapat diisi kosong!\nMohon masukkan nomor baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNUMBER, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nomor Kontak", 
                sprintf("Error: Hanya dapat diisi angka!\nMohon masukkan nomor baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                CallLocalFunction("OnContactEditNumber", "dds", playerid, AccountData[playerid][pContact], inputtext);
            }
            else ShowContactList(playerid);
        }
        case DIALOG_EDIT_CONTACTNAME:
        {
            if(response)
            {
                if(isnull(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Tidak dapat diisi kosong!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Tidak dapat memasukkan angka semua!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                if(strlen(inputtext) < 1 || strlen(inputtext) > 32) return ShowPlayerDialog(playerid, DIALOG_EDIT_CONTACTNAME, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Edit Nama Kontak", 
                sprintf("Error: Nama tidak dapat kurang dari 1 huruf atau lebih dari 32!\nMohon masukkan nama baru untuk diterapkan pada kontak %s", ContactData[playerid][AccountData[playerid][pContact]][contactName]), "Save", "Batal");

                CallLocalFunction("OnContactEditName", "dds", playerid, AccountData[playerid][pContact], inputtext);
            }
            else ShowContactList(playerid);
        }
        case DialogTransfer:
        {
            if(!response) return false;
            
            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Harus diisi tidak dapat kosong!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Hanya dapat diisi angka!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            if(strval(inputtext) == AccountData[playerid][pBankRek]) return ShowPlayerDialog(playerid, DialogTransfer, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer", 
            "Error: Tidak dapat mengirim ke rekening diri sendiri!\nMohon masukkan nomor rekening yang ingin anda transfer:", "Submit", "Batal");

            new query[128];
            mysql_format(g_SQL, query, sizeof(query), "SELECT * FROM `player_characters` WHERE `Char_BankRek`=%d", strval(inputtext));
            mysql_tquery(g_SQL, query, "SearchBankRek", "dd", playerid, strval(inputtext));
        }
        case DialogTransfer1:
        {
            if(!response) return 1;

            new targetid = GetRekeningOwner(AccountData[playerid][pTransferRek]);

            if(isnull(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer",
            "Error: Harus diisi tidak dapat kosong!\nMohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal"); 
        
            if(!IsNumeric(inputtext)) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer",
            "Error: Hanya dapat diisi angka!\nMohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal");
        
            if(strval(inputtext) < 1 || strval(inputtext) > AccountData[playerid][pBankMoney]) return ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer",
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
                        ShowPlayerDialog(playerid, DialogSpotify1, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Spotify", jskc, "Input", "Cancel");
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
                    ShowTDN(playerid, NOTIFICATION_WARNING, "Anda belum memasukan URL musik!");
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
                    \n"GRAY"Kantor Kepolisian CHAXW PROJECT\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nRumah Sakit\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Bengkel Kota\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nAsuransi\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Asuransi LV\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nRestaurant\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Pelabuhan\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nBahamas\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Rusun Abah Iwan\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nTerminal Desa\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Pasar CHAXW PROJECT\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nShowroom CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Gudang Warbun\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nGudang Fort Carson\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"OYO Hotels #1\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nRusun Suroh\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Rusun Jamal\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nToko Olahraga\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Motel Romo\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nVenue CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Bahamas LV\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nBahamas SF\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Rusun BlueDoorz\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nUniversitas CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Panggung San Fiero\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nDrag Race Las Venturas\t%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(1133.9788,-2036.3195,69.0078), GetPlayerDistanceFromPoint(playerid, 1133.9788,-2036.3195,69.0078),
                    GetLocation(1246.8025,337.1260,19.5547), GetPlayerDistanceFromPoint(playerid, 1246.8025,337.1260,19.5547),
                    GetLocation(1347.5928,742.9057,10.6719), GetPlayerDistanceFromPoint(playerid, 1347.5928,742.9057,10.6719),
                    GetLocation(-75.1937, 1035.4578, 19.7411), GetPlayerDistanceFromPoint(playerid, -75.1937, 1035.4578, 19.7411),
                    GetLocation(424.6763,-1322.2543,15.0031), GetPlayerDistanceFromPoint(playerid, 424.6763,-1322.2543,15.0031),//asuransi ls
                    GetLocation(51.3536, 1222.1011, 18.9170), GetPlayerDistanceFromPoint(playerid, 51.3536, 1222.1011, 18.9170),
                    GetLocation(568.4230,-1830.0209,5.6257), GetPlayerDistanceFromPoint(playerid, 568.4230,-1830.0209,5.6257),
                    GetLocation(2767.8762, -2435.3850, 13.6850), GetPlayerDistanceFromPoint(playerid, 2767.8762, -2435.3850, 13.6850),
                    GetLocation(2422.3745,-1234.7301,24.5338), GetPlayerDistanceFromPoint(playerid, 2422.3745,-1234.7301,24.5338),
                    GetLocation(2224.1106,-1152.6976,25.7977), GetPlayerDistanceFromPoint(playerid, 2224.1106,-1152.6976,25.7977),
                    GetLocation(88.39, -280.85, 1.57), GetPlayerDistanceFromPoint(playerid, 88.39, -280.85, 1.57),
                    GetLocation(1574.7855, 714.9474, 10.8203), GetPlayerDistanceFromPoint(playerid, 1574.7855, 714.9474, 10.8203),
                    GetLocation(1050.6765, -949.3245, 42.6703), GetPlayerDistanceFromPoint(playerid, 1050.6765, -949.3245, 42.6703),
                    GetLocation(2076.8, -2033.33, 13.5469), GetPlayerDistanceFromPoint(playerid, 2076.8, -2033.33, 13.5469),
                    GetLocation(-136.0707, 1116.6332, 20.1966), GetPlayerDistanceFromPoint(playerid, -136.0707, 1116.6332, 20.1966),
                    GetLocation(2223.5115, -1143.1807, 25.7969), GetPlayerDistanceFromPoint(playerid, 2223.5115, -1143.1807, 25.7969),
                    GetLocation(221.2156, -117.9283, 1.5781), GetPlayerDistanceFromPoint(playerid, 221.2156, -117.9283, 1.5781),
                    GetLocation(2183.3953, -1794.7335, 13.3606), GetPlayerDistanceFromPoint(playerid, 2183.3953, -1794.7335, 13.3606),
                    GetLocation(1386.4347, 293.3129, 19.5469), GetPlayerDistanceFromPoint(playerid, 1386.4347, 293.3129, 19.5469),
                    GetLocation(-3.3894, 1212.4326, 19.3527), GetPlayerDistanceFromPoint(playerid, -3.3894, 1212.4326, 19.3527),
                    GetLocation(836.0340, -2008.6443, 12.8672), GetPlayerDistanceFromPoint(playerid, 836.0340, -2008.6443, 12.8672),
                    GetLocation(2222.4739, 1837.4940, 10.8203), GetPlayerDistanceFromPoint(playerid, 2222.4739, 1837.4940, 10.8203),
                    GetLocation(-2442.7500, 755.2680, 35.2719), GetPlayerDistanceFromPoint(playerid, -2442.7500, 755.2680, 35.2719),
                    GetLocation(2613.9070, 732.6111, 10.8203), GetPlayerDistanceFromPoint(playerid, 2613.9070, 732.6111, 10.8203),
                    GetLocation(2819.3628, -1086.1926, 30.7333), GetPlayerDistanceFromPoint(playerid, 2819.3628, -1086.1926, 30.7333),
                    GetLocation(-2882.8586, 464.0963, 4.9141), GetPlayerDistanceFromPoint(playerid, -2882.8586, 464.0963, 4.9141),
                    GetLocation(2832.8967, 1903.7570, 10.8203), GetPlayerDistanceFromPoint(playerid, 2832.8967, 1903.7570, 10.8203));
                    ShowPlayerDialog(playerid, LokasiUmum, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 1:
                {
                    new minsty[4012];
                    format(minsty, sizeof(minsty), "Pekerjaan\tNama\tLokasi\tJarak\
                    \n"GRAY"Electrican Job\t"GRAY"( Multiplayer Job )\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nSupir Bus\tTerminal CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Tukang Ayam #1\t"GRAY"Kandang Ayam CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \nTukang Ayam #2\tKantor Ayam CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Petani #1\t"GRAY"Pembelian Bibit\t%s\t"YELLOW"%.2f m\
                    \nPetani #2\tLadang Tanaman\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Petani #3\t"GRAY"Olah Tanaman\t%s\t"YELLOW"%.2f m\
                    \nTukang Kayu\tHutan Kayu\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Kargo\t"GRAY"Pengambilan Truck Kargo\t%s\t"YELLOW"%.2f m\
                    \nPemerah Sapi\tLokasi Pemerahan\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Penambang #1\t"GRAY"Pertambangan CHAXW PROJECT\t%s\t"YELLOW"%.2f m\
                    \nPenambang #2\tPencucian Batu\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Penambang #3\t"GRAY"Peleburan Batu\t%s\t"YELLOW"%.2f m\
                    \nPenjahit #1\tKantor Penjahit\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Penjahit #2\t"GRAY"Penjualan Pakaian\t%s\t"YELLOW"%.2f m\
                    \nRecycler #1\tTempat Penyortiran\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Recycler #2\t"GRAY"Tempat Daur Ulang\t%s\t"YELLOW"%.2f m\
                    \nTukang Minyak #1\tAmbil Minyak\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Tukang Minyak #2\t"GRAY"Refined Minyak\t%s\t"YELLOW"%.2f m\
                    \nTukang Minyak #3\tMixxing Minyak\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Tukang Minyak #4\t"GRAY"Penjualan Gas\t%s\t"YELLOW"%.2f m\
                    \nNelayan #1\tRental Perahu\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Nelayan #2\t"GRAY"Penangkapan Ikan\t"GRAY"%s\t"YELLOW"%.2f m\
                    \nTrashmaster\tSidejob\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Mower\t"GRAY"Sidejob\t%s\t"YELLOW"%.2f m\
                    \nSweeper\tSidejob\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Delivery\t"GRAY"Sidejob\t%s\t"YELLOW"%.2f m\
                    \nForklift\tSidejob\t%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(-2521.1821, -621.8853, 132.7418), GetPlayerDistanceFromPoint(playerid, -2521.1821, -621.8853, 132.7418),
                    GetLocation(96.0680,-272.6256,1.5781), GetPlayerDistanceFromPoint(playerid, 96.0680,-272.6256,1.5781),
                    GetLocation(1546.5872,28.7098,24.1406), GetPlayerDistanceFromPoint(playerid, 1546.5872,28.7098,24.1406),
                    GetLocation(1911.8618,164.4111,37.1539), GetPlayerDistanceFromPoint(playerid, 1911.8618,164.4111,37.1539),
                    GetLocation(-547.7806, -185.1288, 78.4063), GetPlayerDistanceFromPoint(playerid, -547.7806, -185.1288, 78.4063),
                    GetLocation(-376.1269, -1439.9231, 25.7266), GetPlayerDistanceFromPoint(playerid, -376.1269, -1439.9231, 25.7266),
                    GetLocation(3.9224, 66.8390, 3.1172), GetPlayerDistanceFromPoint(playerid, 3.9224, 66.8390, 3.1172),
                    GetLocation(-439.7503, -62.3335, 58.9720), GetPlayerDistanceFromPoint(playerid, -439.7503, -62.3335, 58.9720),
                    GetLocation(-1704.2260, 49.6503, 3.5495), GetPlayerDistanceFromPoint(playerid, -1704.2260, 49.6503, 3.5495),
                    GetLocation(306.8608,1141.2626,8.5859), GetPlayerDistanceFromPoint(playerid, 306.8608,1141.2626,8.5859),
                    GetLocation(686.9853,895.7302,-39.5328), GetPlayerDistanceFromPoint(playerid, 686.9853,895.7302,-39.5328),
                    GetLocation(-412.7031, 1197.8976, 2.2932), GetPlayerDistanceFromPoint(playerid, -412.7031, 1197.8976, 2.2932),
                    GetLocation(2182.6780,-2259.5010,13.3878), GetPlayerDistanceFromPoint(playerid, 2182.6780,-2259.5010,13.3878),
                    GetLocation(2348.7112, -82.1600, 26.3359), GetPlayerDistanceFromPoint(playerid, 2348.7112, -82.1600, 26.3359),
                    GetLocation(676.1796,-619.9467,16.3359), GetPlayerDistanceFromPoint(playerid, 676.1796,-619.9467,16.3359),
                    GetLocation(2297.9268, 2764.1992, 10.8203), GetPlayerDistanceFromPoint(playerid, 2297.9268, 2764.1992, 10.8203),
                    GetLocation(-31.6359, 1386.9554, 9.1719), GetPlayerDistanceFromPoint(playerid, -31.6359, 1386.9554, 9.1719),
                    GetLocation(471.9127, 1299.1512, 9.7176), GetPlayerDistanceFromPoint(playerid, 471.9127, 1299.1512, 9.7176),
                    GetLocation(497.5595, 1518.7350, 1.0000), GetPlayerDistanceFromPoint(playerid, 497.5595, 1518.7350, 1.0000),
                    GetLocation(279.6849, 1348.9515, 10.5859), GetPlayerDistanceFromPoint(playerid, 279.6849, 1348.9515, 10.5859),
                    GetLocation(1929.94, -1776.33, 13.5469), GetPlayerDistanceFromPoint(playerid, 1929.94, -1776.33, 13.5469),
                    GetLocation(111.3999, -1895.6553, 2.9408), GetPlayerDistanceFromPoint(playerid, 111.3999, -1895.6553, 2.9408),
                    GetLocation(352.4596, -2669.7722, -0.0401), GetPlayerDistanceFromPoint(playerid, 352.4596, -2669.7722, -0.0401),
                    GetLocation(1037.3827, -305.1682, 74.0922), GetPlayerDistanceFromPoint(playerid, 1037.3827, -305.1682, 74.0922),
                    GetLocation(2118.1814, -1188.9286, 23.9358), GetPlayerDistanceFromPoint(playerid, 2118.1814, -1188.9286, 23.9358),
                    GetLocation(604.9979, -1508.6365, 14.9549), GetPlayerDistanceFromPoint(playerid, 604.9979, -1508.6365, 14.9549),
                    GetLocation(1001.3441, -1445.8391, 13.5469), GetPlayerDistanceFromPoint(playerid, 1001.3441, -1445.8391, 13.5469),
                    GetLocation(-1723.7289, -63.5671, 3.5547), GetPlayerDistanceFromPoint(playerid, -1723.7289, -63.5671, 3.5547));
                    ShowPlayerDialog(playerid, LokasiPekerjaan, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 2:
                {
                    new minsty[1218];
                    format(minsty, sizeof(minsty), "Hobi\tNama\tLokasi\tJarak\
                    \nMemancing #1\tSpot Pemancingan\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Memancing #2\t"GRAY"Penjualan Ikan\t%s\t"YELLOW"%.2f m\
                    \nBerburu #1\tSpot Perburuan\t%s\t"YELLOW"%.2f m\
                    \n"GRAY"Berburu #2\t"GRAY"Penjualan Hasil Buruan\t%s\t"YELLOW"%.2f m\
                    ",
                    GetLocation(383.1566,-2075.2007,7.8359), GetPlayerDistanceFromPoint(playerid, 383.1566,-2075.2007,7.8359),
                    GetLocation(1052.0156,-345.4073,73.9922), GetPlayerDistanceFromPoint(playerid, 1052.0156,-345.4073,73.9922),
                    GetLocation(-387.3126,-2259.8279,45.5646), GetPlayerDistanceFromPoint(playerid, -387.3126,-2259.8279,45.5646),
                    GetLocation(-1693.3431,-88.9088,3.5654), GetPlayerDistanceFromPoint(playerid, -1693.3431,-88.9088,3.5654));
                    ShowPlayerDialog(playerid, LokasiHobi, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- GPS", minsty, "Pilih", "Batal");
                }
                case 3:
                {
                    ShowPlayerDialog(playerid, LokasiPertokoan, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- GPS", 
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
                case 9:
                {
                    new wid = GetWorkshopNearest(playerid);
                    if(wid == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak ada Workshop terdekat dari posisi anda!");

                    SetPlayerRaceCheckpoint(playerid, 1, wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ], wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ], 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 10: // Bengkel Modshop
                {
                    SetPlayerRaceCheckpoint(playerid, 1, 1101.4049, -1233.4498, 15.8203, 1101.4049, -1233.4498, 15.8203, 5.0);
                    pMapCP[playerid] = true;
                    Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                }
                case 11:// Rumah saya
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
                case 12:
                {
                    DisablePlayerRaceCheckpoint(playerid);
                    ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil menghapus Checkpoint");
                    pMapCP[playerid] = false;
                }
                case 13:
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
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Lokasi",
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
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Lokasi",
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
                        SetPlayerRaceCheckpoint(playerid, 1, -2521.1821, -621.8853, 132.7418, -2521.1821, -621.8853, 132.7418, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 1:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 96.0680,-272.6256,1.5781, 96.0680,-272.6256,1.5781, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 2:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1546.5872,28.7098,24.1406, 1546.5872,28.7098,24.1406, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 3:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1911.8618,164.4111,37.1539, 1911.8618,164.4111,37.1539, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 4:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -547.7806, -185.1288, 78.4063, -547.7806, -185.1288, 78.4063, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 5:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -376.1269, -1439.9231, 25.7266, -376.1269, -1439.9231, 25.7266, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 6:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 3.9224, 66.8390, 3.1172, 3.9224, 66.8390, 3.1172, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 7:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -439.7503, -62.3335, 58.9720, -439.7503, -62.3335, 58.9720, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 8:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -1704.2260, 49.6503, 3.5495, -1704.2260, 49.6503, 3.5495, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 9:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 306.8608,1141.2626,8.5859, 306.8608,1141.2626,8.5859, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 10:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 686.9853,895.7302,-39.5328, 686.9853,895.7302,-39.5328, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 11:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -412.7031, 1197.8976, 2.2932, -412.7031, 1197.8976, 2.2932, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 12:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2182.6780,-2259.5010,13.3878, 2182.6780,-2259.5010,13.3878, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 13:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2348.7112, -82.1600, 26.3359, 2348.7112, -82.1600, 26.3359, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 14:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 676.1796,-619.9467,16.3359, 676.1796,-619.9467,16.3359, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 15:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2297.9268, 2764.1992, 10.8203, 2297.9268, 2764.1992, 10.8203, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 16:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -31.6359, 1386.9554, 9.1719, -31.6359, 1386.9554, 9.1719, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 17:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 471.9127, 1299.1512, 9.7176, 471.9127, 1299.1512, 9.7176, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 18:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 497.5595, 1518.7350, 1.0000, 497.5595, 1518.7350, 1.0000, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 19:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 279.6849, 1348.9515, 10.5859, 279.6849, 1348.9515, 10.5859, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 20:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1929.94, -1776.33, 13.5469, 1929.94, -1776.33, 13.5469, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 21:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 111.3999, -1895.6553, 2.9408, 111.3999, -1895.6553, 2.9408, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 22:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 352.4596, -2669.7722, -0.0401, 352.4596, -2669.7722, -0.0401, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 23:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1037.3827, -305.1682, 74.0922, 1037.3827, -305.1682, 74.0922, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 24:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2118.1814, -1188.9286, 23.9358, 2118.1814, -1188.9286, 23.9358, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 25:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 604.9979, -1508.6365, 14.9549, 604.9979, -1508.6365, 14.9549, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 26:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1001.3441, -1445.8391, 13.5469, 1001.3441, -1445.8391,13.5469, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 27:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -1723.7289, -63.5671, 3.5547, -1723.7289, -63.5671,3.5547, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                }
            }
        }
        case LokasiUmum:
        {
            if(!response)
            {
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Lokasi",
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
                        SetPlayerRaceCheckpoint(playerid, 1, 1483.26, -1756.48, 13.73, 1483.26, -1756.48, 13.73, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 1:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1556.487,-1675.329,16.203, 1556.487,-1675.329,16.203, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 2:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2284.642,604.609,10.820, 2284.642,604.609,10.820, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 3:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -75.1937, 1035.4578, 19.7411, -75.1937, 1035.4578, 19.7411, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 4:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 424.6763,-1322.2543,15.0031, 424.6763,-1322.2543,15.0031, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 5:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 51.3536, 1222.1011, 18.9170, 51.3536, 1222.1011, 18.9170, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 6:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 568.4230,-1830.0209,5.6257, 568.4230,-1830.0209,5.6257, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 7:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2767.8762, -2435.3850, 13.6850, 2767.8762, -2435.3850, 13.6850, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 8:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2422.3745,-1234.7301,24.5338, 2422.3745,-1234.7301,24.5338, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 9:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2224.1106,-1152.6976,25.7977, 2224.1106,-1152.6976,25.7977, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 10:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 88.39, -280.85, 1.57, 88.39, -280.85, 1.57, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 11:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 877.7961, -1193.6427, 16.9766, 877.7961, -1193.6427, 16.9766, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 12:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 557.21, -1289.91, 17.24, 557.21, -1289.91, 17.24, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 13:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2076.8, -2033.33, 13.5469, 2076.8, -2033.33, 13.5469, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 14:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -136.0707, 1116.6332, 20.1966, -136.0707, 1116.6332, 20.1966, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 15:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2223.5115, -1143.1807, 25.7969, 2223.5115, -1143.1807, 25.7969, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 16:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 221.2156, -117.9283, 1.5781, 221.2156, -117.9283, 1.5781, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 17:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2183.3953, -1794.7335, 13.3606, 2183.3953, -1794.7335, 13.3606, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 18:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 1386.4347, 293.3129, 19.5469, 1386.4347, 293.3129, 19.5469, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 19:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -3.3894, 1212.4326, 19.3527, -3.3894, 1212.4326, 19.3527, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 20:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 836.0340, -2008.6443, 12.8672, 836.0340, -2008.6443, 12.8672, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 21:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2222.4739, 1837.4940, 10.8203, 2222.4739, 1837.4940, 10.8203, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 22:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -2442.7500, 755.2680, 35.2719, -2442.7500, 755.2680, 35.2719, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 23:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2613.9070, 732.6111, 10.8203, 2613.9070, 732.6111, 10.8203, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 24:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2819.3628, -1086.1926, 30.7333, 2819.3628, -1086.1926, 30.7333, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 25:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, -2882.8586, 464.0963, 4.9141, -2882.8586, 464.0963, 4.9141, 5.0);
                        Info(playerid, "Silahkan ikuti tanda blip yang sudah ditandai pada map anda");
                        pMapCP[playerid] = true;
                    }
                    case 26:
                    {
                        SetPlayerRaceCheckpoint(playerid, 1, 2832.8967, 1903.7570, 10.8203, 2832.8967, 1903.7570, 10.8203, 5.0);
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
                return ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Lokasi",
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
                }
            }
        }
    }
    return 1;
}


ShowPlayerTwitterPage(playerid)
{
    mysql_query(g_SQL, "SELECT * FROM `tweets` WHERE `ID`=1 ORDER BY `TwitterDate` ASC LIMIT 30");
    new rows = cache_num_rows(), list[4500], tempTweetFrom[24], tempTweetDate[64], tempTweetText[128];
    if(rows)
    {
        if(rows >= 30)
        {
            mysql_tquery(g_SQL, "DELETE FROM `tweets` WHERE `ID`=1");
        }

        format(list, sizeof(list), "Username\tTanggal\tPostingan\n");
        for(new i; i < rows; ++i)
        {
            cache_get_value_name(i, "TwitterFrom", tempTweetFrom);
            cache_get_value_name(i, "TwitterDate", tempTweetDate);
            cache_get_value_name(i, "TwitterText", tempTweetText);

            format(list, sizeof(list), "%s"VTWITTER"@%s\t"GRAY"%s\t"WHITE"%s\n", list, tempTweetFrom, tempTweetDate, tempTweetText);
        }
        ShowPlayerDialog(playerid, DIALOG_TWITTER_POST, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- Tweets", list, "Tweet", "Kembali");
    }
    else 
    {
        format(list, sizeof(list), "Username\tTanggal\tPostingan\n");
        format(list, sizeof(list), "%sJadilah orang pertama yang membagikan Tweet", list);
        ShowPlayerDialog(playerid, DIALOG_TWITTER_POST_EMPTY, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- Tweets", list, "Tweet", "Kembali");
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
        ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- Yellow Pages", list, "Iklan", "Kembali");
    }
    else
    {
        format(list, sizeof(list), "Nama\tTanggal\tIklan\n");
        format(list, sizeof(list), "%sJadilah orang pertama yang membuat iklan!", list);
        ShowPlayerDialog(playerid, DIALOG_YELLOW_PAGE_EMPTY, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- Yellow Pages", list, "Iklan", "Kembali");
    }
    return 1;
}

forward SearchBankRek(playerid, norekening);
public SearchBankRek(playerid, norekening)
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
        ShowPlayerDialog(playerid, DialogTransfer1, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Transfer",
        "Mohon masukkan jumlah nominal yang ingin anda kirim ke rekening tersebut:", "Kirim", "Batal");
    }
    return 1;
}

Dialog:MenuSpotify(playerid, response, listitem, inputtext[])
{
    if(response)
    {
        switch(listitem)
        {
            case 0: // Earphone
            {
                if(AccountData[playerid][pEarphone] != 1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memiliki Earphone!");

                ShowPlayerDialog(playerid, DialogSpotify, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Spotify", "Matikan Musik\nPutar Musik", "Select", "Cancel");
            }
            case 1: // Boombox
            {
                if(!AccountData[playerid][pVip]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan pengguna VIP!");

                if(GetPVarType(playerid, "PlacedBB"))
                {
                    if(IsPlayerInRangeOfPoint(playerid, 3.0, GetPVarFloat(playerid, "BBX"), GetPVarFloat(playerid, "BBY"), GetPVarFloat(playerid, "BBZ")))
                    {
                        ShowPlayerDialog(playerid, DANN_BOOMBOX, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Boombox", "Matikan Boombox\nPutar Musik", "Select", "Cancel");
                    }
                    else
                    {
                        return ShowTDN(playerid, NOTIFICATION_ERROR, "~g~[!]~w~: Kamu tidak berada didekat boombox mu!");
                    }
                }
                else
                {
                    ShowTDN(playerid, NOTIFICATION_ERROR, "Kamu tidak menaruh boombox sebelumnya!");
                }  
            }
        }
    }
    else ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
    return 1;
}

Dialog:LainnyaPhone(playerid, response, listitem, inputtext[])
{
    if(response)
    {
        switch(listitem)
        {
            case 0: // Show Settings Phone
            {
                Dialog_Show(playerid, SettingPhone, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Pengaturan",
                "Tentang Ponsel\
                \n"GRAY"Ubah Nada Dering Telepon\
                \nHapus Nada Dering\
                \n"GRAY"%s Mode Pesawat", "Pilih", "Batal", AccountData[playerid][phoneAirplaneMode] ? "Matikan" : "Nyalakan");
            }
            case 1: // Show Dialog Airdrop
            {
                new strings[255];
                format(strings, sizeof(strings), "Status: %s\
                \nShare Contacts", AccountData[playerid][AirdropPermission] ? ""LIGHTGREEN"Share Contact diizinkan" : ""RED"Share Contact tidak diizinkan");
            
                ShowPlayerDialog(playerid, DIALOG_AIRDROPDISPLAY, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Airdrop", strings, "Pilih", "Batal");
            }
            case 2: // Show Dialog Spotify
            {
                Dialog_Show(playerid, MenuSpotify, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Menu Spotify",
                "Putar Di Earphone\
                \nPutar Di Boombox", "Pilih", "Batal");
            }
            case 3: // Show Invoice
            {
                ShowPlayerInvoice(playerid);
            }
        }
    }
    else ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
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
                ShowPlayerDialog(playerid, DIALOG_UNUSED, DIALOG_STYLE_MSGBOX, ""RED_E"CHAXW TEATER "WHITE"- Tentang Ponsel", minsty, "Tutup", "");
            }
            case 1: // Ubah Nada Dering
            {
                Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Ubah Nada Dering",
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
        return Dialog_Show(playerid, SettingPhone, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Pengaturan",
        "Tentang Ponsel\
        \nUbah Nada Dering Telepon", "Pilih", "Batal");
    }

    if(isnull(inputtext)) return Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Ubah Nada Dering",
    "Error: Tidak dapat diisi kosong!\nMohon masukkan link mp3 yang sudah anda upload dimanapun itu untuk dijadikan sebagai nada dering saat ada panggilan masuk\
    \nNOTE: Tidak dapat memasukkan link langsung dari YouTube!", "Submit", "Batal");
    
    if(IsNumeric(inputtext)) return Dialog_Show(playerid, PhoneRingtone, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Ubah Nada Dering",
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
                ShowPlayerDialog(playerid, LokasiGps, DIALOG_STYLE_LIST, ""RED_E"CHAXW TEATER "WHITE"- Lokasi",
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
                if(AccountData[playerid][pFaction] != FACTION_EMS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan anggota Mitra EMS CHAXW PROJECT!");
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
                    return Dialog_Show(playerid, ShowOnly, DIALOG_STYLE_MSGBOX, ""RED_E"CHAXW TEATER "WHITE"- Emergency Signal",
                    "Tidak ada seseorang manapun yang mengirim Emergency Signal!", "Tutup", "");
                }

                Dialog_Show(playerid, EmergencySignal, DIALOG_STYLE_TABLIST_HEADERS, ""RED_E"CHAXW TEATER "WHITE"- Emergency Signal", list, "Pilih", "Batal");
            }
        }
    }
    return 1;
}

Dialog:EmergencySignal(playerid, response, listitem, inputtext[])
{
    if(response)
    {   
        if(AccountData[playerid][pFaction] != FACTION_EMS) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan anggota Mitra EMS CHAXW PROJECT!");
        if(!AccountData[playerid][pDutyEms]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang duty EMS!");

        new id = ListSignal[playerid][listitem];
        if(!IsPlayerConnected(id)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut tidak terkoneksi ke server!");
        if(!SignalExists[id]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Emergency signal sudah tidak ada/dihandle anggota lain!"); 
        // if(!AccountData[id][pInjured]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Orang yang mengirim signal sudah terbangun dari pingsannya!");
        
        SetPlayerRaceCheckpoint(playerid, 1, SignalPos[id][0], SignalPos[id][1], SignalPos[id][2], 0.0, 0.0, 0.0, 4.0);
        Info(playerid, "Anda telah menerima signal emergency di daerah "YELLOW"%s", GetLocation(SignalPos[id][0], SignalPos[id][1], SignalPos[id][2]));
        Info(id, "Anggota Mitra EMS telah merespon signal emergency yang anda kirim. Harap tunggu di lokasi hingga petugas datang!");
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

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_POLISI, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Polisi",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak kepolisian dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke kepolisian:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime()){
		ShowTDN(playerid, NOTIFICATION_WARNING, sprintf("Mohon menunggu %d detik untuk mengirim hotline ke factions kembali", AccountData[playerid][pHotlineTime] - gettime()));
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

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_EMS, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Panggilan Darurat Rumah Sakit",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Rumah Sakit dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Rumah Sakit:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime())
	{
		ShowTDN(playerid, NOTIFICATION_WARNING, sprintf("Mohon menunggu %d detik untuk mengirim hotline factions kembali!", AccountData[playerid][pHotlineTime] - gettime()));
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

    if(isnull(inputtext)) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat diisi kosong!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");

    if(IsNumeric(inputtext)) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat diisi angka!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");
    
    if(strlen(inputtext) > 128) return Dialog_Show(playerid, CALLCENTER_PEMDA, DIALOG_STYLE_INPUT, ""RED_E"CHAXW TEATER "WHITE"- Call Center Pemerintah",
    "Error: Tidak dapat lebih dari 128 characters!\nMasukkan kendala anda yang ingin dilaporkan kepada pihak Pemerintah dibawah ini\
    \nJelaskan detail dan kendala yang sedang kamu alami dan ingin lapor ke Pemerintah:", "Kirim", "Batal");
    
    if(AccountData[playerid][pHotlineTime] >= gettime())
	{
		ShowTDN(playerid, NOTIFICATION_WARNING, sprintf("Mohon menunggu %d detik untuk mengirim hotline factions kembali!", AccountData[playerid][pHotlineTime] - gettime()));
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

        new daystring[8], monthyearstring[16], timestring[16];
        new hours, minutes, seconds, days, months, years;
        
        getdate(years, months, days);
        gettime(hours, minutes, seconds);

        // Format Hari
        format(daystring, sizeof daystring, "%02d", days);

        // Format Bulan Tahun
        format(monthyearstring, sizeof monthyearstring, "%s_%02d", MonthName[months - 1], years % 100);

        // Format waktu
        format(timestring, sizeof timestring, "%02d:%02d", hours, minutes);

        // Update TextDraw
        PlayerTextDrawSetString(playerid, IphoneNyaNih[playerid][9], timestring);
        PlayerTextDrawSetString(playerid, IphoneNyaNih[playerid][10], monthyearstring);
        PlayerTextDrawSetString(playerid, IphoneNyaNih[playerid][11], daystring);
    }
    return 1;
}
