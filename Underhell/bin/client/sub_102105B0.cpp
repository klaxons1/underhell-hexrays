int __thiscall sub_102105B0(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  __m128 **v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // kr00_4
  double v11; // st7
  double v12; // st7
  __m128 v13; // xmm0
  __m128 *v14; // esi
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  unsigned int v19; // ecx
  unsigned int v20; // kr04_4
  __m128 v21; // xmm0
  int result; // eax
  __m128 v23; // xmm0
  int v24; // edi
  __m128 v25; // xmm5
  __m128 v26; // xmm0
  __m128 v27; // xmm6
  __m128 v28; // xmm2
  float v29; // xmm7_4
  __m128 v30; // xmm4
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm7
  __m128 v36; // xmm1
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm6
  __m128 v40; // xmm5
  __m128 v41; // xmm3
  __int32 v42; // edx
  bool v43; // cc
  __m128 v44; // xmm1
  __int32 v45; // edi
  __m128 *v46; // eax
  __m128 v47; // xmm7
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  __m128 v50; // xmm5
  __m128 v51; // xmm4
  __m128 v52; // xmm0
  __m128 v53; // xmm2
  __m128 v54; // xmm3
  __m128 v55; // xmm1
  __m128 v56; // xmm4
  __m128 v57; // xmm7
  __m128 v58; // xmm0
  __m128 v59; // xmm4
  __m128 v60; // xmm1
  __m128 v61; // xmm3
  __m128 v62; // xmm2
  __m128 v63; // xmm0
  __m128 v64; // xmm3
  __m128 v65; // xmm6
  __m128 v66; // xmm1
  __m128 v67; // xmm7
  __m128 v68; // xmm1
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __m128 v71; // xmm0
  __m128 v72; // xmm2
  __m128 v73; // xmm3
  __m128 v74; // xmm0
  __m128 v75; // xmm1
  __m128 v76; // xmm2
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  __m128 v79; // xmm2
  int v80; // eax
  int v81; // edi
  double v82; // st7
  __int32 v83; // eax
  double v84; // st6
  __m128 v85; // xmm0
  double v86; // st5
  __m128 *v87; // ecx
  double v88; // st1
  double v89; // st6
  double v90; // rt1
  double v91; // st1
  double v92; // st3
  double v93; // st4
  __m128 v94; // xmm0
  double v95; // st5
  __m128 v96; // xmm0
  float v97; // xmm1_4
  __m128 v98; // xmm0
  int v99; // ecx
  __m128 *v100; // ecx
  __m128 v101; // xmm0
  __m128 v102; // xmm0
  __m128 v103; // xmm0
  __m128 *v104; // ecx
  __m128 v105; // xmm0
  __m128 v106; // xmm0
  __m128 v107; // xmm0
  int v108; // eax
  __m128 *v109; // eax
  __m128 v110; // xmm0
  __m128 v111; // xmm0
  int v112; // eax
  double v113; // st7
  __m128 v114; // xmm6
  __m128 *v115; // eax
  __m128 v116; // xmm0
  __m128 v117; // xmm1
  float v118; // [esp+18h] [ebp-274h]
  int v119; // [esp+18h] [ebp-274h]
  unsigned int v120; // [esp+1Ch] [ebp-270h]
  int v121; // [esp+20h] [ebp-26Ch]
  int v122; // [esp+20h] [ebp-26Ch]
  float v123; // [esp+24h] [ebp-268h] BYREF
  float v124; // [esp+28h] [ebp-264h]
  float v125; // [esp+2Ch] [ebp-260h]
  float v126; // [esp+30h] [ebp-25Ch] BYREF
  float v127; // [esp+34h] [ebp-258h]
  float v128; // [esp+38h] [ebp-254h]
  float v129; // [esp+3Ch] [ebp-250h]
  unsigned int v130; // [esp+40h] [ebp-24Ch]
  __m128 *v131; // [esp+44h] [ebp-248h]
  float v132; // [esp+48h] [ebp-244h]
  float v133; // [esp+4Ch] [ebp-240h]
  float v134; // [esp+50h] [ebp-23Ch]
  _QWORD v135[3]; // [esp+54h] [ebp-238h]
  __m128 v136; // [esp+6Ch] [ebp-220h]
  __m128 v137; // [esp+7Ch] [ebp-210h]
  __int128 v138; // [esp+8Ch] [ebp-200h]
  __m128 v139; // [esp+9Ch] [ebp-1F0h]
  __m128 v140; // [esp+ACh] [ebp-1E0h]
  __m128 v141; // [esp+BCh] [ebp-1D0h]
  __m128 v142; // [esp+CCh] [ebp-1C0h]
  __m128 v143; // [esp+DCh] [ebp-1B0h]
  __m128 v144; // [esp+ECh] [ebp-1A0h]
  __m128 v145; // [esp+FCh] [ebp-190h]
  __m128 v146; // [esp+10Ch] [ebp-180h]
  int v147[6]; // [esp+124h] [ebp-168h] BYREF
  float v148; // [esp+13Ch] [ebp-150h]
  float v149; // [esp+140h] [ebp-14Ch]
  float v150; // [esp+144h] [ebp-148h]
  float v151; // [esp+150h] [ebp-13Ch]
  char v152; // [esp+15Bh] [ebp-131h]
  __m128 v153; // [esp+15Ch] [ebp-130h]
  __m128 v154; // [esp+16Ch] [ebp-120h]
  __m128 v155; // [esp+17Ch] [ebp-110h]
  __m128 v156; // [esp+18Ch] [ebp-100h]
  __m128 v157; // [esp+19Ch] [ebp-F0h]
  __m128 v158; // [esp+1ACh] [ebp-E0h]
  __m128 v159; // [esp+1BCh] [ebp-D0h]
  __m128 v160; // [esp+1CCh] [ebp-C0h]
  __m128 v161; // [esp+1DCh] [ebp-B0h]
  __m128 v162; // [esp+1ECh] [ebp-A0h]
  __m128 v163; // [esp+1FCh] [ebp-90h]
  __m128 v164; // [esp+20Ch] [ebp-80h]
  __m128 v165; // [esp+21Ch] [ebp-70h]
  __m128 v166; // [esp+22Ch] [ebp-60h]
  __m128 v167; // [esp+23Ch] [ebp-50h]
  __m128 v168; // [esp+24Ch] [ebp-40h]
  __m128 v169; // [esp+26Ch] [ebp-20h]

  v6 = *(_DWORD *)(a2 + 6004);
  if ( v6 )
    v8 = (__m128 **)(v6 + 5996);
  else
    v8 = (__m128 **)(a2 + 5996);
  if ( !*v8 )
  {
    v9 = sub_101F8C60(7952);
    *v8 = (__m128 *)v9;
    *(_DWORD *)(v9 + 7872) = 0;
    (*v8)[492].m128_i32[0] = 0;
    (*v8)[492].m128_i32[1] = 0;
  }
  v10 = *(_DWORD *)(a2 + 6324);
  v118 = *(float *)(this + 64) * *(float *)(this + 64);
  v11 = *(float *)(this + 60) - *(float *)(this + 56);
  v129 = v11;
  v12 = *(float *)(this + 60) / (v11 + 0.00000011920929);
  v13 = 0;
  v13.m128_f32[0] = v129;
  v14 = *v8;
  v166 = _mm_shuffle_ps(v13, v13, 0);
  v15 = 0;
  v15.m128_f32[0] = 1.0 / *(float *)(a2 + 48);
  v16 = v15;
  v15.m128_i32[0] = *(_DWORD *)(this + 44);
  v159 = _mm_shuffle_ps(v16, v16, 0);
  v17 = 0;
  v17.m128_f32[0] = v15.m128_f32[0];
  v15.m128_i32[0] = *(_DWORD *)(this + 48);
  v163 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  v18.m128_f32[0] = v15.m128_f32[0];
  v15.m128_i32[0] = *(_DWORD *)(this + 52);
  v19 = *(_DWORD *)(a2 + 6068) + 48 * a3 * (v10 / 0xC);
  v164 = _mm_shuffle_ps(v18, v18, 0);
  v20 = *(_DWORD *)(a2 + 6332);
  *((float *)v135 + 1) = v12;
  v21 = 0;
  v21.m128_f32[0] = v15.m128_f32[0];
  v120 = *(_DWORD *)(a2 + 6076) + 48 * a3 * (v20 / 0xC);
  v121 = *(_DWORD *)(a2 + 6328) >> 2;
  result = *(_DWORD *)(a2 + 6072) + 16 * a3 * v121;
  v130 = v19;
  v131 = (__m128 *)result;
  v165 = _mm_shuffle_ps(v21, v21, 0);
  if ( a4 )
  {
    v23 = 0;
    v24 = 48 * v121;
    v23.m128_f32[0] = v118;
    v161 = _mm_shuffle_ps(v23, v23, 0);
    v119 = 48 * v121;
    LODWORD(v135[0]) = 16 * v121;
    while ( 1 )
    {
      v25 = *(__m128 *)v19;
      v26 = *(__m128 *)v120;
      v27 = *(__m128 *)(v19 + 16);
      v28 = *(__m128 *)(v120 + 16);
      v29 = *(float *)(this + 56);
      --a4;
      v138 = *(_OWORD *)(v19 + 32);
      v30 = _mm_sub_ps(v25, v26);
      v31 = _mm_sub_ps(v27, v28);
      v32 = _mm_sub_ps((__m128)v138, *(__m128 *)(v120 + 32));
      v33 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v30, v30), _mm_mul_ps(v31, v31)), _mm_mul_ps(v32, v32));
      v167 = _mm_mul_ps(_mm_sqrt_ps(v33), v159);
      v34 = 0;
      v34.m128_f32[0] = v29;
      v146 = _mm_shuffle_ps(v34, v34, 0);
      v35 = _mm_rsqrt_ps(v33);
      v36 = _mm_mul_ps(v32, v35);
      v37 = _mm_mul_ps(v31, v35);
      v38 = _mm_mul_ps(v35, v30);
      v169 = _mm_mul_ps(v37, v146);
      v39 = _mm_add_ps(v27, v169);
      v40 = _mm_add_ps(v25, _mm_mul_ps(v146, v38));
      v41 = _mm_add_ps((__m128)v138, _mm_mul_ps(v36, v146));
      v42 = 0;
      v43 = v14[492].m128_i32[0] <= 0;
      v145 = _mm_add_ps(_mm_mul_ps(v36, v166), v41);
      v44 = (__m128)xmmword_10394210;
      *(__m128 *)&v135[1] = v40;
      v136 = v39;
      v137 = v41;
      v143 = _mm_add_ps(_mm_mul_ps(v38, v166), v40);
      v144 = _mm_add_ps(_mm_mul_ps(v37, v166), v39);
      v138 = xmmword_10394210;
      if ( !v43 )
      {
        v45 = v14[492].m128_i32[0];
        v46 = v14 + 125;
        do
        {
          if ( v14[493].m128_i8[v42 + 8] )
          {
            v47 = v46[-123];
            v48 = v46[-1];
            v49 = v46[-124];
            v50 = v46[-2];
            v51 = v46[-125];
            v142 = *v46;
            v52 = _mm_sub_ps(v144, v49);
            v162 = v48;
            v53 = _mm_sub_ps(v48, v49);
            v54 = _mm_sub_ps(v142, v47);
            v155 = _mm_sub_ps(v145, v47);
            v154 = v52;
            v55 = _mm_sub_ps(v50, v51);
            v153 = _mm_sub_ps(v143, v51);
            v56 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v53, v53), _mm_mul_ps(v55, v55)), _mm_mul_ps(v54, v54));
            v57 = _mm_rcp_ps(v56);
            v58 = _mm_max_ps(
                    _mm_min_ps(
                      _mm_mul_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(v52, v53), _mm_mul_ps(v153, v55)), _mm_mul_ps(v155, v54)),
                        _mm_sub_ps(_mm_add_ps(v57, v57), _mm_mul_ps(_mm_mul_ps(v57, v57), v56))),
                      (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v59 = v46[-123];
            v160 = _mm_sub_ps(_mm_mul_ps(v53, v58), v154);
            v60 = _mm_sub_ps(_mm_mul_ps(v55, v58), v153);
            v168 = _mm_sub_ps(_mm_mul_ps(v54, v58), v155);
            v61 = v46[-124];
            v158 = _mm_sub_ps(v137, v59);
            v62 = _mm_sub_ps(v162, v61);
            v63 = _mm_sub_ps(v136, v61);
            v64 = _mm_sub_ps(v142, v59);
            v65 = v60;
            v66 = v46[-125];
            v67 = _mm_sub_ps(*(__m128 *)&v135[1], v66);
            v68 = _mm_sub_ps(v50, v66);
            v69 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v62, v62), _mm_mul_ps(v68, v68)), _mm_mul_ps(v64, v64));
            v156 = v67;
            v157 = v63;
            v70 = _mm_rcp_ps(v69);
            v71 = _mm_max_ps(
                    _mm_min_ps(
                      _mm_mul_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(v63, v62), _mm_mul_ps(v67, v68)), _mm_mul_ps(v158, v64)),
                        _mm_sub_ps(_mm_add_ps(v70, v70), _mm_mul_ps(_mm_mul_ps(v70, v70), v69))),
                      (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v72 = _mm_sub_ps(_mm_mul_ps(v62, v71), v157);
            v73 = _mm_sub_ps(_mm_mul_ps(v64, v71), v158);
            v74 = _mm_sub_ps(_mm_mul_ps(v68, v71), v67);
            v75 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v73, v73), _mm_mul_ps(v72, v72)), _mm_mul_ps(v74, v74));
            v40 = *(__m128 *)&v135[1];
            v76 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v168, v168), _mm_mul_ps(v160, v160)), _mm_mul_ps(v65, v65));
            v39 = v136;
            v77 = _mm_max_ps(v75, v76);
            v78 = _mm_cmple_ps(v77, (__m128)v138);
            v44 = _mm_or_ps(_mm_andnot_ps((__m128)v138, v78), _mm_and_ps(v77, (__m128)v138));
            v139 = _mm_or_ps(_mm_and_ps(v46[121], v78), _mm_andnot_ps(v78, v139));
            v41 = v137;
            v140 = _mm_or_ps(_mm_and_ps(v46[122], v78), _mm_andnot_ps(v78, v140));
            v79 = _mm_or_ps(_mm_and_ps(v46[123], v78), _mm_andnot_ps(v78, v141));
            v138 = (__int128)v44;
            v141 = v79;
          }
          ++v42;
          v46 += 3;
        }
        while ( v42 < v45 );
        v24 = v119;
      }
      v80 = _mm_movemask_ps(_mm_cmplt_ps(v161, v44));
      v122 = v80;
      if ( v80 )
        break;
