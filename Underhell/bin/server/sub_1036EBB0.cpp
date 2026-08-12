int sub_1036EBB0()
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
  char v63; // al
  int v65[5]; // [esp+Ch] [ebp-84h] BYREF
  int v66[5]; // [esp+20h] [ebp-70h] BYREF
  int v67[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v68; // [esp+3Ch] [ebp-54h]
  int v69; // [esp+40h] [ebp-50h]
  int v70; // [esp+44h] [ebp-4Ch]
  int v71[3]; // [esp+48h] [ebp-48h] BYREF
  int v72; // [esp+54h] [ebp-3Ch]
  int v73; // [esp+58h] [ebp-38h]
  int v74[3]; // [esp+5Ch] [ebp-34h] BYREF
  int v75; // [esp+68h] [ebp-28h]
  int v76; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v78; // [esp+74h] [ebp-1Ch]
  int v79; // [esp+78h] [ebp-18h]
  int v80; // [esp+7Ch] [ebp-14h]
  void *v81; // [esp+80h] [ebp-10h]
  const char *v82; // [esp+84h] [ebp-Ch] BYREF
  int v83; // [esp+88h] [ebp-8h]
  int i; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  memset(v65, 0, sizeof(v65));
  memset(v74, 0, sizeof(v74));
  v75 = 0;
  v76 = 0;
  memset(v71, 0, sizeof(v71));
  v72 = 0;
  v73 = 0;
  v67[0] = 0;
  v67[1] = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  memset(v66, 0, sizeof(v66));
  v82 = "TASK_HEADCRAB_HOP_ASIDE";
  v83 = 150;
  sub_10229160(v71, 0, &v82);
  v82 = "TASK_HEADCRAB_DROWN";
  v83 = 152;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_HOP_OFF_NPC";
  v83 = 151;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_WAIT_FOR_BARNACLE_KILL";
  v83 = 153;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_UNHIDE";
  v83 = 154;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_HARASS_HOP";
  v83 = 155;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_BURROW";
  v83 = 157;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_UNBURROW";
  v83 = 158;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_FIND_BURROW_IN_POINT";
  v83 = 156;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_BURROW_WAIT";
  v83 = 159;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CHECK_FOR_UNBURROW";
  v83 = 160;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_JUMP_FROM_CANISTER";
  v83 = 161;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CLIMB_FROM_CANISTER";
  v83 = 162;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CEILING_POSITION";
  v83 = 164;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CEILING_WAIT";
  v83 = 163;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CEILING_DETACH";
  v83 = 165;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CEILING_FALL";
  v83 = 166;
  sub_10229160(v71, v72, &v82);
  v82 = "TASK_HEADCRAB_CEILING_LAND";
  v83 = 167;
  sub_10229160(v71, v72, &v82);
  dword_106E8120 = sub_100032E0((int)"ACT_HEADCRAB_THREAT_DISPLAY");
  sub_10008F60((int)"ACT_HEADCRAB_THREAT_DISPLAY", dword_106E8120);
  dword_106E811C = sub_100032E0((int)"ACT_HEADCRAB_HOP_LEFT");
  sub_10008F60((int)"ACT_HEADCRAB_HOP_LEFT", dword_106E811C);
  dword_106E8118 = sub_100032E0((int)"ACT_HEADCRAB_HOP_RIGHT");
  sub_10008F60((int)"ACT_HEADCRAB_HOP_RIGHT", dword_106E8118);
  dword_106E8114 = sub_100032E0((int)"ACT_HEADCRAB_DROWN");
  sub_10008F60((int)"ACT_HEADCRAB_DROWN", dword_106E8114);
  dword_106E8110 = sub_100032E0((int)"ACT_HEADCRAB_BURROW_IN");
  sub_10008F60((int)"ACT_HEADCRAB_BURROW_IN", dword_106E8110);
  dword_106E810C = sub_100032E0((int)"ACT_HEADCRAB_BURROW_OUT");
  sub_10008F60((int)"ACT_HEADCRAB_BURROW_OUT", dword_106E810C);
  dword_106E8108 = sub_100032E0((int)"ACT_HEADCRAB_BURROW_IDLE");
  sub_10008F60((int)"ACT_HEADCRAB_BURROW_IDLE", dword_106E8108);
  dword_106E8104 = sub_100032E0((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_LEFT");
  sub_10008F60((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_LEFT", dword_106E8104);
  dword_106E8100 = sub_100032E0((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_CENTER");
  sub_10008F60((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_CENTER", dword_106E8100);
  dword_106E80FC = sub_100032E0((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_RIGHT");
  sub_10008F60((int)"ACT_HEADCRAB_CRAWL_FROM_CANISTER_RIGHT", dword_106E80FC);
  dword_106E80F0 = sub_100032E0((int)"ACT_HEADCRAB_CEILING_FALL");
  sub_10008F60((int)"ACT_HEADCRAB_CEILING_FALL", dword_106E80F0);
  dword_106E80F8 = sub_100032E0((int)"ACT_HEADCRAB_CEILING_IDLE");
  sub_10008F60((int)"ACT_HEADCRAB_CEILING_IDLE", dword_106E80F8);
  dword_106E80F4 = sub_100032E0((int)"ACT_HEADCRAB_CEILING_DETACH");
  sub_10008F60((int)"ACT_HEADCRAB_CEILING_DETACH", dword_106E80F4);
  dword_106E80EC = sub_100032E0((int)"ACT_HEADCRAB_CEILING_LAND");
  sub_10008F60((int)"ACT_HEADCRAB_CEILING_LAND", dword_106E80EC);
  v82 = "COND_HEADCRAB_IN_WATER";
  v83 = 73;
  sub_10229160(v67, 0, &v82);
  v82 = "COND_HEADCRAB_ILLEGAL_GROUNDENT";
  v83 = 74;
  sub_10229160(v67, v69, &v82);
  v82 = "COND_HEADCRAB_BARNACLED";
  v83 = 75;
  sub_10229160(v67, v69, &v82);
  v82 = "COND_HEADCRAB_UNHIDE";
  v83 = 76;
  sub_10229160(v67, v69, &v82);
  dword_106E8144 = sub_1013BF10((int)"AE_HEADCRAB_JUMPATTACK");
  sub_1006AFD0((int)"AE_HEADCRAB_JUMPATTACK", dword_106E8144);
  dword_106E8140 = sub_1013BF10((int)"AE_HEADCRAB_JUMP_TELEGRAPH");
  sub_1006AFD0((int)"AE_HEADCRAB_JUMP_TELEGRAPH", dword_106E8140);
  dword_106E8130 = sub_1013BF10((int)"AE_HEADCRAB_BURROW_IN");
  sub_1006AFD0((int)"AE_HEADCRAB_BURROW_IN", dword_106E8130);
  dword_106E812C = sub_1013BF10((int)"AE_HEADCRAB_BURROW_IN_FINISH");
  sub_1006AFD0((int)"AE_HEADCRAB_BURROW_IN_FINISH", dword_106E812C);
  dword_106E8128 = sub_1013BF10((int)"AE_HEADCRAB_BURROW_OUT");
  sub_1006AFD0((int)"AE_HEADCRAB_BURROW_OUT", dword_106E8128);
  dword_106E8124 = sub_1013BF10((int)"AE_HEADCRAB_CEILING_DETACH");
  sub_1006AFD0((int)"AE_HEADCRAB_CEILING_DETACH", dword_106E8124);
  v82 = "SCHED_HEADCRAB_RANGE_ATTACK1";
  v83 = 88;
  sub_10229160(v74, 0, &v82);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v80 + 1;
  v2 = v80++;
  v81 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_HEADCRAB_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_RANGE_A"
          "TTACK1\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FACE_IDEAL\t\t\t\t0\t\tTASK_WAIT_RANDOM\t\t\t"
          "0.5\tInterrupts\t\tCOND_ENEMY_OCCLUDED\t\tCOND_NO_PRIMARY_AMMO\n";
  v82 = "SCHED_HEADCRAB_WAKE_ANGRY";
  v83 = 89;
  sub_10229160(v74, v75, &v82);
  i = v1;
  if ( v1 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v1 - v78 + 1);
    v1 = v80;
    v0 = Src;
  }
  v3 = v1 + 1;
  v80 = v3;
  v4 = v3 - i - 1;
  v81 = v0;
  if ( v4 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v4);
  v5 = &v0[i];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_HEADCRAB_WAKE_ANGRY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDL"
          "E \t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_SOUND_WAKE\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_"
          "HEADCRAB_THREAT_DISPLAY\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_WAKE_ANGRY_NO_DISPLAY";
  v83 = 90;
  sub_10229160(v74, v75, &v82);
  i = v3;
  if ( v3 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v3 - v78 + 1);
    v3 = v80;
    v0 = Src;
  }
  v6 = v3 + 1;
  v80 = v6;
  v7 = v6 - i - 1;
  v81 = v0;
  if ( v7 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v7);
  v8 = &v0[i];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_HEADCRAB_WAKE_ANGRY_NO_DISPLAY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIV"
          "ITY:ACT_IDLE \t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_SOUND_WAKE\t\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\tInterrupts\n";
  v82 = "SCHED_FAST_HEADCRAB_RANGE_ATTACK1";
  v83 = 106;
  sub_10229160(v74, v75, &v82);
  i = v6;
  if ( v6 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v6 - v78 + 1);
    v6 = v80;
    v0 = Src;
  }
  v9 = v6 + 1;
  v80 = v9;
  v10 = v9 - i - 1;
  v81 = v0;
  if ( v10 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v10);
  v11 = &v0[i];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_FAST_HEADCRAB_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t0\t\tTASK_R"
           "ANGE_ATTACK1\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FACE_IDEAL\t\t\t\t0\t\tTASK_WAIT_RAND"
           "OM\t\t\t0.5\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_DROWN";
  v83 = 91;
  sub_10229160(v74, v75, &v82);
  i = v9;
  if ( v9 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v9 - v78 + 1);
    v9 = v80;
    v0 = Src;
  }
  v12 = v9 + 1;
  v80 = v12;
  v13 = v12 - i - 1;
  v81 = v0;
  if ( v13 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v13);
  v14 = &v0[i];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_DROWN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE:SCHED_HEADCRAB_FAIL_DROWN\t\tTASK_SET_A"
           "CTIVITY\t\t\tACTIVITY:ACT_HEADCRAB_DROWN\t\tTASK_HEADCRAB_DROWN\t\t\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_FAIL_DROWN";
  v83 = 92;
  sub_10229160(v74, v75, &v82);
  i = v12;
  if ( v12 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v12 - v78 + 1);
    v12 = v80;
    v0 = Src;
  }
  v15 = v12 + 1;
  v80 = v15;
  v16 = v15 - i - 1;
  v81 = v0;
  if ( v16 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v16);
  v17 = &v0[i];
  if ( v17 )
    *v17 = "\n\tSchedule\n\t\tSCHED_HEADCRAB_FAIL_DROWN\tTasks\t\tTASK_HEADCRAB_DROWN\t\t\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_AMBUSH";
  v83 = 93;
  sub_10229160(v74, v75, &v82);
  i = v15;
  if ( v15 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v15 - v78 + 1);
    v15 = v80;
    v0 = Src;
  }
  v18 = v15 + 1;
  v80 = v18;
  v19 = v18 - i - 1;
  v81 = v0;
  if ( v19 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v19);
  v20 = &v0[i];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_AMBUSH\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTA"
           "SK_WAIT_INDEFINITE\t\t0\tInterrupts\t\tCOND_SEE_ENEMY\t\tCOND_SEE_HATE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_LIGH"
           "T_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\n";
  v82 = "SCHED_HEADCRAB_HOP_RANDOMLY";
  v83 = 94;
  sub_10229160(v74, v75, &v82);
  i = v18;
  if ( v18 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v18 - v78 + 1);
    v18 = v80;
    v0 = Src;
  }
  v21 = v18 + 1;
  v80 = v21;
  v22 = v21 - i - 1;
  v81 = v0;
  if ( v22 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v22);
  v23 = &v0[i];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_HOP_RANDOMLY\tTasks\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_HEADCRAB_HOP_OFF_NPC\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_BARNACLED";
  v83 = 95;
  sub_10229160(v74, v75, &v82);
  i = v21;
  if ( v21 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v21 - v78 + 1);
    v21 = v80;
    v0 = Src;
  }
  v24 = v21 + 1;
  v80 = v24;
  v25 = v24 - i - 1;
  v81 = v0;
  if ( v25 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v25);
  v26 = &v0[i];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_BARNACLED\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\t\tACTIVITY"
           ":ACT_HEADCRAB_DROWN\t\tTASK_HEADCRAB_WAIT_FOR_BARNACLE_KILL\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_UNHIDE";
  v83 = 96;
  sub_10229160(v74, v75, &v82);
  i = v24;
  if ( v24 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v24 - v78 + 1);
    v24 = v80;
    v0 = Src;
  }
  v27 = v24 + 1;
  v80 = v27;
  v28 = v27 - i - 1;
  v81 = v0;
  if ( v28 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v28);
  v29 = &v0[i];
  if ( v29 )
    *v29 = "\n\tSchedule\n\t\tSCHED_HEADCRAB_UNHIDE\tTasks\t\tTASK_HEADCRAB_UNHIDE\t\t\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_HARASS_ENEMY";
  v83 = 97;
  sub_10229160(v74, v75, &v82);
  i = v27;
  if ( v27 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v27 - v78 + 1);
    v27 = v80;
    v0 = Src;
  }
  v30 = v27 + 1;
  v80 = v30;
  v31 = v30 - i - 1;
  v81 = v0;
  if ( v31 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v31);
  v32 = &v0[i];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_HARASS_ENEMY\tTasks\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_HEADCRAB_HARASS_HOP\t\t0\t\tTASK"
           "_WAIT_FACE_ENEMY\t\t\t1\t\tTASK_SET_ROUTE_SEARCH_TIME\t\t2\t\tTASK_GET_PATH_TO_RANDOM_NODE\t300\t\tTASK_WALK_"
           "PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\n";
  v82 = "SCHED_HEADCRAB_FALL_TO_GROUND";
  v83 = 98;
  sub_10229160(v74, v75, &v82);
  i = v30;
  if ( v30 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v30 - v78 + 1);
    v30 = v80;
    v0 = Src;
  }
  v33 = v30 + 1;
  v80 = v33;
  v34 = v33 - i - 1;
  v81 = v0;
  if ( v34 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v34);
  v35 = &v0[i];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_FALL_TO_GROUND\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_HEADCRAB_DROWN\t\tTASK_FALL"
           "_TO_GROUND\t\t\t\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_CRAWL_FROM_CANISTER";
  v83 = 105;
  sub_10229160(v74, v75, &v82);
  i = v33;
  if ( v33 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v33 - v78 + 1);
    v33 = v80;
    v0 = Src;
  }
  v36 = v33 + 1;
  v80 = v36;
  v37 = v36 - i - 1;
  v81 = v0;
  if ( v37 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v37);
  v38 = &v0[i];
  if ( v38 )
    *v38 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_CRAWL_FROM_CANISTER\tTasks\t\tTASK_HEADCRAB_CLIMB_FROM_CANISTER\t0\t\tTASK_HEADCRAB_JUMP_F"
           "ROM_CANISTER\t0\tInterrupts\n";
  v82 = "SCHED_HEADCRAB_BURROW_IN";
  v83 = 101;
  sub_10229160(v74, v75, &v82);
  i = v36;
  if ( v36 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v36 - v78 + 1);
    v36 = v80;
    v0 = Src;
  }
  v39 = v36 + 1;
  v80 = v39;
  v40 = v39 - i - 1;
  v81 = v0;
  if ( v40 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v40);
  v41 = &v0[i];
  if ( v41 )
    *v41 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_BURROW_IN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\tTAS"
           "K_HEADCRAB_BURROW\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_HEADCRAB_BURROW_IN\t\tTASK_PLAY_SEQUEN"
           "CE\t\t\t\t\tACTIVITY:ACT_HEADCRAB_BURROW_IDLE\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BURROW_WA"
           "IT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v82 = "SCHED_HEADCRAB_RUN_TO_BURROW_IN";
  v83 = 99;
  sub_10229160(v74, v75, &v82);
  i = v39;
  if ( v39 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v39 - v78 + 1);
    v39 = v80;
    v0 = Src;
  }
  v42 = v39 + 1;
  v80 = v42;
  v43 = v42 - i - 1;
  v81 = v0;
  if ( v43 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v43);
  v44 = &v0[i];
  if ( v44 )
    *v44 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_RUN_TO_BURROW_IN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_FAILED"
           "\t\tTASK_HEADCRAB_FIND_BURROW_IN_POINT\t512\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t8\t\tTASK_RUN_PATH\t\t\t\t\t\t"
           "0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BURROW_IN\tInterru"
           "pts\t\tCOND_TASK_FAILED\t\tCOND_GIVE_WAY\t\tCOND_CAN_RANGE_ATTACK1\n";
  v82 = "SCHED_HEADCRAB_RUN_TO_SPECIFIC_BURROW";
  v83 = 100;
  sub_10229160(v74, v75, &v82);
  i = v42;
  if ( v42 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v42 - v78 + 1);
    v42 = v80;
    v0 = Src;
  }
  v45 = v42 + 1;
  v80 = v45;
  v46 = v45 - i - 1;
  v81 = v0;
  if ( v46 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v46);
  v47 = &v0[i];
  if ( v47 )
    *v47 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_RUN_TO_SPECIFIC_BURROW\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_CHASE_ENEMY_"
           "FAILED\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t8\t\tTASK_GET_PATH_TO_HINTNODE\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t"
           "0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BURROW_IN\tInterru"
           "pts\t\tCOND_TASK_FAILED\t\tCOND_GIVE_WAY\n";
  v82 = "SCHED_HEADCRAB_BURROW_WAIT";
  v83 = 102;
  sub_10229160(v74, v75, &v82);
  i = v45;
  if ( v45 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v45 - v78 + 1);
    v45 = v80;
    v0 = Src;
  }
  v48 = v45 + 1;
  v80 = v48;
  v49 = v48 - i - 1;
  v81 = v0;
  if ( v49 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v49);
  v50 = &v0[i];
  if ( v50 )
    *v50 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_BURROW_WAIT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BURROW_WAIT\t\t"
           "TASK_HEADCRAB_BURROW_WAIT\t\t\t1\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\n";
  v82 = "SCHED_HEADCRAB_BURROW_OUT";
  v83 = 103;
  sub_10229160(v74, v75, &v82);
  i = v48;
  if ( v48 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v48 - v78 + 1);
    v48 = v80;
    v0 = Src;
  }
  v51 = v48 + 1;
  v80 = v51;
  v52 = v51 - i - 1;
  v81 = v0;
  if ( v52 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v52);
  v53 = &v0[i];
  if ( v53 )
    *v53 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_BURROW_OUT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_HEADCRAB_BURROW_WAIT\t\tTA"
           "SK_HEADCRAB_UNBURROW\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_HEADCRAB_BURROW_OUT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v82 = "SCHED_HEADCRAB_WAIT_FOR_CLEAR_UNBURROW";
  v83 = 104;
  sub_10229160(v74, v75, &v82);
  i = v51;
  if ( v51 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v51 - v78 + 1);
    v51 = v80;
    v0 = Src;
  }
  v54 = v51 + 1;
  v80 = v54;
  v55 = v54 - i - 1;
  v81 = v0;
  if ( v55 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v55);
  v56 = &v0[i];
  if ( v56 )
    *v56 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_WAIT_FOR_CLEAR_UNBURROW\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BU"
           "RROW_WAIT\t\tTASK_HEADCRAB_CHECK_FOR_UNBURROW\t\t1\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:SCHED_HEADCRAB_BURR"
           "OW_OUT\tInterrupts\t\tCOND_TASK_FAILED\n";
  v82 = "SCHED_HEADCRAB_CEILING_WAIT";
  v83 = 107;
  sub_10229160(v74, v75, &v82);
  i = v54;
  if ( v54 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v54 - v78 + 1);
    v54 = v80;
    v0 = Src;
  }
  v57 = v54 + 1;
  v80 = v57;
  v58 = v57 - i - 1;
  v81 = v0;
  if ( v58 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v58);
  v59 = &v0[i];
  if ( v59 )
    *v59 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_CEILING_WAIT\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HEADCRAB_CEILING_DROP\t"
           "\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_HEADCRAB_CEILING_IDLE\t\tTASK_HEADCRAB_CEILING_POSITION\t\t0\t\tTAS"
           "K_HEADCRAB_CEILING_WAIT\t\t\t1\tInterrupts\t\tCOND_TASK_FAILED\t\tCOND_NEW_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\n";
  v82 = "SCHED_HEADCRAB_CEILING_DROP";
  v83 = 108;
  sub_10229160(v74, v75, &v82);
  i = v57;
  if ( v57 + 1 > v78 )
  {
    sub_102ABFC0(&Src, v57 - v78 + 1);
    v57 = v80;
    v0 = Src;
  }
  v60 = v57 + 1;
  v80 = v60;
  v61 = v60 - i - 1;
  v81 = v0;
  if ( v61 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v61);
  v62 = &v0[i];
  if ( v62 )
    *v62 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_HEADCRAB_CEILING_DROP\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_HEADCRAB_CEILING_WAIT\t"
           "\tTASK_HEADCRAB_CEILING_DETACH\t\t0\t\tTASK_HEADCRAB_CEILING_FALL\t\t\t0\t\tTASK_HEADCRAB_CEILING_LAND\t\t\t0"
           "\tInterrupts\t\tCOND_TASK_FAILED\n";
  sub_1004BBC0(&dword_106E8308, (int)"CBaseHeadcrab", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E8354, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v74, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v71, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v67, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v66, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  i = 0;
  if ( v75 <= 0 )
  {
LABEL_128:
    i = 0;
    if ( v72 <= 0 )
    {
LABEL_131:
      for ( i = 0; i < v69; ++i )
      {
        v83 = *(_DWORD *)(v67[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106E833C,
                  *(_DWORD *)(v67[0] + 8 * i),
                  *(_DWORD *)(v67[0] + 8 * i + 4),
                  "condition",
                  off_10673A18) )
            goto LABEL_143;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v83);
        }
      }
      i = 0;
      if ( v60 > 0 )
      {
        v63 = byte_10673A10;
        do
        {
          if ( !v63 )
            break;
          v63 = sub_100A7A40(&dword_10694898, "CBaseHeadcrab", v0[i], (int)&dword_106E8308);
          byte_10673A10 = v63;
          ++i;
        }
        while ( i < v60 );
      }
    }
    else
    {
      while ( sub_1007DB90(
                dword_106E8324,
                *(_DWORD *)(v71[0] + 8 * i),
                *(_DWORD *)(v71[0] + 8 * i + 4),
                "task",
                off_10673A18) )
      {
        if ( ++i >= v72 )
          goto LABEL_131;
      }
    }
LABEL_143:
    sub_102375F0(v66);
    sub_102375F0(v67);
  }
  else
  {
    while ( sub_1007DB90(
              dword_106E830C,
              *(_DWORD *)(v74[0] + 8 * i),
              *(_DWORD *)(v74[0] + 8 * i + 4),
              "schedule",
              off_10673A18) )
    {
      if ( ++i >= v75 )
        goto LABEL_128;
    }
    if ( v68 >= 0 && v67[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v67[0]);
  }
  sub_102375F0(v71);
  sub_102375F0(v74);
  sub_102375F0(v65);
  return sub_102375F0((int *)&Src);
}
