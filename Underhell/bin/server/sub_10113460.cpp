bool __fastcall sub_10113460(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, unsigned int a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm7
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // [esp-30h] [ebp-3Ch]
  __m128 v24; // [esp-20h] [ebp-2Ch]

  v5 = _mm_shuffle_ps((__m128)a5, (__m128)a5, 0);
  v6 = _mm_add_ps(_mm_sub_ps(*a2, *a3), v5);
  v7 = _mm_sub_ps(_mm_sub_ps(*a1, *a3), v5);
  v8 = _mm_cmplt_ps(v6, *a4);
  v24 = _mm_cmplt_ps(v6, (__m128)xmmword_105C7320);
  v9 = _mm_cmplt_ps(*a4, v7);
  v23 = _mm_cmplt_ps((__m128)xmmword_105C7320, v7);
  if ( _mm_movemask_ps(_mm_and_ps(_mm_or_ps(_mm_and_ps(v8, v24), _mm_and_ps(v9, v23)), (__m128)xmmword_105C7450)) )
    return 0;
  v11 = _mm_or_ps(_mm_and_ps(_mm_cmpeq_ps((__m128)xmmword_105C7320, *a4), (__m128)xmmword_105C73E0), *a4);
  v12 = _mm_rcp_ps(v11);
  v13 = _mm_mul_ps(_mm_mul_ps(v12, v12), v11);
  v14 = _mm_or_ps(_mm_xor_ps(v8, v24), _mm_xor_ps(v9, v23));
  v15 = _mm_sub_ps(_mm_add_ps(v12, v12), v13);
  v16 = _mm_mul_ps(v15, v7);
  v17 = _mm_or_ps(_mm_and_ps(_mm_mul_ps(v15, v6), v14), _mm_andnot_ps(v14, (__m128)xmmword_105C73F0));
  v18 = _mm_or_ps(_mm_and_ps(v16, v14), _mm_andnot_ps(v14, (__m128)xmmword_105C7400));
  v19 = _mm_max_ps(v18, v17);
  v20 = _mm_min_ps(v18, v17);
  v21 = _mm_min_ps(_mm_min_ps(v19, _mm_shuffle_ps(v19, v19, 57)), _mm_shuffle_ps(v19, v19, 78));
  v22 = _mm_max_ps(_mm_max_ps(v20, _mm_shuffle_ps(v20, v20, 57)), _mm_shuffle_ps(v20, v20, 78));
  return _mm_movemask_ps(
           _mm_cmpeq_ps(
             _mm_cmplt_ps(
               _mm_min_ps(_mm_shuffle_ps(v21, v21, 0), (__m128)xmmword_105C7330),
               _mm_max_ps(_mm_shuffle_ps(v22, v22, 0), (__m128)xmmword_105C7320)),
             (__m128)xmmword_105C7320)) == 15;
}
