void sub_1029E1F0()
{
  _DWORD *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // ebx
  const char *v15; // edi
  void *v16; // eax
  bool v17; // zf
  int v18; // esi
  char v19; // al
  int v20[2]; // [esp+Ch] [ebp-58h] BYREF
  int v21; // [esp+14h] [ebp-50h]
  int v22; // [esp+18h] [ebp-4Ch]
  int v23; // [esp+1Ch] [ebp-48h]
  int v24[2]; // [esp+20h] [ebp-44h] BYREF
  int v25; // [esp+28h] [ebp-3Ch]
  int v26; // [esp+2Ch] [ebp-38h]
  int v27; // [esp+30h] [ebp-34h]
  int v28[2]; // [esp+34h] [ebp-30h] BYREF
  int v29; // [esp+3Ch] [ebp-28h]
  int v30; // [esp+40h] [ebp-24h]
  int v31; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v33; // [esp+4Ch] [ebp-18h]
  int v34; // [esp+50h] [ebp-14h]
  int v35; // [esp+54h] [ebp-10h]
  void *v36; // [esp+58h] [ebp-Ch]
  const char *v37; // [esp+5Ch] [ebp-8h] BYREF
  int v38; // [esp+60h] [ebp-4h]

  Src = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v37 = "TASK_OPERATOR_GET_PATH_TO_POSITION";
  v38 = 100000;
  sub_10229160(v28, 0, &v37);
  v37 = "TASK_OPERATOR_START_PATH";
  v38 = 100001;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_OPERATOR_OPERATE";
  v38 = 100002;
  sub_10229160(v28, v30, &v37);
  v37 = "COND_OPERATOR_LOST_SIGHT_OF_POSITION";
  v38 = 100000;
  sub_10229160(v20, 0, &v37);
  v37 = "SCHED_OPERATOR_APPROACH_POSITION";
  v38 = 100000;
  sub_10229160(v24, 0, &v37);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v35 + 1;
  v2 = v35++;
  v36 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_OPERATOR_APPROACH_POSITION\tTasks\t\tTASK_OPERATOR_GET_PATH_TO_POSITION\t0\t\tTASK_OPERATOR_START_PA"
          "TH\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\t"
          "COND_HEAR_DANGER\t\tCOND_OPERATOR_LOST_SIGHT_OF_POSITION\n";
  v37 = "SCHED_OPERATOR_OPERATE";
  v38 = 100002;
  sub_10229160(v24, v26, &v37);
  v3 = v1;
  v38 = v1;
  if ( v1 + 1 > v33 )
  {
    sub_102ABFC0(v1 - v33 + 1);
    v1 = v35;
    v0 = Src;
    v3 = v38;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v35 = v4;
  v36 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v38;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_OPERATOR_OPERATE\tTasks\t\tTASK_WAIT\t\t\t\t\t0.2\t\tTASK_OPERATOR_OPERATE\t\t0\t\tTASK_WAIT_INDEFIN"
          "ITE\t\t0\t\tInterrupts\t\tCOND_PROVOKED\n";
  v37 = "SCHED_OPERATOR_WAIT_FOR_HOLSTER";
  v38 = 100003;
  sub_10229160(v24, v26, &v37);
  v7 = v4;
  v38 = v4;
  if ( v4 + 1 > v33 )
  {
    sub_102ABFC0(v4 - v33 + 1);
    v4 = v35;
    v0 = Src;
    v7 = v38;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v35 = v8;
  if ( v9 > 0 )
  {
    memcpy(&v0[v7 + 1], &v0[v7], 4 * v9);
    v7 = v38;
  }
  v10 = &v0[v7];
  if ( v10 )
    *v10 = "\n\tSchedule\n\t\tSCHED_OPERATOR_WAIT_FOR_HOLSTER\tTasks\t\tTASK_WAIT\t\t\t\t\t1.0\t\tInterrupts\t\n";
  sub_1004BBC0(&dword_106DB478, (int)"CAI_OperatorBehavior", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v24, sub_10333A80);
  sub_1004C500((int)v28, sub_10333A80);
  sub_1004C500((int)v20, sub_10333A80);
  v11 = 0;
  if ( v26 > 0 )
  {
    while ( sub_1007DB90(
              dword_106DB47C,
              *(_DWORD *)(v24[0] + 8 * v11),
              *(_DWORD *)(v24[0] + 8 * v11 + 4),
              "schedule",
              off_1065E6E8) )
    {
      if ( ++v11 >= v26 )
        goto LABEL_20;
    }
LABEL_26:
    if ( v21 >= 0 && v20[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20[0]);
    if ( v29 >= 0 && v28[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
    if ( v25 >= 0 && v24[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
    if ( v34 >= 0 )
    {
      v16 = Src;
      v17 = Src == 0;
      goto LABEL_55;
    }
    return;
  }
LABEL_20:
  v12 = 0;
  if ( v30 > 0 )
  {
    while ( sub_1007DB90(
              dword_106DB494,
              *(_DWORD *)(v28[0] + 8 * v12),
              *(_DWORD *)(v28[0] + 8 * v12 + 4),
              "task",
              off_1065E6E8) )
    {
      if ( ++v12 >= v30 )
        goto LABEL_23;
    }
    goto LABEL_26;
  }
LABEL_23:
  v13 = 0;
  v14 = v20[0];
  if ( v22 > 0 )
  {
    do
    {
      v15 = *(const char **)(v14 + 8 * v13);
      if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      {
        if ( !sub_1007DB90(
                dword_106DB4AC,
                *(_DWORD *)(v14 + 8 * v13),
                *(_DWORD *)(v14 + 8 * v13 + 4),
                "condition",
                off_1065E6E8) )
          goto LABEL_44;
      }
      else
      {
        DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v15);
      }
      ++v13;
    }
    while ( v13 < v22 );
    v8 = v35;
  }
  v18 = 0;
  if ( v8 > 0 )
  {
    v19 = byte_1065E6E0;
    do
    {
      if ( !v19 )
        break;
      v19 = sub_100A7A40(&dword_10694898, "CAI_OperatorBehavior", *((_DWORD *)Src + v18++), (int)&dword_106DB478);
      byte_1065E6E0 = v19;
    }
    while ( v18 < v8 );
  }
LABEL_44:
  if ( v21 >= 0 && v14 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
  if ( v29 >= 0 && v28[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
  if ( v25 >= 0 && v24[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
  if ( v34 >= 0 )
  {
    v16 = Src;
    v17 = Src == 0;
LABEL_55:
    if ( !v17 )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
  }
}
