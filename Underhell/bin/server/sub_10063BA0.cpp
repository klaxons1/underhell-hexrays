int sub_10063BA0()
{
  int result; // eax
  int v1; // ecx
  unsigned int v2; // ecx
  int v3; // esi

  result = sub_10022B00(0);
  if ( result )
  {
    while ( 1 )
    {
      v1 = *(_DWORD *)(result + 236);
      v2 = (v1 & 0x1000) != 0 ? v1 & 0xFBFFFFFF : v1 | 0x4000000;
      *(_DWORD *)(result + 236) = v2;
      result = sub_1012BC10(result);
      v3 = result;
      if ( !result )
        break;
      while ( 1 )
      {
        result = __RTDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CAI_BaseNPC `RTTI Type Descriptor',
                   0);
        if ( result )
          break;
        result = sub_1012BC10(v3);
        v3 = result;
        if ( !result )
          return result;
      }
    }
  }
  return result;
}
