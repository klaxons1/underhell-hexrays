void __thiscall sub_1021BAE0(__m128 *this, int a2, int a3, int a4)
{
  __m128 v4; // xmm7
  __m128 v5; // xmm3
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm5
  __m128 v10; // xmm0
  __m128 v11; // xmm4
  __m128 v12; // xmm4
  float v13; // xmm1_4
  int v14; // ecx
  __m128 v15; // xmm6
  __m128 v16; // xmm0
  int v17; // edx
  int v18; // esi
  int v19; // ebx
  __m128 *v20; // eax
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  __m128 *v25; // eax
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 *v28; // edi
  __m128 *v29; // esi
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  int v33; // [esp+10h] [ebp-50h]
  int v35; // [esp+18h] [ebp-48h]
  __m128 *v36; // [esp+20h] [ebp-40h]
  __m128 *v37; // [esp+28h] [ebp-38h]
  __m128 *v38; // [esp+30h] [ebp-30h]
  __m128 v39; // [esp+40h] [ebp-20h]
  __m128 v40; // [esp+50h] [ebp-10h]

  if ( this[2].m128_f32[3] < (double)this[3].m128_f32[0] )
  {
    v36 = *(__m128 **)(a2 + 6100);
    v38 = *(__m128 **)(a2 + 6072);
    v4 = *(__m128 *)(a2 + 16);
    v37 = *(__m128 **)(a2 + 6208);
    v5 = 0;
    v5.m128_f32[0] = this[2].m128_f32[3];
    v6 = _mm_shuffle_ps(v5, v5, 0);
    v7 = 0;
    v8 = 0;
    v8.m128_f32[0] = this[3].m128_f32[0];
    v9 = _mm_shuffle_ps(v8, v8, 0);
    v10 = _mm_sub_ps(v9, v6);
    v11 = _mm_rcp_ps(v10);
    v12 = _mm_sub_ps(_mm_add_ps(v11, v11), _mm_mul_ps(_mm_mul_ps(v11, v11), v10));
    v13 = this[3].m128_f32[1];
    v14 = *(_DWORD *)(a2 + 32);
    v7.m128_f32[0] = this[3].m128_f32[2] - v13;
    v15 = _mm_shuffle_ps(v7, v7, 0);
    v16 = 0;
    v16.m128_f32[0] = v13;
    v17 = 16 * (*(_DWORD *)(a2 + 6356) >> 2);
    v18 = 16 * (*(_DWORD *)(a2 + 6328) >> 2);
    v19 = 16 * (*(_DWORD *)(a2 + 6464) >> 2);
    v39 = _mm_shuffle_ps(v16, v16, 0);
    v40 = v4;
    v33 = 16 * (*(_DWORD *)(a2 + 6336) >> 2);
    if ( this[3].m128_i8[12] )
    {
      v20 = *(__m128 **)(a2 + 6080);
      do
      {
        v21 = _mm_mul_ps(_mm_sub_ps(v4, *v36), _mm_rcp_ps(*v38));
        v22 = _mm_and_ps(
                _mm_and_ps(_mm_cmplt_ps((__m128)xmmword_10394140, *v38), _mm_cmple_ps(v6, v21)),
                _mm_cmplt_ps(v21, v9));
        if ( _mm_movemask_ps(v22) )
        {
          v23 = _mm_mul_ps(_mm_sub_ps(v21, v6), v12);
          v24 = _mm_mul_ps(v23, v23);
          v4 = v40;
          *v20 = _mm_or_ps(
                   _mm_and_ps(
                     _mm_mul_ps(
                       _mm_add_ps(
                         _mm_mul_ps(
                           _mm_sub_ps(
                             _mm_mul_ps(v24, (__m128)xmmword_10394170),
                             _mm_mul_ps(_mm_mul_ps(v23, (__m128)xmmword_10394160), v24)),
                           v15),
                         v39),
                       *v37),
                     v22),
                   _mm_andnot_ps(v22, *v20));
        }
        v36 = (__m128 *)((char *)v36 + v17);
        v38 = (__m128 *)((char *)v38 + v18);
        v20 = (__m128 *)((char *)v20 + v33);
        v37 = (__m128 *)((char *)v37 + v19);
        --v14;
      }
      while ( v14 );
    }
    else
    {
      v25 = *(__m128 **)(a2 + 6080);
      if ( 0.5 == this[4].m128_f32[0] )
      {
        do
        {
          v26 = _mm_mul_ps(_mm_sub_ps(v4, *v36), _mm_rcp_ps(*v38));
          v27 = _mm_and_ps(
                  _mm_and_ps(_mm_cmplt_ps((__m128)xmmword_10394140, *v38), _mm_cmple_ps(v6, v26)),
                  _mm_cmplt_ps(v26, v9));
          if ( _mm_movemask_ps(v27) )
            *v25 = _mm_or_ps(
                     _mm_and_ps(
                       _mm_mul_ps(_mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_sub_ps(v26, v6), v12), v15), v39), *v37),
                       v27),
                     _mm_andnot_ps(v27, *v25));
          v36 = (__m128 *)((char *)v36 + v17);
          v38 = (__m128 *)((char *)v38 + v18);
          v25 = (__m128 *)((char *)v25 + v33);
          v37 = (__m128 *)((char *)v37 + v19);
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v28 = *(__m128 **)(a2 + 6072);
        v35 = 16 * (*(_DWORD *)(a2 + 6328) >> 2);
        v29 = *(__m128 **)(a2 + 6208);
        do
        {
          v30 = _mm_mul_ps(_mm_sub_ps(v4, *v36), _mm_rcp_ps(*v28));
          v31 = _mm_and_ps(
                  _mm_and_ps(_mm_cmplt_ps((__m128)xmmword_10394140, *v28), _mm_cmple_ps(v6, v30)),
                  _mm_cmplt_ps(v30, v9));
          if ( _mm_movemask_ps(v31) )
          {
            v32 = _mm_mul_ps(_mm_sub_ps(v30, v6), v12);
            v4 = v40;
            *v25 = _mm_or_ps(
                     _mm_and_ps(
                       _mm_mul_ps(
                         _mm_add_ps(
                           _mm_mul_ps(
                             _mm_div_ps(
                               v32,
                               _mm_add_ps(
                                 _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394150, v32), this[5]),
                                 (__m128)xmmword_10394150)),
                             v15),
                           v39),
                         *v29),
                       v31),
                     _mm_andnot_ps(v31, *v25));
          }
          v36 = (__m128 *)((char *)v36 + v17);
          v28 = (__m128 *)((char *)v28 + v35);
          v25 = (__m128 *)((char *)v25 + v33);
          v29 = (__m128 *)((char *)v29 + v19);
          --v14;
        }
        while ( v14 );
      }
    }
  }
}
