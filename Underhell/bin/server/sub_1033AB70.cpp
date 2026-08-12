char sub_1033AB70()
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
  char result; // al
  char v25; // al
  int v26[5]; // [esp+Ch] [ebp-84h] BYREF
  int v27[5]; // [esp+20h] [ebp-70h] BYREF
  int v28[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v29; // [esp+3Ch] [ebp-54h]
  int v30; // [esp+40h] [ebp-50h]
  int v31; // [esp+44h] [ebp-4Ch]
  int v32[2]; // [esp+48h] [ebp-48h] BYREF
  int v33; // [esp+50h] [ebp-40h]
  int v34; // [esp+54h] [ebp-3Ch]
  int v35; // [esp+58h] [ebp-38h]
  int v36[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v37; // [esp+64h] [ebp-2Ch]
  int v38; // [esp+68h] [ebp-28h]
  int v39; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v41; // [esp+74h] [ebp-1Ch]
  int v42; // [esp+78h] [ebp-18h]
  int v43; // [esp+7Ch] [ebp-14h]
  void *v44; // [esp+80h] [ebp-10h]
  const char *v45; // [esp+84h] [ebp-Ch] BYREF
  int v46; // [esp+88h] [ebp-8h]
  int i; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  memset(v26, 0, sizeof(v26));
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  memset(v27, 0, sizeof(v27));
  v45 = "TASK_CIT_HEAL";
  v46 = 153;
  sub_10229160(v32, 0, &v45);
  v45 = "TASK_CIT_RPG_AUGER";
  v46 = 154;
  sub_10229160(v32, v34, &v45);
  v45 = "TASK_CIT_PLAY_INSPECT_SEQUENCE";
  v46 = 155;
  sub_10229160(v32, v34, &v45);
  v45 = "TASK_CIT_SIT_ON_TRAIN";
  v46 = 156;
  sub_10229160(v32, v34, &v45);
  v45 = "TASK_CIT_LEAVE_TRAIN";
  v46 = 157;
  sub_10229160(v32, v34, &v45);
  v45 = "TASK_CIT_SPEAK_MOURNING";
  v46 = 158;
  sub_10229160(v32, v34, &v45);
  v45 = "TASK_CIT_HEAL_TOSS";
  v46 = 159;
  sub_10229160(v32, v34, &v45);
  dword_106E5B70 = sub_100032E0((int)"ACT_CIT_HANDSUP");
  sub_10008F60((int)"ACT_CIT_HANDSUP", dword_106E5B70);
  dword_106E5B6C = sub_100032E0((int)"ACT_CIT_BLINDED");
  sub_10008F60((int)"ACT_CIT_BLINDED", dword_106E5B6C);
  dword_106E5B68 = sub_100032E0((int)"ACT_CIT_SHOWARMBAND");
  sub_10008F60((int)"ACT_CIT_SHOWARMBAND", dword_106E5B68);
  dword_106E5B64 = sub_100032E0((int)"ACT_CIT_HEAL");
  sub_10008F60((int)"ACT_CIT_HEAL", dword_106E5B64);
  dword_106E5B60 = sub_100032E0((int)"ACT_CIT_STARTLED");
  sub_10008F60((int)"ACT_CIT_STARTLED", dword_106E5B60);
  v45 = "COND_CIT_PLAYERHEALREQUEST";
  v46 = 79;
  sub_10229160(v28, 0, &v45);
  v45 = "COND_CIT_COMMANDHEAL";
  v46 = 80;
  sub_10229160(v28, v30, &v45);
  v45 = "COND_CIT_START_INSPECTION";
  v46 = 82;
  sub_10229160(v28, v30, &v45);
  dword_106E5B7C = sub_1013BF10((int)"AE_CITIZEN_GET_PACKAGE");
  sub_1006AFD0((int)"AE_CITIZEN_GET_PACKAGE", dword_106E5B7C);
  dword_106E5B78 = sub_1013BF10((int)"AE_CITIZEN_HEAL");
  sub_1006AFD0((int)"AE_CITIZEN_HEAL", dword_106E5B78);
  v45 = "SCHED_CITIZEN_HEAL";
  v46 = 99;
  sub_10229160(v36, 0, &v45);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v43 + 1;
  v2 = v43++;
  v44 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CITIZEN_HEAL\tTasks\t\tTASK_GET_PATH_TO_TARGET\t\t\t\t0\t\tTASK_MOVE_TO_TARGET_RANGE\t\t\t50\t\tTASK"
          "_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t\t0\t\tTASK_CIT_HEAL\t\t\t\t\t\t\t0\t\tInterrupts\n";
  v45 = "SCHED_CITIZEN_HEAL_TOSS";
  v46 = 105;
  sub_10229160(v36, v38, &v45);
  i = v1;
  if ( v1 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v1 - v41 + 1);
    v1 = v43;
    v0 = Src;
  }
  v3 = v1 + 1;
  v43 = v3;
  v4 = v3 - i - 1;
  v44 = v0;
  if ( v4 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v4);
  v5 = &v0[i];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CITIZEN_HEAL_TOSS\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t\t0\t\tTASK_CIT_"
          "HEAL_TOSS\t\t\t\t\t\t\t0\t\tInterrupts\n";
  v45 = "SCHED_CITIZEN_RANGE_ATTACK1_RPG";
  v46 = 100;
  sub_10229160(v36, v38, &v45);
  i = v3;
  if ( v3 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v3 - v41 + 1);
    v3 = v43;
    v0 = Src;
  }
  v6 = v3 + 1;
  v43 = v6;
  v7 = v6 - i - 1;
  v44 = v0;
  if ( v7 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v7);
  v8 = &v0[i];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CITIZEN_RANGE_ATTACK1_RPG\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_ANNO"
          "UNCE_ATTACK\t\t1\t\tTASK_RANGE_ATTACK1\t\t\t0\t\tTASK_CIT_RPG_AUGER\t\t\t1\tInterrupts\n";
  v45 = "SCHED_CITIZEN_STRIDER_RANGE_ATTACK1_RPG";
  v46 = 104;
  sub_10229160(v36, v38, &v45);
  i = v6;
  if ( v6 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v6 - v41 + 1);
    v6 = v43;
    v0 = Src;
  }
  v9 = v6 + 1;
  v43 = v9;
  v10 = v9 - i - 1;
  v44 = v0;
  if ( v10 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v10);
  v11 = &v0[i];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CITIZEN_STRIDER_RANGE_ATTACK1_RPG\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\t"
           "TASK_ANNOUNCE_ATTACK\t\t1\t\tTASK_WAIT\t\t\t\t\t1\t\tTASK_RANGE_ATTACK1\t\t\t0\t\tTASK_CIT_RPG_AUGER\t\t\t1\t"
           "\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_TAKE_COVER_FROM_ENEMY\tInterrupts\n";
  v45 = "SCHED_CITIZEN_PATROL";
  v46 = 101;
  sub_10229160(v36, v38, &v45);
  i = v9;
  if ( v9 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v9 - v41 + 1);
    v9 = v43;
    v0 = Src;
  }
  v12 = v9 + 1;
  v43 = v12;
  v13 = v12 - i - 1;
  v44 = v0;
  if ( v13 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v13);
  v14 = &v0[i];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CITIZEN_PATROL\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t901024\t\tTASK_WALK_PA"
           "TH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t3\t\tTASK"
           "_WAIT_RANDOM\t\t\t\t3\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CITIZEN_PATROL\tInterrupts\t\tCOND_ENEMY_DEA"
           "D\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_NEW_ENEMY\n";
  v45 = "SCHED_CITIZEN_MOURN_PLAYER";
  v46 = 102;
  sub_10229160(v36, v38, &v45);
  i = v12;
  if ( v12 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v12 - v41 + 1);
    v12 = v43;
    v0 = Src;
  }
  v15 = v12 + 1;
  v43 = v15;
  v16 = v15 - i - 1;
  v44 = v0;
  if ( v16 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v16);
  v17 = &v0[i];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CITIZEN_MOURN_PLAYER\tTasks\t\tTASK_GET_PATH_TO_PLAYER\t\t0\t\tTASK_RUN_PATH_WITHIN_DIST\t180\t\tTA"
           "SK_WAIT_FOR_MOVEMENT\t\t0\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_TARGET_PLAYER\t\t\t0\t\tTASK_FACE_TARGET\t\t\t0\t"
           "\tTASK_CIT_SPEAK_MOURNING\t\t0\t\tTASK_SUGGEST_STATE\t\t\tSTATE:IDLE\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND"
           "_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_NEW_ENEMY\n";
  v45 = "SCHED_CITIZEN_PLAY_INSPECT_ACTIVITY";
  v46 = 98;
  sub_10229160(v36, v38, &v45);
  i = v15;
  if ( v15 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v15 - v41 + 1);
    v15 = v43;
    v0 = Src;
  }
  v18 = v15 + 1;
  v43 = v18;
  v19 = v18 - i - 1;
  v44 = v0;
  if ( v19 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v19);
  v20 = &v0[i];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CITIZEN_PLAY_INSPECT_ACTIVITY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_CIT_PLAY_INSPECT_SEQUENCE"
           "\t0\t\tTASK_WAIT\t\t\t\t\t\t2\tInterrupts\t\t\n";
  v45 = "SCHED_CITIZEN_SIT_ON_TRAIN";
  v46 = 103;
  sub_10229160(v36, v38, &v45);
  i = v18;
  if ( v18 + 1 > v41 )
  {
    sub_102ABFC0(&Src, v18 - v41 + 1);
    v18 = v43;
    v0 = Src;
  }
  v21 = v18 + 1;
  v43 = v21;
  v22 = v21 - i - 1;
  v44 = v0;
  if ( v22 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v22);
  v23 = &v0[i];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CITIZEN_SIT_ON_TRAIN\tTasks\t\tTASK_CIT_SIT_ON_TRAIN\t\t0\t\tTASK_WAIT_RANDOM\t\t\t1\t\tTASK_CIT_LE"
           "AVE_TRAIN\t\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106E6440, (int)"CNPC_Citizen", (int)dword_10690E5C, (int)&unk_106EA398);
  sub_1007DAB0(dword_106E648C, (int)dword_1069528C, (int)&unk_106EA3E4);
  sub_1004C500((int)v36, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v32, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v28, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v27, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  i = 0;
  if ( v38 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106E6444,
                 *(_DWORD *)(v36[0] + 8 * i),
                 *(_DWORD *)(v36[0] + 8 * i + 4),
                 "schedule",
                 off_1066E970[0]);
      if ( !result )
        goto LABEL_56;
    }
    while ( ++i < v38 );
  }
  i = 0;
  if ( v34 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E645C,
                 *(_DWORD *)(v32[0] + 8 * i),
                 *(_DWORD *)(v32[0] + 8 * i + 4),
                 "task",
                 off_1066E970[0]);
      if ( !result )
        break;
      if ( ++i >= v34 )
        goto LABEL_53;
    }
