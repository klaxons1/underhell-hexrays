void sub_10299690()
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
  int v28[2]; // [esp+34h] [ebp-30h] BYREF
  int v29; // [esp+3Ch] [ebp-28h]
  int v30; // [esp+40h] [ebp-24h]
  int v31; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v33; // [esp+4Ch] [ebp-18h]
  int v34; // [esp+50h] [ebp-14h]
  const char *v35; // [esp+54h] [ebp-10h]
  void *v36; // [esp+58h] [ebp-Ch]
  const char *v37; // [esp+5Ch] [ebp-8h] BYREF
  int v38; // [esp+60h] [ebp-4h]

  Src = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v37 = "COND_ACTBUSY_LOST_SEE_ENTITY";
  v38 = 100000;
  sub_10229160(v20, 0, &v37);
  v37 = "COND_ACTBUSY_AWARE_OF_ENEMY_IN_SAFE_ZONE";
  v38 = 100001;
  sub_10229160(v20, v22, &v37);
  v37 = "COND_ACTBUSY_ENEMY_TOO_CLOSE";
  v38 = 100002;
  sub_10229160(v20, v22, &v37);
  v37 = "TASK_ACTBUSY_PLAY_BUSY_ANIM";
  v38 = 100000;
  sub_10229160(v28, 0, &v37);
  v37 = "TASK_ACTBUSY_PLAY_ENTRY";
  v38 = 100001;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_ACTBUSY_PLAY_EXIT";
  v38 = 100002;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_ACTBUSY_TELEPORT_TO_BUSY";
  v38 = 100003;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_ACTBUSY_WALK_PATH_TO_BUSY";
  v38 = 100004;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_ACTBUSY_GET_PATH_TO_ACTBUSY";
  v38 = 100005;
  sub_10229160(v28, v30, &v37);
  v37 = "TASK_ACTBUSY_VERIFY_EXIT";
  v38 = 100006;
  sub_10229160(v28, v30, &v37);
  dword_106DB074 = sub_1013BF10((int)"AE_ACTBUSY_WEAPON_FIRE_ON");
  sub_1006AFD0((int)"AE_ACTBUSY_WEAPON_FIRE_ON", dword_106DB074);
  dword_106DB070 = sub_1013BF10((int)"AE_ACTBUSY_WEAPON_FIRE_OFF");
  sub_1006AFD0((int)"AE_ACTBUSY_WEAPON_FIRE_OFF", dword_106DB070);
  v37 = "SCHED_ACTBUSY_START_BUSYING";
  v38 = 100000;
  sub_10229160(v24, 0, &v37);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v35 + 1;
  v2 = (int)v35++;
  v36 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ACTBUSY_START_BUSYING\tTasks\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t4\t\tTASK_ACTBUSY_GET_PATH_TO_ACTBU"
          "SY\t0\t\tTASK_ACTBUSY_WALK_PATH_TO_BUSY\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t\t0"
          "\t\tTASK_FACE_HINTNODE\t\t\t\t\t0\t\tTASK_ACTBUSY_PLAY_ENTRY\t\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\t\tSCHEDULE:S"
          "CHED_ACTBUSY_BUSY\tInterrupts\t\tCOND_ACTBUSY_LOST_SEE_ENTITY\n";
  v37 = "SCHED_ACTBUSY_BUSY";
  v38 = 100001;
  sub_10229160(v24, v26, &v37);
  v38 = (int)v1;
  if ( (int)(v1 + 1) > v33 )
  {
    sub_102ABFC0(&v1[-v33 + 1]);
    v1 = v35;
    v0 = Src;
  }
  v3 = v1 + 1;
  v35 = v3;
  v4 = (int)&v3[-v38 - 1];
  v36 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v38 + 1], &v0[v38], 4 * v4);
  v5 = &v0[v38];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ACTBUSY_BUSY\tTasks\t\tTASK_ACTBUSY_PLAY_BUSY_ANIM\t\t0\tInterrupts\t\tCOND_PROVOKED\n";
  v37 = "SCHED_ACTBUSY_STOP_BUSYING";
  v38 = 100002;
  sub_10229160(v24, v26, &v37);
  v38 = (int)v3;
  if ( (int)(v3 + 1) > v33 )
  {
    sub_102ABFC0(&v3[-v33 + 1]);
    v3 = v35;
    v0 = Src;
  }
  v6 = v3 + 1;
  v35 = v6;
  v7 = (int)&v6[-v38 - 1];
  v36 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v38 + 1], &v0[v38], 4 * v7);
  v8 = &v0[v38];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ACTBUSY_STOP_BUSYING\tTasks\t\tTASK_ACTBUSY_VERIFY_EXIT\t\t0\t\tTASK_ACTBUSY_PLAY_EXIT\t\t\t0\t\tTAS"
          "K_WAIT\t\t\t\t\t\t0.1\tInterrupts\t\tCOND_NO_CUSTOM_INTERRUPTS\n";
  v37 = "SCHED_ACTBUSY_LEAVE";
  v38 = 100003;
  sub_10229160(v24, v26, &v37);
  v38 = (int)v6;
  if ( (int)(v6 + 1) > v33 )
  {
    sub_102ABFC0(&v6[-v33 + 1]);
    v6 = v35;
    v0 = Src;
  }
  v9 = v6 + 1;
  v35 = v9;
  v10 = (int)&v9[-v38 - 1];
  v36 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v38 + 1], &v0[v38], 4 * v10);
  v11 = &v0[v38];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ACTBUSY_LEAVE\tTasks\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t4\t\tTASK_ACTBUSY_GET_PATH_TO_ACTBUSY\t0\t"
           "\tTASK_ACTBUSY_WALK_PATH_TO_BUSY\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\tInterrupts\t\tCOND_PROVOKED\n";
  v37 = "SCHED_ACTBUSY_TELEPORT_TO_BUSY";
  v38 = 100004;
  sub_10229160(v24, v26, &v37);
  v38 = (int)v9;
  if ( (int)(v9 + 1) > v33 )
  {
    sub_102ABFC0(&v9[-v33 + 1]);
    v9 = v35;
    v0 = Src;
  }
  v12 = (int)(v9 + 1);
  v13 = v12 - v38 - 1;
  if ( v13 > 0 )
    memcpy(&v0[v38 + 1], &v0[v38], 4 * v13);
  v14 = &v0[v38];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ACTBUSY_TELEPORT_TO_BUSY\tTasks\t\tTASK_ACTBUSY_TELEPORT_TO_BUSY\t0\t\tTASK_ACTBUSY_PLAY_ENTRY\t\t\t"
           "0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_ACTBUSY_BUSY\tInterrupts\t\tCOND_PROVOKED\n";
  sub_1004BBC0(&dword_106DB130, (int)"CAI_ActBusyBehavior", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v24, sub_10333A80);
  sub_1004C500((int)v28, sub_10333A80);
  sub_1004C500((int)v20, sub_10333A80);
  v15 = 0;
  if ( v26 <= 0 )
  {
LABEL_32:
    v16 = 0;
    if ( v30 <= 0 )
    {
LABEL_35:
      for ( i = 0; i < v22; ++i )
      {
        v38 = *(_DWORD *)(v20[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106DB164,
                  *(_DWORD *)(v20[0] + 8 * i),
                  *(_DWORD *)(v20[0] + 8 * i + 4),
                  "condition",
                  off_1065D190) )
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
        v19 = byte_1065D188;
        do
        {
          if ( !v19 )
            break;
          v19 = sub_100A7A40(&dword_10694898, "CAI_ActBusyBehavior", *((_DWORD *)Src + v18++), (int)&dword_106DB130);
          byte_1065D188 = v19;
        }
        while ( v18 < v12 );
      }
      if ( v21 >= 0 && v20[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20[0]);
      if ( v29 >= 0 && v28[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
      if ( v25 >= 0 && v24[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
      if ( v34 >= 0 && Src )
        goto LABEL_67;
      return;
    }
    while ( sub_1007DB90(
              dword_106DB14C,
              *(_DWORD *)(v28[0] + 8 * v16),
              *(_DWORD *)(v28[0] + 8 * v16 + 4),
              "task",
              off_1065D190) )
    {
      if ( ++v16 >= v30 )
        goto LABEL_35;
    }
  }
  else
  {
    while ( sub_1007DB90(
              dword_106DB134,
              *(_DWORD *)(v24[0] + 8 * v15),
              *(_DWORD *)(v24[0] + 8 * v15 + 4),
              "schedule",
              off_1065D190) )
    {
      if ( ++v15 >= v26 )
        goto LABEL_32;
    }
  }
LABEL_38:
  if ( v21 >= 0 && v20[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20[0]);
  if ( v29 >= 0 && v28[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
  if ( v25 >= 0 && v24[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
  if ( v34 >= 0 && Src )
LABEL_67:
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
}
