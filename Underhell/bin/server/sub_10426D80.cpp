float *__cdecl sub_10426D80(unsigned int a1, float *a2, float *a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm4
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128 v7; // xmm5
  float *result; // eax
  float v9; // xmm6_4

  v3 = _mm_and_ps((__m128)a1, (__m128)0x7FFFFFFFu);
  v3.m128_f32[0] = v3.m128_f32[0] * 0.63661975;
  v4 = (__m128)0x3F800000u;
  v5 = _mm_cvttps_epi32(v3);
  v6 = _mm_cvtsi32_si128(2u);
  v7 = (__m128)_mm_cmpeq_epi32(_mm_and_si128(_mm_cvtsi32_si128(1u), v5), (__m128i)0LL);
  v3.m128_f32[0] = fminf(v3.m128_f32[0] - _mm_cvtepi32_ps(v5).m128_f32[0], 1.0);
  result = a2;
  v4.m128_f32[0] = 1.0 - v3.m128_f32[0];
  LODWORD(v9) = COERCE_UNSIGNED_INT(1.0 - v3.m128_f32[0]) & v7.m128_i32[0] | _mm_andnot_ps(v7, v3).m128_u32[0];
  v3.m128_i32[0] = v3.m128_i32[0] & v7.m128_i32[0] | _mm_andnot_ps(v7, v4).m128_u32[0];
  *a2 = (float)((float)((float)((float)((float)((float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * -0.0046817539)
                                              + 0.079692625)
                                      * (float)(v3.m128_f32[0] * v3.m128_f32[0]))
                              + -0.64596409)
                      * (float)(v3.m128_f32[0] * v3.m128_f32[0]))
              + 1.5707964)
      * COERCE_FLOAT(v3.m128_i32[0] | (_mm_and_si128(v5, v6).m128i_u32[0] << 30) ^ a1 & 0x80000000);
  *a3 = (float)((float)((float)((float)((float)((float)((float)(v9 * v9) * -0.0046817539) + 0.079692625)
                                      * (float)(v9 * v9))
                              + -0.64596409)
                      * (float)(v9 * v9))
              + 1.5707964)
      * COERCE_FLOAT(LODWORD(v9) | (_mm_and_si128(_mm_add_epi32(_mm_cvtsi32_si128(1u), v5), v6).m128i_u32[0] << 30));
  return result;
}
