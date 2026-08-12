int sub_10207830()
{
  int result; // eax
  int i; // esi
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  result = sub_1012BC10(&dword_1069E3E0, 0);
  for ( i = result; result; i = result )
  {
    v2 = __RTDynamicCast(
           i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseProp `RTTI Type Descriptor',
           0);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 236);
      if ( (v3 & 0x10000000) != 0 )
        v4 = v3 & 0xEFFFFFFF;
      else
        v4 = v3 | 0x10000000;
      *(_DWORD *)(v2 + 236) = v4;
    }
    result = sub_1012BC10(&dword_1069E3E0, i);
  }
  return result;
}
