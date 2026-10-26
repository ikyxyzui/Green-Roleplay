//----------[ Workshop Commands ]-----------
CMD:addws(playerid, params[])
{
	if(AccountData[playerid][pAdmin] < 7)
		return PermissionError(playerid);
	
	new query[512];
	new wid = Iter_Free(Workshop);

	if(wid == -1) return Error(playerid, "You cant create more door!");

	format(wData[wid][wLeader], 128, "-");
	format(wData[wid][wName], 128, "No Name");

	wData[wid][wPrice] = 0;
	GetPlayerPos(playerid, wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ]);

	GetPlayerFacingAngle(playerid, wData[wid][wExtposA]);

	wData[wid][wMoney] = 0;
	wData[wid][wStatus] = 1;
	wData[wid][wComponent] = 0;
	wData[wid][wRepairkid] = 0;
  	
  	Workshop_Refresh(wid);

	Iter_Add(Workshop, wid);
	mysql_format(g_SQL, query, sizeof(query), "INSERT INTO workshop SET ID='%d', leader='%s', name='%s', price='%d'", wid, wData[wid][wLeader], wData[wid][wName], wData[wid][wPrice]);
	mysql_tquery(g_SQL, query, "OnWorkshopCreated", "i", wid);
	return 1;
}


CMD:deletews(playerid, params[])
{
 	if(AccountData[playerid][pAdmin] < 6)
		return PermissionError(playerid);

    new wid, query[128];
	if(sscanf(params, "i", wid)) return Syntax(playerid, "/wsdelete [wid]");
	if(!Iter_Contains(Workshop, wid)) return Error(playerid, "The you specified ID of doesn't exist.");
	
    format(wData[wid][wName], 50, "None");
	format(wData[wid][wLeader], 50, "None");

	wData[wid][wExtposX] = 0;
	wData[wid][wExtposY] = 0;
	wData[wid][wExtposZ] = 0;
	wData[wid][wExtposA] = 0;

	wData[wid][wComponent] = 0;
	wData[wid][wRepairkid] = 0;
	wData[wid][wMoney] = 0;
	
	DestroyDynamic3DTextLabel(wData[wid][wLabel]);
	DestroyDynamicPickup(wData[wid][wPickup]);
	DestroyDynamicMapIcon(wData[wid][wIcon]);
	
	Iter_Remove(Workshop, wid);
	
	mysql_format(g_SQL, query, sizeof(query), "UPDATE player_characters SET workshop=-1,workshoprank=0,duty=0 WHERE workshop=0");
	mysql_tquery(g_SQL, query);
	
	foreach(new ii : Player)
	{
 		if(AccountData[ii][pWorkshop] == wid)
   		{
			AccountData[ii][pWorkshop] = -1;
			AccountData[ii][pWorkshopRank] = 0;
		}
	}

	mysql_format(g_SQL, query, sizeof(query), "DELETE FROM workshop WHERE ID=%d", wid);
	mysql_tquery(g_SQL, query);
    SendStaffMessage(X11_TOMATO, "Admin %s telah menghapus Workshop ID: %d.", AccountData[playerid][pAdminname], wid);
	return 1;
}

CMD:gotows(playerid, params[])
{
	new wid;
	if(AccountData[playerid][pAdmin] < 2)
        return PermissionError(playerid);
		
	if(sscanf(params, "d", wid))
		return Syntax(playerid, "/gotows [id]");
	if(!Iter_Contains(Workshop, wid)) return Error(playerid, "The Workshop you specified ID of doesn't exist.");
	SetPlayerPosition(playerid, wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ], wData[wid][wExtposA]);
    SetPlayerInterior(playerid, 0);
    SetPlayerVirtualWorld(playerid, 0);
	SendClientMessageEx(playerid, COLOR_WHITE, "You has teleport to workshop id %d", wid);
	AccountData[playerid][pInDoor] = -1;
	AccountData[playerid][pInHouse] = -1;
	return 1;
}

