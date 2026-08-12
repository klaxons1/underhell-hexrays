double __cdecl sub_103FA870(int a1, int a2)
{
  int v2; // eax

  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponPhysCannon `RTTI Type Descriptor',
         0);
  if ( v2 )
    return sub_103FA430((_DWORD *)(v2 + 1500), a2);
  else
    return (float)0.0;
}
