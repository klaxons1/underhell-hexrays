bool __cdecl sub_103D2120(int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 420) == 23 )
  {
    v1 = __RTDynamicCast(
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPropCombineBall `RTTI Type Descriptor',
           0);
    if ( v1 )
    {
      if ( *(_BYTE *)(v1 + 1142) )
        return 1;
    }
  }
  return result;
}
