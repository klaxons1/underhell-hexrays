char sub_1032FC20()
{
  int v0; // esi
  _DWORD *v1; // edi
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
  char result; // al
  char v37; // al
  int v38[5]; // [esp+Ch] [ebp-84h] BYREF
  int v39[5]; // [esp+20h] [ebp-70h] BYREF
  int v40[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v41; // [esp+3Ch] [ebp-54h]
  int v42; // [esp+40h] [ebp-50h]
  int v43; // [esp+44h] [ebp-4Ch]
  int v44[2]; // [esp+48h] [ebp-48h] BYREF
  int v45; // [esp+50h] [ebp-40h]
  int v46; // [esp+54h] [ebp-3Ch]
  int v47; // [esp+58h] [ebp-38h]
  int v48[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v49; // [esp+64h] [ebp-2Ch]
  int v50; // [esp+68h] [ebp-28h]
  int v51; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v53; // [esp+74h] [ebp-1Ch]
  int v54; // [esp+78h] [ebp-18h]
  int v55; // [esp+7Ch] [ebp-14h]
  void *v56; // [esp+80h] [ebp-10h]
  const char *v57; // [esp+84h] [ebp-Ch] BYREF
  int v58; // [esp+88h] [ebp-8h]
  int v59; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  memset(v38, 0, sizeof(v38));
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
  memset(v39, 0, sizeof(v39));
  v57 = "TASK_ZOMBIE_DELAY_SWAT";
  v58 = 150;
  sub_10229160(v44, 0, &v57);
  v57 = "TASK_ZOMBIE_SWAT_ITEM";
  v58 = 152;
  sub_10229160(v44, v46, &v57);
  v57 = "TASK_ZOMBIE_GET_PATH_TO_PHYSOBJ";
  v58 = 151;
  sub_10229160(v44, v46, &v57);
  v57 = "TASK_ZOMBIE_DIE";
  v58 = 153;
  sub_10229160(v44, v46, &v57);
  v57 = "TASK_ZOMBIE_RELEASE_HEADCRAB";
  v58 = 154;
  sub_10229160(v44, v46, &v57);
  v57 = "TASK_ZOMBIE_WAIT_POST_MELEE";
  v58 = 155;
  sub_10229160(v44, v46, &v57);
  dword_106E5704 = sub_100032E0((int)"ACT_ZOM_SWATLEFTMID");
  sub_10008F60((int)"ACT_ZOM_SWATLEFTMID", dword_106E5704);
  dword_106E5700 = sub_100032E0((int)"ACT_ZOM_SWATRIGHTMID");
  sub_10008F60((int)"ACT_ZOM_SWATRIGHTMID", dword_106E5700);
  dword_106E56FC = sub_100032E0((int)"ACT_ZOM_SWATLEFTLOW");
  sub_10008F60((int)"ACT_ZOM_SWATLEFTLOW", dword_106E56FC);
  dword_106E56F8 = sub_100032E0((int)"ACT_ZOM_SWATRIGHTLOW");
  sub_10008F60((int)"ACT_ZOM_SWATRIGHTLOW", dword_106E56F8);
  dword_106E56F4 = sub_100032E0((int)"ACT_ZOM_RELEASECRAB");
  sub_10008F60((int)"ACT_ZOM_RELEASECRAB", dword_106E56F4);
  dword_106E56F0 = sub_100032E0((int)"ACT_ZOM_FALL");
  sub_10008F60((int)"ACT_ZOM_FALL", dword_106E56F0);
  v57 = "COND_ZOMBIE_CAN_SWAT_ATTACK";
  v58 = 73;
  sub_10229160(v40, 0, &v57);
  v57 = "COND_ZOMBIE_RELEASECRAB";
  v58 = 74;
  sub_10229160(v40, v42, &v57);
  v57 = "COND_ZOMBIE_LOCAL_MELEE_OBSTRUCTION";
  v58 = 75;
  sub_10229160(v40, v42, &v57);
  dword_106E56EC = sub_1013BF10((int)"AE_ZOMBIE_ATTACK_RIGHT");
  sub_1006AFD0((int)"AE_ZOMBIE_ATTACK_RIGHT", dword_106E56EC);
  dword_106E56E8 = sub_1013BF10((int)"AE_ZOMBIE_ATTACK_LEFT");
  sub_1006AFD0((int)"AE_ZOMBIE_ATTACK_LEFT", dword_106E56E8);
  dword_106E56E4 = sub_1013BF10((int)"AE_ZOMBIE_ATTACK_BOTH");
  sub_1006AFD0((int)"AE_ZOMBIE_ATTACK_BOTH", dword_106E56E4);
  dword_106E56E0 = sub_1013BF10((int)"AE_ZOMBIE_SWATITEM");
  sub_1006AFD0((int)"AE_ZOMBIE_SWATITEM", dword_106E56E0);
  dword_106E56DC = sub_1013BF10((int)"AE_ZOMBIE_STARTSWAT");
  sub_1006AFD0((int)"AE_ZOMBIE_STARTSWAT", dword_106E56DC);
  dword_106E56D8 = sub_1013BF10((int)"AE_ZOMBIE_STEP_LEFT");
  sub_1006AFD0((int)"AE_ZOMBIE_STEP_LEFT", dword_106E56D8);
  dword_106E56D4 = sub_1013BF10((int)"AE_ZOMBIE_STEP_RIGHT");
  sub_1006AFD0((int)"AE_ZOMBIE_STEP_RIGHT", dword_106E56D4);
  dword_106E56D0 = sub_1013BF10((int)"AE_ZOMBIE_SCUFF_LEFT");
  sub_1006AFD0((int)"AE_ZOMBIE_SCUFF_LEFT", dword_106E56D0);
  dword_106E56CC = sub_1013BF10((int)"AE_ZOMBIE_SCUFF_RIGHT");
  sub_1006AFD0((int)"AE_ZOMBIE_SCUFF_RIGHT", dword_106E56CC);
  dword_106E56C8 = sub_1013BF10((int)"AE_ZOMBIE_ATTACK_SCREAM");
  sub_1006AFD0((int)"AE_ZOMBIE_ATTACK_SCREAM", dword_106E56C8);
  dword_106E56C4 = sub_1013BF10((int)"AE_ZOMBIE_GET_UP");
  sub_1006AFD0((int)"AE_ZOMBIE_GET_UP", dword_106E56C4);
  dword_106E56C0 = sub_1013BF10((int)"AE_ZOMBIE_POUND");
  sub_1006AFD0((int)"AE_ZOMBIE_POUND", dword_106E56C0);
  dword_106E56BC = sub_1013BF10((int)"AE_ZOMBIE_ALERTSOUND");
  sub_1006AFD0((int)"AE_ZOMBIE_ALERTSOUND", dword_106E56BC);
  dword_106E56B8 = sub_1013BF10((int)"AE_ZOMBIE_POPHEADCRAB");
  sub_1006AFD0((int)"AE_ZOMBIE_POPHEADCRAB", dword_106E56B8);
  dword_106E5708 = sub_100C7680();
  v57 = "SCHED_ZOMBIE_MOVE_SWATITEM";
  v58 = 89;
  sub_10229160(v48, 0, &v57);
  sub_102ABFC0(&Src, 1);
  v0 = v55 + 1;
  v1 = Src;
  v2 = v55++;
  v56 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_MOVE_SWATITEM\tTasks\t\tTASK_ZOMBIE_DELAY_SWAT\t\t\t3\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE"
          ":SCHED_CHASE_ENEMY\t\tTASK_ZOMBIE_GET_PATH_TO_PHYSOBJ\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMEN"
          "T\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_ZOMBIE_SWAT_ITEM\t\t\t0\t\tInterrupts\t\tCOND_ZOMBIE_RELEASECRA"
          "B\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\n";
  v57 = "SCHED_ZOMBIE_SWATITEM";
  v58 = 90;
  sub_10229160(v48, v50, &v57);
  v59 = v0;
  if ( v0 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v0 - v53 + 1);
    v0 = v55;
    v1 = Src;
  }
  v3 = v0 + 1;
  v55 = v3;
  v4 = v3 - v59 - 1;
  v56 = v1;
  if ( v4 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v4);
  v5 = &v1[v59];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_SWATITEM\tTasks\t\tTASK_ZOMBIE_DELAY_SWAT\t\t\t3\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHE"
          "D_CHASE_ENEMY\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_ZOMBIE_SWAT_ITEM\t\t\t0\t\tInterrupts\t\tCOND_ZOMBIE_RELEA"
          "SECRAB\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\n";
  v57 = "SCHED_ZOMBIE_ATTACKITEM";
  v58 = 91;
  sub_10229160(v48, v50, &v57);
  v59 = v3;
  if ( v3 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v3 - v53 + 1);
    v3 = v55;
    v1 = Src;
  }
  v6 = v3 + 1;
  v55 = v6;
  v7 = v6 - v59 - 1;
  v56 = v1;
  if ( v7 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v7);
  v8 = &v1[v59];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_ATTACKITEM\tTasks\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_MELEE_ATTACK1\t\t\t\t0\t\tInterrupts\t"
          "\tCOND_ZOMBIE_RELEASECRAB\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\n";
  v57 = "SCHED_ZOMBIE_CHASE_ENEMY";
  v58 = 88;
  sub_10229160(v48, v50, &v57);
  v59 = v6;
  if ( v6 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v6 - v53 + 1);
    v6 = v55;
    v1 = Src;
  }
  v9 = v6 + 1;
  v55 = v9;
  v10 = v9 - v59 - 1;
  v56 = v1;
  if ( v10 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v10);
  v11 = &v1[v59];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_CHASE_ENEMY\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\t TAS"
           "K_SET_TOLERANCE_DISTANCE\t24\t\t TASK_GET_CHASE_PATH_TO_ENEMY\t600\t\t TASK_RUN_PATH\t\t\t\t\t0\t\t TASK_WAIT"
           "_FOR_MOVEMENT\t\t\t0\t\t TASK_FACE_ENEMY\t\t\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_"
           "ENEMY_UNREACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_M"
           "ELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_ZOMBIE_CAN_SWAT_ATTACK\t\tCOND_ZOMBIE_RE"
           "LEASECRAB\t\tCOND_HEAVY_DAMAGE\n";
  v57 = "SCHED_ZOMBIE_RELEASECRAB";
  v58 = 92;
  sub_10229160(v48, v50, &v57);
  v59 = v9;
  if ( v9 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v9 - v53 + 1);
    v9 = v55;
    v1 = Src;
  }
  v12 = v9 + 1;
  v55 = v12;
  v13 = v12 - v59 - 1;
  v56 = v1;
  if ( v13 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v13);
  v14 = &v1[v59];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_RELEASECRAB\tTasks\t\tTASK_PLAY_PRIVATE_SEQUENCE_FACE_ENEMY\t\tACTIVITY:ACT_ZOM_RELEASECRAB\t"
           "\tTASK_ZOMBIE_RELEASE_HEADCRAB\t\t\t\t0\t\tTASK_ZOMBIE_DIE\t\t\t\t\t\t\t\t0\t\tInterrupts\t\tCOND_TASK_FAILED\n";
  v57 = "SCHED_ZOMBIE_MOVE_TO_AMBUSH";
  v58 = 93;
  sub_10229160(v48, v50, &v57);
  v59 = v12;
  if ( v12 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v12 - v53 + 1);
    v12 = v55;
    v1 = Src;
  }
  v15 = v12 + 1;
  v55 = v15;
  v16 = v15 - v59 - 1;
  v56 = v1;
  if ( v16 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v16);
  v17 = &v1[v59];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_MOVE_TO_AMBUSH\tTasks\t\tTASK_WAIT\t\t\t\t\t\t1.0\t\tTASK_FIND_COVER_FROM_ENEMY\t\t0\t\tTASK"
           "_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_TURN_LEFT\t\t\t\t"
           "\t180\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ZOMBIE_WAIT_AMBUSH\t\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\n";
  v57 = "SCHED_ZOMBIE_WAIT_AMBUSH";
  v58 = 94;
  sub_10229160(v48, v50, &v57);
  v59 = v15;
  if ( v15 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v15 - v53 + 1);
    v15 = v55;
    v1 = Src;
  }
  v18 = v15 + 1;
  v55 = v18;
  v19 = v18 - v59 - 1;
  v56 = v1;
  if ( v19 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v19);
  v20 = &v1[v59];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_WAIT_AMBUSH\tTasks\t\tTASK_WAIT_FACE_ENEMY\t99999\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\n";
  v57 = "SCHED_ZOMBIE_WANDER_MEDIUM";
  v58 = 95;
  sub_10229160(v48, v50, &v57);
  v59 = v18;
  if ( v18 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v18 - v53 + 1);
    v18 = v55;
    v1 = Src;
  }
  v21 = v18 + 1;
  v55 = v21;
  v22 = v21 - v59 - 1;
  v56 = v1;
  if ( v22 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v22);
  v23 = &v1[v59];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_WANDER_MEDIUM\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t480384\t\tTASK_W"
           "ALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT_PVS\t\t\t\t\t0"
           "\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ZOMBIE_WANDER_MEDIUM\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_"
           "ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v57 = "SCHED_ZOMBIE_WANDER_STANDOFF";
  v58 = 97;
  sub_10229160(v48, v50, &v57);
  v59 = v21;
  if ( v21 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v21 - v53 + 1);
    v21 = v55;
    v1 = Src;
  }
  v24 = v21 + 1;
  v55 = v24;
  v25 = v24 - v59 - 1;
  v56 = v1;
  if ( v25 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v25);
  v26 = &v1[v59];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_WANDER_STANDOFF\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WANDER\t\t\t\t\t\t480384\t\tTASK"
           "_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT_PVS\t\t\t\t\t"
           "0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_RA"
           "NGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_ZOMBIE_RELEASECRAB\n";
  v57 = "SCHED_ZOMBIE_WANDER_FAIL";
  v58 = 96;
  sub_10229160(v48, v50, &v57);
  v59 = v24;
  if ( v24 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v24 - v53 + 1);
    v24 = v55;
    v1 = Src;
  }
  v27 = v24 + 1;
  v55 = v27;
  v28 = v27 - v59 - 1;
  v56 = v1;
  if ( v28 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v28);
  v29 = &v1[v59];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_WANDER_FAIL\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_WAIT\t\t\t\t1\t\tTASK_SET_SCHEDULE\t\tSC"
           "HEDULE:SCHED_ZOMBIE_WANDER_MEDIUM\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\t"
           "COND_ENEMY_DEAD\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MEL"
           "EE_ATTACK2\t\tCOND_ZOMBIE_RELEASECRAB\n";
  v57 = "SCHED_ZOMBIE_MELEE_ATTACK1";
  v58 = 98;
  sub_10229160(v48, v50, &v57);
  v59 = v27;
  if ( v27 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v27 - v53 + 1);
    v27 = v55;
    v1 = Src;
  }
  v30 = v27 + 1;
  v55 = v30;
  v31 = v30 - v59 - 1;
  v56 = v1;
  if ( v31 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v31);
  v32 = &v1[v59];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_MELEE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUNCE_ATT"
           "ACK\t1\t\tTASK_MELEE_ATTACK1\t\t0\t\tTASK_SET_SCHEDULE\t\tSCHEDULE:SCHED_ZOMBIE_POST_MELEE_WAIT\tInterrupts\t"
           "\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v57 = "SCHED_ZOMBIE_POST_MELEE_WAIT";
  v58 = 99;
  sub_10229160(v48, v50, &v57);
  v59 = v30;
  if ( v30 + 1 > v53 )
  {
    sub_102ABFC0(&Src, v30 - v53 + 1);
    v30 = v55;
    v1 = Src;
  }
  v33 = v30 + 1;
  v55 = v33;
  v34 = v33 - v59 - 1;
  v56 = v1;
  if ( v34 > 0 )
    memcpy(&v1[v59 + 1], &v1[v59], 4 * v34);
  v35 = &v1[v59];
  if ( v35 )
    *v35 = "\n\tSchedule\n\t\tSCHED_ZOMBIE_POST_MELEE_WAIT\tTasks\t\tTASK_ZOMBIE_WAIT_POST_MELEE\t\t0\n";
  sub_1004BBC0(&dword_106E5A40, (int)"CNPC_BaseZombie", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E5A8C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v48, sub_10333A80);
  sub_1004C500((int)v44, sub_10333A80);
  sub_1004C500((int)v40, sub_10333A80);
  sub_1004C500((int)v39, sub_10333A80);
  v59 = 0;
  if ( v50 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E5A44,
                 *(_DWORD *)(v48[0] + 8 * v59),
                 *(_DWORD *)(v48[0] + 8 * v59 + 4),
                 "schedule",
                 off_1066E1F0);
      if ( !result )
        break;
      if ( ++v59 >= v50 )
        goto LABEL_74;
    }
