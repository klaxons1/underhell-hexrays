char sub_102F9B90()
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
  char result; // al
  char v46; // al
  int v47[5]; // [esp+Ch] [ebp-84h] BYREF
  int v48[5]; // [esp+20h] [ebp-70h] BYREF
  int v49[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v50; // [esp+3Ch] [ebp-54h]
  int v51; // [esp+40h] [ebp-50h]
  int v52; // [esp+44h] [ebp-4Ch]
  int v53[2]; // [esp+48h] [ebp-48h] BYREF
  int v54; // [esp+50h] [ebp-40h]
  int v55; // [esp+54h] [ebp-3Ch]
  int v56; // [esp+58h] [ebp-38h]
  int v57[2]; // [esp+5Ch] [ebp-34h] BYREF
  int v58; // [esp+64h] [ebp-2Ch]
  int v59; // [esp+68h] [ebp-28h]
  int v60; // [esp+6Ch] [ebp-24h]
  void *Src; // [esp+70h] [ebp-20h] BYREF
  int v62; // [esp+74h] [ebp-1Ch]
  int v63; // [esp+78h] [ebp-18h]
  int v64; // [esp+7Ch] [ebp-14h]
  void *v65; // [esp+80h] [ebp-10h]
  const char *v66; // [esp+84h] [ebp-Ch] BYREF
  int v67; // [esp+88h] [ebp-8h]
  int i; // [esp+8Ch] [ebp-4h]

  Src = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  memset(v47, 0, sizeof(v47));
  v57[0] = 0;
  v57[1] = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v53[0] = 0;
  v53[1] = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v49[0] = 0;
  v49[1] = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  memset(v48, 0, sizeof(v48));
  v66 = "TASK_ALYX_BEGIN_INTERACTION";
  v67 = 153;
  sub_10229160(v53, 0, &v66);
  v66 = "TASK_ALYX_COMPLETE_INTERACTION";
  v67 = 154;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_ANNOUNCE_HACK";
  v67 = 155;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_GET_PATH_TO_INTERACT_TARGET";
  v67 = 156;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_WAIT_HACKING";
  v67 = 157;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_DRAW_PISTOL";
  v67 = 159;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_HOLSTER_PISTOL";
  v67 = 158;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_HOLSTER_AND_DESTROY_PISTOL";
  v67 = 160;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_BUILD_COMBAT_FACE_PATH";
  v67 = 161;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_SET_IDLE_ACTIVITY";
  v67 = 162;
  sub_10229160(v53, v55, &v66);
  v66 = "TASK_ALYX_FALL_TO_GROUND";
  v67 = 163;
  sub_10229160(v53, v55, &v66);
  dword_106E2778 = sub_1013BF10((int)"AE_ALYX_EMPTOOL_ATTACHMENT");
  sub_1006AFD0((int)"AE_ALYX_EMPTOOL_ATTACHMENT", dword_106E2778);
  dword_106E2774 = sub_1013BF10((int)"AE_ALYX_EMPTOOL_SEQUENCE");
  sub_1006AFD0((int)"AE_ALYX_EMPTOOL_SEQUENCE", dword_106E2774);
  dword_106E2770 = sub_1013BF10((int)"AE_ALYX_EMPTOOL_USE");
  sub_1006AFD0((int)"AE_ALYX_EMPTOOL_USE", dword_106E2770);
  dword_106E276C = sub_1013BF10((int)"COMBINE_AE_BEGIN_ALTFIRE");
  sub_1006AFD0((int)"COMBINE_AE_BEGIN_ALTFIRE", dword_106E276C);
  dword_106E2768 = sub_1013BF10((int)"COMBINE_AE_ALTFIRE");
  sub_1006AFD0((int)"COMBINE_AE_ALTFIRE", dword_106E2768);
  v66 = "COND_ALYX_HAS_INTERACT_TARGET";
  v67 = 79;
  sub_10229160(v49, 0, &v66);
  v66 = "COND_ALYX_NO_INTERACT_TARGET";
  v67 = 80;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_CAN_INTERACT_WITH_TARGET";
  v67 = 81;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_CAN_NOT_INTERACT_WITH_TARGET";
  v67 = 82;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_PLAYER_TURNED_ON_FLASHLIGHT";
  v67 = 83;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_PLAYER_TURNED_OFF_FLASHLIGHT";
  v67 = 84;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_PLAYER_FLASHLIGHT_EXPIRED";
  v67 = 85;
  sub_10229160(v49, v51, &v66);
  v66 = "COND_ALYX_IN_DARK";
  v67 = 86;
  sub_10229160(v49, v51, &v66);
  dword_106E279C = sub_100032E0((int)"ACT_ALYX_DRAW_TOOL");
  sub_10008F60((int)"ACT_ALYX_DRAW_TOOL", dword_106E279C);
  dword_106E2798 = sub_100032E0((int)"ACT_ALYX_IDLE_TOOL");
  sub_10008F60((int)"ACT_ALYX_IDLE_TOOL", dword_106E2798);
  dword_106E2794 = sub_100032E0((int)"ACT_ALYX_ZAP_TOOL");
  sub_10008F60((int)"ACT_ALYX_ZAP_TOOL", dword_106E2794);
  dword_106E2790 = sub_100032E0((int)"ACT_ALYX_HOLSTER_TOOL");
  sub_10008F60((int)"ACT_ALYX_HOLSTER_TOOL", dword_106E2790);
  dword_106E278C = sub_100032E0((int)"ACT_ALYX_PICKUP_RACK");
  sub_10008F60((int)"ACT_ALYX_PICKUP_RACK", dword_106E278C);
  v66 = "SCHED_ALYX_PREPARE_TO_INTERACT_WITH_TARGET";
  v67 = 98;
  sub_10229160(v57, 0, &v66);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v64 + 1;
  v2 = v64++;
  v65 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ALYX_PREPARE_TO_INTERACT_WITH_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t"
          "\t\t\t\t\tACTIVITY:ACT_ALYX_DRAW_TOOL\t\tTASK_SET_ACTIVITY\t\t\t\t\t\tACTIVITY:ACT_ALYX_IDLE_TOOL\t\tTASK_FACE"
          "_PLAYER\t\t\t\t\t\t0\tInterrupts\n";
  v66 = "SCHED_ALYX_WAIT_TO_INTERACT_WITH_TARGET";
  v67 = 99;
  sub_10229160(v57, v59, &v66);
  i = v1;
  if ( v1 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v1 - v62 + 1);
    v1 = v64;
    v0 = Src;
  }
  v3 = v1 + 1;
  v64 = v3;
  v4 = v3 - i - 1;
  v65 = v0;
  if ( v4 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v4);
  v5 = &v0[i];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ALYX_WAIT_TO_INTERACT_WITH_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_ALYX_ANNOUNCE_HACK"
          "\t\t\t\t\t0\t\tTASK_FACE_PLAYER\t\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\t\tACTIVITY:ACT_ALYX_IDLE_TOOL\t\tTA"
          "SK_WAIT\t\t\t\t\t\t\t\t2\tInterrupts\t\tCOND_ALYX_CAN_INTERACT_WITH_TARGET\t\tCOND_ALYX_NO_INTERACT_TARGET\t\t"
          "COND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v66 = "SCHED_ALYX_INTERACT_WITH_TARGET";
  v67 = 100;
  sub_10229160(v57, v59, &v66);
  i = v3;
  if ( v3 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v3 - v62 + 1);
    v3 = v64;
    v0 = Src;
  }
  v6 = v3 + 1;
  v64 = v6;
  v7 = v6 - i - 1;
  v65 = v0;
  if ( v7 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v7);
  v8 = &v0[i];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ALYX_INTERACT_WITH_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_FACE_PLAYER\t\t\t\t\t\t0\t"
          "\tTASK_ALYX_BEGIN_INTERACTION\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\t\tACTIVITY:ACT_ALYX_ZAP_TOOL\t\tTASK_SET"
          "_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_ALYX_FINISH_INTERACTING_WITH_TARGET\tInterrupts\t\tCOND_ALYX_NO_INTERACT_T"
          "ARGET\t\tCOND_ALYX_CAN_NOT_INTERACT_WITH_TARGET\n";
  v66 = "SCHED_ALYX_FINISH_INTERACTING_WITH_TARGET";
  v67 = 102;
  sub_10229160(v57, v59, &v66);
  i = v6;
  if ( v6 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v6 - v62 + 1);
    v6 = v64;
    v0 = Src;
  }
  v9 = v6 + 1;
  v64 = v9;
  v10 = v9 - i - 1;
  v65 = v0;
  if ( v10 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v10);
  v11 = &v0[i];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_FINISH_INTERACTING_WITH_TARGET\tTasks\t\tTASK_ALYX_COMPLETE_INTERACTION\t\t\t0\t\tTASK_PLAY_SE"
           "QUENCE\t\t\t\t\t\tACTIVITY:ACT_ALYX_HOLSTER_TOOL\tInterrupts\n";
  v66 = "SCHED_ALYX_HOLSTER_EMP";
  v67 = 103;
  sub_10229160(v57, v59, &v66);
  i = v9;
  if ( v9 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v9 - v62 + 1);
    v9 = v64;
    v0 = Src;
  }
  v12 = v9 + 1;
  v64 = v12;
  v13 = v12 - i - 1;
  v65 = v0;
  if ( v13 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v13);
  v14 = &v0[i];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_HOLSTER_EMP\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\t\t\tACTIVITY:"
           "ACT_ALYX_HOLSTER_TOOL\t\tTASK_ALYX_DRAW_PISTOL\t\t\t\t\t0\tInterrupts\n";
  v66 = "SCHED_ALYX_INTERACTION_INTERRUPTED";
  v67 = 101;
  sub_10229160(v57, v59, &v66);
  i = v12;
  if ( v12 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v12 - v62 + 1);
    v12 = v64;
    v0 = Src;
  }
  v15 = v12 + 1;
  v64 = v15;
  v16 = v15 - i - 1;
  v65 = v0;
  if ( v16 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v16);
  v17 = &v0[i];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_INTERACTION_INTERRUPTED\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\t"
           "\tACTIVITY:ACT_IDLE\t\tTASK_FACE_PLAYER\t\t\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t\t2\tInterrupts\n";
  v66 = "SCHED_ALYX_ALERT_FACE_AWAYFROM_BESTSOUND";
  v67 = 104;
  sub_10229160(v57, v59, &v66);
  i = v15;
  if ( v15 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v15 - v62 + 1);
    v15 = v64;
    v0 = Src;
  }
  v18 = v15 + 1;
  v64 = v18;
  v19 = v18 - i - 1;
  v65 = v0;
  if ( v19 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v19);
  v20 = &v0[i];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_ALERT_FACE_AWAYFROM_BESTSOUND\tTasks\t\tTASK_STORE_BESTSOUND_REACTORIGIN_IN_SAVEPOSITION\t\t0\t"
           "\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_FACE_AWAY_FROM_SAVEPOSITION\t0\t\tTASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:A"
           "CT_IDLE\t\tTASK_WAIT\t\t\t\t\t\t\t10.0\t\tTASK_FACE_REASONABLE\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND"
           "_SEE_FEAR\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\n";
  v66 = "SCHED_ALYX_RANGE_ATTACK1";
  v67 = 105;
  sub_10229160(v57, v59, &v66);
  i = v18;
  if ( v18 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v18 - v62 + 1);
    v18 = v64;
    v0 = Src;
  }
  v21 = v18 + 1;
  v64 = v21;
  v22 = v21 - i - 1;
  v65 = v0;
  if ( v22 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v22);
  v23 = &v0[i];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUNCE_ATTAC"
           "K\t1\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\tCOND_ENEMY_WENT_NULL\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_OCCLUD"
           "ED\t\tCOND_NO_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\n";
  v66 = "SCHED_ALYX_ALERT_REACT_TO_COMBAT_SOUND";
  v67 = 106;
  sub_10229160(v57, v59, &v66);
  i = v21;
  if ( v21 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v21 - v62 + 1);
    v21 = v64;
    v0 = Src;
  }
  v24 = v21 + 1;
  v64 = v24;
  v25 = v24 - i - 1;
  v65 = v0;
  if ( v25 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v25);
  v26 = &v0[i];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_ALERT_REACT_TO_COMBAT_SOUND\tTasks\t\tTASK_REACT_TO_COMBAT_SOUND\t\t0\t\tTASK_SET_SCHEDULE\t\t"
           "\t\tSCHEDULE:SCHED_ALERT_FACE_BESTSOUND\tInterrupts\t\tCOND_NEW_ENEMY\n";
  v66 = "SCHED_ALYX_COMBAT_FACE";
  v67 = 107;
  sub_10229160(v57, v59, &v66);
  i = v24;
  if ( v24 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v24 - v62 + 1);
    v24 = v64;
    v0 = Src;
  }
  v27 = v24 + 1;
  v64 = v27;
  v28 = v27 - i - 1;
  v65 = v0;
  if ( v28 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v28);
  v29 = &v0[i];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_COMBAT_FACE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COMBAT_FACE\t\tTASK_STOP_MO"
           "VING\t\t\t\t\t0\t\tTASK_ALYX_BUILD_COMBAT_FACE_PATH\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t"
           "\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\t\t"
           "COND_CAN_MELEE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\n";
  v66 = "SCHED_ALYX_WAKE_ANGRY";
  v67 = 108;
  sub_10229160(v57, v59, &v66);
  i = v27;
  if ( v27 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v27 - v62 + 1);
    v27 = v64;
    v0 = Src;
  }
  v30 = v27 + 1;
  v64 = v30;
  v31 = v30 - i - 1;
  v65 = v0;
  if ( v31 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v31);
  v32 = &v0[i];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_WAKE_ANGRY\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SOUND_WAKE\t\t\t0\tInterrupts\n";
  v66 = "SCHED_ALYX_NEW_WEAPON";
  v67 = 109;
  sub_10229160(v57, v59, &v66);
  i = v30;
  if ( v30 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v30 - v62 + 1);
    v30 = v64;
    v0 = Src;
  }
  v33 = v30 + 1;
  v64 = v33;
  v34 = v33 - i - 1;
  v65 = v0;
  if ( v34 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v34);
  v35 = &v0[i];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_NEW_WEAPON\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t\t5\t\t"
           "TASK_GET_PATH_TO_TARGET_WEAPON\t\t\t0\t\tTASK_WEAPON_RUN_PATH\t\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\t"
           "TASK_ALYX_HOLSTER_AND_DESTROY_PISTOL\t0\t\tTASK_FACE_TARGET\t\t\t\t\t\t0\t\tTASK_WEAPON_PICKUP\t\t\t\t\t\t0\t"
           "\tTASK_WAIT\t\t\t\t\t\t\t\t1\tInterrupts\n";
  v66 = "SCHED_ALYX_IDLE_STAND";
  v67 = 110;
  sub_10229160(v57, v59, &v66);
  i = v33;
  if ( v33 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v33 - v62 + 1);
    v33 = v64;
    v0 = Src;
  }
  v36 = v33 + 1;
  v64 = v36;
  v37 = v36 - i - 1;
  v65 = v0;
  if ( v37 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v37);
  v38 = &v0[i];
  if ( v38 )
    *v38 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_IDLE_STAND\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_ALYX_SET_IDLE_ACTIVITY ACTIVITY:ACT_IDLE\t\t"
           "TASK_WAIT\t\t\t\t5\t\tTASK_WAIT_PVS\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT_DAMAG"
           "E\t\tCOND_HEAVY_DAMAGE\t\tCOND_SMELL\t\tCOND_PROVOKED\t\tCOND_GIVE_WAY\t\tCOND_HEAR_PLAYER\t\tCOND_HEAR_DANGE"
           "R\t\tCOND_HEAR_COMBAT\t\tCOND_HEAR_BULLET_IMPACT\t\tCOND_IDLE_INTERRUPT\n";
  v66 = "SCHED_ALYX_FALL_TO_GROUND";
  v67 = 112;
  sub_10229160(v57, v59, &v66);
  i = v36;
  if ( v36 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v36 - v62 + 1);
    v36 = v64;
    v0 = Src;
  }
  v39 = v36 + 1;
  v64 = v39;
  v40 = v39 - i - 1;
  v65 = v0;
  if ( v40 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v40);
  v41 = &v0[i];
  if ( v41 )
    *v41 = "\n\tSchedule\n\t\tSCHED_ALYX_FALL_TO_GROUND\tTasks\t\tTASK_ALYX_FALL_TO_GROUND\t\t0\tInterrupts\n";
  v66 = "SCHED_ALYX_ALERT_FACE_BESTSOUND";
  v67 = 111;
  sub_10229160(v57, v59, &v66);
  i = v39;
  if ( v39 + 1 > v62 )
  {
    sub_102ABFC0(&Src, v39 - v62 + 1);
    v39 = v64;
    v0 = Src;
  }
  v42 = v39 + 1;
  v64 = v42;
  v43 = v42 - i - 1;
  v65 = v0;
  if ( v43 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v43);
  v44 = &v0[i];
  if ( v44 )
    *v44 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ALYX_ALERT_FACE_BESTSOUND\tTasks\t\tTASK_STORE_BESTSOUND_REACTORIGIN_IN_SAVEPOSITION\t\t0\t\tTASK_S"
           "TOP_MOVING\t\t\t0\t\tTASK_FACE_SAVEPOSITION\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT"
           "_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\n";
  sub_1004BBC0(&dword_106E28D0, (int)"CNPC_Alyx", (int)dword_10690E5C, (int)&unk_106EA398);
  sub_1007DAB0(dword_106E291C, (int)dword_1069528C, (int)&unk_106EA3E4);
  sub_1004C500((int)v57, sub_10333A80);
  sub_1004C500((int)v53, sub_10333A80);
  sub_1004C500((int)v49, sub_10333A80);
  sub_1004C500((int)v48, sub_10333A80);
  i = 0;
  if ( v59 <= 0 )
  {
LABEL_92:
    i = 0;
    if ( v55 <= 0 )
    {
LABEL_95:
      for ( i = 0; i < v51; ++i )
      {
        v67 = *(_DWORD *)(v49[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106E2904,
                  *(_DWORD *)(v49[0] + 8 * i),
                  *(_DWORD *)(v49[0] + 8 * i + 4),
                  "condition",
                  off_1066A0A0) )
            goto LABEL_125;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v67);
        }
      }
      i = 0;
      if ( v42 > 0 )
      {
        v46 = byte_1066A098;
        do
        {
          if ( !v46 )
            break;
          v46 = sub_100A7A40(&dword_10694898, "CNPC_Alyx", v0[i], (int)&dword_106E28D0);
          byte_1066A098 = v46;
          ++i;
        }
        while ( i < v42 );
      }
