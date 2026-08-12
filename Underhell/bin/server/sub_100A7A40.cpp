char __thiscall sub_100A7A40(_DWORD *this, const char *a2, int a3, int a4)
{
  _DWORD *v4; // ebx
  int (__thiscall *v5)(int, int, char *, int); // eax
  int i; // esi
  int v7; // eax
  int v8; // edi
  int v9; // esi
  char *v10; // eax
  int v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // esi
  int v15; // ebx
  const char *v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // esi
  double v20; // st7
  int v22; // esi
  int v23; // eax
  double v24; // st7
  int v25; // esi
  int v26; // eax
  double v27; // st7
  int v28; // esi
  double v29; // st7
  int v30; // esi
  double v31; // st7
  int v32; // esi
  double v33; // st7
  int v34; // esi
  double v35; // st7
  int v36; // esi
  double v37; // st7
  int v38; // eax
  double v39; // st7
  float v40; // esi
  double v41; // st7
  float *v42; // ecx
  int v43; // esi
  double v44; // st7
  int v45; // esi
  double v46; // st7
  double v47; // st7
  int v48; // eax
  char v49; // cl
  _DWORD *v50; // eax
  char Destination[1028]; // [esp+Ch] [ebp-99Ch] BYREF
  float v52[99]; // [esp+410h] [ebp-598h] BYREF
  char String2[1024]; // [esp+59Ch] [ebp-40Ch] BYREF
  int v54; // [esp+99Ch] [ebp-Ch]
  const char *v55; // [esp+9A0h] [ebp-8h]
  _DWORD *v56; // [esp+9A4h] [ebp-4h]
  int v57; // [esp+9B4h] [ebp+Ch]
  int v58; // [esp+9B4h] [ebp+Ch]
  int v59; // [esp+9B4h] [ebp+Ch]

  v4 = this;
  v5 = *(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224);
  v56 = this;
  i = v5(dword_106B31D0, a3, String2, 1024);
  if ( _stricmp("Schedule", String2) )
    return 1;
  while ( 1 )
  {
    v7 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
           dword_106B31D0,
           i,
           String2,
           1024);
    v8 = v4[1];
    v9 = v7;
    if ( v8 )
      break;
LABEL_6:
    v11 = sub_100681C0((int)String2);
    if ( v11 == -1 )
    {
      DevMsg("ERROR: LoadSchd (%s): Unknown schedule type (%s)\n", a2, String2);
      return 1;
    }
    v12 = (_DWORD *)sub_10184390(52);
    if ( v12 )
      v13 = sub_100A79D0(v12, String2, v11, v4[1]);
    else
      v13 = 0;
    v4[1] = v13;
    v14 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
            dword_106B31D0,
            v9,
            String2,
            1024);
    if ( _stricmp(String2, "Tasks") )
    {
      DevMsg(
        "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting 'Tasks' keyword.\n",
        a2,
        (const char *)v13[11]);
      return 0;
    }
    v15 = 0;
    v57 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
            dword_106B31D0,
            v14,
            String2,
            1024);
    if ( String2[0] )
    {
      while ( _stricmp("Interrupts", String2) )
      {
        v16 = (const char *)sub_100B4030(String2);
        v55 = v16;
        if ( a4 )
        {
          v17 = sub_1007DAF0((_DWORD *)(a4 + 28), (int)v16);
        }
        else if ( v16 == (const char *)-1 )
        {
          v17 = -1;
        }
        else
        {
          v17 = (int)(v16 - 1000000000);
        }
        *(_DWORD *)&Destination[8 * v15 + 1024] = v17;
        if ( v17 == -1 )
          goto LABEL_83;
        v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                dword_106B31D0,
                v57,
                String2,
                1024);
        if ( !_stricmp("Activity", String2) )
        {
          v19 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
            goto LABEL_84;
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v19,
                  String2,
                  1024);
          v20 = (double)sub_10008FB0((int)String2);
          v52[2 * v15] = v20;
          if ( -1.0 == v20 )
          {
            DevMsg("ERROR: LoadSchd (%s): (%s) Unknown activity %s!\n", a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("Task", String2) )
        {
          v22 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
            goto LABEL_84;
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v22,
                  String2,
                  1024);
          v23 = sub_100B4030(String2);
          if ( a4 )
          {
            v58 = sub_1007DAF0((_DWORD *)(a4 + 28), v23);
          }
          else if ( v23 == -1 )
          {
            v58 = -1;
          }
          else
          {
            v58 = v23 - 1000000000;
          }
          v24 = (double)v58;
          v52[2 * v15] = v24;
          if ( -1.0 == v24 )
          {
LABEL_83:
            DevMsg("ERROR: LoadSchd (%s): (%s) Unknown task %s!\n", a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("Schedule", String2) )
        {
          v25 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
          {
LABEL_84:
            DevMsg(
              "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'ACTIVITY.\n",
              a2,
              (const char *)v13[11]);
            return 0;
          }
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v25,
                  String2,
                  1024);
          v26 = sub_100681C0((int)String2);
          if ( a4 )
          {
            v59 = sub_1007DAF0((_DWORD *)(a4 + 4), v26);
          }
          else if ( v26 == -1 )
          {
            v59 = -1;
          }
          else
          {
            v59 = v26 - 1000000000;
          }
          v27 = (double)v59;
          v52[2 * v15] = v27;
          if ( -1.0 == v27 )
          {
            DevMsg("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 327, a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("State", String2) )
        {
          v28 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
            goto LABEL_85;
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v28,
                  String2,
                  1024);
          v29 = (double)sub_100A7550(String2);
          v52[2 * v15] = v29;
          if ( -1.0 == v29 )
          {
            DevMsg("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 348, a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("Memory", String2) )
        {
          v30 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
          {
LABEL_85:
            DevMsg(
              "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'STATE.\n",
              a2,
              (const char *)v13[11]);
            return 0;
          }
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v30,
                  String2,
                  1024);
          v31 = (double)(int)sub_100A7640(String2);
          v52[2 * v15] = v31;
          if ( -1.0 == v31 )
          {
            DevMsg("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 370, a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("Path", String2) )
        {
          v32 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
          {
            DevMsg(
              "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'PATH.\n",
              a2,
              (const char *)v13[11]);
            return 0;
          }
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v32,
                  String2,
                  1024);
          v33 = (double)sub_100A77C0(String2);
          v52[2 * v15] = v33;
          if ( -1.0 == v33 )
          {
            DevMsg("ERROR: LoadSchd (%s): (%s) Unknown path type %s!\n", a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("Goal", String2) )
        {
          v34 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
          {
            DevMsg(
              "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'GOAL.\n",
              a2,
              (const char *)v13[11]);
            return 0;
          }
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v34,
                  String2,
                  1024);
          v35 = (double)sub_100A7820(String2);
          v52[2 * v15] = v35;
          if ( -1.0 == v35 )
          {
            DevMsg("ERROR: LoadSchd (%s): (%s) Unknown goal type  %s!\n", a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else if ( !_stricmp("HintFlags", String2) )
        {
          v36 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v18,
                  String2,
                  1024);
          if ( _stricmp(String2, ":") )
          {
            DevMsg(
              "ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'HINTFLAG'\n",
              a2,
              (const char *)v13[11]);
            return 0;
          }
          v18 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                  dword_106B31D0,
                  v36,
                  String2,
                  1024);
          v37 = (double)sub_1006FF70(String2);
          v52[2 * v15] = v37;
          if ( -1.0 == v37 )
          {
            DevMsg("ERROR: LoadSchd (%s): (%s) Unknown hint flag type  %s!\n", a2, (const char *)v13[11], String2);
            return 0;
          }
        }
        else
        {
          if ( !_stricmp("Interrupts", String2) || !_strnicmp("TASK_", String2, 5u) )
          {
            Warning(
              "ERROR: LoadSchd (%s): (%s) Bad syntax at task #%d (wasn't expecting %s)\n",
              a2,
              (const char *)v13[11],
              v15,
              String2);
            return 0;
          }
          v52[2 * v15] = atof(String2);
        }
        ++v15;
        sub_104299C0(Destination, String2, 0x400u);
        v57 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                dword_106B31D0,
                v18,
                String2,
                1024);
        if ( !_stricmp(String2, ":") )
        {
          DevMsg(
            "ERROR: LoadSchd (%s): Schedule (%s),\n        Task (%s), has a malformed AI Task Argument = (%s)\n",
            a2,
            (const char *)v13[11],
            v55,
            Destination);
          return 0;
        }
        if ( !String2[0] )
          break;
      }
    }
    v13[2] = v15;
    v13[1] = sub_10184390((unsigned __int64)(unsigned int)v15 >> 29 != 0 ? -1 : 8 * v15);
    v38 = 0;
    if ( v15 >= 4 )
    {
      v54 = 16 - (_DWORD)v52;
      v55 = (const char *)(24 - (_DWORD)v52);
      do
      {
        v39 = v52[2 * v38];
        *(_DWORD *)(v13[1] + 8 * v38) = *(_DWORD *)&Destination[8 * v38 + 1024];
        v40 = v52[2 * v38 + 1];
        *(float *)(v13[1] + 8 * v38 + 4) = v39;
        v41 = v52[2 * v38 + 2];
        v42 = &v52[2 * v38];
        *(float *)(v13[1] + 8 * v38 + 8) = v40;
        v43 = *((_DWORD *)v42 + 3);
        *(float *)(v13[1] + 8 * v38 + 12) = v41;
        v44 = v42[4];
        v38 += 4;
        *(_DWORD *)((char *)v42 + v54 + v13[1]) = v43;
        v45 = *((_DWORD *)v42 + 5);
        *(float *)(v13[1] + 8 * v38 - 12) = v44;
        v46 = v42[6];
        *(_DWORD *)&v55[v13[1] + (_DWORD)v42] = v45;
        *(float *)(v13[1] + 8 * v38 - 4) = v46;
      }
      while ( v38 < v15 - 3 );
    }
    for ( ; v38 < v15; ++v38 )
    {
      v47 = v52[2 * v38];
      *(_DWORD *)(v13[1] + 8 * v38) = *(_DWORD *)&Destination[8 * v38 + 1024];
      *(float *)(v13[1] + 8 * v38 + 4) = v47;
    }
    for ( i = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                dword_106B31D0,
                v57,
                String2,
                1024);
          String2[0];
          i = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                dword_106B31D0,
                i,
                String2,
                1024) )
    {
      if ( !_stricmp("Schedule", String2) )
        break;
      v48 = sub_10064970((int)String2);
      if ( v48 == -1 )
      {
        DevMsg("ERROR: LoadSchd (%s): Schedule (%s), Unknown condition %s!\n", a2, (const char *)v13[11], String2);
      }
      else
      {
        v49 = v48;
        v50 = &v13[((v48 - 1000000000) >> 5) + 3];
        *v50 |= 1 << (v49 & 0x1F);
      }
    }
    if ( _stricmp("Schedule", String2) )
      return 1;
    v4 = v56;
  }
  while ( 1 )
  {
    v10 = *(char **)(v8 + 44);
    if ( v10 == String2 || !_stricmp(v10, String2) )
      break;
    v8 = *(_DWORD *)(v8 + 48);
    if ( !v8 )
      goto LABEL_6;
  }
  DevMsg("ERROR: file contains a schedule (%s) that has already been defined!\n", String2);
  DevMsg("       Aborting schedule load.\n");
  return 0;
}
