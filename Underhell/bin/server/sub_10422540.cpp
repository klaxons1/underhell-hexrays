float *__cdecl sub_10422540(float *a1, float *a2)
{
  float *result; // eax
  long double v4; // st6
  double v5; // st6
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+Ch] [ebp+4h]

  if ( 0.0 == a1[1] && 0.0 == *a1 )
  {
    result = a2;
    if ( a1[2] <= 0.0 )
      *a2 = 90.0;
    else
      *a2 = 270.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    v4 = atan2(a1[1], *a1) * 180.0 * 0.3183098861837907;
    v7 = v4;
    if ( v4 < 0.0 )
      v7 = v4 + 360.0;
    v6 = *a1 * *a1 + a1[1] * a1[1];
    v5 = atan2(-a1[2], off_10689708(v6)) * 180.0 * 0.3183098861837907;
    if ( v5 < 0.0 )
      v5 = v5 + 360.0;
    result = a2;
    *a2 = v5;
    a2[1] = v7;
    a2[2] = 0.0;
  }
  return result;
}
