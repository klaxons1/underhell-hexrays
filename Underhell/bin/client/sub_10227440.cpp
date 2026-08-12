__m128 *__cdecl sub_10227440(float a1, float a2, float a3, int a4, _DWORD *a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  int v10; // ecx
  __m128 v11; // xmm4
  __m128 v12; // xmm0
  unsigned int v13; // edx
  __m128 *v14; // edi
  __m128 v15; // xmm7
  __m128 *result; // eax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // xmm5
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  char v30; // [esp+13h] [ebp-7Dh]
  int v31; // [esp+14h] [ebp-7Ch]
  int v32; // [esp+18h] [ebp-78h]
  int v33; // [esp+1Ch] [ebp-74h]
  __m128 *v34; // [esp+20h] [ebp-70h]
  __m128 *v35; // [esp+28h] [ebp-68h]
  __m128 *v36; // [esp+30h] [ebp-60h]
  __m128 v37; // [esp+40h] [ebp-50h]
  __m128 v38; // [esp+50h] [ebp-40h]
  __m128 v39; // [esp+60h] [ebp-30h]
  __m128 v40; // [esp+70h] [ebp-20h]
  __m128 v41; // [esp+80h] [ebp-10h]

  v5 = 0;
  v5.m128_f32[0] = a1;
  v39 = _mm_shuffle_ps(v5, v5, 0);
  v6 = 0;
  v6.m128_f32[0] = a2;
  v40 = _mm_shuffle_ps(v6, v6, 0);
  v7 = 0;
  v7.m128_f32[0] = a3;
  v41 = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0;
  v36 = (__m128 *)a5[1520];
  v8.m128_f32[0] = *(float *)a4;
  v37 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = *(float *)(a4 + 4);
  v34 = (__m128 *)a5[1524];
  v35 = (__m128 *)a5[1533];
  v10 = a5[10];
  v38 = _mm_shuffle_ps(v9, v9, 0);
  v11 = _mm_add_ps((__m128)xmmword_103941D0, (__m128)xmmword_10394230);
  v12 = 0;
  v13 = 48 * (a5[1581] / 0xCu);
  v12.m128_f32[0] = 255.0;
  v31 = 16 * (a5[1588] >> 2);
  v33 = 16 * (a5[1584] >> 2);
  v14 = (__m128 *)a5[1517];
  v30 = *(_BYTE *)(a4 + 8);
  v15 = _mm_shuffle_ps(v12, v12, 0);
  v32 = 16 * (a5[1597] >> 2);
  result = (__m128 *)&unk_10465D90;
  do
  {
    v17 = _mm_sub_ps(v39, *v14);
    v18 = _mm_sub_ps(v40, v14[1]);
    v19 = _mm_sub_ps(v41, v14[2]);
    v20 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v19, v19), _mm_mul_ps(v18, v18)), _mm_mul_ps(v17, v17));
    v21 = _mm_mul_ps(*v35, *v34);
    v22 = *v36;
    if ( v30 )
    {
      v22 = _mm_mul_ps(v22, v38);
      v21 = _mm_max_ps((__m128)xmmword_10394140, _mm_min_ps((__m128)xmmword_10394150, _mm_mul_ps(v21, v37)));
    }
    v23 = _mm_add_ps(_mm_mul_ps(v21, v15), (__m128)xmmword_103941D0);
    v24 = _mm_and_ps((__m128)xmmword_10394290, v11);
    v25 = _mm_shuffle_ps(v20, v24, 68);
    v26 = _mm_shuffle_ps(v20, v24, 238);
    v27 = v22;
    v28 = _mm_shuffle_ps(v22, v23, 238);
    v29 = _mm_shuffle_ps(v27, v23, 68);
    result[-1] = _mm_shuffle_ps(v25, v29, 221);
    v34 = (__m128 *)((char *)v34 + v31);
    v35 = (__m128 *)((char *)v35 + v32);
    v36 = (__m128 *)((char *)v36 + v33);
    *result = _mm_shuffle_ps(v26, v28, 136);
    result[-2] = _mm_shuffle_ps(v25, v29, 136);
    result[1] = _mm_shuffle_ps(v26, v28, 221);
    v10 -= 4;
    result += 4;
    v14 = (__m128 *)((char *)v14 + v13);
    v11 = _mm_add_ps((__m128)xmmword_10394180, v11);
  }
  while ( v10 > 0 );
  return result;
}
