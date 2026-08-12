float *__cdecl sub_10422910(float a1, float *a2)
{
  float v2; // ecx
  double v3; // st7
  double v4; // st7
  float *result; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st1
  double v13; // st2
  double v14; // st4
  float v15; // [esp+0h] [ebp-20h] BYREF
  float v16; // [esp+4h] [ebp-1Ch] BYREF
  float v17; // [esp+8h] [ebp-18h] BYREF
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+10h] [ebp-10h]
  float v20; // [esp+14h] [ebp-Ch]
  float *v21; // [esp+18h] [ebp-8h]
  float v22; // [esp+1Ch] [ebp-4h]

  v20 = COERCE_FLOAT(&v16);
  v2 = a1;
  v3 = *(float *)(LODWORD(a1) + 4) * 0.017453292;
  v21 = &v15;
  v22 = v3;
  v15 = cos(v22);
  v16 = sin(v22);
  v4 = *(float *)LODWORD(a1) * 0.017453292;
  v21 = &a1;
  v22 = COERCE_FLOAT(&v17);
  v20 = v4;
  a1 = cos(v20);
  v17 = sin(v20);
  v20 = *(float *)(LODWORD(v2) + 8) * 0.017453292;
  v19 = cos(v20);
  v18 = sin(v20);
  result = a2;
  v6 = a1;
  v7 = v15;
  *a2 = a1 * v15;
  v8 = v16;
  result[1] = v6 * v16;
  v9 = v17;
  result[2] = -v17;
  v10 = v18;
  v11 = v18 * v9;
  a1 = v11;
  v12 = v11 * v7 - v19 * v8;
  v13 = v19;
  result[4] = v12;
  result[5] = a1 * v8 + v13 * v7;
  result[6] = v10 * v6;
  v14 = v9 * v13;
  result[8] = v14 * v7 + v10 * v8;
  result[9] = v8 * v14 - v7 * v10;
  result[10] = v6 * v13;
  result[3] = 0.0;
  result[7] = 0.0;
  result[11] = 0.0;
  return result;
}
