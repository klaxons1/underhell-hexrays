int __thiscall sub_101F0AA0(int this, const char *a2, int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // edi
  int v9; // esi
  int v10; // eax
  int *v11; // ecx
  int v12; // eax
  int *v13; // ebx
  int v14; // eax
  int v15; // edi
  int *v16; // eax
  int *v17; // ecx
  int v18; // ecx
  int v19; // eax
  char *v20; // eax
  int *v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v25; // [esp+18h] [ebp-4h] BYREF
  unsigned int v26; // [esp+24h] [ebp+8h]

  if ( sub_100CF660((_DWORD *)this, (int)a2, a3) )
    return 0;
  v5 = sub_101811E0(a2, -1);
  if ( !v5
    || (v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5), v25 = v6, v6 == -1)
    || (v7 = v6 & 0xFFF, v8 = v6 >> 12, v9 = 2 * v7, v26 = v8, off_1061BE18[2 * v9 + 2] != v8)
    || !off_1061BE18[2 * v9 + 1] )
  {
    Msg("NULL Ent in GiveNamedItem!\n");
    return 0;
  }
  if ( off_1061BE18[2 * v9 + 2] == v8 )
    v10 = off_1061BE18[2 * v9 + 1];
  else
    v10 = 0;
  sub_100E10C0(v10, (float *)(this + 716));
  v11 = off_1061BE18;
  if ( off_1061BE18[2 * v9 + 2] == v8 )
    v12 = off_1061BE18[2 * v9 + 1];
  else
    v12 = 0;
  v13 = (int *)(v12 + 248);
  v14 = *(_DWORD *)(v12 + 248);
  v15 = v14 | 0x40000000;
  if ( v14 != (v14 | 0x40000000) )
  {
    v16 = v13 - 62;
    if ( *((_BYTE *)v13 - 164) )
    {
      *((_BYTE *)v16 + 88) |= 1u;
    }
    else
    {
      v17 = (int *)v16[6];
      if ( v17 )
        sub_100194B0(v17, 248);
    }
    *v13 = v15;
    v11 = off_1061BE18;
  }
  if ( v11[2 * v9 + 2] == v26 )
    v18 = v11[2 * v9 + 1];
  else
    v18 = 0;
  v19 = __RTDynamicCast(
          v18,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CBaseCombatWeapon `RTTI Type Descriptor',
          0);
  if ( v19 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 860))(v19, a3);
  if ( off_1061BE18[2 * v9 + 2] == v26 )
    v20 = (char *)off_1061BE18[2 * v9 + 1];
  else
    v20 = 0;
  sub_10260750(v20);
  v21 = off_1061BE18;
  if ( off_1061BE18[2 * v9 + 2] != v26 )
    return 0;
  if ( off_1061BE18[2 * v9 + 1] )
  {
    if ( off_1061BE18[2 * v9 + 2] == v26 )
      v22 = off_1061BE18[2 * v9 + 1];
    else
      v22 = 0;
    if ( (*(_BYTE *)(v22 + 252) & 1) == 0 )
    {
      v23 = sub_1026A890(&v25);
      (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v23 + 372))(v23, this, this, 1, 0.0);
      v21 = off_1061BE18;
    }
  }
  if ( v21[2 * v9 + 2] != v26 )
    return 0;
  return v21[2 * v9 + 1];
}
