float *__cdecl sub_101EF050(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float *result; // eax
  double v6; // st5
  double v7; // st6
  double v8; // st4
  double v9; // st2
  double v10; // st3
  double v11; // st5
  double v12; // st4
  float v13; // [esp+0h] [ebp-20h] BYREF
  float v14; // [esp+4h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-18h] BYREF
  float v16; // [esp+Ch] [ebp-14h] BYREF
  float v17; // [esp+10h] [ebp-10h] BYREF
  float v18; // [esp+14h] [ebp-Ch]
  float *v19; // [esp+18h] [ebp-8h]
  float v20; // [esp+1Ch] [ebp-4h]
  float v21; // [esp+24h] [ebp+4h]

  v18 = COERCE_FLOAT(&v17);
  v2 = a1[1] * 0.017453292;
  v19 = &v16;
  v20 = v2 * 0.5;
  v16 = cos(v20);
  v17 = sin(v20);
  v3 = *a1 * 0.017453292;
  v19 = &v15;
  v20 = COERCE_FLOAT(&v13);
  v18 = v3 * 0.5;
  v15 = cos(v18);
  v13 = sin(v18);
  v18 = a1[2] * 0.017453292 * 0.5;
  v21 = cos(v18);
  v14 = sin(v18);
  v4 = v14;
  result = a2;
  v6 = v15;
  v7 = v14 * v15;
  v8 = v21 * v13;
  v9 = v16;
  v10 = v17;
  *a2 = v7 * v16 - v8 * v17;
  a2[1] = v7 * v10 + v8 * v9;
  v11 = v6 * v21;
  v12 = v4 * v13;
  a2[2] = v11 * v10 - v12 * v9;
  a2[3] = v10 * v12 + v9 * v11;
  return result;
}
