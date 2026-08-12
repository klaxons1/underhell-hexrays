char sub_103CE960()
{
  _DWORD *v0; // esi
  const char *v1; // edi
  int v2; // eax
  const char *v3; // ecx
  const char *v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  const char *v7; // ecx
  const char *v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  const char *v11; // ecx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // esi
  char result; // al
  int v17; // esi
  int i; // esi
  int v19; // esi
  char v20; // al
  int v21[5]; // [esp+Ch] [ebp-80h] BYREF
  int v22[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v23[2]; // [esp+34h] [ebp-58h] BYREF
  int v24; // [esp+3Ch] [ebp-50h]
  int v25; // [esp+40h] [ebp-4Ch]
  int v26; // [esp+44h] [ebp-48h]
  int v27[2]; // [esp+48h] [ebp-44h] BYREF
  int v28; // [esp+50h] [ebp-3Ch]
  int v29; // [esp+54h] [ebp-38h]
  int v30; // [esp+58h] [ebp-34h]
  int v31[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v32; // [esp+64h] [ebp-28h]
  int v33; // [esp+68h] [ebp-24h]
  int v34; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v36; // [esp+74h] [ebp-18h]
  int v37; // [esp+78h] [ebp-14h]
  const char *v38; // [esp+7Ch] [ebp-10h]
  void *v39; // [esp+80h] [ebp-Ch]
  const char *v40; // [esp+84h] [ebp-8h] BYREF
  int v41; // [esp+88h] [ebp-4h]

  Src = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v21, 0, sizeof(v21));
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(v22, 0, sizeof(v22));
  v40 = "COND_BLOCKED_BY_DOOR";
  v41 = 76;
  sub_10229160(v23, 0, &v40);
  v40 = "COND_DOOR_OPENED";
  v41 = 77;
  sub_10229160(v23, v25, &v40);
  v40 = "COND_ZOMBIE_CHARGE_TARGET_MOVED";
  v41 = 78;
  sub_10229160(v23, v25, &v40);
  v40 = "TASK_ZOMBIE_EXPRESS_ANGER";
  v41 = 156;
  sub_10229160(v31, 0, &v40);
  v40 = "TASK_ZOMBIE_YAW_TO_DOOR";
  v41 = 157;
  sub_10229160(v31, v33, &v40);
  v40 = "TASK_ZOMBIE_ATTACK_DOOR";
  v41 = 158;
  sub_10229160(v31, v33, &v40);
  v40 = "TASK_ZOMBIE_CHARGE_ENEMY";
  v41 = 159;
  sub_10229160(v31, v33, &v40);
  dword_106EC79C = sub_100032E0((int)"ACT_ZOMBIE_TANTRUM");
  sub_10008F60((int)"ACT_ZOMBIE_TANTRUM", dword_106EC79C);
  dword_106EC798 = sub_100032E0((int)"ACT_ZOMBIE_WALLPOUND");
  sub_10008F60((int)"ACT_ZOMBIE_WALLPOUND", dword_106EC798);
  v40 = "SCHED_ZOMBIE_BASH_DOOR";
  v41 = 100;
  sub_10229160(v27, 0, &v40);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v38 + 1;
  v2 = (int)v38++;
  v39 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_BASH_DOOR\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_ZOMBIE_TANTRUM\t\tTASK_SET_FAIL_SCH"
          "EDULE\t\t\tSCHEDULE:SCHED_TAKE_COVER_FROM_ENEMY\t\tTASK_ZOMBIE_YAW_TO_DOOR\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t"
          "0\t\tTASK_ZOMBIE_ATTACK_DOOR\t\t\t0\tInterrupts\t\tCOND_ZOMBIE_RELEASECRAB\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEM"
          "Y\t\tCOND_DOOR_OPENED\n";
  v40 = "SCHED_ZOMBIE_WANDER_ANGRILY";
  v41 = 101;
  sub_10229160(v27, v29, &v40);
  v3 = v1;
  v41 = (int)v1;
  if ( (int)(v1 + 1) > v36 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v36 + 1]);
    v1 = v38;
    v0 = Src;
    v3 = (const char *)v41;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v38 = v4;
  v39 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[(_DWORD)v3 + 1], &v0[(_DWORD)v3], 4 * v5);
    v3 = (const char *)v41;
  }
  v6 = &v0[(_DWORD)v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_WANDER_ANGRILY\tTasks\t\tTASK_WANDER\t\t\t\t\t\t480240\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_W"
          "AIT_FOR_MOVEMENT\t\t\t4\tInterrupts\t\tCOND_ZOMBIE_RELEASECRAB\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_DOOR_OPENED\n";
  v40 = "SCHED_ZOMBIE_CHARGE_ENEMY";
  v41 = 102;
  sub_10229160(v27, v29, &v40);
  v7 = v4;
  v41 = (int)v4;
  if ( (int)(v4 + 1) > v36 )
  {
    sub_102ABFC0(&Src, (int)&v4[-v36 + 1]);
    v4 = v38;
    v0 = Src;
    v7 = (const char *)v41;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v38 = v8;
  v39 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[(_DWORD)v7 + 1], &v0[(_DWORD)v7], 4 * v9);
    v7 = (const char *)v41;
  }
  v10 = &v0[(_DWORD)v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_CHARGE_ENEMY\tTasks\t\tTASK_ZOMBIE_CHARGE_ENEMY\t\t0\t\tTASK_WALK_PATH\t\t\t\t\t0\t\tTASK_WA"
           "IT_FOR_MOVEMENT\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_ZOMBIE_TANTRUM\tInterrupts\t\tCOND_ZOMBIE_RE"
           "LEASECRAB\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_DOOR_OPENED\t\tCOND_ZOMBIE_CHARGE_TARGET_MOVED\n";
  v40 = "SCHED_ZOMBIE_FAIL";
  v41 = 103;
  sub_10229160(v27, v29, &v40);
  v11 = v8;
  v41 = (int)v8;
  if ( (int)(v8 + 1) > v36 )
  {
    sub_102ABFC0(&Src, (int)&v8[-v36 + 1]);
    v8 = v38;
    v0 = Src;
    v11 = (const char *)v41;
  }
  v12 = (int)(v8 + 1);
  v13 = v12 - (_DWORD)v11 - 1;
  v38 = (const char *)v12;
  v39 = v0;
  if ( v13 > 0 )
  {
    memcpy(&v0[(_DWORD)v11 + 1], &v0[(_DWORD)v11], 4 * v13);
    v11 = (const char *)v41;
  }
  v14 = &v0[(_DWORD)v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_ZOMBIE_FAIL\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_ZOMBIE_TANTRUM\t\t"
           "TASK_WAIT\t\t\t\t1\t\tTASK_WAIT_PVS\t\t\t0\tInterrupts\t\tCOND_CAN_RANGE_ATTACK1 \t\tCOND_CAN_RANGE_ATTACK2 \t"
           "\tCOND_CAN_MELEE_ATTACK1 \t\tCOND_CAN_MELEE_ATTACK2\t\tCOND_GIVE_WAY\t\tCOND_DOOR_OPENED\n";
  sub_1004BBC0(&dword_106EC7F0, (int)"CZombie", (int)dword_10690E5C, (int)&dword_106E5A40);
  sub_1007DAB0(dword_106EC83C, (int)dword_1069528C, (int)dword_106E5A8C);
  sub_1004C500((int)v27, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v23, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v22, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v15 = 0;
  if ( v29 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106EC7F4,
                 *(_DWORD *)(v27[0] + 8 * v15),
                 *(_DWORD *)(v27[0] + 8 * v15 + 4),
                 "schedule",
                 off_1067DC80);
      if ( !result )
        goto LABEL_32;
    }
    while ( ++v15 < v29 );
  }
  v17 = 0;
  if ( v33 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EC80C,
                 *(_DWORD *)(v31[0] + 8 * v17),
                 *(_DWORD *)(v31[0] + 8 * v17 + 4),
                 "task",
                 off_1067DC80);
      if ( !result )
        break;
      if ( ++v17 >= v33 )
        goto LABEL_29;
    }
