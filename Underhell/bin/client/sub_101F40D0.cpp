double __cdecl sub_101F40D0(unsigned int a1)
{
  __m64 v1; // mm0

  _m_femms();
  v1 = _mm_cvtsi32_si64(a1);
  _m_femms();
  return COERCE_FLOAT(_mm_cvtsi64_si32(_m_pfmul(_m_punpckldq(v1, v1), _m_pfrsqrt(v1))));
}
