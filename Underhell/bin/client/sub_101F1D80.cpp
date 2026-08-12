float *__thiscall sub_101F1D80(float *this, float *a2, float a3)
{
  float v3; // esi
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st1
  double v14; // st2
  double v15; // st4
  float *result; // eax
  float v17; // [esp+4h] [ebp-20h] BYREF
  float v18; // [esp+8h] [ebp-1Ch] BYREF
  float v19; // [esp+Ch] [ebp-18h] BYREF
  float v20; // [esp+10h] [ebp-14h] BYREF
  float v21; // [esp+14h] [ebp-10h] BYREF
  float v22; // [esp+18h] [ebp-Ch]
  float *v23; // [esp+1Ch] [ebp-8h]
  float v24; // [esp+20h] [ebp-4h]

  v3 = a3;
  v4 = *(float *)(LODWORD(a3) + 4) * 0.017453292;
  v23 = &v17;
  v22 = COERCE_FLOAT(&v18);
  v24 = v4;
  v17 = cos(v24);
  v18 = sin(v24);
  v5 = *(float *)LODWORD(a3) * 0.017453292;
  v23 = &a3;
  v24 = COERCE_FLOAT(&v19);
  v22 = v5;
  a3 = cos(v22);
  v19 = sin(v22);
  v6 = *(float *)(LODWORD(v3) + 8) * 0.017453292;
  v23 = &v21;
  v24 = COERCE_FLOAT(&v20);
  v22 = v6;
  v21 = cos(v22);
  v20 = sin(v22);
  v7 = a3;
  v8 = v17;
  *this = a3 * v17;
  v9 = v18;
  this[4] = v7 * v18;
  v10 = v19;
  this[8] = -v19;
  v11 = v20;
  v12 = v20 * v10;
  a3 = v12;
  v13 = v12 * v8 - v21 * v9;
  v14 = v21;
  this[1] = v13;
  this[5] = a3 * v9 + v14 * v8;
  this[9] = v11 * v7;
  v15 = v10 * v14;
  this[2] = v15 * v8 + v11 * v9;
  this[6] = v9 * v15 - v8 * v11;
  this[10] = v7 * v14;
  this[3] = 0.0;
  this[7] = 0.0;
  result = a2;
  this[11] = 0.0;
  this[3] = *a2;
  this[7] = a2[1];
  this[11] = a2[2];
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = 0.0;
  this[15] = 1.0;
  return result;
}
