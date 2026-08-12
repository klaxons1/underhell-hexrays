char __thiscall sub_101E2F50(_DWORD *this)
{
  double v1; // st7
  double v2; // st6
  double v4; // st5
  double v5; // st4
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  double v10; // rt0
  double v11; // st4
  double v12; // st6
  bool v13; // c0
  int v14; // esi
  double v15; // rt1
  double v16; // st5
  double v17; // st7
  double v18; // st4
  double v19; // st4
  double v20; // rtt
  double v21; // rt0
  double v22; // st4
  double v23; // st5
  int v24; // eax
  int v25; // esi
  double v26; // st5
  double v27; // st4
  double v28; // rt2
  double v29; // st4
  double v30; // st5
  int v31; // eax
  int v32; // ebx
  double v33; // st5
  double v34; // st4
  double v35; // rt0
  double v36; // st4
  double v37; // st5
  int v38; // esi
  bool v39; // c0
  int v40; // esi
  double v41; // st5
  double v42; // st4
  double v43; // rt2
  double v44; // st4
  double v45; // st5
  double v46; // rtt
  double v47; // st4
  int v48; // edi
  double v49; // rtt
  double v50; // st4
  int v51; // esi
  double v52; // rtt
  double v53; // st4
  double v54; // st6
  bool v55; // c0
  int v56; // esi
  double v57; // rt0
  double v58; // st5
  double v59; // st7
  double v60; // st4
  double v61; // st4
  double v62; // rt2
  double v63; // rtt
  double v64; // st4
  double v65; // st5
  char v67; // [esp+Fh] [ebp-Dh]
  int v68; // [esp+10h] [ebp-Ch]
  int v69; // [esp+10h] [ebp-Ch]
  int v70; // [esp+14h] [ebp-8h]

  v1 = 0.0099999998;
  v2 = 1.0;
  v4 = 0.01;
  v5 = 0.0;
  v6 = this[60] - 1;
  v67 = 0;
  v68 = v6;
  if ( (int)this[60] >= 4 )
  {
    v7 = this[60] - 2;
    v70 = v6 - 1;
    v8 = 28 * v6;
    do
    {
      v9 = this[57];
      v10 = v5;
      v11 = v2;
      v12 = v10;
      v13 = v11 < *(float *)(v9 + v8 + 16);
      v14 = v8 + v9;
      if ( v13 )
      {
        v15 = v4;
        v16 = v11;
        v17 = v15;
        *(float *)(v14 + 16) = v11;
        v18 = v11 / (double)(v7 + 2);
        if ( v18 > v15 )
          v18 = v17;
        v67 = 1;
      }
      else
      {
        v19 = v4;
        v16 = *(float *)(v14 + 16);
        v20 = v19;
        v18 = v1;
        v17 = v20;
      }
      v21 = v18;
      v22 = v16 - v18;
      v23 = v21;
      if ( v22 <= v12 )
        v22 = v12;
      v24 = this[57];
      v25 = v24 + v8 - 28;
      if ( v22 >= *(float *)(v24 + v8 - 12) )
      {
        v27 = v23;
        v26 = *(float *)(v25 + 16);
      }
      else
      {
        v26 = v22;
        *(float *)(v25 + 16) = v22;
        v27 = v22 / (double)v68;
        if ( v27 > v17 )
          v27 = v17;
        v67 = 1;
      }
      v28 = v27;
      v29 = v26 - v27;
      v30 = v28;
      if ( v29 <= v12 )
        v29 = v12;
      v31 = this[57];
      v32 = v8 - 84;
      if ( v29 >= *(float *)(v31 + v8 - 84 + 44) )
      {
        v34 = v30;
        v33 = *(float *)(v31 + v8 - 84 + 44);
      }
      else
      {
        v33 = v29;
        *(float *)(v31 + v8 - 84 + 44) = v29;
        v34 = v29 / (double)v70;
        if ( v34 > v17 )
          v34 = v17;
        v67 = 1;
      }
      v35 = v34;
      v36 = v33 - v34;
      v37 = v35;
      if ( v36 <= v12 )
        v36 = v12;
      v38 = this[57];
      v39 = v36 < *(float *)(v38 + v32 + 16);
      v40 = v32 + v38;
      if ( v39 )
      {
        v41 = v36;
        *(float *)(v40 + 16) = v36;
        v42 = v36 / (double)(v7 - 1);
        if ( v42 > v17 )
          v42 = v17;
        v67 = 1;
      }
      else
      {
        v42 = v37;
        v41 = *(float *)(v40 + 16);
      }
      v43 = v42;
      v44 = v41 - v42;
      v45 = v43;
      if ( v44 <= v12 )
        v44 = v12;
      v6 -= 4;
      v46 = v44;
      v7 -= 4;
      v47 = v17;
      v1 = v45;
      v8 -= 112;
      v4 = v47;
      v5 = v12;
      v2 = v46;
      v68 = v6;
      v70 = v7;
    }
    while ( v6 >= 3 );
  }
  if ( v6 < 0 )
    return v67;
  v69 = v6 + 1;
  v48 = 28 * v6;
  while ( 1 )
  {
    v51 = this[57];
    v52 = v5;
    v53 = v2;
    v54 = v52;
    v55 = v53 < *(float *)(v51 + v48 + 16);
    v56 = v48 + v51;
    if ( v55 )
    {
      v57 = v4;
      v58 = v53;
      v59 = v57;
      *(float *)(v56 + 16) = v53;
      v60 = v53 / (double)v69;
      if ( v60 > v57 )
        v60 = v59;
      v67 = 1;
    }
    else
    {
      v61 = v4;
      v58 = *(float *)(v56 + 16);
      v62 = v61;
      v60 = v1;
      v59 = v62;
    }
    v63 = v60;
    v64 = v58 - v60;
    v65 = v63;
    if ( v64 <= v54 )
      v64 = v54;
    --v69;
    --v6;
    v48 -= 28;
    if ( v6 < 0 )
      break;
    v49 = v64;
    v50 = v59;
    v1 = v65;
    v4 = v50;
    v5 = v54;
    v2 = v49;
  }
  return v67;
}
