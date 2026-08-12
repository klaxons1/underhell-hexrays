double __usercall sub_101D9FA0@<st0>(
        __m128 *a1@<ecx>,
        int a2@<esi>,
        float a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7)
{
  int v7; // eax
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  __m128 v11; // xmm1
  __m128 v12; // xmm5
  int v13; // edx
  __m128 v14; // xmm0
  __m128 v15; // xmm7
  __m128 v16; // xmm0
  float v18; // [esp+8h] [ebp-18h]
  unsigned int v19; // [esp+Ch] [ebp-14h]

  v7 = (a6 + 3) / 4;
  v8 = 0;
  v18 = (*(float *)&a5 - *(float *)&a4) / (double)(a7 - 1);
  if ( v7 > 0 )
  {
    *(float *)&v19 = 1.0 / v18;
    v9 = _mm_shuffle_ps((__m128)v19, (__m128)v19, 0);
    v10 = _mm_shuffle_ps((__m128)LODWORD(v18), (__m128)LODWORD(v18), 0);
    v11 = _mm_shuffle_ps((__m128)a4, (__m128)a4, 0);
    v12 = _mm_shuffle_ps((__m128)a5, (__m128)a5, 0);
    v13 = a2 - (_DWORD)a1;
    do
    {
      v14 = _mm_sub_ps(
              *a1,
              _mm_min_ps(
                _mm_max_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(_mm_sub_ps(*a1, v11), v9))), v10),
                    v11),
                  v11),
                v12));
      v15 = _mm_mul_ps(*(__m128 *)((char *)a1++ + v13), _mm_mul_ps(v14, v14));
      --v7;
      v8 = _mm_add_ps(v15, v8);
    }
    while ( v7 );
  }
  v16 = _mm_add_ps(_mm_movelh_ps(v8, (__m128)0LL), _mm_movehl_ps((__m128)0LL, v8));
  return (float)(_mm_shuffle_ps(v16, (__m128)0LL, 13).m128_f32[0] + v16.m128_f32[0]);
}
