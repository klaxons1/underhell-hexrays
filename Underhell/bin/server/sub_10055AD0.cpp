int sub_10055AD0()
{
  char *v0; // edi
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // eax
  char *v6; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // eax
  int v10; // esi
  int v11; // eax
  char *v12; // eax
  int v13; // esi
  int v14; // eax
  char *v15; // eax
  int v16; // esi
  int v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // eax
  char *v21; // eax
  int v22; // esi
  int v23; // eax
  char *v24; // eax
  int v25; // esi
  int v26; // eax
  char *v27; // eax
  int result; // eax
  char v29; // al
  _DWORD v30[5]; // [esp+Ch] [ebp-70h] BYREF
  _DWORD v31[2]; // [esp+20h] [ebp-5Ch] BYREF
  int v32; // [esp+28h] [ebp-54h]
  int v33; // [esp+2Ch] [ebp-50h]
  int v34; // [esp+30h] [ebp-4Ch]
  _DWORD v35[2]; // [esp+34h] [ebp-48h] BYREF
  int v36; // [esp+3Ch] [ebp-40h]
  int v37; // [esp+40h] [ebp-3Ch]
  int v38; // [esp+44h] [ebp-38h]
  _DWORD v39[2]; // [esp+48h] [ebp-34h] BYREF
  int v40; // [esp+50h] [ebp-2Ch]
  int v41; // [esp+54h] [ebp-28h]
  int v42; // [esp+58h] [ebp-24h]
  void *Src; // [esp+5Ch] [ebp-20h] BYREF
  int v44; // [esp+60h] [ebp-1Ch]
  int v45; // [esp+64h] [ebp-18h]
  int v46; // [esp+68h] [ebp-14h]
  void *v47; // [esp+6Ch] [ebp-10h]
  const char *v48; // [esp+70h] [ebp-Ch] BYREF
  int v49; // [esp+74h] [ebp-8h]
  int i; // [esp+78h] [ebp-4h]

  Src = 0;
  v44 = 0;
  v45 = 0;
  memset(v30, 0, sizeof(v30));
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
  v48 = "TASK_CANT_FOLLOW";
  v49 = 100000;
  sub_10229160(0, &v48);
  v48 = "TASK_FACE_FOLLOW_TARGET";
  v49 = 100001;
  sub_10229160(0, &v48);
  v48 = "TASK_MOVE_TO_FOLLOW_POSITION";
  v49 = 100002;
  sub_10229160(0, &v48);
  v48 = "TASK_GET_PATH_TO_FOLLOW_POSITION";
  v49 = 100003;
  sub_10229160(0, &v48);
  v48 = "TASK_SET_FOLLOW_TARGET_MARK";
  v49 = 100004;
  sub_10229160(0, &v48);
  v48 = "TASK_FOLLOWER_FACE_TACTICAL";
  v49 = 100005;
  sub_10229160(0, &v48);
  v48 = "TASK_SET_FOLLOW_DELAY";
  v49 = 100006;
  sub_10229160(0, &v48);
  v48 = "TASK_GET_PATH_TO_FOLLOW_POINT";
  v49 = 100007;
  sub_10229160(0, &v48);
  v48 = "TASK_ARRIVE_AT_FOLLOW_POINT";
  v49 = 100008;
  sub_10229160(0, &v48);
  v48 = "TASK_BEGIN_STAND_AT_WAIT_POINT";
  v49 = 100010;
  sub_10229160(0, &v48);
  v48 = "TASK_SET_FOLLOW_POINT_STAND_SCHEDULE";
  v49 = 100009;
  sub_10229160(0, &v48);
  v48 = "COND_TARGET_MOVED_FROM_MARK";
  v49 = 100000;
  sub_10229160(0, &v48);
  v48 = "COND_FOUND_WAIT_POINT";
  v49 = 100001;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_DELAY_EXPIRED";
  v49 = 100002;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_TARGET_VISIBLE";
  v49 = 100003;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_TARGET_NOT_VISIBLE";
  v49 = 100004;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_WAIT_POINT_INVALID";
  v49 = 100005;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_PLAYER_IS_LIT";
  v49 = 100006;
  sub_10229160(0, &v48);
  v48 = "COND_FOLLOW_PLAYER_IS_NOT_LIT";
  v49 = 100007;
  sub_10229160(0, &v48);
  v48 = "SCHED_FOLLOWER_MOVE_AWAY_END";
  v49 = 100001;
  sub_10229160(0, &v48);
  sub_102ABFC0(1);
  v46 = 1;
  v47 = 0;
  v48 = "SCHED_FOLLOWER_MOVE_AWAY_FAIL";
  v49 = 100000;
  sub_10229160(0, &v48);
  i = 1;
  sub_102ABFC0(1 - v44 + 1);
  v0 = (char *)Src;
  v1 = v46 + 1;
  v46 = v1;
  v2 = v1 - i - 1;
  v47 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4 * i + 4, (char *)Src + 4 * i, 4 * v2);
  v3 = (char *)Src + 4 * i;
  if ( v3 )
    *v3 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_FOLLOWER_MOVE_AWAY_FAIL\tTasks\t\t TASK_STOP_MOVING\t\t\t\t\t\t0\t\t TASK_FACE_FOLLOW_TARGET\t\t\t\t"
          "0\t\t TASK_SET_FOLLOW_DELAY\t\t\t\t\t2\tInterrupts\t\tCOND_PLAYER_PUSHING\n";
  v48 = "SCHED_FOLLOW";
  v49 = 100002;
  sub_10229160(v37, &v48);
  i = v1;
  if ( v1 + 1 > v44 )
  {
    sub_102ABFC0(v1 - v44 + 1);
    v1 = v46;
    v0 = (char *)Src;
  }
  v4 = v1 + 1;
  v46 = v4;
  v5 = v4 - i - 1;
  v47 = v0;
  if ( v5 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v5);
  v6 = &v0[4 * i];
  if ( v6 )
    *(_DWORD *)v6 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_FOLLOW\tTasks\t\tTASK_GET_PATH_TO_FOLLOW_POSITION 0\t\tTASK_MOVE_TO_FOLLOW_POSITION\t0\t\t"
                    "TASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_TARGET_FACE \tInterrupts\t\t"
                    "COND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PROVOKED\t\tCON"
                    "D_PLAYER_PUSHING\t\tCOND_BETTER_WEAPON_AVAILABLE\n";
  v48 = "SCHED_MOVE_TO_FACE_FOLLOW_TARGET";
  v49 = 100004;
  sub_10229160(v37, &v48);
  i = v4;
  if ( v4 + 1 > v44 )
  {
    sub_102ABFC0(v4 - v44 + 1);
    v4 = v46;
    v0 = (char *)Src;
  }
  v7 = v4 + 1;
  v46 = v7;
  v8 = v7 - i - 1;
  v47 = v0;
  if ( v8 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v8);
  v9 = &v0[4 * i];
  if ( v9 )
    *(_DWORD *)v9 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_MOVE_TO_FACE_FOLLOW_TARGET\tTasks\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_FOLLOW\tInt"
                    "errupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PROV"
                    "OKED\t\tCOND_PLAYER_PUSHING\n";
  v48 = "SCHED_FACE_FOLLOW_TARGET";
  v49 = 100005;
  sub_10229160(v37, &v48);
  i = v7;
  if ( v7 + 1 > v44 )
  {
    sub_102ABFC0(v7 - v44 + 1);
    v7 = v46;
    v0 = (char *)Src;
  }
  v10 = v7 + 1;
  v46 = v10;
  v11 = v10 - i - 1;
  v47 = v0;
  if ( v11 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v11);
  v12 = &v0[4 * i];
  if ( v12 )
    *(_DWORD *)v12 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FACE_FOLLOW_TARGET\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FACE_FO"
                     "LLOW_TARGET\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_SET_SCHEDULE\t\t\t\t\t"
                     "SCHEDULE:SCHED_FOLLOWER_IDLE_STAND \tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAV"
                     "Y_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PROVOKED\t\tCOND_PLAYER_PUSHING\t\tCOND_GIVE_WAY\n";
  v48 = "SCHED_FOLLOWER_GO_TO_WAIT_POINT";
  v49 = 100006;
  sub_10229160(v37, &v48);
  i = v10;
  if ( v10 + 1 > v44 )
  {
    sub_102ABFC0(v10 - v44 + 1);
    v10 = v46;
    v0 = (char *)Src;
  }
  v13 = v10 + 1;
  v46 = v13;
  v14 = v13 - i - 1;
  v47 = v0;
  if ( v14 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v14);
  v15 = &v0[4 * i];
  if ( v15 )
    *(_DWORD *)v15 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FOLLOWER_GO_TO_WAIT_POINT\tTasks\t\tTASK_LOCK_HINTNODE\t\t\t0\t\t\t\tTASK_SET_FAIL_SCHEDU"
                     "LE\t\tSCHEDULE:SCHED_FOLLOWER_GO_TO_WAIT_POINT_FAIL\t\tTASK_SET_TOLERANCE_DISTANCE\t4\t\tTASK_GET_P"
                     "ATH_TO_FOLLOW_POINT\t0\t\tTASK_SET_FOLLOW_TARGET_MARK 0\t\tTASK_WALK_PATH\t\t\t\t0\t\tTASK_WAIT_FOR"
                     "_MOVEMENT\t\t0\t\tTASK_ARRIVE_AT_FOLLOW_POINT\t0\t\tTASK_SET_FOLLOW_POINT_STAND_SCHEDULE 0\tInterru"
                     "pts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PROVOKE"
                     "D\t\tCOND_PLAYER_PUSHING\t\tCOND_TARGET_MOVED_FROM_MARK\n";
  v48 = "SCHED_FOLLOWER_GO_TO_WAIT_POINT_FAIL";
  v49 = 100007;
  sub_10229160(v37, &v48);
  i = v13;
  if ( v13 + 1 > v44 )
  {
    sub_102ABFC0(v13 - v44 + 1);
    v13 = v46;
    v0 = (char *)Src;
  }
  v16 = v13 + 1;
  v46 = v16;
  v17 = v16 - i - 1;
  v47 = v0;
  if ( v17 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v17);
  v18 = &v0[4 * i];
  if ( v18 )
    *(_DWORD *)v18 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FOLLOWER_GO_TO_WAIT_POINT_FAIL\tTasks\t\tTASK_CLEAR_HINTNODE\t\t\t.5\t\tTASK_SET_FOLLOW_D"
                     "ELAY\t\t1\tInterrupts\n";
  v48 = "SCHED_FOLLOWER_STAND_AT_WAIT_POINT";
  v49 = 100008;
  sub_10229160(v37, &v48);
  i = v16;
  if ( v16 + 1 > v44 )
  {
    sub_102ABFC0(v16 - v44 + 1);
    v16 = v46;
    v0 = (char *)Src;
  }
  v19 = v16 + 1;
  v46 = v19;
  v20 = v19 - i - 1;
  v47 = v0;
  if ( v20 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v20);
  v21 = &v0[4 * i];
  if ( v21 )
    *(_DWORD *)v21 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FOLLOWER_STAND_AT_WAIT_POINT\tTasks\t\tTASK_BEGIN_STAND_AT_WAIT_POINT 0\t\tTASK_PLAY_HINT"
                     "_ACTIVITY\t\t0\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_FOLLOWER_STAND_AT_WAIT_POINT \tInterrupts\t"
                     "\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PROVOKED\t\t"
                     "COND_PLAYER_PUSHING\t\tCOND_TARGET_MOVED_FROM_MARK\t\tCOND_GIVE_WAY\t\tCOND_FOLLOW_WAIT_POINT_INVALID\n";
  v48 = "SCHED_FOLLOWER_IDLE_STAND";
  v49 = 100003;
  sub_10229160(v37, &v48);
  i = v19;
  if ( v19 + 1 > v44 )
  {
    sub_102ABFC0(v19 - v44 + 1);
    v19 = v46;
    v0 = (char *)Src;
  }
  v22 = v19 + 1;
  v46 = v22;
  v23 = v22 - i - 1;
  v47 = v0;
  if ( v23 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v23);
  v24 = &v0[4 * i];
  if ( v24 )
    *(_DWORD *)v24 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FOLLOWER_IDLE_STAND\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIV"
                     "ITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t2.5\t\tTASK_FACE_FOLLOW_TARGET\t\t\t0\t\tTASK_SET_ACTIVITY\t\t"
                     "\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t3\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tC"
                     "OND_CAN_RANGE_ATTACK1\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_SME"
                     "LL\t\tCOND_PROVOKED\t\tCOND_GIVE_WAY\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_BULLET_IM"
                     "PACT\t\tCOND_PLAYER_PUSHING\t\tCOND_TARGET_MOVED_FROM_MARK\t\tCOND_FOLLOW_DELAY_EXPIRED\t\tCOND_FOU"
                     "ND_WAIT_POINT\t\tCOND_IDLE_INTERRUPT\t\tCOND_BETTER_WEAPON_AVAILABLE\n";
  v48 = "SCHED_FOLLOWER_COMBAT_FACE";
  v49 = 100009;
  sub_10229160(v37, &v48);
  i = v22;
  if ( v22 + 1 > v44 )
  {
    sub_102ABFC0(v22 - v44 + 1);
    v22 = v46;
    v0 = (char *)Src;
  }
  v25 = v22 + 1;
  v46 = v25;
  v26 = v25 - i - 1;
  v47 = v0;
  if ( v26 > 0 )
    memcpy(&v0[4 * i + 4], &v0[4 * i], 4 * v26);
  v27 = &v0[4 * i];
  if ( v27 )
    *(_DWORD *)v27 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_FOLLOWER_COMBAT_FACE\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT"
                     "_IDLE\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_CAN_RANGE_AT"
                     "TACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_NO_PRIM"
                     "ARY_AMMO\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_SMELL\t\tCOND_PROVOKED\t\tCOND_GIVE_WAY\t"
                     "\tCOND_HEAR_DANGER\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_PLAYER_PUSHING\t\tCOND_TA"
                     "RGET_MOVED_FROM_MARK\t\tCOND_FOLLOW_DELAY_EXPIRED\t\tCOND_FOUND_WAIT_POINT\t\tCOND_BETTER_WEAPON_AVAILABLE\n";
  sub_1004BBC0(&dword_10692208, (int)"CAI_FollowBehavior", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v35, sub_10333A80);
  sub_1004C500((int)v39, sub_10333A80);
  sub_1004C500((int)v31, sub_10333A80);
  i = 0;
  if ( v37 > 0 )
  {
    do
    {
      result = sub_1007DB90(*(_DWORD *)(v35[0] + 8 * i), *(_DWORD *)(v35[0] + 8 * i + 4), "schedule", off_10603BB0);
      if ( !(_BYTE)result )
        goto LABEL_64;
    }
    while ( ++i < v37 );
  }
  i = 0;
  if ( v41 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(*(_DWORD *)(v39[0] + 8 * i), *(_DWORD *)(v39[0] + 8 * i + 4), "task", off_10603BB0);
      if ( !(_BYTE)result )
        break;
      if ( ++i >= v41 )
        goto LABEL_61;
    }
