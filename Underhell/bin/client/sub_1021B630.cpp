int __thiscall sub_1021B630(float *this, int a2, int a3, int a4)
{
  int result; // eax
  __m128 *v5; // ebx
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  int v9; // esi
  __m128 *v10; // edi
  __m128 v11; // xmm2
  int v12; // ecx
  int v13; // ebx
  int v14; // [esp+8h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  __m128 *v17; // [esp+14h] [ebp-10h]
  __m128 *v18; // [esp+1Ch] [ebp-8h]

  result = a2;
  v5 = *(__m128 **)(a2 + 6076);
  v6 = 0;
  v6.m128_f32[0] = this[11];
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v8 = 0;
  v9 = 4 * *(_DWORD *)(a2 + 32);
  v10 = *(__m128 **)(a2 + 6068);
  v8.m128_f32[0] = *(float *)(a2 + 44);
  v11 = _mm_shuffle_ps(v8, v8, 0);
  v17 = v10;
  v18 = v5;
  v14 = v9;
  if ( v9 > 0 )
  {
    v15 = *(_DWORD *)(a2 + 6324) >> 2;
    v16 = *(_DWORD *)(a2 + 6332) >> 2;
    v12 = 2;
    do
    {
      v13 = _mm_movemask_ps(_mm_cmple_ps(_mm_div_ps(_mm_sub_ps(*v10, *v5), v11), v7));
      if ( v13 )
      {
        if ( (v13 & 1) != 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v12 - 2;
          v9 = v14;
        }
        if ( (v13 & 2) != 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v12 - 1;
          v9 = v14;
        }
        if ( (v13 & 4) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v12;
        if ( (v13 & 8) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v12 + 1;
      }
      v10 = &v17[v15];
      v5 = &v18[v16];
      v12 += 4;
      v17 = (__m128 *)((char *)v17 + v15 * 16);
      v18 = (__m128 *)((char *)v18 + v16 * 16);
    }
    while ( v12 - 2 < v9 );
  }
  return result;
}
