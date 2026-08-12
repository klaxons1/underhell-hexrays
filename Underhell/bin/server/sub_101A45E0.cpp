char sub_101A45E0()
{
  int v0; // ecx
  int v1; // edi
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // esi
  char result; // al
  int v6; // esi
  int v7; // esi
  int v8; // edi
  int v9; // esi
  char v10; // al
  _DWORD v11[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v12[5]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v13[2]; // [esp+34h] [ebp-58h] BYREF
  int v14; // [esp+3Ch] [ebp-50h]
  int v15; // [esp+40h] [ebp-4Ch]
  int v16; // [esp+44h] [ebp-48h]
  void *Src; // [esp+48h] [ebp-44h] BYREF
  int v18; // [esp+4Ch] [ebp-40h]
  int v19; // [esp+50h] [ebp-3Ch]
  int v20; // [esp+54h] [ebp-38h]
  void *v21; // [esp+58h] [ebp-34h]
  _DWORD v22[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v23; // [esp+64h] [ebp-28h]
  int v24; // [esp+68h] [ebp-24h]
  int v25; // [esp+6Ch] [ebp-20h]
  _DWORD v26[2]; // [esp+70h] [ebp-1Ch] BYREF
  int v27; // [esp+78h] [ebp-14h]
  int v28; // [esp+7Ch] [ebp-10h]
  int v29; // [esp+80h] [ebp-Ch]
  const char *v30; // [esp+84h] [ebp-8h] BYREF
  int v31; // [esp+88h] [ebp-4h]

  Src = 0;
  v18 = 0;
  v19 = 0;
  memset(v11, 0, sizeof(v11));
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  memset(v12, 0, sizeof(v12));
  v30 = "COND_BUTCHER_UH_PHYSICS_TARGET";
  v31 = 76;
  sub_10229160(0, &v30);
  v30 = "COND_BUTCHER_UH_PHYSICS_TARGET_INVALID";
  v31 = 77;
  sub_10229160(0, &v30);
  v30 = "COND_BUTCHER_UH_HAS_CHARGE_TARGET";
  v31 = 78;
  sub_10229160(0, &v30);
  v30 = "COND_BUTCHER_UH_CAN_CHARGE";
  v31 = 79;
  sub_10229160(0, &v30);
  v30 = "COND_BUTCHER_UH_DOOR_OPENED";
  v31 = 80;
  sub_10229160(0, &v30);
  v30 = "COND_BUTCHER_UH_BLOCKED_BY_DOOR";
  v31 = 81;
  sub_10229160(0, &v30);
  dword_106B9108 = sub_100032E0((int)"ACT_RUN_PANICKED");
  sub_10008F60((int)"ACT_RUN_PANICKED", dword_106B9108);
  dword_106B8F50 = sub_100032E0((int)"ACT_BUTCHER_UH_INFECTED_ATTACK_FAST");
  sub_10008F60((int)"ACT_BUTCHER_UH_INFECTED_ATTACK_FAST", dword_106B8F50);
  dword_106B8F4C = sub_100032E0((int)"ACT_BUTCHER_ZOMBIE_WALLPOUND");
  sub_10008F60((int)"ACT_BUTCHER_ZOMBIE_WALLPOUND", dword_106B8F4C);
  dword_106B8F48 = sub_100032E0((int)"ACT_BUTCHER_ZOMBIE_BREAKTHROUGH");
  sub_10008F60((int)"ACT_BUTCHER_ZOMBIE_BREAKTHROUGH", dword_106B8F48);
  dword_106B8F44 = sub_100032E0((int)"ACT_CHARGECRASH");
  sub_10008F60((int)"ACT_CHARGECRASH", dword_106B8F44);
  dword_106B8F40 = sub_100032E0((int)"ACT_CHARGESTOP");
  sub_10008F60((int)"ACT_CHARGESTOP", dword_106B8F40);
  v30 = "TASK_BUTCHER_CHARGE";
  v31 = 250;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_GET_PATH_TO_PHYSOBJECT";
  v31 = 251;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_SHOVE_PHYSOBJECT";
  v31 = 252;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_SUMMON";
  v31 = 253;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_SET_FLINCH_ACTIVITY";
  v31 = 254;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_GET_PATH_TO_CHARGE_POSITION";
  v31 = 255;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_GET_PATH_TO_NEAREST_NODE";
  v31 = 256;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_GET_CHASE_PATH_ENEMY_TOLERANCE";
  v31 = 257;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_OPPORTUNITY_THROW";
  v31 = 258;
  sub_10229160(0, &v30);
  v30 = "TASK_BUTCHER_FIND_PHYSOBJECT";
  v31 = 259;
  sub_10229160(0, &v30);
  v30 = "SCHED_BUTCHER_UH_CHARGE";
  v31 = 100;
  sub_10229160(0, &v30);
  sub_102ABFC0(1);
  v20 = 1;
  v21 = 0;
  v30 = "SCHED_BUTCHER_UH_CHARGE_TARGET";
  v31 = 105;
  sub_10229160(0, &v30);
  v31 = 1;
  sub_102ABFC0(1 - v18 + 1);
  v0 = v31;
  v1 = v20 + 1;
  v2 = v20 - v31;
  ++v20;
  v21 = Src;
  if ( v2 > 0 )
  {
    memcpy((char *)Src + 4 * v31 + 4, (char *)Src + 4 * v31, 4 * v2);
    v0 = v31;
  }
  v3 = (char *)Src + 4 * v0;
  if ( v3 )
    *v3 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_BUTCHER_UH_CHARGE_TARGET\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\tSCHE"
          "DULE:SCHED_RUN_RANDOM\t\tTASK_FACE_ENEMY\t\t\t\t\t\t0\t\tTASK_BUTCHER_CHARGE\t\t\t0\tInterrupts\t\tCOND_TASK_F"
          "AILED\t\tCOND_HEAVY_DAMAGE\n";
  sub_1004BBC0(&dword_106B9078, (int)"CNPC_UH_Butcher", (int)dword_10690E5C, (int)&unk_106E5A40);
  sub_1007DAB0(dword_106B90C4, (int)dword_1069528C, (int)&unk_106E5A8C);
  sub_1004C500((int)v13, sub_10333A80);
  sub_1004C500((int)v26, sub_10333A80);
  sub_1004C500((int)v22, sub_10333A80);
  sub_1004C500((int)v12, sub_10333A80);
  v4 = 0;
  if ( v15 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106B907C,
                 *(_DWORD *)(v13[0] + 8 * v4),
                 *(_DWORD *)(v13[0] + 8 * v4 + 4),
                 "schedule",
                 off_10632B9C);
      if ( !result )
        goto LABEL_17;
    }
    while ( ++v4 < v15 );
  }
  v6 = 0;
  if ( v28 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106B9094,
                 *(_DWORD *)(v26[0] + 8 * v6),
                 *(_DWORD *)(v26[0] + 8 * v6 + 4),
                 "task",
                 off_10632B9C);
      if ( !result )
        break;
      if ( ++v6 >= v28 )
        goto LABEL_13;
    }
