char sub_103DC4B0()
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
  const char *v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  const char *v18; // esi
  int v19; // eax
  _DWORD *v20; // eax
  const char *v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  const char *v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  const char *v27; // esi
  int v28; // eax
  _DWORD *v29; // eax
  const char *v30; // ebx
  const char *v31; // esi
  _DWORD *v32; // ebx
  const char *v33; // ebx
  const char *v34; // esi
  _DWORD *v35; // ebx
  const char *v36; // ebx
  int v37; // esi
  _DWORD *v38; // ebx
  int v39; // ebx
  char result; // al
  int v41; // ebx
  int i; // ebx
  int v43; // ebx
  char v44; // al
  int v45[5]; // [esp+Ch] [ebp-80h] BYREF
  int v46[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v47[2]; // [esp+34h] [ebp-58h] BYREF
  int v48; // [esp+3Ch] [ebp-50h]
  int v49; // [esp+40h] [ebp-4Ch]
  int v50; // [esp+44h] [ebp-48h]
  int v51[2]; // [esp+48h] [ebp-44h] BYREF
  int v52; // [esp+50h] [ebp-3Ch]
  int v53; // [esp+54h] [ebp-38h]
  int v54; // [esp+58h] [ebp-34h]
  int v55[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v56; // [esp+64h] [ebp-28h]
  int v57; // [esp+68h] [ebp-24h]
  int v58; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v60; // [esp+74h] [ebp-18h]
  int v61; // [esp+78h] [ebp-14h]
  const char *v62; // [esp+7Ch] [ebp-10h]
  void *v63; // [esp+80h] [ebp-Ch]
  const char *v64; // [esp+84h] [ebp-8h] BYREF
  int v65; // [esp+88h] [ebp-4h]

  Src = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  memset(v45, 0, sizeof(v45));
  v55[0] = 0;
  v55[1] = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v51[0] = 0;
  v51[1] = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  memset(v46, 0, sizeof(v46));
  v64 = "COND_SNIPER_CANATTACKDECOY";
  v65 = 73;
  sub_10229160(v47, 0, &v64);
  v64 = "COND_SNIPER_SUPPRESSED";
  v65 = 74;
  sub_10229160(v47, v49, &v64);
  v64 = "COND_SNIPER_ENABLED";
  v65 = 75;
  sub_10229160(v47, v49, &v64);
  v64 = "COND_SNIPER_DISABLED";
  v65 = 76;
  sub_10229160(v47, v49, &v64);
  v64 = "COND_SNIPER_FRUSTRATED";
  v65 = 77;
  sub_10229160(v47, v49, &v64);
  v64 = "COND_SNIPER_SWEEP_TARGET";
  v65 = 78;
  sub_10229160(v47, v49, &v64);
  v64 = "COND_SNIPER_NO_SHOT";
  v65 = 79;
  sub_10229160(v47, v49, &v64);
  v64 = "TASK_SNIPER_FRUSTRATED_ATTACK";
  v65 = 150;
  sub_10229160(v51, 0, &v64);
  v64 = "TASK_SNIPER_PAINT_ENEMY";
  v65 = 151;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_PAINT_DECOY";
  v65 = 152;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_PAINT_FRUSTRATED";
  v65 = 153;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_PAINT_SWEEP_TARGET";
  v65 = 154;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_ATTACK_CURSOR";
  v65 = 155;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_PAINT_NO_SHOT";
  v65 = 156;
  sub_10229160(v51, v53, &v64);
  v64 = "TASK_SNIPER_PLAYER_DEAD";
  v65 = 157;
  sub_10229160(v51, v53, &v64);
  v64 = "SCHED_PSNIPER_SCAN";
  v65 = 88;
  sub_10229160(v55, 0, &v64);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v62 + 1;
  v2 = (int)v62++;
  v63 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PSNIPER_SCAN\tTasks\t\tTASK_WAIT_INDEFINITE\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t"
          "\tCOND_HEAR_DANGER\t\tCOND_SNIPER_DISABLED\t\tCOND_SNIPER_SWEEP_TARGET\n";
  v64 = "SCHED_PSNIPER_CAMP";
  v65 = 89;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v1;
  if ( (int)(v1 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v60 + 1]);
    v1 = v62;
    v0 = Src;
  }
  v3 = v1 + 1;
  v62 = v3;
  v4 = (int)&v3[-v65 - 1];
  v63 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v4);
  v5 = &v0[v65];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PSNIPER_CAMP\tTasks\t\tTASK_WAIT_INDEFINITE\t\t0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t"
          "\tCOND_CAN_RANGE_ATTACK1\t\tCOND_SNIPER_CANATTACKDECOY\t\tCOND_SNIPER_SUPPRESSED\t\tCOND_HEAR_DANGER\t\tCOND_S"
          "NIPER_DISABLED\t\tCOND_SNIPER_FRUSTRATED\t\tCOND_SNIPER_SWEEP_TARGET\n";
  v64 = "SCHED_PSNIPER_ATTACK";
  v65 = 90;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v3;
  if ( (int)(v3 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v3[-v60 + 1]);
    v3 = v62;
    v0 = Src;
  }
  v6 = v3 + 1;
  v62 = v6;
  v7 = (int)&v6[-v65 - 1];
  v63 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v7);
  v8 = &v0[v65];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PSNIPER_ATTACK\tTasks\t\tTASK_SNIPER_PAINT_ENEMY\t\t0\t\tTASK_RANGE_ATTACK1\t\t\t0\t\tInterrupts\t\t"
          "COND_ENEMY_OCCLUDED\t\tCOND_ENEMY_DEAD\t\tCOND_HEAR_DANGER\t\tCOND_SNIPER_DISABLED\n";
  v64 = "SCHED_PSNIPER_SNAPATTACK";
  v65 = 98;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v6;
  if ( (int)(v6 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v6[-v60 + 1]);
    v6 = v62;
    v0 = Src;
  }
  v9 = v6 + 1;
  v62 = v9;
  v10 = (int)&v9[-v65 - 1];
  v63 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v10);
  v11 = &v0[v65];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_SNAPATTACK\tTasks\t\tTASK_SNIPER_ATTACK_CURSOR\t0\t\tInterrupts\t\tCOND_ENEMY_OCCLUDED\t\tC"
           "OND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\t\tCOND_SNIPER_DISABLED\n";
  v64 = "SCHED_PSNIPER_RELOAD";
  v65 = 91;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v9;
  if ( (int)(v9 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v9[-v60 + 1]);
    v9 = v62;
    v0 = Src;
  }
  v12 = v9 + 1;
  v62 = v12;
  v13 = (int)&v12[-v65 - 1];
  v63 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v13);
  v14 = &v0[v65];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_RELOAD\tTasks\t\tTASK_RELOAD\t\t\t\t0\t\tTASK_WAIT\t\t\t\t1.0\t\tInterrupts\t\tCOND_HEAR_DANGER\n";
  v64 = "SCHED_PSNIPER_ATTACKDECOY";
  v65 = 92;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v12;
  if ( (int)(v12 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v12[-v60 + 1]);
    v12 = v62;
    v0 = Src;
  }
  v15 = v12 + 1;
  v62 = v15;
  v16 = (int)&v15[-v65 - 1];
  v63 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v16);
  v17 = &v0[v65];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_ATTACKDECOY\tTasks\t\tTASK_SNIPER_PAINT_DECOY\t\t2.0\t\tTASK_RANGE_ATTACK2\t\t\t0\t\tInterr"
           "upts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_HEAR_DANGER\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_SNIPER_DISABL"
           "ED\t\tCOND_SNIPER_SWEEP_TARGET\n";
  v64 = "SCHED_PSNIPER_SUPPRESSED";
  v65 = 93;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v15;
  if ( (int)(v15 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v15[-v60 + 1]);
    v15 = v62;
    v0 = Src;
  }
  v18 = v15 + 1;
  v62 = v18;
  v19 = (int)&v18[-v65 - 1];
  v63 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v19);
  v20 = &v0[v65];
  if ( v20 )
    *v20 = "\n\tSchedule\n\t\tSCHED_PSNIPER_SUPPRESSED\tTasks\t\tTASK_WAIT\t\t\t2.0\t\tInterrupts\n";
  v64 = "SCHED_PSNIPER_DISABLEDWAIT";
  v65 = 94;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v18;
  if ( (int)(v18 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v18[-v60 + 1]);
    v18 = v62;
    v0 = Src;
  }
  v21 = v18 + 1;
  v62 = v21;
  v22 = (int)&v21[-v65 - 1];
  v63 = v0;
  if ( v22 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v22);
  v23 = &v0[v65];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_DISABLEDWAIT\tTasks\t\tTASK_WAIT\t\t\t0.5\t\tInterrupts\t\tCOND_SNIPER_ENABLED\t\tCOND_NEW_"
           "ENEMY\t\tCOND_ENEMY_DEAD\n";
  v64 = "SCHED_PSNIPER_FRUSTRATED_ATTACK";
  v65 = 95;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v21;
  if ( (int)(v21 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v21[-v60 + 1]);
    v21 = v62;
    v0 = Src;
  }
  v24 = v21 + 1;
  v62 = v24;
  v25 = (int)&v24[-v65 - 1];
  v63 = v0;
  if ( v25 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v25);
  v26 = &v0[v65];
  if ( v26 )
    *v26 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_FRUSTRATED_ATTACK\tTasks\t\tTASK_WAIT\t\t\t\t\t\t2.0\t\tTASK_SNIPER_PAINT_FRUSTRATED\t0.05\t"
           "\tTASK_SNIPER_PAINT_FRUSTRATED\t0.025\t\tTASK_SNIPER_PAINT_FRUSTRATED\t0.0\t\tTASK_SNIPER_FRUSTRATED_ATTACK\t"
           "0.0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_SNIPER_DISABLED\t\tCOND_CAN_RANGE_ATTACK1\t\tC"
           "OND_SEE_ENEMY\t\tCOND_HEAR_DANGER\t\tCOND_SNIPER_SWEEP_TARGET\n";
  v64 = "SCHED_PSNIPER_SWEEP_TARGET";
  v65 = 96;
  sub_10229160(v55, v57, &v64);
  v65 = (int)v24;
  if ( (int)(v24 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v24[-v60 + 1]);
    v24 = v62;
    v0 = Src;
  }
  v27 = v24 + 1;
  v62 = v27;
  v28 = (int)&v27[-v65 - 1];
  v63 = v0;
  if ( v28 > 0 )
    memcpy(&v0[v65 + 1], &v0[v65], 4 * v28);
  v29 = &v0[v65];
  if ( v29 )
    *v29 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_SWEEP_TARGET\tTasks\t\tTASK_SNIPER_PAINT_SWEEP_TARGET\t0.0\t\tInterrupts\t\tCOND_NEW_ENEMY\t"
           "\tCOND_SNIPER_DISABLED\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_HEAR_DANGER\t\tCOND_SNIPER_NO_SHOT\n";
  v64 = "SCHED_PSNIPER_SWEEP_TARGET_NOINTERRUPT";
  v65 = 97;
  sub_10229160(v55, v57, &v64);
  v30 = v27;
  if ( (int)(v27 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v27[-v60 + 1]);
    v27 = v62;
    v0 = Src;
  }
  v31 = v27 + 1;
  v62 = v31;
  v63 = v0;
  if ( v31 - v30 - 1 > 0 )
    memcpy(&v0[(_DWORD)v30 + 1], &v0[(_DWORD)v30], 4 * (v31 - v30 - 1));
  v32 = &v0[(_DWORD)v30];
  if ( v32 )
    *v32 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_SWEEP_TARGET_NOINTERRUPT\tTasks\t\tTASK_SNIPER_PAINT_SWEEP_TARGET\t0.0\t\tInterrupts\t\tCON"
           "D_SNIPER_DISABLED\n";
  v64 = "SCHED_PSNIPER_NO_CLEAR_SHOT";
  v65 = 99;
  sub_10229160(v55, v57, &v64);
  v33 = v31;
  if ( (int)(v31 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v31[-v60 + 1]);
    v31 = v62;
    v0 = Src;
  }
  v34 = v31 + 1;
  v62 = v34;
  v63 = v0;
  if ( v34 - v33 - 1 > 0 )
    memcpy(&v0[(_DWORD)v33 + 1], &v0[(_DWORD)v33], 4 * (v34 - v33 - 1));
  v35 = &v0[(_DWORD)v33];
  if ( v35 )
    *v35 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PSNIPER_NO_CLEAR_SHOT\tTasks\t\tTASK_SNIPER_PAINT_NO_SHOT\t0.0\t\tTASK_SNIPER_PAINT_NO_SHOT\t0.075\t"
           "\tTASK_SNIPER_PAINT_NO_SHOT\t0.05\t\tTASK_SNIPER_PAINT_NO_SHOT\t0.0\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_E"
           "NEMY_DEAD\t\tCOND_SNIPER_DISABLED\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_HEAR_DANGER\n";
  v64 = "SCHED_PSNIPER_PLAYER_DEAD";
  v65 = 100;
  sub_10229160(v55, v57, &v64);
  v36 = v34;
  if ( (int)(v34 + 1) > v60 )
  {
    sub_102ABFC0(&Src, (int)&v34[-v60 + 1]);
    v34 = v62;
    v0 = Src;
  }
  v37 = (int)(v34 + 1);
  v62 = (const char *)v37;
  v63 = v0;
  if ( v37 - (int)v36 - 1 > 0 )
    memcpy(&v0[(_DWORD)v36 + 1], &v0[(_DWORD)v36], 4 * (v37 - (_DWORD)v36 - 1));
  v38 = &v0[(_DWORD)v36];
  if ( v38 )
    *v38 = "\n\tSchedule\n\t\tSCHED_PSNIPER_PLAYER_DEAD\tTasks\t\tTASK_SNIPER_PLAYER_DEAD\t\t0\t\tInterrupts\n";
  sub_1004BBC0(&dword_106ED360, (int)"CProtoSniper", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106ED3AC, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v55, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v51, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v47, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v46, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v39 = 0;
  if ( v57 <= 0 )
  {
LABEL_80:
    v41 = 0;
    if ( v53 <= 0 )
    {
LABEL_83:
      for ( i = 0; i < v49; ++i )
      {
        v65 = *(_DWORD *)(v47[0] + 8 * i);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          if ( !sub_1007DB90(
                  dword_106ED394,
                  *(_DWORD *)(v47[0] + 8 * i),
                  *(_DWORD *)(v47[0] + 8 * i + 4),
                  "condition",
                  off_1067FA48) )
            goto LABEL_117;
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v65);
        }
      }
      v43 = 0;
      if ( v37 > 0 )
      {
        v44 = byte_1067FA40;
        do
        {
          if ( !v44 )
            break;
          v44 = sub_100A7A40(&dword_10694898, "CProtoSniper", v0[v43++], (int)&dword_106ED360);
          byte_1067FA40 = v44;
        }
        while ( v43 < v37 );
      }
      sub_102375F0(v46);
LABEL_117:
      sub_102375F0(v47);
      sub_102375F0(v51);
      sub_102375F0(v55);
      sub_102375F0(v45);
      return sub_102375F0((int *)&Src);
    }
    else
    {
      while ( 1 )
      {
        result = sub_1007DB90(
                   dword_106ED37C,
                   *(_DWORD *)(v51[0] + 8 * v41),
                   *(_DWORD *)(v51[0] + 8 * v41 + 4),
                   "task",
                   off_1067FA48);
        if ( !result )
          break;
        if ( ++v41 >= v53 )
          goto LABEL_83;
      }
      if ( v48 >= 0 )
      {
        result = v47[0];
        if ( v47[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
      }
      if ( v52 >= 0 )
      {
        result = v51[0];
        if ( v51[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v51[0]);
      }
      if ( v56 >= 0 )
      {
        result = v55[0];
        if ( v55[0] )
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v55[0]);
      }
      if ( v61 >= 0 && v0 )
        return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106ED364,
                 *(_DWORD *)(v55[0] + 8 * v39),
                 *(_DWORD *)(v55[0] + 8 * v39 + 4),
                 "schedule",
                 off_1067FA48);
      if ( !result )
        break;
      if ( ++v39 >= v57 )
        goto LABEL_80;
    }
    if ( v48 >= 0 )
    {
      result = v47[0];
      if ( v47[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v47[0]);
    }
    if ( v52 >= 0 )
    {
      result = v51[0];
      if ( v51[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v51[0]);
    }
    if ( v56 >= 0 )
    {
      result = v55[0];
      if ( v55[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v55[0]);
    }
    if ( v61 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
  return result;
}