LABEL_31:
      v114 = _mm_mul_ps(_mm_sub_ps(v39, v140), v164);
      v115 = v131;
      v120 += v24;
      v116 = _mm_mul_ps(_mm_sub_ps(v40, v139), v163);
      v117 = _mm_mul_ps(_mm_sub_ps(v41, v141), v165);
      *v131 = _mm_div_ps(
                _mm_add_ps(
                  _mm_sqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v114, v114), _mm_mul_ps(v116, v116)), _mm_mul_ps(v117, v117))),
                  v146),
                _mm_add_ps((__m128)xmmword_10394200, v167));
      result = (int)v115 + LODWORD(v135[0]);
      v19 += v24;
      v130 = v19;
      v131 = (__m128 *)result;
      if ( !a4 )
        return result;
    }
    v81 = 0;
    while ( 1 )
    {
      if ( ((1 << v81) & v80) == 0 )
        goto LABEL_29;
      v126 = *((float *)&v135[1] + v81);
      v127 = v136.m128_f32[v81];
      v128 = v137.m128_f32[v81];
      v123 = v143.m128_f32[v81];
      v124 = v144.m128_f32[v81];
      v125 = v145.m128_f32[v81];
      v148 = flt_103EE008;
      v149 = flt_103EE00C;
      v150 = flt_103EE010;
      (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, int *))(**((_DWORD **)off_103EE614 + 60)
                                                                                   + 24))(
        *((_DWORD *)off_103EE614 + 60),
        &v126,
        &v123,
        1,
        0,
        *(_DWORD *)(this + 68),
        v147);
      v82 = v151;
      if ( v151 < 1.0 - *((float *)v135 + 1) || v152 )
        break;
      if ( 0.0 == v129 )
      {
        v113 = 0.0;
        goto LABEL_28;
      }
      v83 = v14[492].m128_i32[1];
      v84 = v123;
      v85 = 0;
      v86 = v126;
      v14[493].m128_i8[v83 + 8] = 1;
      v87 = &v14[3 * v83 + 246];
      v88 = v84 - v86;
      v89 = v128;
      v90 = v88 * v82;
      v91 = v125 - v128;
      v92 = v86 + v90;
      v132 = v92;
      v85.m128_f32[0] = v132;
      v93 = v127 + (v124 - v127) * v82;
      *v87 = _mm_shuffle_ps(v85, v85, 0);
      v94 = 0;
      v133 = v93;
      v94.m128_f32[0] = v133;
      v95 = v89 + v82 * v91;
      v87[1] = _mm_shuffle_ps(v94, v94, 0);
      v96 = 0;
      v134 = v95;
      v96.m128_f32[0] = v134;
      v139.m128_f32[v81] = v92;
      v87[2] = _mm_shuffle_ps(v96, v96, 0);
      v140.m128_f32[v81] = v93;
      v97 = v148;
      v98 = 0;
      v141.m128_f32[v81] = v95;
      v98.m128_f32[0] = v97;
      v99 = 3 * v83 + 369;
      v14[v99] = _mm_shuffle_ps(v98, v98, 0);
      v100 = &v14[v99];
      v101 = 0;
      v101.m128_f32[0] = v149;
      v100[1] = _mm_shuffle_ps(v101, v101, 0);
      v102 = 0;
      v102.m128_f32[0] = v150;
      v100[2] = _mm_shuffle_ps(v102, v102, 0);
      v103 = 0;
      v103.m128_f32[0] = v126;
      v104 = &v14[3 * v83];
      *v104 = _mm_shuffle_ps(v103, v103, 0);
      v105 = 0;
      v105.m128_f32[0] = v127;
      v104[1] = _mm_shuffle_ps(v105, v105, 0);
      v106 = 0;
      v106.m128_f32[0] = v128;
      v104[2] = _mm_shuffle_ps(v106, v106, 0);
      v107 = 0;
      v107.m128_f32[0] = v123;
      v108 = 3 * v83 + 123;
      v14[v108] = _mm_shuffle_ps(v107, v107, 0);
      v109 = &v14[v108];
      v110 = 0;
      v110.m128_f32[0] = v124;
      v109[1] = _mm_shuffle_ps(v110, v110, 0);
      v111 = 0;
      v111.m128_f32[0] = v125;
      v109[2] = _mm_shuffle_ps(v111, v111, 0);
      if ( ++v14[492].m128_i32[1] > *(_DWORD *)(this + 76) )
        v14[492].m128_i32[1] = 0;
      v112 = v14[492].m128_i32[0] + 1;
      if ( *(_DWORD *)(this + 76) < v112 )
        v112 = *(_DWORD *)(this + 76);
      v14[492].m128_i32[0] = v112;
LABEL_29:
      if ( ++v81 >= 4 )
      {
        v41 = v137;
        v39 = v136;
        v40 = *(__m128 *)&v135[1];
        v19 = v130;
        v24 = v119;
        goto LABEL_31;
      }
      v80 = v122;
    }
    v113 = 0.0;
LABEL_28:
    *((float *)&v135[1] + v81) = v113;
    v136.m128_f32[v81] = v113;
    v137.m128_f32[v81] = v113;
    v139.m128_f32[v81] = v113;
    v140.m128_f32[v81] = v113;
    v141.m128_f32[v81] = v113;
    v146.m128_f32[v81] = v113;
    goto LABEL_29;
  }
  return result;
}
