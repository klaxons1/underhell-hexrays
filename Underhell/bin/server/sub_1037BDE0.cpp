int sub_1037BDE0()
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
  v96 = "TASK_HUNTER_AIM";
  v97 = 150;
  sub_10229160(v85, 0, &v96);
  v96 = "TASK_HUNTER_FIND_DODGE_POSITION";
  v97 = 151;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_DODGE";
  v97 = 152;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_PRE_RANGE_ATTACK2";
  v97 = 153;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_SHOOT_COMMIT";
  v97 = 154;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_ANNOUNCE_FLANK";
  v97 = 156;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_BEGIN_FLANK";
  v97 = 155;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_STAGGER";
  v97 = 157;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_CORNERED_TIMER";
  v97 = 158;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_FIND_SIDESTEP_POSITION";
  v97 = 159;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_CHARGE";
  v97 = 160;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_FINISH_RANGE_ATTACK";
  v97 = 162;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_WAIT_FOR_MOVEMENT_FACING_ENEMY";
  v97 = 163;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_HUNTER_CHARGE_DELAY";
  v97 = 161;
  sub_10229160(v85, v86, &v96);
  dword_106E8504 = sub_100032E0((int)"ACT_HUNTER_DEPLOYRA2");
  sub_10008F60((int)"ACT_HUNTER_DEPLOYRA2", dword_106E8504);
  dword_106E8500 = sub_100032E0((int)"ACT_HUNTER_DODGER");
  sub_10008F60((int)"ACT_HUNTER_DODGER", dword_106E8500);
  dword_106E84FC = sub_100032E0((int)"ACT_HUNTER_DODGEL");
  sub_10008F60((int)"ACT_HUNTER_DODGEL", dword_106E84FC);
  dword_106E84F8 = sub_100032E0((int)"ACT_HUNTER_GESTURE_SHOOT");
  sub_10008F60((int)"ACT_HUNTER_GESTURE_SHOOT", dword_106E84F8);
  dword_106E84F4 = sub_100032E0((int)"ACT_HUNTER_FLINCH_STICKYBOMB");
  sub_10008F60((int)"ACT_HUNTER_FLINCH_STICKYBOMB", dword_106E84F4);
  dword_106E84F0 = sub_100032E0((int)"ACT_HUNTER_STAGGER");
  sub_10008F60((int)"ACT_HUNTER_STAGGER", dword_106E84F0);
  dword_106E84E8 = sub_100032E0((int)"ACT_DI_HUNTER_MELEE");
  sub_10008F60((int)"ACT_DI_HUNTER_MELEE", dword_106E84E8);
  dword_106E84E4 = sub_100032E0((int)"ACT_DI_HUNTER_THROW");
  sub_10008F60((int)"ACT_DI_HUNTER_THROW", dword_106E84E4);
  dword_106E84EC = sub_100032E0((int)"ACT_HUNTER_MELEE_ATTACK1_VS_PLAYER");
  sub_10008F60((int)"ACT_HUNTER_MELEE_ATTACK1_VS_PLAYER", dword_106E84EC);
  dword_106E84E0 = sub_100032E0((int)"ACT_HUNTER_ANGRY");
  sub_10008F60((int)"ACT_HUNTER_ANGRY", dword_106E84E0);
  dword_106E84DC = sub_100032E0((int)"ACT_HUNTER_WALK_ANGRY");
  sub_10008F60((int)"ACT_HUNTER_WALK_ANGRY", dword_106E84DC);
  dword_106E84D8 = sub_100032E0((int)"ACT_HUNTER_FOUND_ENEMY");
  sub_10008F60((int)"ACT_HUNTER_FOUND_ENEMY", dword_106E84D8);
  dword_106E84D4 = sub_100032E0((int)"ACT_HUNTER_FOUND_ENEMY_ACK");
  sub_10008F60((int)"ACT_HUNTER_FOUND_ENEMY_ACK", dword_106E84D4);
  dword_106E84D0 = sub_100032E0((int)"ACT_HUNTER_CHARGE_START");
  sub_10008F60((int)"ACT_HUNTER_CHARGE_START", dword_106E84D0);
  dword_106E84CC = sub_100032E0((int)"ACT_HUNTER_CHARGE_RUN");
  sub_10008F60((int)"ACT_HUNTER_CHARGE_RUN", dword_106E84CC);
  dword_106E84C8 = sub_100032E0((int)"ACT_HUNTER_CHARGE_STOP");
  sub_10008F60((int)"ACT_HUNTER_CHARGE_STOP", dword_106E84C8);
  dword_106E84C4 = sub_100032E0((int)"ACT_HUNTER_CHARGE_CRASH");
  sub_10008F60((int)"ACT_HUNTER_CHARGE_CRASH", dword_106E84C4);
  dword_106E84C0 = sub_100032E0((int)"ACT_HUNTER_CHARGE_HIT");
  sub_10008F60((int)"ACT_HUNTER_CHARGE_HIT", dword_106E84C0);
  dword_106E84BC = sub_100032E0((int)"ACT_HUNTER_RANGE_ATTACK2_UNPLANTED");
  sub_10008F60((int)"ACT_HUNTER_RANGE_ATTACK2_UNPLANTED", dword_106E84BC);
  dword_106E84B8 = sub_100032E0((int)"ACT_HUNTER_IDLE_PLANTED");
  sub_10008F60((int)"ACT_HUNTER_IDLE_PLANTED", dword_106E84B8);
  dword_106E84B4 = sub_100032E0((int)"ACT_HUNTER_FLINCH_N");
  sub_10008F60((int)"ACT_HUNTER_FLINCH_N", dword_106E84B4);
  dword_106E84B0 = sub_100032E0((int)"ACT_HUNTER_FLINCH_S");
  sub_10008F60((int)"ACT_HUNTER_FLINCH_S", dword_106E84B0);
  dword_106E84AC = sub_100032E0((int)"ACT_HUNTER_FLINCH_E");
  sub_10008F60((int)"ACT_HUNTER_FLINCH_E", dword_106E84AC);
  dword_106E84A8 = sub_100032E0((int)"ACT_HUNTER_FLINCH_W");
  sub_10008F60((int)"ACT_HUNTER_FLINCH_W", dword_106E84A8);
  dword_106E8544 = sub_100C7680();
  v96 = "SQUAD_SLOT_HUNTER_CHARGE";
  v97 = 8;
  sub_10229160(v79, 0, &v96);
  v96 = "SQUAD_SLOT_HUNTER_FLANK_FIRST";
  v97 = 9;
  sub_10229160(v79, v80, &v96);
  v96 = "SQUAD_SLOT_RUN_SHOOT";
  v97 = 10;
  sub_10229160(v79, v80, &v96);
  v96 = "COND_HUNTER_SHOULD_PATROL";
  v97 = 73;
  sub_10229160(v82, 0, &v96);
  v96 = "COND_HUNTER_FORCED_FLANK_ENEMY";
  v97 = 74;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_CAN_CHARGE_ENEMY";
  v97 = 76;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_STAGGERED";
  v97 = 78;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_IS_INDOORS";
  v97 = 79;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_HIT_BY_STICKYBOMB";
  v97 = 77;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_SEE_STRIDERBUSTER";
  v97 = 80;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_FORCED_DODGE";
  v97 = 75;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_INCOMING_VEHICLE";
  v97 = 81;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_NEW_HINTGROUP";
  v97 = 82;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_CANT_PLANT";
  v97 = 83;
  sub_10229160(v82, v83, &v96);
  v96 = "COND_HUNTER_SQUADMATE_FOUND_ENEMY";
  v97 = 84;
  sub_10229160(v82, v83, &v96);
  dword_106E8540 = sub_1013BF10((int)"AE_HUNTER_FOOTSTEP_LEFT");
  sub_1006AFD0((int)"AE_HUNTER_FOOTSTEP_LEFT", dword_106E8540);
  dword_106E853C = sub_1013BF10((int)"AE_HUNTER_FOOTSTEP_RIGHT");
  sub_1006AFD0((int)"AE_HUNTER_FOOTSTEP_RIGHT", dword_106E853C);
  dword_106E8538 = sub_1013BF10((int)"AE_HUNTER_FOOTSTEP_BACK");
  sub_1006AFD0((int)"AE_HUNTER_FOOTSTEP_BACK", dword_106E8538);
  dword_106E8534 = sub_1013BF10((int)"AE_HUNTER_MELEE_ANNOUNCE");
  sub_1006AFD0((int)"AE_HUNTER_MELEE_ANNOUNCE", dword_106E8534);
  dword_106E8530 = sub_1013BF10((int)"AE_HUNTER_MELEE_ATTACK_LEFT");
  sub_1006AFD0((int)"AE_HUNTER_MELEE_ATTACK_LEFT", dword_106E8530);
  dword_106E852C = sub_1013BF10((int)"AE_HUNTER_MELEE_ATTACK_RIGHT");
  sub_1006AFD0((int)"AE_HUNTER_MELEE_ATTACK_RIGHT", dword_106E852C);
  dword_106E8528 = sub_1013BF10((int)"AE_HUNTER_DIE");
  sub_1006AFD0((int)"AE_HUNTER_DIE", dword_106E8528);
  dword_106E8524 = sub_1013BF10((int)"AE_HUNTER_SPRAY_BLOOD");
  sub_1006AFD0((int)"AE_HUNTER_SPRAY_BLOOD", dword_106E8524);
  dword_106E8520 = sub_1013BF10((int)"AE_HUNTER_START_EXPRESSION");
  sub_1006AFD0((int)"AE_HUNTER_START_EXPRESSION", dword_106E8520);
  dword_106E851C = sub_1013BF10((int)"AE_HUNTER_END_EXPRESSION");
  sub_1006AFD0((int)"AE_HUNTER_END_EXPRESSION", dword_106E851C);
  v96 = "SCHED_HUNTER_RANGE_ATTACK1";
  v97 = 88;
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
          "\t\tSCHED_HUNTER_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_HUNTER_SHOOT_COMMIT\t\t\t0\t\tTAS"
          "K_RANGE_ATTACK1\t\t\t\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_LOST_ENEMY\t\tCOND_ENEMY"
          "_OCCLUDED\t\tCOND_WEAPON_SIGHT_OCCLUDED\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TOO_FAR_TO_ATTACK\t\tCOND_NOT_FACING_ATTACK\n";
  v96 = "SCHED_HUNTER_RANGE_ATTACK2";
  v97 = 89;
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
          "\t\tSCHED_HUNTER_RANGE_ATTACK2\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_HUNTER_PRE_RANGE_ATTACK2\t0\t\tTASK"
          "_HUNTER_SHOOT_COMMIT\t\t0\t\tTASK_RANGE_ATTACK2\t\t\t\t0\t\tTASK_HUNTER_FINISH_RANGE_ATTACK\t0\t\tTASK_SET_ACT"
          "IVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT        \t\t\t\t0.4\t\tTASK_WAIT_RANDOM\t\t\t\t0.2\t\tInterrupts\t\t"
          "COND_NEW_ENEMY\n";
  v96 = "SCHED_HUNTER_RANGE_ATTACK2_VS_STRIDERBUSTER";
  v97 = 110;
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
          "\t\tSCHED_HUNTER_RANGE_ATTACK2_VS_STRIDERBUSTER\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_HUNTER_SHOOT_COMMI"
          "T\t\t0\t\tTASK_RANGE_ATTACK2\t\t\t\t0\t\tInterrupts\n";
  v96 = "SCHED_HUNTER_RANGE_ATTACK2_VS_STRIDERBUSTER_LATENT";
  v97 = 111;
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
           "\t\tSCHED_HUNTER_RANGE_ATTACK2_VS_STRIDERBUSTER_LATENT\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_HUNTER_SHO"
           "OT_COMMIT\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.2\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_RANGE_ATTACK2\t\tTA"
           "SK_RANGE_ATTACK2\t\t\t\t0\t\tInterrupts\n";
  v96 = "SCHED_HUNTER_DODGE";
  v97 = 91;
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
           "\t\tSCHED_HUNTER_DODGE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_FAIL_DODGE\t\tTASK_HUNTER_"
           "FIND_DODGE_POSITION\t\t\t0\t\tTASK_HUNTER_DODGE\t\t\t\t\t\t0\tInterrupts\n";
  v96 = "SCHED_HUNTER_FAIL_DODGE";
  v97 = 114;
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
           "\t\tSCHED_HUNTER_FAIL_DODGE\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tTASK"
           "_FACE_ENEMY\t\t\t0\tInterrupts\n";
  v96 = "SCHED_HUNTER_CHARGE_ENEMY";
  v97 = 106;
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
           "\t\tSCHED_HUNTER_CHARGE_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_FAIL_CHARGE_ENEMY\t"
           "\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_HUNTER_CHARGE\t\t\t\t0\tInterrupts\t\tCOND_"
           "TASK_FAILED\t\tCOND_ENEMY_DEAD\n";
  v96 = "SCHED_HUNTER_FAIL_CHARGE_ENEMY";
  v97 = 107;
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
    *v23 = "\n\tSchedule\n\t\tSCHED_HUNTER_FAIL_CHARGE_ENEMY\tTasks\t\tTASK_HUNTER_CHARGE_DELAY\t\t10\n";
  v96 = "SCHED_HUNTER_CHASE_ENEMY_MELEE";
  v97 = 93;
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
           "\t\tSCHED_HUNTER_CHASE_ENEMY_MELEE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ESTABLISH_LINE_OF_FIR"
           "E\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t300\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_"
           "FOR_MOVEMENT\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_EN"
           "EMY_UNREACHABLE\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_LOST_ENEMY\n";
  v96 = "SCHED_HUNTER_CHASE_ENEMY";
  v97 = 92;
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
           "\t\tSCHED_HUNTER_CHASE_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ESTABLISH_LINE_OF_FIRE\t\tT"
           "ASK_STOP_MOVING\t\t\t\t0\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t300\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MO"
           "VEMENT\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UN"
           "REACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATT"
           "ACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_LOST_ENEMY\n";
  v96 = "SCHED_HUNTER_FLANK_ENEMY";
  v97 = 95;
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
           "\t\tSCHED_HUNTER_FLANK_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_ESTABLISH_LINE_OF_FIRE\t"
           "\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_HUNTER_BEGIN_FLANK\t\t\t\t\t0\t\tTASK_GET_FLANK_ARC_PATH_TO_ENEMY_LOS"
           "\t30\t\tTASK_HUNTER_ANNOUNCE_FLANK\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t"
           "\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MEL"
           "EE_ATTACK2\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_LOST_ENEMY\n";
  v96 = "SCHED_HUNTER_COMBAT_FACE";
  v97 = 94;
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
           "\t\tSCHED_HUNTER_COMBAT_FACE\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tTAS"
           "K_WAIT_FACE_ENEMY\t1\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK"
           "1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\n";
  v96 = "SCHED_HUNTER_MELEE_ATTACK1";
  v97 = 90;
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
           "\t\tSCHED_HUNTER_MELEE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_MELEE_ATTACK"
           "1\t\t0\tInterrupts\n";
  v96 = "SCHED_HUNTER_CHANGE_POSITION";
  v97 = 96;
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
           "\t\tSCHED_HUNTER_CHANGE_POSITION\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t720432\t\tTASK"
           "_RUN_PATH\t\t\t\t\t0\t\tTASK_HUNTER_WAIT_FOR_MOVEMENT_FACING_ENEMY\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SE"
           "T_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HUNTER_CHANGE_POSITION_FINISH\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_MEL"
           "EE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_NEW_ENEMY\n";
  v96 = "SCHED_HUNTER_CHANGE_POSITION_FINISH";
  v97 = 97;
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
           "\t\tSCHED_HUNTER_CHANGE_POSITION_FINISH\tTasks\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_WAIT_FACE_ENEMY_RANDOM\t"
           "\t5\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTA"
           "CK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_NEW_ENEMY\n";
  v96 = "SCHED_HUNTER_SIDESTEP";
  v97 = 98;
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
           "\t\tSCHED_HUNTER_SIDESTEP\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_FAIL_IMMEDIATE\t\tTASK_"
           "STOP_MOVING\t\t\t\t\t\t0\t\tTASK_HUNTER_FIND_SIDESTEP_POSITION\t\t0\t\tTASK_GET_PATH_TO_SAVEPOSITION\t\t\t0\t"
           "\tTASK_RUN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t\t0\tInterrupts\n";
  v96 = "SCHED_HUNTER_PATROL";
  v97 = 99;
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
           "\t\tSCHED_HUNTER_PATROL\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t720432\t\tTASK_WALK_PAT"
           "H\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_REASONABLE\t\t\t0\t\t"
           "TASK_WAIT_RANDOM\t\t\t\t3\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HE"
           "AR_DANGER\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_PLAYER\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_N"
           "EW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK1\t\tC"
           "OND_CAN_MELEE_ATTACK2\n";
  v96 = "SCHED_HUNTER_STAGGER";
  v97 = 101;
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
    *v53 = "\n\tSchedule\n\t\tSCHED_HUNTER_STAGGER\tTasks\t\tTASK_HUNTER_STAGGER\t\t\t0\tInterrupts\n";
  v96 = "SCHED_HUNTER_PATROL_RUN";
  v97 = 102;
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
           "\t\tSCHED_HUNTER_PATROL_RUN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_COMBAT_FACE\t\tTASK_SET_ROUT"
           "E_SEARCH_TIME\t\t5\t\tTASK_GET_PATH_TO_RANDOM_NODE\t200\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT"
           "\t\t\t0\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1 \t\tCOND_CAN_RANGE_ATTACK2 \t\tCOND_CAN_MELEE_ATTACK1 \t\tCOND_"
           "CAN_MELEE_ATTACK2\t\tCOND_GIVE_WAY\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_PLA"
           "YER\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v96 = "SCHED_HUNTER_TAKE_COVER_FROM_ENEMY";
  v97 = 103;
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
           "\t\tSCHED_HUNTER_TAKE_COVER_FROM_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_CHASE_ENEM"
           "Y_MELEE\t\tTASK_HUNTER_CORNERED_TIMER\t\t10.0\t\tTASK_WAIT\t\t\t\t\t\t0.0\t\tTASK_FIND_FAR_NODE_COVER_FROM_EN"
           "EMY 200.0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_HUNTER_CORNERED_TIMER\t\t0.0\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCH"
           "EDULE:SCHED_HUNTER_FAIL_IMMEDIATE\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_REMEMBER\t\t\t\t\tMEMORY:INCOVER\t"
           "\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HUNTER_HIDE_UNDER_COVER\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\n";
  v96 = "SCHED_HUNTER_HIDE_UNDER_COVER";
  v97 = 104;
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
           "\t\tSCHED_HUNTER_HIDE_UNDER_COVER\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_FAIL_IMMEDIATE\t"
           "\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t1\tInterru"
           "pts\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\t\tCOND_HAVE_ENEMY_LOS\n";
  v96 = "SCHED_HUNTER_FOUND_ENEMY";
  v97 = 108;
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
           "\t\tSCHED_HUNTER_FOUND_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_PLAY_S"
           "EQUENCE_FACE_ENEMY\tACTIVITY:ACT_HUNTER_FOUND_ENEMY\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v96 = "SCHED_HUNTER_FOUND_ENEMY_ACK";
  v97 = 109;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_HUNTER_FOUND_ENEMY_ACK\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT_RANDOM\t\t\t\t0.75\t\tTAS"
             "K_FACE_ENEMY\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_HUNTER_FOUND_ENEMY_ACK\tInterrupts\t"
             "\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  sub_10194990((int *)&Src, v63, &v97);
  v96 = "SCHED_HUNTER_FAIL_IMMEDIATE";
  v97 = 105;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n\tSchedule\n\t\tSCHED_HUNTER_FAIL_IMMEDIATE\tTasks\t\tTASK_WAIT\t\t\t0\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_HUNTER_GOTO_HINT";
  v97 = 112;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_HUNTER_GOTO_HINT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HUNTER_CLEAR_HINTNODE\t\tTA"
             "SK_GET_PATH_TO_HINTNODE\t\t1\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_CLEAR_HINTNODE\t\t\t\t0\tInterrupts\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_HUNTER_CLEAR_HINTNODE";
  v97 = 113;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n\tSchedule\n\t\tSCHED_HUNTER_CLEAR_HINTNODE\tTasks\t\tTASK_CLEAR_HINTNODE\t\t\t\t0\tInterrupts\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_HUNTER_SIEGE_STAND";
  v97 = 115;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_HUNTER_SIEGE_STAND\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_I"
             "DLE\t\tTASK_FACE_PLAYER\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t10\t\tTASK_WAIT_RANDOM\t\t\t\t2\t\tTASK_SET_SCHEDU"
             "LE\t\t\t\tSCHEDULE:SCHED_HUNTER_CHANGE_POSITION_SIEGE\tInterrupts\t\tCOND_SEE_PLAYER\t\tCOND_NEW_ENEMY\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  v96 = "SCHED_HUNTER_CHANGE_POSITION_SIEGE";
  v97 = 116;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_HUNTER_CHANGE_POSITION_SIEGE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t240048"
             "0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACT"
             "IVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FACE_PLAYER\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\n";
  sub_10194990((int *)&Src, (int)v94, &v97);
  sub_1004BBC0(&dword_106E95B0, (int)"CNPC_Hunter", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E95FC, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v88, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v85, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v82, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v79, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
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
                    dword_106E95E4,
                    *(_DWORD *)(v71 + 8 * v70),
                    *(_DWORD *)(v71 + 8 * v70 + 4),
                    "condition",
                    off_1067431C) )
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
          v76 = byte_10674314;
          do
          {
            if ( !v76 )
              break;
            v76 = sub_100A7A40(&dword_10694898, "CNPC_Hunter", *((_DWORD *)Src + v75++), (int)&dword_106E95B0);
            byte_10674314 = v76;
          }
          while ( v75 < v74 );
        }
      }
      else
      {
        v73 = v79[0];
        while ( sub_1007DB90(
                  dword_106E95FC,
                  *(_DWORD *)(v73 + 8 * v72),
                  *(_DWORD *)(v73 + 8 * v72 + 4),
                  "squadslot",
                  off_1067431C) )
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
                dword_106E95CC,
                *(_DWORD *)(v69 + 8 * v68),
                *(_DWORD *)(v69 + 8 * v68 + 4),
                "task",
                off_1067431C) )
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
              dword_106E95B4,
              *(_DWORD *)(v67 + 8 * v66),
              *(_DWORD *)(v67 + 8 * v66 + 4),
              "schedule",
              off_1067431C) )
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
