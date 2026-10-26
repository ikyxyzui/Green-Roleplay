ptask PlayerUpdate[1000](playerid)
{
	if (AccountData[playerid][IsLoggedIn] && AccountData[playerid][pSpawned])
	{
		if(AccountData[playerid][newCitizen]) {
			new weap = GetPlayerWeaponEx(playerid);
			SetPlayerArmedWeapon(playerid, weap);
		}

	

		if(AccountData[playerid][pSpec] != -1)
		{
			new
				targetid = AccountData[playerid][pSpec];
		
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][1], sprintf("~g~%s_(%d)", ReturnName(targetid), targetid));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][2], sprintf("Cash:~y~_%s", FormatMoney(AccountData[targetid][pMoney])));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][3], sprintf("HP:~y~_%d.0", GetHealth(targetid)));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][4], sprintf("AM:~y~_%d.0", GetArmor(targetid)));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][5], sprintf("Int:~y~_%d_~w~WID:~y~_%d", GetPlayerInterior(targetid), GetPlayerVirtualWorld(targetid)));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][6], sprintf("Hungry:~y~_%d%%_~w~Thirst:~y~_%d%%", AccountData[targetid][pHunger] , AccountData[targetid][pThirst]));
			PlayerTextDrawSetString(playerid, SpectatorInfoTD[playerid][7], sprintf("FPS:~y~_%d_~w~Ping:~y~_%dms", GetPlayerFPS(targetid), GetPlayerPing(targetid)));
		}
		
		/* Anti Jetpack Hacks */
		if(GetPlayerSpecialAction(playerid) == SPECIAL_ACTION_USEJETPACK && !AccountData[playerid][pJetpack])
		{
			SendClientMessageToAllEx(X11_ARWIN, "AdmCmd: "YELLOW"%s(%d)"ARWIN1" telah ditendang dari server karena menggunakan Jetpack Hacks", ReturnName(playerid), playerid);
			KickEx(playerid);
		}
		if ((Anticheat_GetReportAmount(playerid, 6) > 0) && Anticheat_IsReportTimeExpired(playerid, 6))
        {
            Anticheat_ReduceReport(playerid, 6);
            Anticheat_IncreaseReportTime(playerid, 6);
        }
		/* FPS Info */
		if(AccountData[playerid][ToggleFPS])
		{
			PlayerTextDrawSetString(playerid, FPStextdraws[playerid][0], sprintf("~r~FPS:_~w~%d~n~~r~PL:_~w~%.2f", GetPlayerFPS(playerid), GetPlayerPacketLoss(playerid)));
			PlayerTextDrawShow(playerid, FPStextdraws[playerid][0]);
		}

		if(isRobbing_Jewelry[playerid] == 1)
    	{
        	ApplyAnimation(playerid,"CAR_CHAT","CAR_Sc4_BL",4.0,1,1,1,0,0,0);
		}
		if(AccountData[playerid][pNewBiePlayer] > 0)
   		{
			if(GetPlayerWeapon(playerid) >= 14 && GetPlayerWeapon(playerid) != 46)
			ResetPlayerWeaponsEx(playerid);
   		}
		if(AccountData[playerid][pLevel] < 4)//artinya kalau level dibawah 5 bakalan ke kick terkena anti cheat weapon hack
 		{
			if(GetPlayerWeapon(playerid) == 14)//id 25 sama dengan senjata shotgun
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 15)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 16)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 17)
			{
				ResetPlayerWeaponsEx(playerid);
			}
			if(GetPlayerWeapon(playerid) == 18)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 19)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 20)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 21)//id 38 sama dengan senjata minigun
			{	
				ResetPlayerWeaponsEx(playerid); 
			}
			if(GetPlayerWeapon(playerid) == 2)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 23)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 24)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 25)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 26)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 27)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 28)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 29)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 30)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 31)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 32)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 33)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 34)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 35)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 36)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 37)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 38)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 39)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 40)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 41)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 42)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 43)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
			if(GetPlayerWeapon(playerid) == 44)
			{
				ResetPlayerWeaponsEx(playerid);   
			}
		}
    
		/* Weapon Attachment */
		if(GetPVarInt(playerid, "LagiBeliSkin") == 0)
		{
			if(NetStats_GetConnectedTime(playerid) - WeaponTick[playerid] >= 250)
			{
				static weaponid, ammo, objectslot, count, index;

				for (new i = 2; i <= 7; i++) //Loop only through the slots that may contain the wearable weapons
				{
					GetPlayerWeaponData(playerid, i, weaponid, ammo);
					index = weaponid - 22;

					if (weaponid && ammo && !WeaponSettings[playerid][index][Hidden] && IsWeaponWearable(weaponid) && EditingWeapon[playerid] != weaponid)
					{
						objectslot = GetWeaponObjectSlot(weaponid);

						if (GetPlayerWeapon(playerid) != weaponid)
							SetPlayerAttachedObject(playerid, objectslot, GetWeaponModel(weaponid), WeaponSettings[playerid][index][Bone], WeaponSettings[playerid][index][Position][0], WeaponSettings[playerid][index][Position][1], WeaponSettings[playerid][index][Position][2], WeaponSettings[playerid][index][Position][3], WeaponSettings[playerid][index][Position][4], WeaponSettings[playerid][index][Position][5], 1.0, 1.0, 1.0);

						else if (IsPlayerAttachedObjectSlotUsed(playerid, objectslot)) RemovePlayerAttachedObject(playerid, objectslot);
					}
				}
				for (new i = 6; i <= 8; i++) if (IsPlayerAttachedObjectSlotUsed(playerid, i))
				{
					count = 0;

					for (new j = 22; j <= 38; j++) if (PlayerHasWeapon(playerid, j) && GetWeaponObjectSlot(j) == i)
						count++;

					if(!count) RemovePlayerAttachedObject(playerid, i);
				}
				WeaponTick[playerid] = NetStats_GetConnectedTime(playerid);
			}
		}

		/* Anti Money Hack */
		if(GetPlayerMoney(playerid) != AccountData[playerid][pMoney])
		{
			ResetPlayerMoney(playerid);
			GivePlayerMoney(playerid, AccountData[playerid][pMoney]);
		}

		/* Pengurangan Data */
		if(AccountData[playerid][pJail] <= 0) // jika sedang tidak dipenjara admin
		{
			if(AccountData[playerid][pStress] > 100)
			{
				AccountData[playerid][pStress] = 100;
			}
			if(AccountData[playerid][pStress] < 0)
			{
				AccountData[playerid][pStress] = 0;
			}
			if(AccountData[playerid][pHunger] > 100)
			{
				AccountData[playerid][pHunger] = 100;
			}
			if(AccountData[playerid][pHunger] < 0)
			{
				AccountData[playerid][pHunger] = 0;
			}
			if(AccountData[playerid][pThirst] > 100)
			{
				AccountData[playerid][pThirst] = 100;
			}
			if(AccountData[playerid][pThirst] < 0)
			{
				AccountData[playerid][pThirst] = 0;
			}
		}

		/* Textdraw Death */
		if(AccountData[playerid][pInjured])
		{
			if(AccountData[playerid][pInjuredTime] > 0)
			{
				static hours, minutes, seconds;
				GetElapsedTime(AccountData[playerid][pInjuredTime] --, hours, minutes, seconds);
				PlayerTextDrawSetString(playerid, ATRP_Injured[playerid][0], sprintf("TAK SADARKAN DIRI DALAM: ~r~%02d~w~ MENIT ~r~%02d~w~ DETIK", minutes, seconds));
				PlayerTextDrawShow(playerid, ATRP_Injured[playerid][0]);
				
				ApplyAnimationEx(playerid, "WUZI", "CS_DEAD_GUY", 4.1, 0, 0, 0, 1, 0, 1);
				SetPlayerHealthEx(playerid, 99999);
			
				if(!AccountData[playerid][pInjuredTime]) 
				{
					SetPlayerHealthEx(playerid, 100.0);
					AccountData[playerid][pHunger] = 100;
					AccountData[playerid][pThirst] = 100;
					AccountData[playerid][pStress] = 0;
					AccountData[playerid][pInjured] = 0;
					AccountData[playerid][pInjuredTime] = 0;
					TakeMoney(playerid, 15000);

					SendClientMessageEx(playerid, -1, "[i] Anda koma dan dilarikan kerumah sakit, Anda Membayar Rumah Sakit Sebesar 15.000");

					SetPlayerPositionEx(playerid, 907.8289, 711.1892, 5010.3184, 358.7794, 5000);
					SetPlayerVirtualWorldEx(playerid, 5);
					SetPlayerInteriorEx(playerid, 5);
				}
			}
		}

		/* Pengurangan Data 2 */
		if(AccountData[playerid][pInjured] == 0 && AccountData[playerid][pGender] != 0) 
		{
			PlayerTextDrawHide(playerid, ATRP_Injured[playerid][0]);

			if(AccountData[playerid][pStress] < 99)
			{
				TextDrawHideForPlayer(playerid, StressPurple[0]);
			}
			if(++ AccountData[playerid][pStressTime] >= 105 && GetPlayerVIPLevel(playerid) < 3)
			{
				if(AccountData[playerid][pInjured] != 1 && !IsPlayerInEvent(playerid))
				{
					if(!IsAUnstressArea(playerid))
					{
						AccountData[playerid][pStress]++;

						if(AccountData[playerid][pStress] >= 99)
						{
							TextDrawShowForPlayer(playerid, StressPurple[0]);
							SetPlayerDrunkLevel(playerid, 10000);
						}
					}
					else
					{
						AccountData[playerid][pStress] -= 10;

						if(AccountData[playerid][pStress] < 97)
						{
							SetPlayerDrunkLevel(playerid, 0);
							TextDrawHideForPlayer(playerid, StressPurple[0]);
						}
					}
				}
				AccountData[playerid][pStressTime] = 0;
			}
			if(++ AccountData[playerid][pHungerTime] >= 525)
			{
				if(AccountData[playerid][pHunger] > 0 && AccountData[playerid][pInjured] != 1 && !IsPlayerInEvent(playerid))
				{
					AccountData[playerid][pHunger] -= 5;
				}
				else if(AccountData[playerid][pHunger] <= 0 && AccountData[playerid][pInjured] != 1)
				{
					if(IsPlayerInAnyVehicle(playerid))
						RemovePlayerFromVehicle(playerid);
					SetPlayerHealth(playerid, 0.0);
				}
				AccountData[playerid][pHungerTime] = 0;
			}
			if(++ AccountData[playerid][pThirstTime] >= 500)
			{
				if(AccountData[playerid][pThirst] > 0 && AccountData[playerid][pInjured] != 1 && !IsPlayerInEvent(playerid))
				{
					AccountData[playerid][pThirst] -= 5;
				}
				else if(AccountData[playerid][pThirst] <= 0 && AccountData[playerid][pInjured] != 1)
				{
					if(IsPlayerInAnyVehicle(playerid))
						RemovePlayerFromVehicle(playerid);
					SetPlayerHealth(playerid, 0.0);
				}
				AccountData[playerid][pThirstTime] = 0;
			}
		}

		/* Admin Duty Timer */
		if(AccountData[playerid][pAdminDuty])
		{
			AccountData[playerid][aDutyTimer] ++;
		}

		/* Masker Label Update */
		if(AccountData[playerid][pMaskOn])
		{
			new Float:health, Float:armor;
			GetPlayerHealth(playerid, health);
			GetPlayerArmour(playerid, armor);
			if(IsValidDynamic3DTextLabel(AccountData[playerid][pMaskLabel]))
			{
				UpdateDynamic3DTextLabelText(AccountData[playerid][pMaskLabel], -1, sprintf("Mask #%d\nH: ["RED_E"%.2f"WHITE"] A: [%.2f]", AccountData[playerid][pMaskID], health, armor));
			}
		}

		/* Taser Update */
		if(AccountData[playerid][pStunned] > 0)
		{
			AccountData[playerid][pStunned]--;

			if(GetPlayerAnimationIndex(playerid) != 388)
				ApplyAnimation(playerid, "CRACK", "crckdeth4", 4.0, 0, 0, 0, 1, 0, 1);
			
			if(!AccountData[playerid][pStunned])
			{
				TogglePlayerControllable(playerid, 1);
				ShowPlayerFooter(playerid, "~w~Anda tidak lagi ~r~tersengat");
			}
		}
		if(GetPVarInt(playerid, "AllGuiStatus_Hide") == 0)
		{
			switch(AccountData[playerid][pHUDMode])
			{
				case 1: // Kiri
				{
					new Float:Health, Float:Armour, Float:Hunger, Float:Thirst, Float:Stress;
					
					Health = GetHealth(playerid) * 55.0/100;
					PlayerTextDrawTextSize(playerid, CHAXWHBE[playerid][41], Health, 4.5);
					PlayerTextDrawShow(playerid, CHAXWHBE[playerid][41]);

					Armour = GetArmor(playerid) * 55.0/100;
					PlayerTextDrawTextSize(playerid, CHAXWHBE[playerid][42], Armour, 4.5);
					PlayerTextDrawShow(playerid, CHAXWHBE[playerid][42]);

					Hunger = AccountData[playerid][pHunger] * 12.5/100;
					PlayerTextDrawTextSize(playerid, CHAXWHBE[playerid][22], Hunger, 15.5);
					PlayerTextDrawShow(playerid, CHAXWHBE[playerid][22]);

					Thirst = AccountData[playerid][pThirst] * 12.5/100;
					PlayerTextDrawTextSize(playerid, CHAXWHBE[playerid][23], Thirst, 15.5);
					PlayerTextDrawShow(playerid, CHAXWHBE[playerid][23]);

					Stress = AccountData[playerid][pStress] * 12.5/100;
					PlayerTextDrawTextSize(playerid, CHAXWHBE[playerid][24], Stress,  15.5);
					PlayerTextDrawShow(playerid, CHAXWHBE[playerid][24]);
				}
				case 2: // Tengah
				{
					new Healt, Armou, Float:Hunge, Float:Thirs, Float:Stres;

					Healt = GetHealth(playerid);
					PlayerTextDrawSetString(playerid, CHAXWHBE2[playerid][40], sprintf("%d%", Healt));

					Armou = GetArmor(playerid);
					PlayerTextDrawSetString(playerid, CHAXWHBE2[playerid][41], sprintf("%d%", Armou));

					Hunge = AccountData[playerid][pHunger];
					PlayerTextDrawSetString(playerid, CHAXWHBE2[playerid][42], sprintf("%d%", floatround(Hunge)));

					Thirs = AccountData[playerid][pThirst];
					PlayerTextDrawSetString(playerid, CHAXWHBE2[playerid][43], sprintf("%d%", floatround(Thirs)));

					Stres = AccountData[playerid][pStress];	
					PlayerTextDrawSetString(playerid, CHAXWHBE2[playerid][44], sprintf("%d%", floatround(Stres))); 
				}
			}
		}
		/* Good Mood Mode */
		if(AccountData[playerid][pGoodMood])
		{
			AccountData[playerid][pHunger] = 100;
			AccountData[playerid][pThirst] = 100;
			AccountData[playerid][pStress] = 0;
		}

		/* Enum Berat */
		if(AccountData[playerid][pBeratItem] <= 0)
		{
			AccountData[playerid][pBeratItem] = 0;
		}
		else if(AccountData[playerid][pBeratItem] > 50)
		{
			AccountData[playerid][pBeratItem] = 50;
		}

		/* Signal EMS */
		if(SignalExists[playerid] && SignalTimer[playerid] > 0)
		{
			SignalTimer[playerid] --;
			if(!SignalTimer[playerid])
			{
				SignalExists[playerid] = false;
				SignalTimer[playerid] = 0;
				SignalPos[playerid][0] = SignalPos[playerid][1] = SignalPos[playerid][2] = 0.0;
				Info(playerid, "Anda sudah dapat mengirim signal kepada EMS kembali!");
			}
		}

		/* Fixme */
		if(FixmeExists[playerid])
		{
			if(FixmeTime[playerid] != 0 && FixmeTime[playerid] <= gettime())
			{
				FixmeExists[playerid] = false;
				FixmeOption[playerid] = 0;
				FixmeTime[playerid] = 0;
				Info(playerid, "Tidak ada yang merespon fixme anda. Anda dapat mengajukannya kembali!");
			}
		}
	}
	return 1;
}

