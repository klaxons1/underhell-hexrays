void sub_102A9710()
{
  _DWORD *v0; // ebx
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // edi
  int v19; // edi
  int v20; // edi
  const char *v21; // ebx
  int v22; // ebx
  int v23; // edi
  char v24; // al
  int v25[2]; // [esp+Ch] [ebp-58h] BYREF
  int v26; // [esp+14h] [ebp-50h]
  int v27; // [esp+18h] [ebp-4Ch]
  int v28; // [esp+1Ch] [ebp-48h]
  int v29[2]; // [esp+20h] [ebp-44h] BYREF
  int v30; // [esp+28h] [ebp-3Ch]
  int v31; // [esp+2Ch] [ebp-38h]
  int v32; // [esp+30h] [ebp-34h]
  int v33[2]; // [esp+34h] [ebp-30h] BYREF
  int v34; // [esp+3Ch] [ebp-28h]
  int v35; // [esp+40h] [ebp-24h]
  int v36; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v38; // [esp+4Ch] [ebp-18h]
  int v39; // [esp+50h] [ebp-14h]
  int v40; // [esp+54h] [ebp-10h]
  void *v41; // [esp+58h] [ebp-Ch]
  const char *v42; // [esp+5Ch] [ebp-8h] BYREF
  int v43; // [esp+60h] [ebp-4h]

  Src = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v33[0] = 0;
  v33[1] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v42 = "COND_POLICE_TARGET_TOO_CLOSE_HARASS";
  v43 = 100000;
  sub_10229160(v25, 0, &v42);
  v42 = "COND_POLICE_TARGET_TOO_CLOSE_SUPPRESS";
  v43 = 100001;
  sub_10229160(v25, v27, &v42);
  v42 = "TASK_POLICE_GET_PATH_TO_HARASS_GOAL";
  v43 = 100000;
  sub_10229160(v29, 0, &v42);
  v42 = "TASK_POLICE_GET_PATH_TO_POLICE_GOAL";
  v43 = 100001;
  sub_10229160(v29, v31, &v42);
  v42 = "TASK_POLICE_ANNOUNCE_HARASS";
  v43 = 100003;
  sub_10229160(v29, v31, &v42);
  v42 = "TASK_POLICE_FACE_ALONG_GOAL";
  v43 = 100002;
  sub_10229160(v29, v31, &v42);
  v42 = "SCHED_POLICE_WARN_TARGET";
  v43 = 100001;
  sub_10229160(v33, 0, &v42);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v40 + 1;
  v2 = v40++;
  v41 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_POLICE_WARN_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_TARGET\t\t\t\t\t0\t\tTASK_POLICE_ANN"
          "OUNCE_HARASS\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_POLICE_HARASS1\tInterrupts\t\tCOND_POLICE_TARGET_T"
          "OO_CLOSE_SUPPRESS\n";
  v42 = "SCHED_POLICE_HARASS_TARGET";
  v43 = 100002;
  sub_10229160(v33, v35, &v42);
  v43 = v1;
  if ( v1 + 1 > v38 )
  {
    sub_102ABFC0(v1 - v38 + 1);
    v1 = v40;
    v0 = Src;
  }
  v3 = v1 + 1;
  v40 = v3;
  v4 = v3 - v43 - 1;
  v41 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v43 + 1], &v0[v43], 4 * v4);
  v5 = &v0[v43];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_POLICE_HARASS_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_FACE_TARGET\t\t\t\t\t\t\t0\t\t"
          "TASK_POLICE_GET_PATH_TO_HARASS_GOAL\t\t\t64\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tTASK_POLICE_ANNOUNCE_HAR"
          "ASS\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\t\t\tACTIVITY:ACT_POLICE_HARASS1\tInterrupts\t\tCOND_POLICE_TARGET_TO"
          "O_CLOSE_SUPPRESS\n";
  v42 = "SCHED_POLICE_SUPPRESS_TARGET";
  v43 = 100003;
  sub_10229160(v33, v35, &v42);
  v43 = v3;
  if ( v3 + 1 > v38 )
  {
    sub_102ABFC0(v3 - v38 + 1);
    v3 = v40;
    v0 = Src;
  }
  v6 = v3 + 1;
  v40 = v6;
  v7 = v6 - v43 - 1;
  v41 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v43 + 1], &v0[v43], 4 * v7);
  v8 = &v0[v43];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_POLICE_SUPPRESS_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_TARGET\t\t\t\t\t0\t\tTASK_"
          "POLICE_ANNOUNCE_HARASS\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_POLICE_HARASS1\tInterrupts\n";
  v42 = "SCHED_POLICE_RETURN_FROM_HARASS";
  v43 = 100000;
  sub_10229160(v33, v35, &v42);
  v43 = v6;
  if ( v6 + 1 > v38 )
  {
    sub_102ABFC0(v6 - v38 + 1);
    v6 = v40;
    v0 = Src;
  }
  v9 = v6 + 1;
  v40 = v9;
  v10 = v9 - v43 - 1;
  v41 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v43 + 1], &v0[v43], 4 * v10);
  v11 = &v0[v43];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_POLICE_RETURN_FROM_HARASS\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_POLICE_GET_PATH_TO_POLI"
           "CE_GOAL\t\t\t16\t\tTASK_WALK_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tTASK_STOP_MOVING"
           "\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_POLICE_TARGET_TOO_CLOSE_SUPPRESS\n";
  v42 = "SCHED_POLICE_TRACK_TARGET";
  v43 = 100005;
  sub_10229160(v33, v35, &v42);
  v43 = v9;
  if ( v9 + 1 > v38 )
  {
    sub_102ABFC0(v9 - v38 + 1);
    v9 = v40;
    v0 = Src;
  }
  v12 = v9 + 1;
  v40 = v12;
  v13 = v12 - v43 - 1;
  v41 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v43 + 1], &v0[v43], 4 * v13);
  v14 = &v0[v43];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_POLICE_TRACK_TARGET\tTasks\t\tTASK_FACE_TARGET\t\t\t\t\t0\tInterrupts\t\tCOND_POLICE_TARGET_TOO_CLOSE_SUPPRESS\n";
  v42 = "SCHED_POLICE_FACE_ALONG_GOAL";
  v43 = 100004;
  sub_10229160(v33, v35, &v42);
  v43 = v12;
  if ( v12 + 1 > v38 )
  {
    sub_102ABFC0(v12 - v38 + 1);
    v12 = v40;
    v0 = Src;
  }
  v15 = v12 + 1;
  v16 = v15 - v43 - 1;
  if ( v16 > 0 )
    memcpy(&v0[v43 + 1], &v0[v43], 4 * v16);
  v17 = &v0[v43];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_POLICE_FACE_ALONG_GOAL\tTasks\t\tTASK_WAIT_RANDOM\t\t\t\t\t\t\t2\t\tTASK_POLICE_FACE_ALONG_GOAL\t\t"
           "\t\t\t0\tInterrupts\t\tCOND_POLICE_TARGET_TOO_CLOSE_SUPPRESS\n";
  sub_1004BBC0(&dword_106DB860, (int)"CAI_PolicingBehavior", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v33, sub_10333A80);
  sub_1004C500((int)v29, sub_10333A80);
  sub_1004C500((int)v25, sub_10333A80);
  v18 = 0;
  if ( v35 <= 0 )
  {
LABEL_38:
    v19 = 0;
    if ( v31 <= 0 )
    {
LABEL_41:
      v20 = 0;
      if ( v27 <= 0 )
      {
LABEL_71:
        v23 = 0;
        if ( v15 > 0 )
        {
          v24 = byte_1065F644;
          do
          {
            if ( !v24 )
              break;
            v24 = sub_100A7A40(&dword_10694898, "CAI_PolicingBehavior", v0[v23++], (int)&dword_106DB860);
            byte_1065F644 = v24;
          }
          while ( v23 < v15 );
        }
        if ( v26 >= 0 && v25[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
        if ( v30 >= 0 && v29[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
        if ( v34 >= 0 && v33[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33[0]);
        if ( v39 >= 0 )
        {
          if ( v0 )
            (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
        }
        return;
      }
      while ( 1 )
      {
        v21 = *(const char **)(v25[0] + 8 * v20);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          v22 = v25[0];
          if ( !sub_1007DB90(
                  dword_106DB894,
                  *(_DWORD *)(v25[0] + 8 * v20),
                  *(_DWORD *)(v25[0] + 8 * v20 + 4),
                  "condition",
                  off_1065F64C) )
          {
            if ( v26 >= 0 && v22 )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22);
            if ( v30 >= 0 && v29[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
            if ( v34 >= 0 && v33[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33[0]);
            if ( v39 >= 0 && Src )
              (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
            return;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v21);
        }
        if ( ++v20 >= v27 )
        {
          v0 = Src;
          goto LABEL_71;
        }
      }
    }
    while ( sub_1007DB90(
              dword_106DB87C,
              *(_DWORD *)(v29[0] + 8 * v19),
              *(_DWORD *)(v29[0] + 8 * v19 + 4),
              "task",
              off_1065F64C) )
    {
      if ( ++v19 >= v31 )
        goto LABEL_41;
    }
    if ( v26 >= 0 && v25[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
    if ( v30 >= 0 && v29[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
    if ( v34 >= 0 && v33[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33[0]);
    if ( v39 >= 0 && v0 )
      goto LABEL_55;
  }
  else
  {
    while ( sub_1007DB90(
              dword_106DB864,
              *(_DWORD *)(v33[0] + 8 * v18),
              *(_DWORD *)(v33[0] + 8 * v18 + 4),
              "schedule",
              off_1065F64C) )
    {
      if ( ++v18 >= v35 )
        goto LABEL_38;
    }
    if ( v26 >= 0 && v25[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
    if ( v30 >= 0 && v29[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
    if ( v34 >= 0 && v33[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33[0]);
    if ( v39 >= 0 && v0 )
LABEL_55:
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
}
