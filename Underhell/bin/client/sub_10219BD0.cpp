int __thiscall sub_10219BD0(int this, __m128 *a2, int a3, int a4)
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
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  int result; // eax
  bool v18; // zf
  __m128 *v19; // [esp+18h] [ebp-98h]
  unsigned __int32 v20; // [esp+1Ch] [ebp-94h]
  __m128 *v21; // [esp+20h] [ebp-90h]
  unsigned __int32 v22; // [esp+24h] [ebp-8Ch]
  __int32 v23; // [esp+28h] [ebp-88h]
  _DWORD *v25; // [esp+30h] [ebp-80h]
  unsigned __int32 v26; // [esp+34h] [ebp-7Ch]
  __m128 *v27; // [esp+38h] [ebp-78h]
  __m128 *v28; // [esp+44h] [ebp-6Ch]
  __int32 v29; // [esp+58h] [ebp-58h]
  __m128 v30; // [esp+60h] [ebp-50h]
  __m128 v31; // [esp+70h] [ebp-40h]
  __m128 v32; // [esp+80h] [ebp-30h]
  __m128 v33; // [esp+90h] [ebp-20h] BYREF
  __m128 v34; // [esp+A0h] [ebp-10h]

  v4 = *(float *)(this + 52) * 4.0;
  v27 = (__m128 *)a2[381].m128_i32[1];
  v20 = (unsigned __int32)a2[405].m128_i32[0] >> 2;
  v19 = (__m128 *)a2[389].m128_i32[0];
  v22 = (unsigned __int32)a2[397].m128_i32[0] >> 2;
  v28 = (__m128 *)a2[379].m128_i32[2];
  v26 = (unsigned __int32)a2[398].m128_i32[0] >> 2;
  v5 = a2[397].m128_u32[1];
  v21 = (__m128 *)a2[381].m128_i32[0];
  v25 = (_DWORD *)a2[382].m128_i32[0];
  v6 = a2[2].m128_i32[0];
  v7 = (unsigned __int32)a2[395].m128_i32[2] >> 2;
  v29 = a2[414].m128_i32[1];
  v34 = a2[1];
  v23 = v6;
  v8 = 0;
  v8.m128_f32[0] = *(float *)(this + 44);
  v32 = _mm_shuffle_ps(v8, v8, 0);
  v9 = 0;
  v9.m128_f32[0] = *(float *)(this + 48) - v8.m128_f32[0];
  v10 = 16 * (v5 >> 2);
  v31 = _mm_shuffle_ps(v9, v9, 0);
  do
  {
    v11 = v29 + a2[414].m128_i32[0];
    v30.m128_f32[0] = flt_103EE7C0[(v11 + (unsigned __int16)*v25) & 0xFFF];
    v30.m128_f32[1] = flt_103EE7C0[(v11 + (unsigned __int16)v25[1]) & 0xFFF];
    v30.m128_f32[2] = flt_103EE7C0[(v11 + (unsigned __int16)v25[2]) & 0xFFF];
    v30.m128_f32[3] = flt_103EE7C0[(v11 + (unsigned __int16)v25[3]) & 0xFFF];
    v33 = v30;
    v12 = _mm_add_ps(_mm_mul_ps(sub_101F41F0(&v33, (int)v4), v31), v32);
    v13 = _mm_sub_ps(v34, *v27);
    if ( *(_BYTE *)(this + 56) )
      v13 = _mm_max_ps(
              (__m128)xmmword_10394140,
              _mm_min_ps((__m128)xmmword_10394150, _mm_mul_ps(_mm_rcp_ps(*v28), v13)));
    v14 = _mm_cmplt_ps(v13, v12);
    if ( _mm_movemask_ps(v14) )
    {
      v15 = _mm_min_ps(
              (__m128)xmmword_10394150,
              _mm_max_ps(
                (__m128)xmmword_10394140,
                _mm_mul_ps(_mm_sub_ps(v13, (__m128)xmmword_10394140), _mm_rcp_ps(v12))));
      v16 = _mm_mul_ps(v15, v15);
      *v21 = _mm_or_ps(
               _mm_and_ps(
                 _mm_add_ps(
                   _mm_mul_ps(
                     _mm_sub_ps(
                       _mm_mul_ps(v16, (__m128)xmmword_10394170),
                       _mm_mul_ps(_mm_mul_ps(v15, (__m128)xmmword_10394160), v16)),
                     *v19),
                   (__m128)xmmword_10394140),
                 v14),
               _mm_andnot_ps(v14, *v21));
    }
    result = 16 * v22;
    v27 = (__m128 *)((char *)v27 + v10);
    v28 += v7;
    v19 += v20;
    v21 += v22;
    v18 = v23-- == 1;
    v25 += 4 * v26;
  }
  while ( !v18 );
  return result;
}
