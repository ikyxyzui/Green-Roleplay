#include <YSI\y_hooks>


//Jewelry Store
#define JewelryHack_Input (15312)
new bool:JewelryHack_IsOpened;
new JewelryHack_Hack[6];
new JewelryHack_Command[50];
new bool:JewelryHack_CommandRunning;
new bool:JewelryHack_CommandChecked;
new JewelryHack_TimerCount;
new JewelryHack_Timer;
new JewelryHack_HackSuccess;
new bool:JewelryHack_Alarm;
new JewelryHack_Player;

//Jewelry Store Area
new Jewelry_Robbed[24];
new Text3D:Jewelry_RobbedText[24];
new Float:Jewelry_RobArea[24][3] = {
    {963.3287, -1470.1110, 13.8521},
    {963.2708, -1466.1947, 13.8521},
    {963.3546, -1462.2048, 13.8521},
    {966.3413, -1462.2821, 13.8521},
    {966.3499, -1466.2981, 13.8521},
    {966.3652, -1470.0925, 13.8521},
    {969.6666, -1467.0049, 13.8521},
    {969.6389, -1462.9927, 13.8521},
    {969.6581, -1458.9386, 13.8521},
    {972.6834, -1458.9669, 13.8521},
    {972.6473, -1463.1176, 13.8521},
    {972.7037, -1467.1292, 13.8521},
    {976.3317, -1470.0948, 13.8521},
    {976.3176, -1466.0374, 13.8521},
    {976.3005, -1462.0776, 13.8521},
    {979.3088, -1462.0653, 13.8521},
    {979.3423, -1466.2300, 13.8521},
    {979.3350, -1470.1029, 13.8521},
    {982.6064, -1467.2024, 13.8521},
    {982.6147, -1463.1522, 13.8521},
    {982.6365, -1458.9709, 13.8521},
    {985.6215, -1458.9683, 13.8521},
    {985.6393, -1463.0977, 13.8521},
    {985.6312, -1466.9940, 13.8521}
};
new Float: Jewelry_ChangeArea[3][3] = {
    {297.5253,-169.6326,1.5781},
    {-2434.1377,2293.4856,4.9844},
    {-300.4551,2658.3723,63.1989}
};

//Jewelry Store (Player)
new isRobbing_Jewelry[MAX_PLAYERS];
new isHaveJewelry[MAX_PLAYERS];
new isCoordinat_ChangeJewelry[MAX_PLAYERS];

