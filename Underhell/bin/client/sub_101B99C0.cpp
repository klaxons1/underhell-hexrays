_DWORD *sub_101B99C0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x4A8u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_100ADCD0(v0);
  *v1 = &C_HalfLife2SurvivalProxy::`vftable';
  v1[1] = &C_HalfLife2SurvivalProxy::`vftable';
  v1[2] = &C_HalfLife2SurvivalProxy::`vftable';
  v1[3] = &C_HalfLife2SurvivalProxy::`vftable';
  return v1;
}
