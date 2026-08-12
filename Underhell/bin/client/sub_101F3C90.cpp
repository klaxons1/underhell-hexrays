double __usercall sub_101F3C90@<st0>(__m128 a1@<xmm3>, __m128 *a2)
{
  __m128 v2; // xmm1

  v2 = _mm_mul_ps(*a2, *a2);
  return (float)(1.0
               / fmaxf(
                   (float)(v2.m128_f32[0] + _mm_shuffle_ps(v2, v2, 1).m128_f32[0]) + _mm_movehl_ps(a1, v2).m128_f32[0],
                   1.0));
}
