void sub_1029CFA0()
{
  _DWORD *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // esi
  int v16; // esi
  int i; // esi
  const char *v18; // ebx
  int v19; // ebx
  int v20; // esi
  char v21; // al
  void *v22; // eax
  bool v23; // zf
  int v24[2]; // [esp+Ch] [ebp-58h] BYREF
  int v25; // [esp+14h] [ebp-50h]
  int v26; // [esp+18h] [ebp-4Ch]
  int v27; // [esp+1Ch] [ebp-48h]
  int v28[2]; // [esp+20h] [ebp-44h] BYREF
  int v29; // [esp+28h] [ebp-3Ch]
  int v30; // [esp+2Ch] [ebp-38h]
  int v31; // [esp+30h] [ebp-34h]
  int v32[2]; // [esp+34h] [ebp-30h] BYREF
  int v33; // [esp+3Ch] [ebp-28h]
  int v34; // [esp+40h] [ebp-24h]
  int v35; // [esp+44h] [ebp-20h]
  void *Src; // [esp+48h] [ebp-1Ch]
  int v37; // [esp+4Ch] [ebp-18h]
  int v38; // [esp+50h] [ebp-14h]
  int v39; // [esp+54h] [ebp-10h]
  void *v40; // [esp+58h] [ebp-Ch]
  const char *v41; // [esp+5Ch] [ebp-8h] BYREF
  int v42; // [esp+60h] [ebp-4h]

  Src = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v41 = "TASK_GET_PATH_TO_FUNCTANK";
  v42 = 100000;
  sub_10229160(v32, 0, &v41);
  v41 = "TASK_FACE_FUNCTANK";
  v42 = 100001;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_HOLSTER_WEAPON";
  v42 = 100002;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_FIRE_FUNCTANK";
  v42 = 100003;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_SCAN_LEFT_FUNCTANK";
  v42 = 100004;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_SCAN_RIGHT_FUNCTANK";
  v42 = 100005;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_FORGET_ABOUT_FUNCTANK";
  v42 = 100006;
  sub_10229160(v32, v34, &v41);
  v41 = "TASK_FUNCTANK_ANNOUNCE_SCAN";
  v42 = 100007;
  sub_10229160(v32, v34, &v41);
  v41 = "COND_FUNCTANK_DISMOUNT";
  v42 = 100000;
  sub_10229160(v24, 0, &v41);
  v41 = "SCHED_MOVE_TO_FUNCTANK";
  v42 = 100000;
  sub_10229160(v28, 0, &v41);
  sub_102ABFC0(1);
  v0 = Src;
  v1 = v39 + 1;
  v2 = v39++;
  v40 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_MOVE_TO_FUNCTANK\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\tSCHEDULE: SCHED_FAIL_MOVE_TO_FUNCTANK\t\tTASK_G"
          "ET_PATH_TO_FUNCTANK\t0\t\tTASK_SPEAK_SENTENCE\t\t\t1000\t\tTASK_RUN_PATH\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t"
          "0\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_FACE_FUNCTANK\t\t\t0\t\tTASK_HOLSTER_WEAPON\t\t\t0\t\tInterrupts\t\tCOND_"
          "FUNCTANK_DISMOUNT\n";
  v41 = "SCHED_FIRE_FUNCTANK";
  v42 = 100001;
  sub_10229160(v28, v30, &v41);
  v3 = v1;
  v42 = v1;
  if ( v1 + 1 > v37 )
  {
    sub_102ABFC0(v1 - v37 + 1);
    v1 = v39;
    v0 = Src;
    v3 = v42;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v39 = v4;
  v40 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v42;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_FIRE_FUNCTANK\tTasks\t\tTASK_ANNOUNCE_ATTACK\t1       TASK_FIRE_FUNCTANK      0   \tInterrupts\t\tCO"
          "ND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_LOST_ENEMY\t\tCOND_ENEMY_OCCLUDED\t\tCOND_WEAPON_BLOCKED_BY_FRIEND\t\t"
          "COND_WEAPON_SIGHT_OCCLUDED\t\tCOND_FUNCTANK_DISMOUNT\n";
  v41 = "SCHED_SCAN_WITH_FUNCTANK";
  v42 = 100002;
  sub_10229160(v28, v30, &v41);
  v7 = v4;
  v42 = v4;
  if ( v4 + 1 > v37 )
  {
    sub_102ABFC0(v4 - v37 + 1);
    v4 = v39;
    v0 = Src;
    v7 = v42;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v39 = v8;
  v40 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[v7 + 1], &v0[v7], 4 * v9);
    v7 = v42;
  }
  v10 = &v0[v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_SCAN_WITH_FUNCTANK\tTasks\t\tTASK_FUNCTANK_ANNOUNCE_SCAN\t0\t\tTASK_STOP_MOVING\t\t\t0\t\tTASK_WAIT"
           "\t\t\t\t\t4\t\tTASK_SCAN_LEFT_FUNCTANK\t\t0\t\tTASK_WAIT\t\t\t\t\t4\t\tTASK_SCAN_RIGHT_FUNCTANK\t0\tInterrupt"
           "s\t\tCOND_NEW_ENEMY\t\tCOND_PROVOKED\t\tCOND_FUNCTANK_DISMOUNT\n";
  v41 = "SCHED_FAIL_MOVE_TO_FUNCTANK";
  v42 = 100003;
  sub_10229160(v28, v30, &v41);
  v11 = v8;
  v42 = v8;
  if ( v8 + 1 > v37 )
  {
    sub_102ABFC0(v8 - v37 + 1);
    v8 = v39;
    v0 = Src;
    v11 = v42;
  }
  v12 = v8 + 1;
  v13 = v12 - v11 - 1;
  if ( v13 > 0 )
  {
    memcpy(&v0[v11 + 1], &v0[v11], 4 * v13);
    v11 = v42;
  }
  v14 = &v0[v11];
  if ( v14 )
    *v14 = "\n\tSchedule\n\t\tSCHED_FAIL_MOVE_TO_FUNCTANK\tTasks\t\tTASK_FORGET_ABOUT_FUNCTANK\t\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106DB368, (int)"CAI_FuncTankBehavior", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v28, sub_10333A80);
  sub_1004C500((int)v32, sub_10333A80);
  sub_1004C500((int)v24, sub_10333A80);
  v15 = 0;
  if ( v30 <= 0 )
  {
LABEL_26:
    v16 = 0;
    if ( v34 <= 0 )
    {
LABEL_29:
      for ( i = 0; i < v26; ++i )
      {
        v18 = *(const char **)(v24[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          v19 = v24[0];
          if ( !sub_1007DB90(
                  dword_106DB39C,
                  *(_DWORD *)(v24[0] + 8 * i),
                  *(_DWORD *)(v24[0] + 8 * i + 4),
                  "condition",
                  off_1065E4EC) )
          {
            if ( v25 >= 0 && v19 )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
            if ( v33 >= 0 && v32[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
            if ( v29 >= 0 && v28[0] )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
            if ( v38 >= 0 )
            {
              v22 = Src;
              v23 = Src == 0;
              goto LABEL_49;
            }
            return;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v18);
        }
      }
      v20 = 0;
      if ( v12 > 0 )
      {
        v21 = byte_1065E4E4;
        do
        {
          if ( !v21 )
            break;
          v21 = sub_100A7A40(&dword_10694898, "CAI_FuncTankBehavior", *((_DWORD *)Src + v20++), (int)&dword_106DB368);
          byte_1065E4E4 = v21;
        }
        while ( v20 < v12 );
      }
    }
    else
    {
      while ( sub_1007DB90(
                dword_106DB384,
                *(_DWORD *)(v32[0] + 8 * v16),
                *(_DWORD *)(v32[0] + 8 * v16 + 4),
                "task",
                off_1065E4EC) )
      {
        if ( ++v16 >= v34 )
          goto LABEL_29;
      }
    }
  }
  else
  {
    while ( sub_1007DB90(
              dword_106DB36C,
              *(_DWORD *)(v28[0] + 8 * v15),
              *(_DWORD *)(v28[0] + 8 * v15 + 4),
              "schedule",
              off_1065E4EC) )
    {
      if ( ++v15 >= v30 )
        goto LABEL_26;
    }
  }
  if ( v25 >= 0 && v24[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v24[0]);
  if ( v33 >= 0 && v32[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
  if ( v29 >= 0 && v28[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28[0]);
  if ( v38 >= 0 )
  {
    v22 = Src;
    v23 = Src == 0;
LABEL_49:
    if ( !v23 )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v22);
  }
}
