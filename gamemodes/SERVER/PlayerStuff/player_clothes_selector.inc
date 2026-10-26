#define Clothes:: Clothes

#include <YSI_Coding\y_hooks>

enum Clothes::Enumator
{
    Skins,
    Select[5],
    Bone[7]
}
new Clothes::Data[MAX_PLAYERS][Clothes::Enumator];

new Bone_Name[][] = 
{
	"None",
	"Spine",
	"Head",
	"Left upper arm",
	"Right upper arm",
	"Left hand",
	"Right hand",
	"Left thigh",
	"Right thigh",
	"Left foot",
	"Right foot",
	"Right calf",
	"Left calf",
	"Left forearm",
	"Right forearm",
	"Left clavicle",
	"Right clavicle",
	"Neck",
	"Jaw"
};

new AksesorisHat[87] =
{
	18953, 18954, 19554, 18960, 18974, 19067, 19068, 19069, 18891, 18892, 18893, 18894, 18895, 18896, 18897, 18898, 18899, 18900, 18908,
	18940, 18939, 18941, 18942, 18943, 19160, 18636, 18926, 18927, 18928, 18929, 18930, 18931, 18932, 18933, 18934, 18935, 18952, 18976, 18977, 
	18979, 19077, 19517, 19161, 19162, 2054, 18961, 18964, 18965, 18966, 19558, 18955, 18956, 18957, 18958, 18959, 18638, 19520, 18947, 18948, 
	19064,19065, 19066, 18975, 19516, 18639, 18645, 18962, 19095, 19096, 19099, 19100, 19487, 19136, 19330, 19331, 19137, 19528, 19093,
	3002, 3000, 3100, 3105, 3104, 3101, 3102, 3103, 3002,
};

new BackpackToys[7] = 
{
	11745, 19559, 1550, 3026, 371, 1210, 11738,
};

new GlassesToys[33] = 
{
	19138, 19139, 19140, 19006, 19007, 19008, 19009, 19010, 19011, 19012, 19013, 19014, 19015, 19016, 19017, 19018,
	19019, 19020, 19021, 19022, 19023, 19024, 19025, 19026, 19027, 19028, 19029, 19030, 19031, 19032, 19033, 19034, 19035,
};

new AksesorisToys[38] = 
{
	19515, 19142, 19621, 19623, 
	19584, 19591, 19592, 2226, 19878, 
	19038, 19036, 19163, 18919, 18912, 
	18913, 18914, 18915, 18916, 18917, 
	18918, 18911, 18920, 11704, 19037, 
	19317, 19318, 336, 339, 325, 19625,
	19801, 19163, 19904, 2226, 2487, 2614,
	11712, 18635,
};

new ClothesSkinMale[177] = 
{
	1, 2, 3, 4, 5, 6, 7, 8, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29,
	30, 32, 33, 34, 35, 36, 37, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 58, 59, 60, 61,
	62, 66, 67, 68, 71, 72, 73, 78, 79, 80, 81, 82, 83, 84, 86, 94, 95, 96, 97, 98, 100,
	101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
	117, 118, 120, 122, 123, 124, 125, 126, 127, 128, 132, 133, 134, 135, 136, 137, 142, 
	143, 144, 146, 147, 149, 153, 154, 156, 158, 159, 160, 161, 162, 168, 170, 173, 174,
	175, 176, 177, 179, 180, 182, 183, 18, 185, 186, 187, 200, 202, 203, 204, 206,
	208, 209, 210, 212, 213, 217, 220, 221, 222, 223, 229, 230, 234, 235, 236, 239, 240,
	241, 242, 247, 248, 249, 250, 252, 253, 254, 255, 258, 259, 260, 261, 262, 264, 269,
	270, 271, 272, 273, 289, 290, 291, 292, 293, 296, 297, 299
};

new ClothesSkinFemale[60] = 
{
	9, 10, 11, 12, 13, 31, 38, 39, 40, 41, 53, 54, 55, 56, 63, 64, 65, 69, 75, 76, 77, 87,
	88, 89, 90, 91, 93, 129, 130, 131, 138, 139, 140, 145, 148, 151, 152, 157, 169, 178, 191,
	193, 192, 195, 196, 197, 198, 199, 205, 207, 211, 214, 216, 219, 224, 225, 226, 233, 237, 
	251
};

Clothes::ResetVars(playerid)
{
    forex(cla, 5) {
        Clothes::Data[playerid][Select][cla] = -1;
        Clothes::Data[playerid][Bone][cla] = 1;
    } 
    Clothes::Data[playerid][Skins] = -1;
}

