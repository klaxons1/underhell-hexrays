__m128 *__fastcall sub_102AF2C0(unsigned int a1, int a2, __m128 *a3)
{
  __m128 *v3; // eax
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 *result; // eax

  v3 = *(__m128 **)(a1 + 884);
  v4 = _mm_add_ps(*(__m128 *)*(_DWORD *)(a1 + 880), *v3);
  v5 = _mm_sub_ps(v4, _mm_and_ps(_mm_cmple_ps((__m128)xmmword_10394150, v4), (__m128)xmmword_10394150));
  *v3 = v5;
  *(_DWORD *)(a1 + 880) -= 16;
  if ( *(_DWORD *)(a1 + 880) < a1 )
    *(_DWORD *)(a1 + 880) = a1 + 864;
  *(_DWORD *)(a1 + 884) -= 16;
  if ( *(_DWORD *)(a1 + 884) < a1 )
    *(_DWORD *)(a1 + 884) = a1 + 864;
  result = a3;
  *a3 = v5;
  return result;
}
