void __thiscall sub_100739F0(
        _DWORD *this,
        float *a2,
        int a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // rt0
  double v15; // rt1
  double v16; // st5
  double v17; // st6
  double v18; // st7
  float *v19; // eax
  double v20; // st5
  double v21; // rt0
  double v22; // st5
  double v23; // rt1
  double v24; // st5
  long double v25; // st7
  float v26[3]; // [esp+4h] [ebp-30h] BYREF
  float v27; // [esp+10h] [ebp-24h]
  float v28; // [esp+14h] [ebp-20h]
  float v29; // [esp+18h] [ebp-1Ch]
  float v30; // [esp+1Ch] [ebp-18h] BYREF
  float v31; // [esp+20h] [ebp-14h]
  float v32; // [esp+24h] [ebp-10h]
  float v33; // [esp+28h] [ebp-Ch]
  float v34; // [esp+2Ch] [ebp-8h]
  float v35; // [esp+30h] [ebp-4h]
  float v36; // [esp+44h] [ebp+10h]
  float v37; // [esp+4Ch] [ebp+18h]

  v10 = (float *)(this[5] + 12 * a4);
  v11 = *a6 * *v10 + *a5;
  v27 = v11;
  v12 = v10[1] * a6[1] + a5[1];
  v28 = v12;
  v13 = v10[2] * a6[2] + a5[2];
  v29 = v13;
  v14 = a7[1] * v12 + a8[1] * v11 + a9[1] * v13;
  v15 = *a7 * v12 + *a8 * v11 + *a9 * v13;
  v16 = v13 * a9[2] + v11 * a8[2] + v12 * a7[2];
  v17 = v14 + a10[1];
  v18 = v16 + a10[2];
  v30 = v15 + *a10;
  v31 = v17;
  v32 = v18;
  v19 = (float *)sub_101422C0();
  v33 = v30 - *v19;
  v34 = v31 - v19[1];
  v35 = v32 - v19[2];
  off_103EDFEC();
  v20 = v33 * 57016.32;
  v33 = v20;
  v21 = v20;
  v22 = v34 * 57016.32;
  v34 = v22;
  v23 = v22;
  v24 = 57016.32 * v35;
  v35 = v24;
  v26[0] = v21 + v27;
  v26[1] = v23 + v28;
  v26[2] = v24 + v29;
  (*(void (__thiscall **)(int, float *, float *, float *, int))(*(_DWORD *)dword_1041315C + 8))(
    dword_1041315C,
    &v30,
    v26,
    a2,
    a3);
  v36 = pow(*a2, 0.4545454382896423);
  *a2 = v36;
  v37 = pow(a2[1], 0.4545454382896423);
  a2[1] = v37;
  v25 = pow(a2[2], 0.4545454382896423);
  a2[2] = v25;
  if ( v36 > 1.0 )
    *a2 = 1.0;
  if ( v37 > 1.0 )
    a2[1] = 1.0;
  if ( v25 > 1.0 )
    a2[2] = 1.0;
}