ShowClothSelection(playerid, bool:show) {
    if(show) {
        AllGui_Status(playerid, false);
        forex(i, 125) {
            PlayerTextDrawShow(playerid, cloth_Txd[playerid][i]);
        }
        //SetCinematicCamera(playerid);
        Clothes::ResetVars(playerid);
        SelectTextDraw(playerid, X11_GRAY);
        TogglePlayerControllable(playerid, 0);
        SetClothStringTextDraw(playerid);
        SetPVarInt(playerid, "LagiBeliSkin", 1);
        
    } else{
        forex(i, 125) {
            PlayerTextDrawHide(playerid, cloth_Txd[playerid][i]);
        }
        Clothes::ResetVars(playerid);
        SetCameraBehindPlayer(playerid);
        CancelSelectTextDraw(playerid);
        TogglePlayerControllable(playerid, 1);

        for(new i = 6; i < 10; i++) RemovePlayerAttachedObject(playerid, i);
        SetPlayerSkin(playerid, AccountData[playerid][pSkin]);
        AllGui_Status(playerid, true);
        SetPVarInt(playerid, "LagiBeliSkin", 0);
    }
    return 1;
}

SetClothStringTextDraw(playerid)
{
    new 
        minsty[128],
        minstx[128];


    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][2] + 1, sizeof(GlassesToys));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][99], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][2] + 1, sizeof(Bone_Name));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][100], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][3] + 1, sizeof(AksesorisToys));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][101], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][3] + 1, sizeof(Bone_Name));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][102], minsty);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Skins] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][105], minstx);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][0] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][106], minstx);

    format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][0]]);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][107], minsty);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][1] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][108], minstx);

    format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][1]]);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][109], minsty);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][2] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][110], minstx);

    format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][2]]);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][111], minsty);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][3] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][112], minstx);

    format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][3]]);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][113], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Skins] + 1, ((AccountData[playerid][pGender] == 1) ? sizeof(ClothesSkinMale) : sizeof(ClothesSkinFemale)));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][116], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][0] + 1, sizeof(AksesorisHat));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][118], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][0] + 1, sizeof(Bone_Name));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][119], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][1] + 1, sizeof(BackpackToys));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][120], minsty);

    format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][1] + 1, sizeof(Bone_Name));
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][121], minsty);

    format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Skins] + 1);
    PlayerTextDrawSetString(playerid, cloth_Txd[playerid][122], minstx);

}

