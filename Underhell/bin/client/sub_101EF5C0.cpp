float *__cdecl sub_101EF5C0(float *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  double v7; // st7
  double v8; // st4
  double v9; // st5
  float v11; // [esp+4h] [ebp-24h]
  int v12; // [esp+10h] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+34h] [ebp+Ch]

  v7 = *a3 - *a2;
  v8 = a3[1] - a2[1];
  v9 = a3[2] - a2[2];
  v11 = v9 * v9 + v8 * v8 + v7 * v7;
  v18 = off_103EDFE0(v11);
  *(float *)&v15 = *a1 - *a2;
  v16 = a1[1] - a2[1];
  v17 = a1[2] - a2[2];
  *(float *)&v12 = *a4 - *a3;
  v13 = a4[1] - a3[1];
  v14 = a4[2] - a3[2];
  off_103EDFEC((float *)&v15);
  off_103EDFEC((float *)&v12);
  *(float *)&v15 = *(float *)&v15 * v18 + *a2;
  v16 = v16 * v18 + a2[1];
  v17 = v17 * v18 + a2[2];
  *(float *)&v12 = *(float *)&v12 * v18 + *a3;
  v13 = v13 * v18 + a3[1];
  v14 = v18 * v14 + a3[2];
  return sub_101EF230((float *)&v15, a2, a3, (float *)&v12, a5, a6);
}
