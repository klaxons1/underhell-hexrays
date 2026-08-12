int __thiscall sub_100228B0(float *this, int a2)
{
  double v2; // st7
  long double v3; // st6

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  this[583] = v2;
  v3 = cos(0.00872664625997 * v2);
  this[421] = v3;
  return Msg("FOS in angles: %f , in cosines %f\n", v2, (double)v3);
}