ptask OnlineTimerUpdate[1500](playerid)
{
	if(!AccountData[playerid][pSpawned])
		return 0;

	AccountData[playerid][OnlineTimer] ++;
	return 1;
}

ptask AlertNeeds_Player[180000](playerid)
{
	if(!AccountData[playerid][pSpawned])
		return 0;

	if(AccountData[playerid][pHunger] <= 20) {
		SendClientMessageEx(playerid, -1, ""VERONADOT"Karakter anda merasakan lapar // %d Persen", AccountData[playerid][pHunger]);
	}
	if(AccountData[playerid][pThirst] <= 20) {
		SendClientMessageEx(playerid, -1, ""VERONADOT"Karakter anda merasakan haus // %d Persen", AccountData[playerid][pThirst]);
	}
	if(AccountData[playerid][pStress] >= 90) {
		SendClientMessageEx(playerid, -1, ""VERONADOT"Karakter anda ingin mengalami stress // %d Persen", AccountData[playerid][pStress]);
	}
	return 1;
}

ptask ac_PlayerUpdate[1000](playerid)
{
	if(!AccountData[playerid][pSpawned] || !AccountData[playerid][IsLoggedIn]) 
		return 0;

	if (GetPlayerWeapon(playerid) != AccountData[playerid][pWeapon])
    {
        AccountData[playerid][pWeapon] = GetPlayerWeapon(playerid);

        if (AccountData[playerid][pWeapon] >= 1 && AccountData[playerid][pWeapon] <= 45 && AccountData[playerid][pWeapon] != 40 && AccountData[playerid][pGuns][g_aWeaponSlots[AccountData[playerid][pWeapon]]] != GetPlayerWeapon(playerid) && !DurringHunting[playerid] && !IsPlayerInEvent(playerid) && !PlayerTaserOn[playerid] && !AccountData[playerid][menuShowed])
        {
            printf("[debug] OnPlayerWeaponHack (UCP: %s Name: %s WeaponID: %d Ammo: %d)", AccountData[playerid][pUCP], ReturnPlayerName(playerid), GetPlayerWeapon(playerid), GetPlayerAmmo(playerid));

            SendAdminMessage(X11_RED, "[AntiCheat]: "YELLOW"%s(%d)"LIGHTGREY" terdeteksi menggunakan (Weapon Hacks: {FFFF00}%s"LIGHTGREY")", ReturnName(playerid), playerid, ReturnWeaponName(AccountData[playerid][pWeapon]));
            ResetWeapons(playerid);
            KickEx(playerid);
        }
        else if (AccountData[playerid][pWeapon] >= 1 && AccountData[playerid][pWeapon] <= 45 && AccountData[playerid][pWeapon] == 40 && AccountData[playerid][pGuns][g_aWeaponSlots[AccountData[playerid][pWeapon]]] != GetPlayerWeapon(playerid) && !DurringHunting[playerid] && !IsPlayerInEvent(playerid) && !PlayerTaserOn[playerid] && !AccountData[playerid][menuShowed])
        {
            printf("[debug] OnPlayerCrasher (UCP: %s Name: %s)", AccountData[playerid][pUCP], ReturnPlayerName(playerid));

            SendAdminMessage(X11_RED, "[AntiCheat]: "YELLOW"%s(%d)"LIGHTGREY" telah ditendang dari server karena terdeteksi menggunakan Crasher.luac", ReturnName(playerid), playerid);
            ResetWeapons(playerid);
            KickEx(playerid);
        }
    }
	static Float:AM;
	GetPlayerArmour(playerid, AM);
	if(AccountData[playerid][pAdmin] < 1 && AccountData[playerid][pTheStars] < 1 && AccountData[playerid][pFaction] != FACTION_POLISI && !IsPlayerInEvent(playerid))
	{
		if(AM >= 100)
		{
			SetPlayerArmourEx(playerid, 0);
			SendClientMessageToAllEx(X11_RED, "[AntiCheat]: "YELLOW"[%s] %s (%d)"ARWIN1" terdeteksi menggunakan armour hack "YELLOW"New :[100.0]", AccountData[playerid][pUCP], ReturnName(playerid), playerid);
			KickEx(playerid);
		}
	}
	new Float:H;
	GetPlayerHealth(playerid, H);
	if(AccountData[playerid][pAdmin] < 1 && AccountData[playerid][pTheStars] < 1 && !AccountData[playerid][pInjured] && !IsPlayerInEvent(playerid))
	{
		if(H > 105.0)
		{
			SetPlayerHealthEx(playerid, 100.0);
			SendClientMessage(playerid, -1, "[i] Sistem kami berhasil mengembalikan darah anda tidak lebih dari "YELLOW"100%%");
		}
	}
	return 1;
}

