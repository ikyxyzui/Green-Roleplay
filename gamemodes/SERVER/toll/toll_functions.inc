#include <YSI\y_hooks>

//SCRIPT BY PUTRAX DEV

enum __g_TollDetails
{
	Float:TollGatePos[6],
	Float:TollTriggerPos[3],
	Float:TollRotation
};

new Float:__g_TollTriggers[][__g_TollDetails] =
{
    {{56.546, -1530.120, 5.232, -0.000037, -90.0, -97.599891}, {59.5016,-1526.0323,5.4025}, 0.0},
    {{55.905, -1534.619, 5.254, -0.000030, -90.0, 82.400024}, {52.985,-1537.697,5.129}, 719.0},
    {{-25.039924, -1339.272094, 10.852235, 0.000000, 89.100021, 309.000000}, {-14.9647,-1335.6509,11.0248}, 0.0},
    {{-4.102748, -1365.542358, 10.624594, 0.000000, 89.100021, 489.000000}, {-13.8000,-1369.1793,10.8746}, 719.0},
    {{-74.305847, -890.712097, 15.579442, 0.000000, 449.899963, 152.799804}, {-72.5618,-879.5658,15.1373}, 0.0},
    {{-94.083129, -930.557922, 19.380533, 0.000000, 449.899963, 332.799804}, {-95.8599,-941.7166,20.7592}, 719.0},
    {{-968.081909, -310.405212, 36.639663, 0.000000, 89.900054, -12.800007}, {-962.5145,-300.0709,36.4171}, 0.0},
    {{-962.110168, -351.644012, 36.373577, 0.000000, 89.900054, 168.699890}, {-967.7982,-361.3247,36.1363}, 719.0},
    {{537.994, 458.355, 19.132, 0.000000, -90.400062, 33.099998}, {538.775,452.345,18.929}, 0.0},
    {{499.210, 492.176, 19.132, 0.000000, -90.400062, 213.100006}, {498.146,498.309,18.929}, 719.0},
    {{537.994, 458.355, 19.132, 0.000000, -89.999984, -16.000000}, {538.775,452.345,18.929}, 0.0},
    {{-165.028930, 405.645111, 11.996716, 0.000000, -89.999984, 164.000000}, {-159.7611,411.3677,12.0781}, 719.0},
    {{-2680.536132, 1285.095825, 55.276363, 0.000000, 90.000000, 0.000000}, {-2677.2004,1273.5281,55.4297}, 0.0}, //kanan sf - bayside
    {{-2698.075195, 1264.555541, 55.296360, 0.000000, 90.000000, 720.000000}, {-2695.0632,1276.2734,55.4297}, 719.0}, //kiri sf - bayside
    {{1720.468, 504.312, 29.177, 0.000000, 450.000000, 340.000000}, {1724.835,506.993,29.004}, 360.0}, //kiri LS - LV
    {{1741.087, 496.178, 29.212, 0.000000, 450.000000, 520.000000}, {1736.080,493.256,29.404}, 360.0} //kanan ls- lv
};

new STREAMER_TAG_OBJECT:TollGate[sizeof(__g_TollTriggers)],
    STREAMER_TAG_AREA:TollGateArea[sizeof(__g_TollTriggers)],
    bool:TollGateOpened[sizeof(__g_TollTriggers)];

forward OnTollPaid(tollid);
public OnTollPaid(tollid)
{
    if(!TollGateOpened[tollid]) return 0;

    MoveDynamicObject(TollGate[tollid], __g_TollTriggers[tollid][TollGatePos][0], __g_TollTriggers[tollid][TollGatePos][1], __g_TollTriggers[tollid][TollGatePos][2], 0.15, __g_TollTriggers[tollid][TollGatePos][3], __g_TollTriggers[tollid][TollGatePos][4], __g_TollTriggers[tollid][TollGatePos][5]);
    TollGateOpened[tollid] = false;
    return 1;
}

