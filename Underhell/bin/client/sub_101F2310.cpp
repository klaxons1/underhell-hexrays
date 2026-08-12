void __cdecl sub_101F2310(float *a1, float *a2, float *a3)
{
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  double v6; // st5
  double v7; // st4
  int v8; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2;
  if ( a2 == a3 )
    v3 = (float *)&v8;
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = a1[14] * v6 + a1[13] * v5 + a1[12] * v4 + a1[15];
  if ( 0.0 != v7 )
    v7 = 1.0 / v7;
  *a3 = a1[1] * v5 + a1[2] * v6 + *a1 * v4 + a1[3];
  a3[1] = a1[4] * v4 + a1[5] * v5 + a1[6] * v6 + a1[7];
  a3[2] = v5 * a1[9] + v4 * a1[8] + v6 * a1[10] + a1[11];
  *a3 = *a3 * v7;
  a3[1] = a3[1] * v7;
  a3[2] = v7 * a3[2];
}
