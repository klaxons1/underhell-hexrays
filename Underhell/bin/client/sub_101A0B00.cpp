_DWORD *sub_101A0B00()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x850u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000C710(v0);
  *v1 = &C_WeaponCycler::`vftable';
  v1[1] = &C_WeaponCycler::`vftable';
  v1[2] = &C_WeaponCycler::`vftable';
  v1[3] = &C_WeaponCycler::`vftable';
  return v1;
}
