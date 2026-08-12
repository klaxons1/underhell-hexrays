void __thiscall sub_1021FAB0(int this, int a2, int a3, int a4)
{
  double v5; // st7
  unsigned int v6; // ecx
  __m128 *v7; // edx
  __m128 *v8; // edi
  double v9; // st7
  float v10; // xmm0_4
  __m128 v11; // xmm3
  int v12; // eax
  long double v13; // st7
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  int v23; // ebx
  __m128 *v24; // eax
  int v25; // ebx
  double v26; // st7
  int v27; // ecx
  __m128 v28; // xmm0
  __m128 v29; // xmm2
  __m128 *v30; // eax
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm6
  __m128 v34; // xmm0
  int v35; // eax
  signed int v36; // ebx
  signed int v37; // edi
  int v38; // ecx
  bool v39; // cc
  signed int v40; // eax
  bool v41; // zf
  int v42; // ebx
  float *v43; // edi
  char v44; // bl
  double v45; // st7
  int v46; // ecx
  signed int v47; // eax
  signed int i; // ebx
  float *v49; // edi
  double v50; // st7
  int v51; // ecx
  int v52; // [esp+30h] [ebp-EB78h]
  int v53; // [esp+30h] [ebp-EB78h]
  signed int v54; // [esp+30h] [ebp-EB78h]
  int v55; // [esp+34h] [ebp-EB74h]
  signed int v56; // [esp+34h] [ebp-EB74h]
  int v57; // [esp+38h] [ebp-EB70h]
  int v58; // [esp+38h] [ebp-EB70h]
  float v59; // [esp+38h] [ebp-EB70h]
  float v60; // [esp+38h] [ebp-EB70h]
  float v61; // [esp+3Ch] [ebp-EB6Ch] BYREF
  int v62; // [esp+40h] [ebp-EB68h]
  int v63; // [esp+44h] [ebp-EB64h]
  int v64; // [esp+48h] [ebp-EB60h]
  __m128 *v65; // [esp+4Ch] [ebp-EB5Ch]
  unsigned int v66; // [esp+50h] [ebp-EB58h]
  __int64 v67; // [esp+54h] [ebp-EB54h]
  float v68; // [esp+5Ch] [ebp-EB4Ch]
  unsigned int v69; // [esp+64h] [ebp-EB44h]
  __m128 v70; // [esp+68h] [ebp-EB40h]
  _BYTE v71[208]; // [esp+78h] [ebp-EB30h] BYREF
  _OWORD v72[2]; // [esp+148h] [ebp-EA60h] BYREF
  __m128 v73; // [esp+168h] [ebp-EA40h] BYREF

  v5 = *(float *)(this + 56);
  v6 = *(_DWORD *)(a2 + 6332) / 0xCu;
  v66 = *(_DWORD *)(a2 + 6324) / 0xCu;
  v7 = *(__m128 **)(a2 + 6068);
  v8 = *(__m128 **)(a2 + 6076);
  v63 = this;
  v69 = v6;
  v65 = v7;
  if ( v5 >= 0.0 )
    v9 = *(float *)(this + 56);
  else
    v9 = 0.0;
  v10 = *(float *)(a2 + 44) / *(float *)(a2 + 48);
  v67 = *(_QWORD *)(this + 44);
  v11 = 0;
  v68 = *(float *)(this + 52);
  v12 = *(_DWORD *)(*(_DWORD *)(a2 + 64) + 660);
  v55 = 0;
  v52 = v12;
  v13 = __FYL2X__(1.0 - v9, 0.6931471805599453094) * *(float *)(a2 + 44) * 29.999998 * 1.442695040888963407;
  _ST6 = v13;
  __asm { frndint }
  v61 = __FSCALE__(__F2XM1__(v13 - _ST6) + 1.0, _ST6);
  v11.m128_f32[0] = v10 * v61;
  v16 = _mm_shuffle_ps(v11, v11, 0);
  v70 = v16;
  v17 = 0;
  v17.m128_f32[0] = *(float *)&v67;
  v18 = 0;
  v18.m128_f32[0] = *((float *)&v67 + 1);
  v19 = 0;
  v19.m128_f32[0] = v68;
  v20 = _mm_shuffle_ps(v17, v17, 0);
  v21 = _mm_shuffle_ps(v18, v18, 0);
  v22 = _mm_shuffle_ps(v19, v19, 0);
  if ( v12 )
  {
    v23 = *(_DWORD *)(a2 + 32);
    v55 = 1;
    v64 = v23;
    if ( v23 > 0 )
    {
      v24 = &v73;
      do
      {
        v24[-2] = v20;
        v24[-1] = v21;
        *v24 = v22;
        v24 += 3;
        --v23;
      }
      while ( v23 );
      v12 = v52;
    }
    v25 = 0;
    if ( v12 > 0 )
    {
      do
      {
        v57 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 648) + 4 * v25);
        if ( sub_101F7E80((float *)a2, (float *)v57, &v61) )
        {
          *(float *)&v62 = Plat_FloatTime();
          (*(void (__stdcall **)(_OWORD *, int, int, float, int))(**(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 648)
                                                                              + 4 * v25)
                                                                + 72))(
            v72,
            a2,
            v64,
            COERCE_FLOAT(LODWORD(v61)),
            *(_DWORD *)(a2 + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 788) + 4 * v25));
          v26 = Plat_FloatTime() - *(float *)&v62;
          v27 = *(_DWORD *)(v57 + 24);
          *(float *)(v27 + 12) = v26 + *(float *)(v27 + 12);
          if ( v26 < *(float *)(v27 + 4) )
            v26 = *(float *)(v27 + 4);
          *(float *)(v27 + 4) = v26;
        }
        ++v25;
      }
      while ( v25 < v52 );
      v16 = v70;
      v6 = v69;
      v7 = v65;
    }
  }
  else
  {
    v72[0] = v20;
    v72[1] = v21;
    v73 = v22;
  }
  v58 = 48 * v66;
  v28 = 0;
  v28.m128_f32[0] = *(float *)(a2 + 44) * *(float *)(a2 + 44);
  v53 = *(_DWORD *)(a2 + 32);
  v29 = _mm_shuffle_ps(v28, v28, 0);
  v30 = (__m128 *)v72;
  v62 = 48 * v55;
  do
  {
    v31 = v30[1];
    v32 = v30[2];
    v33 = *v30;
    v30 = (__m128 *)((char *)v30 + v62);
    *v8 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v7, *v8), v16), _mm_mul_ps(v33, v29)), *v7);
    v8[1] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v7[1], v8[1]), v16), _mm_mul_ps(v31, v29)), v7[1]);
    v34 = v7[2];
    v7 = (__m128 *)((char *)v7 + v58);
    v8[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v34, v8[2]), v16), _mm_mul_ps(v32, v29)), v34);
    v8 += 3 * v6;
    --v53;
  }
  while ( v53 );
  v35 = *(_DWORD *)(a2 + 6068);
  *(_DWORD *)(a2 + 6068) = *(_DWORD *)(a2 + 6076);
  *(_DWORD *)(a2 + 6076) = v35;
  v36 = *(_DWORD *)(*(_DWORD *)(a2 + 64) + 680);
  v54 = v36;
  if ( v36 && *(_DWORD *)(a2 + 32) )
  {
    v37 = 0;
    if ( v36 > 0 )
    {
      memset(v71, 0, v36);
      do
      {
        v38 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 668) + 4 * v37);
        v71[v37 + 104] = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 84))(v38);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 668) + 4 * v37) + 76))(
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 668) + 4 * v37),
          a2,
          *(_DWORD *)(a2 + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 808) + 4 * v37));
        ++v37;
      }
      while ( v37 < v36 );
    }
    v39 = *(_DWORD *)(v63 + 60) <= 0;
    v61 = 0.0;
    if ( !v39 )
    {
      do
      {
        v40 = 0;
        v56 = 0;
        if ( v36 > 0 )
        {
          do
          {
            if ( !v71[v40] )
            {
              v41 = v71[v40 + 104] == 0;
              v42 = 4 * v40;
              v43 = *(float **)(4 * v40 + *(_DWORD *)(*(_DWORD *)(a2 + 64) + 668));
              v71[v40] = 1;
              if ( v41 )
              {
                if ( sub_101F7E80((float *)a2, v43, 0) )
                {
                  v59 = Plat_FloatTime();
                  v44 = (*(int (__thiscall **)(float *, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v43 + 80))(
                          v43,
                          0,
                          *(_DWORD *)(a2 + 32),
                          a2,
                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 808) + v42) + *(_DWORD *)(a2 + 5976),
                          *(_DWORD *)(a2 + 40));
                  v45 = Plat_FloatTime() - v59;
                  v46 = *((_DWORD *)v43 + 6);
                  *(float *)(v46 + 12) = *(float *)(v46 + 12) + v45;
                  if ( v45 < *(float *)(v46 + 4) )
                    v45 = *(float *)(v46 + 4);
                  *(float *)(v46 + 4) = v45;
                  if ( v44 )
                  {
                    v47 = 0;
                    do
                    {
                      if ( v56 != v47 )
                        v71[v47] = 0;
                      ++v47;
                    }
                    while ( v47 < v54 );
                  }
                }
                v40 = v56;
              }
            }
            v36 = v54;
            v56 = ++v40;
          }
          while ( v40 < v54 );
        }
        v39 = ++LODWORD(v61) < *(_DWORD *)(v63 + 60);
      }
      while ( v39 );
    }
    for ( i = 0; i < v54; ++i )
    {
      v49 = *(float **)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 668) + 4 * i);
      if ( v71[i + 104] && sub_101F7E80((float *)a2, v49, 0) )
      {
        v60 = Plat_FloatTime();
        (*(void (__thiscall **)(float *, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v49 + 80))(
          v49,
          0,
          *(_DWORD *)(a2 + 32),
          a2,
          *(_DWORD *)(a2 + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 64) + 808) + 4 * i),
          *(_DWORD *)(a2 + 40));
        v50 = Plat_FloatTime() - v60;
        v51 = *((_DWORD *)v49 + 6);
        *(float *)(v51 + 12) = v50 + *(float *)(v51 + 12);
        if ( v50 < *(float *)(v51 + 4) )
          v50 = *(float *)(v51 + 4);
        *(float *)(v51 + 4) = v50;
      }
    }
  }
}
