float *__cdecl sub_10424670(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  float *result; // eax
  float v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = sub_10424510(a1, a2, a3, v7);
  if ( v5 <= 1.0 )
  {
    if ( v5 < 0.0 )
      v5 = 0.0;
  }
  else
  {
    v5 = 1.0;
  }
  if ( a5 )
    *a5 = v5;
  result = a4;
  *a4 = v7[0] * v5 + *a2;
  a4[1] = v7[1] * v5 + a2[1];
  a4[2] = v5 * v7[2] + a2[2];
  return result;
}
