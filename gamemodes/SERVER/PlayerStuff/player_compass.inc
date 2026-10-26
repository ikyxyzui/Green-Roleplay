#include <YSI\y_hooks>

new PlayerText: compastd[MAX_PLAYERS][21];

hook OnPlayerConnect(playerid)
{
    compastd[playerid][0] = CreatePlayerTextDraw(playerid, 270.000, 705.000, "New textdraw");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][0], 0.300, 1.500);
    PlayerTextDrawAlignment(playerid, compastd[playerid][0], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][0], 1);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][0], 1);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][0], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][0], 1);

    compastd[playerid][1] = CreatePlayerTextDraw(playerid, 242.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][1], 154.000, 20.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][1], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][1], 93);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][1], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][1], 1);

    compastd[playerid][2] = CreatePlayerTextDraw(playerid, 340.000, -10.000, "I");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][2], 7.859, 3.599);
    PlayerTextDrawAlignment(playerid, compastd[playerid][2], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][2], 26);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][2], 11);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][2], 51);
    PlayerTextDrawFont(playerid, compastd[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][2], 1);

    compastd[playerid][3] = CreatePlayerTextDraw(playerid, 183.000, -10.000, "I");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][3], 7.019, 3.599);
    PlayerTextDrawAlignment(playerid, compastd[playerid][3], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][3], 11);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][3], 81);
    PlayerTextDrawFont(playerid, compastd[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][3], 1);

    compastd[playerid][4] = CreatePlayerTextDraw(playerid, 197.000, -10.000, "I");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][4], 7.019, 3.599);
    PlayerTextDrawAlignment(playerid, compastd[playerid][4], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][4], 11);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][4], 81);
    PlayerTextDrawFont(playerid, compastd[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][4], 1);

    compastd[playerid][5] = CreatePlayerTextDraw(playerid, 351.000, -10.000, "I");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][5], 4.729, 3.599);
    PlayerTextDrawAlignment(playerid, compastd[playerid][5], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][5], 11);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][5], 81);
    PlayerTextDrawFont(playerid, compastd[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][5], 1);

    compastd[playerid][6] = CreatePlayerTextDraw(playerid, 242.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][6], 154.000, 20.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][6], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][6], 59);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][6], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][6], 1);

    compastd[playerid][7] = CreatePlayerTextDraw(playerid, 320.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][7], 2.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][7], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][7], COLOR_GOLD);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][7], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][7], 1);

    compastd[playerid][8] = CreatePlayerTextDraw(playerid, 298.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][8], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][8], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][8], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][8], 1);

    compastd[playerid][9] = CreatePlayerTextDraw(playerid, 277.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][9], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][9], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][9], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][9], 1);

    compastd[playerid][10] = CreatePlayerTextDraw(playerid, 384.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][10], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][10], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][10], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][10], 1);

    compastd[playerid][11] = CreatePlayerTextDraw(playerid, 255.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][11], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][11], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][11], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][11], 1);

    compastd[playerid][12] = CreatePlayerTextDraw(playerid, 342.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][12], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][12], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][12], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][12], 1);

    compastd[playerid][13] = CreatePlayerTextDraw(playerid, 366.000, 9.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, compastd[playerid][13], -1.000, 3.000);
    PlayerTextDrawAlignment(playerid, compastd[playerid][13], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][13], 255);
    PlayerTextDrawFont(playerid, compastd[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][13], 1);

    compastd[playerid][14] = CreatePlayerTextDraw(playerid, 319.000, 16.000, "N");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][14], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][14], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][14], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][14], 1);

    compastd[playerid][15] = CreatePlayerTextDraw(playerid, 380.000, 16.000, "NW");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][15], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][15], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][15], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][15], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][15], 1);

    compastd[playerid][16] = CreatePlayerTextDraw(playerid, 362.000, 16.000, "100");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][16], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][16], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][16], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][16], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][16], 1);

    compastd[playerid][17] = CreatePlayerTextDraw(playerid, 339.000, 16.000, "52");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][17], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][17], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][17], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][17], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][17], 1);

    compastd[playerid][18] = CreatePlayerTextDraw(playerid, 295.000, 16.000, "80");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][18], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][18], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][18], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][18], 1);

    compastd[playerid][19] = CreatePlayerTextDraw(playerid, 273.000, 16.000, "125");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][19], 0.108, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][19], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][19], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][19], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][19], 1);

    compastd[playerid][20] = CreatePlayerTextDraw(playerid, 252.000, 16.000, "S");
    PlayerTextDrawLetterSize(playerid, compastd[playerid][20], 0.170, 0.699);
    PlayerTextDrawAlignment(playerid, compastd[playerid][20], 1);
    PlayerTextDrawColor(playerid, compastd[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, compastd[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, compastd[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, compastd[playerid][20], 150);
    PlayerTextDrawFont(playerid, compastd[playerid][20], 1);
    PlayerTextDrawSetProportional(playerid, compastd[playerid][20], 1);
}

/*GetPlayerDirection(playerid) {

    new direction[64], Float:rz;

	if(IsPlayerInAnyVehicle(playerid)) {
		GetVehicleZAngle(GetPlayerVehicleID(playerid), rz);
	}
	else {
		GetPlayerFacingAngle(playerid, rz);
	}

	if(rz >= 348.75 || rz < 11.25) direction = "N";
	else if(rz >= 326.25 && rz < 348.75) direction = "NNE";
	else if(rz >= 303.75 && rz < 326.25) direction = "NE";
	else if(rz >= 281.25 && rz < 303.75) direction = "ENE";
	else if(rz >= 258.75 && rz < 281.25) direction = "E";
	else if(rz >= 236.25 && rz < 258.75) direction = "ESE";
	else if(rz >= 213.75 && rz < 236.25) direction = "SE";
	else if(rz >= 191.25 && rz < 213.75) direction = "SSE";
	else if(rz >= 168.75 && rz < 191.25) direction = "S";
	else if(rz >= 146.25 && rz < 168.75) direction = "SSW";
	else if(rz >= 123.25 && rz < 146.25) direction = "SW";
	else if(rz >= 101.25 && rz < 123.25) direction = "WSW";
	else if(rz >= 78.75 && rz < 101.25) direction = "W";
	else if(rz >= 56.25 && rz < 78.75) direction = "WNW";
	else if(rz >= 33.75 && rz < 56.25) direction = "NW";
	else if(rz >= 11.5 && rz < 33.75) direction = "NNW";

    return direction;
}*/

/*GetPlayerCity(playerid)
{
    new Float:x;
    new Float:y;
    new Float:z;
    GetPlayerPos(playerid, x, y, z);

    new cities[3][ZoneInfoEnum] =
    {
        {-2997.47, -1213.91, -1115.58, 1659.68, -242.99, 900.0, "San Fierro"},
        {869.461, 2997.06, 596.349, 2993.87, -242.99, 900.0, "Las Venturas"},
        {44.6147, 2997.06, -2892.97, -768.027, -242.99, 900.0, "Los Santos"}
    };

    new cityName[64];
    for(new i=0; i<3; i++)
    {
        if(cities[i][zonePosx1] < x && cities[i][zonePosx2] > x)
        {
            if(cities[i][zonePosy1] < y && cities[i][zonePosy2] > y)
            {
                format(cityName,64,"%s",cities[i][ZoneName]);
            }
        }
    }
    return cityName;
}*/

Compass_Status(playerid, bool: status)
{
    if(status == true)
    {
        forex(i, 21)
        {
            PlayerTextDrawShow(playerid, compastd[playerid][i]);
        }
    }
    else if(status == false)
    {
        forex(i, 21)
        {
            PlayerTextDrawHide(playerid, compastd[playerid][i]);
        }
    }
}

/*Compass_Update(playerid)
{
    new zoneMain[32];

    GetPlayer2DZone(playerid, zoneMain, sizeof(zoneMain)); 

    PlayerTextDrawSetString(playerid, Compass[playerid][11], zoneMain);
    PlayerTextDrawSetString(playerid, Compass[playerid][12], GetPlayerCity(playerid));
    PlayerTextDrawSetString(playerid, Compass[playerid][10], GetPlayerDirection(playerid));
}*/
