float *__usercall sub_10426B70@<eax>(__m128 a1@<xmm2>, __m128 a2@<xmm6>, float a3, float *a4, float *a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  int v7; // ecx
  int v8; // edx
  __m128 v9; // xmm3
  __int32 v10; // xmm4_4
  float *result; // eax
  float v12; // xmm5_4

  v5 = (__m128)LODWORD(a3);
  v5.m128_f32[0] = a3 * 0.63661975;
  v6 = _mm_and_ps(v5, (__m128)0x7FFFFFFFu);
  v7 = (int)v6.m128_f32[0] << 30;
  v8 = ((int)v6.m128_f32[0] + 1) << 30;
  v9 = (__m128)(unsigned int)dword_105C7688[(int)v6.m128_f32[0] & 1];
  v6.m128_f32[0] = fminf(v6.m128_f32[0] - (float)(int)v6.m128_f32[0], 1.0);
  a2.m128_f32[0] = 1.0 - v6.m128_f32[0];
  v10 = a2.m128_i32[0] & v9.m128_i32[0];
  a1.m128_f32[0] = v9.m128_f32[0];
  v9.m128_f32[0] = _mm_andnot_ps(v9, v6).m128_f32[0];
  result = a4;
  v6.m128_i32[0] = v6.m128_i32[0] & a1.m128_i32[0] | _mm_andnot_ps(a1, a2).m128_u32[0];
  LODWORD(v12) = v10 | v9.m128_i32[0];
  *a4 = (float)((float)((float)((float)((float)((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) * -0.0046817539)
                                              + 0.079692625)
                                      * (float)(v6.m128_f32[0] * v6.m128_f32[0]))
                              + -0.64596409)
                      * (float)(v6.m128_f32[0] * v6.m128_f32[0]))
              + 1.5707964)
      * COERCE_FLOAT(v6.m128_i32[0] | LODWORD(a3) & 0x80000000 ^ v7 & 0x80000000);
  *a5 = (float)((float)((float)((float)((float)((float)((float)(v12 * v12) * -0.0046817539) + 0.079692625)
                                      * (float)(v12 * v12))
                              + -0.64596409)
                      * (float)(v12 * v12))
              + 1.5707964)
      * COERCE_FLOAT(LODWORD(v12) | v8 & 0x80000000);
  return result;
}
