void __usercall sub_101DFD00(
        __m128 a1@<xmm2>,
        float *a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 a8,
        float *a9,
        char a10,
        char a11,
        char a12)
{
  int v12; // esi
  float *v13; // ecx
  int v14; // eax
  int v15; // esi
  double v16; // st6
  int v17; // ecx
  float *v18; // edx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st2
  double v25; // st5
  double v26; // st0
  double v27; // st7
  double v28; // st6
  double v29; // st5
  int v30; // ecx
  double v31; // st4
  double v32; // st3
  double v33; // st3
  double v34; // st2
  double v35; // st1
  char *v36; // edx
  int v37; // eax
  __int8 *v38; // esi
  double v39; // st0
  float v40; // edi
  double v41; // st1
  float *v42; // eax
  double v43; // st5
  double v44; // st5
  double v45; // rt1
  double v46; // st6
  double v47; // st7
  int v48; // esi
  double v49; // st6
  bool v50; // zf
  int v51; // ecx
  double v52; // rt1
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm3
  __m128 v56; // xmm4
  int v57; // eax
  int v58; // ecx
  float *v59; // eax
  double v60; // st5
  int v61; // esi
  double v62; // st5
  int v63; // eax
  double v64; // st7
  double v65; // st6
  double v66; // st5
  double v67; // st4
  double v68; // st3
  double v69; // st1
  float v70; // [esp+0h] [ebp-E04h]
  float v71; // [esp+2Ch] [ebp-DD8h]
  float v72; // [esp+2Ch] [ebp-DD8h]
  float v73; // [esp+2Ch] [ebp-DD8h]
  float v74; // [esp+2Ch] [ebp-DD8h]
  float v75; // [esp+2Ch] [ebp-DD8h]
  float v76; // [esp+2Ch] [ebp-DD8h]
  float v77; // [esp+30h] [ebp-DD4h]
  float v78; // [esp+30h] [ebp-DD4h]
  _BYTE *v79; // [esp+30h] [ebp-DD4h]
  float v80; // [esp+30h] [ebp-DD4h]
  int v81; // [esp+30h] [ebp-DD4h]
  float v82; // [esp+30h] [ebp-DD4h]
  char v83; // [esp+37h] [ebp-DCDh] BYREF
  int v84; // [esp+38h] [ebp-DCCh]
  double v85; // [esp+3Ch] [ebp-DC8h]
  float v86; // [esp+48h] [ebp-DBCh]
  float v87; // [esp+4Ch] [ebp-DB8h]
  float v88; // [esp+50h] [ebp-DB4h]
  int v89; // [esp+54h] [ebp-DB0h]
  float v90; // [esp+58h] [ebp-DACh]
  float v91; // [esp+5Ch] [ebp-DA8h]
  float i; // [esp+70h] [ebp-D94h]
  float v93; // [esp+74h] [ebp-D90h]
  float v94; // [esp+78h] [ebp-D8Ch]
  double v95; // [esp+7Ch] [ebp-D88h]
  float v96; // [esp+84h] [ebp-D80h]
  float v97; // [esp+88h] [ebp-D7Ch]
  float v98; // [esp+8Ch] [ebp-D78h]
  float *v99; // [esp+90h] [ebp-D74h]
  double v100; // [esp+94h] [ebp-D70h]
  float v101; // [esp+A0h] [ebp-D64h]
  float *v102; // [esp+A4h] [ebp-D60h]
  int v103; // [esp+A8h] [ebp-D5Ch] BYREF
  float v104; // [esp+ACh] [ebp-D58h]
  float v105; // [esp+B0h] [ebp-D54h]
  float v106[5]; // [esp+B4h] [ebp-D50h]
  float v107; // [esp+C8h] [ebp-D3Ch]
  float v108; // [esp+CCh] [ebp-D38h]
  int v109; // [esp+D0h] [ebp-D34h]
  int v110; // [esp+D4h] [ebp-D30h] BYREF
  float v111; // [esp+D8h] [ebp-D2Ch]
  float v112; // [esp+DCh] [ebp-D28h]
  float v113; // [esp+F4h] [ebp-D10h]
  float v114; // [esp+F8h] [ebp-D0Ch]
  double v115; // [esp+FCh] [ebp-D08h]
  __m128 v116[16]; // [esp+104h] [ebp-D00h] BYREF
  _BYTE v117[256]; // [esp+204h] [ebp-C00h] BYREF
  float v118[64]; // [esp+304h] [ebp-B00h] BYREF
  float v119[64]; // [esp+404h] [ebp-A00h] BYREF
  float v120[64]; // [esp+504h] [ebp-900h] BYREF
  float v121; // [esp+604h] [ebp-800h] BYREF
  char v122; // [esp+608h] [ebp-7FCh] BYREF
  float v123; // [esp+A04h] [ebp-400h] BYREF
  char v124; // [esp+A08h] [ebp-3FCh] BYREF

  v12 = a4;
  v99 = a2;
  v84 = a4;
  v102 = a9;
  if ( a5 > 0 )
  {
    v13 = (float *)&v122;
    v14 = a3 + 8;
    v15 = a5;
    do
    {
      v13 += 4;
      v16 = *(float *)(v14 - 8) / 255.0;
      v14 += 16;
      --v15;
      *(v13 - 5) = v16;
      *(v13 - 4) = *(float *)(v14 - 20) / 255.0;
      *(float *)((char *)&v121 + v14 - a3 - 16) = *(float *)(v14 - 16) / 255.0;
    }
    while ( v15 );
    v12 = v84;
  }
  v109 = (a5 + 3) / 4;
  if ( a5 <= 2 || (v83 = 1, sub_101DBAA0((float *)&v103, &v123, (float *)&v110, (bool *)&v83, &v121, v12, 3, a5), v83) )
  {
    v103 = *(int *)a3;
    v104 = *(float *)(a3 + 16 * a5 - 16);
    v105 = *(float *)(a3 + 4);
    v106[0] = *(float *)(a3 + 16 * a5 - 12);
    v106[1] = *(float *)(a3 + 8);
    v106[2] = *(float *)(a3 + 16 * a5 - 8);
  }
  else
  {
    v101 = 10000000.0;
    v89 = v110;
    v90 = v111;
    v91 = v112;
    while ( 1 )
    {
      v87 = 1000.0;
      memset(v119, 0, sizeof(v119));
      v88 = -1000.0;
      memset(v116, 0, sizeof(v116));
      memset(v120, 0, sizeof(v120));
      memset(v117, 0, sizeof(v117));
      v17 = 0;
      v18 = &v123;
      v19 = v90;
      v20 = *(float *)&v89;
      v95 = *(float *)&v89;
      v21 = v91;
      v85 = v91;
      while ( 1 )
      {
        v22 = v18[1];
        v23 = *v18;
        v24 = v20 * v23 + v19 * v22 + v21 * v18[2];
        v25 = v18[2];
        v77 = v24;
        v116[0].m128_f32[v17] = v77;
        v119[v17] = v77;
        v26 = v25;
        v21 = v85;
        v120[v17] = (v26 - v77 * v85) * (v26 - v77 * v85)
                  + (v22 - v77 * v19) * (v22 - v77 * v19)
                  + (v23 - v20 * v77) * (v23 - v20 * v77);
        if ( v87 >= (double)v77 )
          v87 = v24;
        if ( v88 <= (double)v77 )
          v88 = v24;
        ++v17;
        v18 += 4;
        if ( v17 >= a5 )
          break;
        v20 = v95;
      }
      v27 = 1.0;
      v28 = 0.0;
      v29 = v88;
      v30 = 0;
      v31 = v87;
      v32 = (v88 - v87) * 0.125;
      v107 = v87 - v32;
      v108 = v32 + v88;
      v33 = v107;
      v100 = v107;
      v115 = v108 - v107;
      *(float *)&v85 = v115 * v115;
      v78 = 1.0 / v115;
      v34 = v78;
      if ( a5 >= 4 )
      {
        v35 = *(float *)&v85;
        v36 = (char *)v116 - v12;
        v37 = v12 + 8;
        v79 = &v117[-v12];
        v38 = &v116[0].m128_i8[-v84 + 4];
        LODWORD(v86) = &v117[-v84 + 4];
        do
        {
          v39 = v116[0].m128_f32[v30] - v33;
          v30 += 4;
          v37 += 16;
          *(&v113 + v30) = v39 * v34;
          v116[15].m128_f32[v30] = *(float *)(v37 - 24) * v35;
          *(&v114 + v30) = (*(&v114 + v30) - v33) * v34;
          v116[15].m128_f32[v30 + 1] = *(float *)(v37 - 20) * v35;
          *(float *)&v36[v37 - 16] = (*(float *)&v36[v37 - 16] - v33) * v34;
          *(float *)&v79[v37 - 16] = *(float *)(v37 - 16) * v35;
          v40 = v86;
          *(float *)&v38[v37 - 16] = (*(float *)&v38[v37 - 16] - v33) * v34;
          *(float *)(LODWORD(v40) + v37 - 16) = *(float *)(v37 - 12) * v35;
        }
        while ( v30 < a5 - 3 );
        v12 = v84;
        v28 = 0.0;
      }
      if ( v30 < a5 )
      {
        v41 = *(float *)&v85;
        do
        {
          v42 = &v116[0].m128_f32[v30++];
          *v42 = (*v42 - v33) * v34;
          v116[15].m128_f32[v30 + 3] = *(float *)((char *)v42 + v12 - (_DWORD)v116) * v41;
        }
        while ( v30 < a5 );
        v28 = 0.0;
      }
      v87 = (v31 - v33) * v34;
      v88 = (v29 - v33) * v34;
      *(float *)&v85 = 128000.0;
      v43 = v87 - 0.05000000074505806;
      if ( v43 <= 0.0 )
        v43 = 0.0;
      v80 = v43;
      v44 = v88 + 0.05000000074505806;
      if ( v44 < 1.0 )
        v27 = v44;
      v45 = v28;
      v46 = v27;
      v47 = v45;
      v48 = 8;
      *(float *)&v95 = v46;
      v49 = v80;
      v81 = 8;
      v86 = v49;
      for ( i = *(float *)&v95; ; i = *(float *)&v95 )
      {
        while ( 1 )
        {
          v70 = v47;
          v71 = sub_101D9AE0((int)v120, v116, (int)v117, v70, LODWORD(v86), LODWORD(i), a5, a6);
          if ( *(float *)&v85 > (double)v71 )
          {
            *(float *)&v85 = v71;
            v93 = v86;
            v94 = i;
          }
          --v48;
          i = i - 0.02500000037252903;
          if ( !v48 )
            break;
          v47 = 0.0;
        }
        v50 = v81-- == 1;
        v86 = v86 + 0.02500000037252903;
        if ( v50 )
          break;
        v47 = 0.0;
        v48 = 8;
      }
      v93 = v93 * v115 + v100;
      v94 = v100 + v115 * v94;
      if ( v101 <= *(float *)&v85 + 0.001 )
        break;
      v101 = *(float *)&v85;
      v110 = v89;
      v51 = v109;
      v111 = v90;
      v112 = v91;
      v113 = v93;
      v114 = v94;
      v52 = (double)(a6 - 1);
      v72 = (v94 - v93) / v52;
      v73 = 1.0 / v72;
      v82 = 1.0 / v52;
      *(float *)&v95 = v52 * 0.5;
      if ( v109 > 0 )
      {
        a1.m128_f32[0] = (float)(a6 - 1);
        v53 = _mm_shuffle_ps((__m128)LODWORD(v93), (__m128)LODWORD(v93), 0);
        v54 = _mm_shuffle_ps((__m128)LODWORD(v73), (__m128)LODWORD(v73), 0);
        v55 = _mm_shuffle_ps((__m128)LODWORD(v95), (__m128)LODWORD(v95), 0);
        v56 = _mm_shuffle_ps((__m128)LODWORD(v82), (__m128)LODWORD(v82), 0);
        a1 = _mm_shuffle_ps(a1, a1, 0);
        v57 = 0;
        do
        {
          *(__m128 *)&v118[v57] = _mm_mul_ps(
                                    _mm_sub_ps(
                                      _mm_min_ps(
                                        _mm_max_ps(
                                          _mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(_mm_sub_ps(*(__m128 *)&v119[v57], v53), v54))),
                                          (__m128)0LL),
                                        a1),
                                      v55),
                                    v56);
          v57 += 4;
          --v51;
        }
        while ( v51 );
      }
      v58 = 0;
      *(float *)&v85 = 0.0;
      v98 = 0.0;
      v97 = 0.0;
      v96 = 0.0;
      v59 = (float *)&v124;
      do
      {
        v60 = v118[v58];
        v61 = v84 - (_DWORD)v118 + 4 * v58++;
        v59 += 4;
        v74 = *(float *)((char *)v118 + v61) * v60;
        *(float *)&v85 = v60 * v74 + *(float *)&v85;
        v96 = *(v59 - 5) * v74 + v96;
        v97 = *(v59 - 4) * v74 + v97;
        v98 = v74 * *(v59 - 3) + v98;
      }
      while ( v58 < a5 );
      v91 = 0.0;
      v90 = 0.0;
      *(float *)&v89 = 0.0;
      v62 = *(float *)&v85;
      if ( *(float *)&v85 > 0.0 )
      {
        *(float *)&v89 = v96 / v62;
        v90 = v97 / v62;
        v91 = v98 / v62;
        v100 = v90;
        v95 = *(float *)&v89;
        v85 = v91;
        v75 = v90 * v90 + *(float *)&v89 * *(float *)&v89 + v91 * v91;
        v76 = sqrt(v75);
        *(float *)&v89 = *(float *)&v89 / v76;
        v90 = v90 / v76;
        v91 = v91 / v76;
      }
      v12 = v84;
    }
    v63 = 0;
    v64 = *(float *)&v110;
    v65 = *(float *)&v103;
    v66 = v111;
    v67 = v104;
    v68 = v112;
    v100 = v105;
    do
    {
      v69 = *(float *)((char *)&v113 + v63 * 4);
      *(float *)&(&v102)[++v63] = (v64 * v69 + v65) * 255.0;
      *(float *)((char *)&v104 + v63 * 4) = (v66 * v69 + v67) * 255.0;
      v106[v63] = (v69 * v68 + v100) * 255.0;
    }
    while ( v63 < 2 );
  }
  sub_101DB0C0(a10, (float *)&v110, (int)&v103, 0.0, 255.0, a11, a12);
  if ( a7 )
    sub_101DF1E0((int)v99, (int)&v110, a3, v84, a5, a6, v102, a10, a11, a12, a8);
  else
    sub_101DDE50(v99, (int)&v110, a3, v84, a5, a6, v102, a10, a11, a12, a8);
}
