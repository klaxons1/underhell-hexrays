float *__cdecl sub_101F13D0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float *a9)
{
  double v10; // st7
  long double v11; // st7
  long double v12; // st6
  long double v13; // st5
  long double v14; // rtt
  long double v15; // st5
  double v16; // st6
  double v17; // st5
  double v18; // rt2
  double v19; // st5
  float v21; // [esp+0h] [ebp-34h]
  float v22; // [esp+0h] [ebp-34h]
  float v23; // [esp+0h] [ebp-34h]
  float v24; // [esp+0h] [ebp-34h]
  float v25; // [esp+0h] [ebp-34h]
  float v26; // [esp+0h] [ebp-34h]
  int v27; // [esp+10h] [ebp-24h] BYREF
  float v28; // [esp+14h] [ebp-20h]
  float v29; // [esp+18h] [ebp-1Ch]
  int v30; // [esp+1Ch] [ebp-18h] BYREF
  float v31; // [esp+20h] [ebp-14h]
  float v32; // [esp+24h] [ebp-10h]
  int v33[3]; // [esp+28h] [ebp-Ch] BYREF
  float v34; // [esp+38h] [ebp+4h]
  float v35; // [esp+38h] [ebp+4h]

  v10 = a1[1] * a2[1] + a2[2] * a1[2] + *a1 * *a2;
  v34 = v10;
  *(float *)v33 = -*a2;
  *(float *)&v33[1] = -a2[1];
  *(float *)&v33[2] = -a2[2];
  v21 = -a6 - v10;
  sub_101F08A0(a9, 5, 5, (float *)v33, v21);
  v22 = v34 + a5;
  sub_101F08A0(a9, 4, 5, a2, v22);
  v11 = tan(a7 * 0.5 * 0.017453292);
  v35 = tan(0.017453292 * (0.5 * a8));
  v12 = v11 * *a2 + *a3;
  *(float *)&v27 = v12;
  v13 = v11 * a2[1] + a3[1];
  v28 = v13;
  v14 = v13;
  v15 = v11 * a2[2] + a3[2];
  v29 = v15;
  *(float *)&v30 = v12 - *a3 * 2.0;
  v31 = v14 - a3[1] * 2.0;
  v32 = v15 - 2.0 * a3[2];
  off_103EDFEC((float *)&v27);
  off_103EDFEC((float *)&v30);
  v23 = a1[1] * v28 + *a1 * *(float *)&v27 + v29 * a1[2];
  sub_101F08A0(a9, 1, 5, (float *)&v27, v23);
  v24 = a1[1] * v31 + *a1 * *(float *)&v30 + v32 * a1[2];
  sub_101F08A0(a9, 0, 5, (float *)&v30, v24);
  v16 = v35 * *a2 + *a4;
  *(float *)&v27 = v16;
  v17 = v35 * a2[1] + a4[1];
  v28 = v17;
  v18 = v17;
  v19 = v35 * a2[2] + a4[2];
  v29 = v19;
  *(float *)&v30 = v16 - *a4 * 2.0;
  v31 = v18 - a4[1] * 2.0;
  v32 = v19 - 2.0 * a4[2];
  off_103EDFEC((float *)&v27);
  off_103EDFEC((float *)&v30);
  v25 = a1[1] * v28 + *a1 * *(float *)&v27 + v29 * a1[2];
  sub_101F08A0(a9, 3, 5, (float *)&v27, v25);
  v26 = a1[1] * v31 + *a1 * *(float *)&v30 + v32 * a1[2];
  return sub_101F08A0(a9, 2, 5, (float *)&v30, v26);
}