LABEL_56:
    if ( v29 >= 0 )
    {
      result = v28[0];
      if ( v28[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
    }
    if ( v33 >= 0 )
    {
      result = v32[0];
      if ( v32[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
    }
    if ( v42 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    return result;
  }
LABEL_53:
  for ( i = 0; i < v30; ++i )
  {
    v46 = *(_DWORD *)(v28[0] + 8 * i);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
    {
      result = sub_1007DB90(
                 dword_106E6474,
                 *(_DWORD *)(v28[0] + 8 * i),
                 *(_DWORD *)(v28[0] + 8 * i + 4),
                 "condition",
                 off_1066E970[0]);
      if ( !result )
        goto LABEL_56;
    }
    else
    {
      DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v46);
    }
  }
  i = 0;
  if ( v21 > 0 )
  {
    v25 = byte_1066E968;
    do
    {
      if ( !v25 )
        break;
      v25 = sub_100A7A40(&dword_10694898, "CNPC_Citizen", v0[i], (int)&dword_106E6440);
      byte_1066E968 = v25;
      ++i;
    }
    while ( i < v21 );
  }
  sub_102375F0(v27);
  sub_102375F0(v28);
  sub_102375F0(v32);
  sub_102375F0(v36);
  sub_102375F0(v26);
  return sub_102375F0((int *)&Src);
}
