
/* harus nya camera diem itu camera pas awal pemain masukin password
	tapi kita samain aja camera pas awal spawn langsung ke camera character 1 (lagi duduk)*/
#define CAMERA1_DIEM 1200.00, -2365.33, 12.85 
#define CAMERA2_DIEM 1200.09, -2364.33, 12.90

#define CAMERA1_CHAR0 1200.00, -2365.33, 12.85
#define CAMERA2_CHAR0 1200.09, -2364.33, 12.90

#define CAMERA1_CHAR1 1224.28, -2355.57, 10.70
#define CAMERA2_CHAR1 1223.35, -2355.94, 10.64

#define CAMERA1_CHAR2 1202.02, -2349.23, 16.35
#define CAMERA2_CHAR2 1201.25, -2348.60, 16.22

#define SKINPOS_CHAR0 1201.2458,-2358.8508,13.1865
#define SKINPOS_CHAR1 1215.4492,-2359.2078,9.3756
#define SKINPOS_CHAR2 1196.4332,-2344.2554,15.3612


#define SKINA_CHAR0 217.6767
#define SKINA_CHAR1 218.671
#define SKINA_CHAR2 222.9431

ShowCharacterList(playerid) 
{
	forex(i, 45) PlayerTextDrawShow(playerid, UI_Char[playerid][i]);
	SelectTextDraw(playerid, -1);
	SetSpawnInfo(playerid, 0, CharacterSkin[playerid][0], 1201.2458,-2358.8508,13.1865,217.6767, 0, 0, 0, 0, 0, 0);
	SpawnPlayer(playerid);
	SetPlayerVirtualWorld(playerid, playerid+1);
	Streamer_UpdateEx(playerid, 1201.2458,-2358.8508,13.1865);
	SetCameraBehindPlayer(playerid);
	defer ApplyAnim(playerid);
	CharacterState[playerid] = true;
	SetPlayerCameraPos(playerid, CAMERA1_CHAR0);
	SetPlayerCameraLookAt(playerid, CAMERA2_CHAR0);

	if(PlayerChar[playerid][0][0] == EOS) 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][41], sprintf("Create"));
	}
	else 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][41], sprintf("%s", PlayerChar[playerid][0]));
	}
	if(PlayerChar[playerid][1][0] == EOS) 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][42], sprintf("Create"));
	}
	else 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][42], sprintf("%s", PlayerChar[playerid][1]));
	}
	if(PlayerChar[playerid][2][0] == EOS) 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][43], sprintf("Create"));
	}
	else 
	{
		PlayerTextDrawSetString(playerid, UI_Char[playerid][43], sprintf("%s", PlayerChar[playerid][2]));
	}

	ApplyAnimation(playerid, "MISC", "Seat_talk_01", 4.1, true, false, false, false, 0);
    return 1;
}

HideCharacterList(playerid)
{
	forex(i, 45) PlayerTextDrawHide(playerid, UI_Char[playerid][i]);
	CancelSelectTextDraw(playerid);
}

timer ApplyAnim[999](playerid) {
  ApplyAnimation(playerid, "MISC", "Seat_talk_01", 4.1, true, false, false, false, 0);
  return 1;
}

