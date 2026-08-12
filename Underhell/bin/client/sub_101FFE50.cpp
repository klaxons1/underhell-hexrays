char __thiscall sub_101FFE50(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  float *v8; // eax
  bool v9; // zf
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm0
  __m128 v19; // xmm7
  __m128 v20; // xmm0
  float v21; // xmm1_4
  __m128 v22; // xmm0
  float v23; // xmm1_4
  __m128 v24; // xmm0
  __m128 v26; // xmm0
  char result; // al
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  int v32; // [esp+20h] [ebp-98h]
  __m128 *v33; // [esp+24h] [ebp-94h]
  unsigned int v34; // [esp+28h] [ebp-90h]
  float v35; // [esp+2Ch] [ebp-8Ch]
  float v36; // [esp+30h] [ebp-88h]
  float v37; // [esp+34h] [ebp-84h]
  __m128 *v38; // [esp+38h] [ebp-80h]
  float v39[3]; // [esp+40h] [ebp-78h] BYREF
  int v40[3]; // [esp+4Ch] [ebp-6Ch] BYREF
  __m128 v41; // [esp+58h] [ebp-60h]
  __m128 v42; // [esp+68h] [ebp-50h]
  __m128 v43; // [esp+78h] [ebp-40h]
  __m128 v44; // [esp+88h] [ebp-30h]
  __m128 v45; // [esp+98h] [ebp-20h]
  __m128 v46; // [esp+A8h] [ebp-10h]

  v34 = *(_DWORD *)(a4 + 6324) / 0xCu;
  v33 = (__m128 *)(48 * a2 * v34 + *(_DWORD *)(a4 + 6068));
  v7 = *(_DWORD *)(a4 + 6336) >> 2;
  v38 = (__m128 *)(16 * a2 * v7 + *(_DWORD *)(a4 + 6080));
  v32 = *(_DWORD *)(this + 68);
  v8 = sub_101FE8B0((char *)a4, v39, (float *)(this + 56), *(_BYTE *)(this + 73) == 0, v32);
  v9 = *(_BYTE *)(this + 72) == 0;
  v10 = 0;
  v10.m128_f32[0] = *v8;
  v11 = _mm_shuffle_ps(v10, v10, 0);
  v12 = 0;
  v12.m128_f32[0] = v8[1];
  v13 = _mm_shuffle_ps(v12, v12, 0);
  v14 = 0;
  v14.m128_f32[0] = v8[2];
  v15 = _mm_shuffle_ps(v14, v14, 0);
  v16 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v13, v13), _mm_mul_ps(v11, v11)), _mm_mul_ps(v15, v15));
  v17 = _mm_rsqrt_ps(v16);
  v18 = _mm_mul_ps(
          _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v17, v17), v16)), v17),
          (__m128)xmmword_10394130);
  v19 = _mm_mul_ps(v18, v11);
  v44 = v19;
  v45 = _mm_mul_ps(v13, v18);
  v46 = _mm_mul_ps(v15, v18);
  if ( v9 )
  {
    sub_101FE8B0((char *)a4, v39, (float *)(this + 44), 1, v32);
    sub_101F8ED0(a4, v32, *(float *)(a4 + 36), (float *)v40);
    v19 = v44;
    v24 = 0;
    v35 = *(float *)v40 + v39[0];
    v24.m128_f32[0] = v35;
    v41 = _mm_shuffle_ps(v24, v24, 0);
    v36 = *(float *)&v40[1] + v39[1];
    v22 = 0;
    v22.m128_f32[0] = v36;
    v37 = *(float *)&v40[2] + v39[2];
    v23 = v37;
  }
  else
  {
    v20 = 0;
    v20.m128_f32[0] = *(float *)(this + 44);
    v21 = *(float *)(this + 48);
    v41 = _mm_shuffle_ps(v20, v20, 0);
    v22 = 0;
    v22.m128_f32[0] = v21;
    v23 = *(float *)(this + 52);
  }
  v42 = _mm_shuffle_ps(v22, v22, 0);
  v26 = 0;
  result = 0;
  v26.m128_f32[0] = v23;
  v43 = _mm_shuffle_ps(v26, v26, 0);
  do
  {
    v28 = _mm_sub_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v33[1], v42), v45), _mm_mul_ps(_mm_sub_ps(*v33, v41), v19)),
              _mm_mul_ps(_mm_sub_ps(v33[2], v43), v46)),
            *v38);
    if ( _mm_movemask_ps(_mm_cmplt_ps(v28, (__m128)xmmword_10394140)) )
    {
      v29 = _mm_min_ps((__m128)xmmword_10394140, v28);
      v30 = _mm_sub_ps(v33[1], _mm_mul_ps(v45, v29));
      v31 = _mm_sub_ps(v33[2], _mm_mul_ps(v46, v29));
      result = 1;
      *v33 = _mm_sub_ps(*v33, _mm_mul_ps(v19, v29));
      v33[1] = v30;
      v33[2] = v31;
    }
    v38 += v7;
    --a3;
    v33 += 3 * v34;
  }
  while ( a3 );
  return result;
}
