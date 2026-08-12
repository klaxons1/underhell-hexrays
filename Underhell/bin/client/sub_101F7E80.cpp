BOOL __thiscall sub_101F7E80(float *this, float *a2, float *a3)
{
  long double v3; // st7
  double v4; // st7
  float v6; // [esp+10h] [ebp-8h]

  v3 = this[9];
  if ( a2[5] > 0.0 )
    v3 = fmod(1.0 / a2[5] * this[9], 1.0);
  v6 = v3;
  v4 = sub_101F7DA0(a2[1], a2[2], a2[3], a2[4], v6);
  if ( a3 )
    *a3 = v4;
  return v4 > 0.0;
}
