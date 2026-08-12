void __thiscall sub_1021BDF0(int this, int a2, int a3, int a4)
{
  __m128 *v4; // esi
  __m128 *v5; // edx
  __m128 v6; // xmm4
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm5
  int v10; // ebx
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  int v22; // [esp+18h] [ebp-58h]
  unsigned int v23; // [esp+20h] [ebp-50h]
  float v24; // [esp+24h] [ebp-4Ch]
  int v25; // [esp+24h] [ebp-4Ch]
  __m128 *v26; // [esp+28h] [ebp-48h]
  __m128 *v27; // [esp+30h] [ebp-40h]
  unsigned int v28; // [esp+3Ch] [ebp-34h]
  __m128 v29; // [esp+40h] [ebp-30h]
  __m128 v30; // [esp+50h] [ebp-20h]
  __m128 v31; // [esp+60h] [ebp-10h]

  v4 = *(__m128 **)(a2 + 6092);
  v23 = *(_DWORD *)(a2 + 6348) / 0xCu;
  v26 = *(__m128 **)(a2 + 6100);
  v27 = *(__m128 **)(a2 + 6072);
  v28 = *(_DWORD *)(a2 + 6476) / 0xCu;
  v5 = *(__m128 **)(a2 + 6220);
  if ( *(float *)(this + 60) != *(float *)(this + 64) )
  {
    v6 = *(__m128 *)(a2 + 16);
    v7 = (__m128)xmmword_10394140;
    v8 = 0;
    v9 = 0;
    v10 = 16 * (*(_DWORD *)(a2 + 6356) >> 2);
    v22 = *(_DWORD *)(a2 + 32);
    v24 = 1.0 / (*(float *)(this + 64) - *(float *)(this + 60));
    v8.m128_f32[0] = v24;
    v9.m128_f32[0] = *(float *)(this + 60);
    v25 = 16 * (*(_DWORD *)(a2 + 6328) >> 2);
    v11 = _mm_shuffle_ps(v8, v8, 0);
    v12 = _mm_shuffle_ps(v9, v9, 0);
    v13 = 0;
    v13.m128_f32[0] = *(float *)(this + 48);
    v29 = _mm_shuffle_ps(v13, v13, 0);
    v14 = 0;
    v14.m128_f32[0] = *(float *)(this + 52);
    v30 = _mm_shuffle_ps(v14, v14, 0);
    v15 = 0;
    v15.m128_f32[0] = *(float *)(this + 56);
    v31 = _mm_shuffle_ps(v15, v15, 0);
    if ( *(_BYTE *)(this + 68) )
    {
      do
      {
        v16 = _mm_cmplt_ps(v7, *v27);
        if ( _mm_movemask_ps(v16) )
        {
          v17 = _mm_min_ps(
                  (__m128)xmmword_10394150,
                  _mm_max_ps(v7, _mm_mul_ps(_mm_sub_ps(_mm_div_ps(_mm_sub_ps(v6, *v26), *v27), v12), v11)));
          v18 = _mm_mul_ps(v17, v17);
          v19 = _mm_sub_ps(
                  _mm_mul_ps(v18, (__m128)xmmword_10394170),
                  _mm_mul_ps(_mm_mul_ps((__m128)xmmword_10394160, v17), v18));
          *v4 = _mm_or_ps(
                  _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v29, *v5), v19), *v5), v16),
                  _mm_andnot_ps(v16, *v4));
          v4[1] = _mm_or_ps(
                    _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v30, v5[1]), v19), v5[1]), v16),
                    _mm_andnot_ps(v16, v4[1]));
          v4[2] = _mm_or_ps(
                    _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v31, v5[2]), v19), v5[2]), v16),
                    _mm_andnot_ps(v16, v4[2]));
          v7 = (__m128)xmmword_10394140;
        }
        v26 = (__m128 *)((char *)v26 + v10);
        v27 = (__m128 *)((char *)v27 + v25);
        v4 += 3 * v23;
        v5 += 3 * v28;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      do
      {
        v20 = _mm_cmplt_ps(v7, *v27);
        if ( _mm_movemask_ps(v20) )
        {
          v21 = _mm_min_ps(
                  (__m128)xmmword_10394150,
                  _mm_max_ps(v7, _mm_mul_ps(_mm_sub_ps(_mm_div_ps(_mm_sub_ps(v6, *v26), *v27), v12), v11)));
          *v4 = _mm_or_ps(
                  _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v29, *v5), v21), *v5), v20),
                  _mm_andnot_ps(v20, *v4));
          v4[1] = _mm_or_ps(
                    _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v30, v5[1]), v21), v5[1]), v20),
                    _mm_andnot_ps(v20, v4[1]));
          v4[2] = _mm_or_ps(
                    _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v31, v5[2]), v21), v5[2]), v20),
                    _mm_andnot_ps(v20, v4[2]));
          v7 = (__m128)xmmword_10394140;
        }
        v26 = (__m128 *)((char *)v26 + v10);
        v27 = (__m128 *)((char *)v27 + v25);
        v4 += 3 * v23;
        v5 += 3 * v28;
        --v22;
      }
      while ( v22 );
    }
  }
}
