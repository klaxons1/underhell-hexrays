void __thiscall sub_1021F260(__m128 *this, int a2, int a3)
{
  double v3; // st6
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  bool v7; // pf
  float v8; // [esp+Ch] [ebp-4h]

  if ( 0.0 == this[3].m128_f32[2] )
    v3 = 0.5;
  else
    v3 = this[3].m128_f32[2];
  v4 = 0;
  v8 = v3;
  v4.m128_f32[0] = v8;
  v5 = _mm_shuffle_ps(v4, v4, 0);
  v6 = _mm_rcp_ps(v5);
  v7 = 0.0 != this[2].m128_f32[3];
  this[4] = _mm_sub_ps(_mm_sub_ps(_mm_add_ps(v6, v6), _mm_mul_ps(_mm_mul_ps(v6, v6), v5)), (__m128)xmmword_10394160);
  if ( !v7 && 0.0 == this[3].m128_f32[0] )
  {
    this[3].m128_f32[0] = 0.00000011920929;
    this[2].m128_f32[3] = 0.00000011920929;
  }
}
