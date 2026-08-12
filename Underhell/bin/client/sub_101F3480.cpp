__m128 *__thiscall sub_101F3480(int this, __m128 *a2, __m128 *a3, __m128 *a4, char a5)
{
  float v6; // ecx
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm4
  __m128 *result; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  int v14; // eax
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  __m128 v20; // xmm6
  __m128 v21; // xmm6
  __m128 v22; // xmm5
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __m128 v27; // xmm7
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm5
  bool v31; // pf
  __m128 v32; // xmm6
  __m128 v33; // xmm3
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // [esp+20h] [ebp-60h]
  __m128 v44; // [esp+30h] [ebp-50h] BYREF
  __m128 v45; // [esp+40h] [ebp-40h]
  __m128 v46; // [esp+50h] [ebp-30h]
  __m128 v47; // [esp+60h] [ebp-20h]
  __m128 v48; // [esp+70h] [ebp-10h]

  v6 = *(float *)this;
  switch ( LODWORD(v6) )
  {
    case 1:
      goto LABEL_6;
    case 2:
      return sub_101F3380((float *)this, (int)a2, a3, a4, a5);
    case 3:
LABEL_6:
      v11 = 0;
      v11.m128_f32[0] = *(float *)(this + 16);
      v12 = 0;
      v12.m128_f32[0] = *(float *)(this + 20);
      v13 = 0;
      v13.m128_f32[0] = *(float *)(this + 24);
      v9 = _mm_sub_ps(_mm_shuffle_ps(v11, v11, 0), *a2);
      v8 = _mm_sub_ps(_mm_shuffle_ps(v12, v12, 0), a2[1]);
      v7 = _mm_sub_ps(_mm_shuffle_ps(v13, v13, 0), a2[2]);
      break;
    default:
      v7 = v48;
      v8 = v47;
      v9 = v46;
      break;
  }
  v14 = *(_DWORD *)(this + 76);
  v15 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v9, v9), _mm_mul_ps(v8, v8)), _mm_mul_ps(v7, v7));
  v16 = _mm_max_ps((__m128)xmmword_10394150, v15);
  if ( (v14 & 1) != 0 )
  {
    v17 = 0;
    v17.m128_f32[0] = *(float *)(this + 48);
    v18 = _mm_shuffle_ps(v17, v17, 0);
  }
  else
  {
    v18 = (__m128)xmmword_10394200;
  }
  if ( (v14 & 2) != 0 )
  {
    v19 = 0;
    v19.m128_f32[0] = *(float *)(this + 52);
    v18 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), _mm_sqrt_ps(v16)), v18);
  }
  if ( (v14 & 4) != 0 )
  {
    v20 = 0;
    v20.m128_f32[0] = *(float *)(this + 56);
    v18 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v16), v18);
  }
  v21 = _mm_rcp_ps(v18);
  v43 = v21;
  if ( 0.0 != *(float *)(this + 40) )
  {
    v22 = 0;
    v22.m128_f32[0] = *(float *)(this + 84);
    v43 = _mm_and_ps(_mm_cmplt_ps(v16, _mm_shuffle_ps(v22, v22, 0)), v21);
  }
  v23 = _mm_rsqrt_ps(v15);
  v24 = _mm_mul_ps(v8, v23);
  v25 = _mm_mul_ps(v7, v23);
  v26 = _mm_mul_ps(v23, v9);
  v27 = v24;
  v48 = v25;
  if ( a5 )
    v28 = _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(_mm_add_ps(_mm_mul_ps(a3[1], v24), _mm_mul_ps(*a3, v26)), _mm_mul_ps(a3[2], v25)),
              (__m128)xmmword_10394130),
            (__m128)xmmword_10394130);
  else
    v28 = _mm_max_ps(
            (__m128)xmmword_10394140,
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(a3[1], v24), _mm_mul_ps(*a3, v26)), _mm_mul_ps(a3[2], v25)));
  if ( LODWORD(v6) == 3 )
  {
    v29 = 0;
    v29.m128_f32[0] = *(float *)(this + 28);
    v30 = 0;
    v31 = 0.0 != *(float *)(this + 44);
    v30.m128_f32[0] = *(float *)(this + 32);
    v32 = 0;
    v32.m128_f32[0] = *(float *)(this + 36);
    v33 = _mm_sub_ps(
            (__m128)xmmword_10394140,
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v27), _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v26)),
              _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v48)));
    v34 = 0;
    v34.m128_f32[0] = *(float *)(this + 72);
    v35 = v33;
    v36 = 0;
    v36.m128_f32[0] = *(float *)(this + 80);
    v37 = _mm_min_ps(
            _mm_mul_ps(_mm_sub_ps(v35, _mm_shuffle_ps(v34, v34, 0)), _mm_shuffle_ps(v36, v36, 0)),
            (__m128)xmmword_10394150);
    v45 = v35;
    v44 = v37;
    if ( v31 && 1.0 != *(float *)(this + 44) )
    {
      sub_101F41F0(&v44, (int)(*(float *)(this + 44) * 4.0));
      v35 = v45;
    }
    v38 = 0;
    v38.m128_f32[0] = *(float *)(this + 72);
    v28 = _mm_and_ps(_mm_cmplt_ps(_mm_shuffle_ps(v38, v38, 0), v35), _mm_mul_ps(v37, v28));
  }
  result = a4;
  v39 = _mm_mul_ps(v28, v43);
  v40 = 0;
  v40.m128_f32[0] = *(float *)(this + 4);
  *a4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v39), *a4);
  v41 = 0;
  v41.m128_f32[0] = *(float *)(this + 8);
  a4[1] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), v39), a4[1]);
  v42 = 0;
  v42.m128_f32[0] = *(float *)(this + 12);
  a4[2] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v39), a4[2]);
  return result;
}
