int __thiscall sub_10219840(int this, int a2, int a3, int a4)
{
  float v4; // xmm3_4
  float v5; // xmm4_4
  int result; // eax
  __m128 v7; // xmm0
  __m128 v8; // xmm7
  __m128 v9; // xmm0
  __m128 v10; // xmm6
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  int v17; // ebx
  int v18; // edi
  int v19; // ecx
  __m128 v20; // xmm1
  __m128 v21; // xmm5
  __m128 v22; // xmm0
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  int v29; // edx
  __m128 *v30; // [esp+10h] [ebp-D0h]
  int v31; // [esp+14h] [ebp-CCh]
  __m128 *v32; // [esp+18h] [ebp-C8h]
  int v33; // [esp+28h] [ebp-B8h]
  __m128 *v34; // [esp+2Ch] [ebp-B4h]
  int v35; // [esp+34h] [ebp-ACh]
  __m128 *v36; // [esp+38h] [ebp-A8h]
  __m128 v37; // [esp+40h] [ebp-A0h]
  __m128 v38; // [esp+50h] [ebp-90h]
  __m128 v39; // [esp+60h] [ebp-80h]
  __m128 v40; // [esp+70h] [ebp-70h]
  __m128 v41; // [esp+80h] [ebp-60h]
  __m128 v42; // [esp+90h] [ebp-50h]
  __m128 v43; // [esp+A0h] [ebp-40h]
  __m128 v44; // [esp+B0h] [ebp-30h]
  __m128 v45; // [esp+C0h] [ebp-20h]
  __m128 v46; // [esp+D0h] [ebp-10h]

  v4 = *(float *)(this + 44);
  v5 = *(float *)(this + 52);
  result = a2;
  v7 = 0;
  v7.m128_f32[0] = v4;
  v8 = _mm_shuffle_ps(v7, v7, 0);
  v9 = 0;
  v9.m128_f32[0] = v5;
  v10 = _mm_shuffle_ps(v9, v9, 0);
  v9.m128_i32[0] = *(_DWORD *)(this + 48);
  v11 = 0;
  v12 = 0;
  v12.m128_f32[0] = v9.m128_f32[0];
  v39 = _mm_shuffle_ps(v12, v12, 0);
  v12.m128_i32[0] = *(_DWORD *)(this + 56);
  v11.m128_f32[0] = v12.m128_f32[0];
  v43 = _mm_shuffle_ps(v11, v11, 0);
  v13 = 0;
  v13.m128_f32[0] = *(float *)(this + 64);
  v46 = _mm_shuffle_ps(v13, v13, 0);
  v32 = *(__m128 **)(a2 + 6224);
  v14 = 0;
  v14.m128_f32[0] = *(float *)(this + 60);
  v41 = _mm_shuffle_ps(v14, v14, 0);
  v31 = *(_DWORD *)(a2 + 6352) >> 2;
  v37 = *(__m128 *)(a2 + 16);
  v30 = *(__m128 **)(a2 + 6096);
  v15 = 0;
  v15.m128_f32[0] = v9.m128_f32[0] - v4;
  v45 = _mm_rcp_ps(_mm_shuffle_ps(v15, v15, 0));
  v34 = *(__m128 **)(a2 + 6100);
  v36 = *(__m128 **)(a2 + 6072);
  v16 = 0;
  v16.m128_f32[0] = v12.m128_f32[0] - v5;
  v17 = 4 * *(_DWORD *)(a2 + 32);
  v18 = *(_DWORD *)(a2 + 6480) >> 2;
  v42 = v8;
  v40 = v10;
  v44 = _mm_rcp_ps(_mm_shuffle_ps(v16, v16, 0));
  if ( v17 > 0 )
  {
    v33 = 16 * (*(_DWORD *)(a2 + 6356) >> 2);
    v35 = 16 * (*(_DWORD *)(a2 + 6328) >> 2);
    v19 = 2;
    do
    {
      v20 = _mm_sub_ps(v37, *v34);
      v21 = _mm_cmple_ps(*v36, v20);
      v22 = _mm_mul_ps(_mm_rcp_ps(*v36), v20);
      v23 = _mm_andnot_ps(v21, _mm_and_ps(_mm_cmplt_ps(v22, v39), _mm_cmple_ps(v8, v22)));
      v24 = _mm_andnot_ps(v21, _mm_and_ps(_mm_cmplt_ps(v22, v43), _mm_cmple_ps(v10, v22)));
      if ( _mm_movemask_ps(v23) )
      {
        v38 = _mm_mul_ps(*v32, v41);
        v25 = _mm_min_ps(
                (__m128)xmmword_10394150,
                _mm_max_ps((__m128)xmmword_10394140, _mm_mul_ps(_mm_sub_ps(v22, v8), v45)));
        v26 = _mm_mul_ps(v25, v25);
        v8 = v42;
        v10 = v40;
        *v30 = _mm_or_ps(
                 _mm_and_ps(
                   _mm_add_ps(
                     _mm_mul_ps(
                       _mm_sub_ps(
                         _mm_mul_ps(v26, (__m128)xmmword_10394170),
                         _mm_mul_ps(_mm_mul_ps(v25, (__m128)xmmword_10394160), v26)),
                       _mm_sub_ps(*v32, v38)),
                     v38),
                   v23),
                 _mm_andnot_ps(v23, *v30));
      }
      if ( _mm_movemask_ps(v24) )
      {
        v27 = _mm_min_ps(
                (__m128)xmmword_10394150,
                _mm_max_ps((__m128)xmmword_10394140, _mm_mul_ps(_mm_sub_ps(v22, v10), v44)));
        v28 = _mm_mul_ps(v27, v27);
        *v30 = _mm_or_ps(
                 _mm_and_ps(
                   _mm_add_ps(
                     _mm_mul_ps(
                       _mm_sub_ps(
                         _mm_mul_ps(v28, (__m128)xmmword_10394170),
                         _mm_mul_ps(_mm_mul_ps(v27, (__m128)xmmword_10394160), v28)),
                       _mm_sub_ps(_mm_mul_ps(*v32, v46), *v32)),
                     *v32),
                   v24),
                 _mm_andnot_ps(v24, *v30));
      }
      v29 = _mm_movemask_ps(v21);
      if ( v29 )
      {
        if ( (v29 & 1) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v19 - 2;
        if ( (v29 & 2) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v19 - 1;
        if ( (v29 & 4) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v19;
        if ( (v29 & 8) != 0 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v19 + 1;
      }
      v34 = (__m128 *)((char *)v34 + v33);
      v36 = (__m128 *)((char *)v36 + v35);
      v32 += v18;
      v30 += v31;
      v19 += 4;
    }
    while ( v19 - 2 < v17 );
  }
  return result;
}
