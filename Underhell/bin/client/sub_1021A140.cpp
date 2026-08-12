int __thiscall sub_1021A140(int this, __m128 *a2, float a3, int a4)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 *v6; // edx
  __m128 v7; // xmm0
  unsigned __int32 v8; // eax
  float v10; // xmm3_4
  __m128 *v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  _DWORD *v15; // ebx
  __m128 v16; // xmm1
  unsigned __int32 v17; // edx
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  unsigned __int32 v20; // edx
  unsigned __int32 v21; // ecx
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __m128 *v24; // edx
  __m128 v25; // xmm0
  __int32 v26; // edx
  __m128 v27; // xmm1
  __int32 v28; // edx
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  bool v32; // zf
  __m128 v33; // xmm1
  __m128 v34; // xmm3
  __m128 v35; // xmm1
  __int16 v36; // ax
  __m128 v37; // xmm4
  __m128 v38; // xmm3
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  int result; // eax
  __int16 v48; // [esp+0h] [ebp-174h]
  __int32 v49; // [esp+4h] [ebp-170h]
  __m128 *v50; // [esp+8h] [ebp-16Ch]
  unsigned __int32 v51; // [esp+Ch] [ebp-168h]
  __m128 *v52; // [esp+10h] [ebp-164h]
  unsigned __int32 v53; // [esp+1Ch] [ebp-158h]
  __m128 *v54; // [esp+20h] [ebp-154h]
  int v55; // [esp+28h] [ebp-14Ch]
  int v56; // [esp+30h] [ebp-144h]
  __m128 v57; // [esp+34h] [ebp-140h]
  __m128 v58; // [esp+44h] [ebp-130h]
  __m128 v59; // [esp+54h] [ebp-120h] BYREF
  __m128 v60; // [esp+64h] [ebp-110h]
  __m128 v61; // [esp+74h] [ebp-100h] BYREF
  __m128 v62; // [esp+84h] [ebp-F0h]
  __m128 v63; // [esp+94h] [ebp-E0h]
  __m128 v64; // [esp+A4h] [ebp-D0h]
  __m128 v65; // [esp+B4h] [ebp-C0h]
  __m128 v66; // [esp+C4h] [ebp-B0h]
  __m128 v67; // [esp+D4h] [ebp-A0h]
  __m128 v68; // [esp+E4h] [ebp-90h]
  __m128 v69; // [esp+F4h] [ebp-80h]
  __m128 v70; // [esp+104h] [ebp-70h]
  __m128 v71; // [esp+114h] [ebp-60h]
  __m128 v72; // [esp+124h] [ebp-50h]
  __m128 v73; // [esp+134h] [ebp-40h]
  __m128 v74; // [esp+144h] [ebp-30h]
  __m128 v75; // [esp+154h] [ebp-20h]
  __m128 v76; // [esp+164h] [ebp-10h]

  v4 = 0;
  v4.m128_f32[0] = a2[2].m128_f32[3] * a3;
  v5 = a2[1];
  v6 = (__m128 *)a2[379].m128_i32[2];
  v76 = _mm_shuffle_ps(v4, v4, 0);
  v7 = 0;
  v8 = a2[397].m128_u32[1];
  v7.m128_f32[0] = *(float *)(this + 84);
  v10 = *(float *)(this + 88);
  v70 = _mm_shuffle_ps(v7, v7, 0);
  v11 = (__m128 *)a2[381].m128_i32[1];
  v12 = 0;
  v12.m128_f32[0] = v10;
  v13 = _mm_shuffle_ps(v12, v12, 0);
  v74 = _mm_add_ps(_mm_mul_ps(v70, v5), v13);
  v14 = 0;
  v72 = v13;
  v14.m128_f32[0] = *(float *)(this + 68);
  v71 = _mm_shuffle_ps(v14, v14, 0);
  v15 = (_DWORD *)a2[382].m128_i32[0];
  v16 = 0;
  v16.m128_f32[0] = *(float *)(this + 72) - v14.m128_f32[0];
  v54 = v6;
  v17 = a2[398].m128_u32[0];
  v18 = v16;
  v16.m128_i32[0] = *(_DWORD *)(this + 76);
  v69 = _mm_shuffle_ps(v18, v18, 0);
  v19 = 0;
  v19.m128_f32[0] = v16.m128_f32[0];
  v75 = _mm_shuffle_ps(v19, v19, 0);
  v19.m128_f32[0] = *(float *)(this + 80) - v16.m128_f32[0];
  v53 = v17 >> 2;
  v20 = a2[395].m128_u32[*(_DWORD *)(this + 60) + 1];
  v52 = v11;
  v21 = a2[395].m128_u32[2];
  v22 = 0;
  v22.m128_f32[0] = v19.m128_f32[0];
  v23 = v22;
  v22.m128_i32[0] = *(_DWORD *)(this + 52);
  v67 = _mm_shuffle_ps(v23, v23, 0);
  v51 = v20 >> 2;
  v24 = (__m128 *)a2[379].m128_i32[*(_DWORD *)(this + 60) + 1];
  v25 = 0;
  v25.m128_f32[0] = v22.m128_f32[0];
  v73 = _mm_shuffle_ps(v25, v25, 0);
  v50 = v24;
  v26 = a2[414].m128_i32[1];
  v25.m128_f32[0] = *(float *)(this + 56) - v22.m128_f32[0];
  v27 = 0;
  v63 = v5;
  v48 = v26;
  v27.m128_f32[0] = v25.m128_f32[0];
  v28 = a2[2].m128_i32[0];
  v29 = v27;
  v27.m128_i32[0] = *(_DWORD *)(this + 44);
  v64 = _mm_shuffle_ps(v29, v29, 0);
  v30 = 0;
  v30.m128_f32[0] = v27.m128_f32[0];
  v55 = 16 * (v8 >> 2);
  v66 = _mm_shuffle_ps(v30, v30, 0);
  v30.m128_f32[0] = *(float *)(this + 48) - v27.m128_f32[0];
  v31 = 0;
  v31.m128_f32[0] = v30.m128_f32[0];
  v65 = _mm_shuffle_ps(v31, v31, 0);
  v49 = v28;
  v56 = 16 * (v21 >> 2);
  do
  {
    v32 = *(_BYTE *)(this + 65) == 0;
    v33 = *v54;
    v68 = v33;
    v34 = _mm_cmplt_ps((__m128)xmmword_10394140, v33);
    if ( v32 )
    {
      v35 = _mm_sub_ps(v5, *v52);
      v62 = v35;
    }
    else
    {
      v62 = _mm_sub_ps(v5, *v52);
      v35 = _mm_mul_ps(_mm_rcp_ps(v33), v62);
    }
    v36 = v48 + a2[414].m128_i32[0];
    v57.m128_f32[0] = flt_103EE7C0[(v36 + (unsigned __int16)*v15 + 11) & 0xFFF];
    v57.m128_f32[1] = flt_103EE7C0[(v36 + (unsigned __int16)v15[1] + 11) & 0xFFF];
    v57.m128_f32[2] = flt_103EE7C0[(v36 + (unsigned __int16)v15[2] + 11) & 0xFFF];
    v57.m128_f32[3] = flt_103EE7C0[(v36 + (unsigned __int16)v15[3] + 11) & 0xFFF];
    v58.m128_f32[0] = flt_103EE7C0[(v36 + (unsigned __int16)*v15 + 12) & 0xFFF];
    v58.m128_f32[1] = flt_103EE7C0[(v36 + (unsigned __int16)v15[1] + 12) & 0xFFF];
    v58.m128_f32[2] = flt_103EE7C0[(v36 + (unsigned __int16)v15[2] + 12) & 0xFFF];
    v58.m128_f32[3] = flt_103EE7C0[(v36 + (unsigned __int16)v15[3] + 12) & 0xFFF];
    v60 = _mm_and_ps(
            _mm_and_ps(_mm_cmple_ps(_mm_add_ps(_mm_mul_ps(v57, v69), v71), v35), v34),
            _mm_cmplt_ps(v35, _mm_add_ps(_mm_mul_ps(v58, v67), v75)));
    if ( _mm_movemask_ps(v60) )
    {
      sub_10213190(a2, &v59, v15, v48);
      v59 = _mm_add_ps(_mm_mul_ps(v59, v64), v73);
      sub_10213190(a2, &v61, v15, v48 + 1);
      v32 = *(_BYTE *)(this + 64) == 0;
      v37 = _mm_add_ps(_mm_mul_ps(v61, v65), v66);
      v61 = v37;
      if ( v32 )
        v38 = _mm_mul_ps(v59, v74);
      else
        v38 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_mul_ps(_mm_rcp_ps(v68), v62), v59), v70), v72);
      v39 = _mm_and_ps((__m128)xmmword_10394240, v38);
      v40 = _mm_sub_ps(
              _mm_and_ps(_mm_add_ps(v39, (__m128)xmmword_103941D0), (__m128)xmmword_10394260),
              (__m128)xmmword_103941D0);
      v41 = _mm_cmplt_ps(v39, v40);
      v42 = _mm_sub_ps(
              v39,
              _mm_or_ps(_mm_and_ps(_mm_sub_ps(v40, (__m128)xmmword_10394160), v41), _mm_andnot_ps(v41, v40)));
      v43 = _mm_cmple_ps((__m128)xmmword_10394150, v42);
      v44 = _mm_sub_ps(v42, _mm_and_ps(v43, (__m128)xmmword_10394150));
      v45 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394180, _mm_mul_ps(v44, (__m128)xmmword_10394180)), v44);
      v5 = v63;
      v46 = _mm_add_ps(
              _mm_mul_ps(
                _mm_xor_ps(v45, _mm_and_ps(_mm_xor_ps(v43, v38), (__m128)xmmword_10394250)),
                _mm_mul_ps(v37, v76)),
              *v50);
      if ( *(_DWORD *)(this + 60) == 7 )
        v46 = _mm_max_ps(_mm_min_ps(v46, (__m128)xmmword_10394150), (__m128)xmmword_10394140);
      *v50 = _mm_or_ps(_mm_and_ps(v46, v60), _mm_andnot_ps(v60, *v50));
    }
    result = v56;
    v52 = (__m128 *)((char *)v52 + v55);
    v54 = (__m128 *)((char *)v54 + v56);
    v50 += v51;
    v15 += 4 * v53;
    --v49;
  }
  while ( v49 );
  return result;
}
