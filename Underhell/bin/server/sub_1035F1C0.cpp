char sub_1035F1C0()
{
  _DWORD *v0; // edi
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
  int v18; // esi
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  char result; // al
  char v28; // al
  int v29[5]; // [esp+Ch] [ebp-84h] BYREF
  int v30[5]; // [esp+20h] [ebp-70h] BYREF
  int v31[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v32; // [esp+3Ch] [ebp-54h]
  int v33; // [esp+40h] [ebp-50h]
  int v34; // [esp+44h] [ebp-4Ch]
  int v35[2]; // [esp+48h] [ebp-48h] BYREF
  int v36; // [esp+50h] [ebp-40h]
  int v37; // [esp+54h] [ebp-3Ch]
  int v38; // [esp+58h] [ebp-38h]
  int v39[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v40; // [esp+64h] [ebp-2Ch]
  int v41; // [esp+68h] [ebp-28h]
  int v42; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v44; // [esp+74h] [ebp-1Ch]
  int v45; // [esp+78h] [ebp-18h]
  int v46; // [esp+7Ch] [ebp-14h]
  void *v47; // [esp+80h] [ebp-10h]
  const char *v48; // [esp+84h] [ebp-Ch] BYREF
  int v49; // [esp+88h] [ebp-8h]
  int v50; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  memset(v29, 0, sizeof(v29));
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39[0] = 0;
  v39[1] = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  memset(v30, 0, sizeof(v30));
  v48 = "TASK_CROW_FIND_FLYTO_NODE";
  v49 = 150;
  sub_10229160(v39, 0, &v48);
  v48 = "TASK_CROW_TAKEOFF";
  v49 = 151;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_FLY";
  v49 = 152;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_PICK_RANDOM_GOAL";
  v49 = 154;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_HOP";
  v49 = 156;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_PICK_EVADE_GOAL";
  v49 = 155;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_WAIT_FOR_BARNACLE_KILL";
  v49 = 159;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_FALL_TO_GROUND";
  v49 = 157;
  sub_10229160(v39, v41, &v48);
  v48 = "TASK_CROW_PREPARE_TO_FLY_RANDOM";
  v49 = 158;
  sub_10229160(v39, v41, &v48);
  dword_106E7ADC = sub_100032E0((int)"ACT_CROW_TAKEOFF");
  sub_10008F60((int)"ACT_CROW_TAKEOFF", dword_106E7ADC);
  dword_106E7AD8 = sub_100032E0((int)"ACT_CROW_SOAR");
  sub_10008F60((int)"ACT_CROW_SOAR", dword_106E7AD8);
  dword_106E7AD4 = sub_100032E0((int)"ACT_CROW_LAND");
  sub_10008F60((int)"ACT_CROW_LAND", dword_106E7AD4);
  dword_106E7AC8 = sub_1013BF10((int)"AE_CROW_HOP");
  sub_1006AFD0((int)"AE_CROW_HOP", dword_106E7AC8);
  dword_106E7ACC = sub_1013BF10((int)"AE_CROW_FLY");
  sub_1006AFD0((int)"AE_CROW_FLY", dword_106E7ACC);
  dword_106E7AD0 = sub_1013BF10((int)"AE_CROW_TAKEOFF");
  sub_1006AFD0((int)"AE_CROW_TAKEOFF", dword_106E7AD0);
  v48 = "COND_CROW_ENEMY_TOO_CLOSE";
  v49 = 73;
  sub_10229160(v31, 0, &v48);
  v48 = "COND_CROW_ENEMY_WAY_TOO_CLOSE";
  v49 = 74;
  sub_10229160(v31, v33, &v48);
  v48 = "COND_CROW_FORCED_FLY";
  v49 = 75;
  sub_10229160(v31, v33, &v48);
  v48 = "COND_CROW_BARNACLED";
  v49 = 76;
  sub_10229160(v31, v33, &v48);
  v48 = "SCHED_CROW_IDLE_WALK";
  v49 = 88;
  sub_10229160(v35, 0, &v48);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v46 + 1;
  v2 = v46++;
  v47 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CROW_IDLE_WALK\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_IDLE_STAND\t\tTASK_CROW_PICK_RAN"
          "DOM_GOAL\t\t0\t\tTASK_GET_PATH_TO_SAVEPOSITION\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t"
          "0\t\tTASK_WAIT_PVS\t\t\t\t\t0\t\t\tInterrupts\t\tCOND_CROW_FORCED_FLY\t\tCOND_PROVOKED\t\tCOND_CROW_ENEMY_TOO_"
          "CLOSE\t\tCOND_NEW_ENEMY\t\tCOND_HEAVY_DAMAGE\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\t"
          "COND_HEAR_COMBAT\n";
  v48 = "SCHED_CROW_WALK_AWAY";
  v49 = 90;
  sub_10229160(v35, v37, &v48);
  v50 = v1;
  if ( v1 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v1 - v44 + 1);
    v1 = v46;
    v0 = Src;
  }
  v3 = v1 + 1;
  v46 = v3;
  v4 = v3 - v50 - 1;
  v47 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v4);
  v5 = &v0[v50];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CROW_WALK_AWAY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CROW_FLY_AWAY\t\tTASK_CROW_PICK_"
          "EVADE_GOAL\t\t0\t\tTASK_GET_PATH_TO_SAVEPOSITION\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t"
          "\t0\t\t\tInterrupts\t\tCOND_CROW_FORCED_FLY\t\tCOND_CROW_ENEMY_WAY_TOO_CLOSE\t\tCOND_NEW_ENEMY\t\tCOND_HEAVY_D"
          "AMAGE\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_COMBAT\n";
  v48 = "SCHED_CROW_RUN_AWAY";
  v49 = 91;
  sub_10229160(v35, v37, &v48);
  v50 = v3;
  if ( v3 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v3 - v44 + 1);
    v3 = v46;
    v0 = Src;
  }
  v6 = v3 + 1;
  v46 = v6;
  v7 = v6 - v50 - 1;
  v47 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v7);
  v8 = &v0[v50];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CROW_RUN_AWAY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CROW_FLY_AWAY\t\tTASK_CROW_PICK_E"
          "VADE_GOAL\t\t0\t\tTASK_GET_PATH_TO_SAVEPOSITION\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t"
          "0\t\t\tInterrupts\t\tCOND_CROW_FORCED_FLY\t\tCOND_CROW_ENEMY_WAY_TOO_CLOSE\t\tCOND_NEW_ENEMY\t\tCOND_HEAVY_DAM"
          "AGE\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_COMBAT\n";
  v48 = "SCHED_CROW_HOP_AWAY";
  v49 = 92;
  sub_10229160(v35, v37, &v48);
  v50 = v6;
  if ( v6 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v6 - v44 + 1);
    v6 = v46;
    v0 = Src;
  }
  v9 = v6 + 1;
  v46 = v9;
  v10 = v9 - v50 - 1;
  v47 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v10);
  v11 = &v0[v50];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_HOP_AWAY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CROW_FLY_AWAY\t\tTASK_STOP_MOVIN"
           "G\t\t\t\t0\t\tTASK_CROW_PICK_EVADE_GOAL\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_CROW_HOP\t\t\t\t\t0\t\tInt"
           "errupts\t\tCOND_CROW_FORCED_FLY\t\tCOND_HEAVY_DAMAGE\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_D"
           "ANGER\t\tCOND_HEAR_COMBAT\n";
  v48 = "SCHED_CROW_IDLE_FLY";
  v49 = 89;
  sub_10229160(v35, v37, &v48);
  v50 = v9;
  if ( v9 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v9 - v44 + 1);
    v9 = v46;
    v0 = Src;
  }
  v12 = v9 + 1;
  v46 = v12;
  v13 = v12 - v50 - 1;
  v47 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v13);
  v14 = &v0[v50];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_IDLE_FLY\tTasks\t\tTASK_FIND_HINTNODE\t\t\t\t0\t\tTASK_GET_PATH_TO_HINTNODE\t\t0\t\tTASK_WAIT_"
           "FOR_MOVEMENT\t\t\t0\t\t\tInterrupts\n";
  v48 = "SCHED_CROW_FLY_AWAY";
  v49 = 93;
  sub_10229160(v35, v37, &v48);
  v50 = v12;
  if ( v12 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v12 - v44 + 1);
    v12 = v46;
    v0 = Src;
  }
  v15 = v12 + 1;
  v46 = v15;
  v16 = v15 - v50 - 1;
  v47 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v16);
  v17 = &v0[v50];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_FLY_AWAY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CROW_FLY_FAIL\t\tTASK_STOP_MOVIN"
           "G\t\t\t\t0\t\tTASK_FIND_HINTNODE\t\t\t\t0\t\tTASK_GET_PATH_TO_HINTNODE\t\t0\t\tTASK_CROW_TAKEOFF\t\t\t\t0\t\t"
           "TASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tInterrupts\n";
  v48 = "SCHED_CROW_FLY";
  v49 = 94;
  sub_10229160(v35, v37, &v48);
  v50 = v15;
  if ( v15 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v15 - v44 + 1);
    v15 = v46;
    v0 = Src;
  }
  v18 = v15 + 1;
  v46 = v18;
  v19 = v18 - v50 - 1;
  v47 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v19);
  v20 = &v0[v50];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_FLY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CROW_FLY_FAIL\t\tTASK_STOP_MOVING\t\t"
           "\t\t0\t\tTASK_CROW_TAKEOFF\t\t\t\t0\t\tTASK_CROW_FLY\t\t\t\t\t0\t\tInterrupts\n";
  v48 = "SCHED_CROW_FLY_FAIL";
  v49 = 95;
  sub_10229160(v35, v37, &v48);
  v50 = v18;
  if ( v18 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v18 - v44 + 1);
    v18 = v46;
    v0 = Src;
  }
  v21 = v18 + 1;
  v46 = v21;
  v22 = v21 - v50 - 1;
  v47 = v0;
  if ( v22 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v22);
  v23 = &v0[v50];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_FLY_FAIL\tTasks\t\tTASK_CROW_FALL_TO_GROUND\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CR"
           "OW_IDLE_WALK\t\tInterrupts\n";
  v48 = "SCHED_CROW_BARNACLED";
  v49 = 96;
  sub_10229160(v35, v37, &v48);
  v50 = v21;
  if ( v21 + 1 > v44 )
  {
    sub_102ABFC0(&Src, v21 - v44 + 1);
    v21 = v46;
    v0 = Src;
  }
  v24 = v21 + 1;
  v46 = v24;
  v25 = v24 - v50 - 1;
  v47 = v0;
  if ( v25 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v25);
  v26 = &v0[v50];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CROW_BARNACLED\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\t\tACTIVITY:ACT"
           "_HOP\t\tTASK_CROW_WAIT_FOR_BARNACLE_KILL\t\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106E7BC0, (int)"CNPC_Crow", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E7C0C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v35, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v39, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v30, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v50 = 0;
  if ( v37 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E7BC4,
                 *(_DWORD *)(v35[0] + 8 * v50),
                 *(_DWORD *)(v35[0] + 8 * v50 + 4),
                 "schedule",
                 off_10672230);
      if ( !result )
        break;
      if ( ++v50 >= v37 )
        goto LABEL_56;
    }
