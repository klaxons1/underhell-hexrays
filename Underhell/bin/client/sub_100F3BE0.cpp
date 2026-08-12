double __stdcall sub_100F3BE0(int *a1, float *a2, float a3)
{
  double result; // st7
  float v4[6]; // [esp+0h] [ebp-1Ch] BYREF
  __int16 v5; // [esp+18h] [ebp-4h]

  v4[0] = *a2;
  v5 = 1;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = a3;
  v4[4] = 1.0;
  v4[5] = 0.0625;
  result = sub_1005BF10(v4, a1);
  if ( result < 0.0 )
    return 0.0;
  return result;
}
