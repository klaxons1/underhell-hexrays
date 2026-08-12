int __stdcall sub_10204BB0(int a1, float a2, float a3, int a4, int a5, int a6)
{
  int v6; // edi
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 *v9; // esi
  int v10; // ebx
  int v11; // edi
  int v13; // [esp+0h] [ebp-24h]
  __m128 v14; // [esp+4h] [ebp-20h]
  __m128 v15; // [esp+14h] [ebp-10h]

  v6 = *(_DWORD *)(a4 + 4 * a1 + 6324) >> 2;
  v7 = 0;
  v7.m128_f32[0] = a2;
  v15 = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0;
  v8.m128_f32[0] = a3 - a2;
  v9 = (__m128 *)(*(_DWORD *)(a4 + 4 * a1 + 6068) + 16 * a5 * v6);
  v14 = _mm_shuffle_ps(v8, v8, 0);
  v10 = a6;
  v13 = sub_102AF3A0();
  if ( a6 )
  {
    v11 = 16 * v6;
    do
    {
      --v10;
      *v9 = _mm_add_ps(_mm_mul_ps(sub_102AF370(v13), v14), v15);
      v9 = (__m128 *)((char *)v9 + v11);
    }
    while ( v10 );
  }
  return sub_102AF3F0(v13);
}
