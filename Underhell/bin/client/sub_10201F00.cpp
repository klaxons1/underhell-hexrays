char __thiscall sub_10201F00(int this, int a2, int a3, int a4, int a5, int a6)
{
  __m128 *v6; // esi
  __m128 *v7; // edi
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  int v11; // edx
  int v12; // eax
  bool v13; // zf
  __m128 **v14; // edx
  unsigned int v15; // eax
  __m128 v16; // xmm4
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm5
  __m128 v21; // xmm5
  int v22; // eax
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm4
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm7
  __m128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm5
  __m128 v34; // xmm0
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm5
  __m128 v38; // xmm6
  char v40; // [esp+12h] [ebp-1A2h]
  bool v41; // [esp+13h] [ebp-1A1h]
  __m128 **v42; // [esp+14h] [ebp-1A0h]
  int v43; // [esp+14h] [ebp-1A0h]
  __m128 *v44; // [esp+18h] [ebp-19Ch]
  int v45; // [esp+1Ch] [ebp-198h]
  __m128 *v46; // [esp+20h] [ebp-194h]
  int v47; // [esp+24h] [ebp-190h]
  int v48; // [esp+28h] [ebp-18Ch]
  unsigned int v49; // [esp+30h] [ebp-184h]
  __m128 v50; // [esp+44h] [ebp-170h]
  __m128 v51; // [esp+54h] [ebp-160h]
  __m128 v52; // [esp+64h] [ebp-150h]
  unsigned int v53; // [esp+68h] [ebp-14Ch]
  __m128 v54; // [esp+74h] [ebp-140h]
  __m128 v55; // [esp+84h] [ebp-130h]
  __m128 v56; // [esp+A4h] [ebp-110h]
  __m128 v57; // [esp+B4h] [ebp-100h]
  __m128 v58; // [esp+C4h] [ebp-F0h]
  __m128 v59; // [esp+D4h] [ebp-E0h]
  __m128 v60; // [esp+F4h] [ebp-C0h]
  __m128 v61; // [esp+104h] [ebp-B0h]
  __m128 v62; // [esp+114h] [ebp-A0h]
  __m128 v63; // [esp+124h] [ebp-90h]
  __m128 v64; // [esp+134h] [ebp-80h] BYREF
  __m128 v65; // [esp+144h] [ebp-70h]
  __m128 v66; // [esp+154h] [ebp-60h]
  __m128 v67; // [esp+164h] [ebp-50h]
  __m128 v68; // [esp+174h] [ebp-40h]
  __m128 v69[3]; // [esp+184h] [ebp-30h] BYREF

  v45 = this;
  v53 = *(_DWORD *)(a4 + 6332) / 0xCu;
  v6 = (__m128 *)(48 * a2 * v53 + *(_DWORD *)(a4 + 6076));
  v49 = *(_DWORD *)(a4 + 6324) / 0xCu;
  v47 = *(_DWORD *)(a4 + 6336) >> 2;
  v7 = (__m128 *)(48 * a2 * v49 + *(_DWORD *)(a4 + 6068));
  v8 = 0;
  v8.m128_f32[0] = *(float *)(this + 60);
  v46 = (__m128 *)(16 * a2 * v47 + *(_DWORD *)(a4 + 6080));
  v62 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = *(float *)(this + 64);
  v59 = _mm_shuffle_ps(v9, v9, 0);
  v41 = 0.0 != *(float *)(this + 60) || 0.0 != *(float *)(this + 64);
  v10 = 0;
  v10.m128_f32[0] = *(float *)(this + 68);
  v63 = _mm_shuffle_ps(v10, v10, 0);
  v40 = 0;
  v48 = 33570827;
  if ( *(_BYTE *)(this + 216) )
    v48 = 16395;
  v11 = *(_DWORD *)(a4 + 6004);
  v12 = *(_DWORD *)(this + 56);
  v13 = v11 == 0;
  v14 = (__m128 **)(v11 + 4 * v12 + 5988);
  if ( v13 )
    v14 = (__m128 **)(a4 + 4 * v12 + 5988);
  v42 = v14;
  v44 = 0;
  if ( v12 == 1 || v12 == 3 || v12 == 2 )
  {
    if ( !*v14 )
    {
      v15 = sub_101F8C60(7952);
      *v42 = (__m128 *)v15;
      *(_DWORD *)(v15 + 7872) = 0;
      (*v42)[492].m128_f32[2] = -1.0;
      this = v45;
    }
    v44 = *v42;
    if ( *(float *)(a4 + 36) != (*v42)[492].m128_f32[2] )
    {
      sub_102003C0(
        (int)v44,
        (float *)a4,
        *(_DWORD *)(this + 56),
        *(_DWORD *)(this + 212),
        (float *)(this + 44),
        *(float *)(this + 72));
      v44[492].m128_f32[2] = *(float *)(a4 + 36);
      this = v45;
    }
  }
  v43 = 48 * v53;
  while ( 1 )
  {
    v16 = _mm_mul_ps(*v46, v63);
    v17 = _mm_sub_ps(*v7, *v6);
    v18 = _mm_sub_ps(v7[1], v6[1]);
    v19 = _mm_sub_ps(v7[2], v6[2]);
    v20 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v18, v18), _mm_mul_ps(v17, v17)), _mm_mul_ps(v19, v19));
    v52 = _mm_cmple_ps(v20, (__m128)xmmword_10394140);
    v21 = _mm_andnot_ps(v52, _mm_rsqrt_ps(v20));
    v54 = v17;
    v56 = _mm_mul_ps(v17, v21);
    v22 = *(_DWORD *)(this + 212);
    v55 = v18;
    v57 = _mm_mul_ps(v18, v21);
    v69[0] = _mm_add_ps(_mm_mul_ps(v56, v16), *v7);
    v58 = _mm_mul_ps(v19, v21);
    v23 = _mm_add_ps(_mm_mul_ps(v58, v16), v7[2]);
    v69[1] = _mm_add_ps(_mm_mul_ps(v57, v16), v7[1]);
    v69[2] = v23;
    sub_10200EF0((int)&v64, v6, v69, v22, v48, v44);
    v24 = _mm_andnot_ps(v52, _mm_cmplt_ps(v64, (__m128)xmmword_10394150));
    if ( _mm_movemask_ps(v24) )
    {
      v25 = _mm_add_ps(_mm_mul_ps(v55, v64), v6[1]);
      v26 = _mm_add_ps(*v6, _mm_mul_ps(v64, v54));
      v27 = _mm_add_ps(_mm_mul_ps(v19, v64), v6[2]);
      v40 = 1;
      v50 = v25;
      v51 = v27;
      if ( v41 )
      {
        v28 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v66, v56), _mm_mul_ps(v67, v57)), _mm_mul_ps(v68, v58));
        v29 = _mm_add_ps(v28, v28);
        v60 = _mm_mul_ps(_mm_sub_ps(v57, _mm_mul_ps(v67, v29)), v62);
        v30 = _mm_mul_ps(_mm_sub_ps(v56, _mm_mul_ps(v66, v29)), v62);
        v61 = _mm_mul_ps(_mm_sub_ps(v58, _mm_mul_ps(v68, v29)), v62);
        v31 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v66, v54), _mm_mul_ps(v67, v55)), _mm_mul_ps(v68, v19));
        v32 = _mm_sub_ps(v55, _mm_mul_ps(v67, v31));
        v33 = _mm_sub_ps(v19, _mm_mul_ps(v68, v31));
        v34 = _mm_mul_ps(_mm_sub_ps(v54, _mm_mul_ps(v31, v66)), v59);
        v35 = _mm_mul_ps(v32, v59);
        v36 = _mm_mul_ps(v33, v59);
        v37 = _mm_add_ps(v34, v30);
        v38 = _mm_add_ps(v35, v60);
        v26 = _mm_add_ps(_mm_mul_ps(v34, v65), _mm_add_ps(_mm_mul_ps(v65, v30), v26));
        v25 = _mm_add_ps(_mm_mul_ps(v35, v65), _mm_add_ps(_mm_mul_ps(v60, v65), v50));
        v27 = _mm_add_ps(_mm_mul_ps(v36, v65), _mm_add_ps(_mm_mul_ps(v61, v65), v51));
        *v6 = _mm_or_ps(_mm_andnot_ps(v24, *v6), _mm_and_ps(_mm_sub_ps(v26, v37), v24));
        v6[1] = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v25, v38), v24), _mm_andnot_ps(v24, v6[1]));
        v6[2] = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v27, _mm_add_ps(v36, v61)), v24), _mm_andnot_ps(v24, v6[2]));
      }
      *v7 = _mm_or_ps(_mm_andnot_ps(v24, *v7), _mm_and_ps(v26, v24));
      v7[1] = _mm_or_ps(_mm_and_ps(v25, v24), _mm_andnot_ps(v24, v7[1]));
      v7[2] = _mm_or_ps(_mm_and_ps(v27, v24), _mm_andnot_ps(v24, v7[2]));
    }
    v6 = (__m128 *)((char *)v6 + v43);
    v46 += v47;
    v7 += 3 * v49;
    if ( !--a3 )
      break;
    this = v45;
  }
  return v40;
}
