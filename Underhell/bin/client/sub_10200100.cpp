__m128 *__thiscall sub_10200100(_OWORD *this, __m128 *a2, float *a3, float *a4, int a5, char a6)
{
  double v7; // st7
  __m128 *result; // eax
  double v9; // st6
  __m128 v10; // xmm0
  double v11; // st5
  __m128 *v12; // ecx
  double v13; // st7
  float v14; // xmm1_4
  double v15; // st7
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  float v18; // xmm1_4
  __m128 v19; // xmm0
  float v20; // xmm1_4
  int v21; // ecx
  __m128 v22; // xmm0
  float v23; // xmm1_4
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  int v26; // ecx
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  float v29; // xmm1_4
  __m128 v30; // xmm0
  float v31; // xmm1_4
  __m128 v32; // xmm0
  float v33; // xmm1_4
  __m128 v34; // xmm0
  int v35; // edx
  __m128 v36; // xmm0
  __m128 *v37; // ecx
  __m128 v38; // xmm0
  __m128 v39; // xmm0
  float v40; // xmm1_4
  __m128 v41; // xmm0
  float v42; // xmm1_4
  int v43; // ecx
  __m128 *v44; // ecx
  __m128 v45; // xmm0
  float v46; // xmm1_4
  __m128 v47; // xmm0
  float v48; // [esp+18h] [ebp-50h] BYREF
  float v49; // [esp+1Ch] [ebp-4Ch]
  float v50; // [esp+20h] [ebp-48h]
  float v51; // [esp+24h] [ebp-44h]
  float v52; // [esp+28h] [ebp-40h]
  float v53; // [esp+2Ch] [ebp-3Ch]
  _DWORD v54[11]; // [esp+30h] [ebp-38h] BYREF
  float v55; // [esp+5Ch] [ebp-Ch]

  v48 = *a3 + *a4;
  v49 = a4[1] + a3[1];
  v50 = a4[2] + a3[2];
  (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, int, _DWORD *))(**((_DWORD **)off_103EE614 + 60) + 24))(
    *((_DWORD *)off_103EE614 + 60),
    a3,
    &v48,
    33570827,
    0,
    a5,
    v54);
  v7 = v55;
  result = a2;
  if ( v55 >= 1.0 )
  {
    if ( a6 )
    {
      this[3 * (int)a2 + 369] = xmmword_10394140;
      v35 = 3 * (_DWORD)a2;
      this[v35 + 370] = xmmword_10394140;
      this[v35 + 371] = xmmword_10394140;
      v36 = 0;
      v36.m128_f32[0] = *a3;
      this[v35] = _mm_shuffle_ps(v36, v36, 0);
      v37 = (__m128 *)&this[3 * (int)a2];
      v38 = 0;
      v38.m128_f32[0] = a3[1];
      v37[1] = _mm_shuffle_ps(v38, v38, 0);
      v39 = 0;
      v39.m128_f32[0] = a3[2];
      v40 = v48;
      v37[2] = _mm_shuffle_ps(v39, v39, 0);
      v41 = 0;
      v41.m128_f32[0] = v40;
      v42 = v49;
      v43 = 3 * (_DWORD)a2 + 123;
      this[v43] = _mm_shuffle_ps(v41, v41, 0);
      v44 = (__m128 *)&this[v43];
      v45 = 0;
      v45.m128_f32[0] = v42;
      v46 = v50;
      v44[1] = _mm_shuffle_ps(v45, v45, 0);
      v47 = 0;
      v47.m128_f32[0] = v46;
      v44[2] = _mm_shuffle_ps(v47, v47, 0);
      *((_BYTE *)this + (_DWORD)a2 + 7896) = 1;
    }
    else
    {
      *((_BYTE *)this + (_DWORD)a2 + 7896) = 0;
    }
  }
  else
  {
    *((_BYTE *)this + (_DWORD)a2 + 7896) = 1;
    v9 = *a4 * v7;
    v10 = 0;
    v11 = a4[1] * v7;
    v12 = (__m128 *)&this[3 * (int)a2 + 246];
    v13 = v7 * a4[2];
    v51 = v9 + *a3;
    v10.m128_f32[0] = v51;
    v52 = v11 + a3[1];
    v14 = v52;
    v15 = v13 + a3[2];
    *v12 = _mm_shuffle_ps(v10, v10, 0);
    v16 = 0;
    v16.m128_f32[0] = v14;
    v53 = v15;
    v12[1] = _mm_shuffle_ps(v16, v16, 0);
    v17 = 0;
    v17.m128_f32[0] = v53;
    v18 = *(float *)&v54[6];
    v12[2] = _mm_shuffle_ps(v17, v17, 0);
    v19 = 0;
    v19.m128_f32[0] = v18;
    v20 = *(float *)&v54[7];
    v21 = 3 * (_DWORD)a2 + 369;
    this[v21] = _mm_shuffle_ps(v19, v19, 0);
    v22 = 0;
    v22.m128_f32[0] = v20;
    v23 = *(float *)&v54[8];
    this[v21 + 1] = _mm_shuffle_ps(v22, v22, 0);
    v24 = 0;
    v24.m128_f32[0] = v23;
    this[v21 + 2] = _mm_shuffle_ps(v24, v24, 0);
    v25 = 0;
    v25.m128_f32[0] = *a3;
    v26 = 3 * (_DWORD)a2;
    this[v26] = _mm_shuffle_ps(v25, v25, 0);
    v27 = 0;
    v27.m128_f32[0] = a3[1];
    this[v26 + 1] = _mm_shuffle_ps(v27, v27, 0);
    v28 = 0;
    v28.m128_f32[0] = a3[2];
    v29 = v48;
    this[3 * (int)a2 + 2] = _mm_shuffle_ps(v28, v28, 0);
    v30 = 0;
    v30.m128_f32[0] = v29;
    v31 = v49;
    result = (__m128 *)&this[3 * (int)a2 + 123];
    *result = _mm_shuffle_ps(v30, v30, 0);
    v32 = 0;
    v32.m128_f32[0] = v31;
    v33 = v50;
    result[1] = _mm_shuffle_ps(v32, v32, 0);
    v34 = 0;
    v34.m128_f32[0] = v33;
    result[2] = _mm_shuffle_ps(v34, v34, 0);
  }
  return result;
}
