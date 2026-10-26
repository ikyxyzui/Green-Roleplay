#include <YSI\y_hooks>
#define MAX_WARUNG 50

enum 	e_warung
{
	warungType,
	Float:warungPOS[3],
	warungInterior,
	warungWorld,

	STREAMER_TAG_MAP_ICON:warungMap,
	STREAMER_TAG_PICKUP:warungPickup,
	STREAMER_TAG_3D_TEXT_LABEL:warungLabel,
};

new WarungData[MAX_WARUNG][e_warung],
	Iterator:Warung<MAX_WARUNG>;

Warung_Refresh(id)
{
	if(id != -1)
	{
		if(DestroyDynamic3DTextLabel(WarungData[id][warungLabel]))
			WarungData[id][warungLabel] = STREAMER_TAG_3D_TEXT_LABEL: INVALID_STREAMER_ID;
		
		if(DestroyDynamicPickup(WarungData[id][warungPickup]))
			WarungData[id][warungPickup] = STREAMER_TAG_PICKUP: INVALID_STREAMER_ID;

		if(DestroyDynamicMapIcon(WarungData[id][warungMap]))
			WarungData[id][warungMap] = STREAMER_TAG_MAP_ICON: INVALID_STREAMER_ID;

		if(WarungData[id][warungType] == 1) // shop
		{
			WarungData[id][warungLabel] = CreateDynamic3DTextLabel("Tekan "GREEN"[ALT]"WHITE" untuk membeli", -1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2] + 0.55, 3.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1, WarungData[id][warungWorld], WarungData[id][warungInterior]);
			WarungData[id][warungMap] = CreateDynamicMapIcon(WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 17, -1, WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 1500.0, MAPICON_LOCAL, -1, 1);
			WarungData[id][warungPickup] = CreateDynamicPickup(2992, 23, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 2.5, -1, 0);
		}
		else if(WarungData[id][warungType] == 2) // elektronik
		{
			WarungData[id][warungLabel] = CreateDynamic3DTextLabel("Tekan "GREEN"[ALT]"WHITE" untuk membeli", -1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2] + 0.55, 3.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1, WarungData[id][warungWorld], WarungData[id][warungInterior]);
			WarungData[id][warungMap] = CreateDynamicMapIcon(WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 48, -1, WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 1500.0, MAPICON_LOCAL, -1, 1);
			WarungData[id][warungPickup] = CreateDynamicPickup(1277, 23, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 2.5, -1, 0);
		}
		else if(WarungData[id][warungType] == 3) // baju
		{
			WarungData[id][warungLabel] = CreateDynamic3DTextLabel("Tekan "GREEN"[ALT]"WHITE" untuk membeli pakaian", -1, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2] + 0.55, 4.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1, WarungData[id][warungWorld], WarungData[id][warungInterior]);
			WarungData[id][warungMap] = CreateDynamicMapIcon(WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 45, -1, WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 1500.0, MAPICON_LOCAL, -1, 1);
			WarungData[id][warungPickup] = CreateDynamicPickup(1275, 23, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungWorld], WarungData[id][warungInterior], -1, 3.0, -1, 0);
		}
	}
	return 1;
}

Warung_Nearest(playerid)
{
	foreach(new i : Warung) if (IsPlayerInRangeOfPoint(playerid, 3.0, WarungData[i][warungPOS][0], WarungData[i][warungPOS][1], WarungData[i][warungPOS][2]))
	{
		return i;
	}
	return -1;
}

WarungNearby(playerid)
{
	foreach(new i : Warung) if (WarungData[i][warungType] == 1)
	{
		static Float:X, Float:Y, Float:Z, Float:dist;
		GetPlayerPos(playerid, X, Y, Z);

		dist = GetDistanceBetweenPoints(WarungData[i][warungPOS][0], WarungData[i][warungPOS][1], WarungData[i][warungPOS][2], X, Y, Z);

		if(dist <= 350.0)
		{
			return i;
		}
	}
	return -1;
}

ClothesStoreNearby(playerid)
{
	foreach(new i : Warung) if (WarungData[i][warungType] == 3)
	{
		static Float:X, Float:Y, Float:Z, Float:dist;
		GetPlayerPos(playerid, X, Y, Z);

		dist = GetDistanceBetweenPoints(WarungData[i][warungPOS][0], WarungData[i][warungPOS][1], WarungData[i][warungPOS][2], X, Y, Z);

		if(dist <= 350.0)
		{
			return i;
		}
	}
	return -1;
}

ElectronicStoreNearby(playerid)
{
	foreach(new i : Warung) if (WarungData[i][warungType] == 2)
	{
		static Float:X, Float:Y, Float:Z, Float:dist;
		GetPlayerPos(playerid, X, Y, Z);

		dist = GetDistanceBetweenPoints(WarungData[i][warungPOS][0], WarungData[i][warungPOS][1], WarungData[i][warungPOS][2], X, Y, Z);

		if(dist <= 350.0)
		{
			return i;
		}
	}
	return -1;
}