LABEL_80:
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v45 >= 0 )
    {
      result = v44[0];
      if ( v44[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v44[0]);
    }
    if ( v49 >= 0 )
    {
      result = v48[0];
      if ( v48[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
    }
    if ( v54 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    return result;
  }
LABEL_74:
  v59 = 0;
  if ( v46 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106E5A5C,
                 *(_DWORD *)(v44[0] + 8 * v59),
                 *(_DWORD *)(v44[0] + 8 * v59 + 4),
                 "task",
                 off_1066E1F0);
      if ( !result )
        goto LABEL_80;
    }
    while ( ++v59 < v46 );
  }
  v59 = 0;
  if ( v42 <= 0 )
  {
LABEL_94:
    v59 = 0;
    if ( v33 > 0 )
    {
      v37 = byte_1066E1E8;
      do
      {
        if ( !v37 )
          break;
        v37 = sub_100A7A40(&dword_10694898, "CNPC_BaseZombie", v1[v59], (int)&dword_106E5A40);
        byte_1066E1E8 = v37;
        ++v59;
      }
      while ( v59 < v33 );
    }
    sub_102375F0(v39);
    sub_102375F0(v40);
    goto LABEL_99;
  }
  while ( 1 )
  {
    v58 = *(_DWORD *)(v40[0] + 8 * v59);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v58);
LABEL_93:
    if ( ++v59 >= v42 )
      goto LABEL_94;
  }
  if ( sub_1007DB90(
         dword_106E5A74,
         *(_DWORD *)(v40[0] + 8 * v59),
         *(_DWORD *)(v40[0] + 8 * v59 + 4),
         "condition",
         off_1066E1F0) )
  {
    goto LABEL_93;
  }
  if ( v41 >= 0 && v40[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
LABEL_99:
  sub_102375F0(v44);
  sub_102375F0(v48);
  sub_102375F0(v38);
  return sub_102375F0((int *)&Src);
}
