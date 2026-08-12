void sub_10157240()
{
  int v0; // esi
  double v1; // st6
  double v2; // st5
  int v3; // ecx
  double v4; // st4
  float *v5; // edx
  double v6; // rt0
  double v7; // st4
  double v8; // rt1
  double v9; // rt2
  double v10; // st4
  double v11; // st5
  double v12; // rtt
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st4
  float *v17; // edx
  double v18; // rt0
  double v19; // st4
  float *v20; // edx
  double v21; // rt2
  double v22; // st4
  float *v23; // edx
  double v24; // st3
  double v25; // st2
  double v26; // st1
  double v27; // rt0
  double v28; // rt1
  double v29; // st1
  double v30; // rtt
  double v31; // rt0
  double v32; // st1
  double v33; // st2
  double v34; // st4
  double v35; // st1
  double v36; // rtt
  double v37; // st2
  double v38; // rt0
  double v39; // st3
  double v40; // st4
  int v41; // eax
  double v42; // st7
  int v43; // ecx
  float *v44; // edx
  double v45; // st5
  double v46; // st4
  double v47; // rt0
  double v48; // st4
  double v49; // rt1
  double v50; // rt2
  double v51; // st4
  double v52; // st7
  double v53; // rtt
  double v54; // st4
  double v55; // st5
  double v56; // st4
  double v57; // st4
  float *v58; // edx
  double v59; // rt0
  double v60; // st5
  double v61; // st4
  double v62; // st3
  float *v63; // edx
  double v64; // rt2
  float v65[3]; // [esp+4h] [ebp-Ch]

  v0 = 0;
  if ( !dword_10627F14 )
    return;
  dword_10627F14 = 0;
  memset(flt_106B3A08, 0, 0x288u);
  v1 = -0.125;
  v2 = 0.0;
  v3 = 0;
  v4 = 0.125;
  v5 = flt_106B3A0C;
  while ( 1 )
  {
    v9 = v4;
    v10 = v2;
    v11 = v9;
    ++v3;
    *(v5 - 1) = v10;
    v5 += 3;
    *(v5 - 3) = v10;
    v12 = v10;
    v13 = v1;
    v14 = v12;
    *(v5 - 2) = v13;
    v15 = v13 + v9;
    if ( v15 > v9 )
      break;
    v6 = v15;
    v7 = v14;
    v1 = v6;
    v8 = v7;
    v4 = v11;
    v2 = v8;
  }
  v16 = -0.125;
  v17 = &flt_106B3A0C[3 * v3];
  do
  {
    v18 = v16;
    ++v3;
    *(v17 - 1) = v14;
    v17 += 3;
    *(v17 - 2) = v14;
    *(v17 - 3) = v16;
    v16 = v16 + v11;
  }
  while ( v18 + v11 <= v11 );
  v19 = -0.125;
  v20 = &flt_106B3A0C[3 * v3];
  do
  {
    *(v20 - 1) = v19;
    ++v3;
    v21 = v19;
    v20 += 3;
    *(v20 - 3) = v14;
    *(v20 - 2) = v14;
    v19 = v19 + v11;
  }
  while ( v21 + v11 <= v11 );
  v22 = -0.125;
  v23 = &flt_106B3A0C[3 * v3];
  v24 = 0.25;
  v25 = -0.125;
  v26 = -0.125;
  while ( 1 )
  {
    while ( 1 )
    {
      v31 = v26;
      ++v3;
      *(v23 - 1) = v22;
      v23 += 3;
      v32 = v25;
      v33 = v22;
      *(v23 - 3) = v32;
      v34 = v32;
      *(v23 - 2) = v31;
      v35 = v31 + v24;
      if ( v31 + v24 > v11 )
        break;
      v28 = v35;
      v29 = v34;
      v22 = v33;
      v30 = v29;
      v26 = v28;
      v25 = v30;
    }
    v36 = v33;
    v37 = v34;
    v22 = v36;
    v25 = v37 + v24;
    if ( v25 > v11 )
      break;
LABEL_11:
    v26 = -0.125;
    v23 = &flt_106B3A0C[3 * v3];
  }
  v38 = v24;
  v39 = v22 + v24;
  v40 = v38;
  if ( v39 <= v11 )
  {
    v27 = v39;
    v24 = v40;
    v22 = v27;
    v25 = -0.125;
    goto LABEL_11;
  }
  v41 = 3 * v3;
  v42 = v14;
  v43 = v3 + 3;
  v65[0] = v14;
  v44 = &flt_106B3A0C[3 * v43];
  v65[1] = 1.0;
  v65[2] = 6.0;
  flt_106B3A08[v41] = v14;
  flt_106B3A0C[v41] = v14;
  flt_106B3A10[v41] = v14;
  flt_106B3A14[v41] = v14;
  flt_106B3A18[v41] = v14;
  flt_106B3A20[v41] = v14;
  flt_106B3A24[v41] = v14;
  flt_106B3A1C[v41] = 1.0;
  flt_106B3A28[v41] = 6.0;
  v45 = -2.0;
  v46 = 2.0;
  while ( 1 )
  {
    v50 = v46;
    v51 = v42;
    v52 = v50;
    ++v43;
    *(v44 - 1) = v51;
    v44 += 3;
    *(v44 - 2) = v51;
    v53 = v51;
    v54 = v45;
    v55 = v53;
    *(v44 - 3) = v54;
    v56 = v54 + v50;
    if ( v56 > v50 )
      break;
    v47 = v56;
    v48 = v55;
    v45 = v47;
    v49 = v48;
    v46 = v52;
    v42 = v49;
  }
  v57 = -2.0;
  v58 = &flt_106B3A0C[3 * v43];
  do
  {
    *(v58 - 1) = v57;
    ++v43;
    v59 = v57;
    v58 += 3;
    *(v58 - 3) = v55;
    *(v58 - 2) = v55;
    v57 = v57 + v52;
  }
  while ( v59 + v52 <= v52 );
  do
  {
    v60 = v65[v0];
    v61 = -2.0;
    do
    {
      v62 = -2.0;
      v63 = &flt_106B3A0C[3 * v43];
      do
      {
        v64 = v62;
        ++v43;
        *(v63 - 1) = v61;
        v63 += 3;
        *(v63 - 3) = v62;
        *(v63 - 2) = v60;
        v62 = v62 + v52;
      }
      while ( v64 + v52 <= v52 );
      v61 = v61 + v52;
    }
    while ( v61 <= v52 );
    ++v0;
  }
  while ( v0 < 3 );
}
