void __usercall sub_102051B0(__m128 *a1@<esi>)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm2
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 i; // [esp+4h] [ebp-10h]

  *a1 = _mm_sub_ps(_mm_mul_ps((__m128)xmmword_10394160, sub_102AF370()), (__m128)xmmword_10394150);
  a1[1] = _mm_sub_ps(_mm_mul_ps((__m128)xmmword_10394160, sub_102AF370()), (__m128)xmmword_10394150);
  v1 = sub_102AF370();
  v2 = *a1;
  v3 = _mm_sub_ps(_mm_mul_ps((__m128)xmmword_10394160, v1), (__m128)xmmword_10394150);
  v4 = _mm_mul_ps(a1[1], a1[1]);
  a1[2] = v3;
  for ( i = _mm_cmplt_ps((__m128)xmmword_10394150, _mm_add_ps(_mm_add_ps(_mm_mul_ps(v2, v2), v4), _mm_mul_ps(v3, v3)));
        _mm_movemask_ps(i);
        i = _mm_cmple_ps(
              (__m128)xmmword_10394150,
              _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6, v6), _mm_mul_ps(v8, v8)), _mm_mul_ps(v7, v7))) )
  {
    *a1 = _mm_or_ps(
            _mm_and_ps(_mm_sub_ps(_mm_mul_ps((__m128)xmmword_10394160, sub_102AF370()), (__m128)xmmword_10394150), i),
            _mm_andnot_ps(i, *a1));
    a1[1] = _mm_or_ps(
              _mm_and_ps(_mm_sub_ps(_mm_mul_ps((__m128)xmmword_10394160, sub_102AF370()), (__m128)xmmword_10394150), i),
              _mm_andnot_ps(i, a1[1]));
    v5 = sub_102AF370();
    v6 = *a1;
    v7 = _mm_or_ps(
           _mm_and_ps(_mm_sub_ps(_mm_mul_ps(v5, (__m128)xmmword_10394160), (__m128)xmmword_10394150), i),
           _mm_andnot_ps(i, a1[2]));
    v8 = a1[1];
    a1[2] = v7;
  }
}
