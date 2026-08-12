char sub_103AD9B0()
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
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // esi
  char result; // al
  int v17; // esi
  int v18; // esi
  int v19; // esi
  char v20; // al
  int v21[5]; // [esp+Ch] [ebp-80h] BYREF
  int v22[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v23[2]; // [esp+34h] [ebp-58h] BYREF
  int v24; // [esp+3Ch] [ebp-50h]
  int v25; // [esp+40h] [ebp-4Ch]
  int v26; // [esp+44h] [ebp-48h]
  int v27[2]; // [esp+48h] [ebp-44h] BYREF
  int v28; // [esp+50h] [ebp-3Ch]
  int v29; // [esp+54h] [ebp-38h]
  int v30; // [esp+58h] [ebp-34h]
  int v31[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v32; // [esp+64h] [ebp-28h]
  int v33; // [esp+68h] [ebp-24h]
  int v34; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v36; // [esp+74h] [ebp-18h]
  int v37; // [esp+78h] [ebp-14h]
  int v38; // [esp+7Ch] [ebp-10h]
  void *v39; // [esp+80h] [ebp-Ch]
  const char *v40; // [esp+84h] [ebp-8h] BYREF
  int v41; // [esp+88h] [ebp-4h]

  Src = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v21, 0, sizeof(v21));
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(v22, 0, sizeof(v22));
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v40 = "TASK_STALKER_ZIGZAG";
  v41 = 150;
  sub_10229160(v23, 0, &v40);
  v40 = "TASK_STALKER_SCREAM";
  v41 = 151;
  sub_10229160(v23, v25, &v40);
  dword_106EAC24 = sub_100032E0((int)"ACT_STALKER_WORK");
  sub_10008F60((int)"ACT_STALKER_WORK", dword_106EAC24);
  v40 = "SQUAD_SLOT_CHASE_ENEMY_1";
  v41 = 8;
  sub_10229160(v27, 0, &v40);
  v40 = "SQUAD_SLOT_CHASE_ENEMY_2";
  v41 = 9;
  sub_10229160(v27, v29, &v40);
  v40 = "SCHED_STALKER_RANGE_ATTACK";
  v41 = 89;
  sub_10229160(v31, 0, &v40);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v38 + 1;
  v2 = v38++;
  v39 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_STALKER_RANGE_ATTACK\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_RANGE"
          "_ATTACK1\t\t\t\t0\tInterrupts\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_HEAVY_DAMAGE\t\tCOND_REPEATED_DAMAGE\t\tCOND_H"
          "EAR_DANGER\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_OCCLUDED\n";
  v40 = "SCHED_STALKER_CHASE_ENEMY";
  v41 = 88;
  sub_10229160(v31, v33, &v40);
  v3 = v1;
  v41 = v1;
  if ( v1 + 1 > v36 )
  {
    sub_102ABFC0(&Src, v1 - v36 + 1);
    v1 = v38;
    v0 = Src;
    v3 = v41;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v38 = v4;
  v39 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v41;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_STALKER_CHASE_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\tTASK_"
          "SET_TOLERANCE_DISTANCE\t\t24\t\tTASK_GET_PATH_TO_ENEMY\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_STALKER_ZIGZ"
          "AG\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTAC"
          "K1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_HEAR_DANGER\n";
  v40 = "SCHED_STALKER_ACQUIRE_PLAYER";
  v41 = 90;
  sub_10229160(v31, v33, &v40);
  v7 = v4;
  v41 = v4;
  if ( v4 + 1 > v36 )
  {
    sub_102ABFC0(&Src, v4 - v36 + 1);
    v4 = v38;
    v0 = Src;
    v7 = v41;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v38 = v8;
  v39 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[v7 + 1], &v0[v7], 4 * v9);
    v7 = v41;
  }
  v10 = &v0[v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STALKER_ACQUIRE_PLAYER\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_WA"
           "IT_RANDOM\t\t\t\t0.5\t\tTASK_STALKER_SCREAM\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.5\t\tTASK_WAIT_RANDOM\t\t\t\t0"
           ".5\tInterrupts\n";
  v40 = "SCHED_STALKER_PATROL";
  v41 = 91;
  sub_10229160(v31, v33, &v40);
  v11 = v8;
  v41 = v8;
  if ( v8 + 1 > v36 )
  {
    sub_102ABFC0(&Src, v8 - v36 + 1);
    v8 = v38;
    v0 = Src;
    v11 = v41;
  }
  v12 = v8 + 1;
  v13 = v12 - v11 - 1;
  v38 = v12;
  v39 = v0;
  if ( v13 > 0 )
  {
    memcpy(&v0[v11 + 1], &v0[v11], 4 * v13);
    v11 = v41;
  }
  v14 = &v0[v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STALKER_PATROL\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.5\t\tTASK_WAIT_RANDOM\t"
           "\t\t\t0.5\t\tTASK_WANDER\t\t\t\t\t\t18000600\t\tTASK_FACE_PATH\t\t\t\t\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTAS"
           "K_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_REASONABLE\t\t\t0\t\tTASK_SET_SCHEDULE\t"
           "\t\t\tSCHEDULE:SCHED_STALKER_PATROL\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_SEE_ENEMY\n";
  sub_1004BBC0(&dword_106EACC0, (int)"CNPC_Stalker", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106EAD0C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v23, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v22, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v27, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v15 = 0;
  if ( v33 <= 0 )
  {
LABEL_26:
    v17 = 0;
    if ( v25 <= 0 )
    {
LABEL_29:
      v18 = 0;
      if ( v29 <= 0 )
      {
LABEL_32:
        v19 = 0;
        if ( v12 > 0 )
        {
          v20 = byte_10679918;
          do
          {
            if ( !v20 )
              break;
            v20 = sub_100A7A40(&dword_10694898, "CNPC_Stalker", *((_DWORD *)Src + v19++), (int)&dword_106EACC0);
            byte_10679918 = v20;
          }
          while ( v19 < v12 );
        }
        sub_102375F0(v27);
        sub_102375F0(v22);
        sub_102375F0(v23);
        sub_102375F0(v31);
        sub_102375F0(v21);
        return sub_102375F0((int *)&Src);
      }
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106EAD0C,
                   *(_DWORD *)(v27[0] + 8 * v18),
                   *(_DWORD *)(v27[0] + 8 * v18 + 4),
                   "squadslot",
                   off_10679920);
        if ( !result )
          break;
        if ( ++v18 >= v29 )
          goto LABEL_32;
      }
    }
    else
    {
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106EACDC,
                   *(_DWORD *)(v23[0] + 8 * v17),
                   *(_DWORD *)(v23[0] + 8 * v17 + 4),
                   "task",
                   off_10679920);
        if ( !result )
          break;
        if ( ++v17 >= v25 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EACC4,
                 *(_DWORD *)(v31[0] + 8 * v15),
                 *(_DWORD *)(v31[0] + 8 * v15 + 4),
                 "schedule",
                 off_10679920);
      if ( !result )
        break;
      if ( ++v15 >= v33 )
        goto LABEL_26;
    }
  }
  if ( v28 >= 0 )
  {
    result = v27[0];
    if ( v27[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27[0]);
  }
  if ( v24 >= 0 )
  {
    result = v23[0];
    if ( v23[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23[0]);
  }
  if ( v32 >= 0 )
  {
    result = v31[0];
    if ( v31[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  }
  if ( v37 >= 0 )
  {
    result = (char)Src;
    if ( Src )
      return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  }
  return result;
}
