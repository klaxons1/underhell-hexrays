char sub_103A0980()
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
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // ecx
  int v33; // esi
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // esi
  int v38; // eax
  _DWORD *v39; // eax
  char result; // al
  int v41; // ebx
  int v42; // ebx
  char v43; // al
  int v44[5]; // [esp+Ch] [ebp-80h] BYREF
  int v45[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v46[5]; // [esp+34h] [ebp-58h] BYREF
  int v47[2]; // [esp+48h] [ebp-44h] BYREF
  int v48; // [esp+50h] [ebp-3Ch]
  int v49; // [esp+54h] [ebp-38h]
  int v50; // [esp+58h] [ebp-34h]
  int v51[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v52; // [esp+64h] [ebp-28h]
  int v53; // [esp+68h] [ebp-24h]
  int v54; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v56; // [esp+74h] [ebp-18h]
  int v57; // [esp+78h] [ebp-14h]
  int v58; // [esp+7Ch] [ebp-10h]
  void *v59; // [esp+80h] [ebp-Ch]
  const char *v60; // [esp+84h] [ebp-8h] BYREF
  int v61; // [esp+88h] [ebp-4h]

  v0 = 0;
  Src = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  memset(v44, 0, sizeof(v44));
  v51[0] = 0;
  v51[1] = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, sizeof(v46));
  v60 = "TASK_ROLLERMINE_CHARGE_ENEMY";
  v61 = 150;
  sub_10229160(v47, 0, &v60);
  v60 = "TASK_ROLLERMINE_BURIED_WAIT";
  v61 = 151;
  sub_10229160(v47, v49, &v60);
  v60 = "TASK_ROLLERMINE_UNBURROW";
  v61 = 152;
  sub_10229160(v47, v49, &v60);
  v60 = "TASK_ROLLERMINE_GET_PATH_TO_FLEE";
  v61 = 153;
  sub_10229160(v47, v49, &v60);
  v60 = "TASK_ROLLERMINE_NUDGE_TOWARDS_NODES";
  v61 = 154;
  sub_10229160(v47, v49, &v60);
  v60 = "TASK_ROLLERMINE_RETURN_TO_PLAYER";
  v61 = 155;
  sub_10229160(v47, v49, &v60);
  v60 = "TASK_ROLLERMINE_POWERDOWN";
  v61 = 156;
  sub_10229160(v47, v49, &v60);
  v60 = "SCHED_ROLLERMINE_BURIED_WAIT";
  v61 = 90;
  sub_10229160(v51, 0, &v60);
  sub_102ABFC0(&Src, 1);
  v1 = Src;
  v2 = v58 + 1;
  v3 = v58++;
  v59 = Src;
  if ( v3 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v3);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ROLLERMINE_BURIED_WAIT\tTasks\t\tTASK_ROLLERMINE_BURIED_WAIT\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\t"
          "COND_LIGHT_DAMAGE\n";
  v60 = "SCHED_ROLLERMINE_BURIED_UNBURROW";
  v61 = 91;
  sub_10229160(v51, v53, &v60);
  v4 = v2;
  v61 = v2;
  if ( v2 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v2 - v56 + 1);
    v2 = v58;
    v1 = Src;
    v4 = v61;
  }
  v5 = v2 + 1;
  v6 = v5 - v4 - 1;
  v58 = v5;
  v59 = v1;
  if ( v6 > 0 )
  {
    memcpy(&v1[v4 + 1], &v1[v4], 4 * v6);
    v4 = v61;
  }
  v7 = &v1[v4];
  if ( v7 )
    *v7 = "\n\tSchedule\n\t\tSCHED_ROLLERMINE_BURIED_UNBURROW\tTasks\t\tTASK_ROLLERMINE_UNBURROW\t\t0\t\tInterrupts\n";
  v60 = "SCHED_ROLLERMINE_RANGE_ATTACK1";
  v61 = 88;
  sub_10229160(v51, v53, &v60);
  v8 = v5;
  v61 = v5;
  if ( v5 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v5 - v56 + 1);
    v5 = v58;
    v1 = Src;
    v8 = v61;
  }
  v9 = v5 + 1;
  v10 = v9 - v8 - 1;
  v58 = v9;
  v59 = v1;
  if ( v10 > 0 )
  {
    memcpy(&v1[v8 + 1], &v1[v8], 4 * v10);
    v8 = v61;
  }
  v11 = &v1[v8];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_RANGE_ATTACK1\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t\tTASK_R"
           "OLLERMINE_CHARGE_ENEMY\t0\t\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_OCCLUDED\t\tCOND_ENEMY_TOO_FAR\n";
  v60 = "SCHED_ROLLERMINE_CHASE_ENEMY";
  v61 = 89;
  sub_10229160(v51, v53, &v60);
  v12 = v9;
  v61 = v9;
  if ( v9 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v9 - v56 + 1);
    v9 = v58;
    v1 = Src;
    v12 = v61;
  }
  v13 = v9 + 1;
  v14 = v13 - v12 - 1;
  v58 = v13;
  v59 = v1;
  if ( v14 > 0 )
  {
    memcpy(&v1[v12 + 1], &v1[v12], 4 * v14);
    v12 = v61;
  }
  v15 = &v1[v12];
  if ( v15 )
    *v15 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_CHASE_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ROLLERMINE_RANGE_ATTACK"
           "1\t\tTASK_SET_TOLERANCE_DISTANCE\t\t24\t\tTASK_GET_PATH_TO_ENEMY\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_W"
           "AIT_FOR_MOVEMENT\t\t\t0\t\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_ENEMY_TOO_FAR\t\tC"
           "OND_CAN_RANGE_ATTACK1\t\tCOND_TASK_FAILED\t\tCOND_SEE_FEAR\n";
  v60 = "SCHED_ROLLERMINE_FLEE";
  v61 = 92;
  sub_10229160(v51, v53, &v60);
  v16 = v13;
  v61 = v13;
  if ( v13 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v13 - v56 + 1);
    v13 = v58;
    v1 = Src;
    v16 = v61;
  }
  v17 = v13 + 1;
  v18 = v17 - v16 - 1;
  v58 = v17;
  v59 = v1;
  if ( v18 > 0 )
  {
    memcpy(&v1[v16 + 1], &v1[v16], 4 * v18);
    v16 = v61;
  }
  v19 = &v1[v16];
  if ( v19 )
    *v19 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_FLEE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_IDLE_STAND\t\tTASK_ROLLERMIN"
           "E_GET_PATH_TO_FLEE\t300\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tInterrupts\t\tCOND_NE"
           "W_ENEMY\t\tCOND_TASK_FAILED\n";
  v60 = "SCHED_ROLLERMINE_ALERT_STAND";
  v61 = 93;
  sub_10229160(v51, v53, &v60);
  v20 = v17;
  v61 = v17;
  if ( v17 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v17 - v56 + 1);
    v17 = v58;
    v1 = Src;
    v20 = v61;
  }
  v21 = v17 + 1;
  v22 = v21 - v20 - 1;
  v58 = v21;
  v59 = v1;
  if ( v22 > 0 )
  {
    memcpy(&v1[v20 + 1], &v1[v20], 4 * v22);
    v20 = v61;
  }
  v23 = &v1[v20];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_ALERT_STAND\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_REASONABLE\t\t0\t\tTASK_SET_A"
           "CTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t2\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCON"
           "D_SEE_FEAR\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\t\tCOND_SMELL\t\tCOND_HEAR_COMBAT\t\tCO"
           "ND_HEAR_WORLD\t\tCOND_HEAR_PLAYER\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_IDLE_INTERRUPT\n";
  v60 = "SCHED_ROLLERMINE_NUDGE_TOWARDS_NODES";
  v61 = 94;
  sub_10229160(v51, v53, &v60);
  v24 = v21;
  v61 = v21;
  if ( v21 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v21 - v56 + 1);
    v21 = v58;
    v1 = Src;
    v24 = v61;
  }
  v25 = v21 + 1;
  v26 = v25 - v24 - 1;
  v58 = v25;
  v59 = v1;
  if ( v26 > 0 )
  {
    memcpy(&v1[v24 + 1], &v1[v24], 4 * v26);
    v24 = v61;
  }
  v27 = &v1[v24];
  if ( v27 )
    *v27 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_NUDGE_TOWARDS_NODES\tTasks\t\tTASK_ROLLERMINE_NUDGE_TOWARDS_NODES\t\t0\t\tTASK_WAIT\t\t\t"
           "\t\t\t\t\t1.5\tInterrupts\n";
  v60 = "SCHED_ROLLERMINE_PATH_TO_PLAYER";
  v61 = 95;
  sub_10229160(v51, v53, &v60);
  v28 = v25;
  v61 = v25;
  if ( v25 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v25 - v56 + 1);
    v25 = v58;
    v1 = Src;
    v28 = v61;
  }
  v29 = v25 + 1;
  v30 = v29 - v28 - 1;
  v58 = v29;
  v59 = v1;
  if ( v30 > 0 )
  {
    memcpy(&v1[v28 + 1], &v1[v28], 4 * v30);
    v28 = v61;
  }
  v31 = &v1[v28];
  if ( v31 )
    *v31 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_PATH_TO_PLAYER\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ROLLERMINE_ALERT_STA"
           "ND\t\tTASK_SET_TOLERANCE_DISTANCE\t\t200\t\tTASK_GET_PATH_TO_PLAYER\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTAS"
           "K_WAIT_FOR_MOVEMENT\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT_DAM"
           "AGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\t\tCOND_SMELL\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_WORLD\t\tCOND_HEAR_P"
           "LAYER\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_IDLE_INTERRUPT\t\tCOND_SEE_PLAYER\n";
  v60 = "SCHED_ROLLERMINE_ROLL_TO_PLAYER";
  v61 = 96;
  sub_10229160(v51, v53, &v60);
  v32 = v29;
  v61 = v29;
  if ( v29 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v29 - v56 + 1);
    v29 = v58;
    v1 = Src;
    v32 = v61;
  }
  v33 = v29 + 1;
  v34 = v33 - v32 - 1;
  v58 = v33;
  v59 = v1;
  if ( v34 > 0 )
  {
    memcpy(&v1[v32 + 1], &v1[v32], 4 * v34);
    v32 = v61;
  }
  v35 = &v1[v32];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_ROLL_TO_PLAYER\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ROLLERMINE_ALERT_S"
           "TAND\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t200\t\tTASK_ROLLERMINE_RETURN_TO_PLAYER\t0\tInterrupts\t\tCOND_NEW_E"
           "NEMY\t\tCOND_SEE_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\t\tCOND_SM"
           "ELL\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_WORLD\t\tCOND_HEAR_PLAYER\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_BULLET_IMPACT"
           "\t\tCOND_IDLE_INTERRUPT\n";
  v60 = "SCHED_ROLLERMINE_POWERDOWN";
  v61 = 97;
  sub_10229160(v51, v53, &v60);
  v36 = v33;
  v61 = v33;
  if ( v33 + 1 > v56 )
  {
    sub_102ABFC0(&Src, v33 - v56 + 1);
    v33 = v58;
    v1 = Src;
    v36 = v61;
  }
  v37 = v33 + 1;
  v38 = v37 - v36 - 1;
  v58 = v37;
  v59 = v1;
  if ( v38 > 0 )
  {
    memcpy(&v1[v36 + 1], &v1[v36], 4 * v38);
    v36 = v61;
  }
  v39 = &v1[v36];
  if ( v39 )
    *v39 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ROLLERMINE_POWERDOWN\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t"
           "\tTASK_ROLLERMINE_POWERDOWN\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106EA7F0, (int)"CNPC_RollerMine", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106EA83C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v51, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v47, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v45, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v46, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  if ( v53 <= 0 )
  {
LABEL_62:
    v41 = 0;
    if ( v49 <= 0 )
    {
LABEL_65:
      v42 = 0;
      if ( v37 > 0 )
      {
        v43 = byte_1067821C;
        do
        {
          if ( !v43 )
            break;
          v43 = sub_100A7A40(&dword_10694898, "CNPC_RollerMine", v1[v42++], (int)&dword_106EA7F0);
          byte_1067821C = v43;
        }
        while ( v42 < v37 );
      }
      sub_102375F0(v46);
      sub_102375F0(v45);
      sub_102375F0(v47);
      sub_102375F0(v51);
      sub_102375F0(v44);
      return sub_102375F0((int *)&Src);
    }
    else
    {
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106EA80C,
                   *(_DWORD *)(v47[0] + 8 * v41),
                   *(_DWORD *)(v47[0] + 8 * v41 + 4),
                   "task",
                   off_10678224);
        if ( !result )
          break;
        if ( ++v41 >= v49 )
          goto LABEL_65;
      }
      if ( v48 >= 0 )
      {
        result = v47[0];
        if ( v47[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
      }
      if ( v52 >= 0 )
      {
        result = v51[0];
        if ( v51[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v51[0]);
      }
      if ( v57 >= 0 && v1 )
        return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EA7F4,
                 *(_DWORD *)(v51[0] + 8 * v0),
                 *(_DWORD *)(v51[0] + 8 * v0 + 4),
                 "schedule",
                 off_10678224);
      if ( !result )
        break;
      if ( ++v0 >= v53 )
        goto LABEL_62;
    }
    if ( v48 >= 0 )
    {
      result = v47[0];
      if ( v47[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
    }
    if ( v52 >= 0 )
    {
      result = v51[0];
      if ( v51[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v51[0]);
    }
    if ( v57 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  return result;
}
