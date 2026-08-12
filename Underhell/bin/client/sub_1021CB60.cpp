__m128 *__thiscall sub_1021CB60(int this, _DWORD *a2, int a3, int a4)
{
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // eax
  double v10; // st4
  int v11; // eax
  double v12; // st3
  double v13; // st2
  int v14; // eax
  double v15; // st1
  int v16; // eax
  double v17; // st0
  int v18; // eax
  double v19; // st0
  int v20; // eax
  double v21; // st0
  double v22; // st6
  double v23; // st5
  double v24; // rt2
  double v25; // st4
  double v26; // st2
  __m128 *v27; // edi
  __m128 *v28; // esi
  double v29; // rtt
  unsigned int v30; // kr00_4
  double v31; // st6
  double v32; // st5
  double v33; // st4
  __int64 v34; // rax
  bool v35; // zf
  double v36; // st7
  double v37; // st5
  double v38; // st6
  __m128 v39; // xmm0
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  int v47; // edx
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  __m128 v50; // xmm0
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  __m128 v55; // xmm1
  __m128 v56; // xmm2
  char v57; // al
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  __m128 v63; // xmm3
  __m128 v64; // xmm2
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __m128 v67; // xmm3
  __m128 v68; // xmm2
  __m128 v69; // xmm0
  __m128 v70; // xmm1
  __m128 v71; // xmm3
  __m128 v72; // xmm2
  __m128 v73; // xmm0
  __m128 v74; // xmm1
  __m128 v75; // xmm3
  __m128 v76; // xmm3
  __m128 v77; // xmm0
  __m128 v78; // xmm1
  __m128 v79; // xmm2
  __m128 v80; // xmm3
  __m128 v81; // xmm1
  __m128 v82; // xmm2
  __m128 *v83; // eax
  __m128 *result; // eax
  __m128 v85; // xmm1
  __m128 v86; // xmm0
  __m128 v87; // xmm1
  __m128 v88; // xmm3
  __m128 v89; // xmm0
  __m128 v90; // xmm1
  __m128 v91; // xmm2
  __m128 v92; // xmm3
  __m128 v93; // xmm1
  __m128 v94; // xmm2
  __m128 *v95; // eax
  char v96; // [esp+Ch] [ebp-344h]
  char v97; // [esp+Ch] [ebp-344h]
  char v98; // [esp+Ch] [ebp-344h]
  int v99; // [esp+20h] [ebp-330h]
  int v100; // [esp+20h] [ebp-330h]
  int v101; // [esp+24h] [ebp-32Ch] BYREF
  unsigned int v102; // [esp+28h] [ebp-328h]
  int v103; // [esp+2Ch] [ebp-324h]
  int v104; // [esp+30h] [ebp-320h]
  float v105; // [esp+34h] [ebp-31Ch]
  float v106; // [esp+38h] [ebp-318h]
  float v107; // [esp+3Ch] [ebp-314h]
  float v108; // [esp+40h] [ebp-310h]
  float v109; // [esp+44h] [ebp-30Ch]
  float v110; // [esp+48h] [ebp-308h]
  float v111; // [esp+4Ch] [ebp-304h]
  float v112; // [esp+50h] [ebp-300h]
  float v113; // [esp+54h] [ebp-2FCh]
  __m128 *v114; // [esp+58h] [ebp-2F8h]
  __m128 v115; // [esp+60h] [ebp-2F0h] BYREF
  __m128 v116; // [esp+70h] [ebp-2E0h]
  __m128 v117; // [esp+80h] [ebp-2D0h]
  float v118; // [esp+98h] [ebp-2B8h]
  float v119; // [esp+9Ch] [ebp-2B4h]
  float v120; // [esp+A0h] [ebp-2B0h]
  float v121; // [esp+A4h] [ebp-2ACh]
  float v122; // [esp+A8h] [ebp-2A8h]
  float v123; // [esp+ACh] [ebp-2A4h]
  __m128 v124; // [esp+B0h] [ebp-2A0h] BYREF
  __m128 v125; // [esp+C0h] [ebp-290h]
  __m128 v126; // [esp+D0h] [ebp-280h]
  __m128 v127; // [esp+E0h] [ebp-270h]
  __m128 v128; // [esp+F0h] [ebp-260h]
  __m128 v129; // [esp+100h] [ebp-250h]
  __m128 v130; // [esp+110h] [ebp-240h]
  __m128 v131; // [esp+120h] [ebp-230h]
  __m128 v132; // [esp+130h] [ebp-220h]
  float v133[22]; // [esp+148h] [ebp-208h] BYREF
  __m128 v134; // [esp+1A0h] [ebp-1B0h]
  __m128 v135; // [esp+1B0h] [ebp-1A0h]
  __m128 v136; // [esp+1C0h] [ebp-190h]
  float v137[22]; // [esp+1D8h] [ebp-178h] BYREF
  __m128 v138; // [esp+230h] [ebp-120h]
  __m128 v139; // [esp+240h] [ebp-110h]
  __m128 v140; // [esp+250h] [ebp-100h]
  float v141[22]; // [esp+268h] [ebp-E8h] BYREF
  __m128 v142; // [esp+2C0h] [ebp-90h]
  __m128 v143; // [esp+2D0h] [ebp-80h]
  __m128 v144; // [esp+2E0h] [ebp-70h]
  float v145[22]; // [esp+2F8h] [ebp-58h] BYREF

  v5 = 17 * *(_DWORD *)(this + 400);
  v6 = *(float *)&a2[v5 + 22];
  v118 = *(float *)&a2[v5 + 22];
  v7 = *(float *)&a2[v5 + 23];
  v119 = *(float *)&a2[v5 + 23];
  v8 = *(float *)&a2[v5 + 24];
  v9 = *(_DWORD *)(this + 404);
  v120 = *(float *)&a2[v5 + 24];
  v10 = *(float *)&a2[17 * v9 + 22];
  v11 = (int)&a2[17 * v9 + 22];
  v121 = v10;
  v12 = *(float *)(v11 + 4);
  v122 = *(float *)(v11 + 4);
  v13 = *(float *)(v11 + 8);
  v14 = *(_DWORD *)(this + 408);
  v123 = v13;
  v15 = *(float *)&a2[17 * v14 + 22];
  v16 = (int)&a2[17 * v14 + 22];
  v105 = v15;
  v106 = *(float *)(v16 + 4);
  v17 = *(float *)(v16 + 8);
  v18 = *(_DWORD *)(this + 412);
  v107 = v17;
  v19 = *(float *)&a2[17 * v18 + 22];
  v20 = (int)&a2[17 * v18 + 22];
  v111 = v19;
  v112 = *(float *)(v20 + 4);
  v21 = *(float *)(v20 + 8);
  qmemcpy(v133, (const void *)(this + 48), sizeof(v133));
  v113 = v21;
  v108 = v6 + *(float *)(this + 416);
  v22 = v7 + *(float *)(this + 420);
  v23 = v8 + *(float *)(this + 424);
  v133[4] = v108;
  qmemcpy(v137, (const void *)(this + 136), sizeof(v137));
  v133[5] = v22;
  v24 = v13;
  v133[6] = v23;
  v25 = v10 + *(float *)(this + 428);
  qmemcpy(v141, (const void *)(this + 224), sizeof(v141));
  qmemcpy(v145, (const void *)(this + 224), sizeof(v145));
  v26 = *(float *)(this + 436);
  v27 = (__m128 *)a2[1523];
  v28 = (__m128 *)a2[1517];
  v29 = v12 + *(float *)(this + 432);
  v30 = a2[1587];
  v137[4] = v25;
  v137[5] = v29;
  v137[6] = v24 + v26;
  v31 = v15 + *(float *)(this + 440);
  v32 = *(float *)(this + 444) + v106;
  v33 = *(float *)(this + 448);
  v102 = v30 / 0xC;
  v34 = 2863311531LL * (unsigned int)a2[1581];
  v141[4] = v31;
  v141[5] = v32;
  v141[6] = v33 + v107;
  v35 = *(_BYTE *)(this + 516) == 0;
  v36 = v21 + *(float *)(this + 460);
  v37 = v111 + *(float *)(this + 452);
  v38 = *(float *)(this + 456) + v112;
  v114 = v27;
  v104 = HIDWORD(v34) >> 3;
  v145[4] = v37;
  v145[5] = v38;
  v145[6] = v36;
  if ( !v35 )
  {
    v101 = 0;
    (*(void (__thiscall **)(_DWORD, float *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
      *((_DWORD *)off_103EE614 + 60),
      &v133[4],
      &v101);
    v133[1] = (double)(unsigned __int8)v101 * 0.0039215689;
    v133[2] = (double)BYTE1(v101) * 0.0039215689;
    v133[3] = 0.0039215689 * (double)BYTE2(v101);
  }
  if ( *(_BYTE *)(this + 517) )
  {
    v101 = 0;
    (*(void (__thiscall **)(_DWORD, float *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
      *((_DWORD *)off_103EE614 + 60),
      &v137[4],
      &v101);
    v137[1] = (double)(unsigned __int8)v101 * 0.0039215689;
    v137[2] = (double)BYTE1(v101) * 0.0039215689;
    v137[3] = 0.0039215689 * (double)BYTE2(v101);
  }
  if ( *(_BYTE *)(this + 518) )
  {
    v101 = 0;
    (*(void (__thiscall **)(_DWORD, float *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
      *((_DWORD *)off_103EE614 + 60),
      &v141[4],
      &v101);
    v141[1] = (double)(unsigned __int8)v101 * 0.0039215689;
    v141[2] = (double)BYTE1(v101) * 0.0039215689;
    v141[3] = 0.0039215689 * (double)BYTE2(v101);
  }
  if ( *(_BYTE *)(this + 519) )
  {
    v101 = 0;
    (*(void (__thiscall **)(_DWORD, float *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
      *((_DWORD *)off_103EE614 + 60),
      &v145[4],
      &v101);
    v145[1] = (double)(unsigned __int8)v101 * 0.0039215689;
    v145[2] = (double)BYTE1(v101) * 0.0039215689;
    v145[3] = 0.0039215689 * (double)BYTE2(v101);
  }
  sub_101F32D0(v133);
  sub_101F32D0(v137);
  sub_101F32D0(v141);
  sub_101F32D0(v145);
  v35 = *(_BYTE *)(this + 520) == 0;
  v108 = *(float *)(this + 44);
  v39 = 0;
  v109 = *(float *)(this + 44);
  v39.m128_f32[0] = v108;
  v110 = *(float *)(this + 44);
  v127 = _mm_shuffle_ps(v39, v39, 0);
  v40 = 0;
  v40.m128_f32[0] = v109;
  v128 = _mm_shuffle_ps(v40, v40, 0);
  v41 = 0;
  v41.m128_f32[0] = v110;
  v129 = _mm_shuffle_ps(v41, v41, 0);
  if ( v35 )
  {
    v100 = a2[8];
    v101 = 48 * v102;
    v103 = 48 * v104;
    v102 *= 48;
    do
    {
      v85 = v27[1];
      v115 = _mm_mul_ps(*v27, v127);
      v86 = _mm_mul_ps(v128, v85);
      v87 = v27[2];
      v116 = v86;
      v117 = _mm_mul_ps(v129, v87);
      sub_101F37B0(v133, v28, &v115);
      sub_101F37B0(v137, v28, &v115);
      sub_101F37B0(v141, v28, &v115);
      sub_101F37B0(v145, v28, &v115);
      if ( *(_BYTE *)(this + 526) )
      {
        v88 = v27[2];
        v89 = _mm_max_ps(v115, *v27);
        v90 = _mm_max_ps(v116, v27[1]);
      }
      else
      {
        v88 = (__m128)xmmword_10394140;
        v89 = _mm_max_ps(v115, (__m128)xmmword_10394140);
        v90 = _mm_max_ps(v116, (__m128)xmmword_10394140);
      }
      v91 = _mm_max_ps(v117, v88);
      if ( *(_BYTE *)(this + 527) )
      {
        v92 = *v27;
        v93 = _mm_min_ps(v90, v27[1]);
        v94 = _mm_min_ps(v91, v27[2]);
      }
      else
      {
        v92 = (__m128)xmmword_10394150;
        v93 = _mm_min_ps(v90, (__m128)xmmword_10394150);
        v94 = _mm_min_ps(v91, (__m128)xmmword_10394150);
      }
      v95 = v114;
      v28 = (__m128 *)((char *)v28 + v103);
      v27 = (__m128 *)((char *)v27 + v102);
      *v114 = _mm_min_ps(v89, v92);
      v95[1] = v93;
      v95[2] = v94;
      result = (__m128 *)((char *)v95 + v101);
      v35 = v100-- == 1;
      v114 = result;
    }
    while ( !v35 );
  }
  else
  {
    v42 = 0;
    v42.m128_f32[0] = v118;
    v138 = _mm_shuffle_ps(v42, v42, 0);
    v43 = 0;
    v43.m128_f32[0] = v119;
    v139 = _mm_shuffle_ps(v43, v43, 0);
    v44 = 0;
    v44.m128_f32[0] = v120;
    v140 = _mm_shuffle_ps(v44, v44, 0);
    v45 = 0;
    v45.m128_f32[0] = v121;
    v134 = _mm_shuffle_ps(v45, v45, 0);
    v46 = 0;
    v46.m128_f32[0] = v122;
    v135 = _mm_shuffle_ps(v46, v46, 0);
    v47 = a2[8];
    v48 = 0;
    v48.m128_f32[0] = v123;
    v136 = _mm_shuffle_ps(v48, v48, 0);
    v49 = 0;
    v49.m128_f32[0] = v105;
    v142 = _mm_shuffle_ps(v49, v49, 0);
    v50 = 0;
    v50.m128_f32[0] = v106;
    v143 = _mm_shuffle_ps(v50, v50, 0);
    v51 = 0;
    v51.m128_f32[0] = v107;
    v144 = _mm_shuffle_ps(v51, v51, 0);
    v52 = 0;
    v52.m128_f32[0] = v111;
    v130 = _mm_shuffle_ps(v52, v52, 0);
    v53 = 0;
    v53.m128_f32[0] = v112;
    v101 = 48 * v102;
    v131 = _mm_shuffle_ps(v53, v53, 0);
    v54 = 0;
    v54.m128_f32[0] = v113;
    v132 = _mm_shuffle_ps(v54, v54, 0);
    v99 = v47;
    v103 = 48 * v104;
    v102 *= 48;
    do
    {
      v55 = v27[1];
      v56 = _mm_sub_ps(*v28, v138);
      v57 = *(_BYTE *)(this + 521);
      v115 = _mm_mul_ps(*v27, v127);
      v58 = _mm_mul_ps(v128, v55);
      v59 = v27[2];
      v116 = v58;
      v60 = _mm_mul_ps(v129, v59);
      v61 = _mm_sub_ps(v28[2], v140);
      v117 = v60;
      v62 = _mm_sub_ps(v28[1], v139);
      v63 = _mm_rsqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v56, v56), _mm_mul_ps(v62, v62)), _mm_mul_ps(v61, v61)));
      v124 = _mm_mul_ps(v63, v56);
      v125 = _mm_mul_ps(v62, v63);
      v126 = _mm_mul_ps(v61, v63);
      sub_101F3480((int)v133, v28, &v124, &v115, v57);
      v64 = _mm_sub_ps(*v28, v134);
      v65 = _mm_sub_ps(v28[1], v135);
      v66 = _mm_sub_ps(v28[2], v136);
      v96 = *(_BYTE *)(this + 521);
      v67 = _mm_rsqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v64, v64), _mm_mul_ps(v65, v65)), _mm_mul_ps(v66, v66)));
      v124 = _mm_mul_ps(v67, v64);
      v125 = _mm_mul_ps(v65, v67);
      v126 = _mm_mul_ps(v66, v67);
      sub_101F3480((int)v137, v28, &v124, &v115, v96);
      v68 = _mm_sub_ps(*v28, v142);
      v69 = _mm_sub_ps(v28[1], v143);
      v70 = _mm_sub_ps(v28[2], v144);
      v97 = *(_BYTE *)(this + 521);
      v71 = _mm_rsqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v68, v68), _mm_mul_ps(v69, v69)), _mm_mul_ps(v70, v70)));
      v124 = _mm_mul_ps(v71, v68);
      v125 = _mm_mul_ps(v69, v71);
      v126 = _mm_mul_ps(v70, v71);
      sub_101F3480((int)v141, v28, &v124, &v115, v97);
      v72 = _mm_sub_ps(*v28, v130);
      v73 = _mm_sub_ps(v28[1], v131);
      v74 = _mm_sub_ps(v28[2], v132);
      v98 = *(_BYTE *)(this + 521);
      v75 = _mm_rsqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v72, v72), _mm_mul_ps(v73, v73)), _mm_mul_ps(v74, v74)));
      v124 = _mm_mul_ps(v75, v72);
      v125 = _mm_mul_ps(v73, v75);
      v126 = _mm_mul_ps(v74, v75);
      sub_101F3480((int)v145, v28, &v124, &v115, v98);
      if ( *(_BYTE *)(this + 526) )
      {
        v76 = v27[2];
        v77 = _mm_max_ps(v115, *v27);
        v78 = _mm_max_ps(v116, v27[1]);
      }
      else
      {
        v76 = (__m128)xmmword_10394140;
        v77 = _mm_max_ps(v115, (__m128)xmmword_10394140);
        v78 = _mm_max_ps(v116, (__m128)xmmword_10394140);
      }
      v79 = _mm_max_ps(v117, v76);
      if ( *(_BYTE *)(this + 527) )
      {
        v80 = *v27;
        v81 = _mm_min_ps(v78, v27[1]);
        v82 = _mm_min_ps(v79, v27[2]);
      }
      else
      {
        v80 = (__m128)xmmword_10394150;
        v81 = _mm_min_ps(v78, (__m128)xmmword_10394150);
        v82 = _mm_min_ps(v79, (__m128)xmmword_10394150);
      }
      v83 = v114;
      v28 = (__m128 *)((char *)v28 + v103);
      v27 = (__m128 *)((char *)v27 + v102);
      *v114 = _mm_min_ps(v77, v80);
      v83[1] = v81;
      v83[2] = v82;
      result = (__m128 *)((char *)v83 + v101);
      v35 = v99-- == 1;
      v114 = result;
    }
    while ( !v35 );
  }
  return result;
}
