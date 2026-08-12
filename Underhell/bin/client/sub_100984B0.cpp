int __thiscall sub_100984B0(int this, _DWORD *a2, unsigned int *a3, unsigned int *a4, int a5, int a6)
{
  double v7; // st7
  __m128 *v8; // edx
  int v10; // ecx
  __m128 *v11; // eax
  __m128 v12; // xmm0
  int v14; // esi
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm6
  __m128 v22; // xmm2
  __m128 v23; // xmm4
  __m128 v24; // xmm6
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm4
  __m128 v30; // xmm6
  __m128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm2
  __m128 v36; // xmm0
  __m128 v37; // xmm5
  __m128 v38; // xmm0
  __m128 v39; // xmm5
  int v40; // ecx
  int v41; // esi
  __m128 v43; // [esp-160h] [ebp-16Ch]
  __m128 v44; // [esp-120h] [ebp-12Ch]
  __m128 v45; // [esp-110h] [ebp-11Ch]
  __m128 v46; // [esp-100h] [ebp-10Ch]
  __m128 v47; // [esp-E0h] [ebp-ECh]
  __m128 v48; // [esp-D0h] [ebp-DCh]
  __m128 v49; // [esp-C0h] [ebp-CCh]
  __m128 v50; // [esp-B0h] [ebp-BCh]
  __m128 v51; // [esp-A0h] [ebp-ACh]
  __m128 v52; // [esp-90h] [ebp-9Ch]
  __m128 v53; // [esp-80h] [ebp-8Ch]
  __m128 v54; // [esp-70h] [ebp-7Ch]
  __m128 v55; // [esp-60h] [ebp-6Ch]
  __m128 v56; // [esp-50h] [ebp-5Ch]
  __m128 v57; // [esp-40h] [ebp-4Ch]
  __m128 v59; // [esp-20h] [ebp-2Ch]
  int v60; // [esp-Ch] [ebp-18h]
  __m128 *v61; // [esp-8h] [ebp-14h]
  unsigned int v62; // [esp-4h] [ebp-10h]
  int v63; // [esp-4h] [ebp-10h]

  v7 = *(float *)(this + 156) - *(float *)(this + 160);
  v8 = (__m128 *)a2[3];
  v53 = _mm_shuffle_ps((__m128)*a3, (__m128)*a3, 0);
  v54 = _mm_shuffle_ps((__m128)a3[1], (__m128)a3[1], 0);
  v55 = _mm_shuffle_ps((__m128)a3[2], (__m128)a3[2], 0);
  v52 = _mm_shuffle_ps((__m128)*(unsigned int *)(this + 156), (__m128)*(unsigned int *)(this + 156), 0);
  v60 = a2[2];
  v10 = *(_DWORD *)(this + 140);
  v61 = *(__m128 **)(this + 144);
  v11 = v61 + 5;
  *(float *)&v62 = 1.0 / v7;
  v57 = _mm_shuffle_ps((__m128)v62, (__m128)v62, 0);
  v12 = (__m128)*(unsigned int *)(this + 160);
  v44 = _mm_shuffle_ps(v12, v12, 0);
  v46 = _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT(0.0), (__m128)COERCE_UNSIGNED_INT(0.0), 0);
  v47 = _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT(1.0), (__m128)COERCE_UNSIGNED_INT(1.0), 0);
  v49 = _mm_shuffle_ps((__m128)*a4, (__m128)*a4, 0);
  v50 = _mm_shuffle_ps((__m128)a4[1], (__m128)a4[1], 0);
  v51 = _mm_shuffle_ps((__m128)a4[2], (__m128)a4[2], 0);
  v14 = 2;
  do
  {
    v56 = v8[2];
    v15 = _mm_sub_ps(v56, v55);
    v45 = *v8;
    v16 = _mm_sub_ps(*v8, v53);
    v48 = v8[1];
    v17 = _mm_sub_ps(v48, v54);
    v18 = _mm_mul_ps(v16, v16);
    v19 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v17, v17), v18), _mm_mul_ps(v15, v15));
    v59 = v19;
    v63 = _mm_movemask_ps(
            _mm_or_ps(
              _mm_add_ps(_mm_add_ps(_mm_mul_ps(v50, v17), _mm_mul_ps(v49, v16)), _mm_mul_ps(v15, v51)),
              _mm_cmplt_ps(v52, v19)));
    if ( v63 != 15 )
    {
      v20 = _mm_xor_ps((__m128)xmmword_10394250, v17);
      v21 = _mm_rsqrt_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(v20, v20), v18),
                _mm_mul_ps((__m128)xmmword_10394140, (__m128)xmmword_10394140)));
      v22 = _mm_mul_ps(v21, (__m128)xmmword_10394140);
      v23 = _mm_mul_ps(v21, v20);
      v24 = _mm_mul_ps(v21, v16);
      v25 = _mm_mul_ps(v8[3], v23);
      v26 = v8[3];
      v27 = _mm_mul_ps(v26, v22);
      v28 = v8[4];
      v11[8] = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_sub_ps(
                     (__m128)xmmword_10394150,
                     _mm_min_ps(
                       _mm_max_ps(_mm_mul_ps(_mm_sub_ps(v19, v44), v57), (__m128)xmmword_10394140),
                       (__m128)xmmword_10394150)),
                   (__m128)xmmword_103DDC40),
                 (__m128)xmmword_103DDC30);
      v29 = _mm_mul_ps(v26, v24);
      v30 = _mm_mul_ps(v28, v46);
      v31 = _mm_add_ps(v45, v25);
      *v61 = v31;
      v43 = _mm_mul_ps(v28, v47);
      v32 = _mm_add_ps(v56, v27);
      v11[-3] = v32;
      v33 = _mm_sub_ps(v32, v43);
      v34 = _mm_add_ps(v48, v29);
      v11[-4] = v34;
      *v11 = v33;
      v35 = _mm_sub_ps(_mm_sub_ps(v33, v27), v27);
      v36 = _mm_sub_ps(v31, v30);
      v11[-2] = v36;
      v37 = _mm_sub_ps(v34, v30);
      v11[-1] = v37;
      v11[3] = v35;
      v38 = _mm_sub_ps(_mm_sub_ps(v36, v25), v25);
      v11[1] = v38;
      v39 = _mm_sub_ps(_mm_sub_ps(v37, v29), v29);
      v11[2] = v39;
      v11[6] = _mm_add_ps(v35, v43);
      v11[4] = _mm_add_ps(v38, v30);
      v11[5] = _mm_add_ps(v39, v30);
      v11[9] = v8[6];
      v11[7] = v8[5];
      *(float *)(v10 + 4) = v59.m128_f32[0];
      *(_DWORD *)v10 = v14 - 2;
      *(_DWORD *)(v10 + 8) = v14 - 1;
      v61 += 15;
      *(float *)(v10 + 12) = v59.m128_f32[1];
      *(float *)(v10 + 20) = v59.m128_f32[2];
      *(_DWORD *)(v10 + 16) = v14;
      *(_DWORD *)(v10 + 24) = v14 + 1;
      *(float *)(v10 + 28) = v59.m128_f32[3];
      v14 += 4;
      v10 += 32;
      v11 += 15;
    }
    v8 += 7;
    --v60;
  }
  while ( v60 );
  v40 = (v10 - *(_DWORD *)(this + 140)) >> 3;
  v41 = v40;
  if ( v63 != 15 )
    v41 = v40 - (-a2[1] & 3);
  if ( v41 )
  {
    if ( 8 * v41 > 8 )
      sub_10095E80(
        *(_DWORD *)(this + 140),
        *(_DWORD *)(this + 140) + 8 * v41,
        (unsigned __int8 (__cdecl *)(_DWORD *, _DWORD *))sub_10094B10);
    sub_100975E0(
      *(char **)(this + 140),
      *(_DWORD *)(this + 140) + 8 * v41,
      (unsigned __int8 (__cdecl *)(int, int))sub_10094B10);
  }
  return v41;
}