// AREA JEWEL
stock LoadAllJewelryRobArea()
{
    for(new i; i < 3; i++) CreateDynamic3DTextLabel("Untuk menukarkan jewelry\n{32ff24}'ALT'", -1, Jewelry_ChangeArea[i][0], Jewelry_ChangeArea[i][1], Jewelry_ChangeArea[i][2], 1.5);
    for(new i; i < 24; i++) Jewelry_Robbed[i] = 2;
    for(new i; i < 24; i++) Jewelry_RobbedText[i] = CreateDynamic3DTextLabel("{32ff24}Filled", -1, Jewelry_RobArea[i][0], Jewelry_RobArea[i][1], Jewelry_RobArea[i][2], 0.8);
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(PRESSED(KEY_WALK)) //ALT
    {
        if(GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
        {
            if(IsPlayerInRangeOfPoint(playerid, 0.5, 990.8473,-1463.8655,13.8521))
            {
                if(JewelryHack_IsOpened == true) return 1;

                ShowJewelryHack(playerid);
                JewelryHack_IsOpened = true;
            }

            for(new i; i < 24; i++) 
            {
                if(IsPlayerInRangeOfPoint(playerid, 1, Jewelry_RobArea[i][0], Jewelry_RobArea[i][1], Jewelry_RobArea[i][2]))
                {
                    if(JewelryHack_IsOpened != false) return 1; //seseorang masih sedang membuka hack
                    if(Jewelry_Robbed[i] != 1) return 1;
                    if(isRobbing_Jewelry[playerid] == 1) return 1;

                    ApplyAnimation(playerid,"CAR_CHAT","CAR_Sc4_BL",4.0,1,1,1,0,0,0);
                    isRobbing_Jewelry[playerid] = 1;

                    SetTimerEx("RobJewelry", 15000, false, "ii", playerid, i);
                    return 1;
                }
            }

            for(new i; i < 3; i++) 
            {
                if(IsPlayerInRangeOfPoint(playerid, 1.5, Jewelry_ChangeArea[i][0], Jewelry_ChangeArea[i][1], Jewelry_ChangeArea[i][2]))
                {
                    if(isHaveJewelry[playerid] == 0) return 1;

                    new hargaJewelry = 5000; //ini contoh
                    new totalTukaran = isHaveJewelry[playerid] * hargaJewelry; 

                    //berikan logika untuk memberikan uang
                    GivePlayerMoney(playerid, totalTukaran);
                    AccountData[playerid][pMoney] += totalTukaran; //contoh dalam inferno
                    OnPlayerUpdateAccountsPer(playerid, "pMoney", AccountData[playerid][pMoney]); //contoh dalam inferno

                    new tks[200];
                    format(tks, sizeof(tks), "{e1c900}Anda berhasil mendapatkan {32ff24}%d", totalTukaran);
                    SendClientMessage(playerid, -1, tks);

                    RemovePlayerAttachedObject(playerid, 8);
                    isHaveJewelry[playerid] = 0;
                    isCoordinat_ChangeJewelry[playerid] = 0;
                    return 1;
                }
            }
        }
    }

    if(PRESSED(KEY_FIRE))
    {
        if(GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
        {
            for(new i; i < 24; i++) 
            {
                if(IsPlayerInRangeOfPoint(playerid, 1, Jewelry_RobArea[i][0], Jewelry_RobArea[i][1], Jewelry_RobArea[i][2]))
                {
                    if(JewelryHack_IsOpened != false) return 1; //seseorang masih sedang membuka hack
                    if(GetPlayerWeapon(playerid) != WEAPON_BAT) return 1;
                    if(Jewelry_Robbed[i] != 2) return 1;

                    UpdateDynamic3DTextLabelText(Jewelry_RobbedText[i], -1, "{ffe000}'ALT'");
                    Jewelry_Robbed[i] = 1; //pecah

                    if(JewelryHack_Alarm != false) //alarm blom mati
                    {
                        SendClientMessageToAll(-1, "{db7b00}============ PERHATIAN ============");
                        SendClientMessageToAll(-1, "Terjadi perampokan di toko jewelry"); 
                        SendClientMessageToAll(-1, "{db1700}Catatan: {ffffff}Seluruh warga CHAXW TEATER harap menjauh dari lokasi perampokan!"); 
                        SendClientMessageToAll(-1, "{db7b00}===================================");
                        JewelryHack_Alarm = false;
                        SetTimer("JewelryAlarmDelay", 1800000, false); // 30 menit = 1800 detik * 1000
                    }

                    return 1;
                }
            }
        }
    }
    return 1;
}

stock GameModeClearJewelry()
{
    format(JewelryHack_Command, 50, "_");
    JewelryHack_IsOpened = false;
    for(new i; i < 6; i++) JewelryHack_Hack[i] = 0; //1 = berhasil, 0 = gagal / belum
    JewelryHack_Timer = 0;
    JewelryHack_HackSuccess = 0;
    JewelryHack_TimerCount = 0;
    JewelryHack_Timer = -1;
    JewelryHack_CommandRunning = false;
    JewelryHack_CommandChecked = false;
    JewelryHack_Alarm = true; //alarm masih nyala
    JewelryHack_Player = -1;
}

stock OnPlayerUpdateAccountsPer(playerid, const field[], value)
{
    // Misal update uang (pMoney) ke database / file
    // Ini bisa kamu sesuaikan sama sistem penyimpanan kamu

    if(!IsPlayerConnected(playerid)) return 0;

    // Kalau sistemnya pake AccountData array
    if(!strcmp(field, "pMoney", true))
    {
        AccountData[playerid][pMoney] = value;
    }

    // Tambahin field lain kalau perlu (pBank, pScore, dsb)
    return 1;
}

stock ClearJewelryHackDisconnect(playerid)
{
    format(JewelryHack_Command, 50, "_");
    JewelryHack_IsOpened = false;
    for(new i; i < 6; i++) JewelryHack_Hack[i] = 0; //1 = berhasil, 0 = gagal / belum
    JewelryHack_Timer = 0;
    JewelryHack_HackSuccess = 0;
    JewelryHack_TimerCount = 0;
    KillTimer(JewelryHack_Timer);
    JewelryHack_Timer = -1;
    JewelryHack_CommandRunning = false;
    JewelryHack_CommandChecked = false;
    JewelryHack_Player = -1;

    for(new i; i < 9; i++) PlayerTextDrawDestroy(playerid, JewelryHackPTD[playerid][i]);
    for(new i; i < 11; i++) TextDrawHideForPlayer(playerid, JewelryHackTD[i]);
    CancelSelectTextDraw(playerid);
}

stock ClearFailJewelryHack()
{
    for(new i; i < 6; i++) JewelryHack_Hack[i] = 0;
    JewelryHack_Timer = 0;
    JewelryHack_HackSuccess = 0;
    JewelryHack_TimerCount = 0;
    JewelryHack_Timer = -1;
    JewelryHack_CommandRunning = false;
    JewelryHack_CommandChecked = false;

    // for(new i = 0; i < 9; i++) 
    // {
    //     PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][i], "_");
    //     PlayerTextDrawHide(playerid, JewelryHackPTD[playerid][i]);
    // }
}

stock ShowJewelryHack(playerid)
{
    LoadPlayerJewelryHackTD(playerid);
    for(new i; i < 11; i++) TextDrawShowForPlayer(playerid, JewelryHackTD[i]);
    SelectTextDraw(playerid, -1); //putih
}

stock LoadPlayerJewelryHackTD(playerid)
{
    JewelryHackPTD[playerid][0] = CreatePlayerTextDraw(playerid, 192.000000, 133.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][0], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][0], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][0], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][0], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][0], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][0], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][0], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][0], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][0], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][0], 0);

    JewelryHackPTD[playerid][8] = CreatePlayerTextDraw(playerid, 192.000000, 133.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][8], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][8], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][8], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][8], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][8], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][8], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][8], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][8], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][8], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][8], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][8], 0);

    JewelryHackPTD[playerid][1] = CreatePlayerTextDraw(playerid, 192.000000, 146.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][1], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][1], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][1], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][1], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][1], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][1], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][1], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][1], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][1], 0);

    JewelryHackPTD[playerid][2] = CreatePlayerTextDraw(playerid, 192.000000, 160.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][2], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][2], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][2], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][2], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][2], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][2], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][2], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][2], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][2], 0);

    JewelryHackPTD[playerid][3] = CreatePlayerTextDraw(playerid, 192.000000, 174.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][3], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][3], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][3], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][3], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][3], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][3], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][3], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][3], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][3], 0);

    JewelryHackPTD[playerid][4] = CreatePlayerTextDraw(playerid, 192.000000, 189.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][4], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][4], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][4], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][4], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][4], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][4], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][4], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][4], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][4], 0);

    JewelryHackPTD[playerid][5] = CreatePlayerTextDraw(playerid, 192.000000, 203.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][5], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][5], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][5], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][5], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][5], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][5], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][5], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][5], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][5], 0);

    JewelryHackPTD[playerid][6] = CreatePlayerTextDraw(playerid, 192.000000, 218.000000, ""); //status
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][6], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][6], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][6], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][6], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][6], 12458495);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][6], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][6], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][6], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][6], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][6], 0);

    JewelryHackPTD[playerid][7] = CreatePlayerTextDraw(playerid, 196.000000, 279.000000, "");
    PlayerTextDrawFont(playerid, JewelryHackPTD[playerid][7], 1);
    PlayerTextDrawLetterSize(playerid, JewelryHackPTD[playerid][7], 0.179166, 1.149999);
    PlayerTextDrawTextSize(playerid, JewelryHackPTD[playerid][7], 400.000000, 17.000000);
    PlayerTextDrawSetOutline(playerid, JewelryHackPTD[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, JewelryHackPTD[playerid][7], 0);
    PlayerTextDrawAlignment(playerid, JewelryHackPTD[playerid][7], 1);
    PlayerTextDrawColor(playerid, JewelryHackPTD[playerid][7], 353703423);
    PlayerTextDrawBackgroundColor(playerid, JewelryHackPTD[playerid][7], 255);
    PlayerTextDrawBoxColor(playerid, JewelryHackPTD[playerid][7], 50);
    PlayerTextDrawUseBox(playerid, JewelryHackPTD[playerid][7], 0);
    PlayerTextDrawSetProportional(playerid, JewelryHackPTD[playerid][7], 1);
    PlayerTextDrawSetSelectable(playerid, JewelryHackPTD[playerid][7], 0);
}

