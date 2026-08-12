void __stdcall sub_100AF9D0(float *a1, float a2, float a3, float *a4, float *a5, float *a6)
{
  float *v7; // eax
  double v9; // st6
  double v10; // st5
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // st6
  double v15; // st7
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  v16 = *a1 * 100.0;
  v17 = a1[1] * 100.0;
  v18 = 100.0 * a1[2];
  v7 = (float *)sub_101422C0();
  v9 = v7[1] + v17;
  v10 = v7[2];
  *a4 = *v7 + v16;
  a4[1] = v9;
  a4[2] = v10 + v18;
  *a5 = 0.0;
  a5[1] = 0.0;
  a5[2] = 1.0;
  v11 = a1[2] * 0.0;
  v12 = *a1 * 0.0 - 0.0 * a1[1];
  v13 = v11 - *a1;
  *a6 = a1[1] - v11;
  a6[1] = v13;
  a6[2] = v12;
  off_103EDFEC();
  v14 = *a1 * a6[2] - a1[2] * *a6;
  v15 = a1[1] * *a6 - *a1 * a6[1];
  *a5 = a1[2] * a6[1] - a1[1] * a6[2];
  a5[1] = v14;
  a5[2] = v15;
  off_103EDFEC();
  *a6 = *a6 * a2;
  a6[1] = a6[1] * a2;
  a6[2] = a2 * a6[2];
  *a5 = *a5 * a3;
  a5[1] = a3 * a5[1];
  a5[2] = a3 * a5[2];
}
