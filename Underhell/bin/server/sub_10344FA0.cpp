char sub_10344FA0()
{
  _DWORD *v0; // esi
  const char *v1; // ebx
  int v2; // eax
  const char *v3; // ecx
  const char *v4; // ebx
  int v5; // eax
  _DWORD *v6; // eax
  const char *v7; // ecx
  const char *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  const char *v11; // ecx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // esi
  void *v16; // eax
  int v17; // esi
  int v18; // esi
  int v19; // edi
  bool v20; // zf
  int v21; // esi
  char v22; // al
  int v24[5]; // [esp+Ch] [ebp-80h] BYREF
  int v25[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v26[2]; // [esp+34h] [ebp-58h] BYREF
  int v27; // [esp+3Ch] [ebp-50h]
  int v28; // [esp+40h] [ebp-4Ch]
  int v29; // [esp+44h] [ebp-48h]
  int v30[2]; // [esp+48h] [ebp-44h] BYREF
  int v31; // [esp+50h] [ebp-3Ch]
  int v32; // [esp+54h] [ebp-38h]
  int v33; // [esp+58h] [ebp-34h]
  int v34[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v35; // [esp+64h] [ebp-28h]
  int v36; // [esp+68h] [ebp-24h]
  int v37; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v39; // [esp+74h] [ebp-18h]
  int v40; // [esp+78h] [ebp-14h]
  const char *v41; // [esp+7Ch] [ebp-10h]
  void *v42; // [esp+80h] [ebp-Ch]
  const char *v43; // [esp+84h] [ebp-8h] BYREF
  int v44; // [esp+88h] [ebp-4h]

  Src = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  memset(v24, 0, sizeof(v24));
  v34[0] = 0;
  v34[1] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30[0] = 0;
  v30[1] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  memset(v25, 0, sizeof(v25));
  v43 = "COND_CANNON_ENABLED";
  v44 = 73;
  sub_10229160(v30, 0, &v43);
  v43 = "COND_CANNON_DISABLED";
  v44 = 74;
  sub_10229160(v30, v32, &v43);
  v43 = "COND_CANNON_NO_SHOT";
  v44 = 75;
  sub_10229160(v30, v32, &v43);
  v43 = "TASK_CANNON_PAINT_ENEMY";
  v44 = 150;
  sub_10229160(v26, 0, &v43);
  v43 = "TASK_CANNON_ATTACK_CURSOR";
  v44 = 152;
  sub_10229160(v26, v28, &v43);
  v43 = "SCHED_CANNON_CAMP";
  v44 = 88;
  sub_10229160(v34, 0, &v43);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v41 + 1;
  v2 = (int)v41++;
  v42 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CANNON_CAMP\tTasks\t\tTASK_WAIT\t\t1\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_CAN_"
          "RANGE_ATTACK1\t\tCOND_HEAR_DANGER\t\tCOND_CANNON_DISABLED\n";
  v43 = "SCHED_CANNON_ATTACK";
  v44 = 89;
  sub_10229160(v34, v36, &v43);
  v3 = v1;
  v44 = (int)v1;
  if ( (int)(v1 + 1) > v39 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v39 + 1]);
    v1 = v41;
    v0 = Src;
    v3 = (const char *)v44;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v41 = v4;
  v42 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[(_DWORD)v3 + 1], &v0[(_DWORD)v3], 4 * v5);
    v3 = (const char *)v44;
  }
  v6 = &v0[(_DWORD)v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_CANNON_ATTACK\tTasks\t\tTASK_CANNON_PAINT_ENEMY\t\t0\t\tTASK_RANGE_ATTACK1\t\t\t0\t\tInterrupts\t\tC"
          "OND_HEAR_DANGER\t\tCOND_CANNON_DISABLED\n";
  v43 = "SCHED_CANNON_SNAPATTACK";
  v44 = 91;
  sub_10229160(v34, v36, &v43);
  v7 = v4;
  v44 = (int)v4;
  if ( (int)(v4 + 1) > v39 )
  {
    sub_102ABFC0(&Src, (int)&v4[-v39 + 1]);
    v4 = v41;
    v0 = Src;
    v7 = (const char *)v44;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v41 = v8;
  v42 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[(_DWORD)v7 + 1], &v0[(_DWORD)v7], 4 * v9);
    v7 = (const char *)v44;
  }
  v10 = &v0[(_DWORD)v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CANNON_SNAPATTACK\tTasks\t\tTASK_CANNON_ATTACK_CURSOR\t0\t\tInterrupts\t\tCOND_ENEMY_OCCLUDED\t\tCO"
           "ND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_HEAR_DANGER\t\tCOND_CANNON_DISABLED\n";
  v43 = "SCHED_CANNON_DISABLEDWAIT";
  v44 = 90;
  sub_10229160(v34, v36, &v43);
  v11 = v8;
  v44 = (int)v8;
  if ( (int)(v8 + 1) > v39 )
  {
    sub_102ABFC0(&Src, (int)&v8[-v39 + 1]);
    v8 = v41;
    v0 = Src;
    v11 = (const char *)v44;
  }
  v12 = (int)(v8 + 1);
  v13 = v12 - (_DWORD)v11 - 1;
  v41 = (const char *)v12;
  v42 = v0;
  if ( v13 > 0 )
  {
    memcpy(&v0[(_DWORD)v11 + 1], &v0[(_DWORD)v11], 4 * v13);
    v11 = (const char *)v44;
  }
  v14 = &v0[(_DWORD)v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_CANNON_DISABLEDWAIT\tTasks\t\tTASK_WAIT\t\t\t0.5\t\tInterrupts\t\tCOND_CANNON_ENABLED\t\tCOND_NEW_E"
           "NEMY\t\tCOND_ENEMY_DEAD\n";
  sub_1004BBC0(&dword_106E65E0, (int)"CNPC_Combine_Cannon", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E662C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v34, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v26, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v30, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v25, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v15 = 0;
  if ( v36 <= 0 )
  {
LABEL_26:
    v17 = 0;
    if ( v28 <= 0 )
    {
LABEL_29:
      v18 = 0;
      if ( v32 <= 0 )
      {
LABEL_48:
        v21 = 0;
        if ( v12 > 0 )
        {
          v22 = byte_1066FE80;
          do
          {
            if ( !v22 )
              break;
            v22 = sub_100A7A40(&dword_10694898, "CNPC_Combine_Cannon", *((_DWORD *)Src + v21++), (int)&dword_106E65E0);
            byte_1066FE80 = v22;
          }
          while ( v21 < v12 );
        }
        sub_102375F0(v25);
        sub_102375F0(v30);
        sub_102375F0(v26);
        sub_102375F0(v34);
        sub_102375F0(v24);
        LOBYTE(v16) = sub_102375F0((int *)&Src);
        return (char)v16;
      }
      v19 = v30[0];
      while ( 1 )
      {
        v44 = *(_DWORD *)(v19 + 8 * v18);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          LOBYTE(v16) = sub_1007DB90(
                          dword_106E6614,
                          *(_DWORD *)(v19 + 8 * v18),
                          *(_DWORD *)(v19 + 8 * v18 + 4),
                          "condition",
                          off_1066FE88);
          if ( !(_BYTE)v16 )
          {
            if ( v31 >= 0 && v19 )
              LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
            if ( v27 >= 0 )
            {
              LOBYTE(v16) = v26[0];
              if ( v26[0] )
                LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
            }
            if ( v35 >= 0 )
            {
              LOBYTE(v16) = v34[0];
              if ( v34[0] )
                LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v34[0]);
            }
            if ( v40 >= 0 )
            {
              v16 = Src;
              v20 = Src == 0;
              goto LABEL_44;
            }
            return (char)v16;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v44);
        }
        if ( ++v18 >= v32 )
          goto LABEL_48;
      }
    }
    while ( 1 )
    {
      LOBYTE(v16) = sub_1007DB90(
                      dword_106E65FC,
                      *(_DWORD *)(v26[0] + 8 * v17),
                      *(_DWORD *)(v26[0] + 8 * v17 + 4),
                      "task",
                      off_1066FE88);
      if ( !(_BYTE)v16 )
        break;
      if ( ++v17 >= v28 )
        goto LABEL_29;
    }
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v16) = sub_1007DB90(
                      dword_106E65E4,
                      *(_DWORD *)(v34[0] + 8 * v15),
                      *(_DWORD *)(v34[0] + 8 * v15 + 4),
                      "schedule",
                      off_1066FE88);
      if ( !(_BYTE)v16 )
        break;
      if ( ++v15 >= v36 )
        goto LABEL_26;
    }
  }
  if ( v31 >= 0 )
  {
    LOBYTE(v16) = v30[0];
    if ( v30[0] )
      LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30[0]);
  }
  if ( v27 >= 0 )
  {
    LOBYTE(v16) = v26[0];
    if ( v26[0] )
      LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
  }
  if ( v35 >= 0 )
  {
    LOBYTE(v16) = v34[0];
    if ( v34[0] )
      LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v34[0]);
  }
  if ( v40 >= 0 )
  {
    v16 = Src;
    v20 = Src == 0;
LABEL_44:
    if ( !v20 )
      LOBYTE(v16) = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
  }
  return (char)v16;
}
