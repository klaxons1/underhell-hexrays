__m128 *__thiscall sub_10207F90(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st4
  __m128 *v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  int v14; // edx
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 *result; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 *v22; // ebx
  __m128 v23; // xmm5
  __m128 v24; // xmm6
  __m128 v25; // xmm0
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  __m128 v28; // xmm3
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  int v31; // [esp+4h] [ebp-E0h]
  int v32; // [esp+8h] [ebp-DCh]
  float v33; // [esp+Ch] [ebp-D8h]
  float v34; // [esp+10h] [ebp-D4h]
  __m128 v35; // [esp+14h] [ebp-D0h]
  __m128 v36; // [esp+24h] [ebp-C0h]
  __m128 v37; // [esp+34h] [ebp-B0h]
  __m128 v38; // [esp+44h] [ebp-A0h]
  __m128 v39; // [esp+54h] [ebp-90h]
  __m128 v40; // [esp+64h] [ebp-80h]
  __m128 v41; // [esp+74h] [ebp-70h]
  __m128 v42; // [esp+84h] [ebp-60h]
  __m128 v43; // [esp+94h] [ebp-50h]
  __m128 v44; // [esp+A4h] [ebp-40h]
  _OWORD v45[3]; // [esp+B4h] [ebp-30h] BYREF

  v6 = 0.5;
  v35 = _mm_cmpeq_ps((__m128)xmmword_10394140, (__m128)xmmword_10394140);
  if ( *(_BYTE *)(this + 48) )
  {
    v35 = (__m128)xmmword_10394240;
    v6 = 1.0;
  }
  v8 = *(float *)(this + 56);
  v9 = *(float *)(this + 60);
  if ( ((1 << *(_DWORD *)(this + 44)) & 0x1010) != 0 )
  {
    v8 = v8 * 0.0174532925199433;
    v9 = v9 * 0.0174532925199433;
  }
  v10 = v9 - v8;
  v34 = v10 * v6;
  v11 = (__m128 *)(a2[*(_DWORD *)(this + 44) + 1517] + 16 * a3 * (a2[*(_DWORD *)(this + 44) + 1581] >> 2));
  v33 = v8 + v10 * (1.0 - v6);
  v12 = 0;
  v12.m128_f32[0] = v33;
  v44 = _mm_shuffle_ps(v12, v12, 0);
  v13 = 0;
  v13.m128_f32[0] = v34;
  v40 = _mm_shuffle_ps(v13, v13, 0);
  v14 = a2[1589] >> 2;
  v15 = 0;
  v15.m128_f32[0] = *(float *)(this + 52);
  v16 = 0;
  v16.m128_f32[0] = *(float *)(this + 72);
  v37 = _mm_shuffle_ps(v16, v16, 0);
  v17 = 0;
  v17.m128_f32[0] = *(float *)(this + 76);
  v38 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  result = (__m128 *)(a2[1525] + 16 * a3 * v14);
  v18.m128_f32[0] = *(float *)(this + 80);
  v39 = _mm_shuffle_ps(v18, v18, 0);
  v20 = _mm_add_ps(_mm_shuffle_ps(v15, v15, 0), *result);
  v21 = 0;
  v22 = (__m128 *)(a2[1517] + 48 * a3 * (a2[1581] / 0xCu));
  v21.m128_f32[0] = *(float *)(this + 64);
  v23 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v20);
  v24 = v23;
  v41 = v23;
  v42 = v23;
  v43 = v23;
  if ( a4 )
  {
    v32 = 16 * v14;
    v25 = 0;
    v25.m128_f32[0] = *(float *)(this + 68);
    v26 = _mm_shuffle_ps(v25, v25, 0);
    v36 = v26;
    v31 = 48 * v14;
    while ( 1 )
    {
      --a4;
      v27 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v22[2], v39), v26), v43);
      v28 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v22[1], v38), v26), v24);
      v45[0] = _mm_add_ps(_mm_mul_ps(v26, _mm_add_ps(v37, *v22)), v23);
      v45[1] = v28;
      v45[2] = v27;
      v29 = _mm_and_ps(sub_102AFBB0(v45), v35);
      if ( *(_BYTE *)(this + 49) )
        v29 = _mm_sub_ps((__m128)xmmword_10394150, v29);
      v30 = _mm_add_ps(_mm_mul_ps(v29, v40), v44);
      if ( ((1 << *(_DWORD *)(this + 44)) & 0x10080) != 0 )
        v30 = _mm_max_ps((__m128)xmmword_10394140, _mm_min_ps((__m128)xmmword_10394150, v30));
      v22 = (__m128 *)((char *)v22 + v31);
      *v11 = v30;
      v11 = (__m128 *)((char *)v11 + v32);
      if ( !a4 )
        break;
      v26 = v36;
      v24 = v42;
      v23 = v41;
    }
  }
  return result;
}
