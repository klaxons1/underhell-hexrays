int sub_10391120()
{
  _DWORD *v0; // edi
  int v1; // esi
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
  int v47; // esi
  int v48; // eax
  _DWORD *v49; // eax
  int v50; // esi
  int v51; // eax
  _DWORD *v52; // eax
  int v53; // esi
  int v54; // eax
  _DWORD *v55; // eax
  int v56; // esi
  int v57; // eax
  _DWORD *v58; // eax
  int v59; // esi
  int v60; // eax
  _DWORD *v61; // eax
  int v62; // esi
  int v63; // eax
  _DWORD *v64; // edi
  int v65; // esi
  int v66; // edi
  int v67; // esi
  int v68; // edi
  int v69; // esi
  const char *v70; // edi
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
  int v94; // [esp+7Ch] [ebp-10h]
  void *v95; // [esp+80h] [ebp-Ch]
  const char *v96; // [esp+84h] [ebp-8h] BYREF
  int v97; // [esp+88h] [ebp-4h] BYREF

  flt_106E9D08 = 0.0;
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
  memset(v79, 0, sizeof(v79));
  v80 = 0;
  v81 = 0;
  memset(v82, 0, sizeof(v82));
  v83 = 0;
  v84 = 0;
  dword_106E9D44 = sub_1013BF10((int)"AE_METROPOLICE_BATON_ON");
  sub_1006AFD0((int)"AE_METROPOLICE_BATON_ON", dword_106E9D44);
  dword_106E9D40 = sub_1013BF10((int)"AE_METROPOLICE_BATON_OFF");
  sub_1006AFD0((int)"AE_METROPOLICE_BATON_OFF", dword_106E9D40);
  dword_106E9D3C = sub_1013BF10((int)"AE_METROPOLICE_SHOVE");
  sub_1006AFD0((int)"AE_METROPOLICE_SHOVE", dword_106E9D3C);
  dword_106E9D38 = sub_1013BF10((int)"AE_METROPOLICE_START_DEPLOY");
  sub_1006AFD0((int)"AE_METROPOLICE_START_DEPLOY", dword_106E9D38);
  dword_106E9D34 = sub_1013BF10((int)"AE_METROPOLICE_DRAW_PISTOL");
  sub_1006AFD0((int)"AE_METROPOLICE_DRAW_PISTOL", dword_106E9D34);
  dword_106E9D30 = sub_1013BF10((int)"AE_METROPOLICE_DEPLOY_MANHACK");
  sub_1006AFD0((int)"AE_METROPOLICE_DEPLOY_MANHACK", dword_106E9D30);
  v96 = "SQUAD_SLOT_POLICE_CHARGE_ENEMY";
  v97 = 8;
  sub_10229160(v82, 0, &v96);
  v96 = "SQUAD_SLOT_POLICE_HARASS";
  v97 = 9;
  sub_10229160(v82, v83, &v96);
  v96 = "SQUAD_SLOT_POLICE_DEPLOY_MANHACK";
  v97 = 10;
  sub_10229160(v82, v83, &v96);
  v96 = "SQUAD_SLOT_POLICE_ATTACK_OCCLUDER1";
  v97 = 12;
  sub_10229160(v82, v83, &v96);
  v96 = "SQUAD_SLOT_POLICE_ATTACK_OCCLUDER2";
  v97 = 13;
  sub_10229160(v82, v83, &v96);
  v96 = "SQUAD_SLOT_POLICE_ARREST_ENEMY";
  v97 = 16;
  sub_10229160(v82, v83, &v96);
  dword_106E9D2C = sub_100032E0((int)"ACT_METROPOLICE_DRAW_PISTOL");
  sub_10008F60((int)"ACT_METROPOLICE_DRAW_PISTOL", dword_106E9D2C);
  dword_106E9D28 = sub_100032E0((int)"ACT_METROPOLICE_DEPLOY_MANHACK");
  sub_10008F60((int)"ACT_METROPOLICE_DEPLOY_MANHACK", dword_106E9D28);
  dword_106E9D24 = sub_100032E0((int)"ACT_METROPOLICE_FLINCH_BEHIND");
  sub_10008F60((int)"ACT_METROPOLICE_FLINCH_BEHIND", dword_106E9D24);
  dword_106E9D18 = sub_100032E0((int)"ACT_PUSH_PLAYER");
  sub_10008F60((int)"ACT_PUSH_PLAYER", dword_106E9D18);
  dword_106E9D14 = sub_100032E0((int)"ACT_MELEE_ATTACK_THRUST");
  sub_10008F60((int)"ACT_MELEE_ATTACK_THRUST", dword_106E9D14);
  dword_106E9D10 = sub_100032E0((int)"ACT_ACTIVATE_BATON");
  sub_10008F60((int)"ACT_ACTIVATE_BATON", dword_106E9D10);
  dword_106E9D0C = sub_100032E0((int)"ACT_DEACTIVATE_BATON");
  sub_10008F60((int)"ACT_DEACTIVATE_BATON", dword_106E9D0C);
  dword_106E9D20 = sub_100032E0((int)"ACT_WALK_BATON");
  sub_10008F60((int)"ACT_WALK_BATON", dword_106E9D20);
  dword_106E9D1C = sub_100032E0((int)"ACT_IDLE_ANGRY_BATON");
  sub_10008F60((int)"ACT_IDLE_ANGRY_BATON", dword_106E9D1C);
  dword_106E9D48 = sub_100C7680();
  dword_106E9D4C = sub_100C7680();
  dword_106E9D50 = sub_100C7680();
  v96 = "TASK_METROPOLICE_HARASS";
  v97 = 150;
  sub_10229160(v85, 0, &v96);
  v96 = "TASK_METROPOLICE_DIE_INSTANTLY";
  v97 = 151;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_BURST_ATTACK";
  v97 = 152;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_STOP_FIRE_BURST";
  v97 = 153;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_AT_PLAYER";
  v97 = 154;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_AT_AIRBOAT";
  v97 = 155;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_IN_FRONT_OF_AIRBOAT";
  v97 = 157;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_TIGHTLY";
  v97 = 156;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_ALONG_SIDE_OF_AIRBOAT";
  v97 = 158;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_AIM_STITCH_BEHIND_AIRBOAT";
  v97 = 159;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_RELOAD_FOR_BURST";
  v97 = 160;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_GET_PATH_TO_STITCH";
  v97 = 161;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_RESET_LEDGE_CHECK_TIME";
  v97 = 162;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_GET_PATH_TO_BESTSOUND_LOS";
  v97 = 163;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_ARREST_ENEMY";
  v97 = 165;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_LEAD_ARREST_ENEMY";
  v97 = 166;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_SIGNAL_FIRING_TIME";
  v97 = 167;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_ACTIVATE_BATON";
  v97 = 168;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_WAIT_FOR_SENTENCE";
  v97 = 169;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_GET_PATH_TO_PRECHASE";
  v97 = 170;
  sub_10229160(v85, v86, &v96);
  v96 = "TASK_METROPOLICE_CLEAR_PRECHASE";
  v97 = 171;
  sub_10229160(v85, v86, &v96);
  v96 = "COND_METROPOLICE_ON_FIRE";
  v97 = 73;
  sub_10229160(v79, 0, &v96);
  v96 = "COND_METROPOLICE_ENEMY_RESISTING_ARREST";
  v97 = 74;
  sub_10229160(v79, v80, &v96);
  v96 = "COND_METROPOLICE_PLAYER_TOO_CLOSE";
  v97 = 75;
  sub_10229160(v79, v80, &v96);
  v96 = "COND_METROPOLICE_CHANGE_BATON_STATE";
  v97 = 76;
  sub_10229160(v79, v80, &v96);
  v96 = "COND_METROPOLICE_PHYSOBJECT_ASSAULT";
  v97 = 77;
  sub_10229160(v79, v80, &v96);
  v96 = "SCHED_METROPOLICE_WAKE_ANGRY";
  v97 = 89;
  sub_10229160(v88, 0, &v96);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v94 + 1;
  v94 = v1;
  v95 = Src;
  if ( v1 - 1 > 0 )
    memcpy((char *)Src + 4, Src, 4 * (v1 - 1));
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_METROPOLICE_WAKE_ANGRY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_"
          "IDLE\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tInterrupts\n";
  v96 = "SCHED_METROPOLICE_INVESTIGATE_SOUND";
  v97 = 107;
  sub_10229160(v88, v89, &v96);
  v97 = v1;
  if ( v1 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v1 - v92 + 1);
    v1 = v94;
    v0 = Src;
  }
  v2 = v1 + 1;
  v94 = v2;
  v3 = v2 - v97 - 1;
  v95 = v0;
  if ( v3 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v3);
  v4 = &v0[v97];
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_METROPOLICE_INVESTIGATE_SOUND\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_STORE_LASTPOSITION\t\t\t0\t"
          "\tTASK_METROPOLICE_GET_PATH_TO_BESTSOUND_LOS\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\t"
          "TASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t5\t\tTASK_GET_PATH_TO_LASTP"
          "OSITION\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_"
          "CLEAR_LASTPOSITION\t\t\t0\t\tTASK_FACE_REASONABLE\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tCON"
          "D_SEE_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\n";
  v96 = "SCHED_METROPOLICE_HARASS";
  v97 = 90;
  sub_10229160(v88, v89, &v96);
  v97 = v2;
  if ( v2 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v2 - v92 + 1);
    v2 = v94;
    v0 = Src;
  }
  v5 = v2 + 1;
  v94 = v5;
  v6 = v5 - v97 - 1;
  v95 = v0;
  if ( v6 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v6);
  v7 = &v0[v97];
  if ( v7 )
    *v7 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_METROPOLICE_HARASS\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_WAIT_FA"
          "CE_ENEMY\t\t\t6\t\tTASK_METROPOLICE_HARASS\t\t\t0\t\tTASK_WAIT_PVS\t\t\t\t\t0\t\tInterrupts\t\t\tCOND_CAN_RANG"
          "E_ATTACK1\t\tCOND_NEW_ENEMY\n";
  v96 = "SCHED_METROPOLICE_DRAW_PISTOL";
  v97 = 93;
  sub_10229160(v88, v89, &v96);
  v97 = v5;
  if ( v5 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v5 - v92 + 1);
    v5 = v94;
    v0 = Src;
  }
  v8 = v5 + 1;
  v94 = v8;
  v9 = v8 - v97 - 1;
  v95 = v0;
  if ( v9 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v9);
  v10 = &v0[v97];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_DRAW_PISTOL\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\tACTIV"
           "ITY:ACT_METROPOLICE_DRAW_PISTOL\t\tTASK_WAIT_FACE_ENEMY\t\t\t0.1\t\tInterrupts\t\n";
  v96 = "SCHED_METROPOLICE_CHASE_ENEMY";
  v97 = 91;
  sub_10229160(v88, v89, &v96);
  v97 = v8;
  if ( v8 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v8 - v92 + 1);
    v8 = v94;
    v0 = Src;
  }
  v11 = v8 + 1;
  v94 = v11;
  v12 = v11 - v97 - 1;
  v95 = v0;
  if ( v12 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v12);
  v13 = &v0[v97];
  if ( v13 )
    *v13 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_CHASE_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE"
           ":SCHED_METROPOLICE_ESTABLISH_LINE_OF_FIRE\t\tTASK_SET_TOLERANCE_DISTANCE\t\t24\t\tTASK_GET_CHASE_PATH_TO_ENEM"
           "Y\t300\t\tTASK_SPEAK_SENTENCE\t\t\t\t6\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_METROPOLICE_RESET_LEDGE_CHECK_TIME"
           " 0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENE"
           "MY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_RANGE_ATTAC"
           "K2\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_BETTE"
           "R_WEAPON_AVAILABLE\t\tCOND_HEAR_DANGER\n";
  v96 = "SCHED_METROPOLICE_ESTABLISH_LINE_OF_FIRE";
  v97 = 92;
  sub_10229160(v88, v89, &v96);
  v97 = v11;
  if ( v11 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v11 - v92 + 1);
    v11 = v94;
    v0 = Src;
  }
  v14 = v11 + 1;
  v94 = v14;
  v15 = v14 - v97 - 1;
  v95 = v0;
  if ( v15 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v15);
  v16 = &v0[v97];
  if ( v16 )
    *v16 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ESTABLISH_LINE_OF_FIRE\tTasks \t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_FAIL_ESTAB"
           "LISH_LINE_OF_FIRE\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t48\t\tTASK_GET_PATH_TO_ENEM"
           "Y_LKP_LOS\t0\t\tTASK_SPEAK_SENTENCE\t\t\t\t6\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_METROPOLICE_RESET_LEDGE_CHEC"
           "K_TIME 0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COMBAT_FACE\t\tInterrupt"
           "s \t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\tCOND_CAN_MELEE"
           "_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\tCOND_HEAVY_DAMAGE\n";
  v96 = "SCHED_METROPOLICE_ESTABLISH_STITCH_LINE_OF_FIRE";
  v97 = 106;
  sub_10229160(v88, v89, &v96);
  v97 = v14;
  if ( v14 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v14 - v92 + 1);
    v14 = v94;
    v0 = Src;
  }
  v17 = v14 + 1;
  v94 = v17;
  v18 = v17 - v97 - 1;
  v95 = v0;
  if ( v18 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v18);
  v19 = &v0[v97];
  if ( v19 )
    *v19 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ESTABLISH_STITCH_LINE_OF_FIRE\tTasks \t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_FAI"
           "L_ESTABLISH_LINE_OF_FIRE\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t48\t\tTASK_METROPOLI"
           "CE_GET_PATH_TO_STITCH\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_SET_SCHEDULE\t\t"
           "\t\tSCHEDULE:SCHED_COMBAT_FACE\t\tInterrupts \t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_HEAR_DANGER\t\tCON"
           "D_HEAVY_DAMAGE\n";
  v96 = "SCHED_METROPOLICE_DEPLOY_MANHACK";
  v97 = 94;
  sub_10229160(v88, v89, &v96);
  v97 = v17;
  if ( v17 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v17 - v92 + 1);
    v17 = v94;
    v0 = Src;
  }
  v20 = v17 + 1;
  v94 = v20;
  v21 = v20 - v97 - 1;
  v95 = v0;
  if ( v21 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v21);
  v22 = &v0[v97];
  if ( v22 )
    *v22 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_DEPLOY_MANHACK\tTasks\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t5\t\tTASK_PLAY_SEQUENCE\t\t\t\t\t"
           "ACTIVITY:ACT_METROPOLICE_DEPLOY_MANHACK\t\tInterrupts\t\n";
  v96 = "SCHED_METROPOLICE_ADVANCE";
  v97 = 95;
  sub_10229160(v88, v89, &v96);
  v97 = v20;
  if ( v20 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v20 - v92 + 1);
    v20 = v94;
    v0 = Src;
  }
  v23 = v20 + 1;
  v94 = v23;
  v24 = v23 - v97 - 1;
  v95 = v0;
  if ( v24 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v24);
  v25 = &v0[v97];
  if ( v25 )
    *v25 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ADVANCE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:AC"
           "T_IDLE_ANGRY\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK_WAIT_FACE_ENEMY\t\t\t\t1\t\tTASK_WAIT_FACE_ENEMY_RANDOM\t"
           "\t\t3\t\tTASK_GET_PATH_TO_ENEMY_LOS\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t"
           "\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDLE_ANGRY\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\tInterrupts\t\tCOND_CAN_"
           "RANGE_ATTACK1\t\tCOND_ENEMY_DEAD\n";
  v96 = "SCHED_METROPOLICE_CHARGE";
  v97 = 96;
  sub_10229160(v88, v89, &v96);
  v97 = v23;
  if ( v23 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v23 - v92 + 1);
    v23 = v94;
    v0 = Src;
  }
  v26 = v23 + 1;
  v94 = v26;
  v27 = v26 - v97 - 1;
  v95 = v0;
  if ( v27 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v27);
  v28 = &v0[v97];
  if ( v28 )
    *v28 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_CHARGE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHE"
           "D_METROPOLICE_ADVANCE\t\tTASK_STORE_LASTPOSITION\t\t\t0\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t300\t\tTASK_RUN_PATH"
           "_FOR_UNITS\t\t\t150\t\tTASK_STOP_MOVING\t\t\t\t1\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tC"
           "OND_ENEMY_DEAD\t\tCOND_LOST_ENEMY\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_HEAR_DANGER\t\t"
           "COND_METROPOLICE_PLAYER_TOO_CLOSE\n";
  v96 = "SCHED_METROPOLICE_BURNING_RUN";
  v97 = 97;
  sub_10229160(v88, v89, &v96);
  v97 = v26;
  if ( v26 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v26 - v92 + 1);
    v26 = v94;
    v0 = Src;
  }
  v29 = v26 + 1;
  v94 = v29;
  v30 = v29 - v97 - 1;
  v95 = v0;
  if ( v30 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v30);
  v31 = &v0[v97];
  if ( v31 )
    *v31 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_BURNING_RUN\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_METROPOLICE_BURNING_ST"
           "AND\t\tTASK_SET_TOLERANCE_DISTANCE\t\t24\t\tTASK_GET_PATH_TO_ENEMY\t\t\t0\t\tTASK_RUN_PATH_TIMED\t\t\t\t10\t\t"
           "TASK_METROPOLICE_DIE_INSTANTLY\t0\t\tInterrupts\n";
  v96 = "SCHED_METROPOLICE_BURNING_STAND";
  v97 = 98;
  sub_10229160(v88, v89, &v96);
  v97 = v29;
  if ( v29 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v29 - v92 + 1);
    v29 = v94;
    v0 = Src;
  }
  v32 = v29 + 1;
  v94 = v32;
  v33 = v32 - v97 - 1;
  v95 = v0;
  if ( v33 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v33);
  v34 = &v0[v97];
  if ( v34 )
    *v34 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_BURNING_STAND\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE_ON_FIRE\t\tTASK_WAIT"
           "\t\t\t\t\t\t1.5\t\tTASK_METROPOLICE_DIE_INSTANTLY\tDMG_BURN\t\tTASK_WAIT\t\t\t\t\t\t1.0\t\tInterrupts\n";
  v96 = "SCHED_METROPOLICE_RETURN_TO_PRECHASE";
  v97 = 119;
  sub_10229160(v88, v89, &v96);
  v97 = v32;
  if ( v32 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v32 - v92 + 1);
    v32 = v94;
    v0 = Src;
  }
  v35 = v32 + 1;
  v94 = v35;
  v36 = v35 - v97 - 1;
  v95 = v0;
  if ( v36 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v36);
  v37 = &v0[v97];
  if ( v37 )
    *v37 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_RETURN_TO_PRECHASE\tTasks\t\tTASK_WAIT_RANDOM\t\t\t\t\t\t1\t\tTASK_METROPOLICE_GET_PATH"
           "_TO_PRECHASE\t0\t\tTASK_WALK_PATH\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\t\tTASK_STOP_MOVING\t\t"
           "\t\t\t\t0\t\tTASK_METROPOLICE_CLEAR_PRECHASE\t\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_CAN_MELEE_ATTACK1"
           "\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_TASK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_HEAR_DANGER\n";
  v96 = "SCHED_METROPOLICE_ALERT_FACE_BESTSOUND";
  v97 = 118;
  sub_10229160(v88, v89, &v96);
  v97 = v35;
  if ( v35 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v35 - v92 + 1);
    v35 = v94;
    v0 = Src;
  }
  v38 = v35 + 1;
  v94 = v38;
  v39 = v38 - v97 - 1;
  v95 = v0;
  if ( v39 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v39);
  v40 = &v0[v97];
  if ( v40 )
    *v40 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ALERT_FACE_BESTSOUND\tTasks\t\tTASK_SPEAK_SENTENCE\t\t7\t\tTASK_SET_SCHEDULE\t\tSCHEDUL"
           "E:SCHED_ALERT_FACE_BESTSOUND\tInterrupts\n";
  v96 = "SCHED_METROPOLICE_ENEMY_RESISTING_ARREST";
  v97 = 110;
  sub_10229160(v88, v89, &v96);
  v97 = v38;
  if ( v38 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v38 - v92 + 1);
    v38 = v94;
    v0 = Src;
  }
  v41 = v38 + 1;
  v94 = v41;
  v42 = v41 - v97 - 1;
  v95 = v0;
  if ( v42 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v42);
  v43 = &v0[v97];
  if ( v43 )
    *v43 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ENEMY_RESISTING_ARREST\tTasks\t\tTASK_METROPOLICE_SIGNAL_FIRING_TIME\t\t0\tInterrupts\n";
  v96 = "SCHED_METROPOLICE_WARN_AND_ARREST_ENEMY";
  v97 = 108;
  sub_10229160(v88, v89, &v96);
  v97 = v41;
  if ( v41 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v41 - v92 + 1);
    v41 = v94;
    v0 = Src;
  }
  v44 = v41 + 1;
  v94 = v44;
  v45 = v44 - v97 - 1;
  v95 = v0;
  if ( v45 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v45);
  v46 = &v0[v97];
  if ( v46 )
    *v46 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_WARN_AND_ARREST_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_METROPOLIC"
           "E_ENEMY_RESISTING_ARREST\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\t\tACTIVITY:ACT_IDLE"
           "_ANGRY\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t0\t\tTASK_METROPOLICE_ARREST_ENEMY\t\t0.5\t\tTASK_STORE_ENEMY_POSITION"
           "_IN_SAVEPOSITION\t0\t\tTASK_METROPOLICE_ARREST_ENEMY\t\t1\t\tTASK_METROPOLICE_WAIT_FOR_SENTENCE\t1\t\tTASK_SP"
           "EAK_SENTENCE\t\t\t\t\t1\t\tTASK_METROPOLICE_LEAD_ARREST_ENEMY\t5\t\tTASK_METROPOLICE_ARREST_ENEMY\t\t2\t\tTAS"
           "K_METROPOLICE_WAIT_FOR_SENTENCE\t1\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t3\t\tTASK_METROPOLICE_ARREST_ENEMY\t\t1.5\t"
           "\tTASK_METROPOLICE_WAIT_FOR_SENTENCE\t2\t\tTASK_METROPOLICE_SIGNAL_FIRING_TIME\t0\tInterrupts\t\tCOND_NEW_ENE"
           "MY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_ENEMY_DEAD\t\tCOND_METROPOLICE_ENEMY"
           "_RESISTING_ARREST\n";
  v96 = "SCHED_METROPOLICE_ARREST_ENEMY";
  v97 = 109;
  sub_10229160(v88, v89, &v96);
  v97 = v44;
  if ( v44 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v44 - v92 + 1);
    v44 = v94;
    v0 = Src;
  }
  v47 = v44 + 1;
  v94 = v47;
  v48 = v47 - v97 - 1;
  v95 = v0;
  if ( v48 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v48);
  v49 = &v0[v97];
  if ( v49 )
    *v49 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_ARREST_ENEMY\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_METROPOLICE_ENEMY_R"
           "ESISTING_ARREST\t\tTASK_GET_PATH_TO_ENEMY_LOS\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t"
           "\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE_FACE_ENEMY\t\tACTIVITY:ACT_IDLE_ANGRY\t\tTASK_ME"
           "TROPOLICE_WAIT_FOR_SENTENCE\t0\t\tTASK_SPEAK_SENTENCE\t\t\t\t\t4\t\tTASK_METROPOLICE_ARREST_ENEMY\t\t30\tInte"
           "rrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_ENEMY_DEAD\t\t"
           "COND_METROPOLICE_ENEMY_RESISTING_ARREST\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\n";
  v96 = "SCHED_METROPOLICE_SMG_NORMAL_ATTACK";
  v97 = 99;
  sub_10229160(v88, v89, &v96);
  v97 = v47;
  if ( v47 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v47 - v92 + 1);
    v47 = v94;
    v0 = Src;
  }
  v50 = v47 + 1;
  v94 = v50;
  v51 = v50 - v97 - 1;
  v95 = v0;
  if ( v51 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v51);
  v52 = &v0[v97];
  if ( v52 )
    *v52 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_SMG_NORMAL_ATTACK\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANN"
           "OUNCE_ATTACK\t1\t\tTASK_METROPOLICE_STOP_FIRE_BURST\t0\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\tCOND_NEW_ENE"
           "MY\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_OCCLUDED\t\tCOND_NO_PRIMARY_AMM"
           "O\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\n";
  v96 = "SCHED_METROPOLICE_SMG_BURST_ATTACK";
  v97 = 100;
  sub_10229160(v88, v89, &v96);
  v97 = v50;
  if ( v50 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v50 - v92 + 1);
    v50 = v94;
    v0 = Src;
  }
  v53 = v50 + 1;
  v94 = v53;
  v54 = v53 - v97 - 1;
  v95 = v0;
  if ( v54 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v54);
  v55 = &v0[v97];
  if ( v55 )
    *v55 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_SMG_BURST_ATTACK\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNO"
           "UNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t1.4\t\tTASK_METROPOLICE_AIM_STITCH_AT_PLAYER\t1.4\t\tTAS"
           "K_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMA"
           "GE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  v96 = "SCHED_METROPOLICE_AIM_STITCH_TIGHTLY";
  v97 = 103;
  sub_10229160(v88, v89, &v96);
  v97 = v53;
  if ( v53 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v53 - v92 + 1);
    v53 = v94;
    v0 = Src;
  }
  v56 = v53 + 1;
  v94 = v56;
  v57 = v56 - v97 - 1;
  v95 = v0;
  if ( v57 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v57);
  v58 = &v0[v97];
  if ( v58 )
    *v58 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_AIM_STITCH_TIGHTLY\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_AN"
           "NOUNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t1.0\t\tTASK_METROPOLICE_AIM_STITCH_TIGHTLY\t1.0\t\tTAS"
           "K_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMA"
           "GE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  v96 = "SCHED_METROPOLICE_AIM_STITCH_AT_AIRBOAT";
  v97 = 101;
  sub_10229160(v88, v89, &v96);
  v97 = v56;
  if ( v56 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v56 - v92 + 1);
    v56 = v94;
    v0 = Src;
  }
  v59 = v56 + 1;
  v94 = v59;
  v60 = v59 - v97 - 1;
  v95 = v0;
  if ( v60 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v60);
  v61 = &v0[v97];
  if ( v61 )
    *v61 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_AIM_STITCH_AT_AIRBOAT\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK"
           "_ANNOUNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t\t2.5\t\tTASK_METROPOLICE_AIM_STITCH_AT_AIRBOAT\t2."
           "5\t\tTASK_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_HE"
           "AVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  v96 = "SCHED_METROPOLICE_AIM_STITCH_IN_FRONT_OF_AIRBOAT";
  v97 = 102;
  sub_10229160(v88, v89, &v96);
  v97 = v59;
  if ( v59 + 1 > v92 )
  {
    sub_102ABFC0(&Src, v59 - v92 + 1);
    v59 = v94;
    v0 = Src;
  }
  v62 = v59 + 1;
  v94 = v62;
  v63 = v62 - v97 - 1;
  v95 = v0;
  if ( v63 > 0 )
    memcpy(&v0[v97 + 1], &v0[v97], 4 * v63);
  v64 = &v0[v97];
  if ( v64 )
    *v64 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_METROPOLICE_AIM_STITCH_IN_FRONT_OF_AIRBOAT\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t"
           "0\t\tTASK_ANNOUNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t\t2.5\t\tTASK_METROPOLICE_AIM_STITCH_IN_FR"
           "ONT_OF_AIRBOAT\t2.5\t\tTASK_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_LIGHT"
           "_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  v96 = "SCHED_METROPOLICE_AIM_STITCH_ALONG_SIDE_OF_AIRBOAT";
  v97 = 104;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_AIM_STITCH_ALONG_SIDE_OF_AIRBOAT\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t"
             "\t\t0\t\tTASK_ANNOUNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t\t2.5\t\tTASK_METROPOLICE_AIM_STITCH"
             "_ALONG_SIDE_OF_AIRBOAT\t2.5\t\tTASK_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\t"
             "COND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  sub_10194990((int *)&Src, v62, &v97);
  v96 = "SCHED_METROPOLICE_AIM_STITCH_BEHIND_AIRBOAT";
  v97 = 105;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_AIM_STITCH_BEHIND_AIRBOAT\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t"
             "\tTASK_ANNOUNCE_ATTACK\t1\t\tTASK_METROPOLICE_RELOAD_FOR_BURST\t\t2.5\t\tTASK_METROPOLICE_AIM_STITCH_BEHIND"
             "_AIRBOAT\t2.5\t\tTASK_METROPOLICE_BURST_ATTACK\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\tInterrupts\t\tCOND_LIGHT_DAM"
             "AGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\n";
  sub_10194990((int *)&Src, v94, &v97);
  v96 = "SCHED_METROPOLICE_SHOVE";
  v97 = 115;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_SHOVE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_PLAYER\t\t\t\t0.1\t\tTASK_METR"
             "OPOLICE_ACTIVATE_BATON\t1\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_PUSH_PLAYER\tInterrupts\n";
  sub_10194990((int *)&Src, v94, &v97);
  v96 = "SCHED_METROPOLICE_ACTIVATE_BATON";
  v97 = 116;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_ACTIVATE_BATON\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_TARGET\t\t\t\t0\t\tTA"
             "SK_METROPOLICE_ACTIVATE_BATON\t1\tInterrupts\n";
  sub_10194990((int *)&Src, v94, &v97);
  v96 = "SCHED_METROPOLICE_DEACTIVATE_BATON";
  v97 = 117;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_DEACTIVATE_BATON\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_METROPOLICE_ACTIVATE_BAT"
             "ON\t0\tInterrupts\n";
  sub_10194990((int *)&Src, v94, &v97);
  v96 = "SCHED_METROPOLICE_SMASH_PROP";
  v97 = 120;
  sub_10229160(v88, v89, &v96);
  v97 = (int)"\n"
             "\tSchedule\n"
             "\t\tSCHED_METROPOLICE_SMASH_PROP\tTasks\t\tTASK_GET_PATH_TO_TARGET\t\t0\t\tTASK_MOVE_TO_TARGET_RANGE\t50\t\t"
             "TASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_TARGET\t\t\t0\t\tTASK_ANNOUNCE_ATTACK\t\t1\t\tTASK_PLAY_SEQUENCE\t\t\t"
             "ACTIVITY:ACT_MELEE_ATTACK1\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\n";
  sub_10194990((int *)&Src, v94, &v97);
  sub_1004BBC0(&dword_106EA070, (int)"CNPC_MetroPolice", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106EA0BC, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v88, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v85, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v79, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v82, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v65 = 0;
  if ( v89 <= 0 )
  {
LABEL_135:
    v67 = 0;
    if ( v86 <= 0 )
    {
LABEL_139:
      v97 = 0;
      if ( v80 > 0 )
      {
        v69 = v79[0];
        do
        {
          v70 = *(const char **)(v69 + 8 * v97);
          if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
          {
            v71 = v97;
            if ( !sub_1007DB90(
                    dword_106EA0A4,
                    *(_DWORD *)(v69 + 8 * v97),
                    *(_DWORD *)(v69 + 8 * v97 + 4),
                    "condition",
                    off_106767E8) )
              goto LABEL_153;
          }
          else
          {
            DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v70);
            v71 = v97;
          }
          v97 = v71 + 1;
        }
        while ( v71 + 1 < v80 );
      }
      v72 = 0;
      if ( v83 <= 0 )
      {
LABEL_149:
        v74 = v94;
        v75 = 0;
        if ( v94 > 0 )
        {
          v76 = byte_106767E0;
          do
          {
            if ( !v76 )
              break;
            v76 = sub_100A7A40(&dword_10694898, "CNPC_MetroPolice", *((_DWORD *)Src + v75++), (int)&dword_106EA070);
            byte_106767E0 = v76;
          }
          while ( v75 < v74 );
        }
      }
      else
      {
        v73 = v82[0];
        while ( sub_1007DB90(
                  dword_106EA0BC,
                  *(_DWORD *)(v73 + 8 * v72),
                  *(_DWORD *)(v73 + 8 * v72 + 4),
                  "squadslot",
                  off_106767E8) )
        {
          if ( ++v72 >= v83 )
            goto LABEL_149;
        }
      }
    }
    else
    {
      v68 = v85[0];
      while ( sub_1007DB90(
                dword_106EA08C,
                *(_DWORD *)(v68 + 8 * v67),
                *(_DWORD *)(v68 + 8 * v67 + 4),
                "task",
                off_106767E8) )
      {
        if ( ++v67 >= v86 )
          goto LABEL_139;
      }
    }
  }
  else
  {
    v66 = v88[0];
    while ( sub_1007DB90(
              dword_106EA074,
              *(_DWORD *)(v66 + 8 * v65),
              *(_DWORD *)(v66 + 8 * v65 + 4),
              "schedule",
              off_106767E8) )
    {
      if ( ++v65 >= v89 )
        goto LABEL_135;
    }
  }
LABEL_153:
  sub_102375F0(v82);
  sub_102375F0(v79);
  sub_102375F0(v85);
  sub_102375F0(v88);
  sub_102375F0(v78);
  return sub_102375F0((int *)&Src);
}
