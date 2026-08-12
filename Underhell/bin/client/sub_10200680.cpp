char __stdcall sub_10200680(int a1, int a2, _DWORD *a3, __m128 *a4, int a5)
{
  unsigned int v5; // ecx
  __m128 *v6; // edi
  __m128 *v7; // eax
  unsigned int v8; // ebx
  int v9; // esi
  __m128 *v10; // edx
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  __m128 v13; // xmm6
  __m128 v14; // xmm5
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  char v18; // [esp+1Bh] [ebp-45h]
  int v19; // [esp+1Ch] [ebp-44h]
  __m128 v20; // [esp+20h] [ebp-40h]

  v5 = 48 * a1 * (a3[1581] / 0xCu) + a3[1517];
  v6 = (__m128 *)(16 * a1 * (a3[1584] >> 2) + a3[1520]);
  v7 = a4;
  v8 = 48 * (a3[1581] / 0xCu);
  v18 = 0;
  v19 = 16 * (a3[1584] >> 2);
  do
  {
    v9 = 0;
    if ( v7[492].m128_i32[0] > 0 )
    {
      v10 = v7 + 370;
      do
      {
        v11 = *(__m128 *)(v5 + 16);
        v12 = *(__m128 *)(v5 + 32);
        v13 = v10[-1];
        v14 = *v10;
        v20 = v10[1];
        v15 = _mm_sub_ps(
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(*v10, _mm_sub_ps(v11, v10[-123])),
                    _mm_mul_ps(v13, _mm_sub_ps(*(__m128 *)v5, v10[-124]))),
                  _mm_mul_ps(v20, _mm_sub_ps(v12, v10[-122]))),
                *v6);
        if ( _mm_movemask_ps(_mm_cmplt_ps(v15, (__m128)xmmword_10394140)) )
        {
          v16 = _mm_min_ps((__m128)xmmword_10394140, v15);
          v18 = 1;
          *(__m128 *)v5 = _mm_sub_ps(*(__m128 *)v5, _mm_mul_ps(v13, v16));
          *(__m128 *)(v5 + 16) = _mm_sub_ps(v11, _mm_mul_ps(v14, v16));
          *(__m128 *)(v5 + 32) = _mm_sub_ps(v12, _mm_mul_ps(v20, v16));
        }
        v7 = a4;
        ++v9;
        v10 += 3;
      }
      while ( v9 < a4[492].m128_i32[0] );
    }
    v6 = (__m128 *)((char *)v6 + v19);
    v5 += v8;
    --a2;
  }
  while ( a2 );
  return v18;
}