forward LoadWarung();
public LoadWarung()
{
	new id, rows = cache_num_rows();
	if(rows)
	{
		for(new i = 0; i < rows; i ++)
		{
			id = cache_get_field_int(i, "ShopID");
			WarungData[id][warungPOS][0] = cache_get_field_float(i, "ShopX");
			WarungData[id][warungPOS][1] = cache_get_field_float(i, "ShopY");
			WarungData[id][warungPOS][2] = cache_get_field_float(i, "ShopZ");
			WarungData[id][warungInterior] = cache_get_field_int(i, "ShopInterior");
			WarungData[id][warungWorld] = cache_get_field_int(i, "ShopWorld");
			WarungData[id][warungType] = cache_get_field_int(i, "ShopType");
			
			Warung_Refresh(id);
			Iter_Add(Warung, id);
		}
		printf("[Dynamic Warung]: Jumlah total Warung yang dimuat %d.", rows);
	}
	return 1;
}

Warung_Save(id)
{
	new cQuery[525];
	format(cQuery, sizeof(cQuery), "UPDATE `warung` SET \ 
	`ShopX` = %f, `ShopY` = %f, `ShopZ` = %f, `ShopInterior` = %d, `ShopWorld` = %d \ 
	WHERE `ShopID` = %d", WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], 
	WarungData[id][warungWorld], WarungData[id][warungInterior], id);
	return mysql_tquery(g_SQL, cQuery);
}

CMD:addwarung(playerid, params[])
{
	if(CheckAdmin(playerid, 6)) return PermissionError(playerid);

	new 
		id = Iter_Free(Warung),
		type,
		tss[525],
		Float:x,
		Float:y,
		Float:z
	;
	GetPlayerPos(playerid, x, y, z);

	if(sscanf(params, "d", type)) return ShowTDN(playerid, NOTIFICATION_SYNTAX, "/addshop [type]~n~1. Warung 2. Elektronik 3. Pakaian");
	if(type < 1 || type > 3) return ShowTDN(playerid, NOTIFICATION_ERROR, "Invalid Type!");
	if(id == -1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak dapat menambah warung lagi!");

	if(type == 1) 
	{
		WarungData[id][warungPOS][0] = x;
		WarungData[id][warungPOS][1] = y;
		WarungData[id][warungPOS][2] = z;
		WarungData[id][warungType] = 1;
		WarungData[id][warungInterior] = GetPlayerInterior(playerid);
		WarungData[id][warungWorld] = GetPlayerVirtualWorld(playerid);

		Warung_Refresh(id);
		SendStaffMessage(X11_TOMATO, "%s telah Membuat Dynamic Warung ID: %d", GetAdminName(playerid), id);
	}
	else if(type == 2)
	{
		WarungData[id][warungPOS][0] = x;
		WarungData[id][warungPOS][1] = y;
		WarungData[id][warungPOS][2] = z;
		WarungData[id][warungType] = 2;
		WarungData[id][warungInterior] = GetPlayerInterior(playerid);
		WarungData[id][warungWorld] = GetPlayerVirtualWorld(playerid);

		Warung_Refresh(id);
		SendStaffMessage(X11_TOMATO, "%s telah Membuat Dynamic Warung Elektronik ID: %d", GetAdminName(playerid), id);
	}
	else if(type == 3)
	{
		WarungData[id][warungPOS][0] = x;
		WarungData[id][warungPOS][1] = y;
		WarungData[id][warungPOS][2] = z;
		WarungData[id][warungType] = 3;
		WarungData[id][warungInterior] = GetPlayerInterior(playerid);
		WarungData[id][warungWorld] = GetPlayerVirtualWorld(playerid);

		Warung_Refresh(id);
		SendStaffMessage(X11_TOMATO, "%s Membuat Dynamic Toko Baju ID: %d", GetAdminName(playerid), id);
	}
	Iter_Add(Warung, id);

	mysql_format(g_SQL, tss, sizeof(tss), "INSERT INTO `warung` SET `ShopID`=%d, `ShopX`=%f, `ShopY`=%f, `ShopZ`=%f, `ShopInterior`=%d, `ShopWorld`=%d, `ShopType`=%d",
	id, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2], WarungData[id][warungInterior], WarungData[id][warungWorld], WarungData[id][warungType]);
	mysql_tquery(g_SQL, tss, "OnWarungCreated", "dd", playerid, id);
	return 1;
}

CMD:removewarung(playerid, params[])
{
	if(CheckAdmin(playerid, 6)) return PermissionError(playerid);

	new id, icsr[255];
	if(sscanf(params, "d", id)) return ShowTDN(playerid, NOTIFICATION_SYNTAX, "/removewarung [id]");
	if(!Iter_Contains(Warung, id)) return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Warung tidak ada!");
	if(id < 0 || id > MAX_WARUNG) return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Warung tidak valid!");

	WarungData[id][warungPOS][0] = WarungData[id][warungPOS][1] = WarungData[id][warungPOS][2] = 0.0;
	WarungData[id][warungInterior] = WarungData[id][warungWorld] = WarungData[id][warungType] = 0;

	Warung_Refresh(id);
	SendStaffMessage(X11_TOMATO, "%s telah Menghapus Dynamic Warung ID: %d", GetAdminName(playerid), id);

	Iter_Remove(Warung, id);
	mysql_format(g_SQL, icsr, sizeof(icsr), "DELETE FROM `warung` WHERE `ShopID` = %d", id);
	mysql_tquery(g_SQL, icsr);
	return 1;
}

