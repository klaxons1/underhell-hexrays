__m128 *__thiscall sub_102130A0(__m128 *this, __m128 *a2)
{
  __m128 *result; // eax
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm6
  __m128 v6; // xmm4
  __m128 v7; // xmm5
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm0

  result = a2;
  v3 = a2[2];
  v4 = a2[1];
  v5 = 0;
  v5.m128_f32[0] = a2->m128_f32[3];
  v6 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *this);
  v7 = this[2];
  v8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *this), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), this[1]));
  *this = _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), this[1]),
                _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *this)),
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v7)),
            _mm_shuffle_ps(v5, v5, 0));
  v9 = 0;
  v9.m128_f32[0] = a2[1].m128_f32[3];
  this[1] = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), this[1]), v6),
                _mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v7)),
              _mm_shuffle_ps(v9, v9, 0));
  v10 = 0;
  v10.m128_f32[0] = a2[2].m128_f32[3];
  this[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), v7), v8), _mm_shuffle_ps(v10, v10, 0));
  return result;
}
