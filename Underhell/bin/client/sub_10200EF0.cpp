int __usercall sub_10200EF0@<eax>(int result@<eax>, __m128 *a2@<edx>, __m128 *a3, int a4, int a5, __m128 *a6)
{
  __m128 *v6; // ecx
  __int32 v7; // edi
  __m128 *v8; // ecx
  __m128 v9; // xmm6
  __m128 v10; // xmm2
  __m128 v11; // xmm4
  __m128 v12; // xmm6
  __m128 v13; // xmm7
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm3
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  float *v26; // edi
  int v27; // ebx
  char *v28; // ecx
  float *m128_f32; // esi
  double v30; // st7
  bool v31; // zf
  double v32; // st7
  char *i; // [esp+4h] [ebp-70h]
  int v34; // [esp+1Ch] [ebp-58h]
  int v35; // [esp+20h] [ebp-54h]
  float v36[3]; // [esp+24h] [ebp-50h] BYREF
  float v37[3]; // [esp+30h] [ebp-44h] BYREF
  float v38[11]; // [esp+3Ch] [ebp-38h] BYREF
  float v39; // [esp+68h] [ebp-Ch]
  char v40; // [esp+73h] [ebp-1h]

  *(_OWORD *)result = xmmword_10394140;
  v6 = (__m128 *)(result + 16);
  *(_OWORD *)(result + 16) = xmmword_10394140;
  *(_OWORD *)(result + 32) = xmmword_10394140;
  *(_OWORD *)(result + 48) = xmmword_10394140;
  *(_OWORD *)(result + 64) = xmmword_10394140;
  if ( a6 )
  {
    v7 = 0;
    *(_OWORD *)result = xmmword_10394160;
    if ( a6[492].m128_i32[0] <= 0 )
    {
      v17 = (__m128)xmmword_10394140;
    }
    else
    {
      v8 = a6 + 248;
      do
      {
        v9 = v8[-2];
        v10 = _mm_sub_ps(*a2, v9);
        v11 = _mm_sub_ps(*a3, v9);
        v12 = v8[122];
        v13 = v8[121];
        v14 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a2[1], v8[-1]), v12), _mm_mul_ps(v10, v13));
        v15 = v8[123];
        v16 = _mm_add_ps(v14, _mm_mul_ps(_mm_sub_ps(a2[2], *v8), v15));
        v17 = (__m128)xmmword_10394140;
        v18 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a3[1], v8[-1]), v12), _mm_mul_ps(v11, v13)),
                _mm_mul_ps(_mm_sub_ps(a3[2], *v8), v15));
        v19 = _mm_and_ps(_mm_cmplt_ps(v18, (__m128)xmmword_10394140), _mm_cmple_ps((__m128)xmmword_10394140, v16));
        if ( _mm_movemask_ps(v19) )
        {
          v20 = _mm_div_ps(v16, _mm_sub_ps(v16, v18));
          v21 = _mm_and_ps(_mm_cmplt_ps(v20, *(__m128 *)result), v19);
          if ( _mm_movemask_ps(v21) )
          {
            v22 = *(__m128 *)(result + 32);
            *(__m128 *)result = _mm_or_ps(_mm_andnot_ps(v21, *(__m128 *)result), _mm_and_ps(v20, v21));
            v23 = _mm_andnot_ps(v21, v22);
            v24 = *(__m128 *)(result + 48);
            *(__m128 *)(result + 32) = _mm_or_ps(_mm_and_ps(v8[121], v21), v23);
            v25 = *(__m128 *)(result + 64);
            *(__m128 *)(result + 48) = _mm_or_ps(_mm_and_ps(v8[122], v21), _mm_andnot_ps(v21, v24));
            *(__m128 *)(result + 64) = _mm_or_ps(_mm_and_ps(v8[123], v21), _mm_andnot_ps(v21, v25));
            v17 = (__m128)xmmword_10394140;
          }
        }
        ++v7;
        v8 += 3;
      }
      while ( v7 < a6[492].m128_i32[0] );
      v6 = (__m128 *)(result + 16);
    }
    *v6 = _mm_max_ps(v17, _mm_sub_ps((__m128)xmmword_10394150, *(__m128 *)result));
  }
  else
  {
    v26 = (float *)(result + 16);
    v34 = (char *)a3 - (char *)a2;
    v35 = result - (_DWORD)a2;
    v27 = 0;
    v28 = (char *)a3 - result;
    m128_f32 = a2[2].m128_f32;
    for ( i = (char *)a3 - result; ; v28 = i )
    {
      v37[0] = *(m128_f32 - 8);
      v37[1] = *(m128_f32 - 4);
      v37[2] = *m128_f32;
      v36[0] = a3->m128_f32[v27];
      v36[1] = *(float *)((char *)v26 + (_DWORD)v28);
      v36[2] = *(float *)((char *)m128_f32 + v34);
      result = (*(int (__thiscall **)(_DWORD, float *, float *, int, _DWORD, int, float *))(**((_DWORD **)off_103EE614
                                                                                             + 60)
                                                                                          + 24))(
                 *((_DWORD *)off_103EE614 + 60),
                 v37,
                 v36,
                 a5,
                 0,
                 a4,
                 v38);
      v30 = v39;
      v31 = v40 == 0;
      *(v26 - 4) = v39;
      v32 = v31 ? 1.0 - v30 : 0.0;
      *v26 = v32;
      ++v27;
      *(float *)((char *)m128_f32 + v35) = v38[6];
      ++v26;
      ++m128_f32;
      v26[7] = v38[7];
      v26[11] = v38[8];
      if ( v27 >= 4 )
        break;
    }
  }
  return result;
}
