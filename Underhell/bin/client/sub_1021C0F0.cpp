int __thiscall sub_1021C0F0(int this, __m128 *a2, float a3, float *a4)
{
  int v5; // ecx
  __m128 v6; // xmm0
  double v7; // st6
  unsigned __int32 v8; // kr00_4
  double v9; // st5
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 *v12; // esi
  __m128 *v13; // edi
  unsigned __int32 v14; // kr04_4
  __int32 v15; // eax
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  int v19; // edx
  bool v20; // c3
  float v21; // xmm1_4
  __m128 v22; // xmm0
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  bool v28; // pf
  unsigned __int32 v29; // eax
  __m128 *v30; // ecx
  __m128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm1
  __m128 v34; // xmm3
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __m128 v37; // xmm7
  __m128 v38; // xmm1
  __m128 v39; // xmm6
  __m128 v40; // xmm1
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm0
  __m128 v44; // xmm3
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __m128 v47; // xmm6
  __m128 v48; // xmm2
  __m128 v49; // xmm0
  __m128 v50; // xmm5
  __m128 v51; // xmm0
  __m128 v52; // xmm1
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm4
  __m128 v56; // xmm0
  bool v57; // zf
  float v58; // xmm1_4
  __m128 *v59; // ecx
  double v60; // st7
  __m128 v61; // xmm2
  __m128 v62; // xmm0
  float v63; // xmm1_4
  __m128 v64; // xmm2
  unsigned __int32 v65; // eax
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  __int32 v68; // ebx
  __m128 v69; // xmm1
  __m128 v70; // xmm2
  __m128 v71; // xmm0
  __m128 v72; // xmm0
  __m128 v73; // xmm0
  __m128 v74; // xmm1
  __m128 v75; // xmm3
  __m128 v76; // xmm7
  __m128 v77; // xmm4
  __m128 v78; // xmm5
  __m128 v79; // xmm6
  __m128 v80; // xmm7
  __m128 v81; // xmm1
  __m128 v82; // xmm1
  __m128 v83; // xmm1
  __m128 v84; // xmm2
  __m128 v85; // xmm0
  __m128 v86; // xmm1
  __m128 v87; // xmm2
  __m128 v88; // xmm3
  __m128 v89; // xmm4
  __m128 v90; // xmm5
  __m128 v91; // xmm0
  __m128 v92; // xmm4
  __m128 v93; // xmm5
  __m128 v94; // xmm1
  __m128 v95; // xmm0
  __m128 v96; // xmm1
  __m128 v97; // xmm5
  __m128 v98; // xmm7
  char v100; // [esp+1Bh] [ebp-27Dh]
  float v101; // [esp+1Ch] [ebp-27Ch]
  __int32 v102; // [esp+1Ch] [ebp-27Ch]
  __int32 v103; // [esp+1Ch] [ebp-27Ch]
  __int32 v104; // [esp+20h] [ebp-278h]
  float v105; // [esp+24h] [ebp-274h]
  float v106; // [esp+28h] [ebp-270h]
  float v107; // [esp+2Ch] [ebp-26Ch]
  int v108; // [esp+30h] [ebp-268h]
  __m128 *v109; // [esp+34h] [ebp-264h]
  __m128 *v110; // [esp+34h] [ebp-264h]
  int v111; // [esp+3Ch] [ebp-25Ch]
  __int32 v112; // [esp+40h] [ebp-258h]
  int v113; // [esp+44h] [ebp-254h]
  int v114; // [esp+44h] [ebp-254h]
  __m128 v115; // [esp+48h] [ebp-250h] BYREF
  int v116; // [esp+64h] [ebp-234h]
  __m128 v117; // [esp+68h] [ebp-230h]
  int v118; // [esp+84h] [ebp-214h]
  __m128 v119; // [esp+88h] [ebp-210h] BYREF
  __m128 v120; // [esp+98h] [ebp-200h] BYREF
  __m128 v121; // [esp+A8h] [ebp-1F0h]
  __m128 v122; // [esp+B8h] [ebp-1E0h]
  __m128 v123; // [esp+C8h] [ebp-1D0h] BYREF
  __m128 v124; // [esp+D8h] [ebp-1C0h]
  __m128 v125; // [esp+E8h] [ebp-1B0h]
  __m128 v126; // [esp+F8h] [ebp-1A0h]
  __m128 v127; // [esp+108h] [ebp-190h]
  __m128 v128; // [esp+118h] [ebp-180h]
  __m128 v129; // [esp+128h] [ebp-170h]
  __m128 v130; // [esp+138h] [ebp-160h]
  __m128 v131; // [esp+148h] [ebp-150h]
  __m128 v132; // [esp+158h] [ebp-140h]
  __m128 v133; // [esp+168h] [ebp-130h]
  __m128 v134; // [esp+178h] [ebp-120h]
  __m128 v135; // [esp+188h] [ebp-110h] BYREF
  __m128 v136; // [esp+198h] [ebp-100h]
  __m128 v137; // [esp+1A8h] [ebp-F0h]
  __m128 v138; // [esp+1B8h] [ebp-E0h]
  __m128 v139; // [esp+1C8h] [ebp-D0h]
  __m128 v140; // [esp+1D8h] [ebp-C0h]
  __m128 v141; // [esp+1E8h] [ebp-B0h]
  __m128 v142; // [esp+1F8h] [ebp-A0h]
  __m128 v143; // [esp+208h] [ebp-90h]
  __m128 v144; // [esp+218h] [ebp-80h]
  __m128 v145; // [esp+228h] [ebp-70h]
  __m128 v146[3]; // [esp+238h] [ebp-60h] BYREF
  int v147[12]; // [esp+268h] [ebp-30h] BYREF

  v5 = 17 * *(_DWORD *)(this + 44);
  v105 = a2[5].m128_f32[v5 + 2];
  v108 = this;
  v106 = a2[5].m128_f32[v5 + 3];
  v107 = a2[6].m128_f32[v5];
  if ( 0.0 == *a4 && a4[1] == 0.0 && a4[2] == 0.0 )
  {
    *a4 = v105;
    a4[1] = v106;
    a4[2] = v107;
    sub_101F8FA0((char *)a2, *(_DWORD *)(this + 44), a2[2].m128_f32[1], a4 + 3);
  }
  if ( *(_BYTE *)(this + 88) )
  {
    sub_101F8FA0((char *)a2, *(_DWORD *)(this + 44), a2[2].m128_f32[1], (float *)v147);
    sub_101F0AB0(a4 + 3, v135.m128_f32);
    sub_101EDC00((float *)v147, v135.m128_f32, v146[0].m128_f32);
  }
  v111 = sub_102AF3A0();
  v6 = 0;
  v7 = v106 - a4[1];
  v8 = a2[395].m128_u32[1];
  v9 = v107 - a4[2];
  v115.m128_f32[0] = (v105 - *a4) * a3;
  v6.m128_f32[0] = v115.m128_f32[0];
  v129 = _mm_shuffle_ps(v6, v6, 0);
  v115.m128_f32[1] = v7 * a3;
  v10 = 0;
  v10.m128_f32[0] = v115.m128_f32[1];
  v130 = _mm_shuffle_ps(v10, v10, 0);
  v115.m128_f32[2] = a3 * v9;
  v11 = 0;
  v11.m128_f32[0] = v115.m128_f32[2];
  v12 = (__m128 *)a2[379].m128_i32[1];
  v13 = (__m128 *)a2[379].m128_i32[3];
  v119.m128_i32[1] = v8 / 0xC;
  v131 = _mm_shuffle_ps(v11, v11, 0);
  v14 = a2[395].m128_u32[3];
  v15 = a2[2].m128_i32[0];
  v16 = 0;
  v16.m128_f32[0] = v105;
  v132 = _mm_shuffle_ps(v16, v16, 0);
  v17 = 0;
  v17.m128_f32[0] = v106;
  v133 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  v115.m128_i32[1] = v14 / 0xC;
  v19 = v108;
  v20 = 0.0 == *(float *)(v108 + 84);
  v18.m128_f32[0] = v107;
  v21 = a2[2].m128_f32[3];
  v134 = _mm_shuffle_ps(v18, v18, 0);
  v22 = 0;
  v104 = v15;
  v22.m128_f32[0] = v21;
  v23 = _mm_shuffle_ps(v22, v22, 0);
  v128 = v23;
  if ( v20 )
  {
    v100 = 0;
  }
  else
  {
    v24 = 0;
    v100 = 1;
    v101 = 1.0 / *(float *)(v108 + 84);
    v24.m128_f32[0] = v101;
    v127 = _mm_shuffle_ps(v24, v24, 0);
  }
  v25 = 0;
  v25.m128_f32[0] = 0.2;
  v26 = _mm_shuffle_ps(v25, v25, 0);
  v27 = _mm_rcp_ps(v26);
  v28 = *(float *)(v108 + 60) < 1.0;
  v29 = a2[397].m128_u32[1];
  v138 = _mm_sub_ps(_mm_sub_ps(_mm_add_ps(v27, v27), _mm_mul_ps(_mm_mul_ps(v27, v27), v26)), (__m128)xmmword_10394160);
  if ( v28 )
  {
    v58 = *(float *)(v108 + 60);
    v59 = (__m128 *)a2[379].m128_i32[2];
    v60 = *(float *)(v108 + 68) * 4.0;
    v141 = a2[1];
    v61 = 0;
    v61.m128_f32[0] = *(float *)(v108 + 64) - v58;
    v144 = _mm_shuffle_ps(v61, v61, 0);
    v62 = 0;
    v62.m128_f32[0] = v58;
    v63 = *(float *)(v108 + 72);
    v139 = _mm_shuffle_ps(v62, v62, 0);
    v62.m128_f32[0] = *(float *)(v108 + 76) - v63;
    v117.m128_i32[1] = v29 >> 2;
    v64 = 0;
    v64.m128_f32[0] = v62.m128_f32[0];
    v117.m128_i32[0] = a2[381].m128_i32[1];
    v65 = a2[395].m128_u32[2];
    v142 = _mm_shuffle_ps(v64, v64, 0);
    v66 = 0;
    v66.m128_f32[0] = v63;
    v110 = v59;
    v145 = _mm_shuffle_ps(v66, v66, 0);
    v67 = (__m128)xmmword_10394150;
    v114 = (int)(4.0 * *(float *)(v108 + 80));
    v118 = 16 * v117.m128_i32[1];
    v116 = 16 * (v65 >> 2);
    v68 = 48 * v119.m128_i32[1];
    v103 = 48 * v115.m128_i32[1];
    do
    {
      v69 = _mm_sub_ps(v141, *(__m128 *)v117.m128_i32[0]);
      v70 = _mm_mul_ps(_mm_min_ps(v69, v128), _mm_div_ps(v67, v128));
      v120 = _mm_mul_ps(v129, v70);
      v121 = _mm_mul_ps(v130, v70);
      v126 = v70;
      v71 = _mm_max_ps((__m128)xmmword_10394140, _mm_min_ps(v67, _mm_mul_ps(_mm_rcp_ps(*v110), v69)));
      v122 = _mm_mul_ps(v131, v70);
      v143 = v71;
      v115 = sub_102AF370();
      v72 = sub_101F41F0(&v115, (int)v60);
      v140 = _mm_add_ps(_mm_mul_ps(v72, v144), v139);
      v119 = sub_102AF370();
      v73 = sub_101F41F0(&v119, v114);
      v74 = _mm_div_ps(_mm_sub_ps(v143, v140), _mm_sub_ps(_mm_add_ps(_mm_mul_ps(v73, v142), v145), v140));
      v67 = (__m128)xmmword_10394150;
      v75 = _mm_sub_ps(
              (__m128)xmmword_10394150,
              _mm_max_ps((__m128)xmmword_10394140, _mm_min_ps((__m128)xmmword_10394150, v74)));
      if ( _mm_movemask_ps(_mm_cmplt_ps((__m128)xmmword_10394140, v75)) )
      {
        v76 = _mm_mul_ps(v122, v75);
        v77 = _mm_mul_ps(v120, v75);
        v78 = _mm_mul_ps(v121, v75);
        v122 = v76;
        if ( v100 )
        {
          v79 = _mm_sub_ps(_mm_add_ps(v12[2], v76), v134);
          v80 = _mm_sub_ps(_mm_add_ps(*v12, v77), v132);
          v81 = _mm_sub_ps(_mm_add_ps(v12[1], v78), v133);
          v82 = _mm_min_ps(
                  (__m128)xmmword_10394150,
                  _mm_mul_ps(
                    _mm_sqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v80, v80), _mm_mul_ps(v81, v81)), _mm_mul_ps(v79, v79))),
                    v127));
          v83 = _mm_div_ps(
                  v82,
                  _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394150, v82), v138), (__m128)xmmword_10394150));
          v84 = _mm_sub_ps((__m128)xmmword_10394150, v83);
          v77 = _mm_mul_ps(v77, v84);
          v78 = _mm_mul_ps(v78, v84);
          v76 = _mm_mul_ps(v122, v84);
          v75 = _mm_sub_ps((__m128)xmmword_10394150, _mm_mul_ps(v83, v75));
        }
        if ( *(_BYTE *)(v108 + 88) )
        {
          v123 = *v12;
          v124 = v12[1];
          v125 = v12[2];
          v135 = *v13;
          v136 = v13[1];
          v85 = v13[2];
          v126 = _mm_mul_ps(v75, v126);
          v137 = v85;
          sub_102130A0(&v123, v146);
          sub_102130A0(&v135, v146);
          v86 = _mm_mul_ps(_mm_sub_ps(v124, v12[1]), v126);
          v87 = _mm_mul_ps(_mm_sub_ps(v125, v12[2]), v126);
          v88 = _mm_mul_ps(_mm_sub_ps(v135, *v13), v126);
          v89 = _mm_mul_ps(_mm_sub_ps(v136, v13[1]), v126);
          v90 = _mm_mul_ps(_mm_sub_ps(v137, v13[2]), v126);
          *v12 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v123, *v12), v126), *v12);
          v91 = v12[2];
          v12[1] = _mm_add_ps(v86, v12[1]);
          v12[2] = _mm_add_ps(v87, v91);
          v92 = _mm_add_ps(v89, v13[1]);
          v93 = _mm_add_ps(v90, v13[2]);
          *v13 = _mm_add_ps(v88, *v13);
          v13[1] = v92;
          v13[2] = v93;
        }
        else
        {
          v94 = v12[1];
          *v12 = _mm_add_ps(*v12, v77);
          v95 = _mm_add_ps(v78, v94);
          v96 = v12[2];
          v12[1] = v95;
          v12[2] = _mm_add_ps(v76, v96);
          v97 = _mm_add_ps(v78, v13[1]);
          v98 = _mm_add_ps(v76, v13[2]);
          *v13 = _mm_add_ps(v77, *v13);
          v13[1] = v97;
          v13[2] = v98;
        }
        v67 = (__m128)xmmword_10394150;
      }
      v117.m128_i32[0] += v118;
      v110 = (__m128 *)((char *)v110 + v116);
      v13 = (__m128 *)((char *)v13 + v103);
      v12 = (__m128 *)((char *)v12 + v68);
      --v104;
    }
    while ( v104 );
  }
  else
  {
    v30 = (__m128 *)a2[381].m128_i32[1];
    v113 = v29 >> 2;
    v112 = 48 * v119.m128_i32[1];
    v31 = 0;
    v31.m128_f32[0] = a3;
    v109 = v30;
    v117 = _mm_shuffle_ps(v31, v31, 0);
    v102 = 48 * v115.m128_i32[1];
    while ( 1 )
    {
      v32 = _mm_mul_ps(_mm_min_ps(_mm_sub_ps(a2[1], *v30), v23), _mm_div_ps((__m128)xmmword_10394150, v23));
      v33 = v117;
      v119 = v32;
      v34 = _mm_mul_ps(v129, v32);
      v35 = _mm_mul_ps(v130, v32);
      v36 = _mm_mul_ps(v131, v32);
      v115 = v117;
      if ( v100 )
      {
        v37 = _mm_sub_ps(_mm_add_ps(v12[1], v35), v133);
        v38 = _mm_sub_ps(_mm_add_ps(*v12, v34), v132);
        v39 = _mm_sub_ps(_mm_add_ps(v12[2], v36), v134);
        v40 = _mm_min_ps(
                (__m128)xmmword_10394150,
                _mm_mul_ps(
                  _mm_sqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v37, v37), _mm_mul_ps(v38, v38)), _mm_mul_ps(v39, v39))),
                  v127));
        v41 = _mm_div_ps(
                v40,
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394150, v40), v138), (__m128)xmmword_10394150));
        v42 = _mm_sub_ps((__m128)xmmword_10394150, v41);
        v34 = _mm_mul_ps(v34, v42);
        v35 = _mm_mul_ps(v35, v42);
        v36 = _mm_mul_ps(v36, v42);
        v32 = v119;
        v33 = _mm_sub_ps((__m128)xmmword_10394150, _mm_mul_ps(v41, v115));
      }
      if ( *(_BYTE *)(v19 + 88) )
      {
        v120 = *v12;
        v121 = v12[1];
        v122 = v12[2];
        v123 = *v13;
        v124 = v13[1];
        v43 = v13[2];
        v115 = _mm_mul_ps(v33, v32);
        v125 = v43;
        sub_102130A0(&v120, v146);
        sub_102130A0(&v123, v146);
        v19 = v108;
        v44 = _mm_mul_ps(_mm_sub_ps(v122, v12[2]), v115);
        v45 = _mm_mul_ps(_mm_sub_ps(v123, *v13), v115);
        v46 = _mm_mul_ps(_mm_sub_ps(v124, v13[1]), v115);
        v47 = _mm_mul_ps(_mm_sub_ps(v125, v13[2]), v115);
        v48 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v121, v12[1]), v115), v12[1]);
        v49 = v12[2];
        *v12 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v120, *v12), v115), *v12);
        v12[1] = v48;
        v12[2] = _mm_add_ps(v44, v49);
        v50 = _mm_add_ps(v46, v13[1]);
        v51 = v13[2];
        *v13 = _mm_add_ps(v45, *v13);
        v13[1] = v50;
        v13[2] = _mm_add_ps(v47, v51);
      }
      else
      {
        v52 = v12[1];
        *v12 = _mm_add_ps(*v12, v34);
        v53 = _mm_add_ps(v35, v52);
        v54 = v12[2];
        v12[1] = v53;
        v12[2] = _mm_add_ps(v36, v54);
        v55 = _mm_add_ps(v35, v13[1]);
        v56 = v13[2];
        *v13 = _mm_add_ps(v34, *v13);
        v13[1] = v55;
        v13[2] = _mm_add_ps(v36, v56);
      }
      v30 = &v109[v113];
      v12 = (__m128 *)((char *)v12 + v112);
      v13 = (__m128 *)((char *)v13 + v102);
      v57 = v104-- == 1;
      v109 = (__m128 *)((char *)v109 + v113 * 16);
      if ( v57 )
        break;
      v23 = v128;
    }
  }
  *a4 = v105;
  a4[1] = v106;
  a4[2] = v107;
  qmemcpy(a4 + 3, v147, 0x30u);
  return sub_102AF3F0(v111);
}
