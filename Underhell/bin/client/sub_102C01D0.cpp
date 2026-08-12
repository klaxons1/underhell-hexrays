int sub_102C01D0()
{
  float *v0; // eax

  sub_101506B0(&dword_10441360);
  dword_10441360 = (int)&C_TEBeamSpline::`vftable';
  dword_10441364 = (int)&C_TEBeamSpline::`vftable';
  v0 = (float *)&unk_10441378;
  do
  {
    *(v0 - 2) = 0.0;
    v0 += 3;
    *(v0 - 4) = 0.0;
    *(v0 - 3) = 0.0;
  }
  while ( (int)v0 < (int)flt_10441438 );
  dword_10441430 = 0;
  return atexit(sub_102CCD70);
}
