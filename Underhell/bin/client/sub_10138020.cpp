void __userpurge sub_10138020(int a1@<ebx>, int a2, float a3, int a4, float *a5, float *a6, int a7, int a8, float a9)
{
  int v9; // esi
  float *v10; // edi
  float *v11; // eax
  double v12; // st4
  double v13; // st3
  int v14; // eax
  float *v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  double v21; // st7
  double v22; // st4
  double v23; // st5
  double v24; // st4
  bool v25; // c0
  bool v26; // c3
  double v27; // st7
  int v28; // eax
  float v29; // ecx
  float v30; // edx
  int *v31; // eax
  double v32; // st7
  double v33; // st5
  double v34; // st4
  double v35; // st4
  double v36; // st3
  double v37; // st4
  double v38; // st6
  double v39; // st6
  double v40; // st5
  double v41; // rt2
  double v42; // st4
  double v43; // st6
  double v44; // rtt
  double v45; // st7
  float v46; // [esp+20h] [ebp-90h]
  float v47; // [esp+2Ch] [ebp-84h]
  float v48; // [esp+30h] [ebp-80h]
  float v49; // [esp+34h] [ebp-7Ch]
  float v50[6]; // [esp+40h] [ebp-70h] BYREF
  __int16 v51; // [esp+58h] [ebp-58h]
  int v52[4]; // [esp+5Ch] [ebp-54h] BYREF
  float v53[3]; // [esp+6Ch] [ebp-44h] BYREF
  int v54; // [esp+78h] [ebp-38h] BYREF
  float v55; // [esp+7Ch] [ebp-34h]
  float v56; // [esp+80h] [ebp-30h]
  int v57[3]; // [esp+84h] [ebp-2Ch] BYREF
  float v58; // [esp+90h] [ebp-20h]
  float v59; // [esp+94h] [ebp-1Ch]
  float v60; // [esp+98h] [ebp-18h]
  float v61; // [esp+9Ch] [ebp-14h]
  float v62; // [esp+A0h] [ebp-10h]
  float v63; // [esp+A4h] [ebp-Ch]
  float v64; // [esp+A8h] [ebp-8h]
  float v65; // [esp+ACh] [ebp-4h]

  v9 = a2;
  v10 = (float *)(a2 + 60);
  v58 = *(float *)(a2 + 72) - *(float *)(a2 + 60);
  v59 = *(float *)(a2 + 76) - *(float *)(a2 + 64);
  v60 = *(float *)(a2 + 80) - *(float *)(a2 + 68);
  off_103EDFEC();
  v11 = (float *)sub_101422C0();
  v61 = *v11 - *v10;
  v62 = v11[1] - v10[1];
  v63 = v11[2] - v10[2];
  off_103EDFEC();
  v12 = v63 * v60 + v61 * v58 + v62 * v59;
  v13 = 0.0;
  if ( v12 >= 0.0 )
    v13 = v12 * 2.0;
  v65 = v13;
  *(float *)&v54 = v58 * 2.0 + *v10;
  v55 = v59 * 2.0 + v10[1];
  v56 = v60 * 2.0 + v10[2];
  v14 = sub_101422C0();
  sub_101F0230(v14, v10, &v54, v53, &a2);
  v15 = (float *)sub_101422C0();
  v16 = v15[1] - v53[1];
  v17 = v16 * v16;
  v18 = *v15 - v53[0];
  v19 = v17;
  v20 = v15[2] - v53[2];
  v49 = v18 * v18 + v19 + v20 * v20;
  v21 = off_103EDFE0(v49);
  *(float *)&a2 = v21;
  v22 = *(float *)(v9 + 204) * 4.0;
  v64 = v22;
  if ( v22 <= v21 )
  {
    v27 = 1.0;
  }
  else
  {
    v23 = v22;
    v24 = *(float *)(v9 + 204);
    if ( v24 == v23 )
    {
      v25 = v24 < v21;
      v26 = v24 == v21;
      v27 = 1.0;
      if ( v25 || v26 )
        v27 = 0.0;
    }
    else
    {
      v27 = 1.0 - (v21 - v23) / (v24 - v23);
      if ( v27 <= 1.0 )
      {
        if ( v27 < 0.0 )
          v27 = 0.0;
      }
      else
      {
        v27 = 1.0;
      }
    }
  }
  *(float *)v52 = *a5 * v27;
  *(float *)&v52[1] = a5[1] * v27;
  *(float *)&v52[2] = a5[2] * v27;
  v28 = *(_DWORD *)(v9 + 52);
  *(float *)&v52[3] = v27 * a5[3];
  a3 = (float)SLODWORD(a3);
  v48 = *(float *)(v9 + 212);
  v46 = *(float *)(v9 + 240);
  if ( (v28 & 0x8000) != 0 )
    sub_100178A0(
      v9,
      128,
      v9 + 352,
      a7,
      a3,
      a4,
      v10,
      (float *)(v9 + 180),
      *(float *)(v9 + 204),
      *(float *)(v9 + 208),
      *(float *)(v9 + 216),
      *(float *)(v9 + 196),
      v46,
      *(_DWORD *)(v9 + 252),
      v28,
      (float *)v52,
      v48,
      a9);
  else
    sub_100178A0(
      v9,
      128,
      v9 + 352,
      a7,
      a3,
      a4,
      v10,
      (float *)(v9 + 180),
      *(float *)(v9 + 204),
      *(float *)(v9 + 204),
      *(float *)(v9 + 216),
      *(float *)(v9 + 196),
      v46,
      2,
      v28,
      (float *)v52,
      v48,
      a9);
  v29 = v10[1];
  v30 = v10[2];
  v57[0] = *(int *)v10;
  v31 = *(int **)(v9 + 36);
  v50[0] = *(float *)v57;
  *(float *)&v57[1] = v29;
  v50[1] = v29;
  *(float *)&v57[2] = v30;
  v50[2] = v30;
  v50[3] = *(float *)(v9 + 40);
  v51 = 1;
  v50[4] = 1.0;
  v50[5] = 0.0625;
  v32 = sub_1005BF10(v50, v31);
  v33 = 0.0;
  if ( 0.0 != v65 && v32 > 0.0 )
  {
    v34 = *(float *)(v9 + 204) * 0.5;
    if ( v34 == v64 )
    {
      if ( v34 <= *(float *)&a2 )
      {
        v35 = 2.0;
        v36 = 1.0;
LABEL_26:
        v37 = v35 * *(float *)(v9 + 344);
        v38 = v65 * v65;
        if ( v36 >= v38 )
        {
          v41 = v37;
          v42 = v38;
          v43 = v41;
          if ( v42 >= 0.0 )
            v33 = v42;
          v44 = v33;
          v40 = v43;
          v39 = v44;
        }
        else
        {
          v39 = v36;
          v40 = v37;
        }
        v45 = v32 * v39;
        *(float *)&v54 = *a6 * v45;
        v55 = a6[1] * v45;
        v56 = v45 * a6[2];
        v47 = v40;
        sub_100189A0(a1, v9, a8, a3, 3, (float *)v57, v47, (float *)&v54, a9);
        return;
      }
      v35 = 1.0;
    }
    else
    {
      v36 = 1.0;
      v35 = (*(float *)&a2 - v64) / (v34 - v64) + 1.0;
      if ( v35 > 2.0 )
      {
        v35 = 2.0;
        goto LABEL_26;
      }
      if ( v35 >= 1.0 )
        goto LABEL_26;
      v35 = 1.0;
    }
    v36 = v35;
    goto LABEL_26;
  }
}
