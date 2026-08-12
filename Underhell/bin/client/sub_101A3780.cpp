_DWORD *sub_101A3780()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x868u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000C710(v0);
  *((_BYTE *)v1 + 2144) = 1;
  *((_BYTE *)v1 + 1967) = 0;
  *v1 = &C_WeaponAxe::`vftable';
  v1[1] = &C_WeaponAxe::`vftable';
  v1[2] = &C_WeaponAxe::`vftable';
  v1[3] = &C_WeaponAxe::`vftable';
  return v1;
}
