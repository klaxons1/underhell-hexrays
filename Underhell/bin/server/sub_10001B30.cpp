int __thiscall sub_10001B30(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // esi
  int v8; // edi
  unsigned int v9; // eax
  int v10; // esi

  result = __RTDynamicCast(
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseGrenade `RTTI Type Descriptor',
             0);
  v7 = result;
  if ( result )
  {
    v8 = sub_100F4030(result);
    v9 = *(_DWORD *)(v7 + 2140);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(v7 + 2140) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(v7 + 2140) & 0xFFF) + 1];
    result = sub_10261B20();
    if ( result == v8 && v10 == a2 )
      return sub_100BC7D0(this);
  }
  return result;
}
