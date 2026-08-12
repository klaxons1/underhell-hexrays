__m128 *__thiscall sub_101F37B0(float *this, __m128 *a2, __m128 *a3)
{
  float v4; // ecx
  __m128 *result; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm4
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  int v12; // eax
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm5
  __m128 v16; // xmm5
  __m128 v17; // xmm6
  __m128 v18; // xmm6
  __m128 v19; // xmm7
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm3
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm3
  bool v27; // pf
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm7
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  __m128 v33; // xmm3
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm6
  __m128 v38; // xmm0
  __m128 v39; // xmm0
  __m128 v40; // [esp+10h] [ebp-70h]
  __m128 v41; // [esp+20h] [ebp-60h] BYREF
  __m128 v42; // [esp+30h] [ebp-50h]
  __int128 v43; // [esp+40h] [ebp-40h]
  __m128 v44; // [esp+50h] [ebp-30h]
  __m128 v45; // [esp+60h] [ebp-20h]
  __m128 v46; // [esp+70h] [ebp-10h]

  v4 = *this;
  if ( LODWORD(v4) == 1 )
    goto LABEL_4;
  result = (__m128 *)(LODWORD(v4) - 2);
  if ( LODWORD(v4) == 2 )
    return result;
  if ( LODWORD(v4) == 3 )
  {
LABEL_4:
    v6 = 0;
    v6.m128_f32[0] = this[4];
    v7 = 0;
    v7.m128_f32[0] = this[5];
    v8 = 0;
    v8.m128_f32[0] = this[6];
    v9 = _mm_sub_ps(_mm_shuffle_ps(v6, v6, 0), *a2);
    v10 = _mm_sub_ps(_mm_shuffle_ps(v7, v7, 0), a2[1]);
    v11 = _mm_sub_ps(_mm_shuffle_ps(v8, v8, 0), a2[2]);
  }
  else
  {
    v11 = v46;
    v10 = v45;
    v9 = v44;
  }
  v12 = *((_DWORD *)this + 19);
  v13 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v10, v10), _mm_mul_ps(v9, v9)), _mm_mul_ps(v11, v11));
  v14 = _mm_max_ps((__m128)xmmword_10394150, v13);
  if ( (v12 & 1) != 0 )
  {
    v15 = 0;
    v15.m128_f32[0] = this[12];
    v16 = _mm_shuffle_ps(v15, v15, 0);
  }
  else
  {
    v16 = (__m128)xmmword_10394200;
  }
  if ( (v12 & 2) != 0 )
  {
    v17 = 0;
    v17.m128_f32[0] = this[13];
    v16 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sqrt_ps(v14)), v16);
  }
  if ( (v12 & 4) != 0 )
  {
    v18 = 0;
    v18.m128_f32[0] = this[14];
    v16 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14), v16);
  }
  v19 = _mm_rcp_ps(v16);
  v40 = v19;
  if ( 0.0 != this[10] )
  {
    v20 = 0;
    v20.m128_f32[0] = this[21];
    v19 = _mm_and_ps(_mm_cmplt_ps(v14, _mm_shuffle_ps(v20, v20, 0)), v19);
    v40 = v19;
  }
  v21 = (__m128)xmmword_10394150;
  v22 = _mm_rsqrt_ps(v13);
  v23 = _mm_mul_ps(v22, v9);
  v24 = _mm_mul_ps(v10, v22);
  v25 = _mm_mul_ps(v11, v22);
  v43 = xmmword_10394150;
  if ( LODWORD(v4) == 3 )
  {
    v26 = 0;
    v26.m128_f32[0] = this[7];
    v27 = 0.0 != this[11];
    v28 = 0;
    v28.m128_f32[0] = this[8];
    v29 = 0;
    v29.m128_f32[0] = this[9];
    v30 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v23), _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v24)),
            _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v25));
    v31 = 0;
    v31.m128_f32[0] = this[18];
    v32 = 0;
    v32.m128_f32[0] = this[20];
    v33 = _mm_sub_ps((__m128)xmmword_10394140, v30);
    v34 = _mm_min_ps(
            _mm_mul_ps(_mm_sub_ps(v33, _mm_shuffle_ps(v31, v31, 0)), _mm_shuffle_ps(v32, v32, 0)),
            (__m128)xmmword_10394150);
    v42 = v33;
    v41 = v34;
    if ( v27 && 1.0 != this[11] )
    {
      sub_101F41F0(&v41, (int)(this[11] * 4.0));
      v33 = v42;
      v21 = (__m128)v43;
    }
    v19 = v40;
    v35 = 0;
    v35.m128_f32[0] = this[18];
    v21 = _mm_and_ps(_mm_cmplt_ps(_mm_shuffle_ps(v35, v35, 0), v33), _mm_mul_ps(v34, v21));
  }
  result = a3;
  v36 = 0;
  v36.m128_f32[0] = this[1];
  v37 = _mm_mul_ps(v21, v19);
  *a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v37), *a3);
  v38 = 0;
  v38.m128_f32[0] = this[2];
  a3[1] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v37), a3[1]);
  v39 = 0;
  v39.m128_f32[0] = this[3];
  a3[2] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v37), a3[2]);
  return result;
}
