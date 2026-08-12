unsigned int __thiscall sub_10001C70(void *this, int a2, int a3, int a4, int a5)
{
  unsigned int result; // eax
  int *v7; // ecx
  int v8; // ecx

  result = __RTDynamicCast(
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CPropCombineBall `RTTI Type Descriptor',
             0);
  if ( result )
  {
    result = *(_DWORD *)(result + 1172);
    if ( result != -1 )
    {
      v7 = &off_1061BE18[4 * (result & 0xFFF) + 1];
      result >>= 12;
      if ( v7[1] == result )
      {
        v8 = *v7;
        if ( v8 )
        {
          if ( v8 == a2 )
            return sub_100BC7D0(this);
        }
      }
    }
  }
  return result;
}
