double __usercall start_3@<st0>(
        __m128i a1@<xmm0>,
        __m128d a2@<xmm1>,
        __m128d a3@<xmm2>,
        __m128i a4@<xmm3>,
        __m128d a5@<xmm7>,
        double a6)
{
  int v6; // edx
  __m128d inserted; // xmm5
  __m128i v8; // xmm0
  int v9; // edx
  __m128i v10; // xmm2
  double v11; // xmm3_8
  double v12; // xmm1_8
  double v13; // xmm0_8
  double v14; // xmm3_8
  __m128i v15; // xmm4
  double result; // st7
  unsigned int v17; // eax
  char v18; // al
  double v19; // xmm0_8
  __int64 v20; // xmm6_8
  double v21; // xmm1_8
  double v22; // xmm4_8
  double v23; // xmm0_8
  double v24; // xmm2_8
  int v25; // edx
  double v26; // xmm7_8
  double v27; // xmm6_8
  __m128i v28; // xmm3
  unsigned int v29; // eax
  __m128d v30; // xmm7
  __m128d v31; // xmm1
  __m128d v32; // xmm7
  __m128d v33; // xmm1
  __m128i v34; // xmm1
  unsigned int v35; // eax
  unsigned __int16 epi16; // ax
  __m128i v37; // xmm5
  double v38; // xmm0_8
  double v39; // xmm6_8
  double v40; // xmm3_8
  double v41; // xmm6_8
  double v42; // xmm4_8
  __m128i v43; // xmm3
  __m128d v44; // xmm7
  double v45; // xmm4_8
  __m128d v46; // xmm6
  double v47; // xmm4_8
  __m128i v48; // xmm1
  __m128d v49; // xmm7
  __m128d v50; // xmm2
  __m128i v51; // xmm7
  double v52; // xmm0_8
  int v53; // edx
  double v54; // [esp+10h] [ebp-Ch] BYREF

  a3.m128d_f64[0] = NAN;
  a2.m128d_f64[0] = *(double *)a1.m128i_i64;
  v8 = _mm_srli_epi64(a1, 0x2Cu);
  v6 = _mm_cvtsi128_si32(v8);
  a5.m128d_f64[0] = a2.m128d_f64[0];
  inserted = (__m128d)_mm_insert_epi16((__m128i)0LL, 0x2000u, 2);
  *(double *)v8.m128i_i64 = a2.m128d_f64[0];
  if ( (v6 & 0x7FFFFu) - 260864 >= 0x3BB )
  {
    v17 = (v6 & 0x7FFFF) - 261819;
    if ( v17 >= 0x43 )
    {
      v29 = v17 + 15291;
      if ( v29 >= 0x3800 )
      {
        v35 = v29 - 15358;
        if ( v35 >= 2 )
        {
          if ( v35 + 261886 < 0x3FF00 )
          {
            *(double *)v8.m128i_i64 = a6;
            if ( (_mm_extract_epi16(v8, 3) & 0x7FF0u) - 16 >= 0x7FE0 )
              v8.m128i_i64[0] = *(_QWORD *)&a6 | COERCE_UNSIGNED_INT64(a6 + 0.0);
            return *(double *)v8.m128i_i64;
          }
          else if ( _mm_cvtsi128_si32(v8) | (1072693248 - (_mm_cvtsi128_si32(_mm_srli_epi64(v8, 0x20u)) & 0x7FFFFFFF)) )
          {
            a3.m128d_f64[0] = a6;
            if ( (((__PAIR64__(
                      _mm_cvtsi128_si32(_mm_srli_epi64((__m128i)a3, 0x20u)) & 0x7FFFFFFF,
                      _mm_cvtsi128_si32((__m128i)a3))
                  - 0x7FF0000000000001LL) >> 32)
                & 0x80000000) == 0LL )
            {
              v52 = a6 + 0.0;
              v53 = 1009;
            }
            else
            {
              v52 = 0.0 * *(double *)_mm_insert_epi16((__m128i)0LL, 0x7FF0u, 3).m128i_i64;
              v53 = 61;
            }
            v54 = v52;
            __libm_error_support(&a6, &a6, &v54, v53);
            return v54;
          }
          else
          {
            *(_QWORD *)&result = COERCE_UNSIGNED_INT64(6.123233995736766e-17 + 1.570796326794897)
                               | ~COERCE__INT64(NAN) & *(_QWORD *)&a2.m128d_f64[0];
          }
        }
        else
        {
          *(double *)a4.m128i_i64 = sqrt(1.0 - a2.m128d_f64[0] * a2.m128d_f64[0]);
          epi16 = _mm_extract_epi16((__m128i)a5, 3);
          v37 = _mm_shuffle_epi32(a4, 68);
          v38 = a2.m128d_f64[0] - COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0xFFFFFFFFF8000000uLL);
          *(_QWORD *)&v39 = a4.m128i_i64[0] & 0xFFFFFFFFF8000000uLL;
          v40 = v39 * v39;
          v41 = v39 - *(double *)v37.m128i_i64;
          *(double *)v37.m128i_i64 = *(double *)v37.m128i_i64 + *(double *)v37.m128i_i64;
          v42 = 1.0
              - COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0xFFFFFFFFF8000000uLL)
              * COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0xFFFFFFFFF8000000uLL)
              - (COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0xFFFFFFFFF8000000uLL)
               + COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0xFFFFFFFFF8000000uLL))
              * v38
              - v40;
          v43 = _mm_shuffle_epi32(v37, 238);
          v44 = (__m128d)_mm_shuffle_epi32(v43, 238);
          v45 = v42 - v38 * v38 + (*(double *)v37.m128i_i64 + v41) * v41;
          v46 = (__m128d)_mm_shuffle_epi32((__m128i)v44, 238);
          v47 = v45 / (*(double *)v43.m128i_i64 + *(double *)v43.m128i_i64);
          v48.m128i_i64[1] = 0x3F8C99999999999ALL;
          v49 = _mm_mul_pd(v44, v44);
          *(double *)v43.m128i_i64 = v46.m128d_f64[0];
          *(double *)v48.m128i_i64 = 0.01155180089613689 * v49.m128d_f64[0];
          v50 = _mm_mul_pd(v46, v49);
          v46.m128d_f64[0] = v50.m128d_f64[0] * v50.m128d_f64[0];
          v50.m128d_f64[0] = v50.m128d_f64[0] * (v50.m128d_f64[0] * v50.m128d_f64[0]);
          v51 = (__m128i)_mm_mul_pd(
                           _mm_add_pd(
                             _mm_mul_pd(_mm_mul_pd(v49, v49), (__m128d)xmmword_105CCDB0),
                             _mm_add_pd((__m128d)xmmword_105CCDA0, _mm_mul_pd((__m128d)xmmword_105CCD90, v49))),
                           v50);
          *(double *)v48.m128i_i64 = (*(double *)v48.m128i_i64 + *(double *)_mm_shuffle_epi32(v48, 238).m128i_i64)
                                   * (v46.m128d_f64[0]
                                    * v50.m128d_f64[0]);
          v46.m128d_f64[0] = *(double *)_mm_shuffle_epi32((__m128i)xmmword_105CCD40, 238).m128i_i64;
          *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                                 *(double *)v48.m128i_i64
                               + 6.123233995736766e-17
                               - (*(double *)v51.m128i_i64
                                + *(double *)_mm_shuffle_epi32(v51, 238).m128i_i64
                                + v47)
                               - (*(double *)v43.m128i_i64
                                - (v46.m128d_f64[0]
                                 + *(double *)v43.m128i_i64
                                 - v46.m128d_f64[0]))
                               - (*(double *)v43.m128i_i64
                                - v46.m128d_f64[0]))
                             | _mm_insert_epi16((__m128i)0LL, epi16 & 0x8000, 3).m128i_u64[0];
        }
      }
      else
      {
        v30 = _mm_unpacklo_pd(a5, a5);
        v31 = _mm_unpacklo_pd(a2, v30);
        v32 = _mm_mul_pd(v30, v30);
        v33 = _mm_mul_pd(v31, v32);
        v33.m128d_f64[0] = v33.m128d_f64[0] * v33.m128d_f64[0] * v33.m128d_f64[0];
        v34 = (__m128i)_mm_mul_pd(
                         v33,
                         _mm_add_pd(
                           _mm_add_pd(_mm_mul_pd((__m128d)xmmword_105CCD90, v32), (__m128d)xmmword_105CCDA0),
                           _mm_mul_pd((__m128d)xmmword_105CCDB0, _mm_mul_pd(v32, v32))));
        return *(double *)v8.m128i_i64 + *(double *)v34.m128i_i64 + *(double *)_mm_shuffle_epi32(v34, 238).m128i_i64;
      }
    }
    else
    {
      *(double *)a4.m128i_i64 = sqrt(1.0 - a2.m128d_f64[0] * a2.m128d_f64[0]);
      v18 = _mm_movemask_epi8((__m128i)a5);
      *(_QWORD *)&v19 = (unsigned __int64)(2LL * *(_QWORD *)&a2.m128d_f64[0]) >> 1;
      v20 = *(_QWORD *)&a2.m128d_f64[0] & 0x7FFFFFC000000000LL;
      v21 = v19 - COERCE_DOUBLE(*(_QWORD *)&a2.m128d_f64[0] & 0x7FFFFFC000000000LL);
      v22 = 1.0 - *(double *)&v20 * *(double *)&v20;
      v23 = (v19 + *(double *)&v20) * (v19 - *(double *)&v20);
      *(_QWORD *)&v24 = COERCE_UNSIGNED_INT64(NAN) & a4.m128i_i64[0] | *(_QWORD *)&inserted.m128d_f64[0];
      v25 = _mm_extract_epi16(_mm_slli_epi64(a4, 2u), 3) - 65216;
      v26 = *(double *)a4.m128i_i64 * *(double *)&qword_105CC540[v25];
      v27 = *(double *)&v20 * v24 - v26 + v21 * v24;
      v28 = (__m128i)_mm_sub_pd((__m128d)xmmword_105CCD40, (__m128d)xmmword_105CB640[v25]);
      *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                             (0.04464285714285714 * (v27 * v27) + 0.075) * (v27 * (v27 * v27) * (v27 * v27))
                           + 0.1666666666666667 * (v27 * (v27 * v27))
                           + *(double *)v28.m128i_i64
                           - (v22 - v24 * v24 - v23) / (v26 + v26 + v27)
                           + *(double *)_mm_shuffle_epi32(v28, 238).m128i_i64)
                         | _mm_insert_epi16((__m128i)0LL, (unsigned __int8)(v18 & 0x80) << 8, 3).m128i_u64[0];
    }
  }
  else
  {
    v9 = (v6 & 0xFFFC) - 64256;
    v10 = (__m128i)_mm_or_pd(_mm_and_pd(a3, a5), inserted);
    v11 = sqrt(1.0 - a2.m128d_f64[0] * a2.m128d_f64[0]) * *(double *)v10.m128i_i64;
    v12 = a2.m128d_f64[0] * *(double *)((char *)qword_105CC540 + 2 * v9);
    v13 = (*(double *)v8.m128i_i64 - *(double *)v10.m128i_i64)
        * (a5.m128d_f64[0] + *(double *)v10.m128i_i64)
        / (v12 + v11);
    v14 = v12 - v11;
    v15 = (__m128i)_mm_xor_pd(
                     *(__m128d *)((char *)xmmword_105CB640 + 4 * v9),
                     (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(v10, 0x3Fu), 0x3Fu), 68));
    return v13
         + (0.04464285714285714 * (v14 * v14) + 0.075) * (v14 * (v14 * v14) * (v14 * v14))
         + 0.1666666666666667 * (v14 * (v14 * v14))
         + *(double *)v15.m128i_i64
         + *(double *)_mm_shuffle_epi32(v15, 238).m128i_i64;
  }
  return result;
}
