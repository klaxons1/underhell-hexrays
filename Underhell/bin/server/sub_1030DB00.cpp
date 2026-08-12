char sub_1030DB00()
{
  int v0; // esi
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // esi
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // esi
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // esi
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // esi
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // esi
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // esi
  int v42; // eax
  _DWORD *v43; // eax
  int v44; // esi
  int v45; // eax
  _DWORD *v46; // eax
  char result; // al
  char v48; // al
  int v49[5]; // [esp+Ch] [ebp-84h] BYREF
  int v50[2]; // [esp+20h] [ebp-70h] BYREF
  int v51; // [esp+28h] [ebp-68h]
  int v52; // [esp+2Ch] [ebp-64h]
  int v53; // [esp+30h] [ebp-60h]
  int v54[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v55; // [esp+3Ch] [ebp-54h]
  int v56; // [esp+40h] [ebp-50h]
  int v57; // [esp+44h] [ebp-4Ch]
  int v58[2]; // [esp+48h] [ebp-48h] BYREF
  int v59; // [esp+50h] [ebp-40h]
  int v60; // [esp+54h] [ebp-3Ch]
  int v61; // [esp+58h] [ebp-38h]
  int v62[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v63; // [esp+64h] [ebp-2Ch]
  int v64; // [esp+68h] [ebp-28h]
  int v65; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v67; // [esp+74h] [ebp-1Ch]
  int v68; // [esp+78h] [ebp-18h]
  int v69; // [esp+7Ch] [ebp-14h]
  void *v70; // [esp+80h] [ebp-10h]
  const char *v71; // [esp+84h] [ebp-Ch] BYREF
  int v72; // [esp+88h] [ebp-8h]
  int i; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  memset(v49, 0, sizeof(v49));
  v62[0] = 0;
  v62[1] = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v58[0] = 0;
  v58[1] = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v54[0] = 0;
  v54[1] = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  dword_106E304C = sub_100C7680();
  dword_106E3050 = sub_100C7680();
  v71 = "SQUAD_SLOT_ANTLIONGUARD_CHARGE";
  v72 = 8;
  sub_10229160(v50, 0, &v71);
  v71 = "TASK_ANTLIONGUARD_CHARGE";
  v72 = 150;
  sub_10229160(v58, 0, &v71);
  v71 = "TASK_ANTLIONGUARD_GET_PATH_TO_PHYSOBJECT";
  v72 = 151;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_SHOVE_PHYSOBJECT";
  v72 = 152;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_SUMMON";
  v72 = 153;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_SET_FLINCH_ACTIVITY";
  v72 = 154;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_GET_PATH_TO_CHARGE_POSITION";
  v72 = 155;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_GET_PATH_TO_NEAREST_NODE";
  v72 = 156;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_GET_CHASE_PATH_ENEMY_TOLERANCE";
  v72 = 157;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_OPPORTUNITY_THROW";
  v72 = 158;
  sub_10229160(v58, v60, &v71);
  v71 = "TASK_ANTLIONGUARD_FIND_PHYSOBJECT";
  v72 = 159;
  sub_10229160(v58, v60, &v71);
  dword_106E3048 = sub_100032E0((int)"ACT_ANTLIONGUARD_SEARCH");
  sub_10008F60((int)"ACT_ANTLIONGUARD_SEARCH", dword_106E3048);
  dword_106E3044 = sub_100032E0((int)"ACT_ANTLIONGUARD_PEEK_FLINCH");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PEEK_FLINCH", dword_106E3044);
  dword_106E3040 = sub_100032E0((int)"ACT_ANTLIONGUARD_PEEK_ENTER");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PEEK_ENTER", dword_106E3040);
  dword_106E303C = sub_100032E0((int)"ACT_ANTLIONGUARD_PEEK_EXIT");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PEEK_EXIT", dword_106E303C);
  dword_106E3038 = sub_100032E0((int)"ACT_ANTLIONGUARD_PEEK1");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PEEK1", dword_106E3038);
  dword_106E3034 = sub_100032E0((int)"ACT_ANTLIONGUARD_BARK");
  sub_10008F60((int)"ACT_ANTLIONGUARD_BARK", dword_106E3034);
  dword_106E3030 = sub_100032E0((int)"ACT_ANTLIONGUARD_PEEK_SIGHTED");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PEEK_SIGHTED", dword_106E3030);
  dword_106E3008 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_START");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_START", dword_106E3008);
  dword_106E3004 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_CANCEL");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_CANCEL", dword_106E3004);
  dword_106E3000 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_RUN");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_RUN", dword_106E3000);
  dword_106E2FFC = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_CRASH");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_CRASH", dword_106E2FFC);
  dword_106E2FF8 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_STOP");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_STOP", dword_106E2FF8);
  dword_106E2FF4 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_HIT");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_HIT", dword_106E2FF4);
  dword_106E2FF0 = sub_100032E0((int)"ACT_ANTLIONGUARD_CHARGE_ANTICIPATION");
  sub_10008F60((int)"ACT_ANTLIONGUARD_CHARGE_ANTICIPATION", dword_106E2FF0);
  dword_106E302C = sub_100032E0((int)"ACT_ANTLIONGUARD_SHOVE_PHYSOBJECT");
  sub_10008F60((int)"ACT_ANTLIONGUARD_SHOVE_PHYSOBJECT", dword_106E302C);
  dword_106E3028 = sub_100032E0((int)"ACT_ANTLIONGUARD_FLINCH_LIGHT");
  sub_10008F60((int)"ACT_ANTLIONGUARD_FLINCH_LIGHT", dword_106E3028);
  dword_106E3024 = sub_100032E0((int)"ACT_ANTLIONGUARD_UNBURROW");
  sub_10008F60((int)"ACT_ANTLIONGUARD_UNBURROW", dword_106E3024);
  dword_106E3020 = sub_100032E0((int)"ACT_ANTLIONGUARD_ROAR");
  sub_10008F60((int)"ACT_ANTLIONGUARD_ROAR", dword_106E3020);
  dword_106E301C = sub_100032E0((int)"ACT_ANTLIONGUARD_RUN_HURT");
  sub_10008F60((int)"ACT_ANTLIONGUARD_RUN_HURT", dword_106E301C);
  dword_106E3018 = sub_100032E0((int)"ACT_ANTLIONGUARD_PHYSHIT_FR");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PHYSHIT_FR", dword_106E3018);
  dword_106E3014 = sub_100032E0((int)"ACT_ANTLIONGUARD_PHYSHIT_FL");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PHYSHIT_FL", dword_106E3014);
  dword_106E3010 = sub_100032E0((int)"ACT_ANTLIONGUARD_PHYSHIT_RR");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PHYSHIT_RR", dword_106E3010);
  dword_106E300C = sub_100032E0((int)"ACT_ANTLIONGUARD_PHYSHIT_RL");
  sub_10008F60((int)"ACT_ANTLIONGUARD_PHYSHIT_RL", dword_106E300C);
  dword_106E2FEC = sub_1013BF10((int)"AE_ANTLIONGUARD_CHARGE_HIT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_CHARGE_HIT", dword_106E2FEC);
  dword_106E2FE8 = sub_1013BF10((int)"AE_ANTLIONGUARD_SHOVE_PHYSOBJECT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_SHOVE_PHYSOBJECT", dword_106E2FE8);
  dword_106E2FE4 = sub_1013BF10((int)"AE_ANTLIONGUARD_SHOVE");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_SHOVE", dword_106E2FE4);
  dword_106E2FE0 = sub_1013BF10((int)"AE_ANTLIONGUARD_FOOTSTEP_LIGHT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_FOOTSTEP_LIGHT", dword_106E2FE0);
  dword_106E2FDC = sub_1013BF10((int)"AE_ANTLIONGUARD_FOOTSTEP_HEAVY");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_FOOTSTEP_HEAVY", dword_106E2FDC);
  dword_106E2FD8 = sub_1013BF10((int)"AE_ANTLIONGUARD_CHARGE_EARLYOUT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_CHARGE_EARLYOUT", dword_106E2FD8);
  dword_106E2FD4 = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_GROWL");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_GROWL", dword_106E2FD4);
  dword_106E2FD0 = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_BARK");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_BARK", dword_106E2FD0);
  dword_106E2FCC = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_PAIN");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_PAIN", dword_106E2FCC);
  dword_106E2FC8 = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_SQUEEZE");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_SQUEEZE", dword_106E2FC8);
  dword_106E2FC4 = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_SCRATCH");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_SCRATCH", dword_106E2FC4);
  dword_106E2FC0 = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_GRUNT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_GRUNT", dword_106E2FC0);
  dword_106E2FB8 = sub_1013BF10((int)"AE_ANTLIONGUARD_BURROW_OUT");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_BURROW_OUT", dword_106E2FB8);
  dword_106E2FBC = sub_1013BF10((int)"AE_ANTLIONGUARD_VOICE_ROAR");
  sub_1006AFD0((int)"AE_ANTLIONGUARD_VOICE_ROAR", dword_106E2FBC);
  v71 = "COND_ANTLIONGUARD_PHYSICS_TARGET";
  v72 = 73;
  sub_10229160(v54, 0, &v71);
  v71 = "COND_ANTLIONGUARD_PHYSICS_TARGET_INVALID";
  v72 = 74;
  sub_10229160(v54, v56, &v71);
  v71 = "COND_ANTLIONGUARD_HAS_CHARGE_TARGET";
  v72 = 75;
  sub_10229160(v54, v56, &v71);
  v71 = "COND_ANTLIONGUARD_CAN_SUMMON";
  v72 = 76;
  sub_10229160(v54, v56, &v71);
  v71 = "COND_ANTLIONGUARD_CAN_CHARGE";
  v72 = 77;
  sub_10229160(v54, v56, &v71);
  v71 = "SCHED_ANTLIONGUARD_SUMMON";
  v72 = 97;
  sub_10229160(v62, 0, &v71);
  sub_102ABFC0(&Src, 1);
  v0 = v69 + 1;
  v69 = v0;
  v1 = Src;
  v70 = Src;
  if ( v0 - 1 > 0 )
    memcpy((char *)Src + 4, Src, 4 * (v0 - 1));
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLIONGUARD_SUMMON\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t\t0\t\tTAS"
          "K_PLAY_SEQUENCE\t\t\t\t\t\tACTIVITY:ACT_ANTLIONGUARD_BARK\t\tTASK_ANTLIONGUARD_SUMMON\t\t\t\t0\t\tTASK_ANTLION"
          "GUARD_OPPORTUNITY_THROW\t\t0\t\tInterrupts\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CHARGE";
  v72 = 88;
  sub_10229160(v62, v64, &v71);
  i = v0;
  if ( v0 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v0 - v67 + 1);
    v0 = v69;
    v1 = Src;
  }
  v2 = v0 + 1;
  v69 = v2;
  v3 = v2 - i - 1;
  v70 = v1;
  if ( v3 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v3);
  v4 = &v1[i];
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLIONGUARD_CHARGE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:"
          "SCHED_ANTLIONGUARD_CHASE_ENEMY\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK_ANTLIONGUARD_CHARGE\t\t\t0\tInterrupts\t"
          "\tCOND_TASK_FAILED\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CHARGE_TARGET";
  v72 = 94;
  sub_10229160(v62, v64, &v71);
  i = v2;
  if ( v2 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v2 - v67 + 1);
    v2 = v69;
    v1 = Src;
  }
  v5 = v2 + 1;
  v69 = v5;
  v6 = v5 - i - 1;
  v70 = v1;
  if ( v6 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v6);
  v7 = &v1[i];
  if ( v7 )
    *v7 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ANTLIONGUARD_CHARGE_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\t"
          "TASK_ANTLIONGUARD_CHARGE\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_ENEMY_DEAD\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CHARGE_CRASH";
  v72 = 89;
  sub_10229160(v62, v64, &v71);
  i = v5;
  if ( v5 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v5 - v67 + 1);
    v5 = v69;
    v1 = Src;
  }
  v8 = v5 + 1;
  v69 = v8;
  v9 = v8 - i - 1;
  v70 = v1;
  if ( v9 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v9);
  v10 = &v1[i];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_CHARGE_CRASH\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\tACTIVITY:ACT"
           "_ANTLIONGUARD_CHARGE_CRASH\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_PHYSICS_ATTACK";
  v72 = 91;
  sub_10229160(v62, v64, &v71);
  i = v8;
  if ( v8 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v8 - v67 + 1);
    v8 = v69;
    v1 = Src;
  }
  v11 = v8 + 1;
  v69 = v11;
  v12 = v11 - i - 1;
  v70 = v1;
  if ( v12 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v12);
  v13 = &v1[i];
  if ( v13 )
    *v13 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_PHYSICS_ATTACK\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_ANTLIONGUARD"
           "_CHASE_ENEMY\t\tTASK_ANTLIONGUARD_GET_PATH_TO_PHYSOBJECT\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FO"
           "R_MOVEMENT\t\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t\t\t\t0\t\tTASK_ANTLIONGUARD_SHOVE_PHYSOBJECT\t\t\t0\tInt"
           "errupts\t\tCOND_TASK_FAILED\t\tCOND_ENEMY_DEAD\t\tCOND_LOST_ENEMY\t\tCOND_NEW_ENEMY\t\tCOND_ANTLIONGUARD_PHYS"
           "ICS_TARGET_INVALID\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_FORCE_ANTLIONGUARD_PHYSICS_ATTACK";
  v72 = 101;
  sub_10229160(v62, v64, &v71);
  i = v11;
  if ( v11 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v11 - v67 + 1);
    v11 = v69;
    v1 = Src;
  }
  v14 = v11 + 1;
  v69 = v14;
  v15 = v14 - i - 1;
  v70 = v1;
  if ( v15 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v15);
  v16 = &v1[i];
  if ( v16 )
    *v16 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_FORCE_ANTLIONGUARD_PHYSICS_ATTACK\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_ANTLIO"
           "NGUARD_CANT_ATTACK\t\tTASK_ANTLIONGUARD_FIND_PHYSOBJECT\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\t\t\tSCHEDULE:SCH"
           "ED_ANTLIONGUARD_PHYSICS_ATTACK\tInterrupts\t\tCOND_ANTLIONGUARD_PHYSICS_TARGET\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CANT_ATTACK";
  v72 = 102;
  sub_10229160(v62, v64, &v71);
  i = v14;
  if ( v14 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v14 - v67 + 1);
    v14 = v69;
    v1 = Src;
  }
  v17 = v14 + 1;
  v69 = v17;
  v18 = v17 - i - 1;
  v70 = v1;
  if ( v18 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v18);
  v19 = &v1[i];
  if ( v19 )
    *v19 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_CANT_ATTACK\tTasks\t\tTASK_SET_ROUTE_SEARCH_TIME\t\t2\t\tTASK_GET_PATH_TO_RANDOM_NODE\t"
           "1024\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_WAIT_PVS\t\t\t\t\t0\tInterrupts\t\t"
           "COND_GIVE_WAY\t\tCOND_NEW_ENEMY\t\tCOND_ANTLIONGUARD_PHYSICS_TARGET\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_PHYSICS_DAMAGE_HEAVY";
  v72 = 92;
  sub_10229160(v62, v64, &v71);
  i = v17;
  if ( v17 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v17 - v67 + 1);
    v17 = v69;
    v1 = Src;
  }
  v20 = v17 + 1;
  v69 = v20;
  v21 = v20 - i - 1;
  v70 = v1;
  if ( v21 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v21);
  v22 = &v1[i];
  if ( v22 )
    *v22 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_PHYSICS_DAMAGE_HEAVY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_RESET_ACTIVITY\t\t"
           "\t\t\t\t0\t\tTASK_ANTLIONGUARD_SET_FLINCH_ACTIVITY\t0\tInterrupts\n";
  v71 = "SCHED_ANTLIONGUARD_UNBURROW";
  v72 = 93;
  sub_10229160(v62, v64, &v71);
  i = v20;
  if ( v20 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v20 - v67 + 1);
    v20 = v69;
    v1 = Src;
  }
  v23 = v20 + 1;
  v69 = v23;
  v24 = v23 - i - 1;
  v70 = v1;
  if ( v24 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v24);
  v25 = &v1[i];
  if ( v25 )
    *v25 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_UNBURROW\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\tACTIVITY:ACT_ANTLIONGUARD_UNBURROW\tInterrupts\n";
  v71 = "SCHED_ANTLIONGUARD_CHARGE_CANCEL";
  v72 = 90;
  sub_10229160(v62, v64, &v71);
  i = v23;
  if ( v23 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v23 - v67 + 1);
    v23 = v69;
    v1 = Src;
  }
  v26 = v23 + 1;
  v69 = v26;
  v27 = v26 - i - 1;
  v70 = v1;
  if ( v27 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v27);
  v28 = &v1[i];
  if ( v28 )
    *v28 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_CHARGE_CANCEL\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\tACTIVITY:ACT_ANTLIONGUARD_CHARGE_CANCEL\tInterrupts\n";
  v71 = "SCHED_ANTLIONGUARD_FIND_CHARGE_POSITION";
  v72 = 95;
  sub_10229160(v62, v64, &v71);
  i = v26;
  if ( v26 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v26 - v67 + 1);
    v26 = v69;
    v1 = Src;
  }
  v29 = v26 + 1;
  v69 = v29;
  v30 = v29 - i - 1;
  v70 = v1;
  if ( v30 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v30);
  v31 = &v1[i];
  if ( v31 )
    *v31 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_FIND_CHARGE_POSITION\tTasks\t\tTASK_ANTLIONGUARD_GET_PATH_TO_CHARGE_POSITION\t0\t\tTAS"
           "K_RUN_PATH\t\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t\t0\t\tInterrupts\t\tCOND_ENEMY_DEAD\t\tCO"
           "ND_GIVE_WAY\t\tCOND_TASK_FAILED\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CHASE_ENEMY_TOLERANCE";
  v72 = 100;
  sub_10229160(v62, v64, &v71);
  i = v29;
  if ( v29 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v29 - v67 + 1);
    v29 = v69;
    v1 = Src;
  }
  v32 = v29 + 1;
  v69 = v32;
  v33 = v32 - i - 1;
  v70 = v1;
  if ( v33 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v33);
  v34 = &v1[i];
  if ( v34 )
    *v34 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_CHASE_ENEMY_TOLERANCE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t\t\t0\t\tTASK_SET_FAIL_S"
           "CHEDULE\t\t\t\t\t\t\t\tSCHEDULE:SCHED_ANTLIONGUARD_PATROL_RUN\t\tTASK_ANTLIONGUARD_GET_PATH_TO_NEAREST_NODE\t"
           "\t\t500\t\tTASK_RUN_PATH\t\t\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t"
           "\t\t\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_GIVE_WAY\t\tCOND_NEW_EN"
           "EMY\t\tCOND_ANTLIONGUARD_CAN_SUMMON\t\tCOND_ANTLIONGUARD_PHYSICS_TARGET\t\tCOND_HEAVY_DAMAGE\t\tCOND_ANTLIONG"
           "UARD_CAN_CHARGE\n";
  v71 = "SCHED_ANTLIONGUARD_PATROL_RUN";
  v72 = 98;
  sub_10229160(v62, v64, &v71);
  i = v32;
  if ( v32 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v32 - v67 + 1);
    v32 = v69;
    v1 = Src;
  }
  v35 = v32 + 1;
  v69 = v35;
  v36 = v35 - i - 1;
  v70 = v1;
  if ( v36 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v36);
  v37 = &v1[i];
  if ( v37 )
    *v37 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_PATROL_RUN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_ANTLIONGUARD_CAN"
           "T_ATTACK\t\tTASK_SET_ROUTE_SEARCH_TIME\t\t\t\t\t3\t\tTASK_ANTLIONGUARD_GET_PATH_TO_NEAREST_NODE\t500\t\tTASK_"
           "RUN_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_CAN_"
           "MELEE_ATTACK1\t\tCOND_GIVE_WAY\t\tCOND_NEW_ENEMY\t\tCOND_ANTLIONGUARD_PHYSICS_TARGET\t\tCOND_ANTLIONGUARD_CAN"
           "_SUMMON\t\tCOND_HEAVY_DAMAGE\t\tCOND_ANTLIONGUARD_CAN_CHARGE\n";
  v71 = "SCHED_ANTLIONGUARD_ROAR";
  v72 = 99;
  sub_10229160(v62, v64, &v71);
  i = v35;
  if ( v35 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v35 - v67 + 1);
    v35 = v69;
    v1 = Src;
  }
  v38 = v35 + 1;
  v69 = v38;
  v39 = v38 - i - 1;
  v70 = v1;
  if ( v39 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v39);
  v40 = &v1[i];
  if ( v40 )
    *v40 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_ROAR\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_PLAY_SEQUEN"
           "CE\t\t\tACTIVITY:ACT_ANTLIONGUARD_ROAR\t\tInterrupts\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_TAKE_COVER_FROM_ENEMY";
  v72 = 103;
  sub_10229160(v62, v64, &v71);
  i = v38;
  if ( v38 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v38 - v67 + 1);
    v38 = v69;
    v1 = Src;
  }
  v41 = v38 + 1;
  v69 = v41;
  v42 = v41 - i - 1;
  v70 = v1;
  if ( v42 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v42);
  v43 = &v1[i];
  if ( v43 )
    *v43 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_TAKE_COVER_FROM_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_ANTLIONGUAR"
           "D_CANT_ATTACK\t\tTASK_FIND_COVER_FROM_ENEMY\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0"
           "\t\tTASK_STOP_MOVING\t\t\t\t0\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_AN"
           "TLIONGUARD_PHYSICS_TARGET\t\tCOND_ANTLIONGUARD_CAN_SUMMON\t\tCOND_HEAVY_DAMAGE\n";
  v71 = "SCHED_ANTLIONGUARD_CHASE_ENEMY";
  v72 = 104;
  sub_10229160(v62, v64, &v71);
  i = v41;
  if ( v41 + 1 > v67 )
  {
    sub_102ABFC0(&Src, v41 - v67 + 1);
    v41 = v69;
    v1 = Src;
  }
  v44 = v41 + 1;
  v69 = v44;
  v45 = v44 - i - 1;
  v70 = v1;
  if ( v45 > 0 )
    memcpy(&v1[i + 1], &v1[i], 4 * v45);
  v46 = &v1[i];
  if ( v46 )
    *v46 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ANTLIONGUARD_CHASE_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t300\t"
           "\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_NEW"
           "_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCO"
           "ND_CAN_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_HEAVY_DAMAGE\t"
           "\tCOND_ANTLIONGUARD_CAN_CHARGE\n";
  sub_1004BBC0(&dword_106E31F0, (int)"CNPC_AntlionGuard", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E323C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v62, sub_10333A80);
  sub_1004C500((int)v58, sub_10333A80);
  sub_1004C500((int)v54, sub_10333A80);
  sub_1004C500((int)v50, sub_10333A80);
  i = 0;
  if ( v64 <= 0 )
  {
LABEL_98:
    i = 0;
    if ( v60 <= 0 )
    {
LABEL_101:
      for ( i = 0; i < v56; ++i )
      {
        v72 = *(_DWORD *)(v54[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106E3224,
                  *(_DWORD *)(v54[0] + 8 * i),
                  *(_DWORD *)(v54[0] + 8 * i + 4),
                  "condition",
                  off_1066BCD4) )
            goto LABEL_134;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v72);
        }
      }
      i = 0;
      if ( v52 <= 0 )
      {
LABEL_130:
        i = 0;
        if ( v44 > 0 )
        {
          v48 = byte_1066BCCC;
          do
          {
            if ( !v48 )
              break;
            v48 = sub_100A7A40(&dword_10694898, "CNPC_AntlionGuard", v1[i], (int)&dword_106E31F0);
            byte_1066BCCC = v48;
            ++i;
          }
          while ( i < v44 );
        }
      }
      else
      {
        while ( sub_1007DB90(
                  dword_106E323C,
                  *(_DWORD *)(v50[0] + 8 * i),
                  *(_DWORD *)(v50[0] + 8 * i + 4),
                  "squadslot",
                  off_1066BCD4) )
        {
          if ( ++i >= v52 )
            goto LABEL_130;
        }
      }
