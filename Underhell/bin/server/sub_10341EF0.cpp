int sub_10341EF0()
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
  int v27; // esi
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // esi
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // esi
  int v37; // eax
  _DWORD *v38; // eax
  int v39; // esi
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // esi
  int v43; // eax
  _DWORD *v44; // eax
  int v45; // esi
  int v46; // eax
  _DWORD *v47; // eax
  int v48; // esi
  int v49; // eax
  _DWORD *v50; // eax
  int v51; // esi
  int v52; // eax
  _DWORD *v53; // eax
  int v54; // esi
  int v55; // eax
  _DWORD *v56; // eax
  int v57; // esi
  int v58; // eax
  _DWORD *v59; // eax
  int v60; // esi
  int v61; // eax
  _DWORD *v62; // eax
  int v63; // esi
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // esi
  int v67; // eax
  _DWORD *v68; // edi
  int v69; // esi
  int v70; // edi
  int v71; // esi
  int v72; // edi
  int v73; // esi
  const char *v74; // edi
  int v75; // edi
  int v76; // esi
  int v77; // edi
  int v78; // edi
  int v79; // esi
  char v80; // al
  int v82[5]; // [esp+Ch] [ebp-80h] BYREF
  int v83[3]; // [esp+20h] [ebp-6Ch] BYREF
  int v84; // [esp+2Ch] [ebp-60h]
  int v85; // [esp+30h] [ebp-5Ch]
  int v86[3]; // [esp+34h] [ebp-58h] BYREF
  int v87; // [esp+40h] [ebp-4Ch]
  int v88; // [esp+44h] [ebp-48h]
  int v89[3]; // [esp+48h] [ebp-44h] BYREF
  int v90; // [esp+54h] [ebp-38h]
  int v91; // [esp+58h] [ebp-34h]
  int v92[3]; // [esp+5Ch] [ebp-30h] BYREF
  int v93; // [esp+68h] [ebp-24h]
  int v94; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v96; // [esp+74h] [ebp-18h]
  int v97; // [esp+78h] [ebp-14h]
  int v98; // [esp+7Ch] [ebp-10h]
  void *v99; // [esp+80h] [ebp-Ch]
  const char *v100; // [esp+84h] [ebp-8h] BYREF
  int v101; // [esp+88h] [ebp-4h] BYREF

  Src = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  memset(v82, 0, sizeof(v82));
  memset(v92, 0, sizeof(v92));
  v93 = 0;
  v94 = 0;
  memset(v89, 0, sizeof(v89));
  v90 = 0;
  v91 = 0;
  memset(v86, 0, sizeof(v86));
  v87 = 0;
  v88 = 0;
  memset(v83, 0, sizeof(v83));
  v84 = 0;
  v85 = 0;
  v100 = "TASK_COMBINE_FACE_TOSS_DIR";
  v101 = 150;
  sub_10229160(v89, 0, &v100);
  v100 = "TASK_COMBINE_IGNORE_ATTACKS";
  v101 = 151;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_SIGNAL_BEST_SOUND";
  v101 = 152;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_DEFER_SQUAD_GRENADES";
  v101 = 153;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_CHASE_ENEMY_CONTINUOUSLY";
  v101 = 154;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_DIE_INSTANTLY";
  v101 = 155;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_PLAY_SEQUENCE_FACE_ALTFIRE_TARGET";
  v101 = 156;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_GET_PATH_TO_FORCED_GREN_LOS";
  v101 = 157;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_COMBINE_SET_STANDING";
  v101 = 158;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_DESTROY_RADIO";
  v101 = 159;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_SENTENCE_HEARDRADIO";
  v101 = 160;
  sub_10229160(v89, v90, &v100);
  v100 = "TASK_SENTENCE_FOUNDRADIO";
  v101 = 161;
  sub_10229160(v89, v90, &v100);
  dword_106E652C = sub_100032E0((int)"ACT_COMBINE_THROW_GRENADE");
  sub_10008F60((int)"ACT_COMBINE_THROW_GRENADE", dword_106E652C);
  dword_106E6528 = sub_100032E0((int)"ACT_COMBINE_LAUNCH_GRENADE");
  sub_10008F60((int)"ACT_COMBINE_LAUNCH_GRENADE", dword_106E6528);
  dword_106E6524 = sub_100032E0((int)"ACT_COMBINE_BUGBAIT");
  sub_10008F60((int)"ACT_COMBINE_BUGBAIT", dword_106E6524);
  dword_106E6520 = sub_100032E0((int)"ACT_COMBINE_AR2_ALTFIRE");
  sub_10008F60((int)"ACT_COMBINE_AR2_ALTFIRE", dword_106E6520);
  dword_106E651C = sub_100032E0((int)"ACT_WALK_EASY");
  sub_10008F60((int)"ACT_WALK_EASY", dword_106E651C);
  dword_106E6518 = sub_100032E0((int)"ACT_WALK_MARCH");
  sub_10008F60((int)"ACT_WALK_MARCH", dword_106E6518);
  dword_106E6534 = sub_1013BF10((int)"COMBINE_AE_BEGIN_ALTFIRE");
  sub_1006AFD0((int)"COMBINE_AE_BEGIN_ALTFIRE", dword_106E6534);
  dword_106E6530 = sub_1013BF10((int)"COMBINE_AE_ALTFIRE");
  sub_1006AFD0((int)"COMBINE_AE_ALTFIRE", dword_106E6530);
  v100 = "SQUAD_SLOT_GRENADE1";
  v101 = 8;
  sub_10229160(v83, 0, &v100);
  v100 = "SQUAD_SLOT_GRENADE2";
  v101 = 9;
  sub_10229160(v83, v84, &v100);
  v100 = "COND_COMBINE_NO_FIRE";
  v101 = 73;
  sub_10229160(v86, 0, &v100);
  v100 = "COND_COMBINE_DEAD_FRIEND";
  v101 = 74;
  sub_10229160(v86, v87, &v100);
  v100 = "COND_COMBINE_SHOULD_PATROL";
  v101 = 75;
  sub_10229160(v86, v87, &v100);
  v100 = "COND_COMBINE_HIT_BY_BUGBAIT";
  v101 = 76;
  sub_10229160(v86, v87, &v100);
  v100 = "COND_COMBINE_DROP_GRENADE";
  v101 = 77;
  sub_10229160(v86, v87, &v100);
  v100 = "COND_COMBINE_ON_FIRE";
  v101 = 78;
  sub_10229160(v86, v87, &v100);
  v100 = "COND_COMBINE_ATTACK_SLOT_AVAILABLE";
  v101 = 79;
  sub_10229160(v86, v87, &v100);
  dword_106E6540 = sub_100C7680();
  v100 = "SCHED_COMBINE_TAKE_COVER_FROM_BEST_SOUND";
  v101 = 103;
  sub_10229160(v92, 0, &v100);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v98 + 1;
  v2 = v98++;
  v99 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_COMBINE_TAKE_COVER_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COMBINE_R"
          "UN_AWAY_FROM_BEST_SOUND\t\t TASK_STOP_MOVING\t\t\t\t\t0\t\t TASK_COMBINE_SIGNAL_BEST_SOUND\t\t0\t\t TASK_FIND_"
          "COVER_FROM_BEST_SOUND\t0\t\t TASK_RUN_PATH\t\t\t\t\t\t0\t\t TASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\t TASK_REMEMBER\t"
          "\t\t\t\t\tMEMORY:INCOVER\t\t TASK_FACE_REASONABLE\t\t\t\t0\tInterrupts\n";
  v100 = "SCHED_COMBINE_RUN_AWAY_FROM_BEST_SOUND";
  v101 = 104;
  sub_10229160(v92, v93, &v100);
  v101 = v1;
  if ( v1 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v1 - v96 + 1);
    v1 = v98;
    v0 = Src;
  }
  v3 = v1 + 1;
  v98 = v3;
  v4 = v3 - v101 - 1;
  v99 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v4);
  v5 = &v0[v101];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_COMBINE_RUN_AWAY_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_COWER\t\t"
          " TASK_GET_PATH_AWAY_FROM_BEST_SOUND\t\t600\t\t TASK_RUN_PATH_TIMED\t\t\t\t\t2\t\t TASK_STOP_MOVING\t\t\t\t\t\t0\tInterrupts\n";
  v100 = "SCHED_COMBINE_COMBAT_FAIL";
  v101 = 89;
  sub_10229160(v92, v93, &v100);
  v101 = v3;
  if ( v3 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v3 - v96 + 1);
    v3 = v98;
    v0 = Src;
  }
  v6 = v3 + 1;
  v98 = v6;
  v7 = v6 - v101 - 1;
  v99 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v7);
  v8 = &v0[v101];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_COMBINE_COMBAT_FAIL\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE \t"
          "\tTASK_WAIT_FACE_ENEMY\t\t2\t\tTASK_WAIT_PVS\t\t\t\t0\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_"
          "ATTACK2\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\n";
  v100 = "SCHED_COMBINE_VICTORY_DANCE";
  v101 = 90;
  sub_10229160(v92, v93, &v100);
  v101 = v6;
  if ( v6 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v6 - v96 + 1);
    v6 = v98;
    v0 = Src;
  }
  v9 = v6 + 1;
  v98 = v9;
  v10 = v9 - v101 - 1;
  v99 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v10);
  v11 = &v0[v101];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_VICTORY_DANCE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK"
           "_WAIT\t\t\t\t\t\t\t1.5\t\tTASK_GET_PATH_TO_ENEMY_CORPSE\t\t0\t\tTASK_WALK_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_"
           "MOVEMENT\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_VICTORY_DANCE\t"
           "Interrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_FMRADIO\n";
  v100 = "SCHED_COMBINE_ASSAULT";
  v101 = 96;
  sub_10229160(v92, v93, &v100);
  v101 = v9;
  if ( v9 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v9 - v96 + 1);
    v9 = v98;
    v0 = Src;
  }
  v12 = v9 + 1;
  v98 = v12;
  v13 = v12 - v101 - 1;
  v99 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v13);
  v14 = &v0[v101];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_ASSAULT\tTasks \t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_COMBINE_ESTABLISH_LINE_OF_FIR"
           "E\t\tTASK_SET_TOLERANCE_DISTANCE\t\t48\t\tTASK_GET_PATH_TO_ENEMY_LKP\t\t0\t\tTASK_COMBINE_IGNORE_ATTACKS\t\t0"
           ".2\t\tTASK_SPEAK_SENTENCE\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_COMBI"
           "NE_IGNORE_ATTACKS\t\t0.0\tInterrupts \t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_"
           "CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TOO_F"
           "AR_TO_ATTACK\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\n";
  v100 = "SCHED_COMBINE_ESTABLISH_LINE_OF_FIRE";
  v101 = 97;
  sub_10229160(v92, v93, &v100);
  v101 = v12;
  if ( v12 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v12 - v96 + 1);
    v12 = v98;
    v0 = Src;
  }
  v15 = v12 + 1;
  v98 = v15;
  v16 = v15 - v101 - 1;
  v99 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v16);
  v17 = &v0[v101];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_ESTABLISH_LINE_OF_FIRE\tTasks \t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_FAIL_ESTABLISH"
           "_LINE_OF_FIRE\t\tTASK_SET_TOLERANCE_DISTANCE\t\t48\t\tTASK_GET_PATH_TO_ENEMY_LKP_LOS\t0\t\tTASK_COMBINE_SET_S"
           "TANDING\t\t1\t\tTASK_SPEAK_SENTENCE\t\t\t\t1\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\t"
           "TASK_COMBINE_IGNORE_ATTACKS\t\t0.0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COMBAT_FACE\t\tInterrupts \t\tC"
           "OND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tC"
           "OND_HEAR_MOVE_AWAY\t\tCOND_HEAVY_DAMAGE\n";
  v100 = "SCHED_COMBINE_PRESS_ATTACK";
  v101 = 98;
  sub_10229160(v92, v93, &v100);
  v101 = v15;
  if ( v15 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v15 - v96 + 1);
    v15 = v98;
    v0 = Src;
  }
  v18 = v15 + 1;
  v98 = v18;
  v19 = v18 - v101 - 1;
  v99 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v19);
  v20 = &v0[v101];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_PRESS_ATTACK\tTasks \t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_COMBINE_ESTABLISH_LINE_O"
           "F_FIRE\t\tTASK_SET_TOLERANCE_DISTANCE\t\t72\t\tTASK_GET_PATH_TO_ENEMY_LKP\t\t0\t\tTASK_COMBINE_SET_STANDING\t"
           "\t1\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\tInterrupts \t\tCOND_NEW_ENEMY\t\tCOND_ENEMY"
           "_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_LOW_PRIMARY_AMMO\t\tCOND_TOO_CLOSE_TO_ATTACK\t"
           "\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\n";
  v100 = "SCHED_COMBINE_COMBAT_FACE";
  v101 = 91;
  sub_10229160(v92, v93, &v100);
  v101 = v18;
  if ( v18 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v18 - v96 + 1);
    v18 = v98;
    v0 = Src;
  }
  v21 = v18 + 1;
  v98 = v21;
  v22 = v21 - v101 - 1;
  v99 = v0;
  if ( v22 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v22);
  v23 = &v0[v101];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_COMBAT_FACE\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t"
           "\tTASK_FACE_ENEMY\t\t\t\t0\t\t TASK_WAIT\t\t\t\t\t1.5\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCON"
           "D_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\n";
  v100 = "SCHED_COMBINE_HIDE_AND_RELOAD";
  v101 = 92;
  sub_10229160(v92, v93, &v100);
  v101 = v21;
  if ( v21 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v21 - v96 + 1);
    v21 = v98;
    v0 = Src;
  }
  v24 = v21 + 1;
  v98 = v24;
  v25 = v24 - v101 - 1;
  v99 = v0;
  if ( v25 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v25);
  v26 = &v0[v101];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_HIDE_AND_RELOAD\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE:SCHED_RELOAD\t\tTASK_FIND_COVE"
           "R_FROM_ENEMY\t0\t\tTASK_RUN_PATH\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t0\t\tTASK_REMEMBER\t\t\t\tMEMORY:INCOV"
           "ER\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_RELOAD\t\t\t\t\t0\tInterrupts\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_ME"
           "LEE_ATTACK2\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\n";
  v100 = "SCHED_COMBINE_SIGNAL_SUPPRESS";
  v101 = 93;
  sub_10229160(v92, v93, &v100);
  v101 = v24;
  if ( v24 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v24 - v96 + 1);
    v24 = v98;
    v0 = Src;
  }
  v27 = v24 + 1;
  v98 = v27;
  v28 = v27 - v101 - 1;
  v99 = v0;
  if ( v28 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v28);
  v29 = &v0[v101];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_SIGNAL_SUPPRESS\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_P"
           "LAY_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_SIGNAL_GROUP\t\tTASK_COMBINE_SET_STANDING\t\t0\t\tTASK_RANGE_ATTACK1\t\t"
           "\t\t0\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCON"
           "D_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_C"
           "OMBINE_NO_FIRE\n";
  v100 = "SCHED_COMBINE_SUPPRESS";
  v101 = 88;
  sub_10229160(v92, v93, &v100);
  v101 = v27;
  if ( v27 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v27 - v96 + 1);
    v27 = v98;
    v0 = Src;
  }
  v30 = v27 + 1;
  v98 = v30;
  v31 = v30 - v101 - 1;
  v99 = v0;
  if ( v31 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v31);
  v32 = &v0[v101];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_SUPPRESS\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_COMBINE_SET_"
           "STANDING\t0\t\tTASK_RANGE_ATTACK1\t\t\t0\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DA"
           "MAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_COMBINE_NO_FIRE\t\tCOND_WEAPO"
           "N_BLOCKED_BY_FRIEND\n";
  v100 = "SCHED_COMBINE_ENTER_OVERWATCH";
  v101 = 94;
  sub_10229160(v92, v93, &v100);
  v101 = v30;
  if ( v30 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v30 - v96 + 1);
    v30 = v98;
    v0 = Src;
  }
  v33 = v30 + 1;
  v98 = v33;
  v34 = v33 - v101 - 1;
  v99 = v0;
  if ( v34 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v34);
  v35 = &v0[v101];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_ENTER_OVERWATCH\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_COMBINE_SET_STANDING\t0\t\tTASK_S"
           "ET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SCHED_COMBI"
           "NE_OVERWATCH\tInterrupts\t\tCOND_HEAR_DANGER\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_FMRADIO\n";
  v100 = "SCHED_COMBINE_OVERWATCH";
  v101 = 95;
  sub_10229160(v92, v93, &v100);
  v101 = v33;
  if ( v33 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v33 - v96 + 1);
    v33 = v98;
    v0 = Src;
  }
  v36 = v33 + 1;
  v98 = v36;
  v37 = v36 - v101 - 1;
  v99 = v0;
  if ( v37 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v37);
  v38 = &v0[v101];
  if ( v38 )
    *v38 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_OVERWATCH\tTasks\t\tTASK_WAIT_FACE_ENEMY\t\t10\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCON"
           "D_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_HE"
           "AR_MOVE_AWAY\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_FMRADIO\n";
  v100 = "SCHED_COMBINE_WAIT_IN_COVER";
  v101 = 99;
  sub_10229160(v92, v93, &v100);
  v101 = v36;
  if ( v36 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v36 - v96 + 1);
    v36 = v98;
    v0 = Src;
  }
  v39 = v36 + 1;
  v98 = v39;
  v40 = v39 - v101 - 1;
  v99 = v0;
  if ( v40 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v40);
  v41 = &v0[v101];
  if ( v41 )
    *v41 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_WAIT_IN_COVER\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_COMBINE_SET_STANDING\t\t0\t\tTASK"
           "_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT_FACE_ENEMY\t\t\t1\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_C"
           "AN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_D"
           "ANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_COMBINE_ATTACK_SLOT_AVAILABLE\t\tCOND_HEAR_FMRADIO\n";
  v100 = "SCHED_COMBINE_TAKE_COVER1";
  v101 = 102;
  sub_10229160(v92, v93, &v100);
  v101 = v39;
  if ( v39 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v39 - v96 + 1);
    v39 = v98;
    v0 = Src;
  }
  v42 = v39 + 1;
  v98 = v42;
  v43 = v42 - v101 - 1;
  v99 = v0;
  if ( v43 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v43);
  v44 = &v0[v101];
  if ( v44 )
    *v44 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_TAKE_COVER1\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE:SCHED_COMBINE_TAKECOVER_FAILED\t\t"
           "TASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t0.2\t\tTASK_FIND_COVER_FROM_ENEMY\t0\t\tTASK_RUN_PATH\t\t\t\t"
           "0\t\tTASK_WAIT_FOR_MOVEMENT\t\t0\t\tTASK_REMEMBER\t\t\t\tMEMORY:INCOVER\t\tTASK_SET_SCHEDULE\t\t\tSCHEDULE:SC"
           "HED_COMBINE_WAIT_IN_COVER\tInterrupts\n";
  v100 = "SCHED_COMBINE_TAKECOVER_FAILED";
  v101 = 107;
  sub_10229160(v92, v93, &v100);
  v101 = v42;
  if ( v42 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v42 - v96 + 1);
    v42 = v98;
    v0 = Src;
  }
  v45 = v42 + 1;
  v98 = v45;
  v46 = v45 - v101 - 1;
  v99 = v0;
  if ( v46 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v46);
  v47 = &v0[v101];
  if ( v47 )
    *v47 = "\n\tSchedule\n\t\tSCHED_COMBINE_TAKECOVER_FAILED\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\tInterrupts\n";
  v100 = "SCHED_COMBINE_GRENADE_COVER1";
  v101 = 105;
  sub_10229160(v92, v93, &v100);
  v101 = v45;
  if ( v45 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v45 - v96 + 1);
    v45 = v98;
    v0 = Src;
  }
  v48 = v45 + 1;
  v98 = v48;
  v49 = v48 - v101 - 1;
  v99 = v0;
  if ( v49 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v49);
  v50 = &v0[v101];
  if ( v50 )
    *v50 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_GRENADE_COVER1\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FIND_COVER_FROM_ENEMY\t\t\t99\t"
           "\tTASK_FIND_FAR_NODE_COVER_FROM_ENEMY\t384\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_SPECIAL_ATTACK2\t\tTAS"
           "K_CLEAR_MOVE_WAIT\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_SET_SCHED"
           "ULE\t\t\t\t\tSCHEDULE:SCHED_COMBINE_WAIT_IN_COVER\tInterrupts\n";
  v100 = "SCHED_COMBINE_TOSS_GRENADE_COVER1";
  v101 = 106;
  sub_10229160(v92, v93, &v100);
  v101 = v48;
  if ( v48 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v48 - v96 + 1);
    v48 = v98;
    v0 = Src;
  }
  v51 = v48 + 1;
  v98 = v51;
  v52 = v51 - v101 - 1;
  v99 = v0;
  if ( v52 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v52);
  v53 = &v0[v101];
  if ( v53 )
    *v53 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_TOSS_GRENADE_COVER1\tTasks\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK_RANGE_ATTACK2 \t\t\t\t\t"
           "0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_TAKE_COVER_FROM_ENEMY\tInterrupts\n";
  v100 = "SCHED_COMBINE_RANGE_ATTACK1";
  v101 = 100;
  sub_10229160(v92, v93, &v100);
  v101 = v51;
  if ( v51 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v51 - v96 + 1);
    v51 = v98;
    v0 = Src;
  }
  v54 = v51 + 1;
  v98 = v54;
  v55 = v54 - v101 - 1;
  v99 = v0;
  if ( v55 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v55);
  v56 = &v0[v101];
  if ( v56 )
    *v56 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_ANN"
           "OUNCE_ATTACK\t\t\t1\t\tTASK_WAIT_RANDOM\t\t\t\t0.3\t\tTASK_RANGE_ATTACK1\t\t\t\t0\t\tTASK_COMBINE_IGNORE_ATTA"
           "CKS\t\t0.5\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_HEAVY_DAMAGE\t\tCOND_LIGHT_DAMAGE\t\tCOND"
           "_LOW_PRIMARY_AMMO\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCON"
           "D_GIVE_WAY\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_COMBINE_NO_FIRE\n";
  v100 = "SCHED_COMBINE_AR2_ALTFIRE";
  v101 = 116;
  sub_10229160(v92, v93, &v100);
  v101 = v54;
  if ( v54 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v54 - v96 + 1);
    v54 = v98;
    v0 = Src;
  }
  v57 = v54 + 1;
  v98 = v57;
  v58 = v57 - v101 - 1;
  v99 = v0;
  if ( v58 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v58);
  v59 = &v0[v101];
  if ( v59 )
    *v59 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_AR2_ALTFIRE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t\t\t0\t\tTASK_ANNOUNCE_ATTACK\t\t\t\t\t"
           "\t\t\t1\t\tTASK_COMBINE_PLAY_SEQUENCE_FACE_ALTFIRE_TARGET\t\tACTIVITY:ACT_COMBINE_AR2_ALTFIRE\tInterrupts\n";
  v100 = "SCHED_COMBINE_FORCED_GRENADE_THROW";
  v101 = 118;
  sub_10229160(v92, v93, &v100);
  v101 = v57;
  if ( v57 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v57 - v96 + 1);
    v57 = v98;
    v0 = Src;
  }
  v60 = v57 + 1;
  v98 = v60;
  v61 = v60 - v101 - 1;
  v99 = v0;
  if ( v61 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v61);
  v62 = &v0[v101];
  if ( v62 )
    *v62 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_FORCED_GRENADE_THROW\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_COMBINE_FACE_TOSS_DIR\t\t"
           "\t0\t\tTASK_ANNOUNCE_ATTACK\t\t\t\t2\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_RANGE_ATTACK2\t\tTASK_COMBIN"
           "E_DEFER_SQUAD_GRENADES\t0\tInterrupts\n";
  v100 = "SCHED_COMBINE_MOVE_TO_FORCED_GREN_LOS";
  v101 = 119;
  sub_10229160(v92, v93, &v100);
  v101 = v60;
  if ( v60 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v60 - v96 + 1);
    v60 = v98;
    v0 = Src;
  }
  v63 = v60 + 1;
  v98 = v63;
  v64 = v63 - v101 - 1;
  v99 = v0;
  if ( v64 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v64);
  v65 = &v0[v101];
  if ( v65 )
    *v65 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_MOVE_TO_FORCED_GREN_LOS\tTasks \t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t\t\t48\t\tTASK_COMBINE_"
           "GET_PATH_TO_FORCED_GREN_LOS\t0\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t\t\t1\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t0\t\tTAS"
           "K_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tInterrupts \t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_MELEE_ATTACK"
           "1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_HEAVY_DAMAGE\n";
  v100 = "SCHED_COMBINE_RANGE_ATTACK2";
  v101 = 101;
  sub_10229160(v92, v93, &v100);
  v101 = v63;
  if ( v63 + 1 > v96 )
  {
    sub_102ABFC0(&Src, v63 - v96 + 1);
    v63 = v98;
    v0 = Src;
  }
  v66 = v63 + 1;
  v98 = v66;
  v67 = v66 - v101 - 1;
  v99 = v0;
  if ( v67 > 0 )
    memcpy(&v0[v101 + 1], &v0[v101], 4 * v67);
  v68 = &v0[v101];
  if ( v68 )
    *v68 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_COMBINE_RANGE_ATTACK2\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_COMBINE_FACE_TOSS_DIR\t\t\t0\t\t"
           "TASK_ANNOUNCE_ATTACK\t\t\t\t2\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_RANGE_ATTACK2\t\tTASK_COMBINE_DEFER"
           "_SQUAD_GRENADES\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_COMBINE_WAIT_IN_COVER\tInterrupts\n";
  v100 = "SCHED_COMBINE_GRENADE_AND_RELOAD";
  v101 = 108;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_GRENADE_AND_RELOAD\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_COMBINE_FACE_TOSS_DIR\t"
              "\t\t0\t\tTASK_ANNOUNCE_ATTACK\t\t\t\t2\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_RANGE_ATTACK2\t\tTASK_C"
              "OMBINE_DEFER_SQUAD_GRENADES\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_HIDE_AND_RELOAD\tInterrupts\n";
  sub_10194990((int *)&Src, v66, &v101);
  v100 = "SCHED_COMBINE_PATROL";
  v101 = 109;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_PATROL\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t900540\t\tTASK_WALK"
              "_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_REASONABLE\t\t"
              "\t0\t\tTASK_WAIT\t\t\t\t\t\t3\t\tTASK_WAIT_RANDOM\t\t\t\t3\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COMB"
              "INE_PATROL\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\t"
              "COND_HEAR_MOVE_AWAY\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK"
              "2\t\tCOND_HEAR_FMRADIO\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_BUGBAIT_DISTRACTION";
  v101 = 110;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_BUGBAIT_DISTRACTION\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_RESET_ACTIVITY\t\t0\t\tTASK_"
              "PLAY_SEQUENCE\t\tACTIVITY:ACT_COMBINE_BUGBAIT\tInterrupts\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_CHARGE_TURRET";
  v101 = 111;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_CHARGE_TURRET\tTasks\t\tTASK_COMBINE_DEFER_SQUAD_GRENADES\t0\t\tTASK_STOP_MOVING\t\t\t\t"
              "\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t\t"
              "300\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\tInte"
              "rrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CA"
              "N_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_BETTER_WEAPON_A"
              "VAILABLE\t\tCOND_HEAR_DANGER\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_CHARGE_PLAYER";
  v101 = 113;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_CHARGE_PLAYER\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCH"
              "EDULE:SCHED_CHASE_ENEMY_FAILED\t\tTASK_COMBINE_CHASE_ENEMY_CONTINUOUSLY\t\t192\t\tTASK_FACE_ENEMY\t\t\t\t\t"
              "\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_CAN_MELEE_ATTACK1\t"
              "\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_HEAR_DANGER\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_DROP_GRENADE";
  v101 = 112;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_DROP_GRENADE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVI"
              "TY:ACT_SPECIAL_ATTACK2\t\tTASK_FIND_COVER_FROM_ENEMY\t\t\t99\t\tTASK_FIND_FAR_NODE_COVER_FROM_ENEMY\t384\t"
              "\tTASK_CLEAR_MOVE_WAIT\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tInterrupts\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_PATROL_ENEMY";
  v101 = 114;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_PATROL_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_WAIT_FACE_ENEMY\t\t\t\t1\t\tT"
              "ASK_WAIT_FACE_ENEMY_RANDOM\t\t\t3\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE"
              "\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t"
              "\tCOND_CAN_RANGE_ATTACK2\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_BURNING_STAND";
  v101 = 115;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_BURNING_STAND\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_COMBINE_BUGBAIT\t\tTASK_RA"
              "NDOMIZE_FRAMERATE\t\t20\t\tTASK_WAIT\t\t\t\t\t\t2\t\tTASK_WAIT_RANDOM\t\t\t\t3\t\tTASK_COMBINE_DIE_INSTANT"
              "LY\t\tDMG_BURN\t\tTASK_WAIT\t\t\t\t\t\t1.0\t\tInterrupts\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_UH_INVESTIGATE_RADIO";
  v101 = 117;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_UH_INVESTIGATE_RADIO\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SENTENCE_HEARDRADIO\t\t0\t\tTAS"
              "K_STORE_LASTPOSITION\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t128\t\tTASK_GET_PATH_TO_TARGET\t\t\t0\t\tTAS"
              "K_FACE_IDEAL\t\t\t\t\t0\t\tTASK_RUN_PATH_WITHIN_DIST\t\t64\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_TARGE"
              "T\t\t\t\t0\t\tTASK_SENTENCE_FOUNDRADIO\t\t0\t\tTASK_WAIT\t\t\t\t\t\t10\t\tTASK_DESTROY_RADIO\t\t\t\t0\t\tT"
              "ASK_GET_PATH_TO_LASTPOSITION\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP"
              "_MOVING\t\t\t\t0\t\tTASK_CLEAR_LASTPOSITION\t\t\t0\t\tTASK_FACE_REASONABLE\t\t\t0\t\tInterrupts\t\tCOND_EN"
              "EMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_NEW_"
              "ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_FACE_IDEAL_YAW";
  v101 = 120;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n\tSchedule\n\t\tSCHED_COMBINE_FACE_IDEAL_YAW\tTasks\t\tTASK_FACE_IDEAL\t\t\t\t0\t\tInterrupts\n";
  sub_10194990((int *)&Src, v98, &v101);
  v100 = "SCHED_COMBINE_MOVE_TO_MELEE";
  v101 = 121;
  sub_10229160(v92, v93, &v100);
  v101 = (int)"\n"
              "\tSchedule\n"
              "\t\tSCHED_COMBINE_MOVE_TO_MELEE\tTasks\t\tTASK_STORE_ENEMY_POSITION_IN_SAVEPOSITION\t0\t\tTASK_GET_PATH_TO"
              "_SAVEPOSITION\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tInterru"
              "pts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_MELEE_ATTACK1\n";
  sub_10194990((int *)&Src, v98, &v101);
  sub_1004BBC0(&dword_106E6548, (int)"CNPC_Combine", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E6594, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v92, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v89, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v86, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v83, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v69 = 0;
  if ( v93 <= 0 )
  {
LABEL_141:
    v71 = 0;
    if ( v90 <= 0 )
    {
LABEL_145:
      v101 = 0;
      if ( v87 > 0 )
      {
        v73 = v86[0];
        do
        {
          v74 = *(const char **)(v73 + 8 * v101);
          if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
          {
            v75 = v101;
            if ( !sub_1007DB90(
                    dword_106E657C,
                    *(_DWORD *)(v73 + 8 * v101),
                    *(_DWORD *)(v73 + 8 * v101 + 4),
                    "condition",
                    off_1066F6E4) )
              goto LABEL_159;
          }
          else
          {
            DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v74);
            v75 = v101;
          }
          v101 = v75 + 1;
        }
        while ( v75 + 1 < v87 );
      }
      v76 = 0;
      if ( v84 <= 0 )
      {
LABEL_155:
        v78 = v98;
        v79 = 0;
        if ( v98 > 0 )
        {
          v80 = byte_1066F6DC;
          do
          {
            if ( !v80 )
              break;
            v80 = sub_100A7A40(&dword_10694898, "CNPC_Combine", *((_DWORD *)Src + v79++), (int)&dword_106E6548);
            byte_1066F6DC = v80;
          }
          while ( v79 < v78 );
        }
      }
      else
      {
        v77 = v83[0];
        while ( sub_1007DB90(
                  dword_106E6594,
                  *(_DWORD *)(v77 + 8 * v76),
                  *(_DWORD *)(v77 + 8 * v76 + 4),
                  "squadslot",
                  off_1066F6E4) )
        {
          if ( ++v76 >= v84 )
            goto LABEL_155;
        }
      }
    }
    else
    {
      v72 = v89[0];
      while ( sub_1007DB90(
                dword_106E6564,
                *(_DWORD *)(v72 + 8 * v71),
                *(_DWORD *)(v72 + 8 * v71 + 4),
                "task",
                off_1066F6E4) )
      {
        if ( ++v71 >= v90 )
          goto LABEL_145;
      }
    }
  }
  else
  {
    v70 = v92[0];
    while ( sub_1007DB90(
              dword_106E654C,
              *(_DWORD *)(v70 + 8 * v69),
              *(_DWORD *)(v70 + 8 * v69 + 4),
              "schedule",
              off_1066F6E4) )
    {
      if ( ++v69 >= v93 )
        goto LABEL_141;
    }
  }
LABEL_159:
  sub_102375F0(v83);
  sub_102375F0(v86);
  sub_102375F0(v89);
  sub_102375F0(v92);
  sub_102375F0(v82);
  return sub_102375F0((int *)&Src);
}