ptask PlayerDragging_Update[1000](playerid)
{
    if (!AccountData[playerid][pSpawned])
        return 0;

    new targetid = IsDragging[playerid];
    if (targetid != INVALID_PLAYER_ID)
    {
        // Mengambil informasi yang sering digunakan
        new playerInterior = GetPlayerInterior(playerid);
        new playerVirtualWorld = GetPlayerVirtualWorld(playerid);

        // Menyalin data bisnis, rumah, dan pintu
        AccountData[targetid][pInBiz] = AccountData[playerid][pInBiz];
        AccountData[targetid][pInHouse] = AccountData[playerid][pInHouse];
        AccountData[targetid][pInDoor] = AccountData[playerid][pInDoor];

        // Mengambil posisi dan sudut pemain
        new Float:X, Float:Y, Float:Z, Float:Ang;
        GetPlayerPos(playerid, X, Y, Z);
        GetPlayerFacingAngle(playerid, Ang);

        // Memindahkan target berdasarkan posisi pemain
        X += (0.75 * -floatsin(-Ang, degrees));
        Y += (0.75 * -floatcos(-Ang, degrees));
        SetPlayerPos(targetid, X, Y, Z);

        // Menyesuaikan interior dan virtual world hanya jika berbeda
        if (GetPlayerInterior(targetid) != playerInterior)
        {
            SetPlayerInterior(targetid, playerInterior);
        }

        if (GetPlayerVirtualWorld(targetid) != playerVirtualWorld)
        {
            SetPlayerVirtualWorld(targetid, playerVirtualWorld);
        }
    }

    return 1;
}

