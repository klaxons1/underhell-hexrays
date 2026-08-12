double __cdecl sub_101F41B0(__m64 *a1)
{
  __m64 v1; // mm1
  __m64 v2; // mm0

  _m_femms();
  v1 = _mm_cvtsi32_si64(a1[1].m64_u32[0]);
  v2 = _m_pfmul((__m64)a1->m64_u64, (__m64)a1->m64_u64);
  _m_femms();
  return COERCE_FLOAT(_mm_cvtsi64_si32(_m_pfrcp(_m_pfmax(_m_pfadd(_m_pfmul(v1, v1), _m_pfacc(v2, v2)), _mm_cvtsi32_si64(0x3F800000u)))));
}