CMD:gotowarung(playerid, params[])
{
	if(CheckAdmin(playerid, 6)) return PermissionError(playerid);

	new id;
	if(sscanf(params, "d", id)) return ShowTDN(playerid, NOTIFICATION_SYNTAX, "/gotowarung [id]");
	if(!Iter_Contains(Warung, id)) return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Warung tidak ada!");
	if(id < 0 || id > MAX_WARUNG) return ShowTDN(playerid, NOTIFICATION_ERROR, "ID Warung tidak valid!");

	SetPlayerPos(playerid, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2]);
	SetPlayerInterior(playerid, WarungData[id][warungInterior]);
	SetPlayerVirtualWorld(playerid, WarungData[id][warungWorld]);
	AccountData[playerid][pInDoor] = -1;
    AccountData[playerid][pInHouse] = -1;
    AccountData[playerid][pInBiz] = -1;
    AccountData[playerid][pInFamily] = -1;
    AccountData[playerid][pInRusun] = -1;
	SendStaffMessage(X11_TOMATO, "%s Teleportasi ke Warung ID:%d", GetAdminName(playerid), id);
	return 1;
}

forward OnWarungCreated(playerid, id);
public OnWarungCreated(playerid, id)
{
	ShowTDN(playerid, NOTIFICATION_SUKSES, "Berhasil membuat warung!");
	Warung_Save(id);
	return 1;
}

