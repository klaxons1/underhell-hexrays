char sub_103D0680()
{
  _DWORD *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // esi
  char result; // al
  int v5; // esi
  const char *v6; // edi
  int v7; // edi
  int v8; // esi
  int v9; // esi
  char v10; // al
  int v11[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v12[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v13[2]; // [esp+34h] [ebp-58h] BYREF
  int v14; // [esp+3Ch] [ebp-50h]
  int v15; // [esp+40h] [ebp-4Ch]
  int v16; // [esp+44h] [ebp-48h]
  int v17[2]; // [esp+48h] [ebp-44h] BYREF
  int v18; // [esp+50h] [ebp-3Ch]
  int v19; // [esp+54h] [ebp-38h]
  int v20; // [esp+58h] [ebp-34h]
  void *Src[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v22; // [esp+64h] [ebp-28h]
  int v23; // [esp+68h] [ebp-24h]
  void *v24; // [esp+6Ch] [ebp-20h]
  int v25[2]; // [esp+70h] [ebp-1Ch] BYREF
  int v26; // [esp+78h] [ebp-14h]
  int v27; // [esp+7Ch] [ebp-10h]
  int v28; // [esp+80h] [ebp-Ch]
  const char *v29; // [esp+84h] [ebp-8h] BYREF
  int v30; // [esp+88h] [ebp-4h]

  Src[0] = 0;
  Src[1] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  memset(v11, 0, sizeof(v11));
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(v12, 0, sizeof(v12));
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = "SQUAD_SLOT_ZOMBINE_SPRINT1";
  v30 = 8;
  sub_10229160(v25, 0, &v29);
  v29 = "SQUAD_SLOT_ZOMBINE_SPRINT2";
  v30 = 9;
  sub_10229160(v25, v27, &v29);
  v29 = "COND_ZOMBINE_GRENADE";
  v30 = 76;
  sub_10229160(v17, 0, &v29);
  dword_106EC89C = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_PULL");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_PULL", dword_106EC89C);
  dword_106EC898 = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_WALK");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_WALK", dword_106EC898);
  dword_106EC894 = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_RUN");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_RUN", dword_106EC894);
  dword_106EC890 = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_IDLE");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_IDLE", dword_106EC890);
  dword_106EC88C = sub_100032E0((int)"ACT_ZOMBINE_ATTACK_FAST");
  sub_10008F60((int)"ACT_ZOMBINE_ATTACK_FAST", dword_106EC88C);
  dword_106EC888 = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_FLINCH_BACK");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_FLINCH_BACK", dword_106EC888);
  dword_106EC884 = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_FLINCH_FRONT");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_FLINCH_FRONT", dword_106EC884);
  LODWORD(flt_106EC880) = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_FLINCH_WEST");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_FLINCH_WEST", SLODWORD(flt_106EC880));
  dword_106EC87C = sub_100032E0((int)"ACT_ZOMBINE_GRENADE_FLINCH_EAST");
  sub_10008F60((int)"ACT_ZOMBINE_GRENADE_FLINCH_EAST", dword_106EC87C);
  dword_106EC878 = sub_1013BF10((int)"AE_ZOMBINE_PULLPIN");
  sub_1006AFD0((int)"AE_ZOMBINE_PULLPIN", dword_106EC878);
  v29 = "SCHED_ZOMBINE_PULL_GRENADE";
  v30 = 100;
  sub_10229160(v13, 0, &v29);
  sub_102ABFC0(Src, 1);
  v0 = Src[0];
  v1 = v23 + 1;
  v2 = v23++;
  v24 = Src[0];
  if ( v2 > 0 )
    memcpy((char *)Src[0] + 4, Src[0], 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBINE_PULL_GRENADE\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\t\t\tACTIVITY:ACT_ZOMBINE_GRENADE_PULL\tInterrupts\n";
  sub_1004BBC0(&dword_106EC8F0, (int)"CNPC_Zombine", (int)dword_10690E5C, (int)&dword_106E5A40);
  sub_1007DAB0(dword_106EC93C, (int)dword_1069528C, (int)dword_106E5A8C);
  sub_1004C500((int)v13, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v12, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v17, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v25, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v3 = 0;
  if ( v15 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EC8F4,
                 *(_DWORD *)(v13[0] + 8 * v3),
                 *(_DWORD *)(v13[0] + 8 * v3 + 4),
                 "schedule",
                 off_1067DE3C);
      if ( !result )
        break;
      if ( ++v3 >= v15 )
        goto LABEL_8;
    }
LABEL_11:
    if ( v26 >= 0 )
    {
      result = v25[0];
      if ( v25[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
    }
    if ( v18 >= 0 )
    {
      result = v17[0];
      if ( v17[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17[0]);
    }
    goto LABEL_17;
  }
LABEL_8:
  v5 = 0;
  if ( v19 <= 0 )
  {
LABEL_26:
    v8 = 0;
    if ( v27 <= 0 )
    {
LABEL_29:
      v9 = 0;
      if ( v1 > 0 )
      {
        v10 = byte_1067DE34;
        do
        {
          if ( !v10 )
            break;
          v10 = sub_100A7A40(&dword_10694898, "CNPC_Zombine", *((_DWORD *)Src[0] + v9++), (int)&dword_106EC8F0);
          byte_1067DE34 = v10;
        }
        while ( v9 < v1 );
      }
      if ( v26 >= 0 && v25[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
      if ( v18 >= 0 )
      {
        if ( v17[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17[0]);
      }
      sub_102375F0(v13);
      sub_102375F0(v11);
      return sub_102375F0((int *)Src);
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EC93C,
                 *(_DWORD *)(v25[0] + 8 * v8),
                 *(_DWORD *)(v25[0] + 8 * v8 + 4),
                 "squadslot",
                 off_1067DE3C);
      if ( !result )
        goto LABEL_11;
      if ( ++v8 >= v27 )
        goto LABEL_29;
    }
  }
  while ( 1 )
  {
    v6 = *(const char **)(v17[0] + 8 * v5);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v6);
LABEL_24:
    if ( ++v5 >= v19 )
    {
      v1 = v23;
      goto LABEL_26;
    }
  }
  v7 = v17[0];
  result = sub_1007DB90(
             dword_106EC924,
             *(_DWORD *)(v17[0] + 8 * v5),
             *(_DWORD *)(v17[0] + 8 * v5 + 4),
             "condition",
             off_1067DE3C);
  if ( result )
    goto LABEL_24;
  if ( v26 >= 0 )
  {
    result = v25[0];
    if ( v25[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
  }
  if ( v18 >= 0 && v7 )
    result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
LABEL_17:
  if ( v14 >= 0 )
  {
    result = v13[0];
    if ( v13[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
  }
  if ( v22 >= 0 )
  {
    result = (char)Src[0];
    if ( Src[0] )
      return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src[0]);
  }
  return result;
}
