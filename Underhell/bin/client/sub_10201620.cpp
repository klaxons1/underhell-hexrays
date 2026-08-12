char __thiscall sub_10201620(int this, int a2, int a3, int a4, int a5, int a6)
{
  bool v6; // c3
  __m128 *v7; // esi
  __m128 *v8; // ebx
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm0
  int v12; // edx
  int v13; // eax
  __m128 v14; // xmm0
  bool v15; // zf
  __m128 **v16; // edx
  unsigned int v17; // eax
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 v24; // xmm5
  __m128 v25; // xmm0
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  int v28; // edx
  __m128 v29; // xmm2
  __m128 v30; // xmm5
  __m128 v31; // xmm0
  __m128 v32; // xmm4
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm7
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128 v38; // xmm5
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm3
  __m128 v42; // xmm5
  __m128 v43; // xmm6
  __m128 v44; // xmm7
  __m128 v45; // xmm1
  int v47; // [esp-14h] [ebp-1E8h]
  bool v48; // [esp+1Eh] [ebp-1B6h]
  char v49; // [esp+1Fh] [ebp-1B5h]
  __m128 **v50; // [esp+20h] [ebp-1B4h]
  float v51; // [esp+20h] [ebp-1B4h]
  __m128 *v52; // [esp+24h] [ebp-1B0h]
  int v53; // [esp+28h] [ebp-1ACh]
  __m128 *v54; // [esp+2Ch] [ebp-1A8h]
  int v55; // [esp+30h] [ebp-1A4h]
  unsigned int v56; // [esp+38h] [ebp-19Ch]
  unsigned int v57; // [esp+40h] [ebp-194h]
  __m128 v58; // [esp+44h] [ebp-190h]
  __m128 v59; // [esp+44h] [ebp-190h]
  __m128 v60; // [esp+54h] [ebp-180h]
  __m128 v61; // [esp+74h] [ebp-160h]
  __m128 v62; // [esp+84h] [ebp-150h]
  __m128 v63; // [esp+94h] [ebp-140h]
  __m128 v64; // [esp+A4h] [ebp-130h] BYREF
  __m128 v65; // [esp+B4h] [ebp-120h]
  __m128 v66; // [esp+C4h] [ebp-110h]
  __m128 v67; // [esp+D4h] [ebp-100h]
  __m128 v68; // [esp+E4h] [ebp-F0h]
  __m128 v69; // [esp+F4h] [ebp-E0h]
  __m128 v70; // [esp+104h] [ebp-D0h]
  __m128 v71; // [esp+114h] [ebp-C0h]
  __m128 v72; // [esp+124h] [ebp-B0h]
  __m128 v73; // [esp+134h] [ebp-A0h]
  __m128 v74; // [esp+144h] [ebp-90h]
  __m128 v75; // [esp+154h] [ebp-80h] BYREF
  __m128 v76; // [esp+164h] [ebp-70h]
  __m128 v77; // [esp+174h] [ebp-60h]
  __m128 v78; // [esp+184h] [ebp-50h]
  __m128 v79; // [esp+194h] [ebp-40h]
  __m128 v80[3]; // [esp+1A4h] [ebp-30h] BYREF

  v53 = this;
  v6 = 0.0 == *(float *)(this + 60);
  v56 = *(_DWORD *)(a4 + 6332) / 0xCu;
  v7 = (__m128 *)(48 * a2 * v56 + *(_DWORD *)(a4 + 6076));
  v57 = *(_DWORD *)(a4 + 6324) / 0xCu;
  v55 = *(_DWORD *)(a4 + 6336) >> 2;
  v8 = (__m128 *)(48 * a2 * v57 + *(_DWORD *)(a4 + 6068));
  v9 = 0;
  v9.m128_f32[0] = *(float *)(this + 60);
  v10 = *(float *)(this + 64);
  v54 = (__m128 *)(16 * a2 * v55 + *(_DWORD *)(a4 + 6080));
  v73 = _mm_shuffle_ps(v9, v9, 0);
  v11 = 0;
  v11.m128_f32[0] = v10;
  v69 = _mm_shuffle_ps(v11, v11, 0);
  v48 = !v6 || 0.0 != *(float *)(this + 64);
  v12 = *(_DWORD *)(a4 + 6004);
  v13 = *(_DWORD *)(this + 56);
  v14 = 0;
  v14.m128_f32[0] = *(float *)(this + 68);
  v15 = v12 == 0;
  v68 = _mm_shuffle_ps(v14, v14, 0);
  v49 = 0;
  v16 = (__m128 **)(v12 + 4 * v13 + 5988);
  if ( v15 )
    v16 = (__m128 **)(a4 + 4 * v13 + 5988);
  v50 = v16;
  v52 = 0;
  if ( v13 == 1 || v13 == 3 || v13 == 2 )
  {
    if ( !*v16 )
    {
      v17 = sub_101F8C60(7952);
      *v50 = (__m128 *)v17;
      *(_DWORD *)(v17 + 7872) = 0;
      (*v50)[492].m128_f32[2] = -1.0;
      this = v53;
    }
    v52 = *v50;
    if ( *(float *)(a4 + 36) != (*v50)[492].m128_f32[2] )
    {
      sub_102003C0(
        (int)v52,
        (float *)a4,
        *(_DWORD *)(this + 56),
        *(_DWORD *)(this + 212),
        (float *)(this + 44),
        *(float *)(this + 72));
      v52[492].m128_f32[2] = *(float *)(a4 + 36);
      this = v53;
    }
  }
  v51 = *(float *)(this + 76) * *(float *)(this + 76);
  while ( 1 )
  {
    v18 = *v8;
    v19 = _mm_mul_ps(*v54, v68);
    v20 = _mm_sub_ps(*v8, *v7);
    v21 = _mm_sub_ps(v8[1], v7[1]);
    v22 = _mm_sub_ps(v8[2], v7[2]);
    v23 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v21, v21), _mm_mul_ps(v20, v20)), _mm_mul_ps(v22, v22));
    v74 = _mm_cmple_ps(v23, (__m128)xmmword_10394140);
    v24 = _mm_andnot_ps(v74, _mm_rsqrt_ps(v23));
    v61 = v20;
    v65 = _mm_mul_ps(v20, v24);
    v62 = v21;
    v66 = _mm_mul_ps(v21, v24);
    v80[0] = _mm_add_ps(_mm_mul_ps(v65, v19), v18);
    v25 = v8[1];
    v67 = _mm_mul_ps(v22, v24);
    v26 = _mm_add_ps(_mm_mul_ps(v67, v19), v8[2]);
    v63 = v22;
    v80[1] = _mm_add_ps(_mm_mul_ps(v66, v19), v25);
    v80[2] = v26;
    if ( a3 <= 1 )
      v27 = xmmword_103942E0[a6];
    else
      v27 = (__m128)xmmword_10394280;
    v28 = *(_DWORD *)(this + 56);
    v47 = *(_DWORD *)(this + 212);
    v64 = v27;
    sub_102007E0(v7, v80, v47, &v75, v28, v52, &v64, v51);
    v29 = _mm_andnot_ps(v74, _mm_cmplt_ps(v75, (__m128)xmmword_10394150));
    if ( _mm_movemask_ps(v29) )
    {
      v30 = _mm_add_ps(*v7, _mm_mul_ps(v75, v61));
      v31 = _mm_add_ps(_mm_mul_ps(v62, v75), v7[1]);
      v32 = _mm_add_ps(v7[2], _mm_mul_ps(v22, v75));
      v49 = 1;
      v60 = v31;
      if ( v48 )
      {
        v33 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v77, v65), _mm_mul_ps(v78, v66)), _mm_mul_ps(v79, v67));
        v34 = _mm_add_ps(v33, v33);
        v71 = _mm_mul_ps(_mm_sub_ps(v66, _mm_mul_ps(v78, v34)), v73);
        v35 = _mm_mul_ps(_mm_sub_ps(v65, _mm_mul_ps(v77, v34)), v73);
        v72 = _mm_mul_ps(_mm_sub_ps(v67, _mm_mul_ps(v79, v34)), v73);
        v58 = _mm_add_ps(_mm_mul_ps(v76, v35), v30);
        v36 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v77, v61), _mm_mul_ps(v78, v62)), _mm_mul_ps(v79, v63));
        v37 = _mm_sub_ps(v62, _mm_mul_ps(v78, v36));
        v38 = _mm_sub_ps(v63, _mm_mul_ps(v79, v36));
        v39 = _mm_mul_ps(_mm_sub_ps(v61, _mm_mul_ps(v36, v77)), v69);
        v40 = _mm_mul_ps(v37, v69);
        v41 = _mm_mul_ps(v38, v69);
        v70 = v35;
        v42 = _mm_add_ps(v39, v35);
        v43 = _mm_add_ps(v40, v71);
        v44 = _mm_add_ps(v41, v72);
        v59 = _mm_add_ps(_mm_mul_ps(v39, v76), v58);
        v45 = _mm_add_ps(_mm_mul_ps(v40, v76), _mm_add_ps(_mm_mul_ps(v71, v76), v60));
        v32 = _mm_add_ps(_mm_mul_ps(v41, v76), _mm_add_ps(_mm_mul_ps(v72, v76), v32));
        *v7 = _mm_or_ps(_mm_andnot_ps(v29, *v7), _mm_and_ps(_mm_sub_ps(v59, v42), v29));
        v30 = v59;
        v7[1] = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v45, v43), v29), _mm_andnot_ps(v29, v7[1]));
        v31 = v45;
        v7[2] = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v32, v44), v29), _mm_andnot_ps(v29, v7[2]));
      }
      *v8 = _mm_or_ps(_mm_andnot_ps(v29, *v8), _mm_and_ps(v30, v29));
      v8[1] = _mm_or_ps(_mm_and_ps(v31, v29), _mm_andnot_ps(v29, v8[1]));
      v8[2] = _mm_or_ps(_mm_and_ps(v32, v29), _mm_andnot_ps(v29, v8[2]));
    }
    v7 += 3 * v56;
    v54 += v55;
    v8 += 3 * v57;
    if ( !--a3 )
      break;
    this = v53;
  }
  return v49;
}
