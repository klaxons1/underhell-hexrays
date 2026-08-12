char sub_1035C170()
{
  int v0; // ebx
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  char result; // al
  int v25; // ebx
  int v26; // ebx
  char v27; // al
  int v28[5]; // [esp+Ch] [ebp-80h] BYREF
  int v29[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v30[5]; // [esp+34h] [ebp-58h] BYREF
  int v31[2]; // [esp+48h] [ebp-44h] BYREF
  int v32; // [esp+50h] [ebp-3Ch]
  int v33; // [esp+54h] [ebp-38h]
  int v34; // [esp+58h] [ebp-34h]
  int v35[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v36; // [esp+64h] [ebp-28h]
  int v37; // [esp+68h] [ebp-24h]
  int v38; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v40; // [esp+74h] [ebp-18h]
  int v41; // [esp+78h] [ebp-14h]
  int v42; // [esp+7Ch] [ebp-10h]
  void *v43; // [esp+80h] [ebp-Ch]
  const char *v44; // [esp+84h] [ebp-8h] BYREF
  int v45; // [esp+88h] [ebp-4h]

  v0 = 0;
  Src = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  memset(v28, 0, sizeof(v28));
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, sizeof(v30));
  v44 = "TASK_CRANE_GET_POSITION_OVER_ENEMY";
  v45 = 151;
  sub_10229160(v35, 0, &v44);
  v44 = "TASK_CRANE_GET_POSITION_OVER_LASTPOSITION";
  v45 = 152;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_CRANE_GET_POSITION_OVER_OBJECT";
  v45 = 153;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_CRANE_TURN_MAGNET_OFF";
  v45 = 154;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_END_FORCED_DROP";
  v45 = 157;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_CRANE_FIND_OBJECT_TO_PICKUP";
  v45 = 155;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_CRANE_DROP_MAGNET";
  v45 = 156;
  sub_10229160(v35, v37, &v44);
  v44 = "SCHED_CRANE_RANGE_ATTACK1";
  v45 = 91;
  sub_10229160(v31, 0, &v44);
  sub_102ABFC0(&Src, 1);
  v1 = Src;
  v2 = v42 + 1;
  v3 = v42++;
  v43 = Src;
  if ( v3 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v3);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CRANE_RANGE_ATTACK1\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t\tTASK_CRANE"
          "_GET_POSITION_OVER_ENEMY\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_CRANE_TURN_MAGNET_OFF\t\t\t0\t\tInterru"
          "pts\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_OCCLUDED\t\tCOND_ENEMY_TOO_FAR\t\tCOND_PROVOKED\n";
  v44 = "SCHED_CRANE_FIND_LARGE_OBJECT";
  v45 = 92;
  sub_10229160(v31, v33, &v44);
  v4 = v2;
  v45 = v2;
  if ( v2 + 1 > v40 )
  {
    sub_102ABFC0(&Src, v2 - v40 + 1);
    v2 = v42;
    v1 = Src;
    v4 = v45;
  }
  v5 = v2 + 1;
  v6 = v5 - v4 - 1;
  v42 = v5;
  v43 = v1;
  if ( v6 > 0 )
  {
    memcpy(&v1[v4 + 1], &v1[v4], 4 * v6);
    v4 = v45;
  }
  v7 = &v1[v4];
  if ( v7 )
    *v7 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CRANE_FIND_LARGE_OBJECT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t\tTASK_C"
          "RANE_FIND_OBJECT_TO_PICKUP\t0\t\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_OCCLUDED\t\tCON"
          "D_ENEMY_TOO_FAR\n";
  v44 = "SCHED_CRANE_PICKUP_OBJECT";
  v45 = 93;
  sub_10229160(v31, v33, &v44);
  v8 = v5;
  v45 = v5;
  if ( v5 + 1 > v40 )
  {
    sub_102ABFC0(&Src, v5 - v40 + 1);
    v5 = v42;
    v1 = Src;
    v8 = v45;
  }
  v9 = v5 + 1;
  v10 = v9 - v8 - 1;
  v42 = v9;
  v43 = v1;
  if ( v10 > 0 )
  {
    memcpy(&v1[v8 + 1], &v1[v8], 4 * v10);
    v8 = v45;
  }
  v11 = &v1[v8];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CRANE_PICKUP_OBJECT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t\tTASK_CR"
           "ANE_GET_POSITION_OVER_OBJECT\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK_CRANE_DROP_MAGNET\t\t\t\t\t0\t"
           "\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_OCCLUDED\t\tCOND_ENEMY_TOO_FAR\t\tCOND_PROVOKED\n";
  v44 = "SCHED_CRANE_FORCED_GO";
  v45 = 94;
  sub_10229160(v31, v33, &v44);
  v12 = v9;
  v45 = v9;
  if ( v9 + 1 > v40 )
  {
    sub_102ABFC0(&Src, v9 - v40 + 1);
    v9 = v42;
    v1 = Src;
    v12 = v45;
  }
  v13 = v9 + 1;
  v14 = v13 - v12 - 1;
  v42 = v13;
  v43 = v1;
  if ( v14 > 0 )
  {
    memcpy(&v1[v12 + 1], &v1[v12], 4 * v14);
    v12 = v45;
  }
  v15 = &v1[v12];
  if ( v15 )
    *v15 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CRANE_FORCED_GO\tTasks\t\tTASK_CRANE_GET_POSITION_OVER_LASTPOSITION\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t"
           "\t\t\t\t0\t\tTASK_CRANE_TURN_MAGNET_OFF\t\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t\t\t2\t\tInterrupts\n";
  v44 = "SCHED_CRANE_CHASE_ENEMY";
  v45 = 95;
  sub_10229160(v31, v33, &v44);
  v16 = v13;
  v45 = v13;
  if ( v13 + 1 > v40 )
  {
    sub_102ABFC0(&Src, v13 - v40 + 1);
    v13 = v42;
    v1 = Src;
    v16 = v45;
  }
  v17 = v13 + 1;
  v18 = v17 - v16 - 1;
  v42 = v17;
  v43 = v1;
  if ( v18 > 0 )
  {
    memcpy(&v1[v16 + 1], &v1[v16], 4 * v18);
    v16 = v45;
  }
  v19 = &v1[v16];
  if ( v19 )
    *v19 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CRANE_CHASE_ENEMY\tTasks\t\tTASK_CRANE_GET_POSITION_OVER_ENEMY\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t"
           "\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t\t\t5\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UN"
           "REACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_PROVOKED\n";
  v44 = "SCHED_CRANE_FORCED_DROP";
  v45 = 96;
  sub_10229160(v31, v33, &v44);
  v20 = v17;
  v45 = v17;
  if ( v17 + 1 > v40 )
  {
    sub_102ABFC0(&Src, v17 - v40 + 1);
    v17 = v42;
    v1 = Src;
    v20 = v45;
  }
  v21 = v17 + 1;
  v22 = v21 - v20 - 1;
  v42 = v21;
  v43 = v1;
  if ( v22 > 0 )
  {
    memcpy(&v1[v20 + 1], &v1[v20], 4 * v22);
    v20 = v45;
  }
  v23 = &v1[v20];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CRANE_FORCED_DROP\tTasks\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tTASK_CRANE_TURN_MAGNET_OFF\t\t\t"
           "\t\t0\t\tTASK_END_FORCED_DROP\t\t\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t\t\t2\t\tInterrupts\n";
  sub_1004BBC0(&dword_106E7A60, (int)"CNPC_CraneDriver", (int)dword_10690E5C, (int)&dword_106B9490);
  sub_1007DAB0(dword_106E7AAC, (int)dword_1069528C, (int)dword_106B94DC);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v35, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v29, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v30, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  if ( v33 <= 0 )
  {
LABEL_38:
    v25 = 0;
    if ( v37 <= 0 )
    {
LABEL_41:
      v26 = 0;
      if ( v21 > 0 )
      {
        v27 = byte_10671EB0;
        do
        {
          if ( !v27 )
            break;
          v27 = sub_100A7A40(&dword_10694898, "CNPC_CraneDriver", v1[v26++], (int)&dword_106E7A60);
          byte_10671EB0 = v27;
        }
        while ( v26 < v21 );
      }
      sub_102375F0(v30);
      sub_102375F0(v29);
      sub_102375F0(v35);
      sub_102375F0(v31);
      sub_102375F0(v28);
      return sub_102375F0((int *)&Src);
    }
    else
    {
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106E7A7C,
                   *(_DWORD *)(v35[0] + 8 * v25),
                   *(_DWORD *)(v35[0] + 8 * v25 + 4),
                   "task",
                   off_10671EB8);
        if ( !result )
          break;
        if ( ++v25 >= v37 )
          goto LABEL_41;
      }
      if ( v36 >= 0 )
      {
        result = v35[0];
        if ( v35[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
      }
      if ( v32 >= 0 )
      {
        result = v31[0];
        if ( v31[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
      }
      if ( v41 >= 0 && v1 )
        return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E7A64,
                 *(_DWORD *)(v31[0] + 8 * v0),
                 *(_DWORD *)(v31[0] + 8 * v0 + 4),
                 "schedule",
                 off_10671EB8);
      if ( !result )
        break;
      if ( ++v0 >= v33 )
        goto LABEL_38;
    }
    if ( v36 >= 0 )
    {
      result = v35[0];
      if ( v35[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
    }
    if ( v32 >= 0 )
    {
      result = v31[0];
      if ( v31[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
    }
    if ( v41 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  return result;
}
