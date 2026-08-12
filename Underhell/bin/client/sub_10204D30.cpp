int __stdcall sub_10204D30(int a1, float a2, int a3, float a4, int a5, int a6, int a7, char a8)
{
  int v8; // ebx
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 *v11; // esi
  int v12; // edi
  double v13; // st7
  int v15; // ebx
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  int v18; // ebx
  __m128 v19; // xmm2
  __m128 v20; // [esp+14h] [ebp-50h]
  __m128 v21; // [esp+24h] [ebp-40h]
  __m128 v22; // [esp+34h] [ebp-30h] BYREF
  __m128 v23; // [esp+44h] [ebp-20h] BYREF
  __m128 v24; // [esp+54h] [ebp-10h]

  v8 = *(_DWORD *)(a5 + 4 * a1 + 6324) >> 2;
  v9 = 0;
  v9.m128_f32[0] = a2;
  v21 = _mm_shuffle_ps(v9, v9, 0);
  v10 = 0;
  v10.m128_f32[0] = *(float *)&a3 - a2;
  v11 = (__m128 *)(*(_DWORD *)(a5 + 4 * a1 + 6068) + 16 * a6 * v8);
  v20 = _mm_shuffle_ps(v10, v10, 0);
  v12 = sub_102AF3A0();
  v13 = a4;
  if ( !a8 )
  {
    if ( a4 == 1.0 )
    {
      if ( a7 )
      {
        v15 = 16 * v8;
        do
        {
          --a7;
          *v11 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(sub_102AF370(v12), v20), v21), *v11);
          v11 = (__m128 *)((char *)v11 + v15);
        }
        while ( a7 );
      }
    }
    else if ( a7 )
    {
      do
      {
        --a7;
        v22 = sub_102AF370(v12);
        *v11 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(sub_101F41F0(&v22, (int)v13), v20), v21), *v11);
        v11 += v8;
      }
      while ( a7 );
      return sub_102AF3F0(v12);
    }
    return sub_102AF3F0(v12);
  }
  v16 = 0;
  v16.m128_f32[0] = -1.0;
  v22 = _mm_shuffle_ps(v16, v16, 0);
  if ( a4 == 1.0 )
  {
    if ( a7 )
    {
      v18 = 16 * v8;
      do
      {
        --a7;
        v24 = sub_102AF370(v12);
        v19 = _mm_cmple_ps((__m128)xmmword_10394130, sub_102AF370(v12));
        *v11 = _mm_add_ps(
                 _mm_mul_ps(
                   _mm_or_ps(_mm_and_ps(v19, (__m128)xmmword_10394150), _mm_andnot_ps(v19, v22)),
                   _mm_add_ps(_mm_mul_ps(v24, v20), v21)),
                 *v11);
        v11 = (__m128 *)((char *)v11 + v18);
      }
      while ( a7 );
    }
    return sub_102AF3F0(v12);
  }
  if ( !a7 )
    return sub_102AF3F0(v12);
  do
  {
    --a7;
    v23 = sub_102AF370(v12);
    v24 = sub_101F41F0(&v23, (int)v13);
    v17 = _mm_cmple_ps((__m128)xmmword_10394130, sub_102AF370(v12));
    *v11 = _mm_add_ps(
             _mm_mul_ps(
               _mm_or_ps(_mm_and_ps(v17, (__m128)xmmword_10394150), _mm_andnot_ps(v17, v22)),
               _mm_add_ps(_mm_mul_ps(v24, v20), v21)),
             *v11);
    v11 += v8;
  }
  while ( a7 );
  return sub_102AF3F0(v12);
}
