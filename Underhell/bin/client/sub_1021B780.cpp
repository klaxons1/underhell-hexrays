void __thiscall sub_1021B780(float *this, int a2, float a3, int a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  long double v7; // st4
  long double v8; // st7
  long double v9; // rt0
  double v10; // st4
  long double v11; // st7
  long double v12; // st6
  double v13; // st7
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  int v19; // edi
  int v20; // ebx
  int v21; // eax
  __m128 *v22; // edx
  int v23; // esi
  int v24; // ecx
  int v25; // edi
  int v26; // ebx
  unsigned int v27; // esi
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  float v35; // [esp+18h] [ebp-78h]
  __m128 *v37; // [esp+20h] [ebp-70h]
  float v38; // [esp+28h] [ebp-68h]
  float v39; // [esp+28h] [ebp-68h]
  __m128 *v40; // [esp+28h] [ebp-68h]
  __m128 v41; // [esp+30h] [ebp-60h]
  __m128 v42; // [esp+40h] [ebp-50h]
  __m128 v43; // [esp+50h] [ebp-40h]
  __m128 v44; // [esp+60h] [ebp-30h]
  __m128 v45; // [esp+70h] [ebp-20h]
  __m128 v46; // [esp+80h] [ebp-10h]

  v4 = this[13] * a3;
  v38 = v4;
  v5 = 0.0;
  if ( 0.0 != v4 )
  {
    v6 = *(float *)(a2 + 44);
    v7 = fabs((v4 + v4) * 3.141592653589793) * v6;
    v35 = v7;
    if ( 0.0 == this[14] )
    {
      v8 = fmod(v7, 6.283185482025146);
      v35 = v8;
      v7 = v8;
      v4 = v38;
      v5 = 0.0;
      v6 = *(float *)(a2 + 44);
    }
    v9 = v7;
    v10 = v4;
    v11 = v9;
    if ( v10 >= v5 )
    {
      v13 = v6;
    }
    else
    {
      v12 = v11;
      v13 = v6;
      v35 = -v12;
    }
    v14 = 0;
    v14.m128_f32[0] = v35;
    v41 = _mm_shuffle_ps(v14, v14, 0);
    v15 = 0;
    v15.m128_f32[0] = 6.2831855;
    v39 = v13 * fabs((this[15] + this[15]) * 3.141592653589793);
    v42 = _mm_shuffle_ps(v15, v15, 0);
    v16 = 0;
    v16.m128_f32[0] = -6.2831855;
    v46 = _mm_shuffle_ps(v16, v16, 0);
    v17 = 0;
    v17.m128_f32[0] = v39;
    v43 = _mm_shuffle_ps(v17, v17, 0);
    v45 = *(__m128 *)(a2 + 16);
    v40 = *(__m128 **)(a2 + 6072);
    v18 = 0;
    v18.m128_f32[0] = this[14];
    v37 = *(__m128 **)(a2 + 6100);
    v44 = _mm_shuffle_ps(v18, v18, 0);
    v19 = *(_DWORD *)(a2 + 6356) >> 2;
    v20 = *(_DWORD *)(a2 + 6328) >> 2;
    v21 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 120))(this);
    v22 = *(__m128 **)(a2 + 4 * v21 + 6068);
    v23 = *(_DWORD *)(a2 + 40);
    if ( v23 > 0 )
    {
      v24 = 16 * (*(_DWORD *)(a2 + 4 * v21 + 6324) >> 2);
      v25 = 16 * v19;
      v26 = 16 * v20;
      v27 = ((unsigned int)(v23 - 1) >> 2) + 1;
      do
      {
        v28 = (__m128)xmmword_10394140;
        if ( 0.0 != this[14] )
          v28 = _mm_div_ps((__m128)xmmword_10394150, _mm_mul_ps(*v40, v44));
        v40 = (__m128 *)((char *)v40 + v26);
        v29 = _mm_mul_ps(
                _mm_max_ps(
                  (__m128)xmmword_10394140,
                  _mm_sub_ps((__m128)xmmword_10394150, _mm_mul_ps(_mm_sub_ps(v45, *v37), v28))),
                v41);
        v30 = _mm_cmple_ps(v29, v43);
        v31 = _mm_add_ps(_mm_or_ps(_mm_andnot_ps(v30, v29), _mm_and_ps(v30, v43)), *v22);
        v32 = _mm_cmple_ps(v42, v31);
        v33 = _mm_cmple_ps(v31, v46);
        v34 = _mm_or_ps(_mm_and_ps(_mm_sub_ps(v31, v42), v32), _mm_andnot_ps(v32, v31));
        *v22 = _mm_or_ps(_mm_and_ps(_mm_add_ps(v34, v42), v33), _mm_andnot_ps(v33, v34));
        v22 = (__m128 *)((char *)v22 + v24);
        --v27;
        v37 = (__m128 *)((char *)v37 + v25);
      }
      while ( v27 );
    }
  }
}
