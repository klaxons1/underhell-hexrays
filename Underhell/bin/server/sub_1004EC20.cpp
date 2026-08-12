int sub_1004EC20()
{
  char *v0; // edi
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  char *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  char *v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  char *v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // eax
  char *v24; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  char *v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  char *v32; // eax
  int v33; // ecx
  int v34; // esi
  int v35; // eax
  char *v36; // eax
  int v37; // ecx
  int v38; // ecx
  int result; // eax
  char v40; // al
  _DWORD v41[5]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v42[5]; // [esp+20h] [ebp-58h] BYREF
  _DWORD v43[2]; // [esp+34h] [ebp-44h] BYREF
  int v44; // [esp+3Ch] [ebp-3Ch]
  int v45; // [esp+40h] [ebp-38h]
  int v46; // [esp+44h] [ebp-34h]
  _DWORD v47[2]; // [esp+48h] [ebp-30h] BYREF
  int v48; // [esp+50h] [ebp-28h]
  int v49; // [esp+54h] [ebp-24h]
  int v50; // [esp+58h] [ebp-20h]
  void *Src; // [esp+5Ch] [ebp-1Ch] BYREF
  int v52; // [esp+60h] [ebp-18h]
  int v53; // [esp+64h] [ebp-14h]
  int v54; // [esp+68h] [ebp-10h]
  void *v55; // [esp+6Ch] [ebp-Ch]
  const char *v56; // [esp+70h] [ebp-8h] BYREF
  int v57; // [esp+74h] [ebp-4h]

  Src = 0;
  v52 = 0;
  v53 = 0;
  memset(v41, 0, sizeof(v41));
  v43[0] = 0;
  v43[1] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  memset(v42, 0, sizeof(v42));
  v56 = "TASK_GET_PATH_TO_RALLY_POINT";
  v57 = 100000;
  sub_10229160(0, &v56);
  v56 = "TASK_FACE_RALLY_POINT";
  v57 = 100001;
  sub_10229160(0, &v56);
  v56 = "TASK_GET_PATH_TO_ASSAULT_POINT";
  v57 = 100002;
  sub_10229160(0, &v56);
  v56 = "TASK_FACE_ASSAULT_POINT";
  v57 = 100003;
  sub_10229160(0, &v56);
  v56 = "TASK_AWAIT_CUE";
  v57 = 100006;
  sub_10229160(0, &v56);
  v56 = "TASK_AWAIT_ASSAULT_TIMEOUT";
  v57 = 100007;
  sub_10229160(0, &v56);
  v56 = "TASK_ANNOUNCE_CLEAR";
  v57 = 100008;
  sub_10229160(0, &v56);
  v56 = "TASK_WAIT_ASSAULT_DELAY";
  v57 = 100009;
  sub_10229160(0, &v56);
  v56 = "TASK_HIT_ASSAULT_POINT";
  v57 = 100004;
  sub_10229160(0, &v56);
  v56 = "TASK_HIT_RALLY_POINT";
  v57 = 100005;
  sub_10229160(0, &v56);
  v56 = "TASK_ASSAULT_DEFER_SCHEDULE_SELECTION";
  v57 = 100011;
  sub_10229160(0, &v56);
  v56 = "SCHED_MOVE_TO_RALLY_POINT";
  v57 = 100000;
  sub_10229160(0, &v56);
  sub_102ABFC0(1);
  v54 = 1;
  v55 = 0;
  v56 = "SCHED_ASSAULT_FAILED_TO_MOVE";
  v57 = 100001;
  sub_10229160(0, &v56);
  v57 = 1;
  sub_102ABFC0(1 - v52 + 1);
  v0 = (char *)Src;
  v1 = v57;
  v2 = v54 + 1;
  v3 = v54 - v57;
  ++v54;
  v55 = Src;
  if ( v3 > 0 )
  {
    memcpy((char *)Src + 4 * v57 + 4, (char *)Src + 4 * v57, 4 * v3);
    v1 = v57;
  }
  v4 = (char *)Src + 4 * v1;
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ASSAULT_FAILED_TO_MOVE\tTasks\t\tTASK_ASSAULT_DEFER_SCHEDULE_SELECTION\t1\t\tInterrupts\n";
  v56 = "SCHED_FAIL_MOVE_TO_RALLY_POINT";
  v57 = 100002;
  sub_10229160(v45, &v56);
  v5 = v2;
  v57 = v2;
  if ( v2 + 1 > v52 )
  {
    sub_102ABFC0(v2 - v52 + 1);
    v2 = v54;
    v0 = (char *)Src;
    v5 = v57;
  }
  v6 = v2 + 1;
  v7 = v6 - v5 - 1;
  v54 = v6;
  v55 = v0;
  if ( v7 > 0 )
  {
    memcpy(&v0[4 * v5 + 4], &v0[4 * v5], 4 * v7);
    v5 = v57;
  }
  v8 = &v0[4 * v5];
  if ( v8 )
    *(_DWORD *)v8 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_FAIL_MOVE_TO_RALLY_POINT\tTasks\t\tTASK_WAIT\t\t\t1\t\tInterrupts\t\tCOND_HEAR_DANGER\t\tC"
                    "OND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\n";
  v56 = "SCHED_HOLD_RALLY_POINT";
  v57 = 100005;
  sub_10229160(v45, &v56);
  v9 = v6;
  v57 = v6;
  if ( v6 + 1 > v52 )
  {
    sub_102ABFC0(v6 - v52 + 1);
    v6 = v54;
    v0 = (char *)Src;
    v9 = v57;
  }
  v10 = v6 + 1;
  v11 = v10 - v9 - 1;
  v54 = v10;
  v55 = v0;
  if ( v11 > 0 )
  {
    memcpy(&v0[4 * v9 + 4], &v0[4 * v9], 4 * v11);
    v9 = v57;
  }
  v12 = &v0[4 * v9];
  if ( v12 )
    *(_DWORD *)v12 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_HOLD_RALLY_POINT\tTasks\t\tTASK_FACE_RALLY_POINT\t\t\t\t\t0\t\tTASK_AWAIT_CUE\t\t\t\t\t\t"
                     "\t0\t\tTASK_WAIT_ASSAULT_DELAY\t\t\t\t\t0\t\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE"
                     "_ATTACK1\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PLAYER_PUSHING\t\tCOND_HEAR_DANGER\t\tCO"
                     "ND_HEAR_BULLET_IMPACT\t\tCOND_NO_PRIMARY_AMMO\n";
  v56 = "SCHED_HOLD_ASSAULT_POINT";
  v57 = 100006;
  sub_10229160(v45, &v56);
  v13 = v10;
  v57 = v10;
  if ( v10 + 1 > v52 )
  {
    sub_102ABFC0(v10 - v52 + 1);
    v10 = v54;
    v0 = (char *)Src;
    v13 = v57;
  }
  v14 = v10 + 1;
  v15 = v14 - v13 - 1;
  v54 = v14;
  v55 = v0;
  if ( v15 > 0 )
  {
    memcpy(&v0[4 * v13 + 4], &v0[4 * v13], 4 * v15);
    v13 = v57;
  }
  v16 = &v0[4 * v13];
  if ( v16 )
    *(_DWORD *)v16 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_HOLD_ASSAULT_POINT\tTasks\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t"
                     "\t3\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_AT"
                     "TACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_LOST_"
                     "ENEMY\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_NO_PRIMARY_AMMO\n";
  v56 = "SCHED_MOVE_TO_ASSAULT_POINT";
  v57 = 100003;
  sub_10229160(v45, &v56);
  v17 = v14;
  v57 = v14;
  if ( v14 + 1 > v52 )
  {
    sub_102ABFC0(v14 - v52 + 1);
    v14 = v54;
    v0 = (char *)Src;
    v17 = v57;
  }
  v18 = v14 + 1;
  v19 = v18 - v17 - 1;
  v54 = v18;
  v55 = v0;
  if ( v19 > 0 )
  {
    memcpy(&v0[4 * v17 + 4], &v0[4 * v17], 4 * v19);
    v17 = v57;
  }
  v20 = &v0[4 * v17];
  if ( v20 )
    *(_DWORD *)v20 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_MOVE_TO_ASSAULT_POINT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ASSAULT_FA"
                     "ILED_TO_MOVE\t\tTASK_GATHER_CONDITIONS\t\t\t\t\t0\t\tTASK_GET_PATH_TO_ASSAULT_POINT\t\t\t0\t\tTASK_"
                     "RUN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK_FACE_ASSAULT_POINT\t\t\t\t\t0\t"
                     "\tTASK_HIT_ASSAULT_POINT\t\t\t\t\t0\t\tInterrupts\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\n";
  v56 = "SCHED_AT_ASSAULT_POINT";
  v57 = 100004;
  sub_10229160(v45, &v56);
  v21 = v18;
  v57 = v18;
  if ( v18 + 1 > v52 )
  {
    sub_102ABFC0(v18 - v52 + 1);
    v18 = v54;
    v0 = (char *)Src;
    v21 = v57;
  }
  v22 = v18 + 1;
  v23 = v22 - v21 - 1;
  v54 = v22;
  v55 = v0;
  if ( v23 > 0 )
  {
    memcpy(&v0[4 * v21 + 4], &v0[4 * v21], 4 * v23);
    v21 = v57;
  }
  v24 = &v0[4 * v21];
  if ( v24 )
    *(_DWORD *)v24 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_AT_ASSAULT_POINT\tTasks\t\tTASK_FACE_ASSAULT_POINT\t\t\t\t\t0\t\tTASK_HIT_ASSAULT_POINT\t"
                     "\t\t\t\t0\t\tInterrupts\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\n";
  v56 = "SCHED_WAIT_AND_CLEAR";
  v57 = 100007;
  sub_10229160(v45, &v56);
  v25 = v22;
  v57 = v22;
  if ( v22 + 1 > v52 )
  {
    sub_102ABFC0(v22 - v52 + 1);
    v22 = v54;
    v0 = (char *)Src;
    v25 = v57;
  }
  v26 = v22 + 1;
  v27 = v26 - v25 - 1;
  v54 = v26;
  v55 = v0;
  if ( v27 > 0 )
  {
    memcpy(&v0[4 * v25 + 4], &v0[4 * v25], 4 * v27);
    v25 = v57;
  }
  v28 = &v0[4 * v25];
  if ( v28 )
    *(_DWORD *)v28 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_WAIT_AND_CLEAR\tTasks\t\tTASK_FACE_ASSAULT_POINT\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:"
                     "ACT_IDLE\t\tTASK_AWAIT_ASSAULT_TIMEOUT\t0\t\tTASK_ANNOUNCE_CLEAR\t\t\t0\t\tInterrupts\t\tCOND_NEW_E"
                     "NEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t"
                     "\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_BULLET_IMPACT\t"
                     "\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_NOT_FACING_ATTACK\t\tCOND_PLAYER_PUSHING\n";
  v56 = "SCHED_CLEAR_ASSAULT_POINT";
  v57 = 100009;
  sub_10229160(v45, &v56);
  v29 = v26;
  v57 = v26;
  if ( v26 + 1 > v52 )
  {
    sub_102ABFC0(v26 - v52 + 1);
    v26 = v54;
    v0 = (char *)Src;
    v29 = v57;
  }
  v30 = v26 + 1;
  v31 = v30 - v29 - 1;
  v54 = v30;
  v55 = v0;
  if ( v31 > 0 )
  {
    memcpy(&v0[4 * v29 + 4], &v0[4 * v29], 4 * v31);
    v29 = v57;
  }
  v32 = &v0[4 * v29];
  if ( v32 )
    *(_DWORD *)v32 = "\n\tSchedule\n\t\tSCHED_CLEAR_ASSAULT_POINT\tTasks\t\tTASK_ANNOUNCE_CLEAR\t\t\t0\t\tInterrupts\n";
  v56 = "SCHED_ASSAULT_MOVE_AWAY";
  v57 = 100008;
  sub_10229160(v45, &v56);
  v33 = v30;
  v57 = v30;
  if ( v30 + 1 > v52 )
  {
    sub_102ABFC0(v30 - v52 + 1);
    v30 = v54;
    v0 = (char *)Src;
    v33 = v57;
  }
  v34 = v30 + 1;
  v35 = v34 - v33 - 1;
  v54 = v34;
  v55 = v0;
  if ( v35 > 0 )
  {
    memcpy(&v0[4 * v33 + 4], &v0[4 * v33], 4 * v35);
    v33 = v57;
  }
  v36 = &v0[4 * v33];
  if ( v36 )
    *(_DWORD *)v36 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_ASSAULT_MOVE_AWAY\tTasks\t\tTASK_MOVE_AWAY_PATH\t\t\t\t\t\t120\t\tTASK_RUN_PATH\t\t\t\t\t"
                     "\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tInterrupts\n";
  sub_1004BBC0(&dword_10691F18, (int)"CAI_AssaultBehavior", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v43, sub_10333A80);
  sub_1004C500((int)v47, sub_10333A80);
  sub_1004C500((int)v42, sub_10333A80);
  v37 = 0;
  v57 = 0;
  if ( v45 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(*(_DWORD *)(v43[0] + 8 * v37), *(_DWORD *)(v43[0] + 8 * v37 + 4), "schedule", off_10601DD8);
      if ( !(_BYTE)result )
        break;
      if ( ++v57 >= v45 )
        goto LABEL_56;
      v37 = v57;
    }
  }
  else
  {
LABEL_56:
    v38 = 0;
    v57 = 0;
    if ( v49 <= 0 )
    {
LABEL_74:
      v57 = 0;
      if ( v34 > 0 )
      {
        v40 = byte_10601DD0;
        do
        {
          if ( !v40 )
            break;
          v40 = sub_100A7A40("CAI_AssaultBehavior", *(_DWORD *)&v0[4 * v57], &dword_10691F18);
          byte_10601DD0 = v40;
          ++v57;
        }
        while ( v57 < v34 );
      }
      if ( v48 >= 0 )
      {
        if ( v47[0] )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
      }
      sub_102375F0(v43);
      sub_102375F0(v41);
      return sub_102375F0(&Src);
    }
    while ( 1 )
    {
      result = sub_1007DB90(*(_DWORD *)(v47[0] + 8 * v38), *(_DWORD *)(v47[0] + 8 * v38 + 4), "task", off_10601DD8);
      if ( !(_BYTE)result )
        break;
      if ( ++v57 >= v49 )
        goto LABEL_74;
      v38 = v57;
    }
  }
  if ( v48 >= 0 )
  {
    result = v47[0];
    if ( v47[0] )
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
  }
  if ( v44 >= 0 )
  {
    result = v43[0];
    if ( v43[0] )
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v43[0]);
  }
  if ( v53 >= 0 && v0 )
    return (*(int (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  return result;
}
