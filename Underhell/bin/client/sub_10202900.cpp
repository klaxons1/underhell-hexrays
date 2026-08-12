int __thiscall sub_10202900(int this, __m128 *a2, int a3, int a4, float a5, int a6)
{
  float *v7; // eax
  __m128 v8; // xmm0
  __m128 v9; // xmm3
  __m128 v10; // xmm1
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  int v21; // edi
  __m128 *v22; // ecx
  int result; // eax
  unsigned int v25; // esi
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  __m128 v28; // xmm7
  __m128 v29; // xmm2
  __m128 v30; // xmm5
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  __m128 v33; // xmm3
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  __m128 v36; // xmm4
  __m128 v37; // xmm1
  __m128 v38; // xmm0
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  __m128 v42; // xmm6
  __m128 v43; // xmm2
  __m128 v44; // xmm4
  __m128 v45; // xmm1
  __m128 v46; // xmm0
  __m128 v47; // xmm5
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm0
  float v51; // [esp+0h] [ebp-118h]
  int v52[3]; // [esp+1Ch] [ebp-FCh] BYREF
  __m128 v53; // [esp+28h] [ebp-F0h] BYREF
  __m128 v54; // [esp+38h] [ebp-E0h]
  __m128 v55; // [esp+48h] [ebp-D0h]
  __m128 v56; // [esp+58h] [ebp-C0h]
  __m128 v57; // [esp+68h] [ebp-B0h]
  __m128 v58; // [esp+78h] [ebp-A0h]
  __m128 v59; // [esp+88h] [ebp-90h]
  __m128 v60; // [esp+98h] [ebp-80h]
  __m128 v61; // [esp+A8h] [ebp-70h]
  __m128 v62; // [esp+B8h] [ebp-60h]
  __m128 v63; // [esp+C8h] [ebp-50h]
  __m128 v64; // [esp+D8h] [ebp-40h]
  __m128 v65; // [esp+E8h] [ebp-30h]
  __m128 v66; // [esp+108h] [ebp-10h]

  v7 = sub_101FE8B0((char *)a3, v53.m128_f32, (float *)(this + 48), *(_BYTE *)(this + 60), 0);
  v8 = 0;
  v8.m128_f32[0] = *v7;
  v9 = _mm_shuffle_ps(v8, v8, 0);
  v10 = 0;
  v10.m128_f32[0] = v7[1];
  v11 = _mm_shuffle_ps(v10, v10, 0);
  v12 = 0;
  v12.m128_f32[0] = v7[2];
  v13 = _mm_shuffle_ps(v12, v12, 0);
  v14 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v11, v11), _mm_mul_ps(v9, v9)), _mm_mul_ps(v13, v13));
  v15 = _mm_rsqrt_ps(v14);
  v16 = _mm_mul_ps(
          _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v15, v15), v14)), v15),
          (__m128)xmmword_10394130);
  v51 = *(float *)(a3 + 36);
  v54 = _mm_mul_ps(v16, v9);
  v55 = _mm_mul_ps(v11, v16);
  v56 = _mm_mul_ps(v13, v16);
  sub_101F8ED0(a3, 0, v51, (float *)v52);
  v17 = 0;
  v17.m128_f32[0] = *(float *)v52;
  v58 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  v18.m128_f32[0] = *(float *)&v52[1];
  v59 = _mm_shuffle_ps(v18, v18, 0);
  v19 = 0;
  v19.m128_f32[0] = *(float *)&v52[2];
  v60 = _mm_shuffle_ps(v19, v19, 0);
  v20 = 0;
  v20.m128_f32[0] = *(float *)(this + 44) * a5;
  v57 = _mm_shuffle_ps(v20, v20, 0);
  v21 = a4;
  v22 = *(__m128 **)(a3 + 6068);
  result = -1431655765 * *(_DWORD *)(a3 + 6324);
  if ( a4 > 0 )
  {
    v25 = 48 * (*(_DWORD *)(a3 + 6324) / 0xCu);
    do
    {
      v26 = _mm_sub_ps(v22[1], v59);
      v27 = _mm_sub_ps(v22[2], v60);
      v28 = _mm_sub_ps(*v22, v58);
      v29 = _mm_mul_ps(v27, v27);
      v30 = _mm_add_ps(_mm_mul_ps(v28, v28), _mm_mul_ps(v26, v26));
      v31 = _mm_add_ps(v29, v30);
      v64 = _mm_rsqrt_ps(v31);
      v53 = _mm_mul_ps(_mm_mul_ps(v64, v64), v31);
      v32 = _mm_mul_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, v53), v64), (__m128)xmmword_10394130);
      v33 = _mm_mul_ps(v26, v32);
      v66 = _mm_mul_ps(v27, v32);
      v34 = _mm_mul_ps(v32, v28);
      v35 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v33, v55), _mm_mul_ps(v34, v54)), _mm_mul_ps(v66, v56));
      v61 = _mm_mul_ps(v34, v35);
      v62 = _mm_mul_ps(v33, v35);
      v63 = _mm_mul_ps(v66, v35);
      v36 = _mm_sub_ps(v33, v62);
      v65 = _mm_sub_ps(v34, v61);
      v37 = _mm_sub_ps(v66, v63);
      v38 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v65, v65), _mm_mul_ps(v36, v36)), _mm_mul_ps(v37, v37));
      v39 = _mm_cmplt_ps((__m128)xmmword_10394200, _mm_add_ps(v29, v30));
      v40 = _mm_rsqrt_ps(v38);
      v41 = _mm_and_ps(v39, _mm_cmplt_ps((__m128)xmmword_10394200, v38));
      v42 = _mm_mul_ps(
              _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394170, _mm_mul_ps(_mm_mul_ps(v40, v40), v38)), v40),
              (__m128)xmmword_10394130);
      v43 = _mm_mul_ps(v42, v65);
      v44 = _mm_mul_ps(v36, v42);
      v45 = _mm_mul_ps(v37, v42);
      v46 = _mm_sub_ps(_mm_mul_ps(v44, v56), _mm_mul_ps(v45, v55));
      v47 = _mm_sub_ps(_mm_mul_ps(v45, v54), _mm_mul_ps(v56, v43));
      result = (int)a2;
      v48 = _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(v55, v43), _mm_mul_ps(v44, v54)), v57);
      v49 = _mm_add_ps(*a2, _mm_and_ps(_mm_mul_ps(v46, v57), v41));
      a2[1] = _mm_add_ps(a2[1], _mm_and_ps(_mm_mul_ps(v47, v57), v41));
      v50 = a2[2];
      a2 += 3;
      v22 = (__m128 *)((char *)v22 + v25);
      --v21;
      *(__m128 *)result = v49;
      *(__m128 *)(result + 32) = _mm_add_ps(v50, _mm_and_ps(v48, v41));
    }
    while ( v21 );
  }
  return result;
}
