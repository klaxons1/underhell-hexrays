__m128 __cdecl sub_101F41F0(__m128 *a1, int a2)
{
  __m128 result; // xmm0
  int v3; // eax
  __m128 v4; // xmm1
  __m128 v5; // xmm1
  int v6; // eax

  result = (__m128)xmmword_10394150;
  v3 = abs32(a2);
  if ( (v3 & 3) != 0 )
  {
    v4 = _mm_sqrt_ps(*a1);
    if ( (v3 & 1) != 0 )
      result = _mm_sqrt_ps(v4);
    if ( (v3 & 2) != 0 )
      result = _mm_mul_ps(v4, result);
  }
  v5 = *a1;
  v6 = v3 >> 2;
  while ( 1 )
  {
    if ( (v6 & 1) != 0 )
      result = _mm_mul_ps(v5, result);
    v6 >>= 1;
    if ( !v6 )
      break;
    v5 = _mm_mul_ps(v5, v5);
  }
  if ( a2 < 0 )
    return _mm_rcp_ps(result);
  return result;
}