LABEL_32:
    if ( v24 >= 0 )
    {
      result = v23[0];
      if ( v23[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23[0]);
    }
    if ( v32 >= 0 )
    {
      result = v31[0];
      if ( v31[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
    }
    if ( v28 >= 0 )
    {
      result = v27[0];
      if ( v27[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27[0]);
    }
    if ( v37 >= 0 )
    {
      result = (char)Src;
      if ( Src )
        return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
    }
    return result;
  }
LABEL_29:
  for ( i = 0; i < v25; ++i )
  {
    v41 = *(_DWORD *)(v23[0] + 8 * i);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
    {
      result = sub_1007DB90(
                 dword_106EC824,
                 *(_DWORD *)(v23[0] + 8 * i),
                 *(_DWORD *)(v23[0] + 8 * i + 4),
                 "condition",
                 off_1067DC80);
      if ( !result )
        goto LABEL_32;
    }
    else
    {
      DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v41);
    }
  }
  v19 = 0;
  if ( v12 > 0 )
  {
    v20 = byte_1067DC78;
    do
    {
      if ( !v20 )
        break;
      v20 = sub_100A7A40(&dword_10694898, "CZombie", *((_DWORD *)Src + v19++), (int)&dword_106EC7F0);
      byte_1067DC78 = v20;
    }
    while ( v19 < v12 );
  }
  sub_102375F0(v22);
  sub_102375F0(v23);
  sub_102375F0(v31);
  sub_102375F0(v27);
  sub_102375F0(v21);
  return sub_102375F0((int *)&Src);
}
