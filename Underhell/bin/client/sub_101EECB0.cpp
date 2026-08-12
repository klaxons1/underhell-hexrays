float *__cdecl sub_101EECB0(float *a1, float *a2, float *a3)
{
  float v3; // ecx
  float v4; // eax
  float v5; // ecx
  float *result; // eax
  double v7; // st6
  double v8; // st7
  double v9; // st5
  float *v10; // edx
  double v11; // st4
  float v12; // [esp+4h] [ebp-10h] BYREF
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+10h] [ebp-4h]

  if ( a1 == a3 )
  {
    v3 = a1[1];
    v12 = *a1;
    v4 = a1[2];
    v13 = v3;
    v5 = a1[3];
    v14 = v4;
    v15 = v5;
    return (float *)sub_101EECB0(&v12, a2, a3);
  }
  else
  {
    result = sub_101EE9A0(a1, a2, &v12);
    v7 = v14;
    v8 = v15;
    v9 = v13;
    v11 = v12;
    *a3 = v10[3] * v12 + *v10 * v15 + v10[1] * v14 - v10[2] * v13;
    a3[1] = v10[2] * v11 - *v10 * v7 + v10[3] * v9 + v10[1] * v8;
    a3[2] = *v10 * v9 - v10[1] * v11 + v10[3] * v7 + v10[2] * v8;
    a3[3] = v8 * v10[3] - (v7 * v10[2] + v9 * v10[1] + v11 * *v10);
  }
  return result;
}
