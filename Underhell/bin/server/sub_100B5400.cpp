float *__cdecl sub_100B5400(float *a1, float a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  float *result; // eax
  double v9; // st7
  double v10; // st7
  float v11; // [esp+0h] [ebp-14h]
  float v12; // [esp+8h] [ebp-Ch]
  float v13; // [esp+Ch] [ebp-8h]
  float v14; // [esp+10h] [ebp-4h]

  v4 = *a3 - *a1;
  v12 = v4;
  v5 = a3[1] - a1[1];
  v6 = a3[2] - a1[2];
  v7 = v6 * v6 + v5 * v5 + v4 * v4;
  if ( a2 * a2 < v7 )
  {
    v11 = v7;
    v9 = off_10689708(v11);
    result = a4;
    v10 = 1.0 / v9;
    *a4 = v12 * v10 * a2 + *a1;
    v13 = v5;
    a4[1] = v10 * v13 * a2 + a1[1];
    v14 = v6;
    a4[2] = v10 * v14 * a2 + a1[2];
  }
  else
  {
    result = a4;
    *a4 = *a3;
    a4[1] = a3[1];
    a4[2] = a3[2];
  }
  return result;
}
