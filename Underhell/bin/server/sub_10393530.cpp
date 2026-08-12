char sub_10393530()
{
  _DWORD *v0; // edi
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  char v16; // al
  char result; // al
  int v18[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v19[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v20[5]; // [esp+34h] [ebp-58h] BYREF
  int v21[5]; // [esp+48h] [ebp-44h] BYREF
  int v22[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v23; // [esp+64h] [ebp-28h]
  int v24; // [esp+68h] [ebp-24h]
  int v25; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v27; // [esp+74h] [ebp-18h]
  int v28; // [esp+78h] [ebp-14h]
  int v29; // [esp+7Ch] [ebp-10h]
  void *v30; // [esp+80h] [ebp-Ch]
  const char *v31; // [esp+84h] [ebp-8h] BYREF
  int v32; // [esp+88h] [ebp-4h]

  Src = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  memset(v18, 0, sizeof(v18));
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  memset(v19, 0, sizeof(v19));
  dword_106EA100 = sub_100032E0((int)"ACT_MONK_GUN_IDLE");
  sub_10008F60((int)"ACT_MONK_GUN_IDLE", dword_106EA100);
  v31 = "SCHED_MONK_RANGE_ATTACK1";
  v32 = 91;
  sub_10229160(v22, 0, &v31);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v29 + 1;
  v2 = v29++;
  v30 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_MONK_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUNCE_ATTACK"
          "\t1\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_OCCLUDED\t\tCOND_HEAR_DANGER\t\t"
          "COND_WEAPON_BLOCKED_BY_FRIEND\t\tCOND_WEAPON_SIGHT_OCCLUDED\n";
  v31 = "SCHED_MONK_BACK_AWAY_FROM_ENEMY";
  v32 = 92;
  sub_10229160(v22, v24, &v31);
  v3 = v1;
  v32 = v1;
  if ( v1 + 1 > v27 )
  {
    sub_102ABFC0(&Src, v1 - v27 + 1);
    v1 = v29;
    v0 = Src;
    v3 = v32;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v29 = v4;
  v30 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v32;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_MONK_BACK_AWAY_FROM_ENEMY\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_STORE_ENEMY_POSITION_IN_"
          "SAVEPOSITION\t0\t\tTASK_FIND_BACKAWAY_FROM_SAVEPOSITION\t\t0\t\tTASK_WALK_PATH_TIMED\t\t\t\t\t\t4.0\t\tTASK_WA"
          "IT_FOR_MOVEMENT\t\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\n";
  v31 = "SCHED_MONK_BACK_AWAY_AND_RELOAD";
  v32 = 93;
  sub_10229160(v22, v24, &v31);
  v7 = v4;
  v32 = v4;
  if ( v4 + 1 > v27 )
  {
    sub_102ABFC0(&Src, v4 - v27 + 1);
    v4 = v29;
    v0 = Src;
    v7 = v32;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v29 = v8;
  v30 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[v7 + 1], &v0[v7], 4 * v9);
    v7 = v32;
  }
  v10 = &v0[v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MONK_BACK_AWAY_AND_RELOAD\tTasks\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDULE:SCHED_MONK_NORMAL_RE"
           "LOAD\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_STORE_ENEMY_POSITION_IN_SAVEPOSITION\t0\t\tTASK_FIND_BACKAWAY"
           "_FROM_SAVEPOSITION\t\t0\t\tTASK_WALK_PATH_TIMED\t\t\t\t\t\t2.0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tTASK"
           "_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_RELOAD\t\t\t\t\t\t\t\t\t0\tInterrupts\t\tCOND_ENEMY_DEAD\n";
  v31 = "SCHED_MONK_NORMAL_RELOAD";
  v32 = 94;
  sub_10229160(v22, v24, &v31);
  v11 = v8;
  v32 = v8;
  if ( v8 + 1 > v27 )
  {
    sub_102ABFC0(&Src, v8 - v27 + 1);
    v8 = v29;
    v0 = Src;
    v11 = v32;
  }
  v12 = v8 + 1;
  v13 = v12 - v11 - 1;
  v29 = v12;
  v30 = v0;
  if ( v13 > 0 )
  {
    memcpy(&v0[v11 + 1], &v0[v11], 4 * v13);
    v11 = v32;
  }
  v14 = &v0[v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MONK_NORMAL_RELOAD\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_RELOAD\t\t\t\t\t\t\t\t\t0\tInt"
           "errupts\t\tCOND_HEAR_DANGER\n";
  sub_1004BBC0(&dword_106EA150, (int)"CNPC_Monk", (int)dword_10690E5C, (int)&dword_10693928);
  sub_1007DAB0(dword_106EA19C, (int)dword_1069528C, (int)dword_10693974);
  sub_1004C500((int)v22, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v20, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v21, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v19, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v15 = 0;
  v32 = 0;
  if ( v24 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EA154,
                 *(_DWORD *)(v22[0] + 8 * v15),
                 *(_DWORD *)(v22[0] + 8 * v15 + 4),
                 "schedule",
                 off_10677388);
      if ( !result )
        break;
      if ( ++v32 >= v24 )
        goto LABEL_24;
      v15 = v32;
    }
    if ( v23 >= 0 )
    {
      result = v22[0];
      if ( v22[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
    }
    if ( v28 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
  else
  {
LABEL_24:
    v32 = 0;
    if ( v12 > 0 )
    {
      v16 = byte_10677380;
      do
      {
        if ( !v16 )
          break;
        v16 = sub_100A7A40(&dword_10694898, "CNPC_Monk", v0[v32], (int)&dword_106EA150);
        byte_10677380 = v16;
        ++v32;
      }
      while ( v32 < v12 );
    }
    sub_102375F0(v21);
    sub_102375F0(v20);
    sub_102375F0(v22);
    sub_102375F0(v18);
    return sub_102375F0((int *)&Src);
  }
  return result;
}