hook OnGameModeInit()
{
    for(new x; x < sizeof(__g_TollTriggers); x++)
    {
        CreateDynamicPickup(19792, 23, __g_TollTriggers[x][TollTriggerPos][0], __g_TollTriggers[x][TollTriggerPos][1], __g_TollTriggers[x][TollTriggerPos][2] - 0.40, 0, 0, -1, 30.00, -1, 0);
        CreateDynamic3DTextLabel("[ "WHITE"(KLAKSON) "YELLOW"di titik ini untuk akses gerbang toll "GREEN"]", Y_GREEN, __g_TollTriggers[x][TollTriggerPos][0], __g_TollTriggers[x][TollTriggerPos][1], __g_TollTriggers[x][TollTriggerPos][2] + 0.25, 10.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, 0, 0, -1, 10.0, -1, 0);
        
        TollGateArea[x] = CreateDynamicSphere(__g_TollTriggers[x][TollTriggerPos][0], __g_TollTriggers[x][TollTriggerPos][1], __g_TollTriggers[x][TollTriggerPos][2], 5.5, 0, 0, -1);
        TollGate[x] = CreateDynamicObject(968, __g_TollTriggers[x][TollGatePos][0], __g_TollTriggers[x][TollGatePos][1], __g_TollTriggers[x][TollGatePos][2], __g_TollTriggers[x][TollGatePos][3], __g_TollTriggers[x][TollGatePos][4], __g_TollTriggers[x][TollGatePos][5], 0, 0, -1, 200.00, 200.00);
        TollGateOpened[x] = false;
    }
    return 1;
}

hook OnPlayerEnterDynArea(playerid, STREAMER_TAG_AREA:areaid)
{
    for(new x; x < sizeof(__g_TollTriggers); x++)
    {
        if(areaid == TollGateArea[x])
        {
            GameTextForPlayer(playerid, "~b~TOLL GATE~n~~w~PRESS ~y~'HORN BUTTON' ~w~OR USE ~y~'/paytoll'", 6500, 4);
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys & KEY_CROUCH && GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
    {
        for(new x; x < sizeof(__g_TollTriggers); x++)
        {
            if(IsPlayerInDynamicArea(playerid, TollGateArea[x]))
            {
                 
                if(!TollGateOpened[x])
                {
                    if(AccountData[playerid][pOnDuty] && (AccountData[playerid][pFaction] == 1 || AccountData[playerid][pFaction] == 2))
                    {
                        ShowTDN(playerid, NOTIFICATION_INFO, "Petugas penegak hukum dan pemerintahan tidak dikenakan biaya tol.");
                    }
                    else
                    {
                        if(AccountData[playerid][pMoney] < 100) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memuliki cukup uang untuk membayar tol! ($80)");

                        TakePlayerMoneyEx(playerid, 100);
                        ShowItemBox(playerid, "Cash", "Removed $80x", 1212, 5);
                        ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membayar biaya tol sebesar ~g~$1.00.");
                    }

                    TollGateOpened[x] = true;
                    MoveDynamicObject(TollGate[x], __g_TollTriggers[x][TollGatePos][0], __g_TollTriggers[x][TollGatePos][1], __g_TollTriggers[x][TollGatePos][2] + 0.1, 0.15, __g_TollTriggers[x][TollGatePos][3], __g_TollTriggers[x][TollRotation], __g_TollTriggers[x][TollGatePos][5]);
                    
                    SetTimerEx("OnTollPaid", 6500, false, "i", x);
                    AccountData[playerid][pTempValue2] = -1;
                    PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
                }
            }
        }
    }
    return 1;
}

CMD:paytoll(playerid, params[])
{
    for(new x; x < sizeof(__g_TollTriggers); x++)
    {
        if(IsPlayerInDynamicArea(playerid, TollGateArea[x]))
        {
            if(!TollGateOpened[x])
            {
                if(AccountData[playerid][pOnDuty] && (AccountData[playerid][pFaction] == 1 || AccountData[playerid][pFaction] == 2))
                {
                    ShowTDN(playerid, NOTIFICATION_INFO, "Petugas penegak hukum dan pemerintahan tidak dikenakan biaya tol.");
                }
                else
                {
                    if(AccountData[playerid][pMoney] < 100) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak memuliki cukup uang untuk membayar tol! ($80)");

                    TakePlayerMoneyEx(playerid, 100);
                    ShowItemBox(playerid, "Cash", "Removed $80x", 1212, 5);
                    ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membayar biaya tol sebesar ~g~$1.00.");
                }

                TollGateOpened[x] = true;
                MoveDynamicObject(TollGate[x], __g_TollTriggers[x][TollGatePos][0], __g_TollTriggers[x][TollGatePos][1], __g_TollTriggers[x][TollGatePos][2] + 0.1, 0.15, __g_TollTriggers[x][TollGatePos][3], __g_TollTriggers[x][TollRotation], __g_TollTriggers[x][TollGatePos][5]);
                
                SetTimerEx("OnTollPaid", 6500, false, "i", x);
                AccountData[playerid][pTempValue2] = -1;
                PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
            }
        }
    }
    return 1;
}