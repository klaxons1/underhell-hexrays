char __userpurge sub_101F11D0@<al>(int *a1@<ecx>, double a2@<st0>, int a3)
{
  const char *v5; // ebx
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  const char *v13; // edi
  int v14; // ebx
  int (__thiscall ***v15)(_DWORD, int); // eax
  int (__thiscall ***v16)(_DWORD, int); // edi
  void (__thiscall *v17)(int, int); // edx
  int v18; // eax
  double v19; // st7
  float *v20; // eax
  __int16 *v21; // edi
  int v22; // eax
  float v23; // edi
  int v24; // eax
  const char *v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // eax
  float v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // edi
  const char *v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  const char *v39; // edi
  void (__thiscall *v40)(int, float *, float *); // edx
  const char *v41; // eax
  int v42; // ebx
  const char *v43; // eax
  const char *v44; // eax
  int v45; // ebx
  const char *v46; // eax
  unsigned __int16 *v47; // eax
  int v48; // [esp-8h] [ebp-5Ch]
  int v49; // [esp-4h] [ebp-58h]
  float v50; // [esp+8h] [ebp-4Ch]
  float v51; // [esp+8h] [ebp-4Ch]
  float v52; // [esp+8h] [ebp-4Ch]
  int v53[2]; // [esp+1Ch] [ebp-38h] BYREF
  int v54; // [esp+24h] [ebp-30h]
  int v55; // [esp+30h] [ebp-24h]
  int v56; // [esp+34h] [ebp-20h]
  float v57[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v58; // [esp+48h] [ebp-Ch] BYREF
  float v59; // [esp+4Ch] [ebp-8h] BYREF
  float v60; // [esp+50h] [ebp-4h]
  float v61; // [esp+5Ch] [ebp+8h]
  int v62; // [esp+5Ch] [ebp+8h]

  v5 = String;
  if ( *(int *)a3 > 0 )
    v5 = *(const char **)(a3 + 1032);
  if ( !_stricmp(v5, "update_freeaim") )
  {
    v6 = String;
    if ( *(int *)a3 > 1 )
      v6 = *(const char **)(a3 + 1036);
    *((float *)a1 + 526) = atof(v6);
    v7 = String;
    if ( *(int *)a3 > 2 )
      v7 = *(const char **)(a3 + 1040);
    *((float *)a1 + 527) = atof(v7);
    if ( *(int *)a3 > 3 )
      v8 = *(const char **)(a3 + 1044);
    else
      v8 = String;
    *((float *)a1 + 528) = atof(v8);
    return 1;
  }
  if ( !_stricmp(v5, "DispObj") )
  {
    v10 = sub_1012BF20(&dword_1069E3E0, 0, "Display_Objective", 0, 0, 0, 0);
    goto LABEL_15;
  }
  if ( !_stricmp(v5, "GiveSign") )
  {
    v11 = sub_1012BF20(&dword_1069E3E0, 0, "GiveSignal", 0, 0, 0, 0);
    if ( v11 )
    {
      v54 = 0;
      v55 = -1;
      v56 = 0;
      v53[0] = (int)a1;
      sub_10180EC0((int)v11, v53);
    }
    return 1;
  }
  if ( !_stricmp(v5, "SkipScene") )
  {
    v10 = sub_1012BF20(&dword_1069E3E0, 0, "Relay_SkipScene", 0, 0, 0, 0);
LABEL_15:
    if ( v10 )
    {
      v54 = 0;
      v55 = -1;
      v56 = 0;
      v53[0] = (int)a1;
      sub_10180EC0((int)v10, v53);
    }
    return 1;
  }
  if ( !_stricmp(v5, "firemode_toggle") )
  {
    if ( sub_100CF460(a1) )
    {
      v12 = sub_100CF460(a1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 840))(v12);
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v5, "vehicleRole") )
  {
    if ( *(_DWORD *)a3 == 2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 1088))(a1) )
      {
        v13 = *(int *)a3 > 1 ? *(const char **)(a3 + 1036) : String;
        v14 = atoi(v13);
        v15 = (int (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int *))(*a1 + 1092))(a1);
        v16 = v15;
        if ( v15 )
        {
          if ( !(**v15)(v15, v14) )
          {
            (*(void (__thiscall **)(int *, float *, float *))(*a1 + 1412))(a1, &flt_106F1CA8, &flt_106F1CB4);
            (*(void (__thiscall **)(int *, int (__thiscall ***)(_DWORD, int), int))(*a1 + 1408))(a1, v16, v14);
            return 1;
          }
        }
      }
      return 1;
    }
    return 0;
  }
  if ( !_stricmp(v5, "uh_jake_kick") )
  {
    if ( *((_BYTE *)a1 + 5063) )
    {
      sub_102DCFA0("OnDisabledKickAttempted", 0, v48, v49, -1, 0, (int)a1, (int)a1);
      return 1;
    }
    if ( !*((_BYTE *)a1 + 4186)
      && !(unsigned __int8)sub_102DD7A0(a1)
      && !(*(unsigned __int8 (__thiscall **)(int *))(*a1 + 1088))(a1)
      && (a1[563] & 1) == 0
      && (!*((_BYTE *)a1 + 5216) || (a1[64] & 1) == 0)
      && *(_DWORD *)(dword_106BB964 + 48)
      && (!*(_DWORD *)(dword_106BB604 + 48) || *((float *)a1 + 1271) >= 20.0)
      && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 264))(a1) )
    {
      if ( *((_BYTE *)a1 + 2137) )
        sub_101ECF40((int)a1);
      sub_102DEF10(20.0);
      v17 = *(void (__thiscall **)(int, int))(*a1 + 1300);
      *((_BYTE *)a1 + 4186) = 1;
      v17((int)a1, 10);
      v18 = sub_101E7EA0(a1, 2);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 836))(v18, 0);
      v58 = -2.0;
      v59 = 0.0;
      v60 = 0.0;
      sub_100F7A60((float *)a1, &v58);
      v50 = *(float *)(dword_106B31C8 + 12) + 0.34999999;
      sub_100EC4A0(a1, v50, (int)"KickContext");
      v19 = *(float *)(dword_106E0734 + 44);
      v61 = *(float *)(dword_106E0734 + 44);
      v20 = (float *)sub_10019660(a1);
      sub_100D7A40(v20);
      v51 = 0.0;
      if ( v61 + 1.0 > v19 )
        sub_1023C380((int)"HL2Player.kick_fire", v51, 0);
      else
        sub_1023C380((int)"HL2Player.kick_fire_fly", v51, 0);
      v52 = 0.0;
      if ( *((float *)a1 + 1271) < 35.0 )
        sub_1023C380((int)"Player.Voice.Kick.Exhausted", v52, 0);
      else
        sub_1023C380((int)"Player.Voice.Kick", v52, 0);
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v5, "ironsight_toggle") )
  {
    if ( (a1[563] & 1) == 0 )
    {
      sub_101ECF40((int)a1);
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v5, "Throw_Nade") )
  {
    sub_101ED130((int)a1, (int)v5, a3, a2);
    return 1;
  }
  if ( !_stricmp(v5, "NightVision_Toggle") )
  {
    (*(void (__thiscall **)(int *))(*a1 + 1616))(a1);
    return 1;
  }
  if ( !_stricmp(v5, "GasMask_Toggle") )
  {
    sub_101ED380((int)a1);
    return 1;
  }
  if ( !_stricmp(v5, "silencer_toggle") )
  {
    sub_101E2F50((int)a1);
    return 1;
  }
  if ( !_stricmp(v5, "DropWeapon") )
  {
    if ( (a1[563] & 1) != 0 )
      return 1;
    v21 = (__int16 *)sub_100CF460(a1);
    if ( *((_BYTE *)a1 + 2137) )
      sub_101ECF40((int)a1);
    v22 = sub_101176D0(a1);
    if ( v22 )
    {
      if ( (int *)v22 != a1 )
        return 1;
    }
    if ( !v21
      || *(_BYTE *)(sub_100D0CC0(v21) + 1832)
      || (*(int (__thiscall **)(int *))(*a1 + 1092))(a1)
      || *((_BYTE *)a1 + 2136) )
    {
      return 1;
    }
    sub_100F5A30(a1, (int)&v58, 0, 0);
    v23 = *(float *)a1;
    v58 = v58 * 300.0;
    v59 = v59 * 300.0;
    v60 = 300.0 * v60;
    v24 = sub_100CF460(a1);
    (*(void (__thiscall **)(int *, int, _DWORD, float *))(LODWORD(v23) + 960))(a1, v24, 0, &v58);
    return 1;
  }
  if ( _stricmp(v5, "spectate") )
  {
    if ( !_stricmp(v5, "spec_mode") )
    {
      if ( (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) != 2 )
      {
        if ( *(_DWORD *)(dword_106B4CF4 + 48) && sub_100D8840(a1) > 1 )
          return 1;
        if ( *(int *)a3 < 2 )
        {
          v27 = (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) + 1;
          if ( v27 <= 6 )
          {
            if ( v27 < 4 )
              v27 = 6;
          }
          else
          {
            v27 = 4;
          }
        }
        else
        {
          if ( *(int *)a3 > 1 )
            v25 = *(const char **)(a3 + 1036);
          else
            v25 = String;
          v26 = atoi(v25);
          v27 = v26;
          if ( v26 < 4 || v26 > 6 )
            v27 = 4;
        }
        if ( (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) <= 1 )
        {
          a1[875] = v27;
          (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_106B31D0 + 152))(
            dword_106B31D0,
            a1[6],
            "cl_spec_mode %d",
            v27);
        }
        else
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 1328))(a1, v27) )
          {
            sub_102601C0(a1, 2, "#Spectator_Mode_Unkown", 0, 0, 0, 0);
            return 1;
          }
          (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_106B31D0 + 152))(
            dword_106B31D0,
            a1[6],
            "cl_spec_mode %d",
            v27);
        }
        return 1;
      }
