__m128 *__thiscall sub_10202DE0(int this, __m128 *a2, int a3, int a4, float a5, int a6)
{
  __m128 v6; // xmm0
  __m128 *v7; // esi
  __m128 v8; // xmm0
  unsigned int v9; // kr00_4
  __m128 *result; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  bool v30; // zf
  int v31; // [esp-4h] [ebp-ACh]
  float v32; // [esp+0h] [ebp-A8h]
  int v33; // [esp+14h] [ebp-94h]
  int v34; // [esp+18h] [ebp-90h]
  int v35[3]; // [esp+1Ch] [ebp-8Ch] BYREF
  __m128 v36; // [esp+28h] [ebp-80h] BYREF
  __m128 v37; // [esp+38h] [ebp-70h]
  __m128 v38; // [esp+48h] [ebp-60h]
  __m128 v39; // [esp+58h] [ebp-50h]
  __m128 v40; // [esp+68h] [ebp-40h]
  __m128 v41; // [esp+78h] [ebp-30h]
  __m128 v42; // [esp+88h] [ebp-20h]
  __m128 v43; // [esp+98h] [ebp-10h]

  v34 = (int)(*(float *)(this + 48) * -4.0);
  v32 = *(float *)(a3 + 36);
  v6 = 0;
  v6.m128_f32[0] = -0.0 - (float)(*(float *)(this + 44) * a5);
  v31 = *(_DWORD *)(this + 52);
  v40 = _mm_shuffle_ps(v6, v6, 0);
  sub_101F8ED0(a3, v31, v32, (float *)v35);
  v7 = *(__m128 **)(a3 + 6068);
  v8 = 0;
  v8.m128_f32[0] = *(float *)v35;
  v9 = *(_DWORD *)(a3 + 6324);
  result = (__m128 *)a4;
  v37 = _mm_shuffle_ps(v8, v8, 0);
  v11 = 0;
  v11.m128_f32[0] = *(float *)&v35[1];
  v38 = _mm_shuffle_ps(v11, v11, 0);
  v12 = 0;
  v12.m128_f32[0] = *(float *)&v35[2];
  v39 = _mm_shuffle_ps(v12, v12, 0);
  if ( a4 > 0 )
  {
    v33 = a4;
    do
    {
      v14 = _mm_sub_ps(*v7, v37);
      v15 = _mm_sub_ps(v7[1], v38);
      v16 = _mm_sub_ps(v7[2], v39);
      v17 = _mm_sqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v15, v15), _mm_mul_ps(v14, v14)), _mm_mul_ps(v16, v16)));
      v18 = _mm_or_ps(_mm_and_ps(_mm_cmpeq_ps((__m128)xmmword_10394140, v17), (__m128)xmmword_10394200), v17);
      v36 = v17;
      v19 = _mm_rcp_ps(v18);
      v20 = _mm_mul_ps(_mm_sub_ps(_mm_add_ps(v19, v19), _mm_mul_ps(_mm_mul_ps(v19, v19), v18)), v40);
      v41 = _mm_mul_ps(v14, v20);
      v42 = _mm_mul_ps(v15, v20);
      v43 = _mm_mul_ps(v16, v20);
      v21 = sub_101F41F0(&v36, v34);
      v22 = _mm_mul_ps(v41, v21);
      v23 = _mm_mul_ps(v42, v21);
      v24 = _mm_mul_ps(v43, v21);
      result = a2;
      v25 = _mm_cmplt_ps((__m128)xmmword_10394200, v36);
      v26 = _mm_and_ps(v24, v25);
      v27 = _mm_add_ps(_mm_and_ps(v22, v25), *a2);
      v28 = _mm_add_ps(_mm_and_ps(v23, v25), a2[1]);
      v29 = a2[2];
      a2 += 3;
      v7 += 3 * (v9 / 0xC);
      v30 = v33-- == 1;
      *result = v27;
      result[1] = v28;
      result[2] = _mm_add_ps(v26, v29);
    }
    while ( !v30 );
  }
  return result;
}
