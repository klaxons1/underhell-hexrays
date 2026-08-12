float *__cdecl sub_1001BFA0(float *a1, float *a2, int a3, int a4, float a5)
{
  double v5; // st7
  double v6; // st7
  float *result; // eax
  _BYTE v8[12]; // [esp+0h] [ebp-40h] BYREF
  _BYTE v9[12]; // [esp+Ch] [ebp-34h] BYREF
  float v10[3]; // [esp+18h] [ebp-28h] BYREF
  float v11[3]; // [esp+24h] [ebp-1Ch] BYREF
  float v12[3]; // [esp+30h] [ebp-10h] BYREF
  float v13; // [esp+3Ch] [ebp-4h]

  v13 = 1.0;
  if ( a5 > 0.0 )
    v13 = 1.0 / a5;
  sub_101ED7B0(a3, v8);
  sub_101EDA00(a3, 3, v11);
  sub_101ED7B0(a4, v9);
  sub_101EDA00(a4, 3, v12);
  v5 = v13;
  *a1 = (v12[0] - v11[0]) * v13;
  a1[1] = (v12[1] - v11[1]) * v5;
  a1[2] = v5 * (v12[2] - v11[2]);
  sub_101F06A0(v8, v9, v10, &a5);
  v6 = a5 * v13;
  result = a2;
  *a2 = v10[0] * v6;
  a2[1] = v10[1] * v6;
  a2[2] = v6 * v10[2];
  return result;
}
