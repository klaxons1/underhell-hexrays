char __thiscall sub_101FF840(float *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  double v7; // st7
  __m128 *v8; // esi
  double v10; // st7
  __m128 v11; // xmm0
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  __m128 v15; // xmm0
  __m128 v16; // xmm7
  bool v17; // c0
  bool v18; // c3
  __m128 v19; // xmm7
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  float v24; // xmm3_4
  __m128 v25; // xmm0
  __m128 v26; // xmm7
  char result; // al
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  __m128 v39; // xmm0
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  __int32 v42; // ecx
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm2
  __m128 v46; // xmm3
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  __m128 v49; // xmm1
  __m128 v50; // xmm6
  __m128 v51; // xmm2
  __m128 v52; // xmm3
  __m128 v53; // xmm4
  __m128 v54; // xmm5
  __m128 v55; // xmm2
  __m128 v56; // xmm1
  __m128 v57; // xmm1
  __m128 v58; // xmm6
  __m128 v59; // xmm0
  __m128 v60; // xmm5
  __m128 v61; // xmm3
  __m128 v62; // xmm4
  __m128 v63; // xmm2
  __m128 v64; // xmm6
  __m128 v65; // xmm5
  __m128 v66; // xmm0
  float v67; // [esp+0h] [ebp-250h]
  char v68; // [esp+1Fh] [ebp-231h]
  float v69; // [esp+20h] [ebp-230h]
  float v70; // [esp+20h] [ebp-230h]
  float v71; // [esp+24h] [ebp-22Ch]
  float v72; // [esp+24h] [ebp-22Ch]
  float v73; // [esp+28h] [ebp-228h]
  float v74; // [esp+28h] [ebp-228h]
  __m128 *v75; // [esp+30h] [ebp-220h]
  int v76; // [esp+34h] [ebp-21Ch]
  int v77; // [esp+38h] [ebp-218h] BYREF
  float v78; // [esp+3Ch] [ebp-214h]
  float v79; // [esp+40h] [ebp-210h]
  int v80; // [esp+44h] [ebp-20Ch] BYREF
  float v81; // [esp+48h] [ebp-208h]
  float v82; // [esp+4Ch] [ebp-204h]
  float v83; // [esp+50h] [ebp-200h]
  int v84[3]; // [esp+54h] [ebp-1FCh] BYREF
  __m128 v85; // [esp+60h] [ebp-1F0h]
  __m128 v86; // [esp+70h] [ebp-1E0h]
  __m128 v87; // [esp+80h] [ebp-1D0h]
  __m128 v88; // [esp+90h] [ebp-1C0h]
  __m128 v89; // [esp+A0h] [ebp-1B0h]
  __m128 v90; // [esp+B0h] [ebp-1A0h]
  __m128 v91; // [esp+C0h] [ebp-190h]
  __m128 v92; // [esp+D0h] [ebp-180h]
  __m128 v93; // [esp+E0h] [ebp-170h]
  __m128 v94; // [esp+F0h] [ebp-160h]
  __m128 v95; // [esp+100h] [ebp-150h]
  __m128 v96; // [esp+110h] [ebp-140h]
  __m128 v97; // [esp+120h] [ebp-130h]
  __m128 v98; // [esp+130h] [ebp-120h]
  __m128 v99; // [esp+140h] [ebp-110h]
  __m128 v100; // [esp+150h] [ebp-100h]
  __m128 v101; // [esp+160h] [ebp-F0h]
  __m128 v102; // [esp+170h] [ebp-E0h]
  __m128 v103; // [esp+180h] [ebp-D0h]
  __m128 v104; // [esp+190h] [ebp-C0h]
  __m128 v105; // [esp+1A0h] [ebp-B0h]
  __m128 v106; // [esp+1B0h] [ebp-A0h]
  __m128 v107; // [esp+1C0h] [ebp-90h]
  __m128 v108; // [esp+1D0h] [ebp-80h]
  __m128 v109; // [esp+1E0h] [ebp-70h]
  __m128 v110; // [esp+1F0h] [ebp-60h]
  __m128 v111; // [esp+200h] [ebp-50h]
  __m128 v112; // [esp+210h] [ebp-40h]
  __m128 v113; // [esp+220h] [ebp-30h]

  v6 = *(_DWORD *)(a4 + 6068);
  v7 = *(float *)(a4 + 36);
  v86.m128_i32[1] = *(_DWORD *)(a4 + 6324) / 0xCu;
  v8 = (__m128 *)(48 * a2 * v86.m128_i32[1] + v6);
  v76 = *(_DWORD *)(a4 + 6356) >> 2;
  v75 = (__m128 *)(16 * a2 * v76 + *(_DWORD *)(a4 + 6100));
  v67 = v7;
  sub_101F96B0((_DWORD *)a4, (int)(this + 15), v67, (float *)&v80, (float *)&v77, (float *)v84);
  v10 = this[20];
  v11 = 0;
  v12 = v10 > 0.001;
  v13 = 0.001 == v10;
  v11.m128_f32[0] = *(float *)(a4 + 36);
  v92 = _mm_shuffle_ps(v11, v11, 0);
  v14 = 0.001;
  if ( v12 || v13 )
    v14 = this[20];
  v15 = 0;
  v16 = 0;
  v68 = 1;
  v83 = 1.0 / v14;
  v17 = this[13] > 0.0;
  v18 = 0.0 == this[13];
  v15.m128_f32[0] = v83;
  v91 = _mm_shuffle_ps(v15, v15, 0);
  v16.m128_f32[0] = this[12];
  v19 = _mm_shuffle_ps(v16, v16, 0);
  v20 = v19;
  v96 = v19;
  v85 = v19;
  if ( v17 || v18 )
  {
    v68 = this[12] == this[13];
    v21 = 0;
    v21.m128_f32[0] = this[13];
    v85 = _mm_shuffle_ps(v21, v21, 0);
    v20 = v85;
  }
  v22 = v20;
  if ( this[14] >= 0.0 )
  {
    v68 &= this[12] == this[14];
    v23 = 0;
    v23.m128_f32[0] = this[14];
    v22 = _mm_shuffle_ps(v23, v23, 0);
  }
  v24 = this[11];
  v104 = _mm_sub_ps(v20, v19);
  v69 = *(float *)&v77 - *(float *)&v80;
  v112 = _mm_sub_ps(v22, v20);
  v25 = 0;
  v25.m128_f32[0] = v24;
  v108 = _mm_shuffle_ps(v25, v25, 0);
  v71 = v78 - v81;
  v26 = _mm_max_ps(v19, _mm_max_ps(v20, v22));
  result = 0;
  v28 = 0;
  v73 = v79 - v82;
  v28.m128_f32[0] = v24 * v24;
  v100 = _mm_shuffle_ps(v28, v28, 0);
  v90 = _mm_mul_ps(v26, v26);
  v29 = 0;
  v29.m128_f32[0] = *(float *)&v80;
  v97 = _mm_shuffle_ps(v29, v29, 0);
  v30 = 0;
  v30.m128_f32[0] = v81;
  v98 = _mm_shuffle_ps(v30, v30, 0);
  v31 = 0;
  v31.m128_f32[0] = v82;
  v99 = _mm_shuffle_ps(v31, v31, 0);
  v32 = 0;
  v32.m128_f32[0] = *(float *)&v77;
  v105 = _mm_shuffle_ps(v32, v32, 0);
  v33 = 0;
  v33.m128_f32[0] = v78;
  v106 = _mm_shuffle_ps(v33, v33, 0);
  v34 = 0;
  v34.m128_f32[0] = v79;
  v107 = _mm_shuffle_ps(v34, v34, 0);
  v35 = 0;
  v35.m128_f32[0] = v69;
  v93 = _mm_shuffle_ps(v35, v35, 0);
  v36 = 0;
  v36.m128_f32[0] = v71;
  v94 = _mm_shuffle_ps(v36, v36, 0);
  v37 = 0;
  v37.m128_f32[0] = v73;
  v95 = _mm_shuffle_ps(v37, v37, 0);
  v70 = *(float *)v84 - *(float *)&v77;
  v39 = 0;
  v39.m128_f32[0] = v70;
  v101 = _mm_shuffle_ps(v39, v39, 0);
  v72 = *(float *)&v84[1] - v78;
  v40 = 0;
  v40.m128_f32[0] = v72;
  v102 = _mm_shuffle_ps(v40, v40, 0);
  v74 = *(float *)&v84[2] - v79;
  v41 = 0;
  v41.m128_f32[0] = v74;
  v42 = 48 * v86.m128_i32[1];
  v103 = _mm_shuffle_ps(v41, v41, 0);
  do
  {
    v43 = _mm_min_ps((__m128)xmmword_10394150, _mm_mul_ps(_mm_sub_ps(v92, *v75), v91));
    v44 = _mm_add_ps(_mm_mul_ps(v93, v43), v97);
    v45 = _mm_add_ps(_mm_mul_ps(v94, v43), v98);
    v46 = _mm_add_ps(_mm_mul_ps(v95, v43), v99);
    v47 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v101, v43), v105), v44), v43), v44);
    v48 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v102, v43), v106), v45), v43), v45);
    v49 = _mm_sub_ps(v8[1], v48);
    v50 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v103, v43), v107), v46), v43), v46);
    v51 = _mm_sub_ps(v8[2], v50);
    v52 = _mm_sub_ps(*v8, v47);
    v87 = v47;
    v53 = v49;
    v88 = v48;
    v54 = v51;
    v55 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v49, v49), _mm_mul_ps(v52, v52)), _mm_mul_ps(v54, v54));
    v89 = v50;
    v56 = _mm_cmplt_ps(v90, v55);
    if ( !v68 && !_mm_movemask_ps(v56) )
    {
      v57 = _mm_add_ps(_mm_mul_ps(v43, v104), v96);
      v26 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v43, v112), v85), v57), v43), v57);
      v56 = _mm_cmplt_ps(_mm_mul_ps(v26, v26), v55);
    }
    v86 = _mm_cmplt_ps(v55, v100);
    if ( _mm_movemask_ps(_mm_or_ps(v86, v56)) )
    {
      v58 = _mm_rsqrt_ps(v55);
      v59 = _mm_mul_ps(
              _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v58, v58), v55)), v58),
              (__m128)xmmword_10394130);
      v60 = _mm_mul_ps(v54, v59);
      v61 = _mm_mul_ps(v52, v59);
      v62 = _mm_mul_ps(v53, v59);
      v113 = _mm_add_ps(_mm_mul_ps(v61, v26), v87);
      v63 = _mm_add_ps(v89, _mm_mul_ps(v60, v26));
      v109 = _mm_add_ps(_mm_mul_ps(v61, v108), v87);
      v110 = _mm_add_ps(v88, _mm_mul_ps(v62, v108));
      v64 = _mm_or_ps(_mm_andnot_ps(v56, *v8), _mm_and_ps(v113, v56));
      v111 = _mm_add_ps(v89, _mm_mul_ps(v60, v108));
      v65 = _mm_or_ps(
              _mm_andnot_ps(
                v86,
                _mm_or_ps(_mm_and_ps(_mm_add_ps(v88, _mm_mul_ps(v62, v26)), v56), _mm_andnot_ps(v56, v8[1]))),
              _mm_and_ps(v110, v86));
      v66 = _mm_or_ps(
              _mm_andnot_ps(v86, _mm_or_ps(_mm_and_ps(v63, v56), _mm_andnot_ps(v56, v8[2]))),
              _mm_and_ps(v111, v86));
      *v8 = _mm_or_ps(_mm_andnot_ps(v86, v64), _mm_and_ps(v109, v86));
      v8[1] = v65;
      v8[2] = v66;
      result = 1;
    }
    v75 += v76;
    v8 = (__m128 *)((char *)v8 + v42);
    --a3;
  }
  while ( a3 );
  return result;
}
