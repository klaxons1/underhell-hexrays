void __thiscall sub_1020FC50(float *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  __m128 **v8; // esi
  unsigned int v9; // eax
  float v10; // xmm1_4
  __m128 *v11; // esi
  __m128 v12; // xmm0
  float v13; // xmm1_4
  double v14; // st7
  __m128 v15; // xmm0
  float v16; // xmm1_4
  double v17; // st7
  __m128 v18; // xmm0
  int v19; // edx
  __m128 v20; // xmm0
  int v21; // ecx
  float *v22; // eax
  int v23; // ebx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  float *v27; // ecx
  int v28; // ebx
  double v29; // st2
  double v30; // st7
  double v31; // st3
  double v32; // st4
  double v33; // st4
  int v34; // edx
  double v35; // st5
  double v36; // st7
  float *v37; // ebx
  __m128 v38; // xmm0
  double v39; // st7
  double v40; // st2
  double v41; // rt2
  double v42; // st2
  double v43; // rtt
  double v44; // st2
  __m128 v45; // xmm3
  __m128 v46; // xmm5
  __int32 v47; // eax
  bool v48; // cc
  __m128 v49; // xmm0
  __m128 v50; // xmm3
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  __m128 *v57; // ecx
  __m128 v58; // xmm6
  __m128 v59; // xmm2
  __m128 v60; // xmm3
  __m128 v61; // xmm5
  __m128 v62; // xmm4
  __m128 v63; // xmm7
  __m128 v64; // xmm2
  __m128 v65; // xmm3
  __m128 v66; // xmm1
  __m128 v67; // xmm4
  __m128 v68; // xmm6
  __m128 v69; // xmm0
  __m128 v70; // xmm4
  __m128 v71; // xmm1
  __m128 v72; // xmm3
  __m128 v73; // xmm2
  __m128 v74; // xmm0
  __m128 v75; // xmm3
  __m128 v76; // xmm6
  __m128 v77; // xmm1
  __m128 v78; // xmm7
  __m128 v79; // xmm1
  __m128 v80; // xmm4
  __m128 v81; // xmm5
  __m128 v82; // xmm0
  __m128 v83; // xmm7
  __m128 v84; // xmm4
  __m128 v85; // xmm0
  __m128 v86; // xmm3
  __m128 v87; // xmm2
  __m128 v88; // xmm1
  __m128 v89; // xmm0
  __m128 v90; // xmm0
  __m128 v91; // xmm0
  __m128 v92; // xmm0
  int v93; // eax
  double v94; // st7
  double v95; // st6
  __int32 v96; // eax
  double v97; // st5
  __m128 *v98; // ecx
  __m128 v99; // xmm0
  double v100; // st1
  double v101; // st6
  double v102; // rtt
  double v103; // st1
  double v104; // st5
  __m128 v105; // xmm1
  float v106; // xmm3_4
  __m128 v107; // xmm2
  __m128 v108; // xmm3
  int v109; // ecx
  __m128 v110; // xmm3
  __m128 v111; // xmm3
  __m128 v112; // xmm3
  __m128 *v113; // ecx
  __m128 v114; // xmm3
  __m128 v115; // xmm3
  __m128 v116; // xmm3
  int v117; // eax
  __m128 *v118; // eax
  __m128 v119; // xmm3
  __m128 v120; // xmm3
  float v121; // xmm4_4
  float v122; // xmm5_4
  __m128 v123; // xmm3
  __m128 v124; // xmm4
  __m128 v125; // xmm5
  int v126; // ebx
  int v127; // eax
  __m128 v128; // xmm0
  __m128 v129; // xmm1
  __m128 v130; // xmm2
  __m128 v131; // xmm3
  __m128 v132; // xmm0
  __m128 v133; // xmm1
  float v134; // [esp+0h] [ebp-244h]
  float v135; // [esp+1Ch] [ebp-228h] BYREF
  float v136; // [esp+20h] [ebp-224h]
  float v137; // [esp+24h] [ebp-220h]
  float v138; // [esp+28h] [ebp-21Ch]
  float v139; // [esp+2Ch] [ebp-218h] BYREF
  float v140; // [esp+30h] [ebp-214h]
  float v141; // [esp+34h] [ebp-210h]
  int v142; // [esp+38h] [ebp-20Ch]
  float v143; // [esp+3Ch] [ebp-208h]
  float v144; // [esp+40h] [ebp-204h] BYREF
  float v145; // [esp+44h] [ebp-200h]
  float v146; // [esp+48h] [ebp-1FCh]
  float v147; // [esp+4Ch] [ebp-1F8h]
  int v148; // [esp+50h] [ebp-1F4h]
  float *v149; // [esp+54h] [ebp-1F0h]
  float v150; // [esp+58h] [ebp-1ECh]
  float v151; // [esp+5Ch] [ebp-1E8h]
  float v152; // [esp+60h] [ebp-1E4h]
  float v153; // [esp+64h] [ebp-1E0h]
  float v154; // [esp+68h] [ebp-1DCh]
  float v155; // [esp+6Ch] [ebp-1D8h]
  float v156; // [esp+70h] [ebp-1D4h]
  __m128 v157; // [esp+74h] [ebp-1D0h]
  __m128 v158; // [esp+84h] [ebp-1C0h]
  __m128 v159; // [esp+94h] [ebp-1B0h]
  __m128 v160; // [esp+A4h] [ebp-1A0h]
  __m128 v161; // [esp+B4h] [ebp-190h]
  __m128 v162; // [esp+C4h] [ebp-180h]
  __m128 v163; // [esp+D4h] [ebp-170h]
  __m128 v164; // [esp+E4h] [ebp-160h]
  __m128 v165; // [esp+F4h] [ebp-150h]
  __int128 v166; // [esp+104h] [ebp-140h]
  int v167[6]; // [esp+11Ch] [ebp-128h] BYREF
  float v168; // [esp+134h] [ebp-110h]
  float v169; // [esp+138h] [ebp-10Ch]
  float v170; // [esp+13Ch] [ebp-108h]
  float v171; // [esp+148h] [ebp-FCh]
  char v172; // [esp+153h] [ebp-F1h]
  __m128 v173; // [esp+154h] [ebp-F0h]
  __m128 v174; // [esp+164h] [ebp-E0h]
  __m128 v175; // [esp+174h] [ebp-D0h]
  __m128 v176; // [esp+184h] [ebp-C0h]
  __m128 v177; // [esp+194h] [ebp-B0h]
  __m128 v178; // [esp+1A4h] [ebp-A0h]
  __m128 v179; // [esp+1B4h] [ebp-90h]
  __m128 v180; // [esp+1C4h] [ebp-80h]
  __m128 v181; // [esp+1D4h] [ebp-70h]
  __m128 v182; // [esp+1E4h] [ebp-60h]
  __m128 v183; // [esp+1F4h] [ebp-50h]
  __m128 v184; // [esp+204h] [ebp-40h]
  __m128 v185; // [esp+214h] [ebp-30h]
  __m128 v186; // [esp+224h] [ebp-20h]
  __m128 v187; // [esp+234h] [ebp-10h]

  v6 = *(_DWORD *)(a2 + 6004);
  v149 = this;
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
  v10 = this[11];
  v11 = *v8;
  v12 = 0;
  v138 = this[16] * this[16];
  v12.m128_f32[0] = v10;
  v13 = this[12];
  v14 = this[15] - this[14];
  v183 = _mm_shuffle_ps(v12, v12, 0);
  v15 = 0;
  v143 = v14;
  v15.m128_f32[0] = v13;
  v16 = this[13];
  v184 = _mm_shuffle_ps(v15, v15, 0);
  v17 = this[15] / (v14 + 0.00000011920929);
  v18 = 0;
  v18.m128_f32[0] = v16;
  v185 = _mm_shuffle_ps(v18, v18, 0);
  v153 = v17;
  if ( a4 )
  {
    v19 = a3 / 4;
    v20 = 0;
    v21 = a3 & 3;
    v20.m128_f32[0] = v138;
    v148 = a3 / 4;
    v142 = v21;
    v187 = _mm_shuffle_ps(v20, v20, 0);
    while ( 1 )
    {
      v22 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v21 + v19 * *(_DWORD *)(a2 + 6324)));
      v23 = v19 * *(_DWORD *)(a2 + 6332);
      v24 = *v22;
      v150 = *v22;
      v25 = v22[4];
      v151 = v22[4];
      v26 = v22[8];
      v152 = v22[8];
      v27 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v21 + v23));
      --a4;
      v28 = v19 * *(_DWORD *)(a2 + 6328);
      v29 = v24;
      v30 = v27[8];
      v31 = v29 - *v27;
      v32 = v27[4];
      v144 = v31;
      v33 = v25 - v32;
      v34 = *(_DWORD *)(a2 + 6072);
      v145 = v33;
      LODWORD(v138) = v34 + 4 * (v142 + v28);
      v35 = v26 - v30;
      v146 = v35;
      v134 = v33 * v33 + v31 * v31 + v35 * v35;
      v36 = off_103EDFE0(v134) / *(float *)(a2 + 48);
      v37 = v149;
      v38 = 0;
      v38.m128_f32[0] = v149[14];
      v165 = _mm_shuffle_ps(v38, v38, 0);
      v147 = v36;
      off_103EDFEC(&v144);
      v39 = v37[14];
      v40 = v39 * v144 + v150;
      v135 = v40;
      v41 = v40;
      v42 = v145 * v39 + v151;
      v136 = v42;
      v43 = v42;
      v44 = v39 * v146 + v152;
      v137 = v44;
      v45 = 0;
      v45.m128_f32[0] = v135;
      v46 = 0;
      v47 = 0;
      v48 = v11[492].m128_i32[0] <= 0;
      v139 = v41 + v144 * v143;
      v49 = 0;
      v49.m128_f32[0] = v136;
      v140 = v43 + v145 * v143;
      v46.m128_f32[0] = v137;
      v50 = _mm_shuffle_ps(v45, v45, 0);
      v51 = _mm_shuffle_ps(v49, v49, 0);
      v52 = _mm_shuffle_ps(v46, v46, 0);
      v141 = v44 + v146 * v143;
      v161 = v50;
      v53 = 0;
      v53.m128_f32[0] = v139;
      v180 = _mm_shuffle_ps(v53, v53, 0);
      v54 = 0;
      v54.m128_f32[0] = v140;
      v181 = _mm_shuffle_ps(v54, v54, 0);
      v55 = 0;
      v55.m128_f32[0] = v141;
      v56 = (__m128)xmmword_10394210;
      v162 = v51;
      v163 = v52;
      v182 = _mm_shuffle_ps(v55, v55, 0);
      v166 = xmmword_10394210;
      if ( !v48 )
      {
        v57 = v11 + 125;
        do
        {
          if ( v11[493].m128_i8[v47 + 8] )
          {
            v58 = v57[-123];
            v59 = v57[-1];
            v60 = v57[-124];
            v61 = v57[-2];
            v62 = v57[-125];
            v63 = _mm_sub_ps(v181, v60);
            v164 = *v57;
            v179 = v59;
            v64 = _mm_sub_ps(v59, v60);
            v65 = _mm_sub_ps(v164, v58);
            v175 = _mm_sub_ps(v182, v58);
            v173 = _mm_sub_ps(v180, v62);
            v174 = v63;
            v66 = _mm_sub_ps(v61, v62);
            v67 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v66, v66), _mm_mul_ps(v64, v64)), _mm_mul_ps(v65, v65));
            v68 = _mm_rcp_ps(v67);
            v69 = _mm_max_ps(
                    _mm_min_ps(
                      _mm_mul_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(v173, v66), _mm_mul_ps(v63, v64)), _mm_mul_ps(v175, v65)),
                        _mm_sub_ps(_mm_add_ps(v68, v68), _mm_mul_ps(_mm_mul_ps(v68, v68), v67))),
                      (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v70 = v57[-123];
            v160 = _mm_sub_ps(_mm_mul_ps(v64, v69), v63);
            v71 = _mm_sub_ps(_mm_mul_ps(v66, v69), v173);
            v186 = _mm_sub_ps(_mm_mul_ps(v65, v69), v175);
            v72 = v57[-124];
            v178 = _mm_sub_ps(v163, v70);
            v73 = _mm_sub_ps(v179, v72);
            v74 = _mm_sub_ps(v162, v72);
            v75 = _mm_sub_ps(v164, v70);
            v76 = v71;
            v77 = v57[-125];
            v78 = _mm_sub_ps(v161, v77);
            v79 = _mm_sub_ps(v61, v77);
            v80 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v73, v73), _mm_mul_ps(v79, v79)), _mm_mul_ps(v75, v75));
            v176 = v78;
            v177 = v74;
            v81 = _mm_rcp_ps(v80);
            v82 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v74, v73), _mm_mul_ps(v78, v79)), _mm_mul_ps(v178, v75));
            v83 = _mm_mul_ps(_mm_mul_ps(v81, v81), v80);
            v84 = _mm_add_ps(v81, v81);
            v52 = v163;
            v85 = _mm_max_ps(
                    _mm_min_ps(_mm_mul_ps(v82, _mm_sub_ps(v84, v83)), (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v86 = _mm_sub_ps(_mm_mul_ps(v75, v85), v178);
            v87 = _mm_sub_ps(_mm_mul_ps(v73, v85), v177);
            v88 = _mm_sub_ps(_mm_mul_ps(v79, v85), v176);
            v89 = _mm_add_ps(_mm_mul_ps(v86, v86), _mm_mul_ps(v87, v87));
            v50 = v161;
            v90 = _mm_add_ps(v89, _mm_mul_ps(v88, v88));
            v56 = (__m128)v166;
            v91 = _mm_max_ps(
                    v90,
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(v186, v186), _mm_mul_ps(v160, v160)), _mm_mul_ps(v76, v76)));
            v51 = v162;
            if ( _mm_movemask_ps(_mm_cmple_ps(v91, (__m128)v166)) )
            {
              v56 = v91;
              v157 = v57[121];
              v158 = v57[122];
              v92 = v57[123];
              v166 = (__int128)v56;
              v159 = v92;
            }
          }
          ++v47;
          v57 += 3;
        }
        while ( v47 < v11[492].m128_i32[0] );
      }
      if ( !_mm_movemask_ps(_mm_cmple_ps(_mm_and_ps((__m128)xmmword_10394240, v56), v187)) )
      {
        v168 = flt_103EE008;
        v93 = *((_DWORD *)v37 + 17);
        v169 = flt_103EE00C;
        v170 = flt_103EE010;
        (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, int, int *))(**((_DWORD **)off_103EE614 + 60) + 24))(
          *((_DWORD *)off_103EE614 + 60),
          &v135,
          &v139,
          1,
          0,
          v93,
          v167);
        v94 = v171;
        if ( v171 < 1.0 - v153 || v172 || 0.0 == v143 )
        {
          *(float *)LODWORD(v138) = 0.0;
          v165 = _mm_shuffle_ps((__m128)0, (__m128)0, 0);
          v128 = 0;
          v128.m128_f32[0] = flt_10459240;
          v129 = 0;
          v129.m128_f32[0] = *(float *)&qword_10459244;
          v130 = 0;
          v130.m128_f32[0] = *((float *)&qword_10459244 + 1);
          v50 = _mm_shuffle_ps(v128, v128, 0);
          v51 = _mm_shuffle_ps(v129, v129, 0);
          v52 = _mm_shuffle_ps(v130, v130, 0);
          v157 = v50;
          v158 = v51;
          v159 = v52;
        }
        else
        {
          v95 = v139;
          v96 = v11[492].m128_i32[1];
          v97 = v135;
          v11[493].m128_i8[v96 + 8] = 1;
          v98 = &v11[3 * v96 + 246];
          v99 = 0;
          v100 = v95 - v97;
          v101 = v137;
          v102 = v100 * v94;
          v103 = v141 - v137;
          v154 = v97 + v102;
          v104 = v136 + (v140 - v136) * v94;
          v99.m128_f32[0] = v154;
          *v98 = _mm_shuffle_ps(v99, v99, 0);
          v155 = v104;
          v105 = 0;
          v105.m128_f32[0] = v155;
          v156 = v94 * v103 + v101;
          v106 = v156;
          v98[1] = _mm_shuffle_ps(v105, v105, 0);
          v107 = 0;
          v107.m128_f32[0] = v106;
          v98[2] = _mm_shuffle_ps(v107, v107, 0);
          v108 = 0;
          v108.m128_f32[0] = v168;
          v109 = 3 * v96 + 369;
          v11[v109] = _mm_shuffle_ps(v108, v108, 0);
          v110 = 0;
          v110.m128_f32[0] = v169;
          v11[v109 + 1] = _mm_shuffle_ps(v110, v110, 0);
          v111 = 0;
          v111.m128_f32[0] = v170;
          v11[v109 + 2] = _mm_shuffle_ps(v111, v111, 0);
          v112 = 0;
          v112.m128_f32[0] = v135;
          v11[3 * v96] = _mm_shuffle_ps(v112, v112, 0);
          v113 = &v11[3 * v96];
          v114 = 0;
          v114.m128_f32[0] = v136;
          v113[1] = _mm_shuffle_ps(v114, v114, 0);
          v115 = 0;
          v115.m128_f32[0] = v137;
          v113[2] = _mm_shuffle_ps(v115, v115, 0);
          v116 = 0;
          v116.m128_f32[0] = v139;
          v117 = 3 * v96 + 123;
          v11[v117] = _mm_shuffle_ps(v116, v116, 0);
          v118 = &v11[v117];
          v119 = 0;
          v119.m128_f32[0] = v140;
          v118[1] = _mm_shuffle_ps(v119, v119, 0);
          v120 = 0;
          v120.m128_f32[0] = v141;
          v118[2] = _mm_shuffle_ps(v120, v120, 0);
          v121 = v135;
          v122 = v136;
          v48 = ++v11[492].m128_i32[1] <= *((_DWORD *)v37 + 19);
          v123 = 0;
          v123.m128_f32[0] = v121;
          v124 = 0;
          v124.m128_f32[0] = v122;
          v125 = 0;
          v125.m128_f32[0] = v137;
          v50 = _mm_shuffle_ps(v123, v123, 0);
          v51 = _mm_shuffle_ps(v124, v124, 0);
          v52 = _mm_shuffle_ps(v125, v125, 0);
          v157 = _mm_shuffle_ps(v99, v99, 0);
          v158 = _mm_shuffle_ps(v105, v105, 0);
          v159 = _mm_shuffle_ps(v107, v107, 0);
          if ( !v48 )
            v11[492].m128_i32[1] = 0;
          v126 = *((_DWORD *)v37 + 19);
          v127 = v11[492].m128_i32[0] + 1;
          if ( v126 < v127 )
            v127 = v126;
          v11[492].m128_i32[0] = v127;
        }
      }
      v131 = _mm_mul_ps(_mm_sub_ps(v50, v157), v183);
      v132 = _mm_mul_ps(_mm_sub_ps(v51, v158), v184);
      v133 = _mm_mul_ps(_mm_sub_ps(v52, v159), v185);
      v160 = _mm_add_ps(
               _mm_sqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v131, v131), _mm_mul_ps(v132, v132)), _mm_mul_ps(v133, v133))),
               v165);
      *(float *)LODWORD(v138) = v160.m128_f32[0] / (v147 + 0.00000011920929);
      if ( !a4 )
        break;
      v21 = v142;
      v19 = v148;
    }
  }
}
