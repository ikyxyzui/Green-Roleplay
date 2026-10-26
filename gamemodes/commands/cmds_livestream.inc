/*
Create : @Putra
Date : 2025-11-6
Modified : 2025-11-6
Description : Live streaming system with Dialog_Show and 3D text above head
*/
#include <YSI_Coding\y_hooks>
enum LiveStreamData {
    bool:lsActive,
    lsPlayerID,
    lsPlatform,
    lsPlayerName[MAX_PLAYER_NAME],
    lsChannelName[64],
    lsCaption[128],
    Text3D:lsText3D
}

new LiveStreams[MAX_LIVE_STREAMS][LiveStreamData];
new PlayerLiveStreamID[MAX_PLAYERS];

new PlatformNames[4][] = {
    "TikTok",
    "YouTube", 
    "Facebook",
    "Nimo"
};

hook OnPlayerConnect(playerid) {
    PlayerLiveStreamID[playerid] = -1;
    return 1;
}

hook OnPlayerDisconnect(playerid, reason) {
    if(PlayerLiveStreamID[playerid] != -1) {
        new streamid = PlayerLiveStreamID[playerid];
        
        // Remove 3D text
        if(IsValidDynamic3DTextLabel(LiveStreams[streamid][lsText3D])) {
            DestroyDynamic3DTextLabel(LiveStreams[streamid][lsText3D]);
        }
        
        LiveStreams[streamid][lsActive] = false;
        LiveStreams[streamid][lsPlayerID] = INVALID_PLAYER_ID;
        LiveStreams[streamid][lsPlatform] = 0;
        LiveStreams[streamid][lsPlayerName][0] = 0;
        LiveStreams[streamid][lsChannelName][0] = 0;
        LiveStreams[streamid][lsCaption][0] = 0;
        LiveStreams[streamid][lsText3D] = Text3D:INVALID_3DTEXT_ID;
        PlayerLiveStreamID[playerid] = -1;
        
        new string[180];
        format(string, sizeof(string), ""RED"[LIVE ENDED] "WHITE"%s telah mengakhiri live streaming mereka (Disconnect).", ReturnName(playerid));
        SendClientMessageToAll(-1, string);
    }
    return 1;
}

hook OnGameModeInit() {
    for(new i = 0; i < MAX_LIVE_STREAMS; i++) {
        LiveStreams[i][lsActive] = false;
        LiveStreams[i][lsPlayerID] = INVALID_PLAYER_ID;
        LiveStreams[i][lsPlatform] = 0;
        LiveStreams[i][lsPlayerName][0] = 0;
        LiveStreams[i][lsChannelName][0] = 0;
        LiveStreams[i][lsCaption][0] = 0;
        LiveStreams[i][lsText3D] = Text3D:INVALID_3DTEXT_ID;
    }
    
    for(new i = 0; i < MAX_PLAYERS; i++) {
        PlayerLiveStreamID[i] = -1;
    }
    return 1;
}

