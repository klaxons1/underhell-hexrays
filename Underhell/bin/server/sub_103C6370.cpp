char sub_103C6370()
{
  _DWORD *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // esi
  char result; // al
  int v9; // esi
  int v10; // esi
  char v11; // al
  int v12[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v13[5]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v14[5]; // [esp+34h] [ebp-58h] BYREF
  int v15[2]; // [esp+48h] [ebp-44h] BYREF
  int v16; // [esp+50h] [ebp-3Ch]
  int v17; // [esp+54h] [ebp-38h]
  int v18; // [esp+58h] [ebp-34h]
  int v19[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v20; // [esp+64h] [ebp-28h]
  int v21; // [esp+68h] [ebp-24h]
  int v22; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v24; // [esp+74h] [ebp-18h]
  int v25; // [esp+78h] [ebp-14h]
  int v26; // [esp+7Ch] [ebp-10h]
  void *v27; // [esp+80h] [ebp-Ch]
  const char *v28; // [esp+84h] [ebp-8h] BYREF
  int v29; // [esp+88h] [ebp-4h]

  Src = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  memset(v12, 0, sizeof(v12));
  v19[0] = 0;
  v19[1] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v15[0] = 0;
  v15[1] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  v28 = "TASK_GROUNDTURRET_SCAN";
  v29 = 150;
  sub_10229160(v15, 0, &v28);
  v28 = "SCHED_GROUND_TURRET_IDLE";
  v29 = 88;
  sub_10229160(v19, 0, &v28);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v26 + 1;
  v2 = v26++;
  v27 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_GROUND_TURRET_IDLE\tTasks \t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_IDLE\t\tTASK_GROUNDTURRET_SCAN\t0\tI"
          "nterrupts \t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_LOST_ENEMY\n";
  v28 = "SCHED_GROUND_TURRET_ATTACK";
  v29 = 89;
  sub_10229160(v19, v21, &v28);
  v3 = v1;
  v29 = v1;
  if ( v1 + 1 > v24 )
  {
    sub_102ABFC0(&Src, v1 - v24 + 1);
    v1 = v26;
    v0 = Src;
    v3 = v29;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v26 = v4;
  v27 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[v3 + 1], &v0[v3], 4 * v5);
    v3 = v29;
  }
  v6 = &v0[v3];
  if ( v6 )
    *v6 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_GROUND_TURRET_ATTACK\tTasks \t\tTASK_WAIT_INDEFINITE\t0\tInterrupts \t\tCOND_NEW_ENEMY\t\tCOND_LOST_"
          "ENEMY\t\tCOND_SEE_ENEMY\n";
  sub_1004BBC0(&dword_106EBDF8, (int)"CNPC_GroundTurret", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106EBE44, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v19, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v15, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v14, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v13, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v7 = 0;
  if ( v21 <= 0 )
  {
LABEL_14:
    v9 = 0;
    if ( v17 <= 0 )
    {
LABEL_17:
      v10 = 0;
      if ( v4 > 0 )
      {
        v11 = byte_1067C9F0;
        do
        {
          if ( !v11 )
            break;
          v11 = sub_100A7A40(&dword_10694898, "CNPC_GroundTurret", *((_DWORD *)Src + v10++), (int)&dword_106EBDF8);
          byte_1067C9F0 = v11;
        }
        while ( v10 < v4 );
      }
      if ( v16 >= 0 )
      {
        if ( v15[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15[0]);
      }
      sub_102375F0(v19);
      sub_102375F0(v12);
      return sub_102375F0((int *)&Src);
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EBE14,
                 *(_DWORD *)(v15[0] + 8 * v9),
                 *(_DWORD *)(v15[0] + 8 * v9 + 4),
                 "task",
                 off_1067C9F8);
      if ( !result )
        break;
      if ( ++v9 >= v17 )
        goto LABEL_17;
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EBDFC,
                 *(_DWORD *)(v19[0] + 8 * v7),
                 *(_DWORD *)(v19[0] + 8 * v7 + 4),
                 "schedule",
                 off_1067C9F8);
      if ( !result )
        break;
      if ( ++v7 >= v21 )
        goto LABEL_14;
    }
  }
  if ( v16 >= 0 )
  {
    result = v15[0];
    if ( v15[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15[0]);
  }
  if ( v20 >= 0 )
  {
    result = v19[0];
    if ( v19[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19[0]);
  }
  if ( v25 >= 0 )
  {
    result = (char)Src;
    if ( Src )
      return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  }
  return result;
}
