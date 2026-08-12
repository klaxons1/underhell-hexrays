float *__stdcall sub_1038A4E0(float *a1, int a2, float *a3)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  double v8; // st7
  double v9; // st5
  float *result; // eax
  float v11; // [esp+Ch] [ebp-18h] BYREF
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch] BYREF
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]
  int v17; // [esp+30h] [ebp+Ch]
  float v18; // [esp+34h] [ebp+10h]

  sub_10111820((float *)(a2 + 320), a3, &v11);
  v11 = v11 - 0.5;
  v12 = v12 - 0.5;
  v13 = v13 - 0.5;
  v5 = off_10689714();
  v18 = sqrt(3.0) * v5 / sqrt(v5 * v5 - 3.0);
  v6 = sub_10219A30();
  v14 = (double)v6 * 0.000030518509 + (double)v6 * 0.000030518509 - 1.0;
  v7 = sub_10219A30();
  v15 = (double)v7 * 0.000030518509 + (double)v7 * 0.000030518509 - 1.0;
  v17 = sub_10219A30();
  v8 = (double)v17 * 0.000030518509 + (double)v17 * 0.000030518509 - 1.0;
  v9 = -(v8 * v13 + v14 * v11 + v15 * v12);
  v14 = v14 + v11 * v9;
  v15 = v15 + v12 * v9;
  v16 = v8 + v13 * v9;
  off_10689714();
  v14 = v14 * v18 * 0.5 + 0.5;
  v15 = v15 * v18 * 0.5 + 0.5;
  v16 = v18 * v16 * 0.5 + 0.5;
  sub_101117D0(a2 + 320, &v14, a1);
  result = a1;
  *a1 = *a1 - *a3;
  a1[1] = a1[1] - a3[1];
  a1[2] = a1[2] - a3[2];
  return result;
}