hook OnClickDynPlayerTextDraw(playerid, PlayerText:textid) {
    if(textid == cloth_Txd[playerid][34]) { //skin male next
        if(AccountData[playerid][pGender] == 2) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Skins] == sizeof(ClothesSkinMale) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Skins] ++;
        SetPlayerSkin(playerid, (AccountData[playerid][pGender] == 1) ? ClothesSkinMale[Clothes::Data[playerid][Skins]] : ClothesSkinFemale[Clothes::Data[playerid][Skins]]);

        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Skins] + 1, ((AccountData[playerid][pGender] == 1) ? sizeof(ClothesSkinMale) : sizeof(ClothesSkinFemale)));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][116], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Skins] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][122], minstx);
    }
    if(textid == cloth_Txd[playerid][33]) { //skin male prev
        if(AccountData[playerid][pGender] == 2) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Skins] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Skins] --;
        SetPlayerSkin(playerid, (AccountData[playerid][pGender] == 1) ? ClothesSkinMale[Clothes::Data[playerid][Skins]] : ClothesSkinFemale[Clothes::Data[playerid][Skins]]);

        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Skins] + 1, ((AccountData[playerid][pGender] == 1) ? sizeof(ClothesSkinMale) : sizeof(ClothesSkinFemale)));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][116], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Skins] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][122], minstx);
    }

    if(textid == cloth_Txd[playerid][36]) { //skin female next
        if(AccountData[playerid][pGender] == 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Skins] == sizeof(ClothesSkinFemale) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Skins] ++;
        SetPlayerSkin(playerid, (AccountData[playerid][pGender] == 1) ? ClothesSkinMale[Clothes::Data[playerid][Skins]] : ClothesSkinFemale[Clothes::Data[playerid][Skins]]);

        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Skins] + 1, ((AccountData[playerid][pGender] == 1) ? sizeof(ClothesSkinMale) : sizeof(ClothesSkinFemale)));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][116], minsty);

        format(minstx, sizeof minstx, "%02d", Clothes::Data[playerid][Skins] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][105], minstx);
    }
    if(textid == cloth_Txd[playerid][35]) { //skin female prev
        if(AccountData[playerid][pGender] == 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Skins] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Skins] --;
        SetPlayerSkin(playerid, (AccountData[playerid][pGender] == 1) ? ClothesSkinMale[Clothes::Data[playerid][Skins]] : ClothesSkinFemale[Clothes::Data[playerid][Skins]]);

        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Skins] + 1, ((AccountData[playerid][pGender] == 1) ? sizeof(ClothesSkinMale) : sizeof(ClothesSkinFemale)));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][116], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Skins] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][105], minstx);
    }


    if(textid == cloth_Txd[playerid][38]) { //hat next
        if (Clothes::Data[playerid][Select][0] < 0) Clothes::Data[playerid][Select][0] = 0;
        if(Clothes::Data[playerid][Select][0] == sizeof(AksesorisHat) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][0] ++;

        SetPlayerAttachedObject(playerid, 6, AksesorisHat[Clothes::Data[playerid][Select][0]], Clothes::Data[playerid][Bone][0], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        //printf("%d %d", AksesorisHat[Clothes::Data[playerid][Select][0]], Clothes::Data[playerid][Bone][0]);
       
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][0] + 1, sizeof(AksesorisHat));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][118], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][0] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][106], minstx);
    }

    if(textid == cloth_Txd[playerid][37]) { //hat prev
        if(Clothes::Data[playerid][Select][0] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][0] --;

        SetPlayerAttachedObject(playerid, 6, AksesorisHat[Clothes::Data[playerid][Select][0]], Clothes::Data[playerid][Bone][0], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][0] + 1, sizeof(AksesorisHat));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][118], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][0] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][106], minstx);
    }

    if(textid == cloth_Txd[playerid][42]) { //backpack next
        if (Clothes::Data[playerid][Select][2] < 0) Clothes::Data[playerid][Select][2] = 0;
        if(Clothes::Data[playerid][Select][1] == sizeof(BackpackToys) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][1] ++;

        SetPlayerAttachedObject(playerid, 7, BackpackToys[Clothes::Data[playerid][Select][1]], Clothes::Data[playerid][Bone][1], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][1] + 1, sizeof(BackpackToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][120], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][1] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][108], minstx);
    }

    if(textid == cloth_Txd[playerid][41]) { //backpack prev
        if(Clothes::Data[playerid][Select][1] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][1] --;

        SetPlayerAttachedObject(playerid, 7, BackpackToys[Clothes::Data[playerid][Select][1]], Clothes::Data[playerid][Bone][1], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][1] + 1, sizeof(BackpackToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][120], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][1] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][108], minstx);
    }

    if(textid == cloth_Txd[playerid][46]) { //glasses next
        if (Clothes::Data[playerid][Select][2] < 0) Clothes::Data[playerid][Select][2] = 0;

        if (Clothes::Data[playerid][Select][2] >= sizeof(GlassesToys) - 1)
        {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][2] ++;

        SetPlayerAttachedObject(playerid, 8, GlassesToys[Clothes::Data[playerid][Select][2]], Clothes::Data[playerid][Bone][2], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][2] + 1, sizeof(GlassesToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][99], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][2] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][110], minstx);
    }

    if(textid == cloth_Txd[playerid][45]) { //glasses prev
        if(Clothes::Data[playerid][Select][2] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][2] --;

        SetPlayerAttachedObject(playerid, 8, GlassesToys[Clothes::Data[playerid][Select][2]], Clothes::Data[playerid][Bone][2], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][2] + 1, sizeof(GlassesToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][99], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][2] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][110], minstx);
    }

    if(textid == cloth_Txd[playerid][50]) { //toys next
        if (Clothes::Data[playerid][Select][3] < 0) Clothes::Data[playerid][Select][3] = 0;
        if(Clothes::Data[playerid][Select][3] == sizeof(AksesorisToys) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][3] ++;

        SetPlayerAttachedObject(playerid, 9, AksesorisToys[Clothes::Data[playerid][Select][3]], Clothes::Data[playerid][Bone][3], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][3] + 1, sizeof(AksesorisToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][101], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][3] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][112], minstx);
    }

    if(textid == cloth_Txd[playerid][49]) { //toys prev
        if(Clothes::Data[playerid][Select][3] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Select][2] --;

        SetPlayerAttachedObject(playerid, 9, AksesorisToys[Clothes::Data[playerid][Select][3]], Clothes::Data[playerid][Bone][3], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128],
            minstx[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Select][3] + 1, sizeof(AksesorisToys));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][101], minsty);

        format(minstx, sizeof minstx, "%d", Clothes::Data[playerid][Select][3] + 1);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][112], minstx);
    }

    if(textid == cloth_Txd[playerid][40]) { //bone hat next
        if (Clothes::Data[playerid][Bone][0] < 0) Clothes::Data[playerid][Bone][0] = 0;

        if(Clothes::Data[playerid][Select][0] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }

        if(Clothes::Data[playerid][Bone][0] == sizeof(Bone_Name) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][0] ++;

        SetPlayerAttachedObject(playerid, 6, AksesorisHat[Clothes::Data[playerid][Select][0]], Clothes::Data[playerid][Bone][0], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][0] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][119], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][0]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][107], minsty);
    }

    if(textid == cloth_Txd[playerid][39]) { //bone hat prev
        if(Clothes::Data[playerid][Select][0] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][0] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][0] --;

        SetPlayerAttachedObject(playerid, 6, AksesorisHat[Clothes::Data[playerid][Select][0]], Clothes::Data[playerid][Bone][0], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][0] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][119], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][0]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][107], minsty);
    }

    if(textid == cloth_Txd[playerid][44]) { //bone backpack next
        if (Clothes::Data[playerid][Bone][1] < 0) Clothes::Data[playerid][Bone][1] = 0;
        if(Clothes::Data[playerid][Select][1] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][1] == sizeof(Bone_Name) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][1] ++;

        SetPlayerAttachedObject(playerid, 7, BackpackToys[Clothes::Data[playerid][Select][1]], Clothes::Data[playerid][Bone][1], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][1] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][121], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][1]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][109], minsty);
    }

    if(textid == cloth_Txd[playerid][43]) { //bone backpack prev
        if(Clothes::Data[playerid][Select][1] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][1] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][1] --;

        SetPlayerAttachedObject(playerid, 7, BackpackToys[Clothes::Data[playerid][Select][1]], Clothes::Data[playerid][Bone][1], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][1] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][121], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][1]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][109], minsty);
    }

    if(textid == cloth_Txd[playerid][48]) { //bone glasses next
        if (Clothes::Data[playerid][Bone][2] < 0) Clothes::Data[playerid][Bone][2] = 0;
        if(Clothes::Data[playerid][Select][2] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][2] == sizeof(Bone_Name) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][2] ++;

        SetPlayerAttachedObject(playerid, 8, GlassesToys[Clothes::Data[playerid][Select][2]], Clothes::Data[playerid][Bone][2], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][2] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][100], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][2]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][111], minsty);
    }

    if(textid == cloth_Txd[playerid][47]) { //bone glasses prev
        if(Clothes::Data[playerid][Select][2] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][2] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][2] --;

        SetPlayerAttachedObject(playerid, 8, GlassesToys[Clothes::Data[playerid][Select][2]], Clothes::Data[playerid][Bone][2], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][2] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][100], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][2]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][111], minsty);
    }

    if(textid == cloth_Txd[playerid][52]) { //bone toys next
        if (Clothes::Data[playerid][Bone][3] < 0) Clothes::Data[playerid][Bone][3] = 0;
        if(Clothes::Data[playerid][Select][3] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][3] == sizeof(Bone_Name) - 1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][3] ++;

        SetPlayerAttachedObject(playerid, 9, AksesorisToys[Clothes::Data[playerid][Select][3]], Clothes::Data[playerid][Bone][3], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][3] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][102], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][3]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][113], minsty);
    }

    if(textid == cloth_Txd[playerid][51]) { //bone toys prev
        if(Clothes::Data[playerid][Select][3] == -1) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        if(Clothes::Data[playerid][Bone][3] == 0) {
            PlayerPlaySound(playerid, 4203, 0, 0, 0);
            return 0;
        }
        else Clothes::Data[playerid][Bone][3] --;

        SetPlayerAttachedObject(playerid, 9, AksesorisToys[Clothes::Data[playerid][Select][3]], Clothes::Data[playerid][Bone][3], 0.269, 0.000, 0.000, 0.000, 0.000, 0.000, 1.000, 1.000, 1.000);
        
        static 
            minsty[128];

        format(minsty, sizeof minsty, "%02d/%d", Clothes::Data[playerid][Bone][3] + 1, sizeof(Bone_Name));
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][102], minsty);

        format(minsty, sizeof minsty, "%s", Bone_Name[Clothes::Data[playerid][Bone][3]]);
        PlayerTextDrawSetString(playerid, cloth_Txd[playerid][113], minsty);
    }

    if(textid == cloth_Txd[playerid][59]) { //exit
        ShowClothSelection(playerid, false);
    } 
    if(textid == cloth_Txd[playerid][58]) { //save

        Dialog_Show(playerid, ClothConfirm, DIALOG_STYLE_MSGBOX, ""KOTAHIDUP"CHAXW TEATER "WHITE"- Clothes Confirm", ""TOMATO"WARNING: "WHITE"Slot anda toys/aksesoris anda akan terganti sesuai urutan slot yang anda pilin\n"GRAY"(Apakah anda yakin untuk melanjutkan? pilih Select & Cancel di bawah ini)", "Select", "Cancel");
    }   
    if(textid == cloth_Txd[playerid][58]) { //camera
        static
            count = 0;

        if(count == 1) {
            count --;
            SetCinematicCamera(playerid);
        }
        if(count == 0) {
            count ++;
            SetCameraBehindPlayer(playerid);
        }
    }
    return 1;
}

