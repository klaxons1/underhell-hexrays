void __stdcall sub_10049470(float *a1, int a2, float *a3, float *a4, float *a5)
{
  double v6; // st6
  double v7; // st5
  float *v8; // eax
  float *v10; // eax
  double v11; // st7
  int v12; // eax
  double v13; // st6
  double v14; // st5
  double v15; // st7
  double v16; // st4
  double v17; // st3
  double v18; // st2
  double v19; // st4
  double v20; // st3
  float *v21; // eax
  float *v22; // ecx
  long double v23; // st7
  long double v24; // st6
  long double v25; // st7
  float v26[3]; // [esp+Ch] [ebp-54h] BYREF
  float v27[3]; // [esp+18h] [ebp-48h] BYREF
  float v28[6]; // [esp+24h] [ebp-3Ch] BYREF
  float v29[3]; // [esp+3Ch] [ebp-24h] BYREF
  int v30; // [esp+48h] [ebp-18h] BYREF
  int v31; // [esp+4Ch] [ebp-14h]
  int v32; // [esp+50h] [ebp-10h]
  float v33; // [esp+54h] [ebp-Ch] BYREF
  float v34; // [esp+58h] [ebp-8h]
  float v35; // [esp+5Ch] [ebp-4h]
  float *v36; // [esp+68h] [ebp+8h]
  float *v37; // [esp+70h] [ebp+10h]

  v6 = a1[6] + a1[3];
  v7 = a1[4] + a1[7];
  v29[0] = (a1[2] + a1[5]) * 0.5;
  v29[1] = v6 * 0.5;
  v29[2] = 0.5 * v7;
  sub_101ED860(v29, a2, a3);
  sub_101EDA00(a2, 0, v26);
  sub_101EDA00(a2, 1, v27);
  sub_101EDA00(a2, 2, v28);
  v8 = (float *)sub_101422C0();
  v33 = *v8 - *a3;
  v34 = v8[1] - a3[1];
  v35 = v8[2] - a3[2];
  off_103EDFEC();
  v28[3] = v26[2] * v35 + v26[0] * v33 + v26[1] * v34;
  v28[4] = v27[1] * v34 + v27[0] * v33 + v27[2] * v35;
  v28[5] = v33 * v28[0] + v34 * v28[1] + v35 * v28[2];
  sub_10083A20(&v30);
  v10 = &v26[3 * v30];
  *a4 = *v10;
  v36 = v10;
  a4[1] = v10[1];
  v11 = v10[2];
  v12 = v31;
  a4[2] = v11;
  v12 *= 3;
  *a5 = v26[v12];
  v37 = &v26[v12];
  a5[1] = v37[1];
  a5[2] = v37[2];
  v13 = v33;
  v14 = v34;
  v15 = v35;
  v16 = a4[2] * v35 + *a4 * v33 + v34 * a4[1];
  v17 = v16 * v33;
  v18 = v34 * v16;
  v19 = v16 * v35;
  *a4 = *a4 - v17;
  a4[1] = a4[1] - v18;
  a4[2] = a4[2] - v19;
  v20 = *a5 * v13 + a5[1] * v14 + v15 * a5[2];
  *a5 = *a5 - v13 * v20;
  a5[1] = a5[1] - v14 * v20;
  a5[2] = a5[2] - v15 * v20;
  off_103EDFEC();
  off_103EDFEC();
  v33 = a1[5] - a1[2];
  v34 = a1[6] - a1[3];
  v35 = a1[7] - a1[4];
  v21 = &v26[3 * v32];
  v22 = &v33 + v32;
  v23 = (*(&v33 + v30) * fabs(v36[1] * a4[1] + *v36 * *a4 + v36[2] * a4[2])
       + fabs(v21[1] * a4[1] + *v21 * *a4 + v21[2] * a4[2]) * *v22)
      * 2.0;
  v24 = (*(&v33 + v31) * fabs(v37[1] * a5[1] + *v37 * *a5 + v37[2] * a5[2])
       + fabs(v21[1] * a5[1] + *v21 * *a5 + v21[2] * a5[2]) * *v22)
      * 2.0;
  if ( v23 <= 10.0 )
    v23 = 10.0;
  if ( v24 <= 10.0 )
    v24 = 10.0;
  v25 = v23 * 0.5;
  *a4 = *a4 * v25;
  a4[1] = v25 * a4[1];
  a4[2] = v25 * a4[2];
  *a5 = *a5 * (0.5 * v24);
  a5[1] = a5[1] * (0.5 * v24);
  a5[2] = 0.5 * v24 * a5[2];
}
