void __thiscall sub_101F9150(int this)
{
  int v1; // ebx
  __m128 v2; // xmm3
  __m128 *v3; // esi
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  int v8; // eax
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __m128 v11; // xmm6
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st2
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st2
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st2
  double v26; // st7
  double v27; // st6
  double v28; // st5
  double v29; // st2
  double v30; // st7
  double v31; // st6
  double v32; // st5
  double v33; // st2
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st2
  int v38; // edi
  double v39; // st7
  double v40; // st6
  double v41; // st5
  float *m128_f32; // edx
  double v43; // st4
  double v44; // st4
  double v45; // st4
  double v46; // st4
  double v47; // st4
  double v48; // st4
  float *v49; // eax
  double v50; // st4
  float *v51; // eax
  double v52; // st3
  __m128 v53; // [esp+8h] [ebp-90h]
  __m128 v54; // [esp+18h] [ebp-80h]
  __m128 v55; // [esp+28h] [ebp-70h]
  __m128 v56; // [esp+38h] [ebp-60h]
  __m128 v57; // [esp+48h] [ebp-50h]
  __m128 v58; // [esp+58h] [ebp-40h]
  __int128 v59; // [esp+68h] [ebp-30h]
  __m128 v60; // [esp+78h] [ebp-20h]
  __int128 v61; // [esp+88h] [ebp-10h]

  v1 = *(_DWORD *)(this + 40);
  if ( 0.0 == (double)v1 )
  {
    *(_BYTE *)(this + 6012) = 0;
    *(float *)(this + 6016) = 3.4028235e38;
    *(float *)(this + 6020) = 3.4028235e38;
    *(float *)(this + 6024) = 3.4028235e38;
    *(float *)(this + 6028) = -3.4028235e38;
    *(float *)(this + 6032) = -3.4028235e38;
    *(float *)(this + 6036) = -3.4028235e38;
    *(float *)(this + 6604) = 0.0;
    *(float *)(this + 6608) = 0.0;
    *(float *)(this + 6612) = 0.0;
  }
  else
  {
    v2 = (__m128)xmmword_10394140;
    v3 = *(__m128 **)(this + 6068);
    v4 = 0;
    v4.m128_f32[0] = 9.9999998e22;
    v5 = 0;
    v5.m128_f32[0] = -9.9999998e22;
    v6 = _mm_shuffle_ps(v4, v4, 0);
    v7 = _mm_shuffle_ps(v5, v5, 0);
    v8 = v1 / 4;
    v9 = v6;
    v10 = v7;
    v11 = (__m128)xmmword_10394140;
    v56 = v6;
    v58 = v6;
    v53 = v6;
    v60 = v7;
    v57 = v7;
    v54 = v7;
    v59 = xmmword_10394140;
    v61 = xmmword_10394140;
    v55 = (__m128)xmmword_10394140;
    if ( v1 / 4 )
    {
      do
      {
        v6 = _mm_min_ps(v6, *v3);
        v7 = _mm_max_ps(v7, *v3);
        v2 = _mm_add_ps(*v3, v2);
        v12 = v3[1];
        v9 = _mm_min_ps(v9, v12);
        v10 = _mm_max_ps(v10, v12);
        v11 = _mm_add_ps(v12, v11);
        v13 = v3[2];
        v53 = _mm_min_ps(v53, v13);
        --v8;
        v3 += *(_DWORD *)(this + 6324) >> 2;
        v54 = _mm_max_ps(v54, v13);
        v55 = _mm_add_ps(v13, v55);
      }
      while ( v8 );
      v61 = (__int128)v11;
      v57 = v10;
      v58 = v9;
      v59 = (__int128)v2;
      v60 = v7;
      v56 = v6;
    }
    v14 = v56.m128_f32[1];
    *(_BYTE *)(this + 6012) = 1;
    v15 = v56.m128_f32[0];
    if ( v56.m128_f32[0] >= (double)v56.m128_f32[1] )
      v16 = v56.m128_f32[1];
    else
      v16 = v56.m128_f32[0];
    if ( v56.m128_f32[2] >= (double)v56.m128_f32[3] )
      v17 = v56.m128_f32[3];
    else
      v17 = v56.m128_f32[2];
    if ( v17 <= v16 )
    {
      v14 = v56.m128_f32[3];
      v15 = v56.m128_f32[2];
    }
    if ( v15 < v14 )
      v14 = v15;
    *(float *)(this + 6016) = v14;
    v18 = v58.m128_f32[1];
    v19 = v58.m128_f32[0];
    if ( v58.m128_f32[0] >= (double)v58.m128_f32[1] )
      v20 = v58.m128_f32[1];
    else
      v20 = v58.m128_f32[0];
    if ( v58.m128_f32[2] >= (double)v58.m128_f32[3] )
      v21 = v58.m128_f32[3];
    else
      v21 = v58.m128_f32[2];
    if ( v21 <= v20 )
    {
      v18 = v58.m128_f32[3];
      v19 = v58.m128_f32[2];
    }
    if ( v19 < v18 )
      v18 = v19;
    *(float *)(this + 6020) = v18;
    v22 = v53.m128_f32[1];
    v23 = v53.m128_f32[0];
    if ( v53.m128_f32[0] >= (double)v53.m128_f32[1] )
      v24 = v53.m128_f32[1];
    else
      v24 = v53.m128_f32[0];
    if ( v53.m128_f32[2] >= (double)v53.m128_f32[3] )
      v25 = v53.m128_f32[3];
    else
      v25 = v53.m128_f32[2];
    if ( v25 <= v24 )
    {
      v22 = v53.m128_f32[3];
      v23 = v53.m128_f32[2];
    }
    if ( v23 < v22 )
      v22 = v23;
    *(float *)(this + 6024) = v22;
    v26 = v60.m128_f32[1];
    v27 = v60.m128_f32[0];
    if ( v60.m128_f32[0] <= (double)v60.m128_f32[1] )
      v28 = v60.m128_f32[1];
    else
      v28 = v60.m128_f32[0];
    if ( v60.m128_f32[2] <= (double)v60.m128_f32[3] )
      v29 = v60.m128_f32[3];
    else
      v29 = v60.m128_f32[2];
    if ( v29 >= v28 )
    {
      v26 = v60.m128_f32[3];
      v27 = v60.m128_f32[2];
    }
    if ( v27 > v26 )
      v26 = v27;
    *(float *)(this + 6028) = v26;
    v30 = v57.m128_f32[1];
    v31 = v57.m128_f32[0];
    if ( v57.m128_f32[0] <= (double)v57.m128_f32[1] )
      v32 = v57.m128_f32[1];
    else
      v32 = v57.m128_f32[0];
    if ( v57.m128_f32[2] <= (double)v57.m128_f32[3] )
      v33 = v57.m128_f32[3];
    else
      v33 = v57.m128_f32[2];
    if ( v33 >= v32 )
    {
      v30 = v57.m128_f32[3];
      v31 = v57.m128_f32[2];
    }
    if ( v31 > v30 )
      v30 = v31;
    *(float *)(this + 6032) = v30;
    v34 = v54.m128_f32[1];
    v35 = v54.m128_f32[0];
    if ( v54.m128_f32[0] <= (double)v54.m128_f32[1] )
      v36 = v54.m128_f32[1];
    else
      v36 = v54.m128_f32[0];
    if ( v54.m128_f32[2] <= (double)v54.m128_f32[3] )
      v37 = v54.m128_f32[3];
    else
      v37 = v54.m128_f32[2];
    if ( v37 >= v36 )
    {
      v34 = v54.m128_f32[3];
      v35 = v54.m128_f32[2];
    }
    if ( v35 > v34 )
      v34 = v35;
    *(float *)(this + 6036) = v34;
    v38 = 0;
    v39 = *((float *)&v59 + 3) + *((float *)&v59 + 2) + *((float *)&v59 + 1) + *(float *)&v59;
    v40 = *((float *)&v61 + 3) + *((float *)&v61 + 2) + *((float *)&v61 + 1) + *(float *)&v61;
    v41 = v55.m128_f32[3] + v55.m128_f32[2] + v55.m128_f32[1] + v55.m128_f32[0];
    if ( (v1 & 3) != 0 )
    {
      m128_f32 = v3[2].m128_f32;
      do
      {
        if ( *(m128_f32 - 8) <= (double)*(float *)(this + 6016) )
          v43 = *(m128_f32 - 8);
        else
          v43 = *(float *)(this + 6016);
        *(float *)(this + 6016) = v43;
        if ( *(m128_f32 - 8) >= (double)*(float *)(this + 6028) )
          v44 = *(m128_f32 - 8);
        else
          v44 = *(float *)(this + 6028);
        *(float *)(this + 6028) = v44;
        v39 = v39 + *(m128_f32 - 8);
        if ( *(m128_f32 - 4) <= (double)*(float *)(this + 6020) )
          v45 = *(m128_f32 - 4);
        else
          v45 = *(float *)(this + 6020);
        *(float *)(this + 6020) = v45;
        if ( *(m128_f32 - 4) >= (double)*(float *)(this + 6032) )
          v46 = *(m128_f32 - 4);
        else
          v46 = *(float *)(this + 6032);
        *(float *)(this + 6032) = v46;
        v40 = v40 + *(m128_f32 - 4);
        if ( *m128_f32 <= (double)*(float *)(this + 6024) )
          v47 = *m128_f32;
        else
          v47 = *(float *)(this + 6024);
        *(float *)(this + 6024) = v47;
        if ( *m128_f32 >= (double)*(float *)(this + 6036) )
          v48 = *m128_f32;
        else
          v48 = *(float *)(this + 6036);
        *(float *)(this + 6036) = v48;
        ++v38;
        v41 = v41 + *m128_f32++;
      }
      while ( v38 < (v1 & 3) );
    }
    v49 = *(float **)(this + 64);
    v50 = *(float *)(this + 6016) + v49[8];
    v49 += 8;
    *(float *)(this + 6016) = v50;
    *(float *)(this + 6020) = *(float *)(this + 6020) + v49[1];
    *(float *)(this + 6024) = *(float *)(this + 6024) + v49[2];
    v51 = (float *)(*(_DWORD *)(this + 64) + 44);
    *(float *)(this + 6028) = *(float *)(this + 6028) + *v51;
    *(float *)(this + 6032) = *(float *)(this + 6032) + v51[1];
    *(float *)(this + 6036) = *(float *)(this + 6036) + v51[2];
    v52 = 1.0 / (double)*(int *)(this + 40);
    *(float *)(this + 6604) = v39 * v52;
    *(float *)(this + 6608) = v40 * v52;
    *(float *)(this + 6612) = v52 * v41;
  }
}
