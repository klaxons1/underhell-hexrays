int sub_1005AB30()
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
  int v28; // esi
  int v29; // eax
  char *v30; // eax
  int v31; // esi
  int v32; // eax
  char *v33; // eax
  int v34; // esi
  int v35; // eax
  char *v36; // eax
  int result; // eax
  char v38; // al
  _DWORD v39[5]; // [esp+Ch] [ebp-70h] BYREF
  _DWORD v40[2]; // [esp+20h] [ebp-5Ch] BYREF
  int v41; // [esp+28h] [ebp-54h]
  int v42; // [esp+2Ch] [ebp-50h]
  int v43; // [esp+30h] [ebp-4Ch]
  _DWORD v44[2]; // [esp+34h] [ebp-48h] BYREF
  int v45; // [esp+3Ch] [ebp-40h]
  int v46; // [esp+40h] [ebp-3Ch]
  int v47; // [esp+44h] [ebp-38h]
  _DWORD v48[2]; // [esp+48h] [ebp-34h] BYREF
  int v49; // [esp+50h] [ebp-2Ch]
  int v50; // [esp+54h] [ebp-28h]
  int v51; // [esp+58h] [ebp-24h]
  void *Src; // [esp+5Ch] [ebp-20h] BYREF
  int v53; // [esp+60h] [ebp-1Ch]
  int v54; // [esp+64h] [ebp-18h]
  int v55; // [esp+68h] [ebp-14h]
  void *v56; // [esp+6Ch] [ebp-10h]
  const char *v57; // [esp+70h] [ebp-Ch] BYREF
  int v58; // [esp+74h] [ebp-8h]
  int v59; // [esp+78h] [ebp-4h]

  Src = 0;
  v53 = 0;
  v54 = 0;
  memset(v39, 0, sizeof(v39));
  v48[0] = 0;
  v48[1] = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v44[0] = 0;
  v44[1] = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v57 = "COND_LEAD_FOLLOWER_LOST";
  v58 = 100000;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_FOLLOWER_LAGGING";
  v58 = 100001;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_FOLLOWER_NOT_LAGGING";
  v58 = 100002;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_FOLLOWER_VERY_CLOSE";
  v58 = 100003;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_SUCCESS";
  v58 = 100004;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_HAVE_FOLLOWER_LOS";
  v58 = 100005;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_FOLLOWER_MOVED_FROM_MARK";
  v58 = 100006;
  sub_10229160(0, &v57);
  v57 = "COND_LEAD_FOLLOWER_MOVING_TOWARDS_ME";
  v58 = 100007;
  sub_10229160(0, &v57);
  v57 = "TASK_GET_PATH_TO_LEAD_GOAL";
  v58 = 100000;
  sub_10229160(0, &v57);
  v57 = "TASK_STOP_LEADING";
  v58 = 100001;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_ARRIVE";
  v58 = 100003;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_SUCCEED";
  v58 = 100004;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_FACE_GOAL";
  v58 = 100002;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_GET_PATH_TO_WAITPOINT";
  v58 = 100005;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_WAVE_TO_PLAYER";
  v58 = 100006;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_PLAYER_NEEDS_WEAPON";
  v58 = 100007;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_MOVE_TO_RANGE";
  v58 = 100009;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_SPEAK_START";
  v58 = 100008;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_RETRIEVE_WAIT";
  v58 = 100010;
  sub_10229160(0, &v57);
  v57 = "TASK_LEAD_WALK_PATH";
  v58 = 100011;
  sub_10229160(0, &v57);
  v57 = "SCHED_LEAD_RETRIEVE";
  v58 = 100003;
  sub_10229160(0, &v57);
  sub_102ABFC0(1);
  v55 = 1;
  v56 = 0;
  v57 = "SCHED_LEAD_SPEAK_THEN_RETRIEVE_PLAYER";
  v58 = 100011;
  sub_10229160(0, &v57);
  v59 = 1;
  sub_102ABFC0(1 - v53 + 1);
  v0 = (char *)Src;
  v1 = v55 + 1;
  v55 = v1;
  v2 = v1 - v59 - 1;
  v56 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4 * v59 + 4, (char *)Src + 4 * v59, 4 * v2);
  v3 = (char *)Src + 4 * v59;
  if ( v3 )
    *v3 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_LEAD_SPEAK_THEN_RETRIEVE_PLAYER\tTasks\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t1\t\tTASK_SET_SCHEDULE\t\t\t"
          "\tSCHEDULE:SCHED_LEAD_RETRIEVE\t\t\tInterrupts\t\tCOND_LEAD_FOLLOWER_VERY_CLOSE\t\tCOND_LEAD_FOLLOWER_MOVING_T"
          "OWARDS_ME\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_RETRIEVE_WAIT";
  v58 = 100004;
  sub_10229160(v50, &v57);
  v59 = v1;
  if ( v1 + 1 > v53 )
  {
    sub_102ABFC0(v1 - v53 + 1);
    v1 = v55;
    v0 = (char *)Src;
  }
  v4 = v1 + 1;
  v55 = v4;
  v5 = v4 - v59 - 1;
  v56 = v0;
  if ( v5 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v5);
  v6 = &v0[4 * v59];
  if ( v6 )
    *(_DWORD *)v6 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_LEAD_RETRIEVE_WAIT\tTasks\t\tTASK_LEAD_RETRIEVE_WAIT\t\t\t0\t\t\tInterrupts\t\tCOND_LEAD_F"
                    "OLLOWER_LOST\t\tCOND_LEAD_FOLLOWER_LAGGING\t\tCOND_LEAD_FOLLOWER_VERY_CLOSE\t\tCOND_LEAD_FOLLOWER_MO"
                    "VING_TOWARDS_ME\t\tCOND_LEAD_FOLLOWER_MOVED_FROM_MARK\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_PLAYER";
  v58 = 100000;
  sub_10229160(v50, &v57);
  v59 = v4;
  if ( v4 + 1 > v53 )
  {
    sub_102ABFC0(v4 - v53 + 1);
    v4 = v55;
    v0 = (char *)Src;
  }
  v7 = v4 + 1;
  v55 = v7;
  v8 = v7 - v59 - 1;
  v56 = v0;
  if ( v8 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v8);
  v9 = &v0[4 * v59];
  if ( v9 )
    *(_DWORD *)v9 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_LEAD_PLAYER\tTasks\t\tTASK_WAIT_FOR_SPEAK_FINISH\t1\t\tTASK_GET_PATH_TO_LEAD_GOAL\t0\t\tTA"
                    "SK_LEAD_WALK_PATH\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t0\t\tTASK_STOP_MOVING\t\t\t0\tInterrupts\t\tCO"
                    "ND_LEAD_FOLLOWER_LOST\t\tCOND_LEAD_FOLLOWER_LAGGING\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_AWAIT_SUCCESS";
  v58 = 100006;
  sub_10229160(v50, &v57);
  v59 = v7;
  if ( v7 + 1 > v53 )
  {
    sub_102ABFC0(v7 - v53 + 1);
    v7 = v55;
    v0 = (char *)Src;
  }
  v10 = v7 + 1;
  v55 = v10;
  v11 = v10 - v59 - 1;
  v56 = v0;
  if ( v11 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v11);
  v12 = &v0[4 * v59];
  if ( v12 )
    *(_DWORD *)v12 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_AWAIT_SUCCESS\tTasks\t\tTASK_LEAD_FACE_GOAL\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t0\t\tTA"
                     "SK_LEAD_ARRIVE\t\t\t0\t\tTASK_WAIT_INDEFINITE\t\t0\tInterrupts\t\tCOND_LEAD_FOLLOWER_LOST\t\tCOND_L"
                     "EAD_FOLLOWER_LAGGING\t\tCOND_LEAD_SUCCESS\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_SUCCEED";
  v58 = 100005;
  sub_10229160(v50, &v57);
  v59 = v10;
  if ( v10 + 1 > v53 )
  {
    sub_102ABFC0(v10 - v53 + 1);
    v10 = v55;
    v0 = (char *)Src;
  }
  v13 = v10 + 1;
  v55 = v13;
  v14 = v13 - v59 - 1;
  v56 = v0;
  if ( v14 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v14);
  v15 = &v0[4 * v59];
  if ( v15 )
    *(_DWORD *)v15 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_SUCCEED\tTasks\t\tTASK_LEAD_SUCCEED\t\t\t0\t\tTASK_STOP_LEADING\t\t\t0\n";
  v57 = "SCHED_LEAD_PAUSE";
  v58 = 100001;
  sub_10229160(v50, &v57);
  v59 = v13;
  if ( v13 + 1 > v53 )
  {
    sub_102ABFC0(v13 - v53 + 1);
    v13 = v55;
    v0 = (char *)Src;
  }
  v16 = v13 + 1;
  v55 = v16;
  v17 = v16 - v59 - 1;
  v56 = v0;
  if ( v17 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v17);
  v18 = &v0[4 * v59];
  if ( v18 )
    *(_DWORD *)v18 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_PAUSE\tTasks\t\tTASK_STOP_MOVING\t\t\t1\t\tTASK_FACE_TARGET\t\t\t0\t\tTASK_WAIT\t\t\t"
                     "\t\t5\t\tTASK_WAIT_RANDOM\t\t\t5\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_LEAD_RETRIEVE\tInterrupts"
                     "\t\tCOND_LEAD_FOLLOWER_VERY_CLOSE\t\tCOND_LEAD_FOLLOWER_MOVING_TOWARDS_ME\t\tCOND_LEAD_FOLLOWER_NOT"
                     "_LAGGING\t\tCOND_LEAD_FOLLOWER_LOST\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_PAUSE_COMBAT";
  v58 = 100002;
  sub_10229160(v50, &v57);
  v59 = v16;
  if ( v16 + 1 > v53 )
  {
    sub_102ABFC0(v16 - v53 + 1);
    v16 = v55;
    v0 = (char *)Src;
  }
  v19 = v16 + 1;
  v55 = v19;
  v20 = v19 - v59 - 1;
  v56 = v0;
  if ( v20 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v20);
  v21 = &v0[4 * v59];
  if ( v21 )
    *(_DWORD *)v21 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_PAUSE_COMBAT\tTasks\t\tTASK_STOP_MOVING\t\t\t1\t\tTASK_FACE_TARGET\t\t\t0\t\tTASK_WA"
                     "IT\t\t\t\t\t1\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_LEAD_RETRIEVE\tInterrupts\t\tCOND_LEAD_FOLLO"
                     "WER_VERY_CLOSE\t\tCOND_LEAD_FOLLOWER_MOVING_TOWARDS_ME\t\tCOND_LEAD_FOLLOWER_NOT_LAGGING\t\tCOND_LE"
                     "AD_FOLLOWER_LOST\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_WAITFORPLAYER";
  v58 = 100007;
  sub_10229160(v50, &v57);
  v59 = v19;
  if ( v19 + 1 > v53 )
  {
    sub_102ABFC0(v19 - v53 + 1);
    v19 = v55;
    v0 = (char *)Src;
  }
  v22 = v19 + 1;
  v55 = v22;
  v23 = v22 - v59 - 1;
  v56 = v0;
  if ( v23 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v23);
  v24 = &v0[4 * v59];
  if ( v24 )
    *(_DWORD *)v24 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_WAITFORPLAYER\tTasks\t\tTASK_LEAD_GET_PATH_TO_WAITPOINT\t0\t\tTASK_LEAD_WALK_PATH\t\t"
                     "\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.5\t\t"
                     "TASK_FACE_TARGET\t\t\t\t0\t\tTASK_LEAD_WAVE_TO_PLAYER\t\t0\t\tTASK_WAIT\t\t\t\t\t\t5.0\t\t\tInterru"
                     "pts\t\tCOND_LEAD_FOLLOWER_VERY_CLOSE\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_WAITFORPLAYERIDLE";
  v58 = 100008;
  sub_10229160(v50, &v57);
  v59 = v22;
  if ( v22 + 1 > v53 )
  {
    sub_102ABFC0(v22 - v53 + 1);
    v22 = v55;
    v0 = (char *)Src;
  }
  v25 = v22 + 1;
  v55 = v25;
  v26 = v25 - v59 - 1;
  v56 = v0;
  if ( v26 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v26);
  v27 = &v0[4 * v59];
  if ( v27 )
    *(_DWORD *)v27 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_WAITFORPLAYERIDLE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.5\t\t"
                     "TASK_FACE_TARGET\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t2\t"
                     "\t\tInterrupts\t\tCOND_LEAD_FOLLOWER_VERY_CLOSE\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v57 = "SCHED_LEAD_PLAYERNEEDSWEAPON";
  v58 = 100009;
  sub_10229160(v50, &v57);
  v59 = v25;
  if ( v25 + 1 > v53 )
  {
    sub_102ABFC0(v25 - v53 + 1);
    v25 = v55;
    v0 = (char *)Src;
  }
  v28 = v25 + 1;
  v55 = v28;
  v29 = v28 - v59 - 1;
  v56 = v0;
  if ( v29 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v29);
  v30 = &v0[4 * v59];
  if ( v30 )
    *(_DWORD *)v30 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_PLAYERNEEDSWEAPON\tTasks\t\tTASK_FACE_PLAYER\t\t\t\t0\t\tTASK_LEAD_PLAYER_NEEDS_WEAP"
                     "ON\t0\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t1\t\tTASK_WAIT\t\t\t\t\t\t8\t\t\tInterrupts\n";
  v57 = "SCHED_LEAD_SPEAK_START";
  v58 = 100010;
  sub_10229160(v50, &v57);
  v59 = v28;
  if ( v28 + 1 > v53 )
  {
    sub_102ABFC0(v28 - v53 + 1);
    v28 = v55;
    v0 = (char *)Src;
  }
  v31 = v28 + 1;
  v55 = v31;
  v32 = v31 - v59 - 1;
  v56 = v0;
  if ( v32 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v32);
  v33 = &v0[4 * v59];
  if ( v33 )
    *(_DWORD *)v33 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_SPEAK_START\tTasks\t\tTASK_LEAD_SPEAK_START\t\t\t0\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t1\tInterrupts\n";
  v57 = "SCHED_LEAD_SPEAK_THEN_LEAD_PLAYER";
  v58 = 100012;
  sub_10229160(v50, &v57);
  v59 = v31;
  if ( v31 + 1 > v53 )
  {
    sub_102ABFC0(v31 - v53 + 1);
    v31 = v55;
    v0 = (char *)Src;
  }
  v34 = v31 + 1;
  v55 = v34;
  v35 = v34 - v59 - 1;
  v56 = v0;
  if ( v35 > 0 )
    memcpy(&v0[4 * v59 + 4], &v0[4 * v59], 4 * v35);
  v36 = &v0[4 * v59];
  if ( v36 )
    *(_DWORD *)v36 = "\n"
                     "\tSchedule\n"
                     "\t\tSCHED_LEAD_SPEAK_THEN_LEAD_PLAYER\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_WAIT_FOR_SPEAK_FINI"
                     "SH\t1\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_LEAD_PLAYER\tInterrupts\t\tCOND_LEAD_FOLLOWER_LOST\t"
                     "\tCOND_LEAD_FOLLOWER_LAGGING\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  sub_1004BBC0(&dword_106922E0, (int)"CAI_LeadBehavior", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v48, sub_10333A80);
  sub_1004C500((int)v44, sub_10333A80);
  sub_1004C500((int)v40, sub_10333A80);
  v59 = 0;
  if ( v50 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(*(_DWORD *)(v48[0] + 8 * v59), *(_DWORD *)(v48[0] + 8 * v59 + 4), "schedule", off_1060460C);
      if ( !(_BYTE)result )
        break;
      if ( ++v59 >= v50 )
        goto LABEL_76;
    }