hook OnClickDynPlayerTextDraw(playerid, PlayerText: textid)
{
	if(textid == UI_Char[playerid][38])
	{
		if(SelectCharacter[playerid] == -1)
			return Error(playerid, "Pilih karakter yang akan di mainkan!");

		if(PlayerChar[playerid][SelectCharacter[playerid]][0] != EOS)
		{
			HideCharacterList(playerid);
			AccountData[playerid][pChar] = SelectCharacter[playerid];
			CharacterState[playerid] = false;
			SetPlayerName(playerid, PlayerChar[playerid][SelectCharacter[playerid]]);
			StopStream(playerid);

			mysql_tquery(g_SQL, sprintf("SELECT * FROM `player_characters` WHERE `Char_Name` = '%s' LIMIT 1;", PlayerChar[playerid][AccountData[playerid][pChar]]), "LoadPlayerData", "d", playerid);
		}
		else
		{
			HideCharacterList(playerid);

			CharacterState[playerid] = false;
			
			ShowPlayerDialog(playerid, DIALOG_MAKE_CHAR, DIALOG_STYLE_INPUT, ""KOTAHIDUP"CHAXW TEATER Roleplay "WHITE"- Pembuatan Karakter",
			""WHITE"Selamat Datang di "KOTAHIDUP"CHAXW TEATER\n"WHITE"Sebelum bermain anda harus membuat karakter terlebih dahulu\
			\nMasukkan nama karakter hanya dengan nama orang Indonesia\nCth: Dudung_Sutarman, Aldy_Firmansyah", "Input", "");
			
		}
	}
	if(textid == UI_Char[playerid][7])
	{
		if(SelectCharacter[playerid] == -1)
		{
			InterpolateCameraPos(playerid, CAMERA1_DIEM, CAMERA1_CHAR0, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_DIEM, CAMERA2_CHAR0, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 1)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR1, CAMERA1_CHAR0, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR1, CAMERA2_CHAR0, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 2)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR2, CAMERA1_CHAR0, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR2, CAMERA2_CHAR0, 2000, CAMERA_MOVE);
		}
		if(PlayerChar[playerid][0][0] != EOS)
		{
			SetPlayerPos(playerid, SKINPOS_CHAR0);
			Streamer_UpdateEx(playerid, SKINPOS_CHAR0);
			SetPlayerFacingAngle(playerid, SKINA_CHAR0);
			SetPlayerSkin(playerid, CharacterSkin[playerid][0]);
			ApplyAnimation(playerid, "MISC", "Seat_talk_01", 4.1, true, false, false, false, 0);
		}
		//GetPlayerName(playerid, PlayerChar[playerid][0][0], MAX_PLAYER_NAME);
		SelectCharacter[playerid] = 0;
	}
	if(textid == UI_Char[playerid][12])
	{
		if(SelectCharacter[playerid] == -1)
		{
			InterpolateCameraPos(playerid, CAMERA1_DIEM, CAMERA1_CHAR1, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_DIEM, CAMERA2_CHAR1, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 0)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR0, CAMERA1_CHAR1, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR0, CAMERA2_CHAR1, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 2)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR2, CAMERA1_CHAR1, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR2, CAMERA2_CHAR1, 2000, CAMERA_MOVE);
		}
		if(PlayerChar[playerid][1][0] != EOS)
		{
			SetPlayerPos(playerid, SKINPOS_CHAR1);
			Streamer_UpdateEx(playerid, SKINPOS_CHAR1);
			SetPlayerFacingAngle(playerid, SKINA_CHAR1);
			SetPlayerSkin(playerid, CharacterSkin[playerid][1]);
			ApplyAnimation(playerid,"SWORD","sword_block",50.0 ,0,1,0,1,1);
		}
		//GetPlayerName(playerid, PlayerChar[playerid][1][0], MAX_PLAYER_NAME);
		SelectCharacter[playerid] = 1;
	}
	if(textid == UI_Char[playerid][17])
	{
		if(SelectCharacter[playerid] == -1)
		{
			InterpolateCameraPos(playerid, CAMERA1_DIEM, CAMERA1_CHAR2, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_DIEM, CAMERA2_CHAR2, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 0)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR0, CAMERA1_CHAR2, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR0, CAMERA2_CHAR2, 2000, CAMERA_MOVE);
		}
		else if(SelectCharacter[playerid] == 1)
		{
			InterpolateCameraPos(playerid, CAMERA1_CHAR1, CAMERA1_CHAR2, 2000, CAMERA_MOVE);
			InterpolateCameraLookAt(playerid, CAMERA2_CHAR1, CAMERA2_CHAR2, 2000, CAMERA_MOVE);
		}
		if(PlayerChar[playerid][2][0] != EOS)
		{
			SetPlayerPos(playerid, SKINPOS_CHAR2);
			Streamer_UpdateEx(playerid, SKINPOS_CHAR2);
			SetPlayerFacingAngle(playerid, SKINA_CHAR2);
			SetPlayerSkin(playerid, CharacterSkin[playerid][2]);
			ApplyAnimation(playerid, "GYMNASIUM", "GYMshadowbox", 4.1, true, false, false, false, 0);
		} 
		SelectCharacter[playerid] = 2;
	}
	return 1;
}