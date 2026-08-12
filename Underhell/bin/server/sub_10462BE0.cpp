int sub_10462BE0()
{
  float *v0; // eax

  sub_10282320(&dword_106D64E0, (int)"BeamSpline");
  dword_106D64E0 = (int)&CTEBeamSpline::`vftable';
  v0 = (float *)&unk_106D64F4;
  do
  {
    *(v0 - 2) = 0.0;
    v0 += 3;
    *(v0 - 4) = 0.0;
    *(v0 - 3) = 0.0;
  }
  while ( (int)v0 < (int)flt_106D65B4 );
  if ( dword_106D65AC )
    dword_106D65AC = 0;
  return atexit(sub_10475B60);
}
