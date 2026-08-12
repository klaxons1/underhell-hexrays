int __thiscall sub_10202620(float *this, __m128 *a2, int a3, int a4, float a5, int a6)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  __m128 v11; // xmm5
  int v12; // ebx
  int v13; // edi
  float v16; // [esp+8h] [ebp-6Ch]
  float v17; // [esp+8h] [ebp-6Ch]
  float v18; // [esp+Ch] [ebp-68h]
  float v19; // [esp+Ch] [ebp-68h]
  float v20; // [esp+10h] [ebp-64h]
  float v21; // [esp+10h] [ebp-64h]
  __m128 v22; // [esp+14h] [ebp-60h]
  __m128 v23; // [esp+24h] [ebp-50h]
  __m128 v24; // [esp+34h] [ebp-40h]
  __m128 v25; // [esp+44h] [ebp-30h]
  __m128 v26; // [esp+54h] [ebp-20h]
  __m128 v27; // [esp+64h] [ebp-10h]

  v6 = 0;
  v16 = this[11] * a5;
  v6.m128_f32[0] = v16;
  v25 = _mm_shuffle_ps(v6, v6, 0);
  v18 = this[12] * a5;
  v7 = 0;
  v7.m128_f32[0] = v18;
  v20 = this[13] * a5;
  v26 = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0;
  v8.m128_f32[0] = v20;
  v17 = this[14] * a5;
  v27 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = v17;
  v19 = this[15] * a5;
  v10 = 0;
  v10.m128_f32[0] = v19;
  v21 = a5 * this[16];
  v11 = 0;
  v11.m128_f32[0] = v21;
  v22 = _mm_sub_ps(_mm_shuffle_ps(v9, v9, 0), v25);
  v23 = _mm_sub_ps(_mm_shuffle_ps(v10, v10, 0), v26);
  v24 = _mm_sub_ps(_mm_shuffle_ps(v11, v11, 0), v27);
  v12 = a4;
  v13 = sub_102AF3A0();
  if ( a4 > 0 )
  {
    do
    {
      *a2 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v22, sub_102AF370(v13)), v25), *a2);
      a2[1] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v23, sub_102AF370(v13)), v26), a2[1]);
      a2[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v24, sub_102AF370(v13)), v27), a2[2]);
      a2 += 3;
      --v12;
    }
    while ( v12 );
  }
  return sub_102AF3F0(v13);
}
