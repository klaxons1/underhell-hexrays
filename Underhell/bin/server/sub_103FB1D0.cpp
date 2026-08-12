bool __stdcall sub_103FB1D0(int a1)
{
  int v1; // eax
  bool result; // al
  int v3; // eax

  result = 0;
  if ( (*(_DWORD *)(a1 + 248) & 0x400000) == 0
    || (v1 = __RTDynamicCast(
               a1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CPhysBox `RTTI Type Descriptor',
               0)) == 0
    || (*(_DWORD *)(v1 + 248) & 0x400000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 4) == 0 )
      return 1;
    v3 = __RTDynamicCast(
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseCombatWeapon `RTTI Type Descriptor',
           0);
    if ( !v3 || (*(_DWORD *)(v3 + 248) & 4) == 0 )
      return 1;
  }
  return result;
}
