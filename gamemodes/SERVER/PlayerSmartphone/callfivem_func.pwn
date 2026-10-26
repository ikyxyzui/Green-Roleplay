#include <YSI\y_hooks>

new CallText[MAX_PLAYERS][14];

stock UpdateNumber(playerid, text[])
{
    new str[32];
    format(str, sizeof(str), "%s", text);
    PlayerTextDrawSetString(playerid, PhoneCallGuiReal[playerid][0], str);
    PlayerTextDrawShow(playerid, PhoneCallGuiReal[playerid][0]);
    return 1;
}