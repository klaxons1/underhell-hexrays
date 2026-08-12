char sub_103B8CF0()
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
  char result; // al
  char v52; // al
  int v53[5]; // [esp+Ch] [ebp-84h] BYREF
  int v54[5]; // [esp+20h] [ebp-70h] BYREF
  int v55[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v56; // [esp+3Ch] [ebp-54h]
  int v57; // [esp+40h] [ebp-50h]
  int v58; // [esp+44h] [ebp-4Ch]
  int v59[2]; // [esp+48h] [ebp-48h] BYREF
  int v60; // [esp+50h] [ebp-40h]
  int v61; // [esp+54h] [ebp-3Ch]
  int v62; // [esp+58h] [ebp-38h]
  int v63[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v64; // [esp+64h] [ebp-2Ch]
  int v65; // [esp+68h] [ebp-28h]
  int v66; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v68; // [esp+74h] [ebp-1Ch]
  int v69; // [esp+78h] [ebp-18h]
  int v70; // [esp+7Ch] [ebp-14h]
  void *v71; // [esp+80h] [ebp-10h]
  const char *v72; // [esp+84h] [ebp-Ch] BYREF
  int v73; // [esp+88h] [ebp-8h]
  int i; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  memset(v53, 0, sizeof(v53));
  v63[0] = 0;
  v63[1] = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v59[0] = 0;
  v59[1] = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v55[0] = 0;
  v55[1] = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  memset(v54, 0, sizeof(v54));
  v72 = "TASK_STRIDER_AIM";
  v73 = 150;
  sub_10229160(v59, 0, &v72);
  v72 = "TASK_STRIDER_DODGE";
  v73 = 151;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_STOMP";
  v73 = 152;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_BREAKDOWN";
  v73 = 153;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_START_MOVING";
  v73 = 154;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_REFRESH_HUNT_PATH";
  v73 = 155;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_GET_PATH_TO_CANNON_TARGET";
  v73 = 156;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_FACE_CANNON_TARGET";
  v73 = 157;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_SET_HEIGHT";
  v73 = 158;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_GET_PATH_TO_CANNON_LOS";
  v73 = 159;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_FIRE_CANNON";
  v73 = 161;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_SET_CANNON_HEIGHT";
  v73 = 160;
  sub_10229160(v59, v61, &v72);
  v72 = "TASK_STRIDER_FALL_TO_GROUND";
  v73 = 162;
  sub_10229160(v59, v61, &v72);
  dword_106EAD98 = sub_100032E0((int)"ACT_STRIDER_LOOKL");
  sub_10008F60((int)"ACT_STRIDER_LOOKL", dword_106EAD98);
  dword_106EAD94 = sub_100032E0((int)"ACT_STRIDER_LOOKR");
  sub_10008F60((int)"ACT_STRIDER_LOOKR", dword_106EAD94);
  dword_106EAD90 = sub_100032E0((int)"ACT_STRIDER_DEPLOYRA1");
  sub_10008F60((int)"ACT_STRIDER_DEPLOYRA1", dword_106EAD90);
  dword_106EAD8C = sub_100032E0((int)"ACT_STRIDER_AIMRA1");
  sub_10008F60((int)"ACT_STRIDER_AIMRA1", dword_106EAD8C);
  dword_106EAD88 = sub_100032E0((int)"ACT_STRIDER_FINISHRA1");
  sub_10008F60((int)"ACT_STRIDER_FINISHRA1", dword_106EAD88);
  dword_106EAD84 = sub_100032E0((int)"ACT_STRIDER_DODGER");
  sub_10008F60((int)"ACT_STRIDER_DODGER", dword_106EAD84);
  dword_106EAD80 = sub_100032E0((int)"ACT_STRIDER_DODGEL");
  sub_10008F60((int)"ACT_STRIDER_DODGEL", dword_106EAD80);
  dword_106EAD7C = sub_100032E0((int)"ACT_STRIDER_STOMPL");
  sub_10008F60((int)"ACT_STRIDER_STOMPL", dword_106EAD7C);
  dword_106EAD78 = sub_100032E0((int)"ACT_STRIDER_STOMPR");
  sub_10008F60((int)"ACT_STRIDER_STOMPR", dword_106EAD78);
  dword_106EAD74 = sub_100032E0((int)"ACT_STRIDER_FLICKL");
  sub_10008F60((int)"ACT_STRIDER_FLICKL", dword_106EAD74);
  dword_106EAD70 = sub_100032E0((int)"ACT_STRIDER_FLICKR");
  sub_10008F60((int)"ACT_STRIDER_FLICKR", dword_106EAD70);
  dword_106EAD60 = sub_100032E0((int)"ACT_STRIDER_SLEEP");
  sub_10008F60((int)"ACT_STRIDER_SLEEP", dword_106EAD60);
  dword_106EAD6C = sub_100032E0((int)"ACT_STRIDER_CARRIED");
  sub_10008F60((int)"ACT_STRIDER_CARRIED", dword_106EAD6C);
  dword_106EAD68 = sub_100032E0((int)"ACT_STRIDER_DEPLOY");
  sub_10008F60((int)"ACT_STRIDER_DEPLOY", dword_106EAD68);
  dword_106EAD64 = sub_100032E0((int)"ACT_STRIDER_GESTURE_DEATH");
  sub_10008F60((int)"ACT_STRIDER_GESTURE_DEATH", dword_106EAD64);
  v72 = "COND_STRIDER_DO_FLICK";
  v73 = 73;
  sub_10229160(v55, 0, &v72);
  v72 = "COND_TRACK_PATH_GO";
  v73 = 74;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_SHOULD_CROUCH";
  v73 = 75;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_SHOULD_STAND";
  v73 = 76;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_MINIGUN_SHOOTING";
  v73 = 77;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_MINIGUN_NOT_SHOOTING";
  v73 = 78;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_HAS_CANNON_TARGET";
  v73 = 79;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_ENEMY_UPDATED";
  v73 = 80;
  sub_10229160(v55, v57, &v72);
  v72 = "COND_STRIDER_HAS_LOS_Z";
  v73 = 81;
  sub_10229160(v55, v57, &v72);
  dword_106EADA0 = sub_100C7680();
  v72 = "SCHED_STRIDER_HUNT";
  v73 = 97;
  sub_10229160(v63, 0, &v72);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v70 + 1;
  v2 = v70++;
  v71 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_STRIDER_HUNT\tTasks\t\tTASK_STRIDER_REFRESH_HUNT_PATH 0\t\tTASK_STRIDER_START_MOVING\t0\t\tTASK_WAIT"
          "\t\t\t\t\t4\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RA"
          "NGE_ATTACK2\t\tCOND_STRIDER_SHOULD_CROUCH\t\tCOND_STRIDER_HAS_CANNON_TARGET\t\tCOND_STRIDER_ENEMY_UPDATED\n";
  v72 = "SCHED_STRIDER_RANGE_ATTACK1";
  v73 = 88;
  sub_10229160(v63, v65, &v72);
  i = v1;
  if ( v1 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v1 - v68 + 1);
    v1 = v70;
    v0 = Src;
  }
  v3 = v1 + 1;
  v70 = v3;
  v4 = v3 - i - 1;
  v71 = v0;
  if ( v4 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v4);
  v5 = &v0[i];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_STRIDER_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tT"
          "ASK_FACE_ENEMY\t\t\t0\t\tTASK_RANGE_ATTACK1\t\t0\t\tTASK_WAIT\t\t\t\t5\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_RANGE_ATTACK2";
  v73 = 89;
  sub_10229160(v63, v65, &v72);
  i = v3;
  if ( v3 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v3 - v68 + 1);
    v3 = v70;
    v0 = Src;
  }
  v6 = v3 + 1;
  v70 = v6;
  v7 = v6 - i - 1;
  v71 = v0;
  if ( v7 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v7);
  v8 = &v0[i];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_STRIDER_RANGE_ATTACK2\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_STRIDER_FACE_CANNON_TARGET\t\t0\t"
          "\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t\t1\t\tTASK_STRIDER_AIM\t\t\t\t\t1.25\t"
          "\tTASK_STRIDER_FIRE_CANNON\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t1\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_CROUCH";
  v73 = 90;
  sub_10229160(v63, v65, &v72);
  i = v6;
  if ( v6 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v6 - v68 + 1);
    v6 = v70;
    v0 = Src;
  }
  v9 = v6 + 1;
  v70 = v9;
  v10 = v9 - i - 1;
  v71 = v0;
  if ( v10 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v10);
  v11 = &v0[i];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_CROUCH\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_CROUCH\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_STAND";
  v73 = 91;
  sub_10229160(v63, v65, &v72);
  i = v9;
  if ( v9 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v9 - v68 + 1);
    v9 = v70;
    v0 = Src;
  }
  v12 = v9 + 1;
  v70 = v12;
  v13 = v12 - i - 1;
  v71 = v0;
  if ( v13 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v13);
  v14 = &v0[i];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_STAND\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_STAND\t\tTASK_S"
           "ET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tTASK_STRIDER_SET_HEIGHT\t500\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_DODGE";
  v73 = 92;
  sub_10229160(v63, v65, &v72);
  i = v12;
  if ( v12 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v12 - v68 + 1);
    v12 = v70;
    v0 = Src;
  }
  v15 = v12 + 1;
  v70 = v15;
  v16 = v15 - i - 1;
  v71 = v0;
  if ( v16 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v16);
  v17 = &v0[i];
  if ( v17 )
    *v17 = "\n\tSchedule\n\t\tSCHED_STRIDER_DODGE\tTasks\t\tTASK_STRIDER_DODGE\t\t0\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_DIE";
  v73 = 98;
  sub_10229160(v63, v65, &v72);
  i = v15;
  if ( v15 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v15 - v68 + 1);
    v15 = v70;
    v0 = Src;
  }
  v18 = v15 + 1;
  v70 = v18;
  v19 = v18 - i - 1;
  v71 = v0;
  if ( v19 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v19);
  v20 = &v0[i];
  if ( v20 )
    *v20 = "\n\tSchedule\n\t\tSCHED_STRIDER_DIE\tTasks\t\tTASK_STRIDER_BREAKDOWN\t\t0\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_STOMPL";
  v73 = 93;
  sub_10229160(v63, v65, &v72);
  i = v18;
  if ( v18 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v18 - v68 + 1);
    v18 = v70;
    v0 = Src;
  }
  v21 = v18 + 1;
  v70 = v21;
  v22 = v21 - i - 1;
  v71 = v0;
  if ( v22 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v22);
  v23 = &v0[i];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_STOMPL\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_STRIDER_STOMP\t\t0\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_STOMPR";
  v73 = 94;
  sub_10229160(v63, v65, &v72);
  i = v21;
  if ( v21 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v21 - v68 + 1);
    v21 = v70;
    v0 = Src;
  }
  v24 = v21 + 1;
  v70 = v24;
  v25 = v24 - i - 1;
  v71 = v0;
  if ( v25 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v25);
  v26 = &v0[i];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_STOMPR\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_STRIDER_STOMP\t\t1\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_FLICKL";
  v73 = 95;
  sub_10229160(v63, v65, &v72);
  i = v24;
  if ( v24 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v24 - v68 + 1);
    v24 = v70;
    v0 = Src;
  }
  v27 = v24 + 1;
  v70 = v27;
  v28 = v27 - i - 1;
  v71 = v0;
  if ( v28 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v28);
  v29 = &v0[i];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_FLICKL\tTasks\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_STRIDER_FLICKL\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_FLICKR";
  v73 = 96;
  sub_10229160(v63, v65, &v72);
  i = v27;
  if ( v27 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v27 - v68 + 1);
    v27 = v70;
    v0 = Src;
  }
  v30 = v27 + 1;
  v70 = v30;
  v31 = v30 - i - 1;
  v71 = v0;
  if ( v31 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v31);
  v32 = &v0[i];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_FLICKR\tTasks\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_STRIDER_FLICKR\t\tInterrupts\n";
  v72 = "SCHED_STRIDER_ATTACK_CANNON_TARGET";
  v73 = 99;
  sub_10229160(v63, v65, &v72);
  i = v30;
  if ( v30 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v30 - v68 + 1);
    v30 = v70;
    v0 = Src;
  }
  v33 = v30 + 1;
  v70 = v33;
  v34 = v33 - i - 1;
  v71 = v0;
  if ( v34 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v34);
  v35 = &v0[i];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_ATTACK_CANNON_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_STRIDER_GET_PATH_TO_"
           "CANNON_TARGET\t\t0\t\tTASK_WALK_PATH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tInterrupts\t\t"
           "COND_CAN_RANGE_ATTACK2\t\tCOND_STRIDER_SHOULD_CROUCH\n";
  v72 = "SCHED_STRIDER_CHASE_ENEMY";
  v73 = 100;
  sub_10229160(v63, v65, &v72);
  i = v33;
  if ( v33 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v33 - v68 + 1);
    v33 = v70;
    v0 = Src;
  }
  v36 = v33 + 1;
  v70 = v36;
  v37 = v36 - i - 1;
  v71 = v0;
  if ( v37 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v37);
  v38 = &v0[i];
  if ( v38 )
    *v38 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_CHASE_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t300\t\tTAS"
           "K_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_"
           "ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCON"
           "D_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_LOST_ENEMY\t\tCOND_STRIDER_"
           "HAS_CANNON_TARGET\n";
  v72 = "SCHED_STRIDER_COMBAT_FACE";
  v73 = 101;
  sub_10229160(v63, v65, &v72);
  i = v36;
  if ( v36 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v36 - v68 + 1);
    v36 = v70;
    v0 = Src;
  }
  v39 = v36 + 1;
  v70 = v39;
  v40 = v39 - i - 1;
  v71 = v0;
  if ( v40 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v40);
  v41 = &v0[i];
  if ( v41 )
    *v41 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_COMBAT_FACE\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tTA"
           "SK_WAIT_FACE_ENEMY\t1\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTAC"
           "K1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_STRIDER_HAS_CANNON_TARGET\n";
  v72 = "SCHED_STRIDER_AGGRESSIVE_COMBAT_STAND";
  v73 = 102;
  sub_10229160(v63, v65, &v72);
  i = v39;
  if ( v39 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v39 - v68 + 1);
    v39 = v70;
    v0 = Src;
  }
  v42 = v39 + 1;
  v70 = v42;
  v43 = v42 - i - 1;
  v71 = v0;
  if ( v43 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v43);
  v44 = &v0[i];
  if ( v44 )
    *v44 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_AGGRESSIVE_COMBAT_STAND\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVIT"
           "Y:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t1\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tC"
           "OND_HEAVY_DAMAGE\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE_ATTA"
           "CK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_IDLE_INTERRUPT\n";
  v72 = "SCHED_STRIDER_ESTABLISH_LINE_OF_FIRE_CANNON";
  v73 = 103;
  sub_10229160(v63, v65, &v72);
  i = v42;
  if ( v42 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v42 - v68 + 1);
    v42 = v70;
    v0 = Src;
  }
  v45 = v42 + 1;
  v70 = v45;
  v46 = v45 - i - 1;
  v71 = v0;
  if ( v46 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v46);
  v47 = &v0[i];
  if ( v47 )
    *v47 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_STRIDER_ESTABLISH_LINE_OF_FIRE_CANNON\tTasks \t\tTASK_STRIDER_GET_PATH_TO_CANNON_LOS\t\t0\t\tTASK_R"
           "UN_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK_STRIDER_FACE_CANNON_TARGET\t\t\t0\tInterr"
           "upts \t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_STRIDER_SHOULD_CROUCH\t\tCOND_STRIDER_SHOULD_STAND\n";
  v72 = "SCHED_STRIDER_FALL_TO_GROUND";
  v73 = 104;
  sub_10229160(v63, v65, &v72);
  i = v45;
  if ( v45 + 1 > v68 )
  {
    sub_102ABFC0(&Src, v45 - v68 + 1);
    v45 = v70;
    v0 = Src;
  }
  v48 = v45 + 1;
  v70 = v48;
  v49 = v48 - i - 1;
  v71 = v0;
  if ( v49 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v49);
  v50 = &v0[i];
  if ( v50 )
    *v50 = "\n\tSchedule\n\t\tSCHED_STRIDER_FALL_TO_GROUND\tTasks \t\tTASK_STRIDER_FALL_TO_GROUND\t\t0\tInterrupts \n";
  sub_1004BBC0(&dword_106EB750, (int)"CNPC_Strider", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106EB79C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v63, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v59, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v55, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v54, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  i = 0;
  if ( v65 <= 0 )
  {
LABEL_104:
    i = 0;
    if ( v61 <= 0 )
    {
LABEL_107:
      for ( i = 0; i < v57; ++i )
      {
        v73 = *(_DWORD *)(v55[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106EB784,
                  *(_DWORD *)(v55[0] + 8 * i),
                  *(_DWORD *)(v55[0] + 8 * i + 4),
                  "condition",
                  off_10679E08) )
            goto LABEL_128;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v73);
        }
      }
      i = 0;
      if ( v48 > 0 )
      {
        v52 = byte_10679E00;
        do
        {
          if ( !v52 )
            break;
          v52 = sub_100A7A40(&dword_10694898, "CNPC_Strider", v0[i], (int)&dword_106EB750);
          byte_10679E00 = v52;
          ++i;
        }
        while ( i < v48 );
      }
LABEL_128:
      sub_102375F0(v54);
    }
    else
    {
      while ( sub_1007DB90(
                dword_106EB76C,
                *(_DWORD *)(v59[0] + 8 * i),
                *(_DWORD *)(v59[0] + 8 * i + 4),
                "task",
                off_10679E08) )
      {
        if ( ++i >= v61 )
          goto LABEL_107;
      }
    }
    sub_102375F0(v55);
    sub_102375F0(v59);
    sub_102375F0(v63);
    sub_102375F0(v53);
    return sub_102375F0((int *)&Src);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EB754,
                 *(_DWORD *)(v63[0] + 8 * i),
                 *(_DWORD *)(v63[0] + 8 * i + 4),
                 "schedule",
                 off_10679E08);
      if ( !result )
        break;
      if ( ++i >= v65 )
        goto LABEL_104;
    }
    if ( v56 >= 0 )
    {
      result = v55[0];
      if ( v55[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v55[0]);
    }
    if ( v60 >= 0 )
    {
      result = v59[0];
      if ( v59[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v59[0]);
    }
    if ( v64 >= 0 )
    {
      result = v63[0];
      if ( v63[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v63[0]);
    }
    if ( v69 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
  return result;
}
