char sub_103CB0E0()
{
  char (**v0)(); // esi
  _DWORD *v1; // edi
  const char *v2; // esi
  int v3; // eax
  const char *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  const char *v7; // esi
  int v8; // eax
  _DWORD *v9; // eax
  const char *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  const char *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  const char *v16; // esi
  int v17; // eax
  _DWORD *v18; // eax
  const char *v19; // esi
  int v20; // eax
  _DWORD *v21; // eax
  const char *v22; // esi
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // esi
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // ebx
  char result; // al
  int v30; // ebx
  int i; // ebx
  int v32; // ebx
  int j; // ebx
  int v34; // ebx
  char v35; // al
  int v36[2]; // [esp+Ch] [ebp-80h] BYREF
  int v37; // [esp+14h] [ebp-78h]
  int v38; // [esp+18h] [ebp-74h]
  int v39; // [esp+1Ch] [ebp-70h]
  void *Src[2]; // [esp+20h] [ebp-6Ch] BYREF
  int v41; // [esp+28h] [ebp-64h]
  int v42; // [esp+2Ch] [ebp-60h]
  void *v43; // [esp+30h] [ebp-5Ch]
  int v44[2]; // [esp+34h] [ebp-58h] BYREF
  int v45; // [esp+3Ch] [ebp-50h]
  int v46; // [esp+40h] [ebp-4Ch]
  int v47; // [esp+44h] [ebp-48h]
  int v48[2]; // [esp+48h] [ebp-44h] BYREF
  int v49; // [esp+50h] [ebp-3Ch]
  int v50; // [esp+54h] [ebp-38h]
  int v51; // [esp+58h] [ebp-34h]
  int v52[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v53; // [esp+64h] [ebp-28h]
  int v54; // [esp+68h] [ebp-24h]
  int v55; // [esp+6Ch] [ebp-20h]
  void *v56; // [esp+70h] [ebp-1Ch] BYREF
  int v57; // [esp+74h] [ebp-18h]
  int v58; // [esp+78h] [ebp-14h]
  const char *v59; // [esp+7Ch] [ebp-10h]
  void *v60; // [esp+80h] [ebp-Ch]
  const char *v61; // [esp+84h] [ebp-8h] BYREF
  int v62; // [esp+88h] [ebp-4h]

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  Src[0] = 0;
  Src[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v52[0] = 0;
  v52[1] = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
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
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  sub_102ABFC0(Src, 1);
  v0 = (char (**)())Src[0];
  ++v42;
  v43 = Src[0];
  if ( v42 - 1 > 0 )
    memcpy((char *)Src[0] + 4, Src[0], 4 * (v42 - 1));
  if ( v0 )
    *v0 = sub_1005BAE0;
  v61 = "TASK_VORTIGAUNT_HEAL";
  v62 = 154;
  sub_10229160(v48, 0, &v61);
  v61 = "TASK_VORTIGAUNT_EXTRACT";
  v62 = 156;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_FIRE_EXTRACT_OUTPUT";
  v62 = 158;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_WAIT_FOR_PLAYER";
  v62 = 159;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_EXTRACT_WARMUP";
  v62 = 155;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_EXTRACT_COOLDOWN";
  v62 = 157;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_GET_HEAL_TARGET";
  v62 = 160;
  sub_10229160(v48, v50, &v61);
  v61 = "TASK_VORTIGAUNT_DISPEL_ANTLIONS";
  v62 = 161;
  sub_10229160(v48, v50, &v61);
  dword_106EBEC8 = sub_100032E0((int)"ACT_VORTIGAUNT_AIM");
  sub_10008F60((int)"ACT_VORTIGAUNT_AIM", dword_106EBEC8);
  dword_106EBEC4 = sub_100032E0((int)"ACT_VORTIGAUNT_START_HEAL");
  sub_10008F60((int)"ACT_VORTIGAUNT_START_HEAL", dword_106EBEC4);
  dword_106EBEC0 = sub_100032E0((int)"ACT_VORTIGAUNT_HEAL_LOOP");
  sub_10008F60((int)"ACT_VORTIGAUNT_HEAL_LOOP", dword_106EBEC0);
  dword_106EBEBC = sub_100032E0((int)"ACT_VORTIGAUNT_END_HEAL");
  sub_10008F60((int)"ACT_VORTIGAUNT_END_HEAL", dword_106EBEBC);
  dword_106EBEB8 = sub_100032E0((int)"ACT_VORTIGAUNT_TO_ACTION");
  sub_10008F60((int)"ACT_VORTIGAUNT_TO_ACTION", dword_106EBEB8);
  dword_106EBEB4 = sub_100032E0((int)"ACT_VORTIGAUNT_TO_IDLE");
  sub_10008F60((int)"ACT_VORTIGAUNT_TO_IDLE", dword_106EBEB4);
  dword_106EBEB0 = sub_100032E0((int)"ACT_VORTIGAUNT_HEAL");
  sub_10008F60((int)"ACT_VORTIGAUNT_HEAL", dword_106EBEB0);
  dword_106EBEAC = sub_100032E0((int)"ACT_VORTIGAUNT_DISPEL");
  sub_10008F60((int)"ACT_VORTIGAUNT_DISPEL", dword_106EBEAC);
  dword_106EBEA8 = sub_100032E0((int)"ACT_VORTIGAUNT_ANTLION_THROW");
  sub_10008F60((int)"ACT_VORTIGAUNT_ANTLION_THROW", dword_106EBEA8);
  v61 = "COND_VORTIGAUNT_CAN_HEAL";
  v62 = 79;
  sub_10229160(v44, 0, &v61);
  v61 = "COND_VORTIGAUNT_HEAL_TARGET_TOO_FAR";
  v62 = 80;
  sub_10229160(v44, v46, &v61);
  v61 = "COND_VORTIGAUNT_HEAL_TARGET_BLOCKED";
  v62 = 81;
  sub_10229160(v44, v46, &v61);
  v61 = "COND_VORTIGAUNT_HEAL_TARGET_BEHIND_US";
  v62 = 82;
  sub_10229160(v44, v46, &v61);
  v61 = "COND_VORTIGAUNT_HEAL_VALID";
  v62 = 83;
  sub_10229160(v44, v46, &v61);
  v61 = "COND_VORTIGAUNT_DISPEL_ANTLIONS";
  v62 = 84;
  sub_10229160(v44, v46, &v61);
  v61 = "SQUAD_SLOT_HEAL_PLAYER";
  v62 = 8;
  sub_10229160(v36, 0, &v61);
  dword_106EBEA4 = sub_1013BF10((int)"AE_VORTIGAUNT_CLAW_LEFT");
  sub_1006AFD0((int)"AE_VORTIGAUNT_CLAW_LEFT", dword_106EBEA4);
  dword_106EBEA0 = sub_1013BF10((int)"AE_VORTIGAUNT_CLAW_RIGHT");
  sub_1006AFD0((int)"AE_VORTIGAUNT_CLAW_RIGHT", dword_106EBEA0);
  dword_106EBE9C = sub_1013BF10((int)"AE_VORTIGAUNT_ZAP_POWERUP");
  sub_1006AFD0((int)"AE_VORTIGAUNT_ZAP_POWERUP", dword_106EBE9C);
  dword_106EBE98 = sub_1013BF10((int)"AE_VORTIGAUNT_ZAP_SHOOT");
  sub_1006AFD0((int)"AE_VORTIGAUNT_ZAP_SHOOT", dword_106EBE98);
  dword_106EBE94 = sub_1013BF10((int)"AE_VORTIGAUNT_ZAP_DONE");
  sub_1006AFD0((int)"AE_VORTIGAUNT_ZAP_DONE", dword_106EBE94);
  dword_106EBE90 = sub_1013BF10((int)"AE_VORTIGAUNT_HEAL_STARTGLOW");
  sub_1006AFD0((int)"AE_VORTIGAUNT_HEAL_STARTGLOW", dword_106EBE90);
  dword_106EBE8C = sub_1013BF10((int)"AE_VORTIGAUNT_HEAL_STARTBEAMS");
  sub_1006AFD0((int)"AE_VORTIGAUNT_HEAL_STARTBEAMS", dword_106EBE8C);
  dword_106EBE88 = sub_1013BF10((int)"AE_VORTIGAUNT_HEAL_STARTSOUND");
  sub_1006AFD0((int)"AE_VORTIGAUNT_HEAL_STARTSOUND", dword_106EBE88);
  dword_106EBE84 = sub_1013BF10((int)"AE_VORTIGAUNT_SWING_SOUND");
  sub_1006AFD0((int)"AE_VORTIGAUNT_SWING_SOUND", dword_106EBE84);
  dword_106EBE80 = sub_1013BF10((int)"AE_VORTIGAUNT_SHOOT_SOUNDSTART");
  sub_1006AFD0((int)"AE_VORTIGAUNT_SHOOT_SOUNDSTART", dword_106EBE80);
  dword_106EBE7C = sub_1013BF10((int)"AE_VORTIGAUNT_HEAL_PAUSE");
  sub_1006AFD0((int)"AE_VORTIGAUNT_HEAL_PAUSE", dword_106EBE7C);
  dword_106EBE78 = sub_1013BF10((int)"AE_VORTIGAUNT_START_DISPEL");
  sub_1006AFD0((int)"AE_VORTIGAUNT_START_DISPEL", dword_106EBE78);
  dword_106EBE74 = sub_1013BF10((int)"AE_VORTIGAUNT_ACCEL_DISPEL");
  sub_1006AFD0((int)"AE_VORTIGAUNT_ACCEL_DISPEL", dword_106EBE74);
  dword_106EBE70 = sub_1013BF10((int)"AE_VORTIGAUNT_DISPEL");
  sub_1006AFD0((int)"AE_VORTIGAUNT_DISPEL", dword_106EBE70);
  dword_106EBE6C = sub_1013BF10((int)"AE_VORTIGAUNT_START_HURT_GLOW");
  sub_1006AFD0((int)"AE_VORTIGAUNT_START_HURT_GLOW", dword_106EBE6C);
  dword_106EBE68 = sub_1013BF10((int)"AE_VORTIGAUNT_STOP_HURT_GLOW");
  sub_1006AFD0((int)"AE_VORTIGAUNT_STOP_HURT_GLOW", dword_106EBE68);
  dword_106EBE64 = sub_1013BF10((int)"AE_VORTIGAUNT_START_HEAL_GLOW");
  sub_1006AFD0((int)"AE_VORTIGAUNT_START_HEAL_GLOW", dword_106EBE64);
  dword_106EBE60 = sub_1013BF10((int)"AE_VORTIGAUNT_STOP_HEAL_GLOW");
  sub_1006AFD0((int)"AE_VORTIGAUNT_STOP_HEAL_GLOW", dword_106EBE60);
  v61 = "SCHED_VORTIGAUNT_RANGE_ATTACK";
  v62 = 99;
  sub_10229160(v52, 0, &v61);
  sub_102ABFC0(&v56, 1);
  v1 = v56;
  v2 = v59 + 1;
  v3 = (int)v59++;
  v60 = v56;
  if ( v3 > 0 )
    memcpy((char *)v56 + 4, v56, 4 * v3);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_VORTIGAUNT_RANGE_ATTACK\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_AN"
          "NOUNCE_ATTACK\t\t\t0\t\tTASK_RANGE_ATTACK1\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.2\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v61 = "SCHED_VORTIGAUNT_HEAL";
  v62 = 100;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v2;
  if ( (int)(v2 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v2[-v57 + 1]);
    v2 = v59;
    v1 = v56;
  }
  v4 = v2 + 1;
  v59 = v4;
  v5 = (int)&v4[-v62 - 1];
  v60 = v1;
  if ( v5 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v5);
  v6 = &v1[v62];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_VORTIGAUNT_HEAL\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_VORTIGAUNT_STAND\t\tTASK_STOP_M"
          "OVING\t\t\t\t0\t\tTASK_VORTIGAUNT_GET_HEAL_TARGET\t0\t\tTASK_GET_PATH_TO_TARGET\t\t\t0\t\tTASK_MOVE_TO_TARGET_"
          "RANGE\t\t350\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_PLAYER\t\t\t\t0\t\tTASK_VORTIGAUNT_HEAL\t\t\t0\tInterru"
          "pts\t\tCOND_HEAVY_DAMAGE\n";
  v61 = "SCHED_VORTIGAUNT_STAND";
  v62 = 98;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v4;
  if ( (int)(v4 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v4[-v57 + 1]);
    v4 = v59;
    v1 = v56;
  }
  v7 = v4 + 1;
  v59 = v7;
  v8 = (int)&v7[-v62 - 1];
  v60 = v1;
  if ( v8 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v8);
  v9 = &v1[v62];
  if ( v9 )
    *v9 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_VORTIGAUNT_STAND\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_ID"
          "LE\t\tTASK_WAIT\t\t\t\t\t\t\t2\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND"
          "_SMELL\t\tCOND_PROVOKED\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_DANGER\t\tCOND_VORTIGAUNT_DISPEL_ANTLIONS\t\tCOND_VOR"
          "TIGAUNT_CAN_HEAL\n";
  v61 = "SCHED_VORTIGAUNT_EXTRACT_BUGBAIT";
  v62 = 101;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v7;
  if ( (int)(v7 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v7[-v57 + 1]);
    v7 = v59;
    v1 = v56;
  }
  v10 = v7 + 1;
  v59 = v10;
  v11 = (int)&v10[-v62 - 1];
  v60 = v1;
  if ( v11 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v11);
  v12 = &v1[v62];
  if ( v12 )
    *v12 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORTIGAUNT_EXTRACT_BUGBAIT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_VORTIGAUNT_STAND\t"
           "\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_GET_PATH_TO_TARGET\t\t\t\t0\t\tTASK_MOVE_TO_TARGET_RANGE\t\t\t128\t\tTA"
           "SK_STOP_MOVING\t\t\t\t\t0\t\tTASK_VORTIGAUNT_WAIT_FOR_PLAYER\t\t0\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t500\t\tTASK"
           "_WAIT_FOR_SPEAK_FINISH\t\t\t1\t\tTASK_FACE_TARGET\t\t\t\t\t0\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t\t1\t\tTASK_VOR"
           "TIGAUNT_EXTRACT_WARMUP\t\t0\t\tTASK_VORTIGAUNT_EXTRACT\t\t\t\t0\t\tTASK_VORTIGAUNT_EXTRACT_COOLDOWN\t0\t\tTAS"
           "K_VORTIGAUNT_FIRE_EXTRACT_OUTPUT\t0\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t501\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t\t1\t"
           "\tTASK_WAIT\t\t\t\t\t\t\t2\tInterrupts\n";
  v61 = "SCHED_VORTIGAUNT_FACE_PLAYER";
  v62 = 102;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v10;
  if ( (int)(v10 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v10[-v57 + 1]);
    v10 = v59;
    v1 = v56;
  }
  v13 = v10 + 1;
  v59 = v13;
  v14 = (int)&v13[-v62 - 1];
  v60 = v1;
  if ( v14 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v14);
  v15 = &v1[v62];
  if ( v15 )
    *v15 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORTIGAUNT_FACE_PLAYER\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_TARGET_PLAYER\t\t0\t\tTASK_FACE_PLAY"
           "ER\t\t0\t\tTASK_WAIT\t\t\t\t3\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND"
           "_VORTIGAUNT_DISPEL_ANTLIONS\t\tCOND_VORTIGAUNT_HEAL_TARGET_TOO_FAR\t\tCOND_VORTIGAUNT_HEAL_TARGET_BLOCKED\t\t"
           "COND_VORTIGAUNT_HEAL_TARGET_BEHIND_US\n";
  v61 = "SCHED_VORTIGAUNT_RUN_TO_PLAYER";
  v62 = 103;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v13;
  if ( (int)(v13 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v13[-v57 + 1]);
    v13 = v59;
    v1 = v56;
  }
  v16 = v13 + 1;
  v59 = v16;
  v17 = (int)&v16[-v62 - 1];
  v60 = v1;
  if ( v17 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v17);
  v18 = &v1[v62];
  if ( v18 )
    *v18 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORTIGAUNT_RUN_TO_PLAYER\tTasks\t\tTASK_TARGET_PLAYER\t\t\t\t\t0\t\tTASK_GET_PATH_TO_TARGET\t\t\t\t"
           "0\t\tTASK_MOVE_TO_TARGET_RANGE\t\t\t350\tInterrupts\t\tCOND_HEAVY_DAMAGE\n";
  v61 = "SCHED_VORTIGAUNT_DISPEL_ANTLIONS";
  v62 = 104;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v16;
  if ( (int)(v16 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v16[-v57 + 1]);
    v16 = v59;
    v1 = v56;
  }
  v19 = v16 + 1;
  v59 = v19;
  v20 = (int)&v19[-v62 - 1];
  v60 = v1;
  if ( v20 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v20);
  v21 = &v1[v62];
  if ( v21 )
    *v21 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORTIGAUNT_DISPEL_ANTLIONS\tTasks\t\tTASK_VORTIGAUNT_DISPEL_ANTLIONS\t0\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v61 = "SCHED_VORT_FLEE_FROM_BEST_SOUND";
  v62 = 105;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v19;
  if ( (int)(v19 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v19[-v57 + 1]);
    v19 = v59;
    v1 = v56;
  }
  v22 = v19 + 1;
  v59 = v22;
  v23 = (int)&v22[-v62 - 1];
  v60 = v1;
  if ( v23 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v23);
  v24 = &v1[v62];
  if ( v24 )
    *v24 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORT_FLEE_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COWER\t\t TASK_GE"
           "T_PATH_AWAY_FROM_BEST_SOUND\t600\t\t TASK_RUN_PATH_TIMED\t\t\t\t1.5\t\t TASK_STOP_MOVING\t\t\t\t\t0\tInterrupts\n";
  v61 = "SCHED_VORT_ALERT_FACE_BESTSOUND";
  v62 = 106;
  sub_10229160(v52, v54, &v61);
  v62 = (int)v22;
  if ( (int)(v22 + 1) > v57 )
  {
    sub_102ABFC0(&v56, (int)&v22[-v57 + 1]);
    v22 = v59;
    v1 = v56;
  }
  v25 = (int)(v22 + 1);
  v59 = (const char *)v25;
  v26 = v25 - v62 - 1;
  v60 = v1;
  if ( v26 > 0 )
    memcpy(&v1[v62 + 1], &v1[v62], 4 * v26);
  v27 = &v1[v62];
  if ( v27 )
    *v27 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_VORT_ALERT_FACE_BESTSOUND\tTasks\t\tTASK_STORE_BESTSOUND_REACTORIGIN_IN_SAVEPOSITION\t\t0\t\tTASK_S"
           "TOP_MOVING\t\t\t0\t\tTASK_FACE_SAVEPOSITION\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT"
           "_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\t\tCOND_HEAR_DANGER\n";
  sub_1004BBC0(&dword_106EC198, (int)"CNPC_Vortigaunt", (int)dword_10690E5C, (int)&dword_106EA398);
  sub_1007DAB0(dword_106EC1E4, (int)dword_1069528C, (int)dword_106EA3E4);
  sub_1004C500((int)v52, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v48, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v44, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v36, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v28 = 0;
  if ( v54 <= 0 )
  {
LABEL_60:
    v30 = 0;
    if ( v50 <= 0 )
    {
LABEL_63:
      for ( i = 0; i < v46; ++i )
      {
        v62 = *(_DWORD *)(v44[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106EC1CC,
                  *(_DWORD *)(v44[0] + 8 * i),
                  *(_DWORD *)(v44[0] + 8 * i + 4),
                  "condition",
                  off_1067CE60) )
          {
            if ( v37 >= 0 && v36[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
            if ( v45 >= 0 && v44[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v44[0]);
            if ( v49 >= 0 && v48[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
            goto LABEL_114;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v62);
        }
      }
      v32 = 0;
      if ( v38 <= 0 )
      {
LABEL_107:
        for ( j = 0; j < v42; ++j )
          (*((void (**)(void))Src[0] + j))();
        v34 = 0;
        if ( v25 > 0 )
        {
          v35 = byte_1067CE58;
          do
          {
            if ( !v35 )
              break;
            v35 = sub_100A7A40(&dword_10694898, "CNPC_Vortigaunt", v1[v34++], (int)&dword_106EC198);
            byte_1067CE58 = v35;
          }
          while ( v34 < v25 );
        }
      }
      else
      {
        while ( sub_1007DB90(
                  dword_106EC1E4,
                  *(_DWORD *)(v36[0] + 8 * v32),
                  *(_DWORD *)(v36[0] + 8 * v32 + 4),
                  "squadslot",
                  off_1067CE60) )
        {
          if ( ++v32 >= v38 )
            goto LABEL_107;
        }
      }
      sub_102375F0(v36);
      sub_102375F0(v44);
      sub_102375F0(v48);
LABEL_114:
      sub_102375F0(v52);
      sub_102375F0((int *)Src);
      return sub_102375F0((int *)&v56);
    }
    else
    {
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106EC1B4,
                   *(_DWORD *)(v48[0] + 8 * v30),
                   *(_DWORD *)(v48[0] + 8 * v30 + 4),
                   "task",
                   off_1067CE60);
        if ( !result )
          break;
        if ( ++v30 >= v50 )
          goto LABEL_63;
      }
      if ( v37 >= 0 )
      {
        result = v36[0];
        if ( v36[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
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
      if ( v53 >= 0 )
      {
        result = v52[0];
        if ( v52[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v52[0]);
      }
      if ( v41 >= 0 )
      {
        result = (char)Src[0];
        if ( Src[0] )
          result = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src[0]);
      }
      if ( v58 >= 0 && v1 )
        return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EC19C,
                 *(_DWORD *)(v52[0] + 8 * v28),
                 *(_DWORD *)(v52[0] + 8 * v28 + 4),
                 "schedule",
                 off_1067CE60);
      if ( !result )
        break;
      if ( ++v28 >= v54 )
        goto LABEL_60;
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
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
    if ( v53 >= 0 )
    {
      result = v52[0];
      if ( v52[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v52[0]);
    }
    if ( v41 >= 0 )
    {
      result = (char)Src[0];
      if ( Src[0] )
        result = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src[0]);
    }
    if ( v58 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  return result;
}