LABEL_62:
    if ( v32 >= 0 )
    {
      result = v31[0];
      if ( v31[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
    }
    if ( v40 >= 0 )
    {
      result = v39[0];
      if ( v39[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v39[0]);
    }
    if ( v36 >= 0 )
    {
      result = v35[0];
      if ( v35[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
    }
    if ( v45 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    return result;
  }
LABEL_56:
  v50 = 0;
  if ( v41 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106E7BDC,
                 *(_DWORD *)(v39[0] + 8 * v50),
                 *(_DWORD *)(v39[0] + 8 * v50 + 4),
                 "task",
                 off_10672230);
      if ( !result )
        goto LABEL_62;
    }
    while ( ++v50 < v41 );
  }
  v50 = 0;
  if ( v33 <= 0 )
  {
LABEL_76:
    v50 = 0;
    if ( v24 > 0 )
    {
      v28 = byte_10672228;
      do
      {
        if ( !v28 )
          break;
        v28 = sub_100A7A40(&dword_10694898, "CNPC_Crow", v0[v50], (int)&dword_106E7BC0);
        byte_10672228 = v28;
        ++v50;
      }
      while ( v50 < v24 );
    }
    sub_102375F0(v30);
    sub_102375F0(v31);
    sub_102375F0(v39);
    sub_102375F0(v35);
    sub_102375F0(v29);
    return sub_102375F0((int *)&Src);
  }
  while ( 1 )
  {
    v49 = *(_DWORD *)(v31[0] + 8 * v50);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v49);
LABEL_75:
    if ( ++v50 >= v33 )
      goto LABEL_76;
  }
  if ( sub_1007DB90(
         dword_106E7BF4,
         *(_DWORD *)(v31[0] + 8 * v50),
         *(_DWORD *)(v31[0] + 8 * v50 + 4),
         "condition",
         off_10672230) )
  {
    goto LABEL_75;
  }
  if ( v32 >= 0 && v31[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  if ( v40 >= 0 && v39[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v39[0]);
  if ( v36 >= 0 && v35[0] )
  {
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
    return sub_102375F0((int *)&Src);
  }
  return sub_102375F0((int *)&Src);
}
