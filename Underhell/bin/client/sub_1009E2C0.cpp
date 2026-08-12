_DWORD *sub_1009E2C0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x4A8u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1003D000((int)v0);
  *v1 = &C_InfoLadderDismount::`vftable';
  v1[1] = &C_InfoLadderDismount::`vftable';
  v1[2] = &C_InfoLadderDismount::`vftable';
  v1[3] = &C_InfoLadderDismount::`vftable';
  return v1;
}
