bool __stdcall sub_1009D610(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  bool result; // al
  int v5; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 28))(a1);
  v3 = v2;
  result = 1;
  if ( v2 )
  {
    if ( __RTDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_BaseViewModel `RTTI Type Descriptor',
           0) )
    {
      return 0;
    }
    if ( __RTDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_BasePlayer `RTTI Type Descriptor',
           0) )
    {
      return 0;
    }
    v5 = *(_DWORD *)(v3 + 736);
    if ( v5 == 1 || v5 == 3 )
      return 0;
  }
  return result;
}
