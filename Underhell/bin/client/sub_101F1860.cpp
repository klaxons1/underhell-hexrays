float *__thiscall sub_101F1860(float *this, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st2
  double v10; // st1
  double v11; // st0
  float *result; // eax
  float v13; // [esp+0h] [ebp-20h]
  float v14; // [esp+4h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-18h]
  float v16; // [esp+Ch] [ebp-14h]
  float v17; // [esp+10h] [ebp-10h]
  float v18; // [esp+14h] [ebp-Ch]
  float v19; // [esp+18h] [ebp-8h]
  float v20; // [esp+1Ch] [ebp-4h]
  float v21; // [esp+24h] [ebp+4h]

  v4 = a2[9] * this[2] + a2[5] * this[1] + this[3] * a2[13] + a2[1] * *this;
  v5 = a2[6] * this[1] + a2[10] * this[2] + *this * a2[2] + a2[14] * this[3];
  v6 = a2[15] * this[3] + a2[7] * this[1] + a2[11] * this[2] + a2[3] * *this;
  v7 = a2[8] * this[6] + a2[4] * this[5] + this[4] * *a2 + this[7] * a2[12];
  v8 = a2[9] * this[6] + a2[5] * this[5] + this[7] * a2[13] + a2[1] * this[4];
  v9 = a2[6] * this[5] + this[4] * a2[2] + a2[10] * this[6] + a2[14] * this[7];
  v21 = a2[15] * this[7] + a2[7] * this[5] + a2[11] * this[6] + a2[3] * this[4];
  v13 = *a2 * this[8] + a2[4] * this[9] + this[11] * a2[12] + a2[8] * this[10];
  v14 = a2[5] * this[9] + this[11] * a2[13] + a2[9] * this[10] + a2[1] * this[8];
  v15 = a2[6] * this[9] + this[11] * a2[14] + this[10] * a2[10] + this[8] * a2[2];
  v16 = a2[7] * this[9] + this[11] * a2[15] + this[10] * a2[11] + a2[3] * this[8];
  v17 = *a2 * this[12] + this[15] * a2[12] + a2[4] * this[13] + a2[8] * this[14];
  v18 = this[15] * a2[13] + a2[5] * this[13] + a2[1] * this[12] + a2[9] * this[14];
  v19 = a2[6] * this[13] + this[15] * a2[14] + this[14] * a2[10] + this[12] * a2[2];
  v20 = a2[7] * this[13] + this[15] * a2[15] + this[14] * a2[11] + a2[3] * this[12];
  v10 = a2[8] * this[2] + a2[4] * this[1] + *a2 * *this;
  v11 = this[3] * a2[12];
  result = a3;
  *a3 = v10 + v11;
  a3[1] = v4;
  a3[2] = v5;
  a3[3] = v6;
  a3[4] = v7;
  a3[5] = v8;
  a3[6] = v9;
  a3[7] = v21;
  a3[8] = v13;
  a3[9] = v14;
  a3[10] = v15;
  a3[11] = v16;
  a3[12] = v17;
  a3[13] = v18;
  a3[14] = v19;
  a3[15] = v20;
  return result;
}