LABEL_117:
      (*(void (__thiscall **)(int *))(*a1 + 1380))(a1);
      return 1;
    }
    if ( !_stricmp(v5, "spec_next") )
    {
      v28 = (*(int (__thiscall **)(int *))(*a1 + 1332))(a1);
      v29 = *(float *)a1;
      v30 = (int)a1;
      if ( v28 > 3 )
      {
        v31 = (*(int (__stdcall **)(_DWORD))(LODWORD(v29) + 1348))(0);
LABEL_113:
        if ( !v31 )
          return 1;
        (*(void (__thiscall **)(int *, int))(*a1 + 1336))(a1, v31);
        return 1;
      }
    }
    else
    {
      if ( _stricmp(v5, "spec_prev") )
      {
        if ( _stricmp(v5, "spec_player") )
        {
          if ( !_stricmp(v5, "spec_goto") )
          {
            if ( (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) != 3
              && (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) != 6
              || *(_DWORD *)a3 != 6 )
            {
              return 1;
            }
            v57[0] = atof((const char *)*(_DWORD *)(a3 + 1036));
            v36 = String;
            if ( *(int *)a3 > 2 )
              v36 = *(const char **)(a3 + 1040);
            v57[1] = atof(v36);
            v37 = String;
            if ( *(int *)a3 > 3 )
              v37 = *(const char **)(a3 + 1044);
            v57[2] = atof(v37);
            v38 = String;
            if ( *(int *)a3 > 4 )
              v38 = *(const char **)(a3 + 1048);
            v58 = atof(v38);
            if ( *(int *)a3 > 5 )
              v39 = *(const char **)(a3 + 1052);
            else
              v39 = String;
            v59 = atof(v39);
            v40 = *(void (__thiscall **)(int, float *, float *))(*a1 + 1364);
            v60 = 0.0;
            v40((int)a1, v57, &v58);
            return 1;
          }
          else
          {
            if ( _stricmp(v5, "playerperf") )
              return 0;
            v62 = sub_1001F3C0(a1);
            if ( *(int *)a3 >= 2 )
            {
              v41 = String;
              if ( *(int *)a3 > 1 )
                v41 = *(const char **)(a3 + 1036);
              v42 = *(_DWORD *)(dword_106B31C8 + 20);
              if ( sub_10429310(v41) <= v42 )
              {
                v43 = String;
                if ( *(int *)a3 > 1 )
                  v43 = *(const char **)(a3 + 1036);
                if ( (int)sub_10429310(v43) >= 1 )
                {
                  v44 = String;
                  if ( *(int *)a3 > 1 )
                    v44 = *(const char **)(a3 + 1036);
                  v62 = sub_10429310(v44);
                }
                else
                {
                  v62 = 1;
                }
              }
              else
              {
                v62 = v42;
              }
            }
            v45 = -1;
            if ( *(int *)a3 >= 3 )
            {
              v46 = String;
              if ( *(int *)a3 > 2 )
                v46 = *(const char **)(a3 + 1040);
              if ( (int)sub_10429310(v46) <= 1 )
              {
                v45 = 1;
              }
              else if ( *(int *)a3 > 2 )
              {
                v45 = sub_10429310(*(_DWORD *)(a3 + 1040));
              }
              else
              {
                v45 = sub_10429310(String);
              }
            }
            v47 = (unsigned __int16 *)sub_1025FB50(v62);
            if ( !v47 )
              return 1;
            sub_101EB050(v47, (int)a1, v45);
            return 1;
          }
        }
        if ( (*(int (__thiscall **)(int *))(*a1 + 1332))(a1) <= 3 || *(_DWORD *)a3 != 2 )
          return 1;
        v33 = atoi(*(const char **)(a3 + 1036));
        if ( v33 )
          v34 = sub_1025FB50(v33);
        else
          v34 = *(int *)a3 > 1 ? sub_1025FBA0(*(char **)(a3 + 1036)) : sub_1025FBA0((char *)String);
        v35 = v34;
        if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 1356))(a1, v34) )
          return 1;
        (*(void (__thiscall **)(int *, int))(*a1 + 1336))(a1, v35);
        return 1;
      }
      v32 = (*(int (__thiscall **)(int *))(*a1 + 1332))(a1);
      v29 = *(float *)a1;
      v30 = (int)a1;
      if ( v32 > 3 )
      {
        v31 = (*(int (__stdcall **)(int))(LODWORD(v29) + 1348))(1);
        goto LABEL_113;
      }
    }
    if ( (*(int (__thiscall **)(int))(LODWORD(v29) + 1332))(v30) != 2 )
      return 1;
    goto LABEL_117;
  }
  if ( sub_100D8840(a1) == 1 )
    return 1;
  sub_1042CBA0("mp_allowspectators");
  if ( !(unsigned __int8)sub_1042C850(&v59) || *(_DWORD *)(LODWORD(v60) + 48) || *((_BYTE *)a1 + 3280) )
  {
    if ( !*((_BYTE *)a1 + 224) )
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*a1 + 1608))(a1, 0, 0);
    (*(void (__thiscall **)(int *, int))(*a1 + 1232))(a1, 1);
    (*(void (__thiscall **)(int *, int))(*a1 + 348))(a1, 1);
    (*(void (__thiscall **)(int *, int))(*a1 + 1316))(a1, 6);
    return 1;
  }
  else
  {
    sub_102601C0(a1, 4, "#Cannot_Be_Spectator", 0, 0, 0, 0);
    return 1;
  }
}
