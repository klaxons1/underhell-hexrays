int __cdecl sub_103FA8C0(int a1)
{
  int v1; // eax
  unsigned int v2; // eax

  v1 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponPhysCannon `RTTI Type Descriptor',
         0);
  if ( v1 && (v2 = *(_DWORD *)(v1 + 9772), v2 != -1) && off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 )
    return off_1061BE18[4 * (v2 & 0xFFF) + 1];
  else
    return 0;
}
