void __stdcall sub_1020B9B0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  float *v8; // edx
  int v9; // eax
  int v10; // ebx
  float *v11; // eax
  unsigned int v12; // eax
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 *v16; // eax
  int v17; // ebx
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  double v23; // st6
  int v24; // eax
  int v25; // kr08_4
  int v26; // edx
  float *v27; // edi
  float *v28; // edx
  int v29; // eax
  __int128 v30; // xmm0
  int v31; // eax
  double v32; // st6
  __int128 v33; // xmm0
  int v34; // edi
  int v35; // ecx
  float *v36; // edx
  int v37; // eax
  int v38; // ebx
  float *v39; // eax
  int v40; // [esp+1Ch] [ebp-34h]
  float v41; // [esp+20h] [ebp-30h]
  __int128 v42; // [esp+30h] [ebp-20h]

  v5 = a1[1501];
  if ( v5 )
  {
    if ( !*(_DWORD *)(v5 + 5996) )
    {
      v12 = sub_101F8C60(7952);
      *(_DWORD *)(v5 + 5996) = v12;
      *(_DWORD *)(v12 + 7872) = 0;
      *(_DWORD *)(*(_DWORD *)(v5 + 5996) + 7876) = 0;
      v13 = 0;
      v13.m128_f32[0] = flt_10459240;
      v14 = 0;
      v14.m128_f32[0] = *(float *)&qword_10459244;
      v15 = 0;
      v16 = (__m128 *)(*(_DWORD *)(v5 + 5996) + 3936);
      v15.m128_f32[0] = *((float *)&qword_10459244 + 1);
      *v16 = _mm_shuffle_ps(v13, v13, 0);
      v16[1] = _mm_shuffle_ps(v14, v14, 0);
      v16[2] = _mm_shuffle_ps(v15, v15, 0);
    }
    v17 = *(_DWORD *)(v5 + 5996);
    v40 = v17;
    if ( *(int *)(v17 + 7872) <= 0 )
    {
      if ( a3 )
      {
        v34 = a2;
        do
        {
          --a3;
          v35 = v34 & 3;
          v36 = (float *)(a1[1517] + 4 * (v35 + v34 / 4 * a1[1581]));
          v37 = a1[1519];
          v38 = v35 + v34 / 4 * a1[1583];
          *v36 = flt_10459240;
          v39 = (float *)(v37 + 4 * v38);
          ++v34;
          v36[4] = *(float *)&qword_10459244;
          v36[8] = *((float *)&qword_10459244 + 1);
          *v39 = flt_10459240;
          v39[4] = *(float *)&qword_10459244;
          v39[8] = *((float *)&qword_10459244 + 1);
        }
        while ( a3 );
      }
    }
    else if ( a3 )
    {
      v18 = a2;
      do
      {
        v19 = a1[1655];
        v20 = *(_DWORD *)(v17 + 7872);
        --a3;
        a1[1655] = v19 + 1;
        v21 = (int)((double)v20 * flt_103EE7C0[((_WORD)v19 + (unsigned __int16)a1[1656]) & 0xFFF]);
        v22 = 16 * (3 * v21 + 369);
        v23 = *(float *)(v22 + v17);
        v24 = v17 + v22;
        if ( v23 == flt_103EE008 && *(float *)(v24 + 16) == flt_103EE00C && *(float *)(v24 + 32) == flt_103EE010 )
        {
          *(float *)(a1[1518] + 4 * ((v18 & 3) + a1[1582] * (v18 / 4))) = 0.0;
        }
        else
        {
          v25 = v18;
          v26 = v18 & 3;
          v27 = (float *)(a1[1517] + 4 * (v26 + v18 / 4 * a1[1581]));
          v28 = (float *)(a1[1519] + 4 * (v26 + v25 / 4 * a1[1583]));
          v17 = v40;
          v29 = 16 * (3 * v21 + 246);
          v30 = *(_OWORD *)(v29 + v40);
          v31 = v40 + v29;
          v41 = *(float *)&v30;
          v32 = *(float *)&v30;
          v42 = *(_OWORD *)(v31 + 16);
          v33 = *(_OWORD *)(v31 + 32);
          *v27 = v41;
          v27[4] = *(float *)&v42;
          v27[8] = *(float *)&v33;
          v18 = a2;
          v28[8] = *(float *)&v33;
          *v28 = v32;
          v28[4] = *(float *)&v42;
        }
        a2 = ++v18;
      }
      while ( a3 );
    }
  }
  else if ( a3 )
  {
    v6 = a2;
    do
    {
      --a3;
      v7 = v6 & 3;
      v8 = (float *)(a1[1517] + 4 * (v7 + v6 / 4 * a1[1581]));
      v9 = a1[1519];
      v10 = v7 + v6 / 4 * a1[1583];
      *v8 = flt_10459240;
      v11 = (float *)(v9 + 4 * v10);
      ++v6;
      v8[4] = *(float *)&qword_10459244;
      v8[8] = *((float *)&qword_10459244 + 1);
      *v11 = flt_10459240;
      v11[4] = *(float *)&qword_10459244;
      v11[8] = *((float *)&qword_10459244 + 1);
    }
    while ( a3 );
  }
}
