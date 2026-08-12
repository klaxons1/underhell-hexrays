char __cdecl sub_103FC820(int a1, int a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)__RTDynamicCast(
                   a1,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
                   (int)&CWeaponPhysCannon `RTTI Type Descriptor',
                   0);
  if ( v2 )
    return sub_103FC7B0(v2, a2);
  else
    return 0;
}
