__m128 *__thiscall sub_101F3380(float *this, int a2, __m128 *a3, __m128 *a4, char a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 *result; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  __m128 v15; // xmm1

  v5 = 0;
  v5.m128_f32[0] = this[7];
  v6 = _mm_shuffle_ps(v5, v5, 0);
  v7 = 0;
  v7.m128_f32[0] = this[8];
  v8 = _mm_shuffle_ps(v7, v7, 0);
  v9 = 0;
  v9.m128_f32[0] = this[9];
  v10 = _mm_shuffle_ps(v9, v9, 0);
  if ( a5 )
    v11 = _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(_mm_add_ps(_mm_mul_ps(a3[1], v8), _mm_mul_ps(*a3, v6)), _mm_mul_ps(a3[2], v10)),
              (__m128)xmmword_10394130),
            (__m128)xmmword_10394130);
  else
    v11 = _mm_max_ps(
            (__m128)xmmword_10394140,
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(a3[1], v8), _mm_mul_ps(*a3, v6)), _mm_mul_ps(a3[2], v10)));
  result = a4;
  v13 = 0;
  v13.m128_f32[0] = this[1];
  *a4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v11), *a4);
  v14 = 0;
  v14.m128_f32[0] = this[2];
  a4[1] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v11), a4[1]);
  v15 = 0;
  v15.m128_f32[0] = this[3];
  a4[2] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v11), a4[2]);
  return result;
}