stock JewelryHackAllDone()
{
    for(new i = 0; i < 5; i++)
    {
        if(JewelryHack_Hack[i] != 1)
        {
            return 0;
        }
    }
    return 1;
}

forward StartHackJewelry(playerid);
public StartHackJewelry(playerid)
{
    if(strcmp("/close", JewelryHack_Command)  == 0)
    {
        ClearJewelryHackDisconnect(playerid);
        return 1;
    }

    if(JewelryHack_CommandChecked != true) return 1;
    if(JewelryHack_CommandRunning != false) return 1;

    if(strcmp("/CHAXW PROJECTDIAMON", JewelryHack_Command) != 0)
    {
        ClearFailJewelryHack();
        return PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][8], "~r~Wrong_Command_-_Try_Again");
    }

    if(JewelryHack_Alarm == false)
    {
        ClearFailJewelryHack();
        return PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][8], "~r~The_alarm_has_already_been_turned_off_for_30_minutes.");
    }

    JewelryHack_Player = playerid; //save pemain yang sedang ngehack
    JewelryHack_Timer = SetTimerEx("TimerHackJewelry", 1000, true, "i", playerid);

    PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][8], "Hacking...");
    format(JewelryHack_Command, 50, "_");
    PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][7], "_");
    JewelryHack_CommandRunning = true;
    return 1;
}

