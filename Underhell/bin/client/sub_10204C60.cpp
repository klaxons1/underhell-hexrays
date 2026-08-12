int __stdcall sub_10204C60(int a1, float a2, int a3, float a4, int a5, int a6, int a7)
{
  int v7; // edi
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 *v10; // esi
  int v11; // ebx
  int v12; // edi
  __m128 v13; // xmm0
  int v15; // [esp+Ch] [ebp-38h]
  __m128 v16; // [esp+14h] [ebp-30h] BYREF
  __m128 v17; // [esp+24h] [ebp-20h]
  __m128 v18; // [esp+34h] [ebp-10h]

  v7 = *(_DWORD *)(a5 + 4 * a1 + 6324) >> 2;
  v8 = 0;
  v8.m128_f32[0] = a2;
  v18 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = *(float *)&a3 - a2;
  v10 = (__m128 *)(*(_DWORD *)(a5 + 4 * a1 + 6068) + 16 * a6 * v7);
  v17 = _mm_shuffle_ps(v9, v9, 0);
  v11 = a7;
  v15 = sub_102AF3A0();
  if ( a7 )
  {
    v12 = 16 * v7;
    do
    {
      --v11;
      v16 = sub_102AF370(v15);
      v13 = sub_101F41F0(&v16, (int)a4);
      *v10 = _mm_add_ps(_mm_mul_ps(v13, v17), v18);
      v10 = (__m128 *)((char *)v10 + v12);
    }
    while ( v11 );
  }
  return sub_102AF3F0(v15);
}
