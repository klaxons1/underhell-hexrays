_DWORD *sub_1013C310()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x4D8u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1003D000((int)v0);
  *v1 = &CViewAngleAnimation::`vftable';
  v1[1] = &CViewAngleAnimation::`vftable';
  v1[2] = &CViewAngleAnimation::`vftable';
  v1[3] = &CViewAngleAnimation::`vftable';
  v1[300] = 0;
  v1[301] = 0;
  v1[302] = 0;
  v1[303] = 0;
  v1[304] = 0;
  return v1;
}