LABEL_17:
    if ( v23 >= 0 )
    {
      result = v22[0];
      if ( v22[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
    }
LABEL_20:
    if ( v27 >= 0 )
    {
      result = v26[0];
      if ( v26[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
    }
    if ( v14 >= 0 )
    {
      result = v13[0];
      if ( v13[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
    }
    if ( v19 >= 0 )
    {
      result = (char)Src;
      if ( Src )
        return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
    }
    return result;
  }
LABEL_13:
  v7 = 0;
  if ( v24 > 0 )
  {
    v8 = v22[0];
    while ( 1 )
    {
      v31 = *(_DWORD *)(v8 + 8 * v7);
      if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      {
        result = sub_1007DB90(
                   dword_106B90AC,
                   *(_DWORD *)(v8 + 8 * v7),
                   *(_DWORD *)(v8 + 8 * v7 + 4),
                   "condition",
                   off_10632B9C);
        if ( !result )
        {
          if ( v23 >= 0 && v8 )
            result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
          goto LABEL_20;
        }
      }
      else
      {
        DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v31);
      }
      if ( ++v7 >= v24 )
      {
        v1 = v20;
        break;
      }
    }
  }
  v9 = 0;
  if ( v1 > 0 )
  {
    v10 = byte_10632B94;
    do
    {
      if ( !v10 )
        break;
      v10 = sub_100A7A40(&dword_10694898, "CNPC_UH_Butcher", *((_DWORD *)Src + v9++), (int)&dword_106B9078);
      byte_10632B94 = v10;
    }
    while ( v9 < v1 );
  }
  sub_102375F0(v22);
  sub_102375F0(v26);
  sub_102375F0(v13);
  sub_102375F0(v11);
  return sub_102375F0(&Src);
}
