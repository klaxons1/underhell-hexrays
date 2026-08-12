float *__cdecl sub_104248C0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  float *result; // eax
  float v7[2]; // [esp+4h] [ebp-8h] BYREF

  v5 = sub_10424750(a1, a2, a3, v7);
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
  a4[1] = v5 * v7[1] + a2[1];
  return result;
}