ptask PlayerVehUpdate[1000](playerid)
{
	if(!AccountData[playerid][pSpawned])
		return 0;

    new vehid = GetPlayerVehicleID(playerid);
	if(IsValidVehicle(vehid))
	{
		if(!GetEngineStatus(vehid) && IsEngineVehicle(vehid) && !IsABike(vehid))
		{
			SwitchVehicleEngine(vehid, false);
		}
		if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
		{
			new Float:vHealth;
			GetVehicleHealth(vehid, vHealth);
			if(IsValidVehicle(vehid) && vHealth <= 350.0)
			{
				SwitchVehicleEngine(vehid, false);
				ShowPlayerFooter(playerid, "~w~Engine~r~ Totalled", 2000);
			}
		}
		if(IsPlayerInAnyVehicle(playerid) && GetPlayerState(playerid) == PLAYER_STATE_DRIVER && GetPVarInt(playerid, "AllGuiStatus_Hide") == 0)
		{
			new str[128];
			format(str, sizeof(str), "%03d", GetVehicleSpeedKMH(vehid));
			PlayerTextDrawSetString(playerid, CHAXWSPEDO[playerid][5], str);
			PlayerTextDrawShow(playerid, CHAXWSPEDO[playerid][5]);

			new Float:fuel = GetFuel(vehid);
			
			new Float:fuelBarSize = fuel * 43.5/100.0;
			//if(fuelBarSize < 43.5) fuelBarSize = 43.5;
			//if(fuelBarSize > 0.0) fuelBarSize = 0.0;

			PlayerTextDrawTextSize(playerid, CHAXWSPEDO[playerid][0], fuelBarSize, 2.5);
			PlayerTextDrawShow(playerid, CHAXWSPEDO[playerid][0]);
			
			forex(i, 7)
			{
				PlayerTextDrawShow(playerid, CHAXWSPEDO[playerid][i]);
			}
		}
	}
	return 1;
}

