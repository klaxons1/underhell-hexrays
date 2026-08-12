float *__cdecl sub_104227F0(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  float *result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double v11; // st1
  double v12; // st6
  double v13; // st5
  float v14; // [esp+0h] [ebp-20h] BYREF
  float v15; // [esp+4h] [ebp-1Ch] BYREF
  float v16; // [esp+8h] [ebp-18h] BYREF
  float v17; // [esp+Ch] [ebp-14h] BYREF
  float v18; // [esp+10h] [ebp-10h]
  float v19; // [esp+14h] [ebp-Ch]
  float *v20; // [esp+18h] [ebp-8h]
  float v21; // [esp+1Ch] [ebp-4h]
  float v22; // [esp+24h] [ebp+4h]

  v19 = COERCE_FLOAT(&v16);
  v2 = a1[1] * 0.017453292;
  v20 = &v15;
  v21 = v2;
  v15 = cos(v21);
  v16 = sin(v21);
  v3 = *a1 * 0.017453292;
  v20 = &v14;
  v21 = COERCE_FLOAT(&v17);
  v19 = v3;
  v14 = cos(v19);
  v17 = sin(v19);
  v19 = a1[2] * 0.017453292;
  v18 = cos(v19);
  v22 = sin(v19);
  result = a2;
  v5 = v14;
  v6 = v15;
  *a2 = v14 * v15;
  v7 = v16;
  a2[4] = v5 * v16;
  v8 = v17;
  a2[8] = -v17;
  v9 = v18;
  v10 = v18 * v6;
  v11 = v18 * v7;
  v12 = v6 * v22;
  v13 = v7 * v22;
  a2[1] = v12 * v8 - v11;
  a2[5] = v13 * v8 + v10;
  a2[9] = v22 * v5;
  a2[2] = v13 + v10 * v8;
  a2[6] = v8 * v11 - v12;
  a2[10] = v5 * v9;
  a2[3] = 0.0;
  a2[7] = 0.0;
  a2[11] = 0.0;
  return result;
}