LABEL_82:
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v45 >= 0 )
    {
      result = v44[0];
      if ( v44[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v44[0]);
    }
    if ( v49 >= 0 )
    {
      result = v48[0];
      if ( v48[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
    }
    if ( v54 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    return result;
  }
LABEL_76:
  v59 = 0;
  if ( v46 > 0 )
  {
    do
    {
      result = sub_1007DB90(*(_DWORD *)(v44[0] + 8 * v59), *(_DWORD *)(v44[0] + 8 * v59 + 4), "task", off_1060460C);
      if ( !(_BYTE)result )
        goto LABEL_82;
    }
    while ( ++v59 < v46 );
  }
  v59 = 0;
  if ( v42 <= 0 )
  {
LABEL_96:
    v59 = 0;
    if ( v34 > 0 )
    {
      v38 = byte_10604604;
      do
      {
        if ( !v38 )
          break;
        v38 = sub_100A7A40("CAI_LeadBehavior", *(_DWORD *)&v0[4 * v59], &dword_106922E0);
        byte_10604604 = v38;
        ++v59;
      }
      while ( v59 < v34 );
    }
    sub_102375F0(v40);
    sub_102375F0(v44);
    sub_102375F0(v48);
    goto LABEL_101;
  }
  while ( 1 )
  {
    v58 = *(_DWORD *)(v40[0] + 8 * v59);
    if ( sub_1016BF80(&unk_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v58);
LABEL_95:
    if ( ++v59 >= v42 )
      goto LABEL_96;
  }
  if ( (unsigned __int8)sub_1007DB90(
                          *(_DWORD *)(v40[0] + 8 * v59),
                          *(_DWORD *)(v40[0] + 8 * v59 + 4),
                          "condition",
                          off_1060460C) )
    goto LABEL_95;
  if ( v41 >= 0 && v40[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
  if ( v45 >= 0 && v44[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v44[0]);
  if ( v49 >= 0 && v48[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
LABEL_101:
  sub_102375F0(v39);
  return sub_102375F0(&Src);
}
