double __usercall sub_101D9AE0@<st0>(
        int a1@<edx>,
        __m128 *a2@<ecx>,
        int a3@<edi>,
        float a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned __int8 a8)
{
  int v9; // eax
  __m128 v10; // xmm2
  int v11; // edx
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  __m128 v15; // xmm5
  int v16; // esi
  __m128 v17; // xmm0
  __m128 v18; // xmm7
  __m128 v19; // xmm0
  float v21; // [esp+4h] [ebp-18h]
  unsigned int v22; // [esp+8h] [ebp-14h]

  v9 = (a7 + 3) / 4;
  v10 = 0;
  v21 = (*(float *)&a6 - *(float *)&a5) / (double)(a8 - 1);
  if ( v9 > 0 )
  {
    v11 = a3 - (_DWORD)a2;
    *(float *)&v22 = 1.0 / v21;
    v12 = _mm_shuffle_ps((__m128)v22, (__m128)v22, 0);
    v13 = _mm_shuffle_ps((__m128)LODWORD(v21), (__m128)LODWORD(v21), 0);
    v14 = _mm_shuffle_ps((__m128)a5, (__m128)a5, 0);
    v15 = _mm_shuffle_ps((__m128)a6, (__m128)a6, 0);
    v16 = a1 - (_DWORD)a2;
    do
    {
      v17 = _mm_sub_ps(
              *a2,
              _mm_min_ps(
                _mm_max_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(_mm_sub_ps(*a2, v14), v12))), v13),
                    v14),
                  v14),
                v15));
      v18 = _mm_add_ps(_mm_mul_ps(*(__m128 *)((char *)a2 + v11), _mm_mul_ps(v17, v17)), *(__m128 *)((char *)a2 + v16));
      ++a2;
      --v9;
      v10 = _mm_add_ps(v18, v10);
    }
    while ( v9 );
  }
  v19 = _mm_add_ps(_mm_movelh_ps(v10, (__m128)0LL), _mm_movehl_ps((__m128)0LL, v10));
  return (float)(_mm_shuffle_ps(v19, (__m128)0LL, 13).m128_f32[0] + v19.m128_f32[0]);
}
