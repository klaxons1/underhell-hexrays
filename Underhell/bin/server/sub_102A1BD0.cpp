void sub_102A1BD0()
{
  _DWORD *v0; // edi
  const char *v1; // esi
  int v2; // eax
  const char *v3; // ecx
  const char *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  const char *v7; // ecx
  const char *v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  const char *v11; // ecx
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // edi
  int v16; // edi
  int i; // edi
  int v18; // edi
  char v19; // al
  int v20[2]; // [esp+Ch] [ebp-58h] BYREF
  int v21; // [esp+14h] [ebp-50h]
  int v22; // [esp+18h] [ebp-4Ch]
  int v23; // [esp+1Ch] [ebp-48h]
  int v24[2]; // [esp+20h] [ebp-44h] BYREF
  int v25; // [esp+28h] [ebp-3Ch]
  int v26; // [esp+2Ch] [ebp-38h]
  int v27; // [esp+30h] [ebp-34h]
  void *Src; // [esp+34h] [ebp-30h]
  int v29; // [esp+38h] [ebp-2Ch]
  int v30; // [esp+3Ch] [ebp-28h]
  const char *v31; // [esp+40h] [ebp-24h]
  void *v32; // [esp+44h] [ebp-20h]
  int v33[2]; // [esp+48h] [ebp-1Ch] BYREF
  int v34; // [esp+50h] [ebp-14h]
  int v35; // [esp+54h] [ebp-10h]
  int v36; // [esp+58h] [ebp-Ch]
  const char *v37; // [esp+5Ch] [ebp-8h] BYREF
  int v38; // [esp+60h] [ebp-4h]

  Src = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v33[0] = 0;
  v33[1] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  dword_106DB4CC = sub_100032E0((int)"ACT_PASSENGER_IDLE");
  sub_10008F60((int)"ACT_PASSENGER_IDLE", dword_106DB4CC);
  dword_106DB4C8 = sub_100032E0((int)"ACT_PASSENGER_RANGE_ATTACK1");
  sub_10008F60((int)"ACT_PASSENGER_RANGE_ATTACK1", dword_106DB4C8);
  v37 = "COND_PASSENGER_HARD_IMPACT";
  v38 = 100000;
  sub_10229160(v33, 0, &v37);
  v37 = "COND_PASSENGER_ENTERING";
  v38 = 100001;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_EXITING";
  v38 = 100002;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_VEHICLE_STARTED";
  v38 = 100003;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_VEHICLE_STOPPED";
  v38 = 100004;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_OVERTURNED";
  v38 = 100005;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_CANCEL_ENTER";
  v38 = 100006;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_ERRATIC_DRIVING";
  v38 = 100007;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_PLAYER_ENTERED_VEHICLE";
  v38 = 100008;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_PLAYER_EXITED_VEHICLE";
  v38 = 100009;
  sub_10229160(v33, v35, &v37);
  v37 = "COND_PASSENGER_JOSTLE_SMALL";
  v38 = 100010;
  sub_10229160(v33, v35, &v37);
  v37 = "TASK_PASSENGER_ENTER_VEHICLE";
  v38 = 100000;
  sub_10229160(v24, 0, &v37);
  v37 = "TASK_PASSENGER_EXIT_VEHICLE";
  v38 = 100001;
  sub_10229160(v24, v26, &v37);
  v37 = "TASK_PASSENGER_ATTACH_TO_VEHICLE";
  v38 = 100002;
  sub_10229160(v24, v26, &v37);
  v37 = "TASK_PASSENGER_DETACH_FROM_VEHICLE";
  v38 = 100003;
  sub_10229160(v24, v26, &v37);
  v37 = "TASK_PASSENGER_SET_IDEAL_ENTRY_YAW";
  v38 = 100004;
  sub_10229160(v24, v26, &v37);
  v37 = "SCHED_PASSENGER_ENTER_VEHICLE";
  v38 = 100001;
  sub_10229160(v20, 0, &v37);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v31 + 1;
  v2 = (int)v31++;
  v32 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_ENTER_VEHICLE\tTasks\t\tTASK_PASSENGER_SET_IDEAL_ENTRY_YAW\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t"
          "\t0\t\tTASK_PASSENGER_ATTACH_TO_VEHICLE\t0\t\tTASK_PASSENGER_ENTER_VEHICLE\t\t0\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v37 = "SCHED_PASSENGER_EXIT_VEHICLE";
  v38 = 100002;
  sub_10229160(v20, v22, &v37);
  v3 = v1;
  v38 = (int)v1;
  if ( (int)(v1 + 1) > v29 )
  {
    sub_102ABFC0(&v1[-v29 + 1]);
    v1 = v31;
    v0 = Src;
    v3 = (const char *)v38;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v31 = v4;
  v32 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[(_DWORD)v3 + 1], &v0[(_DWORD)v3], 4 * v5);
    v3 = (const char *)v38;
  }
  v6 = &v0[(_DWORD)v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_EXIT_VEHICLE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE:SCHED_PASSENGER_IDLE\t\tTASK_PAS"
          "SENGER_DETACH_FROM_VEHICLE\t0\t\tTASK_WAIT 0.1\t\tTASK_PASSENGER_EXIT_VEHICLE\t0\tInterrupts\t\tCOND_NO_CUSTOM"
          "_INTERRUPTS\t\tCOND_TASK_FAILED\n";
  v37 = "SCHED_PASSENGER_IDLE";
  v38 = 100000;
  sub_10229160(v20, v22, &v37);
  v7 = v4;
  v38 = (int)v4;
  if ( (int)(v4 + 1) > v29 )
  {
    sub_102ABFC0(&v4[-v29 + 1]);
    v4 = v31;
    v0 = Src;
    v7 = (const char *)v38;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v31 = v8;
  v32 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[(_DWORD)v7 + 1], &v0[(_DWORD)v7], 4 * v9);
    v7 = (const char *)v38;
  }
  v10 = &v0[(_DWORD)v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_IDLE\tTasks\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT\t\t\t\t\t2\tInterrup"
           "ts\t\tCOND_PROVOKED\t\tCOND_NEW_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_PASSENGER_E"
           "XITING\t\tCOND_HEAR_DANGER\n";
  v37 = "SCHED_PASSENGER_PLAY_SCRIPTED_ANIM";
  v38 = 100006;
  sub_10229160(v20, v22, &v37);
  v11 = v8;
  v38 = (int)v8;
  if ( (int)(v8 + 1) > v29 )
  {
    sub_102ABFC0(&v8[-v29 + 1]);
    v8 = v31;
    v0 = Src;
    v11 = (const char *)v38;
  }
  v12 = (int)(v8 + 1);
  v13 = v12 - (_DWORD)v11 - 1;
  if ( v13 > 0 )
  {
    memcpy(&v0[(_DWORD)v11 + 1], &v0[(_DWORD)v11], 4 * v13);
    v11 = (const char *)v38;
  }
  v14 = &v0[(_DWORD)v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_PLAY_SCRIPTED_ANIM\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\tACTIVITY:ACT_SCRIPT_CUSTOM_MOVE\tInt"
           "errupts\t\tCOND_PASSENGER_HARD_IMPACT\n";
  sub_1004BBC0(&dword_106DB568, (int)"CAI_PassengerBehavior", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v20, sub_10333A80);
  sub_1004C500((int)v24, sub_10333A80);
  sub_1004C500((int)v33, sub_10333A80);
  v15 = 0;
  if ( v22 <= 0 )
  {
LABEL_26:
    v16 = 0;
    if ( v26 <= 0 )
    {
LABEL_29:
      for ( i = 0; i < v35; ++i )
      {
        v38 = *(_DWORD *)(v33[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106DB59C,
                  *(_DWORD *)(v33[0] + 8 * i),
                  *(_DWORD *)(v33[0] + 8 * i + 4),
                  "condition",
                  off_1065EAEC) )
            goto LABEL_38;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v38);
        }
      }
      v18 = 0;
      if ( v12 > 0 )
      {
        v19 = byte_1065EAE4;
        do
        {
          if ( !v19 )
            break;
          v19 = sub_100A7A40(&dword_10694898, "CAI_PassengerBehavior", *((_DWORD *)Src + v18++), (int)&dword_106DB568);
          byte_1065EAE4 = v19;
        }
        while ( v18 < v12 );
      }
    }
    else
    {
      while ( sub_1007DB90(
                dword_106DB584,
                *(_DWORD *)(v24[0] + 8 * v16),
                *(_DWORD *)(v24[0] + 8 * v16 + 4),
                "task",
                off_1065EAEC) )
      {
        if ( ++v16 >= v26 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    while ( sub_1007DB90(
              dword_106DB56C,
              *(_DWORD *)(v20[0] + 8 * v15),
              *(_DWORD *)(v20[0] + 8 * v15 + 4),
              "schedule",
              off_1065EAEC) )
    {
      if ( ++v15 >= v22 )
        goto LABEL_26;
    }
  }
LABEL_38:
  if ( v34 >= 0 && v33[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33[0]);
  if ( v25 >= 0 && v24[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
  if ( v21 >= 0 && v20[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20[0]);
  if ( v30 >= 0 )
  {
    if ( Src )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  }
}
