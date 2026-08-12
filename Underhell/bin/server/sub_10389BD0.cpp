char __thiscall sub_10389BD0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // ecx

  v2 = sub_100CF460(this);
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponStunStick `RTTI Type Descriptor',
         0);
  v4 = sub_100CF460(this);
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponBaton `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    v6 = v3;
  }
  else
  {
    if ( !v5 )
      return 0;
    v6 = v5;
  }
  return *(_BYTE *)(v6 + 1400);
}
