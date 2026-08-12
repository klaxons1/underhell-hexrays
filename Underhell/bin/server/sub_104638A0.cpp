int sub_104638A0()
{
  sub_10282320(dword_106DA20C, (int)"Player Decal");
  dword_106DA20C[0] = (int)&CTEPlayerDecal::`vftable';
  if ( dword_106DA218 )
    dword_106DA218 = 0;
  if ( 0.0 != flt_106DA21C )
    flt_106DA21C = 0.0;
  if ( 0.0 != flt_106DA220 )
    flt_106DA220 = 0.0;
  if ( 0.0 != flt_106DA224 )
    flt_106DA224 = 0.0;
  if ( dword_106DA228 )
    dword_106DA228 = 0;
  return atexit(sub_104762B0);
}
