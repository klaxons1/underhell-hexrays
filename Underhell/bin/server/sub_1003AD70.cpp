void __thiscall sub_1003AD70(int this, int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  const char *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edi
  float *v14; // ebx
  float *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // edx
  char v21; // al
  int v22; // edx
  const char *v23; // edi
  int v24; // eax
  char *v25; // edi
  char *v26; // edi
  int v27; // eax
  char *v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // edi
  float v32; // edx
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ebx
  int v51; // eax
  char *v52; // eax
  int v53; // ebx
  char *v54; // eax
  char *v55; // eax
  const char *v56; // eax
  const char *v57; // eax
  int v58; // eax
  _DWORD v59[2]; // [esp+0h] [ebp-110h] BYREF
  int v60; // [esp+8h] [ebp-108h]
  int v61; // [esp+Ch] [ebp-104h]
  int v62; // [esp+10h] [ebp-100h]
  int v63; // [esp+14h] [ebp-FCh]
  char String[128]; // [esp+24h] [ebp-ECh] BYREF
  _DWORD v65[20]; // [esp+A4h] [ebp-6Ch] BYREF
  int v66; // [esp+F4h] [ebp-1Ch]
  char *v67; // [esp+F8h] [ebp-18h]
  int v68; // [esp+FCh] [ebp-14h] BYREF
  float v69; // [esp+104h] [ebp-Ch] BYREF
  float v70; // [esp+108h] [ebp-8h]
  float v71; // [esp+10Ch] [ebp-4h]

  v2 = a2;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)a2;
  if ( *(int *)a2 <= 2001 )
  {
    if ( *(_DWORD *)a2 == 2001 )
    {
      if ( (*(_BYTE *)(this + 256) & 1) != 0 )
        sub_1023C380((int)"AI_BaseNPC.BodyDrop_Light", 0.0, 0);
      return;
    }
    if ( v5 > 1000 )
    {
      switch ( v5 )
      {
        case 1001:
          if ( !sub_1026A890(this + 2688) )
            return;
          *(float *)&v63 = 0.0;
          goto LABEL_20;
        case 1002:
          if ( !sub_1026A890(this + 2688) )
            return;
          v63 = 1;
LABEL_20:
          sub_1026A890(this + 2688);
          sub_1022FC70(v63);
          break;
        case 1003:
          if ( (unsigned __int8)sub_103E0CF0(0) )
          {
            *(float *)&v63 = COERCE_FLOAT(atoi(*(const char **)(v2 + 4)));
            v7 = sub_1026A890(this + 2688);
            sub_1022F6E0(v7, v63);
          }
          return;
        case 1004:
        case 1008:
          sub_1023C380(*(_DWORD *)(a2 + 4), 0.0, 0);
          return;
        case 1005:
          goto LABEL_14;
        case 1009:
          if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
          {
LABEL_14:
            v6 = *(_DWORD *)(this + 24);
            v60 = v4;
            sub_10238FF0(v6, *(_DWORD *)(v2 + 4), 1.0, 80, 0, 100);
          }
          break;
        case 1010:
          if ( *(_DWORD *)(this + 2324) == 4 )
          {
            a2 = 0;
            sub_100316C0((_BYTE *)(this + 224), (char *)&a2);
            sub_1002AB00((_DWORD *)(this + 220), (_DWORD *)(this + 216));
          }
          break;
        case 1020:
        case 1021:
        case 1022:
          DevMsg("Bodygroup!\n");
          break;
        case 1100:
          v8 = *(_DWORD *)this;
          *(float *)&v63 = 0.0;
          v68 = 0;
          v70 = NAN;
          v71 = 0.0;
          sub_10023360(v59, (int)&v68);
          (*(void (__thiscall **)(int, _DWORD, int, int, _DWORD, _DWORD, int, int, int, int))(v8 + 148))(
            this,
            *(_DWORD *)(v2 + 4),
            this,
            this,
            v59[0],
            v59[1],
            v60,
            v61,
            v62,
            v63);
          break;
        default:
          goto LABEL_74;
      }
      return;
    }
    if ( v5 == 1000 )
    {
      if ( *(_DWORD *)(this + 2324) == 4 )
      {
        a2 = 1;
        sub_100316C0((_BYTE *)(this + 224), (char *)&a2);
        a2 = 0;
        sub_1002AB00((_DWORD *)(this + 220), &a2);
      }
      return;
    }
    if ( v5 == 28 )
      return;
LABEL_74:
    v41 = *(_DWORD *)(a2 + 16);
    if ( (v41 & 0x400) != 0 && (v41 & 1) != 0 )
    {
      switch ( v4 )
      {
        case 12:
          v42 = sub_100CF460(this);
          v43 = sub_100CF460(this);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 996))(v43, 0);
          sub_100CD300(0);
          sub_1007DF00(-1);
          if ( *(_DWORD *)(this + 2792) == 5 )
            sub_1025FAC0(v42);
          if ( *(_DWORD *)(this + 2792) )
          {
            *(_DWORD *)(this + 2792) = 0;
            *(_DWORD *)(this + 2372) = 0;
          }
          return;
        case 13:
          if ( sub_100CF460(this) )
          {
            v44 = sub_100CF460(this);
            (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 992))(v44);
            sub_1007DF00(-1);
            if ( *(_DWORD *)(this + 2792) )
            {
              *(_DWORD *)(this + 2792) = 0;
              *(_DWORD *)(this + 2372) = 0;
            }
          }
          return;
        case 4:
