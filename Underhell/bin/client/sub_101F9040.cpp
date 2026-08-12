__m128 *__thiscall sub_101F9040(float *this, int a2, float a3, __m128 *a4)
{
  __m128 *result; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  float *v9; // ecx
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float *v14; // ecx
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  float v17[3]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_101F8ED0((int)this, a2, a3, v17);
  result = a4;
  v6 = 0;
  v6.m128_f32[0] = this[17 * a2 + 28];
  a4[3] = _mm_shuffle_ps(v6, v6, 0);
  v7 = 0;
  v7.m128_f32[0] = this[17 * a2 + 29];
  a4[4] = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0;
  v8.m128_f32[0] = this[17 * a2 + 30];
  v9 = &this[17 * a2];
  a4[5] = _mm_shuffle_ps(v8, v8, 0);
  v10 = 0;
  v10.m128_f32[0] = v9[31];
  a4[6] = _mm_shuffle_ps(v10, v10, 0);
  v11 = 0;
  v11.m128_f32[0] = v9[32];
  a4[7] = _mm_shuffle_ps(v11, v11, 0);
  v12 = 0;
  v12.m128_f32[0] = v9[33];
  a4[8] = _mm_shuffle_ps(v12, v12, 0);
  v13 = 0;
  v13.m128_f32[0] = this[17 * a2 + 34];
  v14 = &this[17 * a2 + 34];
  a4[9] = _mm_shuffle_ps(v13, v13, 0);
  v15 = 0;
  v15.m128_f32[0] = v14[1];
  a4[10] = _mm_shuffle_ps(v15, v15, 0);
  v16 = 0;
  v16.m128_f32[0] = v14[2];
  a4[11] = _mm_shuffle_ps(v16, v16, 0);
  return result;
}
