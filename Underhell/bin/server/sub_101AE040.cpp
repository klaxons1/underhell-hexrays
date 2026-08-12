float *__cdecl sub_101AE040(float *a1, float *a2, float *a3, float *a4, float a5, float a6, float a7)
{
  long double v7; // st7
  double v8; // st1
  double v9; // st7
  float *result; // eax
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+Ch] [ebp-Ch]
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+14h] [ebp-4h]
  float v17; // [esp+24h] [ebp+Ch]

  v14 = a3[2] * a2[1] - a2[2] * a3[1];
  v15 = a2[2] * *a3 - a3[2] * *a2;
  v16 = *a2 * a3[1] - *a3 * a2[1];
  v17 = a3[1] * a2[1] + *a2 * *a3 + a2[2] * a3[2];
  v7 = atan2(off_10689714(), v17) * 57.29578;
  v8 = a4[1] * v15 + *a4 * v14 + a4[2] * v16;
  v11 = v14 * a6 * v7 - v14 * a5 * v8;
  v12 = v15 * a6 * v7 - v15 * a5 * v8;
  v13 = v7 * (a6 * v16) - v16 * a5 * v8;
  v9 = off_10689714();
  if ( a7 < v9 )
    v9 = a7;
  result = a1;
  *a1 = v11 * v9;
  a1[1] = v12 * v9;
  a1[2] = v9 * v13;
  return result;
}
