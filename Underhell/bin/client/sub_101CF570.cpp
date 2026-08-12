double __cdecl sub_101CF570(int a1, int a2, int a3, double *a4, double *a5, double *a6, int a7, int a8)
{
  double *v8; // edx
  _BYTE *v9; // eax
  int *v10; // ebx
  _BYTE *v11; // esi
  int v12; // edi
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  __int16 v16; // fps
  double v17; // st7
  bool v18; // c0
  char v19; // c2
  bool v20; // c3
  int v21; // eax
  int v22; // edx
  int *v23; // eax
  bool v24; // cc
  int *v25; // ebx
  int *v26; // edi
  char *v27; // eax
  double *v28; // esi
  double *v29; // ecx
  int *v30; // eax
  double v31; // st7
  bool v32; // zf
  double *v33; // eax
  int v34; // ecx
  double *v35; // edx
  double v36; // st7
  double v37; // st6
  double v38; // st7
  double v39; // st7
  char *v40; // edx
  int v41; // edi
  long double v42; // st7
  char *v43; // ecx
  char *v44; // edx
  char *v45; // esi
  int v46; // ebx
  int v47; // edi
  int v48; // esi
  int v49; // ecx
  double *v50; // eax
  double v51; // st6
  double v52; // st5
  long double v53; // st6
  double v54; // st5
  int *v55; // edi
  char *v56; // eax
  double *v57; // edx
  double *v58; // esi
  int v59; // ebx
  int v60; // eax
  int v61; // ebx
  int *v62; // eax
  double v63; // st7
  double *v64; // eax
  int v65; // ecx
  double *v66; // edx
  double v67; // st7
  double v68; // st6
  double v69; // st6
  double v70; // st6
  double v71; // st7
  char *v72; // ecx
  int v73; // ecx
  long double v74; // st7
  char *v75; // edx
  char *v76; // esi
  char *v77; // edi
  int v78; // ebx
  double *v79; // ecx
  int v80; // edi
  int v81; // edx
  double *v82; // eax
  double v83; // st6
  double v84; // st5
  long double v85; // st6
  double v86; // st5
  double v87; // st4
  long double v88; // st5
  int v89; // esi
  int v90; // eax
  int v91; // edi
  int v92; // edx
  int *v93; // eax
  double result; // st7
  double *v95; // ecx
  double *v96; // edx
  int v97; // esi
  double v98; // st2
  double v99; // st6
  int v100; // edi
  double v101; // st3
  double v102; // st1
  int v103; // [esp+Ch] [ebp-ECh]
  double *v104; // [esp+Ch] [ebp-ECh]
  int v105; // [esp+Ch] [ebp-ECh]
  double *v106; // [esp+Ch] [ebp-ECh]
  double *v107; // [esp+10h] [ebp-E8h]
  int v108; // [esp+10h] [ebp-E8h]
  double *v109; // [esp+10h] [ebp-E8h]
  int v110; // [esp+10h] [ebp-E8h]
  int v111; // [esp+10h] [ebp-E8h]
  int v112; // [esp+10h] [ebp-E8h]
  _BYTE *v113; // [esp+14h] [ebp-E4h]
  int v114; // [esp+14h] [ebp-E4h]
  int v115; // [esp+14h] [ebp-E4h]
  int v116; // [esp+14h] [ebp-E4h]
  int v117; // [esp+14h] [ebp-E4h]
  int v118; // [esp+14h] [ebp-E4h]
  int v119; // [esp+18h] [ebp-E0h]
  int v120; // [esp+18h] [ebp-E0h]
  int v121; // [esp+18h] [ebp-E0h]
  double *v122; // [esp+18h] [ebp-E0h]
  double *v123; // [esp+1Ch] [ebp-DCh]
  double *v124; // [esp+1Ch] [ebp-DCh]
  char *v125; // [esp+20h] [ebp-D8h]
  int v126; // [esp+20h] [ebp-D8h]
  int v127; // [esp+20h] [ebp-D8h]
  char *v128; // [esp+20h] [ebp-D8h]
  int *v129; // [esp+24h] [ebp-D4h]
  double v130; // [esp+28h] [ebp-D0h]
  int v131; // [esp+34h] [ebp-C4h]
  _BYTE v132[4]; // [esp+38h] [ebp-C0h] BYREF
  char v133; // [esp+3Ch] [ebp-BCh] BYREF
  _BYTE v134[176]; // [esp+48h] [ebp-B0h] BYREF

  v8 = a6;
  v9 = v134;
  v123 = a6;
  v113 = v134;
  v103 = (int)&unk_103529A8;
  v125 = (char *)((char *)a5 - (char *)a6);
  do
  {
    v10 = (int *)v9;
    v107 = v8;
    v11 = v9 + 32;
    v12 = 1 << (8 - *(_DWORD *)v103);
    v119 = 2;
    v131 = 256 - v12;
    v129 = (int *)(v9 + 16);
    do
    {
      if ( *(double *)((char *)v8 + (_DWORD)v125) == 0.0 )
        X = 0.0;
      else
        X = *v107 / *(double *)((char *)v8 + (_DWORD)v125) * 255.0;
      v13 = (__int64)floor(X);
      HIDWORD(v13) = v13;
      if ( (int)v13 >= 0 )
      {
        if ( (int)v13 >= 256 )
          HIDWORD(v13) = v131;
      }
      else
      {
        HIDWORD(v13) = 0;
      }
      v14 = v131 & HIDWORD(v13);
      v15 = *(_DWORD *)v103;
      LODWORD(v130) = v14 + (v14 >> *(_DWORD *)v103);
      v17 = (double)SLODWORD(v130);
      v18 = v17 < X;
      v19 = 0;
      v20 = v17 == X;
      if ( (v16 & 0x4100) == 0 && v14 - v12 >= 0 )
        v14 -= v12;
      v21 = v14 + (v14 >> v15);
      *v10 = v21;
      *((_DWORD *)v11 - 12) = v21;
      if ( v14 + v12 < 256 )
        v14 += v12;
      v11 += 4;
      v10 += 5;
      v107 += 3;
      v22 = (v14 >> v15) + v14;
      v23 = v129;
      *((_DWORD *)v11 - 1) = v22;
      *v23 = v22;
      v8 = v123;
      v129 = v23 - 3;
      --v119;
    }
    while ( v119 );
    v9 = v113 + 64;
    v8 = v123 + 1;
    v24 = v103 + 4 < (int)&unk_103529B4;
    v103 += 4;
    v113 += 64;
    ++v123;
  }
  while ( v24 );
  if ( a1 == 3 )
  {
    v25 = 0;
    v26 = (int *)v132;
    v129 = 0;
    v27 = (char *)&unk_1044FA30;
    v28 = dbl_10455040;
    do
    {
      v104 = (double *)v27;
      v120 = 4;
      do
      {
        v29 = v28;
        v114 = 3;
        v26[2] = (*v26 + v26[1]) / 2;
        v30 = v26;
        do
        {
          v31 = (double)*v30++;
          ++v29;
          v32 = v114-- == 1;
          *(v29 - 1) = v31 * *(double *)((char *)a5 + (_DWORD)v25) * 0.00392156862745098;
        }
        while ( !v32 );
        v33 = v104;
        v34 = 0;
        if ( a2 > 0 )
        {
          v35 = (double *)((char *)v25 + a3);
          do
          {
            v36 = *v35 - *v28;
            v35 += 3;
            v37 = v36 * a4[v34];
            v33 += 3;
            ++v34;
            *(v33 - 3) = v37 * v36;
            v38 = *(v35 - 3) - v28[1];
            *(v33 - 2) = v38 * a4[v34 - 1] * v38;
            v39 = *(v35 - 3) - v28[2];
            *(v33 - 1) = v39 * a4[v34 - 1] * v39;
          }
          while ( v34 < a2 );
          v25 = v129;
        }
        v26 += 4;
        v40 = (char *)(v104 + 192);
        v28 += 4;
        v32 = v120 == 1;
        v104 += 192;
        --v120;
      }
      while ( !v32 );
      v25 += 2;
      v129 = v25;
      v27 = v40;
    }
    while ( (int)v28 < (int)dbl_104551C0 );
    v41 = 0;
    v103 = -1;
    v108 = 0;
    dbl_10454260 = (*a5 * *a5 + a5[1] * a5[1] + a5[2] * a5[2]) * 96.0;
    do
    {
      v42 = 0.0;
      v43 = (char *)&unk_1044FA30 + 1536 * (v41 & 3);
      v44 = (char *)&unk_10451230 + 1536 * ((v41 >> 2) & 3);
      v45 = (char *)&unk_10452A30 + 1536 * (v41 >> 4);
      if ( a2 >= 1 )
      {
        v126 = v45 - v44;
        LODWORD(v130) = &v45[24 * a2 - 8];
        v46 = v43 - v44;
        v47 = (int)&v43[24 * a2 - 16];
        v48 = v45 - v43;
        v115 = a2;
        v49 = LODWORD(v130);
        v50 = (double *)&v44[24 * a2 - 24];
        do
        {
          v49 -= 24;
          v51 = *(double *)((char *)v50 + v46) + *(double *)((char *)v50 + v126);
          v50 -= 3;
          v47 -= 24;
          v32 = v115 == 1;
          v52 = *(double *)(v47 + v48 + 24) + v50[4];
          --v115;
          v53 = v52 + *(double *)(v47 + 24) + v51 + v50[3] - fabs(v51 + v50[3] - (v52 + *(double *)(v47 + 24)));
          v54 = v50[5] + *(double *)(v47 + 32) + *(double *)(v49 + 24);
          v42 = v42 + v53 + v54 + v54 - fabs(v54 + v54 - v53);
        }
        while ( !v32 );
        v41 = v108;
      }
      if ( v42 < dbl_10454260 )
      {
        dbl_10454260 = v42;
        v103 = v41;
      }
      v108 = ++v41;
    }
    while ( v41 < 64 );
  }
  else if ( a1 == 4 )
  {
    v105 = 0;
    v55 = (int *)&v133;
    v56 = (char *)&unk_1044FA30;
    v57 = dbl_10455040;
    do
    {
      v58 = v57;
      v109 = (double *)v56;
      v121 = 4;
      do
      {
        v59 = *(v55 - 1);
        v116 = 4;
        v60 = *v55;
        v55[1] = (*v55 + 2 * v59 + 1) / 3;
        v61 = v59 + 2 * v60 + 1;
        v62 = v55 - 1;
        v55[2] = v61 / 3;
        v57 = v58;
        do
        {
          v63 = (double)*v62++;
          ++v57;
          v32 = v116-- == 1;
          *(v57 - 1) = v63 * a5[v105] * 0.00392156862745098;
        }
        while ( !v32 );
        v64 = v109;
        v65 = 0;
        LODWORD(v130) = v57;
        if ( a2 > 0 )
        {
          v66 = (double *)(v105 * 8 + a3);
          do
          {
            v67 = *v66 - *v58;
            v66 += 3;
            v64 += 4;
            v68 = v67 * v67 * a4[v65++];
            *(v64 - 4) = v68;
            v69 = *(v66 - 3) - v58[1];
            *(v64 - 3) = v69 * v69 * a4[v65 - 1];
            v70 = *(v66 - 3) - v58[2];
            *(v64 - 2) = v70 * v70 * a4[v65 - 1];
            v71 = *(v66 - 3) - v58[3];
            *(v64 - 1) = v71 * v71 * a4[v65 - 1];
          }
          while ( v65 < a2 );
          v57 = (double *)LODWORD(v130);
        }
        v55 += 4;
        v72 = (char *)(v109 + 192);
        v32 = v121 == 1;
        v109 += 192;
        v58 = v57;
        --v121;
      }
      while ( !v32 );
      v56 = v72;
      ++v105;
    }
    while ( (int)v57 < (int)dbl_104551C0 );
    v73 = 0;
    v103 = -1;
    v110 = 0;
    dbl_10454260 = (*a5 * *a5 + a5[1] * a5[1] + a5[2] * a5[2]) * 96.0;
    do
    {
      v74 = 0.0;
      v75 = (char *)&unk_1044FA30 + 1536 * (v73 & 3);
      v76 = (char *)&unk_10451230 + 1536 * ((v73 >> 2) & 3);
      v77 = (char *)&unk_10452A30 + 1536 * (v73 >> 4);
      if ( a2 >= 1 )
      {
        v127 = v77 - v76;
        LODWORD(v130) = &v77[32 * a2 - 8];
        v78 = v75 - v76;
        v79 = (double *)&v75[32 * a2 - 24];
        v80 = v77 - v75;
        v117 = a2;
        v81 = LODWORD(v130);
        v82 = (double *)&v76[32 * a2 - 32];
        do
        {
          v81 -= 32;
          v83 = *(double *)((char *)v82 + v78) + *(double *)((char *)v82 + v127);
          v82 -= 4;
          v79 -= 4;
          v32 = v117 == 1;
          v84 = *(double *)((char *)v79 + v80 + 32) + v82[5];
          --v117;
          v85 = v84 + v79[4] + v83 + v82[4] - fabs(v83 + v82[4] - (v84 + v79[4]));
          v86 = v82[6] + v79[5] + *(double *)(v81 + 24);
          v87 = v82[7] + v79[6] + *(double *)(v81 + 32);
          v88 = v87 + v86 - fabs(v86 - v87);
          v74 = v74 + v85 + v88 - fabs(v88 - v85);
        }
        while ( !v32 );
        v73 = v110;
      }
      if ( v74 < dbl_10454260 )
      {
        dbl_10454260 = v74;
        v103 = v73;
      }
      v110 = ++v73;
    }
    while ( v73 < 64 );
  }
  v89 = a7;
  v122 = &dbl_10455040[4 * (v103 & 3)];
  v124 = (double *)((char *)&unk_104550C0 + 32 * ((v103 >> 2) & 3));
  v128 = (char *)&unk_10455140 + 32 * (v103 >> 4);
  v90 = 0;
  v111 = 0;
  LODWORD(v130) = (char *)&unk_103529A8 - a7;
  do
  {
    v91 = 2;
    v92 = v89;
    v93 = (int *)&v132[64 * v90 + 16 * ((v103 >> (2 * v90)) & 3)];
    do
    {
      ++v93;
      v92 += 12;
      --v91;
      *(_DWORD *)(v92 - 12) = *(v93 - 1) >> (8 - *(_BYTE *)(LODWORD(v130) + v89));
    }
    while ( v91 );
    v89 += 4;
    v90 = ++v111;
  }
  while ( v111 < 3 );
  v112 = 0;
  result = 0.0;
  if ( a2 > 0 )
  {
    v106 = a4;
    v95 = v124;
    v96 = (double *)(a3 + 8);
    do
    {
      v97 = 0;
      v118 = -1;
      v98 = a5[2] * a5[2];
      v99 = *a5 * *a5 + a5[1] * a5[1] + v98 + *a5 * *a5 + a5[1] * a5[1] + v98;
      if ( a1 > 0 )
      {
        v100 = v128 - (char *)v95;
        do
        {
          v101 = *(v96 - 1) - *(double *)((char *)v95 + (char *)v122 - (char *)v124);
          v102 = v96[1] - *(double *)((char *)v95 + v100);
          v130 = ((*v96 - *v95) * (*v96 - *v95) + v101 * v101 + v102 * v102) * *v106;
          if ( v130 < v99 )
          {
            v99 = v130;
            v118 = v97;
          }
          ++v97;
          ++v95;
        }
        while ( v97 < a1 );
        v95 = v124;
      }
      v96 += 3;
      *(_DWORD *)(a8 + 4 * v112) = v118;
      result = result + v99;
      ++v112;
      ++v106;
    }
    while ( v112 < a2 );
  }
  return result;
}
