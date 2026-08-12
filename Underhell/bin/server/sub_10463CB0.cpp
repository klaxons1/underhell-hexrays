int sub_10463CB0()
{
  sub_10282320(dword_106DAFD0, (int)"World Decal");
  dword_106DAFD0[0] = (int)&CTEWorldDecal::`vftable';
  if ( 0.0 != flt_106DAFDC )
    flt_106DAFDC = 0.0;
  if ( 0.0 != flt_106DAFE0 )
    flt_106DAFE0 = 0.0;
  if ( 0.0 != flt_106DAFE4 )
    flt_106DAFE4 = 0.0;
  if ( dword_106DAFE8 )
    dword_106DAFE8 = 0;
  return atexit(sub_104764E0);
}