forward TimerHackJewelry(playerid);
public TimerHackJewelry(playerid)
{
    JewelryHack_TimerCount++;

    if(JewelryHack_TimerCount >= 10)
    {
        if(JewelryHackAllDone())
        {
            KillTimer(JewelryHack_Timer);
            PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][6], "The_alarm_is_turned_~r~off_for_30_minutes."); 
            PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][JewelryHack_HackSuccess], "Hacking..._Success");
            JewelryHack_Alarm = false; //alarm mati

            SetTimer("JewelryAlarmDelay", 1800000, false); // 30 menit = 1800 detik * 1000

            ClearFailJewelryHack();
        }
        else
        {
            JewelryHack_TimerCount = 0;

            if (JewelryHack_HackSuccess == 0)
            {
                if (JewelryHack_Hack[0] == 0)
                {
                    new rand = random(999);

                    if (rand == 1 || rand % 2 == 0)
                    {
                        JewelryHack_Hack[0] = 0;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][8], "Hacking..._~r~Failed_-_Try_Again");
                        KillTimer(JewelryHack_Timer);
                        ClearFailJewelryHack();
                        return 1;
                    }
                    else
                    {
                        JewelryHack_Hack[0] = 1;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][8], "Hacking..._Success");
                        JewelryHack_HackSuccess = 1;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][1], "Hacking...");
                    }
                }
            }
            else
            {
                if (JewelryHack_Hack[JewelryHack_HackSuccess] == 0)
                {
                    new rand = random(999);

                    if (rand == 1 || rand % 2 == 0)
                    {
                        JewelryHack_Hack[JewelryHack_HackSuccess] = 0;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][JewelryHack_HackSuccess], "Hacking..._~r~Failed_-_Try_Again");
                        KillTimer(JewelryHack_Timer);
                        ClearFailJewelryHack();
                        return 1;
                    }
                    else
                    {
                        JewelryHack_Hack[JewelryHack_HackSuccess] = 1;
                        new new_JewelryHack_HackSuccess = JewelryHack_HackSuccess + 1;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][JewelryHack_HackSuccess], "Hacking..._Success");

                        JewelryHack_HackSuccess = new_JewelryHack_HackSuccess;
                        PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][new_JewelryHack_HackSuccess], "Hacking...");
                    }
                }

            }
        }
    }
    return 1;
}

