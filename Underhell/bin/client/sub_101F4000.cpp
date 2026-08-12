double __cdecl sub_101F4000(unsigned int a1)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm4
  __m128i v3; // xmm2
  __m128 v4; // xmm5

  v1 = _mm_and_ps((__m128)a1, (__m128)0x7FFFFFFFu);
  v1.m128_f32[0] = (float)(v1.m128_f32[0] + 1.5707964) * 0.63661975;
  v2 = (__m128)0x3F800000u;
  v3 = _mm_cvttps_epi32(v1);
  v4 = (__m128)_mm_cmpeq_epi32(_mm_and_si128(_mm_cvtsi32_si128(1u), v3), (__m128i)0LL);
  v1.m128_f32[0] = fminf(v1.m128_f32[0] - _mm_cvtepi32_ps(v3).m128_f32[0], 1.0);
  v2.m128_f32[0] = 1.0 - v1.m128_f32[0];
  v1.m128_i32[0] = v1.m128_i32[0] & v4.m128_i32[0] | _mm_andnot_ps(v4, v2).m128_u32[0];
  return (float)((float)((float)((float)((float)((float)((float)((float)(v1.m128_f32[0] * v1.m128_f32[0]) * -0.0046817539)
                                                       + 0.079692625)
                                               * (float)(v1.m128_f32[0] * v1.m128_f32[0]))
                                       + -0.64596409)
                               * (float)(v1.m128_f32[0] * v1.m128_f32[0]))
                       + 1.5707964)
               * COERCE_FLOAT(v1.m128_i32[0] | (_mm_and_si128(v3, _mm_cvtsi32_si128(2u)).m128i_u32[0] << 30)));
}