LABEL_64:
    if ( v32 >= 0 )
    {
      result = v31[0];
      if ( v31[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
    }
    if ( v40 >= 0 )
    {
      result = v39[0];
      if ( v39[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v39[0]);
    }
    if ( v36 >= 0 )
    {
      result = v35[0];
      if ( v35[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
    }
    if ( v45 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    return result;
  }
LABEL_61:
  for ( i = 0; i < v33; ++i )
  {
    v49 = *(_DWORD *)(v31[0] + 8 * i);
    if ( sub_1016BF80(&unk_10690E6C) - 1000000000 < 256 )
    {
      result = sub_1007DB90(*(_DWORD *)(v31[0] + 8 * i), *(_DWORD *)(v31[0] + 8 * i + 4), "condition", off_10603BB0);
      if ( !(_BYTE)result )
        goto LABEL_64;
    }
    else
    {
      DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v49);
    }
  }
  i = 0;
  if ( v25 > 0 )
  {
    v29 = byte_10603BA8;
    do
    {
      if ( !v29 )
        break;
      v29 = sub_100A7A40("CAI_FollowBehavior", *(_DWORD *)&v0[4 * i], &dword_10692208);
      byte_10603BA8 = v29;
      ++i;
    }
    while ( i < v25 );
  }
  if ( v32 >= 0 )
  {
    if ( v31[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  }
  sub_102375F0(v39);
  sub_102375F0(v35);
  sub_102375F0(v30);
  return sub_102375F0(&Src);
}
