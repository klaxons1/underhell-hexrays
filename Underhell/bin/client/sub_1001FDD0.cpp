char __cdecl sub_1001FDD0(int a1, int a2, int a3, float *a4, float *a5, float *a6, int a7)
{
  float *v7; // edi
  float *v8; // ebx
  double v9; // st5
  double v10; // st3
  double v11; // st7
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // rtt
  double v20; // st4
  double v21; // st6
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  double v26; // st5
  double v27; // st4
  double v28; // st2
  double v29; // st1
  double v30; // st4
  double v31; // st7
  char result; // al
  double v33; // st6
  double v34; // st5
  float v35; // [esp+10h] [ebp-B0h]
  float v36; // [esp+10h] [ebp-B0h]
  float v37; // [esp+10h] [ebp-B0h]
  float v38; // [esp+10h] [ebp-B0h]
  float v39; // [esp+10h] [ebp-B0h]
  float v40[18]; // [esp+20h] [ebp-A0h] BYREF
  int v41; // [esp+68h] [ebp-58h]
  float v42; // [esp+6Ch] [ebp-54h] BYREF
  float v43; // [esp+70h] [ebp-50h]
  float v44; // [esp+74h] [ebp-4Ch]
  float v45; // [esp+78h] [ebp-48h] BYREF
  float v46; // [esp+7Ch] [ebp-44h]
  float v47; // [esp+80h] [ebp-40h]
  int v48; // [esp+84h] [ebp-3Ch] BYREF
  float v49; // [esp+88h] [ebp-38h]
  float v50; // [esp+8Ch] [ebp-34h]
  int v51; // [esp+90h] [ebp-30h]
  double v52; // [esp+94h] [ebp-2Ch]
  int v53; // [esp+9Ch] [ebp-24h] BYREF
  double v54; // [esp+A0h] [ebp-20h]
  float v55; // [esp+A8h] [ebp-18h] BYREF
  float v56; // [esp+ACh] [ebp-14h]
  float v57; // [esp+B0h] [ebp-10h]
  int v58; // [esp+B4h] [ebp-Ch] BYREF
  float v59; // [esp+B8h] [ebp-8h]
  float v60; // [esp+BCh] [ebp-4h]
  float v61; // [esp+C8h] [ebp+8h]
  float v62; // [esp+CCh] [ebp+Ch]
  float v63; // [esp+CCh] [ebp+Ch]
  float v64; // [esp+E0h] [ebp+20h]

  v41 = a7 + 48 * a1;
  sub_101EDA00(v41, 3, &v55);
  v7 = (float *)(a7 + 48 * a2);
  sub_101EDA00(v7, 3, &v45);
  v8 = (float *)(48 * a3 + a7);
  sub_101EDA00(v8, 3, &v42);
  v9 = a4[1] - v56;
  v10 = a4[2] - v57;
  *(float *)&v58 = *a4 - v55;
  v59 = v9;
  v60 = v10;
  *(float *)&v51 = *a5 - v55;
  *(float *)&v52 = a5[1] - v56;
  *((float *)&v52 + 1) = a5[2] - v57;
  v54 = v52;
  v53 = v51;
  v35 = (v47 - v57) * (v47 - v57) + (v45 - v55) * (v45 - v55) + (v46 - v56) * (v46 - v56);
  v61 = off_103EDFE0(v35);
  v36 = (v42 - v45) * (v42 - v45) + (v43 - v46) * (v43 - v46) + (v44 - v47) * (v44 - v47);
  v11 = off_103EDFE0(v36);
  v64 = v11;
  if ( v61 < v11 )
    v11 = v61;
  v62 = v11;
  v12 = a4[1] - v56;
  v13 = v12 * v12;
  v14 = *a4 - v55;
  v15 = v13;
  v16 = a4[2] - v57;
  v37 = v14 * v14 + v15 + v16 * v16;
  v17 = off_103EDFE0(v37) - v62;
  v18 = v64 + v61;
  if ( v18 > v17 )
    v17 = v18;
  v19 = v18;
  v20 = v17 * 100.0 * a6[2];
  v21 = a6[1] * (v17 * 100.0) + *(float *)&v52;
  *(float *)&v48 = *a6 * (v17 * 100.0) + *(float *)&v51;
  v49 = v21;
  v50 = v20 + *((float *)&v52 + 1);
  v52 = v19 * 0.9998;
  v38 = v59 * v59 + *(float *)&v58 * *(float *)&v58 + v60 * v60;
  v22 = off_103EDFE0(v38);
  if ( v22 <= v52 )
  {
    v23 = *(float *)&v58;
    v26 = v60;
    v25 = v59;
  }
  else
  {
    off_103EDFEC();
    v23 = *(float *)&v58 * v52;
    *(float *)&v58 = v23;
    v24 = v52 * v59;
    v59 = v24;
    v25 = v24;
    v26 = v52 * v60;
    v60 = v26;
  }
  v27 = v64;
  if ( v61 >= (double)v64 )
    v28 = v64;
  else
    v28 = v61;
  v29 = fabs(v61 - v27) * 1.15;
  if ( v28 * 0.15 >= v29 )
  {
    if ( v61 < v27 )
      v27 = v61;
    v30 = v27 * 0.15;
  }
  else
  {
    v30 = v29;
  }
  v63 = v30;
  v39 = v26 * v26 + v23 * v23 + v25 * v25;
  if ( off_103EDFE0(v39) < v63 )
  {
    *(float *)&v58 = v42 - v55;
    v59 = v43 - v56;
    v60 = v44 - v57;
    off_103EDFEC();
    *(float *)&v58 = *(float *)&v58 * v63;
    v59 = v59 * v63;
    v60 = v63 * v60;
  }
  if ( !sub_1001FCD0(v40, v61, v64, (float *)&v58, (float *)&v48, (float *)&v53) )
    return 0;
  sub_1001C060(v41, (float *)&v53);
  *(float *)&v48 = *(float *)&v58 - *(float *)&v53;
  v49 = v59 - *(float *)&v54;
  v50 = v60 - *((float *)&v54 + 1);
  sub_1001C060((int)v7, (float *)&v48);
  v31 = v55;
  result = 1;
  v7[3] = *(float *)&v53 + v55;
  v33 = v56;
  v7[7] = *(float *)&v54 + v56;
  v34 = v57;
  v7[11] = *((float *)&v54 + 1) + v57;
  v8[3] = v31 + *(float *)&v58;
  v8[7] = v33 + v59;
  v8[11] = v34 + v60;
  return result;
}
