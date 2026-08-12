int __thiscall sub_10334F90(_BYTE *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi

  if ( !this[306] && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1088))(this) )
    return 103;
  v3 = sub_100CF460(this);
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
         (int)&CWeaponRPG `RTTI Type Descriptor',
         0);
  v5 = v4;
  if ( v4 )
  {
    if ( (unsigned __int8)sub_10403DC0(v4) )
    {
      DevMsg("Citizen in select schedule but RPG is guiding?\n");
      sub_10408BA0(v5);
    }
  }
  return sub_10399230((int)this);
}
