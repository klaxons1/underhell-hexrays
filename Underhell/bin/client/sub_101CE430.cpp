double __cdecl sub_101CE430(int *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v8; // eax
  _DWORD *v10; // ecx
  double *v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  double *v16; // esi
  int v17; // edi
  int v18; // edx
  int i; // ecx
  double v20; // st7
  double *v21; // eax
  long double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st4
  double v26; // st6
  long double v27; // st5
  long double v28; // st5
  long double v29; // st6
  double *v30; // eax
  double v31; // st7
  double v32; // st7
  double v33; // st7
  double *v34; // eax
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // rax
  double v39; // st7
  double v40; // st6
  int v41; // esi
  int v42; // ecx
  double v43; // st5
  int v44; // ebx
  double v45; // st4
  double v46; // st3
  int v47; // edx
  double v48; // st2
  double *v49; // eax
  double v50; // st1
  int v51; // ecx
  double *v52; // eax
  int v53; // edx
  double v54; // st7
  long double v55; // st6
  double v56; // st5
  double v57; // st4
  double v58; // st5
  long double v59; // st4
  long double v60; // st4
  long double v61; // st5
  int v62; // eax
  int v64; // [esp+10h] [ebp-88h]
  long double v65; // [esp+10h] [ebp-88h]
  int v66; // [esp+1Ch] [ebp-7Ch]
  double *v67; // [esp+1Ch] [ebp-7Ch]
  int v68; // [esp+20h] [ebp-78h]
  double v69; // [esp+20h] [ebp-78h]
  long double v70; // [esp+20h] [ebp-78h]
  double *v71; // [esp+2Ch] [ebp-6Ch]
  int v72; // [esp+2Ch] [ebp-6Ch]
  double *v73; // [esp+30h] [ebp-68h]
  int v74; // [esp+30h] [ebp-68h]
  double v75; // [esp+30h] [ebp-68h]
  long double v76; // [esp+38h] [ebp-60h]
  long double v77; // [esp+38h] [ebp-60h]
  double v78; // [esp+40h] [ebp-58h]
  double v79; // [esp+40h] [ebp-58h]
  long double v80; // [esp+40h] [ebp-58h]
  double v81; // [esp+48h] [ebp-50h]
  double v82; // [esp+48h] [ebp-50h]
  double v83; // [esp+50h] [ebp-48h]
  double v84; // [esp+50h] [ebp-48h]
  double v85; // [esp+58h] [ebp-40h]
  double v86; // [esp+58h] [ebp-40h]
  double v87; // [esp+60h] [ebp-38h]
  double v88; // [esp+60h] [ebp-38h]
  double v89; // [esp+68h] [ebp-30h]
  double v90; // [esp+68h] [ebp-30h]
  double v91; // [esp+68h] [ebp-30h]
  double v92; // [esp+70h] [ebp-28h]
  double v93; // [esp+70h] [ebp-28h]
  double v94; // [esp+78h] [ebp-20h]
  double v95; // [esp+78h] [ebp-20h]
  double v96; // [esp+80h] [ebp-18h]
  double v97; // [esp+80h] [ebp-18h]
  int v98; // [esp+88h] [ebp-10h]
  int v99; // [esp+8Ch] [ebp-Ch]
  int v100; // [esp+90h] [ebp-8h]
  int v101; // [esp+94h] [ebp-4h]

  v8 = a2;
  v64 = 0;
  if ( a2 > 0 )
  {
    v10 = &unk_10454268;
    v11 = dbl_10458618;
    v66 = a2;
    do
    {
      v12 = 0;
      do
      {
        v10 += 2;
        v13 = v12 + 2 * *a5 + *a5;
        ++v12;
        *(v10 - 2) = *(_DWORD *)(a3 + 8 * v13);
        *(v10 - 1) = *(_DWORD *)(a3 + 8 * v13 + 4);
        v14 = *a5;
        *(_DWORD *)v11 = *(_DWORD *)(a4 + 8 * *a5);
        *((_DWORD *)v11 + 1) = *(_DWORD *)(a4 + 8 * v14 + 4);
      }
      while ( v12 < 3 );
      ++a5;
      ++v11;
      --v66;
    }
    while ( v66 );
    v8 = a2;
  }
  v15 = v8;
  dbl_104587E8 = 0.0;
  v16 = (double *)((char *)&unk_10454270 + 24 * v8);
  dbl_10458510 = 0.0;
  dbl_10458538 = 0.0;
  dbl_10458530 = 0.0;
  dbl_10458528 = 0.0;
  dbl_104587F0 = 0.0;
  dbl_10458518 = 0.0;
  dbl_10458550 = 0.0;
  dbl_10458548 = 0.0;
  dbl_10458540 = 0.0;
  dbl_104587F8 = 0.0;
  dbl_10458520 = 0.0;
  dbl_10458568 = 0.0;
  dbl_10458560 = 0.0;
  dbl_10458558 = 0.0;
  v68 = v8;
  v17 = a6 - (_DWORD)&dbl_10458558;
  v73 = v16;
  v71 = v16;
  while ( 1 )
  {
    v18 = v8;
    v67 = v16;
    while ( 1 )
    {
      for ( i = v8; ; dbl_104587F8 = dbl_104587F8 + dbl_10458618[i] )
      {
        v83 = -dbl_104587F8;
        v20 = (double)v64;
        v21 = &dbl_10458558;
        v85 = v20 - dbl_104587F8;
        v89 = v83 * v83 + dbl_10458520;
        v94 = v85 * v83 + dbl_10458520;
        v96 = v85 * v85 + dbl_10458520;
        v87 = v96 * v89;
        v78 = v20 * v20 * dbl_10458520 * v87 * v87;
        v22 = 0.0;
        do
        {
          v23 = dbl_10458520 * *(double *)((char *)v21 + v17);
          v24 = dbl_10458520 * *(double *)((char *)v21 + v17 + 24);
          v25 = v83 * *v21;
          v81 = v85 * *v21;
          v65 = v23 - v25;
          v76 = v24 - v25;
          v92 = (v23 - v81) * v89;
          v26 = (v24 - v81) * v89;
          v27 = (v76 - fabs(v76) + fabs(v65) + v65) * 0.5 * v94;
          v28 = (v26 - fabs(v26 - v27) + fabs(v92 - v27) + v92) * 0.5;
          v29 = (v76 * v87 - fabs(v76 * v87 - v94 * v28) + fabs(v65 * v87 - v94 * v28) + v65 * v87) * 0.5;
          ++v21;
          v22 = v22
              + dbl_10458520 * (v29 - v28 * v96) * (v29 - v28 * v96)
              + (v28 * v96 * v83 - v29 * v85) * (v28 * v96 * v83 - v29 * v85)
              - *(v21 - 1) * *(v21 - 1) * v78;
        }
        while ( (int)v21 < (int)dbl_10458570 );
        v79 = dbl_10458520 * v78;
        if ( dbl_103EDB08 * v22 <= dbl_10458C88 * v79 )
        {
          dbl_10458C88 = v22;
          v15 = v68;
          dbl_103EDB08 = v79;
          v98 = v68;
          v99 = v18;
          v100 = i;
        }
        --i;
        v16 -= 3;
        if ( i < v18 || *a1 < 3 )
          break;
        v64 = 3;
        dbl_10458558 = dbl_10458558 + *(v16 - 1);
        dbl_10458560 = dbl_10458560 + *v16;
        dbl_10458568 = dbl_10458568 + v16[1];
        dbl_10458520 = (5.0 - (dbl_104587F8 + dbl_104587F8) - dbl_10458618[i]) * dbl_10458618[i] + dbl_10458520;
      }
      --v18;
      v30 = v67 - 3;
      v67 -= 3;
      if ( v18 < v15 )
        break;
      v64 = 2;
      dbl_10458540 = dbl_10458540 + *(v30 - 1);
      v31 = dbl_10458548 + *v30;
      dbl_10458558 = dbl_10458540;
      dbl_10458548 = v31;
      v32 = dbl_10458550 + v30[1];
      dbl_10458560 = dbl_10458548;
      v16 = v73;
      dbl_10458550 = v32;
      dbl_10458568 = v32;
      dbl_10458518 = (3.0 - (dbl_104587F0 + dbl_104587F0) - dbl_10458618[v18]) * dbl_10458618[v18] + dbl_10458518;
      v33 = dbl_104587F0 + dbl_10458618[v18];
      dbl_10458520 = dbl_10458518;
      dbl_104587F0 = v33;
      dbl_104587F8 = v33;
      v8 = a2;
    }
    --v15;
    v34 = v71 - 3;
    v68 = v15;
    v71 -= 3;
    if ( v15 < 1 )
      break;
    v16 = v73;
    v64 = 1;
    dbl_10458528 = dbl_10458528 + *(v34 - 1);
    v35 = dbl_10458530 + *v34;
    dbl_10458540 = dbl_10458528;
    dbl_10458558 = dbl_10458528;
    dbl_10458530 = v35;
    v36 = dbl_10458538 + v34[1];
    dbl_10458548 = dbl_10458530;
    dbl_10458560 = dbl_10458530;
    dbl_10458538 = v36;
    dbl_10458550 = v36;
    dbl_10458568 = v36;
    dbl_10458510 = (1.0 - (dbl_104587E8 + dbl_104587E8) - dbl_10458618[v15]) * dbl_10458618[v15] + dbl_10458510;
    v37 = dbl_104587E8 + dbl_10458618[v15];
    dbl_10458518 = dbl_10458510;
    dbl_104587E8 = v37;
    dbl_10458520 = dbl_10458510;
    LODWORD(dbl_104587F0) = LODWORD(dbl_104587E8);
    v38 = v37;
    dbl_104587F8 = v37;
    v8 = a2;
    HIDWORD(dbl_104587F0) = HIDWORD(v38);
  }
  v101 = a2;
  v72 = (v98 != v99) + (v100 != a2) + (v99 != v100);
  if ( v72 == 1 && v100 != a2 )
  {
    if ( v99 == v100 )
    {
      v100 = a2;
    }
    else if ( v98 == v99 )
    {
      v101 = v98;
      v100 = v98;
    }
  }
  v39 = 0.0;
  v40 = 0.0;
  v41 = 0;
  v42 = 0;
  dbl_104587F8 = 0.0;
  v43 = 0.0;
  v74 = 0;
  v44 = 0;
  dbl_10458568 = 0.0;
  v45 = 0.0;
  dbl_10458560 = 0.0;
  v46 = 0.0;
  dbl_10458558 = 0.0;
  do
  {
    v47 = *(&v98 + v41);
    if ( v42 < v47 )
    {
      v48 = (double)v74;
      v49 = (double *)((char *)&unk_10454270 + 24 * v42);
      do
      {
        v50 = v48 * dbl_10458618[v42++];
        v49 += 3;
        v40 = v40 + v50;
        v39 = v39 + v50 * v48;
        v46 = v46 + v48 * *(v49 - 4);
        v45 = v45 + v48 * *(v49 - 3);
        v43 = v43 + v48 * *(v49 - 2);
      }
      while ( v42 < v47 );
    }
    v44 += v47 != a2;
    v74 = ++v41;
  }
  while ( v41 < 4 );
  dbl_10458558 = v46;
  dbl_104587F8 = v40;
  dbl_10458560 = v45;
  dbl_10458568 = v43;
  v51 = a7 + 24;
  v52 = &dbl_10458558;
  v53 = a8 - (_DWORD)&dbl_10458558;
  dbl_10458520 = v39 - v40 * v40;
  v84 = -v40;
  v90 = (double)v44;
  v75 = v90 - v40;
  v88 = v84 * v84 + dbl_10458520;
  v95 = v75 * v84 + dbl_10458520;
  v93 = v75 * v75 + dbl_10458520;
  v86 = v93 * v88;
  v54 = v90 * v90 * v86 * v86 * dbl_10458520;
  v55 = 0.0;
  v91 = 1.0 / v86;
  do
  {
    v56 = dbl_10458520 * *(double *)((char *)v52 + v17);
    v57 = dbl_10458520 * *(double *)(a6 - a7 + v51);
    v82 = v84 * *v52;
    v69 = v75 * *v52;
    v77 = v56 - v82;
    v80 = v57 - v82;
    v97 = (v56 - v69) * v88;
    v58 = (v57 - v69) * v88;
    v59 = (v80 - fabs(v80) + fabs(v77) + v77) * 0.5 * v95;
    v60 = (v58 - fabs(v58 - v59) + fabs(v97 - v59) + v97) * 0.5;
    v70 = v60 * v93;
    v61 = (v80 * v86 - fabs(v80 * v86 - v95 * v60) + fabs(v77 * v86 - v95 * v60) + v77 * v86) * 0.5;
    ++v52;
    v51 += 8;
    v55 = v55
        + (v61 - v70) * (v61 - v70) * dbl_10458520
        + (v70 * v84 - v61 * v75) * (v70 * v84 - v61 * v75)
        - *(v52 - 1) * *(v52 - 1) * v54;
    *(long double *)(v51 - 32) = (v91 * v61 + v82) / dbl_10458520;
    *(long double *)(v51 - 8) = (v75 * *(v52 - 1) + v91 * v70) / dbl_10458520;
    *(_DWORD *)((char *)v52 + v53 - 8) = *((_DWORD *)v52 - 2);
    *(_DWORD *)((char *)v52 + v53 - 4) = *((_DWORD *)v52 - 1);
  }
  while ( (int)v52 < (int)dbl_10458570 );
  v62 = 1;
  if ( v72 != 1 )
    v62 = v44;
  *a1 = v62;
  return v55 / (v54 * dbl_10458520);
}
