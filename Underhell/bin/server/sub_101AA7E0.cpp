char sub_101AA7E0()
{
  char *v0; // esi
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  char *v8; // esi
  int v9; // esi
  char result; // al
  int v11; // esi
  int v12; // esi
  char v13; // al
  _DWORD v14[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v15[5]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v16[5]; // [esp+34h] [ebp-58h] BYREF
  _DWORD v17[2]; // [esp+48h] [ebp-44h] BYREF
  int v18; // [esp+50h] [ebp-3Ch]
  int v19; // [esp+54h] [ebp-38h]
  int v20; // [esp+58h] [ebp-34h]
  _DWORD v21[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v22; // [esp+64h] [ebp-28h]
  int v23; // [esp+68h] [ebp-24h]
  int v24; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v26; // [esp+74h] [ebp-18h]
  int v27; // [esp+78h] [ebp-14h]
  int v28; // [esp+7Ch] [ebp-10h]
  void *v29; // [esp+80h] [ebp-Ch]
  const char *v30; // [esp+84h] [ebp-8h] BYREF
  int v31; // [esp+88h] [ebp-4h]

  Src = 0;
  v26 = 0;
  v27 = 0;
  memset(v14, 0, sizeof(v14));
  v21[0] = 0;
  v21[1] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v30 = "TASK_VEHICLEDRIVER_GET_PATH";
  v31 = 150;
  sub_10229160(0, &v30);
  v30 = "SCHED_VEHICLEDRIVER_INACTIVE";
  v31 = 88;
  sub_10229160(0, &v30);
  sub_102ABFC0(1);
  v28 = 1;
  v29 = 0;
  v30 = "SCHED_VEHICLEDRIVER_COMBAT_WAIT";
  v31 = 89;
  sub_10229160(0, &v30);
  v31 = 1;
  sub_102ABFC0(1 - v26 + 1);
  v0 = (char *)Src;
  v1 = v31;
  v2 = v28 + 1;
  v3 = v28 - v31;
  ++v28;
  v29 = Src;
  if ( v3 > 0 )
  {
    memcpy((char *)Src + 4 * v31 + 4, (char *)Src + 4 * v31, 4 * v3);
    v1 = v31;
  }
  v4 = (char *)Src + 4 * v1;
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_VEHICLEDRIVER_COMBAT_WAIT\tTasks\t\tTASK_WAIT\t\t\t\t5\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_D"
          "AMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_PROVOKED\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\n";
  v30 = "SCHED_VEHICLEDRIVER_DRIVE_PATH";
  v31 = 90;
  sub_10229160(v23, &v30);
  v5 = v2;
  v31 = v2;
  if ( v2 + 1 > v26 )
  {
    sub_102ABFC0(v2 - v26 + 1);
    v2 = v28;
    v0 = (char *)Src;
    v5 = v31;
  }
  v6 = v2 + 1;
  v7 = v6 - v5 - 1;
  v28 = v6;
  v29 = v0;
  if ( v7 > 0 )
  {
    memcpy(&v0[4 * v5 + 4], &v0[4 * v5], 4 * v7);
    v5 = v31;
  }
  v8 = &v0[4 * v5];
  if ( v8 )
    *(_DWORD *)v8 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_VEHICLEDRIVER_DRIVE_PATH\tTasks\t\tTASK_VEHICLEDRIVER_GET_PATH\t\t0\t\tTASK_WALK_PATH\t\t\t"
                    "\t\t9999\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_WAIT_PVS\t\t\t\t\t0\tInterrupts\t\tCOND_NEW_ENEMY\t"
                    "\tCOND_PROVOKED\n";
  sub_1004BBC0(&dword_106B9490, (int)"CNPC_VehicleDriver", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106B94DC, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v21, sub_10333A80);
  sub_1004C500((int)v17, sub_10333A80);
  sub_1004C500((int)v16, sub_10333A80);
  sub_1004C500((int)v15, sub_10333A80);
  v9 = 0;
  if ( v23 <= 0 )
  {
LABEL_16:
    v11 = 0;
    if ( v19 <= 0 )
    {
LABEL_19:
      v12 = 0;
      if ( v6 > 0 )
      {
        v13 = byte_10633884;
        do
        {
          if ( !v13 )
            break;
          v13 = sub_100A7A40(&dword_10694898, "CNPC_VehicleDriver", *((_DWORD *)Src + v12++), (int)&dword_106B9490);
          byte_10633884 = v13;
        }
        while ( v12 < v6 );
      }
      sub_102375F0(v17);
      sub_102375F0(v21);
      sub_102375F0(v14);
      return sub_102375F0(&Src);
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106B94AC,
                 *(_DWORD *)(v17[0] + 8 * v11),
                 *(_DWORD *)(v17[0] + 8 * v11 + 4),
                 "task",
                 off_1063388C);
      if ( !result )
        break;
      if ( ++v11 >= v19 )
        goto LABEL_19;
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106B9494,
                 *(_DWORD *)(v21[0] + 8 * v9),
                 *(_DWORD *)(v21[0] + 8 * v9 + 4),
                 "schedule",
                 off_1063388C);
      if ( !result )
        break;
      if ( ++v9 >= v23 )
        goto LABEL_16;
    }
  }
  if ( v18 >= 0 )
  {
    result = v17[0];
    if ( v17[0] )
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v17[0]);
  }
  if ( v22 >= 0 )
  {
    result = v21[0];
    if ( v21[0] )
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
  }
  if ( v27 >= 0 )
  {
    result = (char)Src;
    if ( Src )
      return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  }
  return result;
}