Dialog:ClothConfirm(playerid, response, listitem, inputtext[])
{
    if(!response) return Info(playerid, "Anda membatalkan pilihan");

    new 
        bool:price[6],
        count = 0
    ;

    if(Clothes::Data[playerid][Skins] > -1) {
        if(AccountData[playerid][pGender] == 1) {
            AccountData[playerid][pSkin] = ClothesSkinMale[Clothes::Data[playerid][Skins]];
        }
        if(AccountData[playerid][pGender] == 2) {
            AccountData[playerid][pSkin] = ClothesSkinFemale[Clothes::Data[playerid][Skins]];
        }
        SetPlayerSkin(playerid, AccountData[playerid][pSkin]);
        price[1] = true;
    } 
    if(Clothes::Data[playerid][Select][0] > -1) {

        pToys[playerid][0][toy_model] = AksesorisHat[Clothes::Data[playerid][Select][0]];
        pToys[playerid][0][toy_bone] = Clothes::Data[playerid][Bone][0];
        
        if(AccountData[playerid][PurchasedToy] == false)
        {
            new query[255];
            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `toys` (`Owner`) VALUES ('%s')" , AccountData[playerid][pName]);
            mysql_tquery(g_SQL, query);
        }
        
        SetPlayerAttachedObject(playerid, 0, pToys[playerid][0][toy_model], pToys[playerid][0][toy_bone]);
        MySQL_SavePlayerToys(playerid);
        price[2] = true;
    }  
    if(Clothes::Data[playerid][Select][1] > -1) {
        pToys[playerid][3][toy_model] = BackpackToys[Clothes::Data[playerid][Select][1]];
        pToys[playerid][3][toy_bone] = Clothes::Data[playerid][Bone][1];
        
        if(AccountData[playerid][PurchasedToy] == false)
        {
            new query[255];
            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `toys` (`Owner`) VALUES ('%s')" , AccountData[playerid][pName]);
            mysql_tquery(g_SQL, query);
        }

        SetPlayerAttachedObject(playerid, 3, pToys[playerid][3][toy_model], pToys[playerid][3][toy_bone]);
        MySQL_SavePlayerToys(playerid);
        price[3] = true;
    }
    if(Clothes::Data[playerid][Select][2] > -1) {
        pToys[playerid][1][toy_model] = GlassesToys[Clothes::Data[playerid][Select][2]];
        pToys[playerid][1][toy_bone] = Clothes::Data[playerid][Bone][2];
        
        if(AccountData[playerid][PurchasedToy] == false)
        {
            new query[255];
            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `toys` (`Owner`) VALUES ('%s')" , AccountData[playerid][pName]);
            mysql_tquery(g_SQL, query);
        }

        SetPlayerAttachedObject(playerid, 1, pToys[playerid][1][toy_model], pToys[playerid][1][toy_bone]);
        MySQL_SavePlayerToys(playerid);
        price[4] = true;
    }
    if(Clothes::Data[playerid][Select][3] > -1) {
        pToys[playerid][2][toy_model] = AksesorisToys[Clothes::Data[playerid][Select][3]];
        pToys[playerid][2][toy_bone] = Clothes::Data[playerid][Bone][3];
        
        if(AccountData[playerid][PurchasedToy] == false)
        {
            new query[255];
            mysql_format(g_SQL, query, sizeof(query), "INSERT INTO `toys` (`Owner`) VALUES ('%s')" , AccountData[playerid][pName]);
            mysql_tquery(g_SQL, query);
        }

        SetPlayerAttachedObject(playerid, 2, pToys[playerid][2][toy_model], pToys[playerid][2][toy_bone]);
        MySQL_SavePlayerToys(playerid);
        price[5] = true;
    }

    forex(i, 6)
    {
        if(price[i] == true) {
            count ++;
            ShowTDN(playerid, NOTIFICATION_INFO, sprintf("Berhasil membeli Clothes seharga: %s", FormatMoney(50*count)));
            TakeMoney(playerid, 50*count);
            ShowClothSelection(playerid, false);
        }
    }
    return 1;
}