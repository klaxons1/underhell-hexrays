char __thiscall sub_10201C00(int this, int a2, int a3, int a4, int a5, int a6)
{
  __m128 *v6; // ebx
  __m128 *v7; // edi
  __m128 v8; // xmm0
  int v9; // edx
  int v10; // eax
  bool v11; // zf
  __m128 **v12; // edx
  unsigned int v13; // eax
  __m128 v14; // xmm4
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  int v19; // eax
  __m128 v20; // xmm5
  __m128 v21; // xmm2
  __m128 v22; // xmm0
  char v24; // [esp+13h] [ebp-D1h]
  __m128 **v25; // [esp+14h] [ebp-D0h]
  __m128 *v26; // [esp+18h] [ebp-CCh]
  int v27; // [esp+1Ch] [ebp-C8h]
  __m128 *v28; // [esp+20h] [ebp-C4h]
  int v29; // [esp+24h] [ebp-C0h]
  __m128 *v30; // [esp+28h] [ebp-BCh]
  int v31; // [esp+2Ch] [ebp-B8h]
  int v32; // [esp+30h] [ebp-B4h]
  unsigned int v33; // [esp+38h] [ebp-ACh]
  unsigned int v34; // [esp+40h] [ebp-A4h]
  __m128 v35; // [esp+44h] [ebp-A0h]
  __m128 v36; // [esp+54h] [ebp-90h]
  __m128 v37[3]; // [esp+64h] [ebp-80h] BYREF
  __m128 v38[5]; // [esp+94h] [ebp-50h] BYREF

  v27 = this;
  v34 = *(_DWORD *)(a4 + 6332) / 0xCu;
  v6 = (__m128 *)(48 * a2 * v34 + *(_DWORD *)(a4 + 6076));
  v33 = *(_DWORD *)(a4 + 6324) / 0xCu;
  v31 = *(_DWORD *)(a4 + 6336) >> 2;
  v7 = (__m128 *)(48 * a2 * v33 + *(_DWORD *)(a4 + 6068));
  v30 = (__m128 *)(16 * a2 * v31 + *(_DWORD *)(a4 + 6080));
  v29 = *(_DWORD *)(a4 + 6328) >> 2;
  v28 = (__m128 *)(16 * a2 * v29 + *(_DWORD *)(a4 + 6072));
  v8 = 0;
  v8.m128_f32[0] = *(float *)(this + 68);
  v36 = _mm_shuffle_ps(v8, v8, 0);
  v24 = 0;
  v32 = 33570827;
  if ( *(_BYTE *)(this + 216) )
    v32 = 16395;
  v9 = *(_DWORD *)(a4 + 6004);
  v10 = *(_DWORD *)(this + 56);
  v11 = v9 == 0;
  v12 = (__m128 **)(v9 + 4 * v10 + 5988);
  if ( v11 )
    v12 = (__m128 **)(a4 + 4 * v10 + 5988);
  v25 = v12;
  v26 = 0;
  if ( v10 == 1 || v10 == 3 || v10 == 2 )
  {
    if ( !*v12 )
    {
      v13 = sub_101F8C60(7952);
      *v25 = (__m128 *)v13;
      *(_DWORD *)(v13 + 7872) = 0;
      (*v25)[492].m128_f32[2] = -1.0;
      this = v27;
    }
    v26 = *v25;
    if ( *(float *)(a4 + 36) != (*v25)[492].m128_f32[2] )
    {
      sub_102003C0(
        (int)v26,
        (float *)a4,
        *(_DWORD *)(this + 56),
        *(_DWORD *)(this + 212),
        (float *)(this + 44),
        *(float *)(this + 72));
      v26[492].m128_f32[2] = *(float *)(a4 + 36);
      this = v27;
    }
  }
  while ( 1 )
  {
    v14 = _mm_mul_ps(*v30, v36);
    v15 = _mm_sub_ps(*v7, *v6);
    v16 = _mm_sub_ps(v7[1], v6[1]);
    v17 = _mm_sub_ps(v7[2], v6[2]);
    v18 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v16, v16), _mm_mul_ps(v15, v15)), _mm_mul_ps(v17, v17));
    v19 = *(_DWORD *)(this + 212);
    v35 = _mm_cmple_ps(v18, (__m128)xmmword_10394140);
    v20 = _mm_andnot_ps(v35, _mm_rsqrt_ps(v18));
    v37[0] = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v15, v20), v14), *v7);
    v21 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v17, v20), v14), v7[2]);
    v37[1] = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v16, v20), v14), v7[1]);
    v37[2] = v21;
    sub_10200EF0((int)v38, v6, v37, v19, v32, v26);
    v22 = _mm_andnot_ps(v35, _mm_cmplt_ps(v38[0], (__m128)xmmword_10394150));
    if ( _mm_movemask_ps(v22) )
    {
      v24 = 1;
      *v28 = _mm_or_ps(_mm_andnot_ps(v22, *v28), _mm_and_ps(v22, (__m128)xmmword_10394140));
    }
    v6 += 3 * v34;
    v30 += v31;
    v28 += v29;
    v7 += 3 * v33;
    if ( !--a3 )
      break;
    this = v27;
  }
  return v24;
}