LABEL_134:
      sub_102375F0(v50);
      sub_102375F0(v54);
    }
    else
    {
      while ( sub_1007DB90(
                dword_106E320C,
                *(_DWORD *)(v58[0] + 8 * i),
                *(_DWORD *)(v58[0] + 8 * i + 4),
                "task",
                off_1066BCD4) )
      {
        if ( ++i >= v60 )
          goto LABEL_101;
      }
      if ( v51 >= 0 && v50[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v50[0]);
      if ( v55 >= 0 && v54[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v54[0]);
    }
    sub_102375F0(v58);
    sub_102375F0(v62);
    sub_102375F0(v49);
    return sub_102375F0((int *)&Src);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E31F4,
                 *(_DWORD *)(v62[0] + 8 * i),
                 *(_DWORD *)(v62[0] + 8 * i + 4),
                 "schedule",
                 off_1066BCD4);
      if ( !result )
        break;
      if ( ++i >= v64 )
        goto LABEL_98;
    }
    if ( v51 >= 0 )
    {
      result = v50[0];
      if ( v50[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v50[0]);
    }
    if ( v55 >= 0 )
    {
      result = v54[0];
      if ( v54[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v54[0]);
    }
    if ( v59 >= 0 )
    {
      result = v58[0];
      if ( v58[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v58[0]);
    }
    if ( v63 >= 0 )
    {
      result = v62[0];
      if ( v62[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v62[0]);
    }
    if ( v68 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  return result;
}