CMD:editws(playerid, params[])
{
    static
        wid,
        type[24],
        string[128],
		otherid;

    if(AccountData[playerid][pAdmin] < 6)
        return PermissionError(playerid);

    if(sscanf(params, "ds[24]S()[128]", wid, type, string))
    {
        Syntax(playerid, "/wsedit [id] [name]");
        Info(playerid, "location, name, leader, position, money, component");
        return 1;
    }

    if((wid < 0 || wid >= MAX_WORKSHOP))
        return Error(playerid, "You have specified an invalid ID.");

	if(!Iter_Contains(Workshop, wid)) 
		return Error(playerid, "The you specified ID of doesn't exist.");

    if(!strcmp(type, "name", true))
    {
        new name[50];

        if(sscanf(string, "s[50]", name))
            return Syntax(playerid, "/wsedit [id] [name] [Workshop Name]");

        format(wData[wid][wName], 50, name);
		Workshop_Save(wid);
		Workshop_Refresh(wid);

        SendStaffMessage(X11_TOMATO, "Admin %s has changed the Workshop name ID: %d to: %s.", AccountData[playerid][pAdminname], wid, name);
    }
    else if(!strcmp(type, "leader", true))
    {
        if(sscanf(string, "d", otherid))
            return Syntax(playerid, "/wsedit [id] [leader] [playerid]");
		
		if(otherid == INVALID_PLAYER_ID)
			return Error(playerid, "invalid player wid");

		if(AccountData[playerid][pFaction] == FACTION_BENGKEL) 
			return ShowTDN(playerid, NOTIFICATION_ERROR, "Pemain tersebut telah menjadi bagian dari BENGKEL CHAXW PROJECT!");

        format(wData[wid][wLeader], 50, AccountData[otherid][pName]);
        AccountData[otherid][pWorkshop] = wid;
        AccountData[otherid][pWorkshopRank] = 6;
		MySQLUpdateInt(AccountData[playerid][pID], "Char_Workshop", 6, "player_characters");
		MySQLUpdateInt(AccountData[playerid][pID], "Char_WorkshopRank", AccountData[playerid][pWorkshop], "player_characters");
		Workshop_Save(wid);
		Workshop_Refresh(wid);

        SendStaffMessage(X11_TOMATO, "Admin %s has changed the Workshop leader ID: %d to: %s.", AccountData[playerid][pAdminname], wid, AccountData[otherid][pName]);
    }
    else if(!strcmp(type, "location", true))
    {
    	GetPlayerFacingAngle(playerid, wData[wid][wExtposA]);
        GetPlayerPos(playerid, wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ]);
        Workshop_Save(wid);
		Workshop_Refresh(wid);
		
		SendStaffMessage(X11_TOMATO, "Admin %s has changed the Workshop safepos ID: %d.", AccountData[playerid][pAdminname], wid);
    }
    else if(!strcmp(type, "money", true))
    {
        new money;

        if(sscanf(string, "d", money))
            return Syntax(playerid, "/wsedit [id] [money] [ammount]");

        wData[wid][wMoney] = money;
		
        Workshop_Save(wid);
		Workshop_Refresh(wid);
		
		SendStaffMessage(X11_TOMATO, "Admin %s has changed the Workshop money ID: %d to %s.", AccountData[playerid][pAdminname], wid, FormatMoney(money));   
	}
	else if(!strcmp(type, "component", true))
    {
        new component;

        if(sscanf(string, "d", component))
            return Syntax(playerid, "/wsedit [id] [component] [ammount]");

        wData[wid][wComponent] = component;
		
        Workshop_Save(wid);
		Workshop_Refresh(wid);
		
		SendStaffMessage(X11_TOMATO, "Admin %s has changed the Workshop component ID: %d to %d.", AccountData[playerid][pAdminname], wid, component);   
	}
    return 1;
}