LABEL_125:
      sub_102375F0(v48);
      sub_102375F0(v49);
      sub_102375F0(v53);
      sub_102375F0(v57);
    }
    else
    {
      while ( sub_1007DB90(
                dword_106E28EC,
                *(_DWORD *)(v53[0] + 8 * i),
                *(_DWORD *)(v53[0] + 8 * i + 4),
                "task",
                off_1066A0A0) )
      {
        if ( ++i >= v55 )
          goto LABEL_95;
      }
      if ( v50 >= 0 && v49[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v49[0]);
      if ( v54 >= 0 && v53[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v53[0]);
      if ( v58 >= 0 && v57[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v57[0]);
    }
    sub_102375F0(v47);
    return sub_102375F0((int *)&Src);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E28D4,
                 *(_DWORD *)(v57[0] + 8 * i),
                 *(_DWORD *)(v57[0] + 8 * i + 4),
                 "schedule",
                 off_1066A0A0);
      if ( !result )
        break;
      if ( ++i >= v59 )
        goto LABEL_92;
    }
    if ( v50 >= 0 )
    {
      result = v49[0];
      if ( v49[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v49[0]);
    }
    if ( v54 >= 0 )
    {
      result = v53[0];
      if ( v53[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v53[0]);
    }
    if ( v58 >= 0 )
    {
      result = v57[0];
      if ( v57[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v57[0]);
    }
    if ( v63 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
  return result;
}