forward JewelryAlarmDelay();
public JewelryAlarmDelay()
{
    JewelryHack_Alarm = true; //alarm masih nyala
    for(new i; i < 24; i++) Jewelry_Robbed[i] = 2;
    for(new i; i < 24; i++) UpdateDynamic3DTextLabelText(Jewelry_RobbedText[i], -1, "{32ff24}Filled");
}

forward RobJewelry(playerid, jwID);
public RobJewelry(playerid, jwID)
{
    UpdateDynamic3DTextLabelText(Jewelry_RobbedText[jwID], -1, "{e10000}Empty");
    Jewelry_Robbed[jwID] = 0; //kosong

    isRobbing_Jewelry[playerid] = 0;
    isHaveJewelry[playerid]++;

    ClearAnimations(playerid, true);
    StopLoopingAnim(playerid);
    SetPlayerSpecialAction(playerid, SPECIAL_ACTION_NONE);

    SetPlayerAttachedObject(playerid, 8, 11745, 1, 0.038000, -0.099001, 0.003001, -108.399993, 17.399995, 50.399974, 0.920999, 1.393999, 1.000000);

    if(isCoordinat_ChangeJewelry[playerid] != 1)
    {
        new randCP = random(3);
        
        switch(randCP)
        {
            case 0: SetPlayerCheckpoint(playerid, 297.5253,-169.6326,1.5781, 5.0);
            case 1: SetPlayerCheckpoint(playerid, -2434.1377,2293.4856,4.9844, 5.0);
            case 2: SetPlayerCheckpoint(playerid, -300.4551,2658.3723,63.1989, 5.0);
        }
    }

    isCoordinat_ChangeJewelry[playerid] = 1;

    SendClientMessage(playerid, -1, "{e1c900}Anda mendapatkan {32ff24}+6 Jewelry");
    SendClientMessage(playerid, -1, "{e1c900}Untuk menukarkannya, ikuti checkpoint");
}

hook OnClickDynamicTextDraw(playerid, Text:textid)
{
    if(textid == JewelryHackTD[7])
    {
        ShowPlayerDialog(playerid, JewelryHack_Input, DIALOG_STYLE_INPUT, "{32ff24}Command", "Masukkan Command:", "Terapkan", "Batal");
    }

    if(textid == JewelryHackTD[8])
    {
        if(JewelryHack_CommandChecked != false) return 1;

        for(new i = 0; i < 9; i++) 
        {
            if(i == 8) 
            {
                PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][i], "Command_Check...");
            }
            else if(i == 7)
            {
                PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][i], JewelryHack_Command);
            }
            else 
            {
                PlayerTextDrawSetString(playerid, JewelryHackPTD[playerid][i], "_");
            }
            PlayerTextDrawShow(playerid, JewelryHackPTD[playerid][i]);
        }

        JewelryHack_CommandChecked = true;
        SetTimerEx("StartHackJewelry", 5000, false, "i", playerid);
    }
    return 1;
}