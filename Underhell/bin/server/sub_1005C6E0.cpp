void sub_1005C6E0()
{
  char *v0; // esi
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  char *v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  const char *v13; // edi
  void *v14; // eax
  bool v15; // zf
  int v16; // esi
  char v17; // al
  _DWORD v18[2]; // [esp+Ch] [ebp-58h] BYREF
  int v19; // [esp+14h] [ebp-50h]
  int v20; // [esp+18h] [ebp-4Ch]
  int v21; // [esp+1Ch] [ebp-48h]
  _DWORD v22[2]; // [esp+20h] [ebp-44h] BYREF
  int v23; // [esp+28h] [ebp-3Ch]
  int v24; // [esp+2Ch] [ebp-38h]
  int v25; // [esp+30h] [ebp-34h]
  _DWORD v26[2]; // [esp+34h] [ebp-30h] BYREF
  int v27; // [esp+3Ch] [ebp-28h]
  int v28; // [esp+40h] [ebp-24h]
  int v29; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v31; // [esp+4Ch] [ebp-18h]
  int v32; // [esp+50h] [ebp-14h]
  int v33; // [esp+54h] [ebp-10h]
  void *v34; // [esp+58h] [ebp-Ch]
  const char *v35; // [esp+5Ch] [ebp-8h] BYREF
  int v36; // [esp+60h] [ebp-4h]

  Src = 0;
  v31 = 0;
  v32 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v35 = "TASK_RAPPEL";
  v36 = 100000;
  sub_10229160(0, &v35);
  v35 = "TASK_HIT_GROUND";
  v36 = 100001;
  sub_10229160(0, &v35);
  v35 = "COND_BEGIN_RAPPEL";
  v36 = 100000;
  sub_10229160(0, &v35);
  v35 = "SCHED_RAPPEL_WAIT";
  v36 = 100000;
  sub_10229160(0, &v35);
  sub_102ABFC0(1);
  v33 = 1;
  v34 = 0;
  v35 = "SCHED_RAPPEL";
  v36 = 100001;
  sub_10229160(0, &v35);
  v36 = 1;
  sub_102ABFC0(1 - v31 + 1);
  v0 = (char *)Src;
  v1 = v36;
  v2 = v33 + 1;
  v3 = v33 - v36;
  ++v33;
  v34 = Src;
  if ( v3 > 0 )
  {
    memcpy((char *)Src + 4 * v36 + 4, (char *)Src + 4 * v36, 4 * v3);
    v1 = v36;
  }
  v4 = (char *)Src + 4 * v1;
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_RAPPEL\tTasks\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_RAPPEL_LOOP\t\tTASK_RAPPEL\t\t\t\t0\t\tTASK_SET_S"
          "CHEDULE\t\tSCHEDULE:SCHED_CLEAR_RAPPEL_POINT\tInterrupts\t\tCOND_NEW_ENEMY\n";
  v35 = "SCHED_CLEAR_RAPPEL_POINT";
  v36 = 100002;
  sub_10229160(v28, &v35);
  v5 = v2;
  v36 = v2;
  if ( v2 + 1 > v31 )
  {
    sub_102ABFC0(v2 - v31 + 1);
    v2 = v33;
    v0 = (char *)Src;
    v5 = v36;
  }
  v6 = v2 + 1;
  v7 = v6 - v5 - 1;
  v33 = v6;
  if ( v7 > 0 )
  {
    memcpy(&v0[4 * v5 + 4], &v0[4 * v5], 4 * v7);
    v5 = v36;
  }
  v8 = &v0[4 * v5];
  if ( v8 )
    *(_DWORD *)v8 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_CLEAR_RAPPEL_POINT\tTasks\t\tTASK_HIT_GROUND\t\t\t0\t\tTASK_MOVE_AWAY_PATH\t\t128\t\tTASK_"
                    "RUN_PATH\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t0\tInterrupts\n";
  sub_1004BBC0(&dword_10692380, (int)"CAI_RappelBehavior", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v26, sub_10333A80);
  sub_1004C500((int)v22, sub_10333A80);
  sub_1004C500((int)v18, sub_10333A80);
  v9 = 0;
  if ( v28 > 0 )
  {
    while ( (unsigned __int8)sub_1007DB90(
                               *(_DWORD *)(v26[0] + 8 * v9),
                               *(_DWORD *)(v26[0] + 8 * v9 + 4),
                               "schedule",
                               off_106054A4) )
    {
      if ( ++v9 >= v28 )
        goto LABEL_16;
    }
LABEL_22:
    if ( v19 >= 0 && v18[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v18[0]);
    if ( v23 >= 0 && v22[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
    if ( v27 >= 0 && v26[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
    if ( v32 >= 0 )
    {
      v14 = Src;
      v15 = Src == 0;
      goto LABEL_51;
    }
    return;
  }
LABEL_16:
  v10 = 0;
  if ( v24 > 0 )
  {
    while ( (unsigned __int8)sub_1007DB90(
                               *(_DWORD *)(v22[0] + 8 * v10),
                               *(_DWORD *)(v22[0] + 8 * v10 + 4),
                               "task",
                               off_106054A4) )
    {
      if ( ++v10 >= v24 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  v11 = 0;
  v12 = v18[0];
  if ( v20 > 0 )
  {
    do
    {
      v13 = *(const char **)(v12 + 8 * v11);
      if ( sub_1016BF80(&unk_10690E6C) - 1000000000 < 256 )
      {
        if ( !(unsigned __int8)sub_1007DB90(
                                 *(_DWORD *)(v12 + 8 * v11),
                                 *(_DWORD *)(v12 + 8 * v11 + 4),
                                 "condition",
                                 off_106054A4) )
          goto LABEL_40;
      }
      else
      {
        DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v13);
      }
      ++v11;
    }
    while ( v11 < v20 );
    v6 = v33;
  }
  v16 = 0;
  if ( v6 > 0 )
  {
    v17 = byte_1060549C;
    do
    {
      if ( !v17 )
        break;
      v17 = sub_100A7A40("CAI_RappelBehavior", *((_DWORD *)Src + v16++), &dword_10692380);
      byte_1060549C = v17;
    }
    while ( v16 < v6 );
  }
LABEL_40:
  if ( v19 >= 0 && v12 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v12);
  if ( v23 >= 0 && v22[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
  if ( v27 >= 0 && v26[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
  if ( v32 >= 0 )
  {
    v14 = Src;
    v15 = Src == 0;
LABEL_51:
    if ( !v15 )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
  }
}
