char __thiscall sub_102012E0(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  __m128 v10; // xmm0
  bool v11; // zf
  __m128 **v12; // eax
  unsigned int v13; // eax
  __m128 *v14; // edx
  int v15; // edi
  __m128 v17; // xmm6
  __m128 v18; // xmm4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm5
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  int v26; // edx
  __m128 v27; // xmm0
  int v29; // [esp-14h] [ebp-118h]
  char v30; // [esp+1Fh] [ebp-E5h]
  __m128 **v31; // [esp+20h] [ebp-E4h]
  float v32; // [esp+20h] [ebp-E4h]
  __m128 *v33; // [esp+24h] [ebp-E0h]
  int v34; // [esp+28h] [ebp-DCh]
  unsigned int v35; // [esp+2Ch] [ebp-D8h]
  int v36; // [esp+30h] [ebp-D4h]
  __m128 *v37; // [esp+34h] [ebp-D0h]
  unsigned int v38; // [esp+38h] [ebp-CCh]
  __m128 *v39; // [esp+3Ch] [ebp-C8h]
  int v40; // [esp+44h] [ebp-C0h]
  __m128 *v41; // [esp+4Ch] [ebp-B8h]
  __m128 v42; // [esp+54h] [ebp-B0h] BYREF
  __m128 v43; // [esp+64h] [ebp-A0h]
  __m128 v44; // [esp+74h] [ebp-90h]
  __m128 v45[3]; // [esp+84h] [ebp-80h] BYREF
  __m128 v46[5]; // [esp+B4h] [ebp-50h] BYREF

  v36 = this;
  v38 = *(_DWORD *)(a4 + 6332) / 0xCu;
  v37 = (__m128 *)(48 * a2 * v38 + *(_DWORD *)(a4 + 6076));
  v35 = *(_DWORD *)(a4 + 6324) / 0xCu;
  v34 = 48 * a2 * v35 + *(_DWORD *)(a4 + 6068);
  v6 = *(_DWORD *)(a4 + 6336) >> 2;
  v7 = *(_DWORD *)(a4 + 6328) >> 2;
  v41 = (__m128 *)(16 * a2 * v6 + *(_DWORD *)(a4 + 6080));
  v8 = *(_DWORD *)(a4 + 6004);
  v39 = (__m128 *)(16 * a2 * v7 + *(_DWORD *)(a4 + 6072));
  v9 = *(_DWORD *)(this + 56);
  v10 = 0;
  v10.m128_f32[0] = *(float *)(this + 68);
  v11 = v8 == 0;
  v44 = _mm_shuffle_ps(v10, v10, 0);
  v30 = 0;
  v12 = (__m128 **)(v8 + 4 * v9 + 5988);
  if ( v11 )
    v12 = (__m128 **)(a4 + 4 * v9 + 5988);
  v31 = v12;
  v33 = 0;
  if ( v9 != 1 && v9 != 3 && v9 != 2 )
    goto LABEL_10;
  if ( !*v12 )
  {
    v13 = sub_101F8C60(7952);
    *v31 = (__m128 *)v13;
    *(_DWORD *)(v13 + 7872) = 0;
    this = v36;
    (*v31)[492].m128_f32[2] = -1.0;
  }
  v14 = (__m128 *)v34;
  v33 = *v31;
  if ( *(float *)(a4 + 36) != (*v31)[492].m128_f32[2] )
  {
    sub_102003C0(
      (int)v33,
      (float *)a4,
      *(_DWORD *)(this + 56),
      *(_DWORD *)(this + 212),
      (float *)(this + 44),
      *(float *)(this + 72));
    this = v36;
    v33[492].m128_f32[2] = *(float *)(a4 + 36);
LABEL_10:
    v14 = (__m128 *)v34;
  }
  v32 = *(float *)(this + 76) * *(float *)(this + 76);
  v15 = 16 * v6;
  v40 = 16 * v7;
  while ( 1 )
  {
    v17 = *v14;
    v18 = _mm_mul_ps(*v41, v44);
    v19 = _mm_sub_ps(*v14, *v37);
    v20 = _mm_sub_ps(v14[1], v37[1]);
    v21 = _mm_sub_ps(v14[2], v37[2]);
    v22 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v20, v20), _mm_mul_ps(v19, v19)), _mm_mul_ps(v21, v21));
    v43 = _mm_cmple_ps(v22, (__m128)xmmword_10394140);
    v23 = _mm_andnot_ps(v43, _mm_rsqrt_ps(v22));
    v45[0] = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v19, v23), v18), v17);
    v24 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v21, v23), v18), v14[2]);
    v45[1] = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v20, v23), v18), v14[1]);
    v45[2] = v24;
    if ( a3 <= 1 )
      v25 = xmmword_103942E0[a6];
    else
      v25 = (__m128)xmmword_10394280;
    v26 = *(_DWORD *)(this + 56);
    v29 = *(_DWORD *)(this + 212);
    v42 = v25;
    sub_102007E0(v37, v45, v29, v46, v26, v33, &v42, v32);
    v27 = _mm_andnot_ps(v43, _mm_cmplt_ps(v46[0], (__m128)xmmword_10394150));
    if ( _mm_movemask_ps(v27) )
    {
      v30 = 1;
      *v39 = _mm_or_ps(_mm_andnot_ps(v27, *v39), _mm_and_ps(v27, (__m128)xmmword_10394140));
    }
    v34 += 48 * v35;
    v37 += 3 * v38;
    v41 = (__m128 *)((char *)v41 + v15);
    v39 = (__m128 *)((char *)v39 + v40);
    if ( !--a3 )
      break;
    this = v36;
    v14 = (__m128 *)v34;
  }
  return v30;
}