CMD:livemode(playerid, params[]) 
{

    if(!AccountData[playerid][pStreamerCHAXW]) 
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan streamer CHAXW TEATER roleplay");

    if(PlayerLiveStreamID[playerid] != -1) 
    {
        Dialog_Show(playerid, LivePlatform, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER Roleplay "WHITE"- Live Streaming", "TikTok\nYouTube\nFacebook\nNimo\nGanti Nama Akun\nOff Stream", "Pilih", "Batal");
    } else {
        Dialog_Show(playerid, LivePlatform, DIALOG_STYLE_LIST, ""KOTAHIDUP"CHAXW TEATER Roleplay "WHITE"- Live Streaming", "TikTok\nYouTube\nFacebook\nNimo", "Pilih", "Batal");
    }
    return 1;
}

CMD:livestreamlist(playerid, params[])
{
    if(GetActiveLiveStreamsCount() == 0) {
        ShowTDN(playerid, NOTIFICATION_INFO, "Tidak ada live streaming aktif saat ini.");
        return 1;
    }
    
    ShowLiveStreamsList(playerid);
    return 1;
}

ShowLiveStreamsList(playerid)
{
    new string[256], liststring[2048];
    new count = 0;
    
    liststring[0] = EOS; // Clear string
    
    for(new i = 0; i < MAX_LIVE_STREAMS; i++) {
        if(LiveStreams[i][lsActive]) {
            format(string, sizeof(string), "%d - %s - %s - %s - %s", 
                i+1,
                LiveStreams[i][lsPlayerName],
                LiveStreams[i][lsChannelName],
                LiveStreams[i][lsCaption],
                PlatformNames[LiveStreams[i][lsPlatform]]
            );
            
            if(count > 0) strcat(liststring, "\n");
            strcat(liststring, string);
            count++;
            
            // Prevent buffer overflow
            if(strlen(liststring) > 1900) {
                strcat(liststring, "\n... dan lainnya");
                break;
            }
        }
    }
    
    if(count == 0) {
        strcat(liststring, "Tidak ada live streaming yang aktif saat ini.");
    }
    
    Dialog_Show(playerid, LiveList, DIALOG_STYLE_LIST, 
        "Daftar Live Streaming Aktif", 
        liststring, 
        "Tutup", "");
}

CMD:stoplive(playerid, params[])
{
    if(!AccountData[ playerid][pStreamerCHAXW]) 
        return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan streamer CHAXW TEATER roleplay");

    if(PlayerLiveStreamID[playerid] == -1) {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang live streaming!");
        return 1;
    }
    
    StopPlayerLiveStream(playerid);
    return 1;
}

// Dialog callbacks using Dialog_Show system
Dialog:LivePlatform(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    
    if(PlayerLiveStreamID[playerid] != -1) {
        if(listitem == PLATFORM_OFF_STREAM) {
            StopPlayerLiveStream(playerid);
            return 1;
        }
        
        if(listitem == PLATFORM_GANTI_NAMA) {
            Dialog_Show(playerid, LiveChannel, DIALOG_STYLE_INPUT,
                "Ganti Nama Channel",
                "Masukkan nama channel/username baru Anda:",
                "Ubah", "Batal");
            SetPVarInt(playerid, "ChangingChannel", 1);
            return 1;
        }
        
        ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah sedang live streaming! Gunakan 'Off Stream' untuk menghentikan atau 'Ganti Nama Akun' untuk mengubah channel.");
        return 1;
    }
    
    if(listitem > 3) return 1; // Invalid platform
    
    SetPVarInt(playerid, "SelectedPlatform", listitem);
    Dialog_Show(playerid, LiveChannel, DIALOG_STYLE_INPUT,
        "Live Streaming - Nama Channel",
        "Masukkan nama channel/username Anda:",
        "Lanjut", "Batal");
    return 1;
}

Dialog:LiveChannel(playerid, response, listitem, inputtext[])
{
    if(!response) {
        DeletePVar(playerid, "ChangingChannel");
        return 1;
    }
    
    if(strlen(inputtext) < 3 || strlen(inputtext) > 63) {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Nama channel harus antara 3-63 karakter!");
        
        if(GetPVarInt(playerid, "ChangingChannel") == 1) {
            Dialog_Show(playerid, LiveChannel, DIALOG_STYLE_INPUT,
                "Ganti Nama Channel",
                "Masukkan nama channel/username baru Anda:\n"RED"Nama channel harus antara 3-63 karakter!",
                "Ubah", "Batal");
        } else {
            Dialog_Show(playerid, LiveChannel, DIALOG_STYLE_INPUT, 
                "Live Streaming - Nama Channel", 
                "Masukkan nama channel/username Anda:\n"RED"Nama channel harus antara 3-63 karakter!", 
                "Lanjut", "Batal");
        }
        return 1;
    }
    
    if(GetPVarInt(playerid, "ChangingChannel") == 1) {
        if(PlayerLiveStreamID[playerid] == -1) {
            ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang live streaming!");
            DeletePVar(playerid, "ChangingChannel");
            return 1;
        }
        
        new streamid = PlayerLiveStreamID[playerid];
        new oldchannel[64];
        format(oldchannel, sizeof(oldchannel), "%s", LiveStreams[streamid][lsChannelName]);
        format(LiveStreams[streamid][lsChannelName], 64, "%s", inputtext);
        
        // Update 3D text
        Update3DTextForPlayer(playerid);
        
        new string[180];
        format(string, sizeof(string), 
            ""YELLOW"[LIVE UPDATE] "WHITE"%s mengubah nama channel dari '%s' menjadi '%s'", 
            ReturnName(playerid), oldchannel, inputtext);
        SendClientMessageToAll(-1, string);
        
        ShowTDN(playerid, NOTIFICATION_INFO, "Nama channel berhasil diubah!");
        DeletePVar(playerid, "ChangingChannel");
        return 1;
    }
    
    SetPVarString(playerid, "ChannelName", inputtext);
    Dialog_Show(playerid, LiveCaption, DIALOG_STYLE_INPUT,
        "Live Streaming - Caption Video",
        "Masukkan caption/judul untuk live streaming Anda:",
        "Mulai Live", "Batal");
    return 1;
}

Dialog:LiveCaption(playerid, response, listitem, inputtext[])
{
    if(!response) return 1;
    
    if(strlen(inputtext) < 5 || strlen(inputtext) > 127) {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Caption harus antara 5-127 karakter!");
        Dialog_Show(playerid, LiveCaption, DIALOG_STYLE_INPUT,
            "Live Streaming - Caption Video",
            "Masukkan caption/judul untuk live streaming Anda:\n"RED"Caption harus antara 5-127 karakter!",
            "Mulai Live", "Batal");
        return 1;
    }
    
    StartPlayerLiveStream(playerid, inputtext);
    return 1;
}

Dialog:LiveList(playerid, response, listitem, inputtext[])
{
    return 1;
}

stock StartPlayerLiveStream(playerid, caption[])
{
    new streamslot = -1;
    for(new i = 0; i < MAX_LIVE_STREAMS; i++) {
        if(!LiveStreams[i][lsActive]) {
            streamslot = i;
            break;
        }
    }
    
    if(streamslot == -1) {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Maksimal live streaming telah tercapai! Coba lagi nanti.");
        return 0;
    }
    
    new platform = GetPVarInt(playerid, "SelectedPlatform");
    new channelname[64];
    GetPVarString(playerid, "ChannelName", channelname, sizeof(channelname));
    
    LiveStreams[streamslot][lsActive] = true;
    LiveStreams[streamslot][lsPlayerID] = playerid;
    LiveStreams[streamslot][lsPlatform] = platform;
    GetPlayerName(playerid, LiveStreams[streamslot][lsPlayerName], MAX_PLAYER_NAME);
    format(LiveStreams[streamslot][lsChannelName], 64, "%s", channelname);
    format(LiveStreams[streamslot][lsCaption], 128, "%s", caption);
    
    PlayerLiveStreamID[playerid] = streamslot;
    
    Create3DTextForPlayer(playerid);
    
    DeletePVar(playerid, "SelectedPlatform");
    DeletePVar(playerid, "ChannelName");
    
    new announcestring[256];
    format(announcestring, sizeof(announcestring), 
        ""GREEN"[LIVE STREAMING] "WHITE"%s sedang live di %s! Channel: %s | %s", 
        ReturnName(playerid), PlatformNames[platform], channelname, caption);
    SendClientMessageToAll(-1, announcestring);
    ShowTDN(playerid, NOTIFICATION_INFO, "Live streaming Anda telah dimulai! Gunakan /stoplive untuk menghentikan.");
    
    return 1;
}

stock StopPlayerLiveStream(playerid)
{
    if(PlayerLiveStreamID[playerid] == -1) {
        ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak sedang live streaming!");
        return 0;
    }
    
    new streamid = PlayerLiveStreamID[playerid];
    
    if(IsValidDynamic3DTextLabel(LiveStreams[streamid][lsText3D])) {
        DestroyDynamic3DTextLabel(LiveStreams[streamid][lsText3D]);
    }
    
    LiveStreams[streamid][lsActive] = false;
    LiveStreams[streamid][lsPlayerID] = INVALID_PLAYER_ID;
    LiveStreams[streamid][lsPlatform] = 0;
    LiveStreams[streamid][lsPlayerName][0] = 0;
    LiveStreams[streamid][lsChannelName][0] = 0;
    LiveStreams[streamid][lsCaption][0] = 0;
    LiveStreams[streamid][lsText3D] = Text3D:INVALID_3DTEXT_ID;
    PlayerLiveStreamID[playerid] = -1;
    
    ShowTDN(playerid, NOTIFICATION_INFO, "Live streaming Anda telah dihentikan.");
    
    new string[180];
    format(string, sizeof(string), ""RED"[LIVE ENDED] "WHITE"%s telah mengakhiri live streaming mereka.", ReturnName(playerid));
    SendClientMessageToAll(-1, string);
    
    return 1;
}

stock Create3DTextForPlayer(playerid)
{
    if(PlayerLiveStreamID[playerid] == -1) return 0;
    
    new streamid = PlayerLiveStreamID[playerid];
    new text3d_string[128];
    
    format(text3d_string, sizeof(text3d_string), 
        ""YELLOW"LIVESTREAM: "CYAN"%s : @%s", 
        PlatformNames[LiveStreams[streamid][lsPlatform]], 
        LiveStreams[streamid][lsChannelName]);
    
    LiveStreams[streamid][lsText3D] = CreateDynamic3DTextLabel(
        text3d_string,
        0xF6FF00FF,
        0.0, 0.0, 0.0,
        30.0,
        playerid,
        INVALID_VEHICLE_ID,
        1,
        -1, -1, -1,
        100.0
    );
    
    return 1;
}

stock Update3DTextForPlayer(playerid)
{
    if(PlayerLiveStreamID[playerid] == -1) return 0;
    
    new streamid = PlayerLiveStreamID[playerid];
    
    if(IsValidDynamic3DTextLabel(LiveStreams[streamid][lsText3D])) {
        DestroyDynamic3DTextLabel(LiveStreams[streamid][lsText3D]);
    }
    
    Create3DTextForPlayer(playerid);
    
    return 1;
}

stock GetPlayerLiveStreamInfo(playerid, info[], size) {
    if(PlayerLiveStreamID[playerid] == -1) {
        format(info, size, "Tidak sedang live streaming");
        return 0;
    }
    
    new streamid = PlayerLiveStreamID[playerid];
    format(info, size, "Live di %s | Channel: %s", 
        PlatformNames[LiveStreams[streamid][lsPlatform]], 
        LiveStreams[streamid][lsChannelName]);
    return 1;
}

stock IsPlayerLiveStreaming(playerid)
{
    return (PlayerLiveStreamID[playerid] != -1);
}

stock GetActiveLiveStreamsCount()
{
    new count = 0;
    for(new i = 0; i < MAX_LIVE_STREAMS; i++) {
        if(LiveStreams[i][lsActive]) count++;
    }
    return count;
}