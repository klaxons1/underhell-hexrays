char __thiscall sub_103895F0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // eax

  v2 = sub_100CF460(this);
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponStunStick `RTTI Type Descriptor',
         0);
  v4 = sub_100CF460(this);
  v5 = (_BYTE *)__RTDynamicCast(
                  v4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
                  (int)&CWeaponBaton `RTTI Type Descriptor',
                  0);
  if ( v3 )
  {
    LOBYTE(v5) = sub_1040DF10(1);
  }
  else if ( v5 )
  {
    LOBYTE(v5) = sub_10278280(v5, 1);
  }
  return (char)v5;
}
