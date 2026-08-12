int __stdcall sub_1021B500(int a1, int a2, int a3)
{
  int result; // eax
  __m128 v4; // xmm2
  __m128 *v5; // ebx
  int v6; // esi
  __m128 *v7; // edi
  int v8; // ecx
  int v9; // ebx
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h]
  int v12; // [esp+10h] [ebp-14h]
  __m128 *v13; // [esp+14h] [ebp-10h]
  __m128 *v14; // [esp+1Ch] [ebp-8h]

  result = a1;
  v4 = *(__m128 *)(a1 + 16);
  v5 = *(__m128 **)(a1 + 6072);
  v6 = 4 * *(_DWORD *)(a1 + 32);
  v7 = *(__m128 **)(a1 + 6100);
  v13 = v7;
  v14 = v5;
  v10 = v6;
  if ( v6 > 0 )
  {
    v11 = *(_DWORD *)(a1 + 6356) >> 2;
    v12 = *(_DWORD *)(a1 + 6328) >> 2;
    v8 = 2;
    do
    {
      v9 = _mm_movemask_ps(_mm_or_ps(_mm_cmple_ps(*v5, _mm_sub_ps(v4, *v7)), _mm_cmple_ps(*v5, (__m128)xmmword_10394140)));
      if ( v9 )
      {
        if ( (v9 & 1) != 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 6668) + 4 * (*(_DWORD *)(a1 + 6664))++) = v8 - 2;
          v6 = v10;
        }
        if ( (v9 & 2) != 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 6668) + 4 * (*(_DWORD *)(a1 + 6664))++) = v8 - 1;
          v6 = v10;
        }
        if ( (v9 & 4) != 0 )
          *(_DWORD *)(*(_DWORD *)(a1 + 6668) + 4 * (*(_DWORD *)(a1 + 6664))++) = v8;
        if ( (v9 & 8) != 0 )
          *(_DWORD *)(*(_DWORD *)(a1 + 6668) + 4 * (*(_DWORD *)(a1 + 6664))++) = v8 + 1;
      }
      v7 = &v13[v11];
      v5 = &v14[v12];
      v8 += 4;
      v13 = (__m128 *)((char *)v13 + v11 * 16);
      v14 = (__m128 *)((char *)v14 + v12 * 16);
    }
    while ( v8 - 2 < v6 );
  }
  return result;
}
