void __thiscall sub_1021B1B0(__m128 *this, _DWORD *a2, int a3, int a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm3
  __int32 v6; // esi
  unsigned int v7; // kr00_4
  double v8; // st6
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 *v11; // esi
  double v12; // st6
  __m128 v13; // xmm0
  __int64 v14; // rax
  double v15; // st6
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 *v18; // edi
  int v19; // edx
  __m128 v20; // xmm0
  int v21; // ebx
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  unsigned int v27; // ebx
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  float v33; // [esp+18h] [ebp-118h]
  float v34; // [esp+18h] [ebp-118h]
  float v35; // [esp+18h] [ebp-118h]
  float v36; // [esp+18h] [ebp-118h]
  float v37; // [esp+18h] [ebp-118h]
  float v38; // [esp+18h] [ebp-118h]
  int v39; // [esp+28h] [ebp-108h]
  __m128 v40; // [esp+30h] [ebp-100h] BYREF
  __m128 v41; // [esp+40h] [ebp-F0h]
  __m128 v42; // [esp+50h] [ebp-E0h]
  __m128 v43; // [esp+60h] [ebp-D0h]
  __m128 v44; // [esp+70h] [ebp-C0h]
  __m128 v45; // [esp+80h] [ebp-B0h]
  __m128 v46; // [esp+90h] [ebp-A0h]
  __m128 v47; // [esp+A0h] [ebp-90h]
  __m128 v48; // [esp+B0h] [ebp-80h]
  __m128 v49; // [esp+C0h] [ebp-70h]
  __m128 v50; // [esp+D0h] [ebp-60h]
  __m128 v51; // [esp+E0h] [ebp-50h]
  __m128 v52; // [esp+F0h] [ebp-40h]
  __m128 v53; // [esp+100h] [ebp-30h]
  __m128 v54; // [esp+110h] [ebp-20h]
  __m128 v55; // [esp+120h] [ebp-10h]

  v4 = 0;
  v5 = this[5];
  v6 = this[2].m128_i32[3];
  v33 = (this[3].m128_f32[3] - this[3].m128_f32[0]) * 0.5;
  v7 = a2[v6 + 1581];
  v4.m128_f32[0] = v33;
  v34 = (this[3].m128_f32[3] - this[3].m128_f32[0]) * 0.5 + this[3].m128_f32[0];
  v8 = this[4].m128_f32[0] - this[3].m128_f32[1];
  v47 = _mm_shuffle_ps(v4, v4, 0);
  v9 = 0;
  v9.m128_f32[0] = v34;
  v48 = _mm_shuffle_ps(v9, v9, 0);
  v10 = 0;
  v35 = v8 * 0.5;
  v11 = (__m128 *)a2[v6 + 1517];
  v12 = this[4].m128_f32[0] - this[3].m128_f32[1];
  v10.m128_f32[0] = v35;
  v43 = _mm_shuffle_ps(v10, v10, 0);
  v13 = 0;
  v14 = 2863311531LL * (unsigned int)a2[1581];
  v36 = v12 * 0.5 + this[3].m128_f32[1];
  v13.m128_f32[0] = v36;
  v37 = (this[4].m128_f32[1] - this[3].m128_f32[2]) * 0.5;
  v15 = this[4].m128_f32[1] - this[3].m128_f32[2];
  v52 = _mm_shuffle_ps(v13, v13, 0);
  v16 = 0;
  v16.m128_f32[0] = v37;
  v44 = _mm_shuffle_ps(v16, v16, 0);
  v17 = 0;
  v18 = (__m128 *)a2[1517];
  v19 = HIDWORD(v14) >> 3;
  v38 = 0.5 * v15 + this[3].m128_f32[2];
  v46 = v5;
  v17.m128_f32[0] = v38;
  v45 = _mm_shuffle_ps(v17, v17, 0);
  v20 = 0;
  v20.m128_f32[0] = 100000.5;
  v21 = a2[10];
  v49 = _mm_shuffle_ps(v20, v20, 0);
  v22 = 0;
  v22.m128_f32[0] = 300000.25;
  v50 = _mm_shuffle_ps(v22, v22, 0);
  v23 = 0;
  v23.m128_f32[0] = 9000001.0;
  v51 = _mm_shuffle_ps(v23, v23, 0);
  v24 = 0;
  v24.m128_f32[0] = 110000.25;
  v53 = _mm_shuffle_ps(v24, v24, 0);
  v25 = 0;
  v25.m128_f32[0] = 310000.75;
  v54 = _mm_shuffle_ps(v25, v25, 0);
  v26 = 0;
  v26.m128_f32[0] = 9100000.0;
  v55 = _mm_shuffle_ps(v26, v26, 0);
  if ( v21 > 0 )
  {
    v39 = 48 * v19;
    v27 = ((unsigned int)(v21 - 1) >> 2) + 1;
    while ( 1 )
    {
      v28 = _mm_mul_ps(v18[1], v5);
      v29 = _mm_mul_ps(v18[2], v5);
      v40 = _mm_mul_ps(*v18, v5);
      v41 = v28;
      v42 = v29;
      v30 = sub_102AFBB0(&v40);
      *v11 = _mm_add_ps(_mm_mul_ps(v30, v47), v48);
      v40 = _mm_add_ps(v40, v49);
      v41 = _mm_add_ps(v41, v50);
      v42 = _mm_add_ps(v42, v51);
      v31 = sub_102AFBB0(&v40);
      v11[1] = _mm_add_ps(_mm_mul_ps(v31, v43), v52);
      v40 = _mm_add_ps(v40, v53);
      v41 = _mm_add_ps(v41, v54);
      v42 = _mm_add_ps(v42, v55);
      v32 = sub_102AFBB0(&v40);
      v18 = (__m128 *)((char *)v18 + v39);
      v11[2] = _mm_add_ps(_mm_mul_ps(v32, v44), v45);
      v11 += 3 * (v7 / 0xC);
      if ( !--v27 )
        break;
      v5 = v46;
    }
  }
}
