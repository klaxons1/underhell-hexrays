__m128 __cdecl sub_102AF400(__m128 *a1, __m128 *a2, __m128 *a3)
{
  unsigned __int8 v3; // si
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // si
  int v6; // edi
  unsigned __int8 v7; // si
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // si
  unsigned __int8 v10; // cl
  int v11; // edx
  unsigned __int8 v12; // si
  unsigned __int8 v13; // al
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v18; // [esp+10h] [ebp-E0h]
  __m128 v19; // [esp+20h] [ebp-D0h]
  __m128 v20; // [esp+30h] [ebp-C0h]
  __m128 v21; // [esp+40h] [ebp-B0h]
  __m128 v22; // [esp+50h] [ebp-A0h]
  __m128 v23; // [esp+60h] [ebp-90h]
  __m128 v24; // [esp+70h] [ebp-80h]
  __m128 v25; // [esp+80h] [ebp-70h]
  __m128 v26; // [esp+90h] [ebp-60h]
  __m128 v27; // [esp+A0h] [ebp-50h]
  __m128 v28; // [esp+B0h] [ebp-40h]
  __m128 v29; // [esp+C0h] [ebp-30h]
  __m128 v30; // [esp+D0h] [ebp-20h]
  __m128 v31; // [esp+E0h] [ebp-10h]

  v29 = _mm_and_ps(_mm_add_ps(*a1, (__m128)xmmword_10400D00), (__m128)xmmword_10400D10);
  v30 = _mm_and_ps(_mm_add_ps(*a2, (__m128)xmmword_10400D00), (__m128)xmmword_10400D10);
  v31 = _mm_and_ps(_mm_add_ps(*a3, (__m128)xmmword_10400D00), (__m128)xmmword_10400D10);
  v26.m128_f32[0] = (double)v29.m128_u8[0] * 0.00390625;
  v19.m128_f32[0] = (double)v30.m128_u8[0] * 0.00390625;
  v25.m128_f32[0] = (double)v31.m128_u8[0] * 0.00390625;
  v20.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[1]
                                                                + dword_103FF500[(unsigned __int8)(v30.m128_i8[1]
                                                                                                 + dword_103FF100[v29.m128_u8[1]])])]];
  v3 = v31.m128_i8[1] + dword_103FF500[(unsigned __int8)(v30.m128_i8[1] + dword_103FF100[v29.m128_u8[1]] + 1)];
  v28.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[1]
                                                                + dword_103FF500[(unsigned __int8)(v30.m128_i8[1]
                                                                                                 + dword_103FF100[v29.m128_u8[1]])]
                                                                + 1)]];
  v18.m128_f32[0] = flt_10400100[dword_103FF900[v3]];
  v23.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(v3 + 1)]];
  v4 = v31.m128_i8[1]
     + dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[1] + 1)] + v30.m128_i8[1])];
  v27.m128_f32[0] = flt_10400100[dword_103FF900[v4]];
  v22.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(v4 + 1)]];
  v24.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[1] + 1)]
                                                                                                 + v30.m128_i8[1]
                                                                                                 + 1)]
                                                                + v31.m128_i8[1])]];
  v21.m128_f32[0] = flt_10400100[dword_103FF900[(unsigned __int8)(dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[1] + 1)]
                                                                                                 + v30.m128_i8[1]
                                                                                                 + 1)]
                                                                + v31.m128_i8[1]
                                                                + 1)]];
  v26.m128_f32[1] = (double)v29.m128_u8[4] * 0.00390625;
  v5 = v30.m128_i8[5] + dword_103FF100[v29.m128_u8[5]];
  v19.m128_f32[1] = (double)v30.m128_u8[4] * 0.00390625;
  v25.m128_f32[1] = (double)v31.m128_u8[4] * 0.00390625;
  v6 = dword_103FF900[(unsigned __int8)(v31.m128_i8[5] + dword_103FF500[v5] + 1)];
  v20.m128_f32[1] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[5] + dword_103FF500[v5])]];
  v7 = v31.m128_i8[5] + dword_103FF500[(unsigned __int8)(v5 + 1)];
  v28.m128_f32[1] = flt_10400100[v6];
  v18.m128_f32[1] = flt_10400100[dword_103FF900[v7]];
  v8 = v31.m128_i8[5]
     + dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[5] + 1)] + v30.m128_i8[5])];
  v23.m128_f32[1] = flt_10400100[dword_103FF900[(unsigned __int8)(v7 + 1)]];
  v27.m128_f32[1] = flt_10400100[dword_103FF900[v8]];
  v22.m128_f32[1] = flt_10400100[dword_103FF900[(unsigned __int8)(v8 + 1)]];
  v24.m128_f32[1] = flt_10400100[dword_103FF900[(unsigned __int8)(dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[5] + 1)]
                                                                                                 + v30.m128_i8[5]
                                                                                                 + 1)]
                                                                + v31.m128_i8[5])]];
  v21.m128_f32[1] = flt_10400100[dword_103FF900[(unsigned __int8)(dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[5] + 1)]
                                                                                                 + v30.m128_i8[5]
                                                                                                 + 1)]
                                                                + v31.m128_i8[5]
                                                                + 1)]];
  v26.m128_f32[2] = (double)v29.m128_u8[8] * 0.00390625;
  v9 = v30.m128_i8[9] + dword_103FF100[v29.m128_u8[9]];
  v19.m128_f32[2] = (double)v30.m128_u8[8] * 0.00390625;
  v25.m128_f32[2] = (double)v31.m128_u8[8] * 0.00390625;
  v20.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[9] + dword_103FF500[v9])]];
  v28.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[9] + dword_103FF500[v9] + 1)]];
  v10 = v31.m128_i8[9]
      + dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[9] + 1)] + v30.m128_i8[9])];
  v18.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[9]
                                                                + dword_103FF500[(unsigned __int8)(v9 + 1)])]];
  v11 = dword_103FF500[(unsigned __int8)(dword_103FF100[(unsigned __int8)(v29.m128_i8[9] + 1)] + v30.m128_i8[9] + 1)];
  v23.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[9]
                                                                + dword_103FF500[(unsigned __int8)(v9 + 1)]
                                                                + 1)]];
  v27.m128_f32[2] = flt_10400100[dword_103FF900[v10]];
  v22.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v10 + 1)]];
  v24.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v11 + v31.m128_i8[9])]];
  v21.m128_f32[2] = flt_10400100[dword_103FF900[(unsigned __int8)(v11 + v31.m128_i8[9] + 1)]];
  v26.m128_f32[3] = (double)v29.m128_u8[12] * 0.00390625;
  v12 = v30.m128_i8[13] + dword_103FF100[v29.m128_u8[13]];
  v19.m128_f32[3] = (double)v30.m128_u8[12] * 0.00390625;
  v25.m128_f32[3] = 0.00390625 * (double)v31.m128_u8[12];
  v20.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13] + dword_103FF500[v12])]];
  LOBYTE(v11) = dword_103FF100[(unsigned __int8)(v29.m128_i8[13] + 1)] + v30.m128_i8[13];
  v28.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13] + dword_103FF500[v12] + 1)]];
  v18.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13]
                                                                + dword_103FF500[(unsigned __int8)(v12 + 1)])]];
  v23.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13]
                                                                + dword_103FF500[(unsigned __int8)(v12 + 1)]
                                                                + 1)]];
  v27.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13] + dword_103FF500[(unsigned __int8)v11])]];
  v22.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v31.m128_i8[13]
                                                                + dword_103FF500[(unsigned __int8)v11]
                                                                + 1)]];
  v13 = dword_103FF500[(unsigned __int8)(v11 + 1)] + v31.m128_i8[13];
  v14 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v27, v20), v26), v20);
  v24.m128_f32[3] = flt_10400100[dword_103FF900[v13]];
  v15 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v22, v28), v26), v28);
  v21.m128_f32[3] = flt_10400100[dword_103FF900[(unsigned __int8)(v13 + 1)]];
  v16 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v18), v26), v18), v14), v19), v14);
  return _mm_mul_ps(
           _mm_sub_ps(
             _mm_add_ps(
               _mm_mul_ps(
                 _mm_sub_ps(
                   _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v21, v23), v26), v23), v15), v19),
                     v15),
                   v16),
                 v25),
               v16),
             (__m128)xmmword_10394130),
           (__m128)xmmword_10394160);
}
