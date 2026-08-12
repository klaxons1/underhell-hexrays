__m128 *__cdecl sub_10227670(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  __m128 *v5; // ebx
  __m128 v6; // xmm0
  int v7; // edi
  __m128 v8; // xmm0
  __m128 v9; // xmm5
  __m128 v10; // xmm0
  __m128 v11; // xmm4
  int v12; // ecx
  int v13; // esi
  __m128 *result; // eax
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  __m128 v17; // xmm6
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm4
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  char v23; // [esp+Bh] [ebp-49h]
  int v24; // [esp+Ch] [ebp-48h]
  __m128 *v25; // [esp+14h] [ebp-40h]
  __m128 *v26; // [esp+1Ch] [ebp-38h]
  __m128 v27; // [esp+24h] [ebp-30h]
  __m128 v28; // [esp+34h] [ebp-20h]
  __m128 v29; // [esp+44h] [ebp-10h]

  v5 = (__m128 *)a5[1524];
  v6 = 0;
  v25 = (__m128 *)a5[1533];
  v26 = (__m128 *)a5[1520];
  v7 = a5[10];
  v6.m128_f32[0] = *(float *)a4;
  v27 = _mm_shuffle_ps(v6, v6, 0);
  v8 = 0;
  v8.m128_f32[0] = *(float *)(a4 + 4);
  v28 = _mm_shuffle_ps(v8, v8, 0);
  v9 = _mm_add_ps((__m128)xmmword_103941D0, (__m128)xmmword_10394230);
  v10 = 0;
  v10.m128_f32[0] = 255.0;
  v29 = _mm_shuffle_ps(v10, v10, 0);
  v11 = v29;
  v23 = *(_BYTE *)(a4 + 8);
  v12 = 16 * (a5[1588] >> 2);
  v24 = 16 * (a5[1597] >> 2);
  v13 = 16 * (a5[1584] >> 2);
  result = (__m128 *)&unk_10465D90;
  do
  {
    v15 = *v26;
    v16 = _mm_mul_ps(*v25, *v5);
    if ( v23 )
    {
      v15 = _mm_mul_ps(v15, v28);
      v16 = _mm_max_ps((__m128)xmmword_10394140, _mm_min_ps((__m128)xmmword_10394150, _mm_mul_ps(v16, v27)));
    }
    v25 = (__m128 *)((char *)v25 + v24);
    v17 = _mm_add_ps(_mm_mul_ps(v16, v29), (__m128)xmmword_103941D0);
    v18 = _mm_and_ps((__m128)xmmword_10394290, v9);
    v19 = _mm_shuffle_ps(v11, v18, 238);
    v20 = _mm_shuffle_ps(v11, v18, 68);
    v21 = _mm_shuffle_ps(v15, v17, 68);
    result[-1] = _mm_shuffle_ps(v20, v21, 221);
    v22 = _mm_shuffle_ps(v15, v17, 238);
    *result = _mm_shuffle_ps(v19, v22, 136);
    v11 = _mm_shuffle_ps(v20, v21, 136);
    v26 = (__m128 *)((char *)v26 + v13);
    result[-2] = v11;
    result[1] = _mm_shuffle_ps(v19, v22, 221);
    v7 -= 4;
    result += 4;
    v5 = (__m128 *)((char *)v5 + v12);
    v9 = _mm_add_ps((__m128)xmmword_10394180, v9);
  }
  while ( v7 > 0 );
  return result;
}
