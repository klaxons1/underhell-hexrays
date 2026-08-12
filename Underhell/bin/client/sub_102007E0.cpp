void __cdecl sub_102007E0(__m128 *a1, __m128 *a2, int a3, __m128 *a4, int a5, __m128 *a6, __m128 *a7, float a8)
{
  __m128 *v8; // edx
  __m128 *v9; // esi
  int v10; // edi
  __m128 v11; // xmm1
  __m128 v12; // xmm4
  int v13; // ecx
  __m128 *v14; // eax
  __m128 v15; // xmm6
  __m128 v16; // xmm1
  __m128 v17; // xmm7
  __m128 v18; // xmm5
  __m128 v19; // xmm2
  __m128 v20; // xmm4
  __m128 v21; // xmm3
  __m128 v22; // xmm0
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm4
  __m128 v27; // xmm6
  __m128 v28; // xmm0
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm7
  __m128 v36; // xmm0
  __m128 v37; // xmm6
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm1
  __m128 v41; // xmm3
  __m128 v42; // xmm4
  __m128 v43; // xmm0
  __m128 v44; // xmm5
  __m128 v45; // xmm7
  __m128 v46; // xmm0
  __m128 v47; // xmm2
  __m128 v48; // xmm3
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __m128 v51; // xmm0
  __m128 v52; // xmm2
  __m128 v53; // xmm0
  __m128 *v54; // eax
  float *v55; // esi
  float *m128_f32; // edi
  double v57; // st7
  double v58; // st6
  double v59; // st5
  double v60; // st4
  double v61; // st7
  double v62; // rtt
  double v63; // st5
  double v64; // rt0
  double v65; // st5
  double v66; // st7
  double v67; // st7
  int v68; // ecx
  char *v69; // edx
  char *v70; // eax
  double v71; // st7
  __m128 v72; // xmm7
  __m128 v73; // xmm3
  __m128 v74; // xmm2
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm2
  __m128 v78; // xmm1
  __m128 v79; // xmm0
  __m128 v80; // xmm2
  __m128 v81; // xmm0
  __m128 v82; // xmm2
  __m128 v83; // xmm0
  __m128 v84; // xmm2
  float v85; // [esp+4h] [ebp-164h]
  int v86; // [esp+18h] [ebp-150h]
  char *v87; // [esp+1Ch] [ebp-14Ch]
  int v88; // [esp+24h] [ebp-144h]
  __m128 v89; // [esp+28h] [ebp-140h] BYREF
  char *v90; // [esp+44h] [ebp-124h]
  __int128 v91; // [esp+48h] [ebp-120h]
  __m128 v92; // [esp+58h] [ebp-110h] BYREF
  char *v93; // [esp+68h] [ebp-100h]
  char *v94; // [esp+6Ch] [ebp-FCh]
  _QWORD v95[3]; // [esp+70h] [ebp-F8h] BYREF
  __m128 v96; // [esp+88h] [ebp-E0h] BYREF
  __m128 v97; // [esp+98h] [ebp-D0h]
  __m128 v98; // [esp+A8h] [ebp-C0h] BYREF
  __m128 v99; // [esp+B8h] [ebp-B0h] BYREF
  __m128 v100; // [esp+C8h] [ebp-A0h]
  __m128 v101; // [esp+D8h] [ebp-90h] BYREF
  __m128 v102; // [esp+E8h] [ebp-80h]
  __m128 v103; // [esp+F8h] [ebp-70h]
  __m128 v104; // [esp+118h] [ebp-50h]
  __m128 v105; // [esp+128h] [ebp-40h]
  __m128 v106; // [esp+138h] [ebp-30h]
  __m128 v107; // [esp+148h] [ebp-20h]
  __m128 v108; // [esp+158h] [ebp-10h]

  v8 = a4;
  *a4 = (__m128)xmmword_10394140;
  a4[1] = (__m128)xmmword_10394140;
  v9 = a6;
  a4[2] = (__m128)xmmword_10394140;
  a4[3] = (__m128)xmmword_10394140;
  a4[4] = (__m128)xmmword_10394140;
  if ( a6 )
  {
    *a4 = (__m128)xmmword_10394160;
    if ( a5 == 3 )
    {
      *a4 = (__m128)xmmword_10394160;
      v10 = a6[492].m128_i32[0];
      v11 = (__m128)xmmword_10394210;
      v12 = (__m128)xmmword_10394140;
      v13 = 0;
      v91 = xmmword_10394210;
      if ( v10 > 0 )
      {
        v14 = a6 + 125;
        do
        {
          if ( v9[493].m128_i8[v13 + 8] )
          {
            v15 = v14[-125];
            v16 = a2[1];
            v17 = v14[-123];
            v18 = v14[-2];
            v19 = v14[-1];
            v20 = a2[2];
            v21 = *v14;
            v104 = _mm_sub_ps(*a2, v15);
            v22 = v14[-124];
            v106 = _mm_sub_ps(v20, v17);
            v105 = _mm_sub_ps(v16, v22);
            v92 = v19;
            v23 = _mm_sub_ps(v19, v22);
            v89 = v21;
            v24 = _mm_sub_ps(v21, v17);
            v25 = _mm_sub_ps(v18, v15);
            v26 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v25, v25), _mm_mul_ps(v23, v23)), _mm_mul_ps(v24, v24));
            v27 = _mm_rcp_ps(v26);
            v28 = _mm_max_ps(
                    _mm_min_ps(
                      _mm_mul_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(v105, v23), _mm_mul_ps(v104, v25)), _mm_mul_ps(v106, v24)),
                        _mm_sub_ps(_mm_add_ps(v27, v27), _mm_mul_ps(_mm_mul_ps(v27, v27), v26))),
                      (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v29 = v14[-124];
            v30 = _mm_sub_ps(_mm_mul_ps(v24, v28), v106);
            v31 = _mm_sub_ps(_mm_mul_ps(v23, v28), v105);
            v32 = _mm_sub_ps(_mm_mul_ps(v25, v28), v104);
            v33 = *a1;
            v107 = v30;
            v34 = v14[-125];
            v108 = v31;
            v35 = _mm_sub_ps(v33, v34);
            v36 = v14[-123];
            v37 = v32;
            v38 = _mm_sub_ps(a1[1], v29);
            v103 = _mm_sub_ps(a1[2], v36);
            v39 = _mm_sub_ps(v92, v29);
            v102 = v38;
            v40 = _mm_sub_ps(v18, v34);
            v41 = _mm_sub_ps(v89, v36);
            v101 = v35;
            v42 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v40, v40), _mm_mul_ps(v39, v39)), _mm_mul_ps(v41, v41));
            v43 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v35, v40), _mm_mul_ps(v102, v39)), _mm_mul_ps(v103, v41));
            v44 = _mm_rcp_ps(v42);
            v45 = _mm_mul_ps(_mm_mul_ps(v44, v44), v42);
            v12 = (__m128)xmmword_10394140;
            v46 = _mm_max_ps(
                    _mm_min_ps(_mm_mul_ps(v43, _mm_sub_ps(_mm_add_ps(v44, v44), v45)), (__m128)xmmword_10394150),
                    (__m128)xmmword_10394140);
            v47 = _mm_sub_ps(_mm_mul_ps(v39, v46), v102);
            v48 = _mm_sub_ps(_mm_mul_ps(v41, v46), v103);
            v49 = _mm_sub_ps(_mm_mul_ps(v40, v46), v101);
            v50 = _mm_max_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(v48, v48), _mm_mul_ps(v47, v47)), _mm_mul_ps(v49, v49)),
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(v108, v108), _mm_mul_ps(v107, v107)), _mm_mul_ps(v37, v37)));
            v51 = _mm_cmple_ps(v50, (__m128)v91);
            v11 = _mm_or_ps(_mm_andnot_ps((__m128)v91, v51), _mm_and_ps(v50, (__m128)v91));
            v98 = _mm_or_ps(_mm_and_ps(v14[121], v51), _mm_andnot_ps(v51, v98));
            v99 = _mm_or_ps(_mm_and_ps(v14[122], v51), _mm_andnot_ps(v51, v99));
            v100 = _mm_or_ps(_mm_and_ps(v14[123], v51), _mm_andnot_ps(v51, v100));
            *(__m128 *)&v95[1] = _mm_or_ps(_mm_and_ps(v14[244], v51), _mm_andnot_ps(v51, *(__m128 *)&v95[1]));
            v52 = v14[245];
            v91 = (__int128)v11;
            v9 = a6;
            v96 = _mm_or_ps(_mm_and_ps(v52, v51), _mm_andnot_ps(v51, v96));
            v97 = _mm_or_ps(_mm_and_ps(v14[246], v51), _mm_andnot_ps(v51, v97));
          }
          ++v13;
          v14 += 3;
        }
        while ( v13 < v10 );
      }
      v53 = 0;
      v53.m128_f32[0] = a8;
      v88 = _mm_movemask_ps(_mm_and_ps(_mm_cmplt_ps(_mm_shuffle_ps(v53, v53, 0), v11), *a7));
      v54 = a1;
      if ( v88 )
      {
        LODWORD(v95[0]) = (char *)a2 - (char *)a1;
        v93 = (char *)((char *)&v98 - (char *)a1);
        v94 = (char *)((char *)&v98 - (char *)a2);
        HIDWORD(v95[0]) = (char *)&v99 - (char *)a2;
        v90 = (char *)((char *)&v95[1] - (char *)a2);
        v86 = 0;
        v55 = (float *)a2;
        m128_f32 = a1[2].m128_f32;
        v87 = (char *)((char *)&v96 - (char *)a2);
        do
        {
          if ( ((1 << v86) & v88) != 0 )
          {
            v57 = *(m128_f32 - 8);
            v89.m128_f32[0] = *(m128_f32 - 8);
            v58 = *(m128_f32 - 4);
            v89.m128_f32[1] = *(m128_f32 - 4);
            v59 = *m128_f32;
            v89.m128_f32[2] = *m128_f32;
            v60 = *v55 - v57;
            v61 = v55[4];
            *(float *)&v91 = v60;
            v62 = v59;
            v63 = v61 - v58;
            *((float *)&v91 + 1) = v63;
            v64 = v63;
            v65 = *(float *)((char *)m128_f32 + LODWORD(v95[0])) - v62;
            *((float *)&v91 + 2) = v65;
            v85 = v60 * v60 + v65 * v65 + v64 * v64;
            v66 = 300.0 / (off_103EDFE0(v85) + 0.01);
            if ( v66 < 5.0 )
              v66 = 5.0;
            v92.m128_f32[0] = *(float *)&v91 * v66 + v89.m128_f32[0];
            v92.m128_f32[1] = *((float *)&v91 + 1) * v66 + v89.m128_f32[1];
            v92.m128_f32[2] = v66 * *((float *)&v91 + 2) + v89.m128_f32[2];
            (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, int, _DWORD, int, __m128 *))(**((_DWORD **)off_103EE614
                                                                                              + 60)
                                                                                           + 24))(
              *((_DWORD *)off_103EE614 + 60),
              &v89,
              &v92,
              v88,
              0,
              a3,
              &v101);
            v67 = v103.m128_f32[3];
            if ( v103.m128_f32[3] >= 1.0 )
            {
              v71 = 0.0;
              *(float *)((char *)v55 + (_DWORD)v90) = 0.0;
              *(float *)((char *)v55 + (_DWORD)v87) = 0.0;
            }
            else
            {
              v68 = HIDWORD(v95[0]);
              v69 = v93;
              *(float *)((char *)v55 + (_DWORD)v94) = v89.m128_f32[0] + (v92.m128_f32[0] - v89.m128_f32[0]) * v67;
              v70 = v90;
              *(float *)((char *)v55 + v68) = v89.m128_f32[1] + (v92.m128_f32[1] - v89.m128_f32[1]) * v67;
              *(float *)((char *)m128_f32 + (_DWORD)v69) = v67 * (v92.m128_f32[2] - v89.m128_f32[2]) + v89.m128_f32[2];
              *(float *)((char *)v55 + (_DWORD)v70) = v102.m128_f32[2];
              *(float *)((char *)v55 + (_DWORD)v87) = v102.m128_f32[3];
              v71 = v103.m128_f32[0];
            }
            v54 = a1;
            *(float *)((char *)m128_f32 + (char *)&v95[1] - (char *)a1) = v71;
          }
          v8 = a4;
          ++v55;
          ++m128_f32;
          ++v86;
        }
        while ( v86 < 4 );
        v12 = (__m128)xmmword_10394140;
      }
      v72 = v97;
      v73 = v96;
      v74 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(v54[1], v99), v96),
                _mm_mul_ps(_mm_sub_ps(*v54, v98), *(__m128 *)&v95[1])),
              _mm_mul_ps(_mm_sub_ps(v54[2], v100), v97));
      v75 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a2[1], v99), v96), _mm_mul_ps(_mm_sub_ps(*a2, v98), *(__m128 *)&v95[1])),
              _mm_mul_ps(_mm_sub_ps(a2[2], v100), v97));
      v76 = _mm_and_ps(_mm_and_ps(_mm_cmplt_ps(v75, v12), _mm_cmple_ps(v12, v74)), *a7);
      if ( !_mm_movemask_ps(v76) )
        goto LABEL_23;
      v77 = _mm_div_ps(v74, _mm_sub_ps(v74, v75));
      v78 = _mm_and_ps(_mm_cmplt_ps(v77, *v8), v76);
      if ( !_mm_movemask_ps(v78) )
        goto LABEL_23;
      v79 = _mm_or_ps(_mm_andnot_ps(v78, *v8), _mm_and_ps(v77, v78));
      v80 = v8[2];
      *v8 = v79;
      v81 = _mm_or_ps(_mm_andnot_ps(v78, v80), _mm_and_ps(v78, *(__m128 *)&v95[1]));
      v82 = v8[3];
      v8[2] = v81;
      v83 = _mm_or_ps(_mm_andnot_ps(v78, v82), _mm_and_ps(v78, v73));
      v84 = v8[4];
      v8[3] = v83;
      v8[4] = _mm_or_ps(_mm_andnot_ps(v78, v84), _mm_and_ps(v78, v72));
    }
    v12 = (__m128)xmmword_10394140;
LABEL_23:
    v8[1] = _mm_max_ps(v12, _mm_sub_ps((__m128)xmmword_10394150, *v8));
  }
}
