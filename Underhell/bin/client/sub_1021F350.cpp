void __thiscall sub_1021F350(__m128 *this, int a2, int a3)
{
  double v3; // st7
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm1

  if ( 0.0 == this[4].m128_f32[0] )
    v3 = 0.5;
  else
    v3 = this[4].m128_f32[0];
  v4 = 0;
  this[4].m128_f32[0] = v3;
  v4.m128_f32[0] = this[4].m128_f32[0];
  v5 = _mm_shuffle_ps(v4, v4, 0);
  v6 = _mm_rcp_ps(v5);
  this[5] = _mm_sub_ps(_mm_sub_ps(_mm_add_ps(v6, v6), _mm_mul_ps(_mm_mul_ps(v6, v6), v5)), (__m128)xmmword_10394160);
}
