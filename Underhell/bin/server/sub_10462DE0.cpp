int sub_10462DE0()
{
  sub_10282320(&dword_106D71F4, (int)"BSP Decal");
  dword_106D71F4 = (int)&CTEBSPDecal::`vftable';
  if ( 0.0 != flt_106D7200 )
    flt_106D7200 = 0.0;
  if ( 0.0 != flt_106D7204 )
    flt_106D7204 = 0.0;
  if ( 0.0 != flt_106D7208 )
    flt_106D7208 = 0.0;
  if ( dword_106D720C )
    dword_106D720C = 0;
  if ( dword_106D7210 )
    dword_106D7210 = 0;
  return atexit(sub_10475CA0);
}
