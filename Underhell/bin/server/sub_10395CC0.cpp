bool __thiscall sub_10395CC0(_DWORD *this)
{
  _DWORD *v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  if ( !this[699] || sub_103942C0((int)this) == 2 )
    return 1;
  v4 = 0;
  v5 = sub_100B1560(v3, &v8, 1);
  if ( !v5 )
    return 1;
  do
  {
    v6 = __RTDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
           (int)&CNPC_PlayerCompanion `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      if ( (_DWORD *)v6 != this )
      {
        v7 = *(_DWORD *)(v6 + 5632);
        if ( v7 != -1 && off_1061BE18[4 * (v7 & 0xFFF) + 2] == v7 >> 12 )
        {
          if ( off_1061BE18[4 * (v7 & 0xFFF) + 1] )
            ++v4;
        }
      }
    }
    v5 = sub_100B1630((_DWORD *)this[699], &v8, 1);
  }
  while ( v5 );
  return v4 < 2;
}