CMD:wsstorage(playerid, params[])
{
	foreach(new wsid : Workshop)
	{
		if(IsPlayerInRangeOfPoint(playerid, 2.5, wData[wsid][wExtposX], wData[wsid][wExtposY], wData[wsid][wExtposZ]))
		{
			//memungkinkan player mempunyai 2 ws
			new accQuery[256];
			mysql_format(g_SQL, accQuery, sizeof(accQuery), "SELECT * FROM `workshop` WHERE `ID` = '%d' AND `leader` = '%e' LIMIT 1", wsid, AccountData[playerid][pName]);
			new Cache:result = mysql_query(g_SQL, accQuery, true);
			if(cache_num_rows())
			{
				new string[400];
				format(string, sizeof(string), "Workshop ID:\t"YELLOW"%d\n"GRAY"Workshop Manager:\t"GREEN"%s\n\t\nToggle Duty\t\n"GRAY"Money Storage:\t({00FF00}$%d)\nComponent Storage:\t(%d)\n"GRAY"Repairkit Storage:\t(%d)\nCreate Repairkit\t\n"GRAY"Invite Member\t\nSet Rank\t\n"GRAY"Kick Member\t\nUbah Nama Workshop\t\n"GRAY"Buka/Kunci Workshop", wsid, wData[wsid][wLeader], wData[wsid][wMoney], wData[wsid][wComponent], wData[wsid][wRepairkid]);
				ShowPlayerDialog(playerid, WORKSHOP_MENU, DIALOG_STYLE_LIST, ""RED"CHAXW TEATER "WHITE"- Workshop Menu", string,"Next","Close");
			}
			else
			{
				if(AccountData[playerid][pWorkshop] != wsid)
					return Error(playerid, "Kamu tidak memiliki akses!");

				new string[400];
				format(string, sizeof(string), "Workshop ID:\t"YELLOW"%d\n"GRAY"Workshop Manager:\t"GREEN"%s\n\t\nToggle Duty\t\n"GRAY"Money Storage:\t({00FF00}$%d)\nComponent Storage:\t(%d)\n"GRAY"Repairkit Storage:\t(%d)\nCreate Repairkit\t\n"GRAY"Invite Member\t\nSet Rank\t\n"GRAY"Kick Member\t\nUbah Nama Workshop\t\n"GRAY"Buka/Kunci Workshop", wsid, wData[wsid][wLeader], wData[wsid][wMoney], wData[wsid][wComponent], wData[wsid][wRepairkid]);
				ShowPlayerDialog(playerid, WORKSHOP_MENU, DIALOG_STYLE_LIST, ""RED"CHAXW TEATER "WHITE"- Workshop Menu", string,"Next","Close");
			}
			cache_delete(result);
		}
	}
	return 1;
}

CMD:lockws(playerid, params[])
{
	foreach(new wid : Workshop)
	{
		if(IsPlayerInRangeOfPoint(playerid, 2.5, wData[wid][wExtposX], wData[wid][wExtposY], wData[wid][wExtposZ]))
		{
			if(!Player_OwnsWorkshop(playerid, wid)) return Error(playerid, "You don't own this workshop.");
			if(!wData[wid][wStatus])
			{
				wData[wid][wStatus] = 1;
				Workshop_Save(wid);
				Workshop_Refresh(wid);

				ShowPlayerFooter(playerid, "You have ~r~closed~w~ your workshop!", 5000);
				PlayerPlaySound(playerid, 1145, 0.0, 0.0, 0.0);
			}
			else
			{
				wData[wid][wStatus] = 0;
				Workshop_Save(wid);
				Workshop_Refresh(wid);

				ShowPlayerFooter(playerid,"You have ~g~opened~w~ your workshop!", 5000);
				PlayerPlaySound(playerid, 1145, 0.0, 0.0, 0.0);
			}
		}
	}
	return 1;
}

CMD:wsann(playerid, params[])
{
	if(AccountData[playerid][pWorkshop] == -1)
		return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan pekerja workshop");

	new lstr[1024];
	format(lstr, sizeof(lstr), "{8D6D48}[BENGKEL] %s {FFFFFF}: %s", AccountData[playerid][pName], params);
	va_SendClientMessageToAll(-1, lstr);
	return 1;
}

