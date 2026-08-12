float *__thiscall sub_10382310(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st5
  double v7; // st4
  float *result; // eax

  v3 = this[964] * 0.01;
  v4 = 3000.0 * v3;
  if ( *(float *)(dword_106B31C8 + 12) >= (double)this[951] )
  {
    v6 = v4;
    if ( v4 >= *a2 )
    {
      v6 = -v4;
      if ( -v4 <= *a2 )
        v6 = *a2;
    }
    *a2 = v6;
    v5 = v4;
    if ( v4 >= a2[1] )
    {
      v5 = -v4;
      if ( -v4 <= a2[1] )
        v5 = a2[1];
    }
  }
  else
  {
    v5 = 0.0;
    *a2 = 0.0;
  }
  a2[1] = v5;
  if ( v4 >= 1200.0 )
    v7 = v4;
  else
    v7 = 1200.0;
  if ( v7 >= a2[2] )
  {
    v4 = -v4;
    if ( v4 <= a2[2] )
      v4 = a2[2];
  }
  else if ( v4 < 1200.0 )
  {
    v4 = 1200.0;
  }
  result = a3;
  a2[2] = v4;
  *a3 = *a3 * v3;
  a3[1] = a3[1] * v3;
  a3[2] = v3 * a3[2];
  return result;
}
