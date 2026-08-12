char sub_1032B5E0()
{
  _DWORD *v0; // ebx
  const char *v1; // esi
  int v2; // eax
  const char *v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  const char *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  const char *v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  const char *v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  const char *v18; // esi
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edi
  char result; // al
  int v26; // edi
  int v27; // edi
  int v28; // edi
  char v29; // al
  int v30[5]; // [esp+Ch] [ebp-80h] BYREF
  int v31[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v32[2]; // [esp+34h] [ebp-58h] BYREF
  int v33; // [esp+3Ch] [ebp-50h]
  int v34; // [esp+40h] [ebp-4Ch]
  int v35; // [esp+44h] [ebp-48h]
  int v36[2]; // [esp+48h] [ebp-44h] BYREF
  int v37; // [esp+50h] [ebp-3Ch]
  int v38; // [esp+54h] [ebp-38h]
  int v39; // [esp+58h] [ebp-34h]
  int v40[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v41; // [esp+64h] [ebp-28h]
  int v42; // [esp+68h] [ebp-24h]
  int v43; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v45; // [esp+74h] [ebp-18h]
  int v46; // [esp+78h] [ebp-14h]
  const char *v47; // [esp+7Ch] [ebp-10h]
  void *v48; // [esp+80h] [ebp-Ch]
  const char *v49; // [esp+84h] [ebp-8h] BYREF
  int v50; // [esp+88h] [ebp-4h]

  Src = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  memset(v30, 0, sizeof(v30));
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v31, 0, sizeof(v31));
  v49 = "TASK_SCANNER_SET_FLY_PATROL";
  v50 = 150;
  sub_10229160(v32, 0, &v49);
  v49 = "TASK_SCANNER_SET_FLY_CHASE";
  v50 = 151;
  sub_10229160(v32, v34, &v49);
  v49 = "TASK_SCANNER_SET_FLY_ATTACK";
  v50 = 152;
  sub_10229160(v32, v34, &v49);
  v49 = "TASK_SCANNER_SET_FLY_DIVE";
  v50 = 153;
  sub_10229160(v32, v34, &v49);
  v49 = "COND_SCANNER_FLY_CLEAR";
  v50 = 73;
  sub_10229160(v36, 0, &v49);
  v49 = "COND_SCANNER_FLY_BLOCKED";
  v50 = 74;
  sub_10229160(v36, v38, &v49);
  v49 = "COND_SCANNER_RELEASED_FROM_PHYSCANNON";
  v50 = 76;
  sub_10229160(v36, v38, &v49);
  v49 = "COND_SCANNER_GRABBED_BY_PHYSCANNON";
  v50 = 75;
  sub_10229160(v36, v38, &v49);
  v49 = "SCHED_SCANNER_PATROL";
  v50 = 88;
  sub_10229160(v40, 0, &v49);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v47 + 1;
  v2 = (int)v47++;
  v48 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_SCANNER_PATROL\tTasks\t\tTASK_SCANNER_SET_FLY_PATROL\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t32\t"
          "\tTASK_SET_ROUTE_SEARCH_TIME\t\t\t5\t\tTASK_GET_PATH_TO_RANDOM_NODE\t\t2000\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tT"
          "ASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tInterrupts\t\tCOND_GIVE_WAY\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_SEE_FE"
          "AR\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_PLAYER\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCO"
          "ND_PROVOKED\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_ATTACK";
  v50 = 89;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v1;
  if ( (int)(v1 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v45 + 1]);
    v1 = v47;
    v0 = Src;
  }
  v3 = v1 + 1;
  v47 = v3;
  v4 = (int)&v3[-v50 - 1];
  v48 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v4);
  v5 = &v0[v50];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_SCANNER_ATTACK\tTasks\t\tTASK_SCANNER_SET_FLY_ATTACK\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:A"
          "CT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t\t0.1\tInterrupts\t\tCOND_TOO_FAR_TO_ATTACK\t\tCOND_SCANNER_FLY_BLOCKED\t\tCON"
          "D_NEW_ENEMY\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_ATTACK_HOVER";
  v50 = 90;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v3;
  if ( (int)(v3 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v3[-v45 + 1]);
    v3 = v47;
    v0 = Src;
  }
  v6 = v3 + 1;
  v47 = v6;
  v7 = (int)&v6[-v50 - 1];
  v48 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v7);
  v8 = &v0[v50];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_SCANNER_ATTACK_HOVER\tTasks\t\tTASK_SCANNER_SET_FLY_ATTACK\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTI"
          "VITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t\t0.1\tInterrupts\t\tCOND_TOO_FAR_TO_ATTACK\t\tCOND_SCANNER_FLY_BLOCKED\t"
          "\tCOND_NEW_ENEMY\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_ATTACK_DIVEBOMB";
  v50 = 91;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v6;
  if ( (int)(v6 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v6[-v45 + 1]);
    v6 = v47;
    v0 = Src;
  }
  v9 = v6 + 1;
  v47 = v9;
  v10 = (int)&v9[-v50 - 1];
  v48 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v10);
  v11 = &v0[v50];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCANNER_ATTACK_DIVEBOMB\tTasks\t\tTASK_SCANNER_SET_FLY_DIVE\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tAC"
           "TIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t\t10\tInterrupts\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_CHASE_ENEMY";
  v50 = 92;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v9;
  if ( (int)(v9 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v9[-v45 + 1]);
    v9 = v47;
    v0 = Src;
  }
  v12 = v9 + 1;
  v47 = v12;
  v13 = (int)&v12[-v50 - 1];
  v48 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v13);
  v14 = &v0[v50];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCANNER_CHASE_ENEMY\tTasks\t\t TASK_SCANNER_SET_FLY_CHASE\t\t\t0\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\t"
           "SCHEDULE:SCHED_SCANNER_PATROL\t\t TASK_SET_TOLERANCE_DISTANCE\t\t120\t\t TASK_GET_PATH_TO_ENEMY\t\t\t\t0\t\t "
           "TASK_RUN_PATH\t\t\t\t\t\t0\t\t TASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tInterrupts\t\tCOND_SCANNER_FLY_CLEAR\t\tCOND_"
           "NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_LOST_ENEMY\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_CHASE_TARGET";
  v50 = 93;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v12;
  if ( (int)(v12 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v12[-v45 + 1]);
    v12 = v47;
    v0 = Src;
  }
  v15 = v12 + 1;
  v47 = v15;
  v16 = (int)&v15[-v50 - 1];
  v48 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v16);
  v17 = &v0[v50];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCANNER_CHASE_TARGET\tTasks\t\t TASK_SCANNER_SET_FLY_CHASE\t\t\t0\t\t TASK_SET_TOLERANCE_DISTANCE\t"
           "\t64\t\t TASK_GET_PATH_TO_TARGET\t\t\t0\t\t TASK_RUN_PATH\t\t\t\t\t\t0\t\t TASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tI"
           "nterrupts\t\tCOND_SCANNER_FLY_CLEAR\t\tCOND_NEW_ENEMY\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_FOLLOW_HOVER";
  v50 = 94;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v15;
  if ( (int)(v15 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v15[-v45 + 1]);
    v15 = v47;
    v0 = Src;
  }
  v18 = v15 + 1;
  v47 = v18;
  v19 = (int)&v18[-v50 - 1];
  v48 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v19);
  v20 = &v0[v50];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCANNER_FOLLOW_HOVER\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t"
           "\t0.1\tInterrupts\t\tCOND_SCANNER_FLY_BLOCKED\t\tCOND_SCANNER_GRABBED_BY_PHYSCANNON\n";
  v49 = "SCHED_SCANNER_HELD_BY_PHYSCANNON";
  v50 = 95;
  sub_10229160(v40, v42, &v49);
  v50 = (int)v18;
  if ( (int)(v18 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v18[-v45 + 1]);
    v18 = v47;
    v0 = Src;
  }
  v21 = (int)(v18 + 1);
  v47 = (const char *)v21;
  v22 = v21 - v50 - 1;
  v48 = v0;
  if ( v22 > 0 )
    memcpy(&v0[v50 + 1], &v0[v50], 4 * v22);
  v23 = &v0[v50];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCANNER_HELD_BY_PHYSCANNON\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t"
           "\t\t\t\t5.0\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_SCANNER_RELEASED_FROM_PHYSCANNON\n";
  sub_1004BBC0(&dword_106E5650, (int)"CNPC_BaseScanner", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E569C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v40, sub_10333A80);
  sub_1004C500((int)v32, sub_10333A80);
  sub_1004C500((int)v36, sub_10333A80);
  sub_1004C500((int)v31, sub_10333A80);
  v24 = 0;
  if ( v42 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E5654,
                 *(_DWORD *)(v40[0] + 8 * v24),
                 *(_DWORD *)(v40[0] + 8 * v24 + 4),
                 "schedule",
                 off_1066DC74);
      if ( !result )
        break;
      if ( ++v24 >= v42 )
        goto LABEL_50;
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
    }
    if ( v33 >= 0 )
    {
      result = v32[0];
      if ( v32[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
    }
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v46 < 0 || !v0 )
      return result;
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
LABEL_50:
  v26 = 0;
  if ( v34 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E566C,
                 *(_DWORD *)(v32[0] + 8 * v26),
                 *(_DWORD *)(v32[0] + 8 * v26 + 4),
                 "task",
                 off_1066DC74);
      if ( !result )
        break;
      if ( ++v26 >= v34 )
        goto LABEL_53;
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
    }
    if ( v33 >= 0 )
    {
      result = v32[0];
      if ( v32[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
    }
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v46 < 0 || !v0 )
      return result;
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
LABEL_53:
  v27 = 0;
  if ( v38 <= 0 )
  {
LABEL_82:
    v28 = 0;
    if ( v21 > 0 )
    {
      v29 = byte_1066DC6C;
      do
      {
        if ( !v29 )
          break;
        v29 = sub_100A7A40(&dword_10694898, "CNPC_BaseScanner", v0[v28++], (int)&dword_106E5650);
        byte_1066DC6C = v29;
      }
      while ( v28 < v21 );
    }
    sub_102375F0(v31);
    sub_102375F0(v36);
    sub_102375F0(v32);
    sub_102375F0(v40);
    sub_102375F0(v30);
    return sub_102375F0((int *)&Src);
  }
  while ( 1 )
  {
    v50 = *(_DWORD *)(v36[0] + 8 * v27);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v50);
LABEL_81:
    if ( ++v27 >= v38 )
      goto LABEL_82;
  }
  result = sub_1007DB90(
             dword_106E5684,
             *(_DWORD *)(v36[0] + 8 * v27),
             *(_DWORD *)(v36[0] + 8 * v27 + 4),
             "condition",
             off_1066DC74);
  if ( result )
    goto LABEL_81;
  if ( v37 >= 0 )
  {
    result = v36[0];
    if ( v36[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
  }
  if ( v33 >= 0 )
  {
    result = v32[0];
    if ( v32[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
  }
  if ( v41 >= 0 )
  {
    result = v40[0];
    if ( v40[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
  }
  if ( v46 >= 0 && v0 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  return result;
}
