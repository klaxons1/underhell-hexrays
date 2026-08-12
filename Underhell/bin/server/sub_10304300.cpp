int sub_10304300()
{
  _DWORD *v0; // edi
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
  const char *v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  const char *v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  const char *v27; // esi
  int v28; // eax
  _DWORD *v29; // eax
  const char *v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  const char *v33; // esi
  int v34; // eax
  _DWORD *v35; // eax
  const char *v36; // esi
  int v37; // eax
  _DWORD *v38; // eax
  const char *v39; // esi
  int v40; // eax
  _DWORD *v41; // eax
  const char *v42; // esi
  int v43; // eax
  _DWORD *v44; // eax
  const char *v45; // esi
  int v46; // eax
  _DWORD *v47; // eax
  const char *v48; // esi
  int v49; // eax
  _DWORD *v50; // eax
  const char *v51; // esi
  int v52; // eax
  _DWORD *v53; // eax
  const char *v54; // esi
  int v55; // eax
  _DWORD *v56; // eax
  const char *v57; // esi
  int v58; // eax
  _DWORD *v59; // eax
  const char *v60; // esi
  int v61; // eax
  _DWORD *v62; // eax
  int v63; // esi
  int v64; // eax
  _DWORD *v65; // edi
  int v66; // esi
  int v67; // edi
  int v68; // esi
  int v69; // edi
  int v70; // esi
  int v71; // edi
  int v72; // esi
  int v73; // edi
  int v74; // edi
  int v75; // esi
  char v76; // al
  int v78[5]; // [esp+Ch] [ebp-80h] BYREF
  int v79[3]; // [esp+20h] [ebp-6Ch] BYREF
  int v80; // [esp+2Ch] [ebp-60h]
  int v81; // [esp+30h] [ebp-5Ch]
  int v82[3]; // [esp+34h] [ebp-58h] BYREF
  int v83; // [esp+40h] [ebp-4Ch]
  int v84; // [esp+44h] [ebp-48h]
  int v85[3]; // [esp+48h] [ebp-44h] BYREF
  int v86; // [esp+54h] [ebp-38h]
  int v87; // [esp+58h] [ebp-34h]
  int v88[3]; // [esp+5Ch] [ebp-30h] BYREF
  int v89; // [esp+68h] [ebp-24h]
  int v90; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v92; // [esp+74h] [ebp-18h]
  int v93; // [esp+78h] [ebp-14h]
  const char *v94; // [esp+7Ch] [ebp-10h]
  void *v95; // [esp+80h] [ebp-Ch]
  const char *v96; // [esp+84h] [ebp-8h] BYREF
  int v97; // [esp+88h] [ebp-4h] BYREF

  Src = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  memset(v78, 0, sizeof(v78));
  memset(v88, 0, sizeof(v88));
  v89 = 0;
  v90 = 0;
  memset(v85, 0, sizeof(v85));
  v86 = 0;
  v87 = 0;
  memset(v82, 0, sizeof(v82));
  v83 = 0;
  v84 = 0;
  memset(v79, 0, sizeof(v79));
  v80 = 0;
  v81 = 0;
  dword_106E29DC = sub_100C7680();
  dword_106E29E0 = sub_100C7680();
  v96 = "COND_ANTLION_FLIPPED";
  v97 = 73;
  sub_10229160(v82, 0, &v96);
  v96 = "COND_ANTLION_ON_NPC";
  v97 = 74;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_CAN_JUMP";
  v97 = 75;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_FOLLOW_TARGET_TOO_FAR";
  v97 = 76;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_RECEIVED_ORDERS";
  v97 = 77;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_IN_WATER";
  v97 = 78;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_CAN_JUMP_AT_TARGET";
  v97 = 79;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_ANTLION_SQUADMATE_KILLED";
  v97 = 80;
  sub_10229160(v82, v83, &v96);
  v96 = "SQUAD_SLOT_ANTLION_JUMP";
  v97 = 8;
  sub_10229160(v79, 0, &v96);
  v96 = "SQUAD_SLOT_ANTLION_WORKER_FIRE";
  v97 = 9;
  sub_10229160(v79, v80, &v96);
  v96 = "TASK_ANTLION_SET_CHARGE_GOAL";
  v97 = 150;
  sub_10229160(v85, 0, &v96);
  v96 = "TASK_ANTLION_BURROW";
  v97 = 153;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_UNBURROW";
  v97 = 154;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_VANISH";
  v97 = 155;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_FIND_BURROW_IN_POINT";
  v97 = 151;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_FIND_BURROW_OUT_POINT";
  v97 = 152;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_BURROW_WAIT";
  v97 = 156;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_CHECK_FOR_UNBORROW";
  v97 = 157;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_JUMP";
  v97 = 158;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_WAIT_FOR_TRIGGER";
  v97 = 159;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_GET_THUMPER_ESCAPE_PATH";
  v97 = 160;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_GET_PATH_TO_BUGBAIT";
  v97 = 161;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_FACE_BUGBAIT";
  v97 = 162;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_DISMOUNT_NPC";
  v97 = 163;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_REACH_FIGHT_GOAL";
  v97 = 164;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_GET_PHYSICS_DANGER_ESCAPE_PATH";
  v97 = 165;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_FACE_JUMP";
  v97 = 166;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_DROWN";
  v97 = 167;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_GET_PATH_TO_RANDOM_NODE";
  v97 = 168;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_ANTLION_FIND_COVER_FROM_SAVEPOSITION";
  v97 = 169;
  sub_10229160(v85, v86, &v96);
  dword_106E2988 = sub_100032E0((int)"ACT_ANTLION_DISTRACT");
  sub_10008F60((int)"ACT_ANTLION_DISTRACT", dword_106E2988);
  dword_106E2984 = sub_100032E0((int)"ACT_ANTLION_DISTRACT_ARRIVED");
  sub_10008F60((int)"ACT_ANTLION_DISTRACT_ARRIVED", dword_106E2984);
  dword_106E298C = sub_100032E0((int)"ACT_ANTLION_JUMP_START");
  sub_10008F60((int)"ACT_ANTLION_JUMP_START", dword_106E298C);
  dword_106E2980 = sub_100032E0((int)"ACT_ANTLION_BURROW_IN");
  sub_10008F60((int)"ACT_ANTLION_BURROW_IN", dword_106E2980);
  dword_106E297C = sub_100032E0((int)"ACT_ANTLION_BURROW_OUT");
  sub_10008F60((int)"ACT_ANTLION_BURROW_OUT", dword_106E297C);
  dword_106E2978 = sub_100032E0((int)"ACT_ANTLION_BURROW_IDLE");
  sub_10008F60((int)"ACT_ANTLION_BURROW_IDLE", dword_106E2978);
  dword_106E2974 = sub_100032E0((int)"ACT_ANTLION_RUN_AGITATED");
  sub_10008F60((int)"ACT_ANTLION_RUN_AGITATED", dword_106E2974);
  dword_106E2970 = sub_100032E0((int)"ACT_ANTLION_FLIP");
  sub_10008F60((int)"ACT_ANTLION_FLIP", dword_106E2970);
  dword_106E2968 = sub_100032E0((int)"ACT_ANTLION_POUNCE");
  sub_10008F60((int)"ACT_ANTLION_POUNCE", dword_106E2968);
  dword_106E2964 = sub_100032E0((int)"ACT_ANTLION_POUNCE_MOVING");
  sub_10008F60((int)"ACT_ANTLION_POUNCE_MOVING", dword_106E2964);
  dword_106E2960 = sub_100032E0((int)"ACT_ANTLION_DROWN");
  sub_10008F60((int)"ACT_ANTLION_DROWN", dword_106E2960);
  dword_106E295C = sub_100032E0((int)"ACT_ANTLION_LAND");
  sub_10008F60((int)"ACT_ANTLION_LAND", dword_106E295C);
  dword_106E2958 = sub_100032E0((int)"ACT_ANTLION_WORKER_EXPLODE");
  sub_10008F60((int)"ACT_ANTLION_WORKER_EXPLODE", dword_106E2958);
  dword_106E296C = sub_100032E0((int)"ACT_ANTLION_ZAP_FLIP");
  sub_10008F60((int)"ACT_ANTLION_ZAP_FLIP", dword_106E296C);
  dword_106E29D8 = sub_1013BF10((int)"AE_ANTLION_WALK_FOOTSTEP");
  sub_1006AFD0((int)"AE_ANTLION_WALK_FOOTSTEP", dword_106E29D8);
  dword_106E29D4 = sub_1013BF10((int)"AE_ANTLION_MELEE_HIT1");
  sub_1006AFD0((int)"AE_ANTLION_MELEE_HIT1", dword_106E29D4);
  dword_106E29D0 = sub_1013BF10((int)"AE_ANTLION_MELEE_HIT2");
  sub_1006AFD0((int)"AE_ANTLION_MELEE_HIT2", dword_106E29D0);
  dword_106E29CC = sub_1013BF10((int)"AE_ANTLION_MELEE_POUNCE");
  sub_1006AFD0((int)"AE_ANTLION_MELEE_POUNCE", dword_106E29CC);
  dword_106E29C8 = sub_1013BF10((int)"AE_ANTLION_FOOTSTEP_SOFT");
  sub_1006AFD0((int)"AE_ANTLION_FOOTSTEP_SOFT", dword_106E29C8);
  dword_106E29C4 = sub_1013BF10((int)"AE_ANTLION_FOOTSTEP_HEAVY");
  sub_1006AFD0((int)"AE_ANTLION_FOOTSTEP_HEAVY", dword_106E29C4);
  dword_106E29C0 = sub_1013BF10((int)"AE_ANTLION_START_JUMP");
  sub_1006AFD0((int)"AE_ANTLION_START_JUMP", dword_106E29C0);
  dword_106E29BC = sub_1013BF10((int)"AE_ANTLION_BURROW_IN");
  sub_1006AFD0((int)"AE_ANTLION_BURROW_IN", dword_106E29BC);
  dword_106E29B8 = sub_1013BF10((int)"AE_ANTLION_BURROW_OUT");
  sub_1006AFD0((int)"AE_ANTLION_BURROW_OUT", dword_106E29B8);
  dword_106E29B4 = sub_1013BF10((int)"AE_ANTLION_VANISH");
  sub_1006AFD0((int)"AE_ANTLION_VANISH", dword_106E29B4);
  dword_106E29B0 = sub_1013BF10((int)"AE_ANTLION_OPEN_WINGS");
  sub_1006AFD0((int)"AE_ANTLION_OPEN_WINGS", dword_106E29B0);
  dword_106E29AC = sub_1013BF10((int)"AE_ANTLION_CLOSE_WINGS");
  sub_1006AFD0((int)"AE_ANTLION_CLOSE_WINGS", dword_106E29AC);
  dword_106E29A8 = sub_1013BF10((int)"AE_ANTLION_MELEE1_SOUND");
  sub_1006AFD0((int)"AE_ANTLION_MELEE1_SOUND", dword_106E29A8);
  dword_106E29A4 = sub_1013BF10((int)"AE_ANTLION_MELEE2_SOUND");
  sub_1006AFD0((int)"AE_ANTLION_MELEE2_SOUND", dword_106E29A4);
  dword_106E29A0 = sub_1013BF10((int)"AE_ANTLION_WORKER_EXPLODE_SCREAM");
  sub_1006AFD0((int)"AE_ANTLION_WORKER_EXPLODE_SCREAM", dword_106E29A0);
  dword_106E299C = sub_1013BF10((int)"AE_ANTLION_WORKER_EXPLODE_WARN");
  sub_1006AFD0((int)"AE_ANTLION_WORKER_EXPLODE_WARN", dword_106E299C);
  dword_106E2998 = sub_1013BF10((int)"AE_ANTLION_WORKER_EXPLODE");
  sub_1006AFD0((int)"AE_ANTLION_WORKER_EXPLODE", dword_106E2998);
  dword_106E2994 = sub_1013BF10((int)"AE_ANTLION_WORKER_SPIT");
  sub_1006AFD0((int)"AE_ANTLION_WORKER_SPIT", dword_106E2994);
  dword_106E2990 = sub_1013BF10((int)"AE_ANTLION_WORKER_DONT_EXPLODE");
  sub_1006AFD0((int)"AE_ANTLION_WORKER_DONT_EXPLODE", dword_106E2990);
  v96 = "SCHED_ANTLION_JUMP";
  v97 = 89;
  sub_10229160(v88, 0, &v96);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v94 + 1;
  v2 = (int)v94++;
  v95 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLION_JUMP\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_ANTLION_FACE_JUMP\t\t\t0\t\tTASK_PLAY_SEQUE"
          "NCE\t\t\t\tACTIVITY:ACT_ANTLION_JUMP_START\t\tTASK_ANTLION_JUMP\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_WAIT_UNBORROW";
  v97 = 96;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v1;
  if ( (int)(v1 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v92 + 1]);
    v1 = v94;
    v0 = Src;
  }
  v3 = v1 + 1;
  v94 = v3;
  v4 = (int)&v3[-v97 - 1];
  v95 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v4);
  v5 = &v0[v97];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLION_WAIT_UNBORROW\tTasks\t\tTASK_ANTLION_BURROW_WAIT\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:S"
          "CHED_ANTLION_WAIT_FOR_CLEAR_UNBORROW\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_BURROW_WAIT";
  v97 = 92;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v3;
  if ( (int)(v3 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v3[-v92 + 1]);
    v3 = v94;
    v0 = Src;
  }
  v6 = v3 + 1;
  v94 = v6;
  v7 = (int)&v6[-v97 - 1];
  v95 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v7);
  v8 = &v0[v97];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLION_BURROW_WAIT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ANTLION_BURROW_WAIT\t\tTA"
          "SK_ANTLION_BURROW_WAIT\t\t\t1\t\tTASK_ANTLION_FIND_BURROW_OUT_POINT\t1024\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDU"
          "LE:SCHED_ANTLION_WAIT_FOR_CLEAR_UNBORROW\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_BURROW_IN";
  v97 = 91;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v6;
  if ( (int)(v6 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v6[-v92 + 1]);
    v6 = v94;
    v0 = Src;
  }
  v9 = v6 + 1;
  v94 = v9;
  v10 = (int)&v9[-v97 - 1];
  v95 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v10);
  v11 = &v0[v97];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_BURROW_IN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\tTASK"
           "_ANTLION_BURROW\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_ANTLION_BURROW_IN\t\tTASK_ANTLION_VANI"
           "SH\t\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ANTLION_BURROW_WAIT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_RUN_TO_BURROW_IN";
  v97 = 90;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v9;
  if ( (int)(v9 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v9[-v92 + 1]);
    v9 = v94;
    v0 = Src;
  }
  v12 = v9 + 1;
  v94 = v12;
  v13 = (int)&v12[-v97 - 1];
  v95 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v13);
  v14 = &v0[v97];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_RUN_TO_BURROW_IN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t"
           "\tTASK_SET_TOLERANCE_DISTANCE\t\t\t8\t\tTASK_ANTLION_FIND_BURROW_IN_POINT\t512\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t"
           "\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ANTLION_BURROW_IN\tInterrupts\t"
           "\tCOND_TASK_FAILED\t\tCOND_GIVE_WAY\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\n";
  v96 = "SCHED_ANTLION_BURROW_OUT";
  v97 = 93;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v12;
  if ( (int)(v12 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v12[-v92 + 1]);
    v12 = v94;
    v0 = Src;
  }
  v15 = v12 + 1;
  v94 = v15;
  v16 = (int)&v15[-v97 - 1];
  v95 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v16);
  v17 = &v0[v97];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_BURROW_OUT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ANTLION_BURROW_WAIT\t\tTASK"
           "_ANTLION_UNBURROW\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_ANTLION_BURROW_OUT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_WAIT_FOR_UNBORROW_TRIGGER";
  v97 = 94;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v15;
  if ( (int)(v15 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v15[-v92 + 1]);
    v15 = v94;
    v0 = Src;
  }
  v18 = v15 + 1;
  v94 = v18;
  v19 = (int)&v18[-v97 - 1];
  v95 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v19);
  v20 = &v0[v97];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_WAIT_FOR_UNBORROW_TRIGGER\tTasks\t\tTASK_ANTLION_WAIT_FOR_TRIGGER\t0\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_WAIT_FOR_CLEAR_UNBORROW";
  v97 = 95;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v18;
  if ( (int)(v18 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v18[-v92 + 1]);
    v18 = v94;
    v0 = Src;
  }
  v21 = v18 + 1;
  v94 = v21;
  v22 = (int)&v21[-v97 - 1];
  v95 = v0;
  if ( v22 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v22);
  v23 = &v0[v97];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_WAIT_FOR_CLEAR_UNBORROW\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ANTLION_BURR"
           "OW_WAIT\t\tTASK_ANTLION_CHECK_FOR_UNBORROW\t\t1\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ANTLION_BURROW_O"
           "UT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_FLEE_THUMPER";
  v97 = 97;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v21;
  if ( (int)(v21 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v21[-v92 + 1]);
    v21 = v94;
    v0 = Src;
  }
  v24 = v21 + 1;
  v94 = v24;
  v25 = (int)&v24[-v97 - 1];
  v95 = v0;
  if ( v25 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v25);
  v26 = &v0[v97];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_FLEE_THUMPER\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_IDLE_STAND\t\tTASK_AN"
           "TLION_GET_THUMPER_ESCAPE_PATH\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK"
           "_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\t\tACTIVITY:ACT_ANTLION_DISTRACT_ARRIVED\tInterrupts\t"
           "\tCOND_TASK_FAILED\t\tCOND_ANTLION_FLIPPED\n";
  v96 = "SCHED_ANTLION_CHASE_BUGBAIT";
  v97 = 98;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v24;
  if ( (int)(v24 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v24[-v92 + 1]);
    v24 = v94;
    v0 = Src;
  }
  v27 = v24 + 1;
  v94 = v27;
  v28 = (int)&v27[-v97 - 1];
  v95 = v0;
  if ( v28 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v28);
  v29 = &v0[v97];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_CHASE_BUGBAIT\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_ANTLION_GET_PATH_TO_BUGBAIT\t0\t"
           "\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_ANTLIO"
           "N_FACE_BUGBAIT\t\t\t0\tInterrupts\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_SEE_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v96 = "SCHED_ANTLION_ZAP_FLIP";
  v97 = 112;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v27;
  if ( (int)(v27 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v27[-v92 + 1]);
    v27 = v94;
    v0 = Src;
  }
  v30 = v27 + 1;
  v94 = v30;
  v31 = (int)&v30[-v97 - 1];
  v95 = v0;
  if ( v31 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v31);
  v32 = &v0[v97];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_ZAP_FLIP\tTasks\t\tTASK_STOP_MOVING\t0\t\tTASK_RESET_ACTIVITY\t\t0\t\tTASK_PLAY_SEQUENCE\t\t"
           "ACTIVITY:ACT_ANTLION_ZAP_FLIP\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_FLIP";
  v97 = 99;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v30;
  if ( (int)(v30 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v30[-v92 + 1]);
    v30 = v94;
    v0 = Src;
  }
  v33 = v30 + 1;
  v94 = v33;
  v34 = (int)&v33[-v97 - 1];
  v95 = v0;
  if ( v34 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v34);
  v35 = &v0[v97];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_FLIP\tTasks\t\tTASK_STOP_MOVING\t0\t\tTASK_RESET_ACTIVITY\t\t0\t\tTASK_PLAY_SEQUENCE\t\tACT"
           "IVITY:ACT_ANTLION_FLIP\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_DISMOUNT_NPC";
  v97 = 100;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v33;
  if ( (int)(v33 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v33[-v92 + 1]);
    v33 = v94;
    v0 = Src;
  }
  v36 = v33 + 1;
  v94 = v36;
  v37 = (int)&v36[-v97 - 1];
  v95 = v0;
  if ( v37 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v37);
  v38 = &v0[v97];
  if ( v38 )
    *v38 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_DISMOUNT_NPC\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_ANTLION_DISMOUNT_NPC\t0\tInterrupts\n";
  v96 = "SCHED_ANTLION_RUN_TO_FIGHT_GOAL";
  v97 = 101;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v36;
  if ( (int)(v36 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v36[-v92 + 1]);
    v36 = v94;
    v0 = Src;
  }
  v39 = v36 + 1;
  v94 = v39;
  v40 = (int)&v39[-v97 - 1];
  v95 = v0;
  if ( v40 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v40);
  v41 = &v0[v97];
  if ( v41 )
    *v41 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_RUN_TO_FIGHT_GOAL\tTasks\t\tTASK_SET_TOLERANCE_DISTANCE\t\t128\t\tTASK_GET_PATH_TO_SAVEPOSI"
           "TION\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_ANTLION_REACH_FIGHT_GOAL\t0\tInt"
           "errupts\t\tCOND_NEW_ENEMY\t\tCOND_HEAVY_DAMAGE\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_ANTLION_CAN_JUMP\n";
  v96 = "SCHED_ANTLION_RUN_TO_FOLLOW_GOAL";
  v97 = 102;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v39;
  if ( (int)(v39 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v39[-v92 + 1]);
    v39 = v94;
    v0 = Src;
  }
  v42 = v39 + 1;
  v94 = v42;
  v43 = (int)&v42[-v97 - 1];
  v95 = v0;
  if ( v43 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v43);
  v44 = &v0[v97];
  if ( v44 )
    *v44 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_RUN_TO_FOLLOW_GOAL\tTasks\t\tTASK_SET_TOLERANCE_DISTANCE\t\t128\t\tTASK_GET_PATH_TO_SAVEPOS"
           "ITION\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_H"
           "EAVY_DAMAGE\t\tCOND_ANTLION_CAN_JUMP\t\tCOND_ANTLION_FOLLOW_TARGET_TOO_FAR\n";
  v96 = "SCHED_ANTLION_BUGBAIT_IDLE_STAND";
  v97 = 103;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v42;
  if ( (int)(v42 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v42[-v92 + 1]);
    v42 = v94;
    v0 = Src;
  }
  v45 = v42 + 1;
  v94 = v45;
  v46 = (int)&v45[-v97 - 1];
  v95 = v0;
  if ( v46 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v46);
  v47 = &v0[v97];
  if ( v47 )
    *v47 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_BUGBAIT_IDLE_STAND\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_PLAYER\t\t0\t\tTASK_SET_ACT"
           "IVITY\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t2\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_HEAVY_DAMAGE\t\tCOND_L"
           "IGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_COMBAT\t\tCOND_ANTLION_CAN_JUMP\t\tCOND_ANT"
           "LION_FOLLOW_TARGET_TOO_FAR\t\tCOND_GIVE_WAY\n";
  v96 = "SCHED_ANTLION_BURROW_AWAY";
  v97 = 104;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v45;
  if ( (int)(v45 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v45[-v92 + 1]);
    v45 = v94;
    v0 = Src;
  }
  v48 = v45 + 1;
  v94 = v48;
  v49 = (int)&v48[-v97 - 1];
  v95 = v0;
  if ( v49 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v49);
  v50 = &v0[v97];
  if ( v50 )
    *v50 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_BURROW_AWAY\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_ANTLION_BURROW\t\t0\t\tTASK_PLAY_SEQUEN"
           "CE\t\tACTIVITY:ACT_ANTLION_BURROW_IN\t\tTASK_ANTLION_VANISH\t\t1\tInterrupts\n";
  v96 = "SCHED_ANTLION_FLEE_PHYSICS_DANGER";
  v97 = 105;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v48;
  if ( (int)(v48 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v48[-v92 + 1]);
    v48 = v94;
    v0 = Src;
  }
  v51 = v48 + 1;
  v94 = v51;
  v52 = (int)&v51[-v97 - 1];
  v95 = v0;
  if ( v52 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v52);
  v53 = &v0[v97];
  if ( v53 )
    *v53 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_FLEE_PHYSICS_DANGER\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t"
           "\tTASK_ANTLION_GET_PHYSICS_DANGER_ESCAPE_PATH\t1024\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEME"
           "NT\t\t\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_POUNCE";
  v97 = 106;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v51;
  if ( (int)(v51 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v51[-v92 + 1]);
    v51 = v94;
    v0 = Src;
  }
  v54 = v51 + 1;
  v94 = v54;
  v55 = (int)&v54[-v97 - 1];
  v95 = v0;
  if ( v55 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v55);
  v56 = &v0[v97];
  if ( v56 )
    *v56 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_POUNCE\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUNCE_ATTACK\t1"
           "\t\tTASK_RESET_ACTIVITY\t\t0\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_ANTLION_POUNCE\tInterrupts\t\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_POUNCE_MOVING";
  v97 = 107;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v54;
  if ( (int)(v54 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v54[-v92 + 1]);
    v54 = v94;
    v0 = Src;
  }
  v57 = v54 + 1;
  v94 = v57;
  v58 = (int)&v57[-v97 - 1];
  v95 = v0;
  if ( v58 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v58);
  v59 = &v0[v97];
  if ( v59 )
    *v59 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_POUNCE_MOVING\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUNCE_AT"
           "TACK\t1\t\tTASK_RESET_ACTIVITY\t\t0\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_ANTLION_POUNCE_MOVING\tInterrupts\t"
           "\tCOND_TASK_FAILED\n";
  v96 = "SCHED_ANTLION_DROWN";
  v97 = 108;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v57;
  if ( (int)(v57 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v57[-v92 + 1]);
    v57 = v94;
    v0 = Src;
  }
  v60 = v57 + 1;
  v94 = v60;
  v61 = (int)&v60[-v97 - 1];
  v95 = v0;
  if ( v61 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v61);
  v62 = &v0[v97];
  if ( v62 )
    *v62 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_DROWN\tTasks\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_ANTLION_DROWN\t\tTASK_ANTLION_DROWN\t\t"
           "\t0\tInterrupts\n";
  v96 = "SCHED_ANTLION_WORKER_RANGE_ATTACK1";
  v97 = 109;
  sub_10229160(v88, v89, &v96);
  v97 = (int)v60;
  if ( (int)(v60 + 1) > v92 )
  {
    sub_102ABFC0(&Src, (int)&v60[-v92 + 1]);
    v60 = v94;
    v0 = Src;
  }
  v63 = (int)(v60 + 1);
  v94 = (const char *)v63;
  v64 = v63 - v97 - 1;
  v95 = v0;
  if ( v64 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v64);
  v65 = &v0[v97];
  if ( v65 )
    *v65 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLION_WORKER_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNO"
           "UNCE_ATTACK\t1\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\n";
  v96 = "SCHED_ANTLION_WORKER_FLANK_RANDOM";
  v97 = 113;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_ANTLION_WORKER_FLANK_RANDOM\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ANTLION_WORK"
             "ER_RUN_RANDOM\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t\t48\t\tTASK_SET_ROUTE_SEARCH_TIME\t\t\t\t1\t\tTASK_GET_F"
             "LANK_ARC_PATH_TO_ENEMY_LOS\t30\t\tTASK_RUN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\tInterr"
             "upts\t\tCOND_TASK_FAILED\t\tCOND_HEAVY_DAMAGE\t\tCOND_ANTLION_SQUADMATE_KILLED\t\tCOND_CAN_RANGE_ATTACK1\t\t"
             "COND_CAN_MELEE_ATTACK1\n";
  sub_10194990((int *)&Src, v63, &v97);
  v96 = "SCHED_ANTLION_WORKER_RUN_RANDOM";
  v97 = 110;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_ANTLION_WORKER_RUN_RANDOM\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ANTLION_TAKE_COVER"
             "_FROM_ENEMY\t\tTASK_SET_TOLERANCE_DISTANCE\t\t48\t\tTASK_SET_ROUTE_SEARCH_TIME\t\t1\t\tTASK_GET_PATH_TO_RAN"
             "DOM_NODE\t128\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t"
             "\tCOND_CAN_RANGE_ATTACK1\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_ANTLION_TAKE_COVER_FROM_ENEMY";
  v97 = 111;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_ANTLION_TAKE_COVER_FROM_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_FAIL_TAKE_COVE"
             "R\t\tTASK_FIND_COVER_FROM_ENEMY\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_S"
             "TOP_MOVING\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_ANTLION_TAKE_COVER_FROM_SAVEPOSITION";
  v97 = 114;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_ANTLION_TAKE_COVER_FROM_SAVEPOSITION\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_F"
             "AIL_TAKE_COVER\t\tTASK_ANTLION_FIND_COVER_FROM_SAVEPOSITION\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WA"
             "IT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  sub_1004BBC0(&dword_106E2DA8, (int)"CNPC_Antlion", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E2DF4, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v88, sub_10333A80);
  sub_1004C500((int)v85, sub_10333A80);
  sub_1004C500((int)v82, sub_10333A80);
  sub_1004C500((int)v79, sub_10333A80);
  v66 = 0;
  if ( v89 <= 0 )
  {
LABEL_135:
    v68 = 0;
    if ( v86 <= 0 )
    {
LABEL_139:
      v70 = 0;
      if ( v83 > 0 )
      {
        v71 = v82[0];
        do
        {
          v97 = *(_DWORD *)(v71 + 8 * v70);
          if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
          {
            if ( !sub_1007DB90(
                    dword_106E2DDC,
                    *(_DWORD *)(v71 + 8 * v70),
                    *(_DWORD *)(v71 + 8 * v70 + 4),
                    "condition",
                    off_1066A984) )
              goto LABEL_153;
          }
          else
          {
            DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v97);
          }
          ++v70;
        }
        while ( v70 < v83 );
      }
      v72 = 0;
      if ( v80 <= 0 )
      {
LABEL_149:
        v74 = (int)v94;
        v75 = 0;
        if ( (int)v94 > 0 )
        {
          v76 = byte_1066A97C;
          do
          {
            if ( !v76 )
              break;
            v76 = sub_100A7A40(&dword_10694898, "CNPC_Antlion", *((_DWORD *)Src + v75++), (int)&dword_106E2DA8);
            byte_1066A97C = v76;
          }
          while ( v75 < v74 );
        }
      }
      else
      {
        v73 = v79[0];
        while ( sub_1007DB90(
                  dword_106E2DF4,
                  *(_DWORD *)(v73 + 8 * v72),
                  *(_DWORD *)(v73 + 8 * v72 + 4),
                  "squadslot",
                  off_1066A984) )
        {
          if ( ++v72 >= v80 )
            goto LABEL_149;
        }
      }
    }
    else
    {
      v69 = v85[0];
      while ( sub_1007DB90(
                dword_106E2DC4,
                *(_DWORD *)(v69 + 8 * v68),
                *(_DWORD *)(v69 + 8 * v68 + 4),
                "task",
                off_1066A984) )
      {
        if ( ++v68 >= v86 )
          goto LABEL_139;
      }
    }
  }
  else
  {
    v67 = v88[0];
    while ( sub_1007DB90(
              dword_106E2DAC,
              *(_DWORD *)(v67 + 8 * v66),
              *(_DWORD *)(v67 + 8 * v66 + 4),
              "schedule",
              off_1066A984) )
    {
      if ( ++v66 >= v89 )
        goto LABEL_135;
    }
  }
LABEL_153:
  sub_102375F0(v79);
  sub_102375F0(v82);
  sub_102375F0(v85);
  sub_102375F0(v88);
  sub_102375F0(v78);
  return sub_102375F0((int *)&Src);
}
