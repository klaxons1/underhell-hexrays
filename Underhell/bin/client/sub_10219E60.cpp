int __thiscall sub_10219E60(__m128 *this, __m128 *a2, int a3, int a4)
{
  double v4; // st7
  unsigned __int32 v5; // edi
  __int32 v6; // eax
  unsigned __int32 v7; // ebx
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  int v10; // edi
  __int16 v11; // ax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm0
  int result; // eax
  bool v23; // zf
  __m128 *v24; // [esp+18h] [ebp-98h]
  unsigned __int32 v25; // [esp+1Ch] [ebp-94h]
  __m128 *v26; // [esp+20h] [ebp-90h]
  unsigned __int32 v27; // [esp+24h] [ebp-8Ch]
  __int32 v28; // [esp+28h] [ebp-88h]
  __m128 *v30; // [esp+30h] [ebp-80h]
  _DWORD *v31; // [esp+38h] [ebp-78h]
  unsigned __int32 v32; // [esp+3Ch] [ebp-74h]
  __m128 *v33; // [esp+44h] [ebp-6Ch]
  __int32 v34; // [esp+58h] [ebp-58h]
  __m128 v35; // [esp+60h] [ebp-50h]
  __m128 v36; // [esp+70h] [ebp-40h]
  __m128 v37; // [esp+80h] [ebp-30h]
  __m128 v38; // [esp+90h] [ebp-20h] BYREF
  __m128 v39; // [esp+A0h] [ebp-10h]

  v4 = this[3].m128_f32[1] * 4.0;
  v33 = (__m128 *)a2[381].m128_i32[1];
  v25 = (unsigned __int32)a2[405].m128_i32[0] >> 2;
  v24 = (__m128 *)a2[389].m128_i32[0];
  v27 = (unsigned __int32)a2[397].m128_i32[0] >> 2;
  v30 = (__m128 *)a2[379].m128_i32[2];
  v32 = (unsigned __int32)a2[398].m128_i32[0] >> 2;
  v5 = a2[397].m128_u32[1];
  v26 = (__m128 *)a2[381].m128_i32[0];
  v31 = (_DWORD *)a2[382].m128_i32[0];
  v6 = a2[2].m128_i32[0];
  v7 = (unsigned __int32)a2[395].m128_i32[2] >> 2;
  v34 = a2[414].m128_i32[1];
  v39 = a2[1];
  v28 = v6;
  v8 = 0;
  v8.m128_f32[0] = this[2].m128_f32[3];
  v37 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = this[3].m128_f32[0] - v8.m128_f32[0];
  v10 = 16 * (v5 >> 2);
  v36 = _mm_shuffle_ps(v9, v9, 0);
  do
  {
    v11 = v34 + a2[414].m128_i32[0];
    v35.m128_f32[0] = flt_103EE7C0[(v11 + (unsigned __int16)*v31) & 0xFFF];
    v35.m128_f32[1] = flt_103EE7C0[(v11 + (unsigned __int16)v31[1]) & 0xFFF];
    v35.m128_f32[2] = flt_103EE7C0[(v11 + (unsigned __int16)v31[2]) & 0xFFF];
    v35.m128_f32[3] = flt_103EE7C0[(v11 + (unsigned __int16)v31[3]) & 0xFFF];
    v38 = v35;
    v12 = _mm_add_ps(_mm_mul_ps(sub_101F41F0(&v38, (int)v4), v36), v37);
    v13 = _mm_sub_ps(v39, *v33);
    if ( this[5].m128_i8[0] )
    {
      v13 = _mm_mul_ps(_mm_rcp_ps(*v30), v13);
      v14 = _mm_sub_ps((__m128)xmmword_10394150, v12);
      v15 = _mm_sub_ps((__m128)xmmword_10394150, v14);
    }
    else
    {
      v14 = _mm_sub_ps(*v30, v12);
      v15 = _mm_sub_ps(*v30, v14);
    }
    v16 = _mm_cmplt_ps(v14, v13);
    if ( _mm_movemask_ps(v16) )
    {
      v17 = _mm_mul_ps(_mm_sub_ps(v13, v14), _mm_rcp_ps(v15));
      if ( this[5].m128_i8[1] )
      {
        v18 = _mm_min_ps((__m128)xmmword_10394150, _mm_max_ps((__m128)xmmword_10394140, v17));
        v19 = _mm_mul_ps(v18, v18);
        v20 = _mm_max_ps(
                (__m128)xmmword_10394140,
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_sub_ps(
                      _mm_mul_ps(v19, (__m128)xmmword_10394170),
                      _mm_mul_ps(_mm_mul_ps(v18, (__m128)xmmword_10394160), v19)),
                    _mm_sub_ps((__m128)xmmword_10394140, *v24)),
                  *v24));
      }
      else
      {
        v21 = _mm_min_ps((__m128)xmmword_10394150, _mm_max_ps((__m128)xmmword_10394140, v17));
        v20 = _mm_mul_ps(
                _mm_sub_ps(
                  (__m128)xmmword_10394150,
                  _mm_div_ps(
                    v21,
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394150, v21), this[4]), (__m128)xmmword_10394150))),
                *v24);
      }
      *v26 = _mm_or_ps(_mm_andnot_ps(v16, *v26), _mm_and_ps(v20, v16));
    }
    result = 16 * v27;
    v33 = (__m128 *)((char *)v33 + v10);
    v30 += v7;
    v24 += v25;
    v26 += v27;
    v23 = v28-- == 1;
    v31 += 4 * v32;
  }
  while ( !v23 );
  return result;
}