LABEL_29:
          if ( (*(_BYTE *)(this + 256) & 1) != 0 )
            sub_1023C380((int)"AI_BaseNPC.BodyDrop_Heavy", 0.0, 0);
          return;
        case 1:
        case 2:
          return;
        case 25:
          v45 = *(_DWORD *)this;
          if ( *(_BYTE *)(this + 1713) )
            (*(void (__thiscall **)(int, float *, _DWORD, int))(v45 + 756))(
              this,
              &flt_106F1CA8,
              *(_DWORD *)(this + 1740),
              this + 1716);
          else
            (*(void (__thiscall **)(int, float *))(v45 + 748))(this, &flt_106F1CA8);
          return;
        case 26:
          v46 = sub_100BDEE0(*(char **)(a2 + 4));
          if ( v46 != -1 )
          {
            v47 = sub_10039AE0((_DWORD *)this, v46, 0);
            if ( v47 != -1 )
              sub_100C74B0(v47, 1);
          }
          return;
        case 27:
          v48 = sub_100BDEE0(*(char **)(a2 + 4));
          if ( v48 != -1 )
          {
            v49 = sub_10039AE0((_DWORD *)this, v48, 0);
            if ( v49 != -1 )
              sub_100C7570(v49, COERCE_FLOAT(1), 1);
          }
          return;
        case 8:
