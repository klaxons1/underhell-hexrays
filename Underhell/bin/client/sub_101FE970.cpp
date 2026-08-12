float *__thiscall sub_101FE970(int this, int a2, int a3, int a4, int a5, int a6)
{
  __m128 v6; // xmm0
  float v8; // xmm1_4
  unsigned int v9; // kr00_4
  __m128 v10; // xmm0
  float *result; // eax
  __m128 v12; // xmm0
  __m128 *v13; // esi
  bool v14; // zf
  __m128 v15; // xmm0
  double v16; // st7
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 v24; // xmm0
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm6
  __m128 v28; // xmm0
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  __m128 v31; // xmm6
  __m128 v32; // xmm4
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  int v36; // [esp+1Ch] [ebp-12Ch] BYREF
  float v37; // [esp+20h] [ebp-128h]
  float v38; // [esp+24h] [ebp-124h]
  __m128 v39; // [esp+28h] [ebp-120h] BYREF
  __m128 v40; // [esp+38h] [ebp-110h]
  __m128 v41; // [esp+48h] [ebp-100h]
  __m128 v42; // [esp+58h] [ebp-F0h]
  __m128 v43; // [esp+68h] [ebp-E0h]
  __m128 v44; // [esp+78h] [ebp-D0h]
  __m128 v45; // [esp+88h] [ebp-C0h]
  __m128 v46; // [esp+98h] [ebp-B0h]
  __m128 v47; // [esp+A8h] [ebp-A0h]
  __m128 v48; // [esp+B8h] [ebp-90h]
  __m128 v49; // [esp+C8h] [ebp-80h]
  __m128 v50; // [esp+D8h] [ebp-70h]
  __m128 v51; // [esp+E8h] [ebp-60h]
  __m128 v52; // [esp+118h] [ebp-30h]

  v6 = 0;
  v6.m128_f32[0] = *(float *)(this + 44);
  v8 = *(float *)(this + 48);
  v9 = *(_DWORD *)(a4 + 6324);
  v44 = _mm_shuffle_ps(v6, v6, 0);
  v10 = 0;
  v10.m128_f32[0] = v8;
  v45 = _mm_shuffle_ps(v10, v10, 0);
  result = (float *)(a2 * (v9 / 0xC));
  v12 = 0;
  v12.m128_f32[0] = *(float *)(this + 44) * *(float *)(this + 44);
  v49 = _mm_shuffle_ps(v12, v12, 0);
  v13 = (__m128 *)(*(_DWORD *)(a4 + 6068) + 48 * (_DWORD)result);
  v14 = *(_BYTE *)(this + 68) == 0;
  v15 = 0;
  v15.m128_f32[0] = *(float *)(this + 48) * *(float *)(this + 48);
  v50 = _mm_shuffle_ps(v15, v15, 0);
  if ( v14 )
  {
    sub_101F8ED0(a4, *(_DWORD *)(this + 52), *(float *)(a4 + 36), (float *)&v36);
    result = sub_101FE8B0((char *)a4, v39.m128_f32, (float *)(this + 56), 1, *(_DWORD *)(this + 52));
    *(float *)&v36 = *result + *(float *)&v36;
    v37 = result[1] + v37;
    v16 = result[2] + v38;
  }
  else
  {
    v36 = *(int *)(this + 56);
    v37 = *(float *)(this + 60);
    v16 = *(float *)(this + 64);
  }
  v38 = v16;
  v18 = 0;
  v18.m128_f32[0] = *(float *)&v36;
  v40 = _mm_shuffle_ps(v18, v18, 0);
  v19 = 0;
  v19.m128_f32[0] = v37;
  v41 = _mm_shuffle_ps(v19, v19, 0);
  v20 = 0;
  v20.m128_f32[0] = v38;
  LOBYTE(result) = 0;
  v42 = _mm_shuffle_ps(v20, v20, 0);
  do
  {
    v21 = _mm_sub_ps(*v13, v40);
    v22 = _mm_sub_ps(v13[1], v41);
    v23 = _mm_sub_ps(v13[2], v42);
    v24 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v22, v22), _mm_mul_ps(v21, v21)), _mm_mul_ps(v23, v23));
    v25 = _mm_cmplt_ps(v24, v49);
    v26 = _mm_cmplt_ps(v50, v24);
    if ( _mm_movemask_ps(_mm_or_ps(v25, v26)) )
    {
      v27 = _mm_rsqrt_ps(_mm_or_ps(_mm_and_ps(_mm_cmpeq_ps((__m128)xmmword_10394140, v24), (__m128)xmmword_10394200), v24));
      v28 = _mm_mul_ps(
              _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v27, v27), v24)), v27),
              (__m128)xmmword_10394130);
      v29 = _mm_mul_ps(v21, v28);
      v30 = _mm_mul_ps(v22, v28);
      v46 = _mm_add_ps(_mm_mul_ps(v29, v45), v40);
      v31 = _mm_mul_ps(v30, v44);
      v47 = _mm_mul_ps(v30, v45);
      v32 = _mm_mul_ps(v23, v28);
      v51 = _mm_add_ps(_mm_mul_ps(v29, v44), v40);
      v39 = v26;
      v39 = _mm_or_ps(_mm_andnot_ps(v26, *v13), _mm_and_ps(v46, v26));
      v43 = v25;
      v33 = v13[1];
      v52 = _mm_or_ps(_mm_andnot_ps(v25, v39), _mm_and_ps(v51, v25));
      v43 = v25;
      v48 = _mm_mul_ps(v32, v45);
      v34 = _mm_or_ps(
              _mm_andnot_ps(v25, _mm_or_ps(_mm_andnot_ps(v26, v33), _mm_and_ps(_mm_add_ps(v41, v47), v26))),
              _mm_and_ps(_mm_add_ps(v41, v31), v25));
      v35 = _mm_or_ps(
              _mm_andnot_ps(v25, _mm_or_ps(_mm_andnot_ps(v26, v13[2]), _mm_and_ps(_mm_add_ps(v42, v48), v26))),
              _mm_and_ps(_mm_add_ps(v42, _mm_mul_ps(v32, v44)), v25));
      *v13 = v52;
      v13[1] = v34;
      v13[2] = v35;
      LOBYTE(result) = 1;
    }
    v13 += 3 * (v9 / 0xC);
    --a3;
  }
  while ( a3 );
  return result;
}
