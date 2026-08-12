double __thiscall sub_101F4120(__m64 *this)
{
  __m64 v1; // mm3
  __m64 v2; // mm0
  __m64 v3; // mm1
  __m64 v4; // mm0
  float v6; // [esp+0h] [ebp-8h]

  v6 = 0.0;
  if ( 0.0 != this->m64_f32[0] || 0.0 != this->m64_f32[1] || 0.0 != this[1].m64_f32[0] )
  {
    _m_femms();
    v1 = _mm_cvtsi32_si64(this[1].m64_u32[0]);
    v2 = _m_pfmul((__m64)this->m64_u64, (__m64)this->m64_u64);
    v3 = _m_pfadd(_m_pfmul(v1, v1), _m_pfacc(v2, v2));
    v4 = _m_pfrsqrt(v3);
    this->m64_u64 = (unsigned __int64)_m_pfmul((__m64)this->m64_u64, v4);
    this[1].m64_i32[0] = _mm_cvtsi64_si32(_m_pfmul(v1, v4));
    v6 = COERCE_FLOAT(_mm_cvtsi64_si32(_m_pfmul(_m_punpckldq(v3, v3), v4)));
    _m_femms();
  }
  return v6;
}
