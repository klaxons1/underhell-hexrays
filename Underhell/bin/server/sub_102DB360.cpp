char __cdecl sub_102DB360(float *a1, float a2, float *a3, float *a4, float *a5, float *a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st4
  double v11; // st7
  char result; // al
  double v13; // st7
  double v14; // st6
  float v15; // [esp+0h] [ebp-4h]
  int v16; // [esp+Ch] [ebp+8h]
  float v17; // [esp+14h] [ebp+10h]

  v6 = *a3 - *a1;
  v7 = a3[1] - a1[1];
  v8 = a4[1] * a4[1] + *a4 * *a4;
  v9 = *a4 * v6 + v7 * a4[1];
  v10 = v9 + v9;
  *(float *)&v16 = v10;
  v11 = v10 * v10 - (v7 * v7 + v6 * v6 - a2 * a2) * (v8 * 4.0);
  if ( v11 <= 0.000001 )
    return 0;
  v15 = v11;
  v13 = off_10689708(v15);
  v17 = v8;
  v14 = 1.0 / (v17 + v17);
  *a5 = (-*(float *)&v16 - v13) * v14;
  result = 1;
  *a6 = (v13 - *(float *)&v16) * v14;
  return result;
}
