void sub_102A7E20()
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
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // edi
  int v19; // edi
  char v20; // al
  int v21[2]; // [esp+Ch] [ebp-58h] BYREF
  int v22; // [esp+14h] [ebp-50h]
  int v23; // [esp+18h] [ebp-4Ch]
  int v24; // [esp+1Ch] [ebp-48h]
  int v25[2]; // [esp+20h] [ebp-44h] BYREF
  int v26; // [esp+28h] [ebp-3Ch]
  int v27; // [esp+2Ch] [ebp-38h]
  int v28; // [esp+30h] [ebp-34h]
  int v29[2]; // [esp+34h] [ebp-30h] BYREF
  int v30; // [esp+3Ch] [ebp-28h]
  int v31; // [esp+40h] [ebp-24h]
  int v32; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h]
  int v35; // [esp+50h] [ebp-14h]
  const char *v36; // [esp+54h] [ebp-10h]
  void *v37; // [esp+58h] [ebp-Ch]
  const char *v38; // [esp+5Ch] [ebp-8h] BYREF
  int v39; // [esp+60h] [ebp-4h]

  Src = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v21[0] = 0;
  v21[1] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  dword_106DB7BC = sub_100032E0((int)"ACT_PASSENGER_MELEE_ATTACK1");
  sub_10008F60((int)"ACT_PASSENGER_MELEE_ATTACK1", dword_106DB7BC);
  dword_106DB7B8 = sub_100032E0((int)"ACT_PASSENGER_THREATEN");
  sub_10008F60((int)"ACT_PASSENGER_THREATEN", dword_106DB7B8);
  dword_106DB7B4 = sub_100032E0((int)"ACT_PASSENGER_FLINCH");
  sub_10008F60((int)"ACT_PASSENGER_FLINCH", dword_106DB7B4);
  dword_106DB7B0 = sub_100032E0((int)"ACT_PASSENGER_ZOMBIE_LEAP_LOOP");
  sub_10008F60((int)"ACT_PASSENGER_ZOMBIE_LEAP_LOOP", dword_106DB7B0);
  v38 = "TASK_PASSENGER_ZOMBIE_RANGE_ATTACK1";
  v39 = 100005;
  sub_10229160(v25, 0, &v38);
  v38 = "TASK_PASSENGER_ZOMBIE_DISMOUNT";
  v39 = 100006;
  sub_10229160(v25, v27, &v38);
  v38 = "TASK_PASSENGER_ZOMBIE_ATTACH";
  v39 = 100007;
  sub_10229160(v25, v27, &v38);
  v38 = "COND_PASSENGER_ZOMBIE_CAN_ATTACH_TO_VEHICLE";
  v39 = 100011;
  sub_10229160(v21, 0, &v38);
  v38 = "SCHED_PASSENGER_ZOMBIE_ENTER_VEHICLE";
  v39 = 100007;
  sub_10229160(v29, 0, &v38);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v36 + 1;
  v2 = (int)v36++;
  v37 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_ZOMBIE_ENTER_VEHICLE\tTasks\t\tTASK_PASSENGER_ATTACH_TO_VEHICLE\t0\t\tTASK_PASSENGER_ENTER"
          "_VEHICLE\t\t0\tInterrupts\n";
  v38 = "SCHED_PASSENGER_ZOMBIE_EXIT_VEHICLE";
  v39 = 100008;
  sub_10229160(v29, v31, &v38);
  v39 = (int)v1;
  if ( (int)(v1 + 1) > v34 )
  {
    sub_102ABFC0(&v1[-v34 + 1]);
    v1 = v36;
    v0 = Src;
  }
  v3 = v1 + 1;
  v36 = v3;
  v4 = (int)&v3[-v39 - 1];
  v37 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v39 + 1], &v0[v39], 4 * v4);
  v5 = &v0[v39];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_ZOMBIE_EXIT_VEHICLE\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE:SCHED_PASSENGER_IDLE\t\tT"
          "ASK_STOP_MOVING\t\t\t0\t\tTASK_PASSENGER_ZOMBIE_DISMOUNT\t0\tInterrupts\t\tCOND_TASK_FAILED\n";
  v38 = "SCHED_PASSENGER_ZOMBIE_MELEE_ATTACK1";
  v39 = 100009;
  sub_10229160(v29, v31, &v38);
  v39 = (int)v3;
  if ( (int)(v3 + 1) > v34 )
  {
    sub_102ABFC0(&v3[-v34 + 1]);
    v3 = v36;
    v0 = Src;
  }
  v6 = v3 + 1;
  v36 = v6;
  v7 = (int)&v6[-v39 - 1];
  v37 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v39 + 1], &v0[v39], 4 * v7);
  v8 = &v0[v39];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PASSENGER_ZOMBIE_MELEE_ATTACK1\tTasks\t\tTASK_ANNOUNCE_ATTACK\t1\t\tTASK_MELEE_ATTACK1\t\t0\tInterrupts\n";
  v38 = "SCHED_PASSENGER_ZOMBIE_RANGE_ATTACK1";
  v39 = 100010;
  sub_10229160(v29, v31, &v38);
  v39 = (int)v6;
  if ( (int)(v6 + 1) > v34 )
  {
    sub_102ABFC0(&v6[-v34 + 1]);
    v6 = v36;
    v0 = Src;
  }
  v9 = v6 + 1;
  v36 = v9;
  v10 = (int)&v9[-v39 - 1];
  v37 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v39 + 1], &v0[v39], 4 * v10);
  v11 = &v0[v39];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_ZOMBIE_RANGE_ATTACK1\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_PASSENGER_RANGE_ATT"
           "ACK1\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_PASSENGER_ZOMBIE_LEAP_LOOP\t\tTASK_PASSENGER_ZOMBIE_RANGE_ATTAC"
           "K1\t0\t\tInterrupts\n";
  v38 = "SCHED_PASSENGER_ZOMBIE_RUN_TO_VEHICLE";
  v39 = 100012;
  sub_10229160(v29, v31, &v38);
  v39 = (int)v9;
  if ( (int)(v9 + 1) > v34 )
  {
    sub_102ABFC0(&v9[-v34 + 1]);
    v9 = v36;
    v0 = Src;
  }
  v12 = v9 + 1;
  v36 = v12;
  v13 = (int)&v12[-v39 - 1];
  v37 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v39 + 1], &v0[v39], 4 * v13);
  v14 = &v0[v39];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PASSENGER_ZOMBIE_RUN_TO_VEHICLE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t"
           "SCHEDULE:SCHED_CHASE_ENEMY_FAILED\t\tTASK_GET_CHASE_PATH_TO_ENEMY\t2400\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_W"
           "AIT_FOR_MOVEMENT\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_UNREACHABLE\t\tCOND_TA"
           "SK_FAILED\t\tCOND_LOST_ENEMY\t\tCOND_PASSENGER_ZOMBIE_CAN_ATTACH_TO_VEHICLE\n";
  v38 = "SCHED_PASSENGER_ZOMBIE_ATTACH";
  v39 = 100011;
  sub_10229160(v29, v31, &v38);
  v39 = (int)v12;
  if ( (int)(v12 + 1) > v34 )
  {
    sub_102ABFC0(&v12[-v34 + 1]);
    v12 = v36;
    v0 = Src;
  }
  v15 = (int)(v12 + 1);
  v16 = v15 - v39 - 1;
  if ( v16 > 0 )
    memcpy(&v0[v39 + 1], &v0[v39], 4 * v16);
  v17 = &v0[v39];
  if ( v17 )
    *v17 = "\n\tSchedule\n\t\tSCHED_PASSENGER_ZOMBIE_ATTACH\tTasks\t\tTASK_PASSENGER_ZOMBIE_ATTACH\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106DB7C8, (int)"CAI_PassengerBehaviorZombie", (int)dword_10690E5C, (int)&dword_106DB568);
  sub_1004C500((int)v29, sub_10333A80);
  sub_1004C500((int)v25, sub_10333A80);
  sub_1004C500((int)v21, sub_10333A80);
  v39 = 0;
  if ( v31 <= 0 )
  {
LABEL_38:
    v39 = 0;
    if ( v27 <= 0 )
    {
LABEL_41:
      v18 = 0;
      if ( v23 <= 0 )
      {
LABEL_59:
        v19 = 0;
        if ( v15 > 0 )
        {
          v20 = byte_1065F4E4;
          do
          {
            if ( !v20 )
              break;
            v20 = sub_100A7A40(
                    &dword_10694898,
                    "CAI_PassengerBehaviorZombie",
                    *((_DWORD *)Src + v19++),
                    (int)&dword_106DB7C8);
            byte_1065F4E4 = v20;
          }
          while ( v19 < v15 );
        }
        if ( v22 >= 0 && v21[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
        if ( v26 >= 0 && v25[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
        if ( v30 >= 0 && v29[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
        if ( v35 >= 0 )
        {
          if ( Src )
            (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
        }
        return;
      }
      while ( 1 )
      {
        v39 = *(_DWORD *)(v21[0] + 8 * v18);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106DB7FC,
                  *(_DWORD *)(v21[0] + 8 * v18),
                  *(_DWORD *)(v21[0] + 8 * v18 + 4),
                  "condition",
                  off_1065F4EC) )
          {
            if ( v22 >= 0 && v21[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
            if ( v26 >= 0 && v25[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
            if ( v30 >= 0 && v29[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
            if ( v35 >= 0 && Src )
              (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
            return;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v39);
        }
        if ( ++v18 >= v23 )
          goto LABEL_59;
      }
    }
    while ( sub_1007DB90(
              dword_106DB7E4,
              *(_DWORD *)(v25[0] + 8 * v39),
              *(_DWORD *)(v25[0] + 8 * v39 + 4),
              "task",
              off_1065F4EC) )
    {
      if ( ++v39 >= v27 )
        goto LABEL_41;
    }
  }
  else
  {
    while ( sub_1007DB90(
              dword_106DB7CC,
              *(_DWORD *)(v29[0] + 8 * v39),
              *(_DWORD *)(v29[0] + 8 * v39 + 4),
              "schedule",
              off_1065F4EC) )
    {
      if ( ++v39 >= v31 )
        goto LABEL_38;
    }
  }
  if ( v22 >= 0 && v21[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
  if ( v26 >= 0 && v25[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
  if ( v30 >= 0 && v29[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
  if ( v35 >= 0 && v0 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
}
