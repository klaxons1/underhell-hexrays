int __thiscall sub_1021E550(int this, _DWORD *a2, int a3, int a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm4
  __m128 v6; // xmm1
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  int v13; // edi
  int result; // eax
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm6
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm6
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  int v28; // ecx
  int v29; // [esp+10h] [ebp-40h]
  unsigned int v30; // [esp+14h] [ebp-3Ch]
  __m128 *v31; // [esp+18h] [ebp-38h]
  __m128 v32; // [esp+30h] [ebp-20h]
  __m128 v33; // [esp+40h] [ebp-10h]

  v4 = 0;
  v4.m128_f32[0] = *(float *)(this + 48);
  v5 = _mm_shuffle_ps(v4, v4, 0);
  v6 = 0;
  v6.m128_f32[0] = *(float *)(this + 52);
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v8 = 0;
  v8.m128_f32[0] = *(float *)(this + 56);
  v9 = _mm_shuffle_ps(v8, v8, 0);
  v10 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v7, v7), _mm_mul_ps(v5, v5)), _mm_mul_ps(v9, v9));
  v11 = _mm_rsqrt_ps(v10);
  v31 = (__m128 *)a2[1517];
  v12 = _mm_mul_ps(
          _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v11, v11), v10)), v11),
          (__m128)xmmword_10394130);
  v33 = _mm_mul_ps(v9, v12);
  v13 = 4 * a2[8];
  result = (int)&a2[17 * *(_DWORD *)(this + 44) + 22];
  v15 = _mm_mul_ps(v7, v12);
  v16 = _mm_mul_ps(v12, v5);
  v17 = 0;
  v17.m128_f32[0] = *(float *)result;
  v18 = 0;
  v18.m128_f32[0] = *(float *)&a2[17 * *(_DWORD *)(this + 44) + 23];
  v19 = v18;
  v20 = 0;
  v20.m128_f32[0] = *(float *)&a2[17 * *(_DWORD *)(this + 44) + 24];
  v21 = 0;
  v21.m128_f32[0] = *(float *)(this + 60);
  v22 = _mm_shuffle_ps(v21, v21, 0);
  v32 = v15;
  v23 = _mm_mul_ps(v15, v22);
  v24 = _mm_mul_ps(v33, v22);
  v29 = v13;
  v25 = _mm_sub_ps(_mm_shuffle_ps(v17, v17, 0), _mm_mul_ps(v16, v22));
  v26 = _mm_sub_ps(_mm_shuffle_ps(v19, v19, 0), v23);
  v27 = _mm_sub_ps(_mm_shuffle_ps(v20, v20, 0), v24);
  if ( v13 > 0 )
  {
    v30 = 48 * (a2[1581] / 0xCu);
    result = 2;
    do
    {
      v28 = _mm_movemask_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v31[1], v26), v32), _mm_mul_ps(_mm_sub_ps(*v31, v25), v16)),
                _mm_mul_ps(_mm_sub_ps(v31[2], v27), v33)));
      if ( v28 )
      {
        if ( (v28 & 1) != 0 )
        {
          *(_DWORD *)(a2[1667] + 4 * a2[1666]++) = result - 2;
          v13 = v29;
        }
        if ( (v28 & 2) != 0 )
        {
          *(_DWORD *)(a2[1667] + 4 * a2[1666]++) = result - 1;
          v13 = v29;
        }
        if ( (v28 & 4) != 0 )
          *(_DWORD *)(a2[1667] + 4 * a2[1666]++) = result;
        if ( (v28 & 8) != 0 )
          *(_DWORD *)(a2[1667] + 4 * a2[1666]++) = result + 1;
      }
      v31 = (__m128 *)((char *)v31 + v30);
      result += 4;
    }
    while ( result - 2 < v13 );
  }
  return result;
}
