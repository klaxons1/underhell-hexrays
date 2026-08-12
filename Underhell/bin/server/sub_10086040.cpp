float *__cdecl sub_10086040(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  float *result; // eax
  float v12; // [esp+0h] [ebp-20h]
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]
  float v19; // [esp+2Ch] [ebp+Ch]
  float v20; // [esp+30h] [ebp+10h]
  float v21; // [esp+30h] [ebp+10h]
  float v22; // [esp+30h] [ebp+10h]
  float v23; // [esp+34h] [ebp+14h]

  v5 = *a3 - *a2;
  v16 = v5;
  v6 = a3[1] - a2[1];
  v17 = v6;
  v7 = a3[2] - a2[2];
  v18 = v7;
  v8 = *a4 - *a2;
  v13 = v8;
  v9 = a4[1] - a2[1];
  v14 = v9;
  v10 = a4[2] - a2[2];
  v15 = v10;
  v23 = v9 * v6 + v8 * v5 + v10 * v7;
  v12 = v7 * v7 + v6 * v6 + v5 * v5;
  v20 = off_10689708(v12);
  v19 = v13 * v13 + v14 * v14 + v15 * v15;
  v21 = off_10689708(v19) * v20;
  v22 = off_10689708(v19) * (v23 / v21);
  off_10689714();
  result = a1;
  *a1 = v16 * v22 + *a2;
  a1[1] = v17 * v22 + a2[1];
  a1[2] = v22 * v18 + a2[2];
  return result;
}
