float *__stdcall sub_101ACEB0(float *a1, float *a2, float *a3, float a4)
{
  float *result; // eax
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  result = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v7 = a2[179] - a1[179];
      v8 = a2[180] - a1[180];
      v9 = a2[181] - a1[181];
      off_10689714();
      result = a3;
      v5 = a4 * v9 + a2[181];
      v6 = v8 * a4 + a2[180];
      *a3 = v7 * a4 + a2[179];
      a3[1] = v6;
      a3[2] = v5;
    }
  }
  return result;
}
