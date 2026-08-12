double __cdecl sub_101F3E10(unsigned int a1)
{
  __m128 v1; // xmm0
  unsigned int v2; // edx
  __m128 v3; // xmm6

  v1 = _mm_and_ps((__m128)a1, (__m128)0x7FFFFFFFu);
  v1.m128_f32[0] = (float)(v1.m128_f32[0] + 1.5707964) * 0.63661975;
  v2 = ((int)v1.m128_f32[0] << 30) & 0x80000000;
  v3 = (__m128)(unsigned int)dword_103944E0[(int)v1.m128_f32[0] & 1];
  v1.m128_f32[0] = fminf(v1.m128_f32[0] - (float)(int)v1.m128_f32[0], 1.0);
  v1.m128_i32[0] = COERCE_UNSIGNED_INT(1.0 - v1.m128_f32[0]) & v3.m128_i32[0] | _mm_andnot_ps(v3, v1).m128_u32[0];
  return (float)(COERCE_FLOAT(v1.m128_i32[0] | v2)
               * (float)((float)((float)((float)((float)((float)((float)(v1.m128_f32[0] * v1.m128_f32[0]) * -0.0046817539)
                                                       + 0.079692625)
                                               * (float)(v1.m128_f32[0] * v1.m128_f32[0]))
                                       + -0.64596409)
                               * (float)(v1.m128_f32[0] * v1.m128_f32[0]))
                       + 1.5707964));
}