/*ptask PlayerVehUpdate[1000](playerid)
{
	if(!AccountData[playerid][pSpawned])
		return 0;

    new vehid = GetPlayerVehicleID(playerid);
	if(IsValidVehicle(vehid))
	{
		if(!GetEngineStatus(vehid) && IsEngineVehicle(vehid) && !IsABike(vehid))
		{
			SwitchVehicleEngine(vehid, false);
		}
		if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
		{
			new Float:vHealth;
			GetVehicleHealth(vehid, vHealth);
			if(IsValidVehicle(vehid) && vHealth <= 350.0)
			{
				SwitchVehicleEngine(vehid, false);
				ShowPlayerFooter(playerid, "~w~Engine~r~ Totalled", 2000);
			}
		}
		if(IsPlayerInAnyVehicle(playerid) && GetPlayerState(playerid) == PLAYER_STATE_DRIVER && GetPVarInt(playerid, "AllGuiStatus_Hide") == 0)
		{
			new str[128];
			// Update speed display
			format(str, sizeof(str), "%03d", GetVehicleSpeedKMH(vehid));
			PlayerTextDrawSetString(playerid, GradientSpeedo[playerid][31], str);
			PlayerTextDrawShow(playerid, GradientSpeedo[playerid][31]);

			// Update speed bars (index 1-26)
			new speed = GetVehicleSpeedKMH(vehid);
			
			new SpeedoColors[27] = {
				0, // index 0 nggak dipakai biar sesuai 1..26
				-16776961, // 1
				-16448001,
				-16119041,
				-15790081,
				-15461121,
				-15132161,
				-14803201,
				-14474241,
				-14145281,
				-13487361,
				-12829441,
				-12500481,
				-12171521,
				-11842561,
				-11513601,
				-11184641,
				-10855681,
				-10526721,
				-10197761,
				-9868801,
				-9539841,
				-9210881,
				-8881921,
				-8881921,
				-8552961,
				-8224001  // 26
			};

			for(new i = 1; i <= 26; i++)
			{
				if(speed >= (i * 10)) // Each bar represents 10 km/h
				{
					PlayerTextDrawColor(playerid, GradientSpeedo[playerid][i], SpeedoColors[i]);
				}
				else
				{
					PlayerTextDrawColor(playerid, GradientSpeedo[playerid][i], 100); // Default color
				}
				PlayerTextDrawShow(playerid, GradientSpeedo[playerid][i]);
			}

			if (speed == 0)
			{
				PlayerTextDrawSetString(playerid, GradientSpeedo[playerid][30], "N");
			}
			else
			{
				new level = speed / 10;
				if (level > 5) level = 5;

				PlayerTextDrawSetString(playerid, GradientSpeedo[playerid][30], sprintf("%d", level));
			}

			// Update fuel gauge (index 19)
			new Float:fuel = GetFuel(vehid);
			new Float:fuelBarSize = fuel * -35.0/100.0; // Scale to match the gauge size
			
			// Ensure fuel bar stays within boundaries
			if(fuelBarSize < -35.0) fuelBarSize = -35.0;
			if(fuelBarSize > 0.0) fuelBarSize = 0.0;
			
			PlayerTextDrawTextSize(playerid, GradientSpeedo[playerid][28], 1.000, fuelBarSize);
			PlayerTextDrawShow(playerid, GradientSpeedo[playerid][28]);

			// Update location and time display (index 6)
			//format(str, sizeof(str), "%s ~r~/~w~/ %s ~r~/~w~/ %02d:%02d", tstr, GetLocation(x, y, z), hours, minutes);
			//PlayerTextDrawSetString(playerid, GradientSpeedo[playerid][6], str);
			//PlayerTextDrawShow(playerid, GradientSpeedo[playerid][6]);
			
			// Make sure all textdraws are visible
			forex(i, 40)
			{
				PlayerTextDrawShow(playerid, GradientSpeedo[playerid][i]);
			}
			Compass_Update(playerid);
		}
	}
	return 1;
}*/

ptask UpTime[60000]()
{
	static h,m,s,lasth;
    gettime(h,m,s);
	if(lasth != h)
	{
		SetWorldTime(h);
		lasth = h;
	}
}

ptask UpdateNewbieTD[1000](playerid)
{
	if (AccountData[playerid][pNewBiePlayer] > 0)
	{
		UpdateNewbieTextdraw(playerid);
		AccountData[playerid][pNewBiePlayer]--;
	}
	else
	{
		HideNewbieTextdraw(playerid);
	}
}