/* Hook */
hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	if(newkeys & KEY_WALK && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
	{
		new id = Warung_Nearest(playerid);
		if(id > -1)
		{
			if(IsPlayerInRangeOfPoint(playerid, 1.5, WarungData[id][warungPOS][0], WarungData[id][warungPOS][1], WarungData[id][warungPOS][2]))
			{
				if(WarungData[id][warungType] == 1) 
				{
					ShowPlayerDialog(playerid, DIALOG_WARUNG, DIALOG_STYLE_TABLIST_HEADERS, sprintf(""KOTAHIDUP"CHAXW PROJECT Roleplay "WHITE"- Warung No.%02d", id), 
					"Nama Item\tHarga\
					\nNasi Uduk\t$250\
					\n"GRAY"Air Mineral\t"GRAY"$200\
					\nRokok (12 batang)\t$55\
					\n"GRAY"Korek Api\t"GRAY"$150\
					\nPancingan\t$80\
					\n"GRAY"Umpan\t"GRAY"$18\
					\nHelm\t$150\
					\n"GRAY"Masker\t"GRAY"$650\
					\nPilox\t$10000\
					\n"GRAY"Senter\t"GRAY"$1000", "Pilih", "Batal");
				}
				else if(WarungData[id][warungType] == 2)
				{
					ShowPlayerDialog(playerid, DIALOG_WARUNG_ELEKTRONIK, DIALOG_STYLE_TABLIST_HEADERS, sprintf(""KOTAHIDUP"CHAXW PROJECT Roleplay "WHITE"- Warung No.%02d", id),
					"Nama Item\tHarga\
					\nVervhone (Smartphone)\t$1800\
					\n"GRAY"Radio\t"GRAY"$950\
					\nEarphone\t$300\
					\n"GRAY"Boombox\t"GRAY"$500", "Pilih", "Batal");
				}
				else if(WarungData[id][warungType] == 3)
				{
					SetPlayerCameraFacingStore(playerid);
				}
			}
		}
	}
	return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	switch(dialogid)
	{
		case DIALOG_WARUNG_ELEKTRONIK:
		{
			if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan");
			switch(listitem)
			{
				case 0: //smartphone
				{
					if(AccountData[playerid][pMoney] < 1800) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 1800);

					Inventory_Add(playerid, "Smartphone", 18870);
					ShowItemBox(playerid, "Received 1x", "Smartphone", 18870);
				}
				case 1: // Radio
				{
					// if(AccountData[playerid][pRadio]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah memiliki radio!");
					if(AccountData[playerid][pMoney] < 950) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 950);

					// AccountData[playerid][pRadio] = 1;
					Inventory_Add(playerid, "Radio", 19942);
					ShowItemBox(playerid, "Received 1x", "Radio", 19942);
					ShowTDN(playerid, NOTIFICATION_SUKSES, "Pembelian berhasil");

					/*new icsr[125];
					mysql_format(g_SQL, icsr, sizeof(icsr), "UPDATE `player_characters` SET `Char_Radio`=1 WHERE `pID`=%d", AccountData[playerid][pID]);
					mysql_tquery(g_SQL, icsr);*/
					
				}
				case 2: //Earphone
				{
					if(AccountData[playerid][pEarphone]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah memiliki earphone!");	
					if(AccountData[playerid][pMoney] < 300) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 300);

					AccountData[playerid][pEarphone] = 1;
					ShowTDN(playerid, NOTIFICATION_SUKSES, "Pembelian berhasil");

					new icsr[125];
					mysql_format(g_SQL, icsr, sizeof(icsr), "UPDATE `player_characters` SET `Char_Earphone`=1 WHERE `pID`=%d", AccountData[playerid][pID]);
					mysql_tquery(g_SQL, icsr);
				}
				case 3: //bomboox
				{
					if(AccountData[playerid][pVip] < 1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan pengguna VIP!");
					if(AccountData[playerid][pMoney] < 500) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					if(PlayerHasItem(playerid, "Boombox")) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah memiliki boombox!");

					TakeMoney(playerid, 500);
					Inventory_Add(playerid, "Boombox", 2103);
					ShowItemBox(playerid, "Received 1x", "Boombox", 2103);
				}
			}
		}
		case DIALOG_WARUNG:
		{
			if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan");
			switch(listitem)
			{
				case 0: // nasi uduk
				{
					ShowPlayerDialog(playerid, DIALOG_BUY_NASIUDUK, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung", 
					"Anda akan membeli nasi uduk seharga "GREEN"$250/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
				}
				case 1: //airmineral
				{
					ShowPlayerDialog(playerid, DIALOG_BUY_AIRMINERAL, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung", 
					"Anda akan membeli air mineral seharga "GREEN"$200/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
				}
				case 2: //Rokok
				{
					if(AccountData[playerid][pMoney] < 55) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 55);

					Inventory_Add(playerid, "Rokok", 19896, 12);
					ShowItemBox(playerid, "Received 12x", "Rokok", 19896);
				}
				case 3: //Korek api
				{
					if(AccountData[playerid][pMoney] < 150) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 150);

					Inventory_Add(playerid, "Korek Api", 19998);
					ShowItemBox(playerid, "Received 1x", "Korek Api", 19998);
				}
				case 4: // Pancingan
				{
					if(AccountData[playerid][pMoney] < 80) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 80);

					Inventory_Add(playerid, "Pancingan", 18632);
					ShowItemBox(playerid, "Received 1x", "Pancingan", 18632);
				}
				case 5: // Umpan
				{
					ShowPlayerDialog(playerid, DIALOG_BUY_UMPAN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung", 
					"Anda akan membeli umpan seharga "GREEN"$18/umpan\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli)", "Beli", "Batal");
				}
				case 6: //Helm
				{
					if(AccountData[playerid][pHelmet]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah memiliki helm!");
					if(AccountData[playerid][pMoney] < 150) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 150);
					AccountData[playerid][pHelmet] = 1;
					ShowTDN(playerid, NOTIFICATION_SUKSES, "Pembelian berhasil");	
				}
				case 7: // masker
				{
					if(AccountData[playerid][pMoney] < 650) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 650);

					Inventory_Add(playerid, "Masker", 19036);
					ShowItemBox(playerid, "Received 1x", "Masker", 19036);
				}
				case 8:
				{
					if(AccountData[playerid][pMoney] < 10000) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 10000);

					Inventory_Add(playerid, "Pilox", 365);
					ShowItemBox(playerid, "Received 1x", "Pilox", 365);
				}
				case 9:
				{
					if(AccountData[playerid][pMoney] < 1000) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
					TakeMoney(playerid, 1000);

					Inventory_Add(playerid, "Senter", 18641);
					ShowItemBox(playerid, "Received 1x", "Senter", 18641);
				}
			}
		}
		case DIALOG_BUY_NASIUDUK:
		{
			if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
		
			if(isnull(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_NASIUDUK, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Tidak dapat diisi kosong!\nAnda akan membeli nasi uduk seharga "GREEN"$250/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(!IsNumeric(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_NASIUDUK, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Hanya dapat diisi angka!\nAnda akan membeli nasi uduk seharga "GREEN"$250/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(strval(inputtext) < 1 || strval(inputtext) > (strval(inputtext) * 250))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_NASIUDUK, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Jumlah tidak valid!\nAnda akan membeli nasi uduk seharga "GREEN"$250/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}
			new quantity = strval(inputtext);
			new value = quantity * 250;

			if(value > AccountData[playerid][pMoney]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
			if(GetTotalWeightFloat(playerid) >= 50) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda telah penuh!");
			TakeMoney(playerid, value);

			Inventory_Add(playerid, "Nasi Uduk", 19567, quantity);
			ShowItemBox(playerid, sprintf("Received %dx", quantity), "Nasi Uduk", 19567);
		}
		case DIALOG_BUY_AIRMINERAL:
		{
			if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
		
			if(isnull(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_AIRMINERAL, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Tidak dapat diisi kosong!\nAnda akan membeli air mineral seharga "GREEN"$200/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(!IsNumeric(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_AIRMINERAL, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Hanya dapat diisi angka!\nAnda akan membeli air mineral seharga "GREEN"$200/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(strval(inputtext) < 1 || strval(inputtext) > (strval(inputtext) * 200))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_AIRMINERAL, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Jumlah tidak valid!\nAnda akan membeli air mineral seharga "GREEN"$200/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}
			new quantity = strval(inputtext);
			new value = quantity * 200;

			if(value > AccountData[playerid][pMoney]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
			if(GetTotalWeightFloat(playerid) >= 50) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda telah penuh!");
			TakeMoney(playerid, value);

			Inventory_Add(playerid, "Air Mineral", 19570, quantity);
			ShowItemBox(playerid, sprintf("Received %dx", quantity), "Air Mineral", 19570);
		}
		case DIALOG_BUY_UMPAN:
		{
			if(!response) return ShowTDN(playerid, NOTIFICATION_INFO, "Anda telah membatalkan pilihan!");
		
			if(isnull(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_UMPAN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Tidak dapat diisi kosong!\nAnda akan membeli umpan seharga "GREEN"$18/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(!IsNumeric(inputtext))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_UMPAN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Hanya dapat diisi angka!\nAnda akan membeli umpan seharga "GREEN"$18/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}

			if(strval(inputtext) < 1 || strval(inputtext) > (strval(inputtext) * 18))
			{
				return ShowPlayerDialog(playerid, DIALOG_BUY_UMPAN, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Warung",
				"Error: Jumlah tidak valid!\nAnda akan membeli umpan seharga "GREEN"$18/pcs\n"YELLOW"(Masukkan berapa banyak yang ingin anda beli):", "Beli", "Batal");
			}
			new quantity = strval(inputtext);
			new value = quantity * 18;

			if(AccountData[playerid][pMoney] < value) return ShowTDN(playerid, NOTIFICATION_ERROR, "Uang anda tidak mencukupi!");
			if(GetTotalWeightFloat(playerid) >= 50) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda telah penuh!");
			TakeMoney(playerid, value);

			Inventory_Add(playerid, "Umpan", 1603, quantity);
			ShowItemBox(playerid, sprintf("Received %dx", quantity), "Umpan", 1603);
		}
	}
	return 1;
}

/* warung v2 */

#define MenuUI:: MenuUI_

new PlayerText: MenuUI_Textdraw[MAX_PLAYERS][17];
new PlayerText: MenuUI_Box[MAX_PLAYERS][8];
new PlayerText: MenuUI_Model[MAX_PLAYERS][8];
new PlayerText: MenuUI_Name[MAX_PLAYERS][8];
new PlayerText: MenuUI_Price[MAX_PLAYERS][8];

//new MenuPage[MAX_PLAYERS];

hook OnPlayerConnect(playerid)
{
	MenuUI_Textdraw[playerid][0] = CreatePlayerTextDraw(playerid, 246.000, -158.000, "New textdraw");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][0], 0.300, 1.500);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][0], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][0], 1);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][0], 1);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][0], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][0], 1);

	MenuUI_Textdraw[playerid][1] = CreatePlayerTextDraw(playerid, 178.000, 137.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][1], 289.000, 173.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][1], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][1], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][1], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][1], 1);

	MenuUI_Box[playerid][0] = CreatePlayerTextDraw(playerid, 193.000, 161.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][0], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][0], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][0], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][0], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][0], 1);

	MenuUI_Box[playerid][1] = CreatePlayerTextDraw(playerid, 237.000, 161.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][1], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][1], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][1], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][1], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][1], 1);

	MenuUI_Box[playerid][2] = CreatePlayerTextDraw(playerid, 281.000, 161.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][2], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][2], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][2], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][2], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][2], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][2], 1);

	MenuUI_Box[playerid][3] = CreatePlayerTextDraw(playerid, 326.000, 161.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][3], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][3], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][3], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][3], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][3], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][3], 1);

	MenuUI_Box[playerid][4] = CreatePlayerTextDraw(playerid, 193.000, 217.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][4], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][4], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][4], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][4], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][4], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][4], 1);

	MenuUI_Box[playerid][5] = CreatePlayerTextDraw(playerid, 237.000, 217.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][5], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][5], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][5], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][5], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][5], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][5], 1);

	MenuUI_Box[playerid][6] = CreatePlayerTextDraw(playerid, 281.000, 217.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][6], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][6], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][6], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][6], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][6], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][6], 1);

	MenuUI_Box[playerid][7] = CreatePlayerTextDraw(playerid, 326.000, 217.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Box[playerid][7], 40.000, 49.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Box[playerid][7], 1);
	PlayerTextDrawColor(playerid, MenuUI_Box[playerid][7], 143);
	PlayerTextDrawSetShadow(playerid, MenuUI_Box[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Box[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Box[playerid][7], 255);
	PlayerTextDrawFont(playerid, MenuUI_Box[playerid][7], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Box[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Box[playerid][7], 1);

	MenuUI_Model[playerid][0] = CreatePlayerTextDraw(playerid, 190.000, 160.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][0], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][0], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][0], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][0], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][0], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][0], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][0], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][0], 0, 0);

	MenuUI_Model[playerid][1] = CreatePlayerTextDraw(playerid, 232.000, 160.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][1], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][1], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][1], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][1], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][1], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][1], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][1], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][1], 0, 0);

	MenuUI_Model[playerid][2] = CreatePlayerTextDraw(playerid, 276.000, 160.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][2], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][2], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][2], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][2], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][2], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][2], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][2], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][2], 0, 0);

	MenuUI_Model[playerid][3] = CreatePlayerTextDraw(playerid, 321.000, 160.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][3], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][3], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][3], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][3], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][3], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][3], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][3], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][3], 0, 0);

	MenuUI_Model[playerid][4] = CreatePlayerTextDraw(playerid, 190.000, 218.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][4], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][4], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][4], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][4], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][4], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][4], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][4], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][4], 0, 0);

	MenuUI_Model[playerid][5] = CreatePlayerTextDraw(playerid, 232.000, 218.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][5], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][5], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][5], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][5], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][5], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][5], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][5], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][5], 0, 0);

	MenuUI_Model[playerid][6] = CreatePlayerTextDraw(playerid, 276.000, 218.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][6], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][6], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][6], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][6], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][6], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][6], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][6], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][6], 0, 0);

	MenuUI_Model[playerid][7] = CreatePlayerTextDraw(playerid, 321.000, 218.000, "_");
	PlayerTextDrawTextSize(playerid, MenuUI_Model[playerid][7], 47.000, 45.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Model[playerid][7], 1);
	PlayerTextDrawColor(playerid, MenuUI_Model[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Model[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Model[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Model[playerid][7], 0);
	PlayerTextDrawFont(playerid, MenuUI_Model[playerid][7], 5);
	PlayerTextDrawSetProportional(playerid, MenuUI_Model[playerid][7], 0);
	PlayerTextDrawSetPreviewModel(playerid, MenuUI_Model[playerid][7], 19570);
	PlayerTextDrawSetPreviewRot(playerid, MenuUI_Model[playerid][7], 0.000, 0.000, 0.000, 1.299);
	PlayerTextDrawSetPreviewVehCol(playerid, MenuUI_Model[playerid][7], 0, 0);


	MenuUI_Name[playerid][0] = CreatePlayerTextDraw(playerid, 214.000, 163.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][0], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][0], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][0], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][0], 1);

	MenuUI_Name[playerid][1] = CreatePlayerTextDraw(playerid, 256.000, 163.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][1], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][1], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][1], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][1], 1);

	MenuUI_Name[playerid][2] = CreatePlayerTextDraw(playerid, 301.000, 163.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][2], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][2], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][2], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][2], 1);

	MenuUI_Name[playerid][3] = CreatePlayerTextDraw(playerid, 345.000, 163.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][3], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][3], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][3], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][3], 1);

	MenuUI_Name[playerid][4] = CreatePlayerTextDraw(playerid, 214.000, 218.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][4], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][4], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][4], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][4], 1);

	MenuUI_Name[playerid][5] = CreatePlayerTextDraw(playerid, 256.000, 218.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][5], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][5], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][5], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][5], 1);

	MenuUI_Name[playerid][6] = CreatePlayerTextDraw(playerid, 301.000, 218.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][6], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][6], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][6], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][6], 1);

	MenuUI_Name[playerid][7] = CreatePlayerTextDraw(playerid, 345.000, 218.000, "Air Mineral");
	PlayerTextDrawLetterSize(playerid, MenuUI_Name[playerid][7], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Name[playerid][7], 2);
	PlayerTextDrawColor(playerid, MenuUI_Name[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Name[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Name[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Name[playerid][7], 150);
	PlayerTextDrawFont(playerid, MenuUI_Name[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Name[playerid][7], 1);

	MenuUI_Price[playerid][0] = CreatePlayerTextDraw(playerid, 214.000, 198.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][0], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][0], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][0], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][0], 1);

	MenuUI_Price[playerid][1] = CreatePlayerTextDraw(playerid, 256.000, 198.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][1], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][1], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][1], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][1], 1);

	MenuUI_Price[playerid][2] = CreatePlayerTextDraw(playerid, 301.000, 198.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][2], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][2], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][2], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][2], 1);

	MenuUI_Price[playerid][3] = CreatePlayerTextDraw(playerid, 345.000, 198.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][3], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][3], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][3], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][3], 1);

	MenuUI_Price[playerid][4] = CreatePlayerTextDraw(playerid, 214.000, 255.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][4], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][4], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][4], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][4], 1);

	MenuUI_Price[playerid][5] = CreatePlayerTextDraw(playerid, 256.000, 255.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][5], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][5], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][5], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][5], 1);

	MenuUI_Price[playerid][6] = CreatePlayerTextDraw(playerid, 301.000, 255.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][6], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][6], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][6], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][6], 1);

	MenuUI_Price[playerid][7] = CreatePlayerTextDraw(playerid, 345.000, 255.000, "$150");
	PlayerTextDrawLetterSize(playerid, MenuUI_Price[playerid][7], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Price[playerid][7], 2);
	PlayerTextDrawColor(playerid, MenuUI_Price[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Price[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Price[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Price[playerid][7], 150);
	PlayerTextDrawFont(playerid, MenuUI_Price[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Price[playerid][7], 1);

	MenuUI_Textdraw[playerid][2] = CreatePlayerTextDraw(playerid, 233.000, 278.000, "LD_BUM:blkdot"); //buy
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][2], 35.000, 20.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][2], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][2], 444738815);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][2], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][2], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Textdraw[playerid][2], 1);

	MenuUI_Textdraw[playerid][3] = CreatePlayerTextDraw(playerid, 280.000, 278.000, "LD_BUM:blkdot"); //close
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][3], 35.000, 20.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][3], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][3], -1677721345);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][3], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][3], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Textdraw[playerid][3], 1);

	MenuUI_Textdraw[playerid][4] = CreatePlayerTextDraw(playerid, 251.000, 283.000, "BUY");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][4], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][4], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][4], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][4], 1);

	MenuUI_Textdraw[playerid][5] = CreatePlayerTextDraw(playerid, 298.000, 283.000, "CLOSE");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][5], 0.140, 0.799);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][5], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][5], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][5], 1);

	MenuUI_Textdraw[playerid][6] = CreatePlayerTextDraw(playerid, 416.000, 161.000, "Warning: Pastikan uang anda");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][6], 0.159, 0.999);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][6], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][6], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][6], 1);

	MenuUI_Textdraw[playerid][7] = CreatePlayerTextDraw(playerid, 417.000, 173.000, "Mencukupi untuk membeli");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][7], 0.159, 0.999);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][7], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][7], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][7], 1);

	MenuUI_Textdraw[playerid][8] = CreatePlayerTextDraw(playerid, 249.000, 125.000, "2");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][8], 0.428, 2.398);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][8], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][8], -12254977);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][8], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][8], 1);

	MenuUI_Textdraw[playerid][9] = CreatePlayerTextDraw(playerid, 255.000, 125.000, "4");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][9], 0.428, 2.398);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][9], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][9], -602653441);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][9], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][9], 1);

	MenuUI_Textdraw[playerid][10] = CreatePlayerTextDraw(playerid, 261.000, 125.000, "7");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][10], 0.428, 2.398);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][10], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][10], 462684415);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][10], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][10], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][10], 1);

	MenuUI_Textdraw[playerid][11] = CreatePlayerTextDraw(playerid, 162.000, 157.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][11], 1.000, 136.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][11], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][11], 134);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][11], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][11], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][11], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][11], 1);

	MenuUI_Textdraw[playerid][12] = CreatePlayerTextDraw(playerid, 255.000, 146.000, "SUPERMARKET");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][12], 0.159, 0.999);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][12], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][12], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][12], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][12], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][12], 1);

	MenuUI_Textdraw[playerid][13] = CreatePlayerTextDraw(playerid, 151.000, 134.000, "LD_BEAT:chit"); //ke atas prev
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][13], 25.000, 29.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][13], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][13], 134);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][13], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][13], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][13], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][13], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Textdraw[playerid][13], 1);

	MenuUI_Textdraw[playerid][14] = CreatePlayerTextDraw(playerid, 151.000, 288.000, "LD_BEAT:chit"); //ke bawah next
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][14], 25.000, 29.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][14], 1);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][14], 134);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][14], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][14], 255);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][14], 4);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][14], 1);
	PlayerTextDrawSetSelectable(playerid, MenuUI_Textdraw[playerid][14], 1);

	MenuUI_Textdraw[playerid][15] = CreatePlayerTextDraw(playerid, 163.000, 153.000, "V");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][15], 0.159, -1.100);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][15], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][15], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][15], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][15], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][15], 1);

	MenuUI_Textdraw[playerid][16] = CreatePlayerTextDraw(playerid, 163.000, 296.000, "V");
	PlayerTextDrawLetterSize(playerid, MenuUI_Textdraw[playerid][16], 0.159, 1.199);
	PlayerTextDrawTextSize(playerid, MenuUI_Textdraw[playerid][16], 0.000, -3.000);
	PlayerTextDrawAlignment(playerid, MenuUI_Textdraw[playerid][16], 2);
	PlayerTextDrawColor(playerid, MenuUI_Textdraw[playerid][16], -1);
	PlayerTextDrawSetShadow(playerid, MenuUI_Textdraw[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid, MenuUI_Textdraw[playerid][16], 0);
	PlayerTextDrawBackgroundColor(playerid, MenuUI_Textdraw[playerid][16], 150);
	PlayerTextDrawFont(playerid, MenuUI_Textdraw[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, MenuUI_Textdraw[playerid][16], 1);
}

enum e_WarungStuff
{
    e_shopName[32],
    e_shopModel,
    e_shopPrice
};

new g_WarungDetails[][e_WarungStuff] =
{
	/* warung */
    {"Nasi Uduk", 19567, 250},
    {"Air Mineral", 19570, 200},
	{"Rokok", 19896, 10},
    {"Korek Api", 19998, 150},
    {"Pancingan", 18632, 80},
    {"Umpan", 1603, 18},
	{"Helmet", 18645, 150},
	{"Masker", 19036, 650},
	{"Pilox", 365, 350},
	{"Senter", 18641, 1000}
};

enum e_ElectronicStuff
{
    e_shopName[32],
    e_shopModel,
    e_shopPrice
};

new g_ElectronicDetails[][e_ElectronicStuff] =
{
	/* elektronik */
	{"Smartphone", 18870, 1800},
	{"Radio", 19942, 950},
	{"Earphone", 19423, 300},
	{"Boombox", 2103, 500},
	{"Vape", 19897, 1900}
};

#define ITEMS_PER_PAGE 8 //kusus warung

Menu_Close(playerid)
{
	forex(index, 8)
	{	
		PlayerTextDrawHide(playerid, MenuUI::Box[playerid][index]);
		PlayerTextDrawHide(playerid, MenuUI::Model[playerid][index]);      
		PlayerTextDrawHide(playerid, MenuUI::Price[playerid][index]);
		PlayerTextDrawHide(playerid, MenuUI::Name[playerid][index]);
	}
	forex(ui, 17) PlayerTextDrawHide(playerid, MenuUI::Textdraw[playerid][ui]);
	CancelSelectTextDraw(playerid);
	AllGui_Status(playerid, true);
}

Menu_Open(playerid, type)
{
	new string[32];

	SelectTextDraw(playerid, COLOR_GREY);
	AllGui_Status(playerid, false);

	PlayerTextDrawShow(playerid, MenuUI::Textdraw[playerid][0]);
	PlayerTextDrawShow(playerid, MenuUI::Textdraw[playerid][1]);

	if(type == 1)
	{
		new page = GetPVarInt(playerid, "WarungPage");
		new start = page * ITEMS_PER_PAGE;
		new end   = start + ITEMS_PER_PAGE;

		if (end > sizeof(g_WarungDetails))
			end = sizeof(g_WarungDetails);

		for(new i = start, slot = 0; i < end; i++, slot++)
		{
			strunpack(string, g_WarungDetails[i][e_shopName]);

			PlayerTextDrawSetString(playerid, MenuUI::Price[playerid][slot], sprintf("$%d", g_WarungDetails[i][e_shopPrice]));			
			PlayerTextDrawSetPreviewModel(playerid, MenuUI::Model[playerid][slot], g_WarungDetails[i][e_shopModel]);
			PlayerTextDrawSetString(playerid, MenuUI::Name[playerid][slot], string); 
			PlayerTextDrawColor(playerid, MenuUI::Box[playerid][slot], 143);
			
			PlayerTextDrawShow(playerid, MenuUI::Box[playerid][slot]);
			PlayerTextDrawShow(playerid, MenuUI::Model[playerid][slot]);      
			PlayerTextDrawShow(playerid, MenuUI::Price[playerid][slot]);
			PlayerTextDrawShow(playerid, MenuUI::Name[playerid][slot]);
		}
		SetPVarInt(playerid, "WarungTipe", 1);
	}
	if(type == 2)
	{
		for(new index =  0; index < sizeof(g_ElectronicDetails); index ++)
		{	
			strunpack(string, g_ElectronicDetails[index][e_shopName]);

			PlayerTextDrawSetString(playerid, MenuUI::Price[playerid][index], sprintf("$%d", g_ElectronicDetails[index][e_shopPrice]));			
			PlayerTextDrawSetPreviewModel(playerid, MenuUI::Model[playerid][index], g_ElectronicDetails[index][e_shopModel]);
			PlayerTextDrawSetString(playerid, MenuUI::Name[playerid][index], sprintf("%s", string)); 
			
			PlayerTextDrawShow(playerid, MenuUI::Box[playerid][index]);
			PlayerTextDrawShow(playerid, MenuUI::Model[playerid][index]);      
			PlayerTextDrawShow(playerid, MenuUI::Price[playerid][index]);
			PlayerTextDrawShow(playerid, MenuUI::Name[playerid][index]);
		}
		SetPVarInt(playerid, "WarungTipe", 2);
	}

	for(new ui = 2; ui < 17; ui ++)
	{
		PlayerTextDrawShow(playerid, MenuUI::Textdraw[playerid][ui]);
	}

	return 1;
}

Menu_NextPage(playerid)
{
	forex(i, 8)
	{
		PlayerTextDrawHide(playerid, MenuUI::Box[playerid][i]);
		PlayerTextDrawHide(playerid, MenuUI::Model[playerid][i]);      
		PlayerTextDrawHide(playerid, MenuUI::Price[playerid][i]);
		PlayerTextDrawHide(playerid, MenuUI::Name[playerid][i]);
	}

    new page = GetPVarInt(playerid, "WarungPage");
    new totalPages = (sizeof(g_WarungDetails) + ITEMS_PER_PAGE - 1) / ITEMS_PER_PAGE;

    if(page + 1 < totalPages)
    {
        SetPVarInt(playerid, "WarungPage", page + 1);
        Menu_Open(playerid, 1);
    }
}

Menu_PrevPage(playerid)
{
	forex(i, 8)
	{
		PlayerTextDrawHide(playerid, MenuUI::Box[playerid][i]);
		PlayerTextDrawHide(playerid, MenuUI::Model[playerid][i]);      
		PlayerTextDrawHide(playerid, MenuUI::Price[playerid][i]);
		PlayerTextDrawHide(playerid, MenuUI::Name[playerid][i]);
	}

    new page = GetPVarInt(playerid, "WarungPage");
    if(page > 0)
    {
        SetPVarInt(playerid, "WarungPage", page - 1);
        Menu_Open(playerid, 1);
    }
}

