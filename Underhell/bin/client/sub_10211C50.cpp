int __thiscall sub_10211C50(int this, int a2, int a3, int a4, int a5, float *a6)
{
  __m128 v6; // xmm0
  unsigned int v8; // kr00_4
  double v9; // st7
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  unsigned int v16; // edi
  int v17; // eax
  bool v18; // c3
  int v19; // eax
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st7
  unsigned __int8 v24; // al
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // al
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // bl
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm3
  int v36; // esi
  __m128 v37; // xmm0
  int v38; // ebx
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  __m128 v42; // xmm3
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  int v45; // esi
  int v46; // ebx
  __m128 v47; // xmm0
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  float v51; // [esp+4h] [ebp-C4h]
  int v52; // [esp+14h] [ebp-B4h] BYREF
  __m128 v53; // [esp+18h] [ebp-B0h] BYREF
  int v54; // [esp+2Ch] [ebp-9Ch]
  _QWORD v55[3]; // [esp+30h] [ebp-98h]
  __m128 v56; // [esp+48h] [ebp-80h]
  __m128 v57; // [esp+58h] [ebp-70h]
  __m128 v58; // [esp+68h] [ebp-60h]
  __m128 v59; // [esp+78h] [ebp-50h]
  __m128 v60; // [esp+88h] [ebp-40h]
  __m128 v61; // [esp+98h] [ebp-30h]
  __m128 v62; // [esp+A8h] [ebp-20h]
  __m128 v63; // [esp+B8h] [ebp-10h]

  v52 = -1;
  v6 = 0;
  v8 = *(_DWORD *)(a2 + 6348);
  v53.m128_f32[0] = *(float *)(this + 44);
  v53.m128_f32[1] = *(float *)(this + 48);
  v53.m128_f32[2] = *(float *)(this + 52);
  v6.m128_f32[0] = v53.m128_f32[0];
  v53.m128_f32[0] = *(float *)(this + 56) - *(float *)(this + 44);
  v9 = *(float *)(this + 60) - *(float *)(this + 48);
  v58 = _mm_shuffle_ps(v6, v6, 0);
  v10 = 0;
  v10.m128_f32[0] = v53.m128_f32[1];
  v53.m128_f32[1] = v9;
  v11 = *(float *)(this + 64) - *(float *)(this + 52);
  v59 = _mm_shuffle_ps(v10, v10, 0);
  v12 = 0;
  v12.m128_f32[0] = v53.m128_f32[2];
  v53.m128_f32[2] = v11;
  v60 = _mm_shuffle_ps(v12, v12, 0);
  v13 = 0;
  v13.m128_f32[0] = v53.m128_f32[0];
  HIDWORD(v55[0]) = v8 / 0xC;
  *(__m128 *)&v55[1] = _mm_shuffle_ps(v13, v13, 0);
  v14 = 0;
  v14.m128_f32[0] = v53.m128_f32[1];
  v56 = _mm_shuffle_ps(v14, v14, 0);
  v15 = 0;
  v15.m128_f32[0] = v53.m128_f32[2];
  v16 = *(_DWORD *)(a2 + 6092) + 48 * a3 * (v8 / 0xC);
  v57 = _mm_shuffle_ps(v15, v15, 0);
  v17 = sub_102AF3A0();
  v18 = 0.0 == *(float *)(this + 84);
  LODWORD(v55[0]) = v17;
  if ( !v18 )
  {
    v19 = *(_DWORD *)(a2 + 6004);
    if ( v19 && *(_DWORD *)(v19 + 80) == *(_DWORD *)(this + 92) )
    {
      v52 = *(_DWORD *)(v19 + 84);
    }
    else
    {
      sub_101F8ED0(a2, *(_DWORD *)(this + 92), *(float *)(a2 + 36), v53.m128_f32);
      v20 = a6[1] - v53.m128_f32[1];
      v21 = a6[2] - v53.m128_f32[2];
      v22 = *a6 - v53.m128_f32[0];
      v51 = v22 * v22 + v21 * v21 + v20 * v20;
      if ( off_103EDFE0(v51) >= *(float *)(this + 88) || *(_DWORD *)(a2 + 80) == -1 )
      {
        (*(void (__thiscall **)(_DWORD, __m128 *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
          *((_DWORD *)off_103EE614 + 60),
          &v53,
          &v52);
        v23 = v53.m128_f32[0];
        *(_DWORD *)(a2 + 84) = v52;
        *(_DWORD *)(a2 + 80) = *(_DWORD *)(this + 92);
        *a6 = v23;
        a6[1] = v53.m128_f32[1];
        a6[2] = v53.m128_f32[2];
      }
      else
      {
        v52 = *(_DWORD *)(a2 + 84);
      }
    }
    v24 = *(_BYTE *)(this + 80);
    v25 = v52;
    if ( (unsigned __int8)v52 >= v24 )
      v25 = *(_BYTE *)(this + 80);
    if ( *(_BYTE *)(this + 76) <= v25 )
    {
      if ( (unsigned __int8)v52 >= v24 )
        LOBYTE(v52) = *(_BYTE *)(this + 80);
    }
    else
    {
      LOBYTE(v52) = *(_BYTE *)(this + 76);
    }
    v26 = *(_BYTE *)(this + 81);
    v27 = BYTE1(v52);
    if ( BYTE1(v52) >= v26 )
      v27 = *(_BYTE *)(this + 81);
    if ( *(_BYTE *)(this + 77) <= v27 )
    {
      if ( BYTE1(v52) >= v26 )
        BYTE1(v52) = *(_BYTE *)(this + 81);
    }
    else
    {
      BYTE1(v52) = *(_BYTE *)(this + 77);
    }
    v28 = BYTE2(v52);
    v29 = *(_BYTE *)(this + 82);
    v30 = BYTE2(v52);
    if ( BYTE2(v52) >= v29 )
      v30 = *(_BYTE *)(this + 82);
    if ( *(_BYTE *)(this + 78) <= v30 )
    {
      if ( BYTE2(v52) < v29 )
        goto LABEL_28;
      v28 = *(_BYTE *)(this + 82);
    }
    else
    {
      v28 = *(_BYTE *)(this + 78);
    }
    BYTE2(v52) = v28;
LABEL_28:
    v31 = 0;
    v53.m128_f32[0] = (float)(unsigned __int8)v52;
    v54 = v28;
    v31.m128_f32[0] = v53.m128_f32[0];
    v53.m128_f32[1] = (float)BYTE1(v52);
    v32 = 0;
    v53.m128_f32[2] = (float)v28;
    v32.m128_f32[0] = v53.m128_f32[1];
    v33 = 0;
    v33.m128_f32[0] = v53.m128_f32[2];
    v34 = 0;
    v34.m128_f32[0] = 0.0039215689;
    v35 = _mm_shuffle_ps(v34, v34, 0);
    v61 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v35);
    v62 = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v35);
    v32.m128_i32[0] = *(_DWORD *)(this + 84);
    v36 = a4;
    v37 = 0;
    v37.m128_f32[0] = v32.m128_f32[0];
    v63 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v35);
    v53 = _mm_shuffle_ps(v37, v37, 0);
    if ( a4 )
    {
      v38 = 48 * HIDWORD(v55[0]);
      do
      {
        --v36;
        v39 = sub_102AF370();
        v40 = _mm_add_ps(_mm_mul_ps(*(__m128 *)&v55[1], v39), v58);
        v41 = _mm_add_ps(_mm_mul_ps(v56, v39), v59);
        v42 = _mm_add_ps(_mm_mul_ps(v57, v39), v60);
        v43 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v62, v41), v53), v41);
        v44 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v63, v42), v53), v42);
        *(__m128 *)v16 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v61, v40), v53), v40);
        *(__m128 *)(v16 + 16) = v43;
        *(__m128 *)(v16 + 32) = v44;
        v16 += v38;
      }
      while ( v36 );
    }
    return sub_102AF3F0(v55[0]);
  }
  v45 = a4;
  if ( a4 )
  {
    v46 = 48 * HIDWORD(v55[0]);
    do
    {
      --v45;
      v47 = sub_102AF370();
      v48 = _mm_add_ps(_mm_mul_ps(v56, v47), v59);
      v49 = _mm_add_ps(_mm_mul_ps(v57, v47), v60);
      *(__m128 *)v16 = _mm_add_ps(_mm_mul_ps(*(__m128 *)&v55[1], v47), v58);
      *(__m128 *)(v16 + 16) = v48;
      *(__m128 *)(v16 + 32) = v49;
      v16 += v46;
    }
    while ( v45 );
  }
  return sub_102AF3F0(v55[0]);
}
