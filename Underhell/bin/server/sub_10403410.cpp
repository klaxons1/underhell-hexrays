char __usercall sub_10403410@<al>(float a1@<ebx>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)__RTDynamicCast(
                   a2,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
                   (int)&CWeaponPhysCannon `RTTI Type Descriptor',
                   0);
  v4 = v3;
  if ( v3 )
  {
    if ( a3 )
    {
      LOBYTE(v3) = sub_104018A0(v3, a1, a3);
    }
    else
    {
      sub_10401510((int)v3, a1);
      sub_103FEC80(*(float *)&v4, 1, 0);
      LOBYTE(v3) = sub_10401640(v4, a1, 1);
    }
  }
  return (char)v3;
}
