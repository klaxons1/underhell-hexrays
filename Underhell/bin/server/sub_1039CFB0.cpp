char sub_1039CFB0()
{
  _DWORD *v0; // edi
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // edi
  char result; // al
  int v9; // edi
  char v10; // al
  int v11[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v12[5]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v13[5]; // [esp+34h] [ebp-58h] BYREF
  _DWORD v14[5]; // [esp+48h] [ebp-44h] BYREF
  int v15[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v16; // [esp+64h] [ebp-28h]
  int v17; // [esp+68h] [ebp-24h]
  int v18; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v20; // [esp+74h] [ebp-18h]
  int v21; // [esp+78h] [ebp-14h]
  int v22; // [esp+7Ch] [ebp-10h]
  void *v23; // [esp+80h] [ebp-Ch]
  const char *v24; // [esp+84h] [ebp-8h] BYREF
  int v25; // [esp+88h] [ebp-4h]

  Src = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  memset(v11, 0, sizeof(v11));
  v15[0] = 0;
  v15[1] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  dword_106EA420 = sub_100032E0((int)"ACT_ZOMBIE_POISON_THREAT");
  sub_10008F60((int)"ACT_ZOMBIE_POISON_THREAT", dword_106EA420);
  dword_106EA434 = sub_1013BF10((int)"AE_ZOMBIE_POISON_THROW_WARN_SOUND");
  sub_1006AFD0((int)"AE_ZOMBIE_POISON_THROW_WARN_SOUND", dword_106EA434);
  dword_106EA430 = sub_1013BF10((int)"AE_ZOMBIE_POISON_PICKUP_CRAB");
  sub_1006AFD0((int)"AE_ZOMBIE_POISON_PICKUP_CRAB", dword_106EA430);
  dword_106EA42C = sub_1013BF10((int)"AE_ZOMBIE_POISON_THROW_SOUND");
  sub_1006AFD0((int)"AE_ZOMBIE_POISON_THROW_SOUND", dword_106EA42C);
  dword_106EA428 = sub_1013BF10((int)"AE_ZOMBIE_POISON_THROW_CRAB");
  sub_1006AFD0((int)"AE_ZOMBIE_POISON_THROW_CRAB", dword_106EA428);
  dword_106EA424 = sub_1013BF10((int)"AE_ZOMBIE_POISON_SPIT");
  sub_1006AFD0((int)"AE_ZOMBIE_POISON_SPIT", dword_106EA424);
  v24 = "SCHED_ZOMBIE_POISON_RANGE_ATTACK2";
  v25 = 100;
  sub_10229160(v15, 0, &v24);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v22 + 1;
  v2 = v22++;
  v23 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_POISON_RANGE_ATTACK2\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t\t\t\t"
          "0\t\tTASK_PLAY_PRIVATE_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_ZOMBIE_POISON_THREAT\t\tTASK_FACE_IDEAL\t\t\t\t\t\t\t"
          "0\t\tTASK_RANGE_ATTACK2\t\t\t\t\t\t0\tInterrupts\t\tCOND_NO_PRIMARY_AMMO\n";
  v24 = "SCHED_ZOMBIE_POISON_RANGE_ATTACK1";
  v25 = 101;
  sub_10229160(v15, v17, &v24);
  v3 = v1;
  v25 = v1;
  if ( v1 + 1 > v20 )
  {
    sub_102ABFC0(&Src, v1 - v20 + 1);
    v1 = v22;
    v0 = Src;
    v3 = v25;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v22 = v4;
  v23 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v25;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_POISON_RANGE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t0\t\tTASK_FACE_ENEMY\t\t\t0\t\tTASK_ANNOUN"
          "CE_ATTACK\t1\t\tTASK_RANGE_ATTACK1\t\t0\tInterrupts\t\tCOND_NO_PRIMARY_AMMO\n";
  sub_1004BBC0(&dword_106EA4D0, (int)"CNPC_PoisonZombie", (int)dword_10690E5C, (int)&dword_106E5A40);
  sub_1007DAB0(dword_106EA51C, (int)dword_1069528C, (int)dword_106E5A8C);
  sub_1004C500((int)v15, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v14, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v13, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v12, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v7 = 0;
  if ( v17 <= 0 )
  {
LABEL_14:
    v9 = 0;
    if ( v4 > 0 )
    {
      v10 = byte_10677E2C;
      do
      {
        if ( !v10 )
          break;
        v10 = sub_100A7A40(&dword_10694898, "CNPC_PoisonZombie", *((_DWORD *)Src + v9++), (int)&dword_106EA4D0);
        byte_10677E2C = v10;
      }
      while ( v9 < v4 );
    }
    sub_102375F0(v15);
    sub_102375F0(v11);
    return sub_102375F0((int *)&Src);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EA4D4,
                 *(_DWORD *)(v15[0] + 8 * v7),
                 *(_DWORD *)(v15[0] + 8 * v7 + 4),
                 "schedule",
                 off_10677E34);
      if ( !result )
        break;
      if ( ++v7 >= v17 )
        goto LABEL_14;
    }
    if ( v16 >= 0 )
    {
      result = v15[0];
      if ( v15[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15[0]);
    }
    if ( v21 >= 0 )
    {
      result = (char)Src;
      if ( Src )
        return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
    }
  }
  return result;
}