LABEL_63:
          v28 = *(char **)(a2 + 4);
          if ( v28 && (v29 = sub_1012C5B0(0, v28, this, 0, 0)) != 0 )
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 576))(v29);
            v31 = *(_DWORD *)this;
            v69 = *(float *)v30;
            v32 = *(float *)(v30 + 4);
            *(float *)&v63 = 0.0;
            v70 = v32;
            v71 = *(float *)(v30 + 8);
            v33 = sub_100CF460(this);
            (*(void (__thiscall **)(int, int, float *, _DWORD))(v31 + 960))(this, v33, &v69, 0);
          }
          else
          {
            v34 = *(_DWORD *)this;
            v35 = sub_100CF460(this);
            (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(v34 + 960))(this, v35, 0, 0);
          }
          return;
        case 11:
          if ( sub_100CF460(this) && *(_DWORD *)(v2 + 4) )
          {
            v27 = sub_100BDEE0(*(char **)(v2 + 4));
            if ( v27 != -1 )
              goto LABEL_62;
            v50 = *(_DWORD *)this;
            v51 = sub_10008FB0(*(_DWORD *)(v2 + 4));
            v27 = (*(int (__thiscall **)(int, int, _DWORD))(v50 + 936))(this, v51, 0);
LABEL_61:
            if ( v27 != -1 )
LABEL_62:
              sub_100C8CD0(v27, 0.0);
          }
          return;
        case 30:
          *(_BYTE *)(this + 2512) = atoi(*(const char **)(a2 + 4)) != 0;
          return;
        case 29:
          v66 = this + 2504;
          if ( sub_1026A890(this + 2504) )
          {
            v52 = *(char **)(v2 + 4);
            v53 = 0;
            a2 = 0;
            if ( !v52 )
              goto LABEL_121;
            sub_104299C0(String, v52, 0x80u);
            v54 = strtok(String, " ");
            v67 = v54;
            if ( !v54 )
              goto LABEL_121;
            if ( sub_104291C0(v54, "ME", 2) )
            {
              if ( !sub_104291C0(v67, "THEM", 4) )
              {
                v53 = this;
                a2 = sub_1026A890(v66);
              }
            }
            else
            {
              a2 = this;
              v53 = sub_1026A890(v66);
            }
            v55 = strtok(0, " ");
            if ( v53 && a2 && v55 && (a2 = atoi(v55)) != 0 )
            {
              sub_10247EC0(v65);
              *(float *)&v65[13] = (float)a2;
              sub_10023330(v65, v53);
              sub_10023300(v65, v53);
              v65[16] = 2048;
              sub_100D9E70(v65);
            }
            else
            {
LABEL_121:
              v56 = (const char *)sub_1013BD20(*(_DWORD *)v2);
              DevWarning(
                1,
                "Bad %s format. Should be: { AE_NPC_HURT_INTERACTION_PARTNER <frame number> \"<ME/THEM> <Amount of damage done>\" }\n",
                v56);
            }
          }
          else
          {
            v57 = (const char *)sub_100D6390(this);
            DevWarning(
              "%s received AE_NPC_HURT_INTERACTION_PARTNER anim event, but it's not interacting with anything.\n",
              v57);
          }
          return;
      }
    }
    if ( *(_DWORD *)(a2 + 20) != this
      || (*(_DWORD *)(a2 + 16) & 0x400) != 0 && (v41 & 8) != 0
      || v4 >= 3000 && v4 <= 3999 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, a2);
    }
    else
    {
      sub_100C3960(a2);
    }
    return;
  }
  if ( v5 > 3015 )
  {
    v40 = v5 - 3017;
    if ( v40 )
    {
      if ( v40 != 1 )
        goto LABEL_74;
      if ( !sub_100CF460(this) )
        return;
LABEL_71:
      v38 = sub_100CF460(this);
      a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 1216))(v38);
      v39 = sub_100CF460(this);
      sub_10031800((_DWORD *)(v39 + 1200), &a2);
      sub_10023E00((char *)this, 3);
      sub_10023E00((char *)this, 4);
      sub_10023E00((char *)this, 5);
      return;
    }
    if ( sub_100CF460(this) )
    {
      v58 = sub_100CF460(this);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v58 + 1132))(v58, 8, 0.0);
    }
  }
  else
  {
    if ( v5 != 3015 )
    {
      switch ( v5 )
      {
        case 2002:
          goto LABEL_29;
        case 2010:
          sub_1023C380((int)"AI_BaseNPC.SwishSound", 0.0, 0);
          return;
        case 2020:
          sub_10039F40((int *)this, 1);
          v9 = *(float *)(this + 732);
          *(_DWORD *)(this + 2716) &= ~0x2000u;
          *(float *)&v63 = v9;
          sub_100BFF30(0, *(float *)&v63);
          sub_100EAB80(this, 8);
          return;
        case 2040:
          v10 = *(const char **)(a2 + 4);
          if ( v10 && strlen(v10) )
          {
            v11 = sub_10019640((_DWORD *)this);
            v12 = sub_1012C650(*(char **)(v2 + 4), (int)v11, 256.0, this, 0, 0, 0);
          }
          else
          {
            v12 = sub_10022C40((_DWORD *)this);
          }
          v13 = v12;
          if ( v12 )
          {
            v14 = (float *)sub_10019640((_DWORD *)this);
            v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
            v69 = *v15 - *v14;
            v70 = v15[1] - v14[1];
            v16 = v15[2] - v14[2];
            v71 = v16;
            sub_10018D40(&v69);
            if ( v16 <= 48.0 )
            {
              v17 = __RTDynamicCast(
                      v13,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                      0);
              v18 = v17;
              if ( v17 )
              {
                v19 = sub_100D1940(v17);
                v20 = *(_DWORD *)this;
                if ( v19 )
                {
                  (*(void (__thiscall **)(int, const char *))(v20 + 1312))(this, "Weapon in use by someone else");
                }
                else
                {
                  v21 = (*(int (__thiscall **)(int, int))(v20 + 948))(this, v18);
                  v22 = *(_DWORD *)this;
                  if ( v21 )
                  {
                    if ( *(_BYTE *)(this + 1670) )
                    {
                      (*(void (__stdcall **)(const char *))(v22 + 1312))("We lost our Right arm!");
                    }
                    else
                    {
                      (*(void (__stdcall **)(int))(v22 + 2124))(v18);
                      sub_10027CD0((_DWORD *)this, 0);
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(int, const char *))(v22 + 1312))(this, "Can't use this weapon type");
                  }
                }
              }
              else
              {
                (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 2128))(this, v13);
                sub_10027CD0((_DWORD *)this, 0);
              }
            }
            else
            {
              (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Item has moved!\n");
            }
          }
          else
          {
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Item no longer available!\n");
          }
          return;
        case 2041:
          goto LABEL_63;
        case 2042:
          if ( !sub_100CF460(this) )
            return;
          v25 = *(char **)(v2 + 4);
          if ( !v25 )
            return;
          v24 = sub_100BDF40(v25);
          goto LABEL_53;
        case 2043:
          if ( !sub_100CF460(this) )
            return;
          v23 = *(const char **)(v2 + 4);
          if ( !v23 )
            return;
          v24 = atoi(v23);
LABEL_53:
          if ( v24 != -1 )
            sub_100C3330(v24);
          return;
        case 2044:
          if ( !sub_100CF460(this) )
            return;
          v26 = *(char **)(v2 + 4);
          if ( !v26 )
            return;
          v27 = sub_100BDEE0(v26);
          goto LABEL_61;
        case 2050:
        case 2051:
          return;
        case 2060:
          a2 = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(this + 2588) + 36) + 28);
          v36 = sub_1026A890(&a2);
          if ( v36 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1784))(this, v36);
          return;
        default:
          goto LABEL_74;
      }
    }
    if ( sub_100CF460(this) )
    {
      v37 = sub_100CF460(this);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v37 + 1132))(v37, 8, 0.0);
      goto LABEL_71;
    }
  }
}
