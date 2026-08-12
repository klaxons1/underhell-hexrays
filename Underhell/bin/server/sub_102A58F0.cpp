char sub_102A58F0()
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
  char result; // al
  char v34; // al
  int v35[5]; // [esp+Ch] [ebp-70h] BYREF
  int v36[2]; // [esp+20h] [ebp-5Ch] BYREF
  int v37; // [esp+28h] [ebp-54h]
  int v38; // [esp+2Ch] [ebp-50h]
  int v39; // [esp+30h] [ebp-4Ch]
  int v40[2]; // [esp+34h] [ebp-48h] BYREF
  int v41; // [esp+3Ch] [ebp-40h]
  int v42; // [esp+40h] [ebp-3Ch]
  int v43; // [esp+44h] [ebp-38h]
  int v44[2]; // [esp+48h] [ebp-34h] BYREF
  int v45; // [esp+50h] [ebp-2Ch]
  int v46; // [esp+54h] [ebp-28h]
  int v47; // [esp+58h] [ebp-24h]
  void *Src; // [esp+5Ch] [ebp-20h] BYREF
  int v49; // [esp+60h] [ebp-1Ch]
  int v50; // [esp+64h] [ebp-18h]
  int v51; // [esp+68h] [ebp-14h]
  void *v52; // [esp+6Ch] [ebp-10h]
  const char *v53; // [esp+70h] [ebp-Ch] BYREF
  int v54; // [esp+74h] [ebp-8h]
  int i; // [esp+78h] [ebp-4h]

  Src = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  memset(v35, 0, sizeof(v35));
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
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  dword_106DB634 = sub_100032E0((int)"ACT_PASSENGER_IDLE_AIM");
  sub_10008F60((int)"ACT_PASSENGER_IDLE_AIM", dword_106DB634);
  dword_106DB630 = sub_100032E0((int)"ACT_PASSENGER_RELOAD");
  sub_10008F60((int)"ACT_PASSENGER_RELOAD", dword_106DB630);
  dword_106DB62C = sub_100032E0((int)"ACT_PASSENGER_OVERTURNED");
  sub_10008F60((int)"ACT_PASSENGER_OVERTURNED", dword_106DB62C);
  dword_106DB628 = sub_100032E0((int)"ACT_PASSENGER_IMPACT");
  sub_10008F60((int)"ACT_PASSENGER_IMPACT", dword_106DB628);
  dword_106DB624 = sub_100032E0((int)"ACT_PASSENGER_IMPACT_WEAPON");
  sub_10008F60((int)"ACT_PASSENGER_IMPACT_WEAPON", dword_106DB624);
  dword_106DB620 = sub_100032E0((int)"ACT_PASSENGER_POINT");
  sub_10008F60((int)"ACT_PASSENGER_POINT", dword_106DB620);
  dword_106DB61C = sub_100032E0((int)"ACT_PASSENGER_POINT_BEHIND");
  sub_10008F60((int)"ACT_PASSENGER_POINT_BEHIND", dword_106DB61C);
  dword_106DB618 = sub_100032E0((int)"ACT_PASSENGER_IDLE_READY");
  sub_10008F60((int)"ACT_PASSENGER_IDLE_READY", dword_106DB618);
  dword_106DB614 = sub_100032E0((int)"ACT_PASSENGER_GESTURE_JOSTLE_LARGE");
  sub_10008F60((int)"ACT_PASSENGER_GESTURE_JOSTLE_LARGE", dword_106DB614);
  dword_106DB610 = sub_100032E0((int)"ACT_PASSENGER_GESTURE_JOSTLE_SMALL");
  sub_10008F60((int)"ACT_PASSENGER_GESTURE_JOSTLE_SMALL", dword_106DB610);
  dword_106DB60C = sub_100032E0((int)"ACT_PASSENGER_GESTURE_JOSTLE_LARGE_STIMULATED");
  sub_10008F60((int)"ACT_PASSENGER_GESTURE_JOSTLE_LARGE_STIMULATED", dword_106DB60C);
  dword_106DB608 = sub_100032E0((int)"ACT_PASSENGER_GESTURE_JOSTLE_SMALL_STIMULATED");
  sub_10008F60((int)"ACT_PASSENGER_GESTURE_JOSTLE_SMALL_STIMULATED", dword_106DB608);
  dword_106DB604 = sub_100032E0((int)"ACT_PASSENGER_COWER_IN");
  sub_10008F60((int)"ACT_PASSENGER_COWER_IN", dword_106DB604);
  dword_106DB600 = sub_100032E0((int)"ACT_PASSENGER_COWER_LOOP");
  sub_10008F60((int)"ACT_PASSENGER_COWER_LOOP", dword_106DB600);
  dword_106DB5FC = sub_100032E0((int)"ACT_PASSENGER_COWER_OUT");
  sub_10008F60((int)"ACT_PASSENGER_COWER_OUT", dword_106DB5FC);
  dword_106DB5F8 = sub_100032E0((int)"ACT_PASSENGER_IDLE_FIDGET");
  sub_10008F60((int)"ACT_PASSENGER_IDLE_FIDGET", dword_106DB5F8);
  v53 = "TASK_GET_PATH_TO_VEHICLE_ENTRY_POINT";
  v54 = 100005;
  sub_10229160(v36, 0, &v53);
  v53 = "TASK_GET_PATH_TO_NEAR_VEHICLE";
  v54 = 100006;
  sub_10229160(v36, v38, &v53);
  v53 = "TASK_PASSENGER_RELOAD";
  v54 = 100007;
  sub_10229160(v36, v38, &v53);
  v53 = "TASK_PASSENGER_EXIT_STUCK_VEHICLE";
  v54 = 100008;
  sub_10229160(v36, v38, &v53);
  v53 = "TASK_PASSENGER_OVERTURNED";
  v54 = 100009;
  sub_10229160(v36, v38, &v53);
  v53 = "TASK_PASSENGER_IMPACT";
  v54 = 100010;
  sub_10229160(v36, v38, &v53);
  v53 = "TASK_RUN_TO_VEHICLE_ENTRANCE";
  v54 = 100011;
  sub_10229160(v36, v38, &v53);
  v53 = "COND_PASSENGER_VEHICLE_MOVED_FROM_MARK";
  v54 = 100014;
  sub_10229160(v40, 0, &v53);
  v53 = "COND_PASSENGER_CAN_LEAVE_STUCK_VEHICLE";
  v54 = 100011;
  sub_10229160(v40, v42, &v53);
  v53 = "COND_PASSENGER_WARN_OVERTURNED";
  v54 = 100012;
  sub_10229160(v40, v42, &v53);
  v53 = "COND_PASSENGER_WARN_COLLISION";
  v54 = 100013;
  sub_10229160(v40, v42, &v53);
  v53 = "COND_PASSENGER_CAN_FIDGET";
  v54 = 100015;
  sub_10229160(v40, v42, &v53);
  v53 = "COND_PASSENGER_CAN_ENTER_IMMEDIATELY";
  v54 = 100016;
  sub_10229160(v40, v42, &v53);
  v53 = "SCHED_PASSENGER_RUN_TO_ENTER_VEHICLE";
  v54 = 100007;
  sub_10229160(v44, 0, &v53);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v51 + 1;
  v2 = v51++;
  v52 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_RUN_TO_ENTER_VEHICLE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_PASSENGER_RUN_TO"
          "_ENTER_VEHICLE_FAILED\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t36\t\tTASK_SET_ROUTE_SEAR"
          "CH_TIME\t\t5\t\tTASK_GET_PATH_TO_VEHICLE_ENTRY_POINT\t0\t\tTASK_RUN_TO_VEHICLE_ENTRANCE\t0\t\tTASK_SET_SCHEDUL"
          "E\t\t\t\tSCHEDULE:SCHED_PASSENGER_ENTER_VEHICLE\tInterrupts\t\tCOND_PASSENGER_CAN_ENTER_IMMEDIATELY\t\tCOND_PA"
          "SSENGER_CANCEL_ENTER\n";
  v53 = "SCHED_PASSENGER_RUN_TO_ENTER_VEHICLE_FAILED";
  v54 = 100008;
  sub_10229160(v44, v46, &v53);
  i = v1;
  if ( v1 + 1 > v49 )
  {
    sub_102ABFC0(v1 - v49 + 1);
    v1 = v51;
    v0 = Src;
  }
  v3 = v1 + 1;
  v51 = v3;
  v4 = v3 - i - 1;
  v52 = v0;
  if ( v4 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v4);
  v5 = &v0[i];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_RUN_TO_ENTER_VEHICLE_FAILED\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_PASSENGER"
          "_ENTER_VEHICLE_PAUSE\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t36\t\tTASK_SET_ROUTE_SEARC"
          "H_TIME\t\t3\t\tTASK_GET_PATH_TO_NEAR_VEHICLE\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t"
          "Interrupts\t\tCOND_PASSENGER_CANCEL_ENTER\n";
  v53 = "SCHED_PASSENGER_ENTER_VEHICLE_PAUSE";
  v54 = 100009;
  sub_10229160(v44, v46, &v53);
  i = v3;
  if ( v3 + 1 > v49 )
  {
    sub_102ABFC0(v3 - v49 + 1);
    v3 = v51;
    v0 = Src;
  }
  v6 = v3 + 1;
  v51 = v6;
  v7 = v6 - i - 1;
  v52 = v0;
  if ( v7 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v7);
  v8 = &v0[i];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_ENTER_VEHICLE_PAUSE\tTasks\t\tTASK_STOP_MOVING\t\t\t1\t\tTASK_FACE_TARGET\t\t\t0\t\tTASK_W"
          "AIT\t\t\t\t\t2\tInterrupts\t\tCOND_LIGHT_DAMAGE\t\tCOND_NEW_ENEMY\t\tCOND_PASSENGER_CANCEL_ENTER\n";
  v53 = "SCHED_PASSENGER_RANGE_ATTACK1";
  v54 = 100010;
  sub_10229160(v44, v46, &v53);
  i = v6;
  if ( v6 + 1 > v49 )
  {
    sub_102ABFC0(v6 - v49 + 1);
    v6 = v51;
    v0 = Src;
  }
  v9 = v6 + 1;
  v51 = v9;
  v10 = v9 - i - 1;
  v52 = v0;
  if ( v10 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v10);
  v11 = &v0[i];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_RANGE_ATTACK1\tTasks\t\tTASK_ANNOUNCE_ATTACK\t1\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\t"
           "COND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_OCCLUDED\t\tCOND_NO"
           "_PRIMARY_AMMO\t\tCOND_HEAR_DANGER\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\n";
  v53 = "SCHED_PASSENGER_EXIT_STUCK_VEHICLE";
  v54 = 100012;
  sub_10229160(v44, v46, &v53);
  i = v9;
  if ( v9 + 1 > v49 )
  {
    sub_102ABFC0(v9 - v49 + 1);
    v9 = v51;
    v0 = Src;
  }
  v12 = v9 + 1;
  v51 = v12;
  v13 = v12 - i - 1;
  v52 = v0;
  if ( v13 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v13);
  v14 = &v0[i];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_EXIT_STUCK_VEHICLE\tTasks\t\tTASK_PASSENGER_EXIT_STUCK_VEHICLE\t\t0\tInterrupts\n";
  v53 = "SCHED_PASSENGER_RELOAD";
  v54 = 100011;
  sub_10229160(v44, v46, &v53);
  i = v12;
  if ( v12 + 1 > v49 )
  {
    sub_102ABFC0(v12 - v49 + 1);
    v12 = v51;
    v0 = Src;
  }
  v15 = v12 + 1;
  v51 = v15;
  v16 = v15 - i - 1;
  v52 = v0;
  if ( v16 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v16);
  v17 = &v0[i];
  if ( v17 )
    *v17 = "\n\tSchedule\n\t\tSCHED_PASSENGER_RELOAD\tTasks\t\tTASK_PASSENGER_RELOAD\t\t0\tInterrupts\n";
  v53 = "SCHED_PASSENGER_OVERTURNED";
  v54 = 100013;
  sub_10229160(v44, v46, &v53);
  i = v15;
  if ( v15 + 1 > v49 )
  {
    sub_102ABFC0(v15 - v49 + 1);
    v15 = v51;
    v0 = Src;
  }
  v18 = v15 + 1;
  v51 = v18;
  v19 = v18 - i - 1;
  v52 = v0;
  if ( v19 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v19);
  v20 = &v0[i];
  if ( v20 )
    *v20 = "\n\tSchedule\n\t\tSCHED_PASSENGER_OVERTURNED\tTasks\t\tTASK_PASSENGER_OVERTURNED\t0\tInterrupts\n";
  v53 = "SCHED_PASSENGER_IMPACT";
  v54 = 100014;
  sub_10229160(v44, v46, &v53);
  i = v18;
  if ( v18 + 1 > v49 )
  {
    sub_102ABFC0(v18 - v49 + 1);
    v18 = v51;
    v0 = Src;
  }
  v21 = v18 + 1;
  v51 = v21;
  v22 = v21 - i - 1;
  v52 = v0;
  if ( v22 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v22);
  v23 = &v0[i];
  if ( v23 )
    *v23 = "\n\tSchedule\n\t\tSCHED_PASSENGER_IMPACT\tTasks\t\tTASK_PASSENGER_IMPACT\t0\tInterrupts\n";
  v53 = "SCHED_PASSENGER_ENTER_VEHICLE_IMMEDIATELY";
  v54 = 100015;
  sub_10229160(v44, v46, &v53);
  i = v21;
  if ( v21 + 1 > v49 )
  {
    sub_102ABFC0(v21 - v49 + 1);
    v21 = v51;
    v0 = Src;
  }
  v24 = v21 + 1;
  v51 = v24;
  v25 = v24 - i - 1;
  v52 = v0;
  if ( v25 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v25);
  v26 = &v0[i];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_ENTER_VEHICLE_IMMEDIATELY\tTasks\t\tTASK_PASSENGER_ATTACH_TO_VEHICLE\t0\t\tTASK_PASSENGER"
           "_ENTER_VEHICLE\t\t0\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v53 = "SCHED_PASSENGER_COWER";
  v54 = 100016;
  sub_10229160(v44, v46, &v53);
  i = v24;
  if ( v24 + 1 > v49 )
  {
    sub_102ABFC0(v24 - v49 + 1);
    v24 = v51;
    v0 = Src;
  }
  v27 = v24 + 1;
  v51 = v27;
  v28 = v27 - i - 1;
  v52 = v0;
  if ( v28 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v28);
  v29 = &v0[i];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_COWER\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_PASSENGER_COWER_IN\t\tTASK_PLAY_"
           "SEQUENCE\t\t\t\t\tACTIVITY:ACT_PASSENGER_COWER_LOOP\t\tTASK_WAIT_UNTIL_NO_DANGER_SOUND\t\t0\t\tTASK_WAIT\t\t\t"
           "\t\t\t\t2\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_PASSENGER_COWER_OUT\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v53 = "SCHED_PASSENGER_FIDGET";
  v54 = 100017;
  sub_10229160(v44, v46, &v53);
  i = v27;
  if ( v27 + 1 > v49 )
  {
    sub_102ABFC0(v27 - v49 + 1);
    v27 = v51;
    v0 = Src;
  }
  v30 = v27 + 1;
  v51 = v30;
  v31 = v30 - i - 1;
  v52 = v0;
  if ( v31 > 0 )
    memcpy(&v0[i + 1], &v0[i], 4 * v31);
  v32 = &v0[i];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_FIDGET\tTasks\t\tTASK_PLAY_SEQUENCE\t\tACTIVITY:ACT_PASSENGER_IDLE_FIDGET\tInterrupts\t\t"
           "COND_NO_CUSTOM_INTERRUPTS\n";
  sub_1004BBC0(&dword_106DB718, (int)"CAI_PassengerBehaviorCompanion", (int)dword_10690E5C, (int)&dword_106DB568);
  sub_1004C500((int)v44, sub_10333A80);
  sub_1004C500((int)v36, sub_10333A80);
  sub_1004C500((int)v40, sub_10333A80);
  i = 0;
  if ( v46 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106DB71C,
                 *(_DWORD *)(v44[0] + 8 * i),
                 *(_DWORD *)(v44[0] + 8 * i + 4),
                 "schedule",
                 off_1065F028);
      if ( !result )
        goto LABEL_74;
    }
    while ( ++i < v46 );
  }
  i = 0;
  if ( v38 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106DB734,
                 *(_DWORD *)(v36[0] + 8 * i),
                 *(_DWORD *)(v36[0] + 8 * i + 4),
                 "task",
                 off_1065F028);
      if ( !result )
        break;
      if ( ++i >= v38 )
        goto LABEL_71;
    }
LABEL_74:
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
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
    if ( v50 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    return result;
  }
LABEL_71:
  for ( i = 0; i < v42; ++i )
  {
    v54 = *(_DWORD *)(v40[0] + 8 * i);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
    {
      result = sub_1007DB90(
                 dword_106DB74C,
                 *(_DWORD *)(v40[0] + 8 * i),
                 *(_DWORD *)(v40[0] + 8 * i + 4),
                 "condition",
                 off_1065F028);
      if ( !result )
        goto LABEL_74;
    }
    else
    {
      DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v54);
    }
  }
  i = 0;
  if ( v30 > 0 )
  {
    v34 = byte_1065F020;
    do
    {
      if ( !v34 )
        break;
      v34 = sub_100A7A40(&dword_10694898, "CAI_PassengerBehaviorCompanion", v0[i], (int)&dword_106DB718);
      byte_1065F020 = v34;
      ++i;
    }
    while ( i < v30 );
  }
  if ( v41 >= 0 )
  {
    if ( v40[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
  }
  sub_102375F0(v36);
  sub_102375F0(v44);
  sub_102375F0(v35);
  return sub_102375F0((int *)&Src);
}
