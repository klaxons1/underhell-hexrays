void __usercall sub_10142DE0(int *a1@<ecx>, int a2@<ebp>)
{
  int *v2; // esi
  int i; // edi
  int v4; // edx
  int v5; // ecx
  double v6; // st7
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // esi
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // esi
  int v17; // edi
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int *v23; // ecx
  int v24; // edi
  unsigned int v25; // eax
  int v26; // esi
  double v27; // st7
  double v28; // st6
  double v29; // st5
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int *v33; // ecx
  _DWORD *v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int *v39; // edi
  int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  int *v43; // ecx
  _DWORD *v44; // eax
  int v45; // edi
  int *v46; // esi
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int *v50; // eax
  int v51; // edi
  int *v52; // esi
  int v53; // ecx
  unsigned int v54; // eax
  int *v55; // ecx
  int v56; // ecx
  float v57; // [esp+Ch] [ebp-F4h]
  _BYTE v58[12]; // [esp+1Ch] [ebp-E4h] BYREF
  float v59[19]; // [esp+28h] [ebp-D8h] BYREF
  float v60[16]; // [esp+74h] [ebp-8Ch] BYREF
  char v61; // [esp+B4h] [ebp-4Ch]
  bool v62; // [esp+B5h] [ebp-4Bh]
  float v63[3]; // [esp+D0h] [ebp-30h] BYREF
  int v64; // [esp+DCh] [ebp-24h]
  int v65; // [esp+E0h] [ebp-20h]
  int v66; // [esp+E4h] [ebp-1Ch]
  int v67; // [esp+E8h] [ebp-18h]
  int v68; // [esp+ECh] [ebp-14h]
  int *v69; // [esp+F0h] [ebp-10h]
  int v70; // [esp+F4h] [ebp-Ch]
  void *v71; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v70 = a2;
  v71 = retaddr;
  v2 = a1;
  v57 = *(float *)(dword_106B31C8 + 12) + 0.1;
  v69 = a1;
  sub_100EC4A0(a1, v57, 0);
  if ( *(_DWORD *)(dword_106B0D34 + 48) )
  {
    if ( !*((_BYTE *)v2 + 824) )
    {
      for ( i = 0; i < v2[210]; ++i )
      {
        v4 = v2[207];
        v63[0] = 0.0;
        v63[1] = 0.0;
        v63[2] = 0.0;
        if ( *(_DWORD *)(v4 + 4 * i) == -1
          || off_1061BE18[4 * (*(_DWORD *)(v4 + 4 * i) & 0xFFF) + 2] != *(_DWORD *)(v4 + 4 * i) >> 12 )
        {
          v5 = 0;
        }
        else
        {
          v5 = off_1061BE18[4 * (*(_DWORD *)(v4 + 4 * i) & 0xFFF) + 1];
        }
        sub_100DD660(v5, v63);
      }
      *((_BYTE *)v69 + 824) = 1;
    }
  }
  else
  {
    *((_BYTE *)v2 + 824) = 0;
    if ( sub_10264FF0(v2 + 212) > *((float *)v2 + 213) )
    {
      v6 = sub_10264FF0(v2 + 212);
      v7 = 0;
      for ( *((float *)v2 + 213) = v6 + *((float *)v2 + 212); v7 < v2[210]; *(_DWORD *)(v11 + 1264) = 0 )
      {
        v8 = v2[207];
        v9 = *(_DWORD *)(v8 + 4 * v7);
        if ( v9 == -1 || (v10 = &off_1061BE18[4 * (*(_DWORD *)(v8 + 4 * v7) & 0xFFF) + 1], v10[1] != v9 >> 12) )
          v11 = 0;
        else
          v11 = *v10;
        ++v7;
      }
      if ( v2[210] > 0 )
      {
        v66 = 1;
        v12 = 1;
        v67 = 0;
        do
        {
          v13 = *(_DWORD *)(v67 + v69[207]);
          if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(v67 + v69[207]) & 0xFFF) + 2] != v13 >> 12 )
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (*(_DWORD *)(v67 + v69[207]) & 0xFFF) + 1];
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 264))(v14) )
          {
            v15 = v12;
            v64 = v12;
            if ( v12 < v69[210] )
            {
              v16 = v69;
              do
              {
                v17 = 4 * v15;
                v18 = *(_DWORD *)(v16[207] + 4 * v15);
                v65 = v17;
                if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
                  v19 = 0;
                else
                  v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 264))(v19) )
                {
                  v20 = v16[207];
                  v21 = *(_DWORD *)(v20 + v67);
                  if ( v21 == -1 || (v16 = v69, off_1061BE18[4 * (*(_DWORD *)(v20 + v67) & 0xFFF) + 2] != v21 >> 12) )
                    v68 = 0;
                  else
                    v68 = off_1061BE18[4 * (*(_DWORD *)(v20 + v67) & 0xFFF) + 1];
                  v22 = *(_DWORD *)(v20 + v17);
                  if ( v22 == -1 || (v23 = &off_1061BE18[4 * (*(_DWORD *)(v20 + v17) & 0xFFF) + 1], v23[1] != v22 >> 12) )
                    v24 = 0;
                  else
                    v24 = *v23;
                  if ( (*(_DWORD *)(v24 + 252) & 0x800) != 0 )
                    sub_100DAE60(v24);
                  v25 = *(_DWORD *)(v67 + v16[207]);
                  if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(v67 + v16[207]) & 0xFFF) + 2] != v25 >> 12 )
                    v26 = 0;
                  else
                    v26 = off_1061BE18[4 * (*(_DWORD *)(v67 + v16[207]) & 0xFFF) + 1];
                  if ( (*(_DWORD *)(v26 + 252) & 0x800) != 0 )
                    sub_100DAE60(v26);
                  v27 = *(float *)(v24 + 580) - *(float *)(v26 + 580);
                  v60[4] = v27;
                  v28 = *(float *)(v24 + 584) - *(float *)(v26 + 584);
                  v60[5] = v28;
                  v29 = *(float *)(v24 + 588) - *(float *)(v26 + 588);
                  v60[6] = v29;
                  v62 = 0.0 != v27 * v27 + v28 * v28 + v29 * v29;
                  v60[14] = 0.0;
                  v60[13] = 0.0;
                  v60[12] = 0.0;
                  v60[10] = 0.0;
                  v60[9] = 0.0;
                  v61 = 1;
                  v60[8] = 0.0;
                  v60[0] = *(float *)(v26 + 580);
                  v60[1] = *(float *)(v26 + 584);
                  v60[2] = *(float *)(v26 + 588);
                  sub_10265570(v68, 0);
                  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                    dword_106B31F4,
                    v60,
                    33636363,
                    v63,
                    v58);
                  if ( *(_DWORD *)(dword_106CE63C + 48) )
                    sub_101A0AD0((int)v58, (int)v59, 255, 0, 0, 1, 5.0);
                  if ( v59[8] >= 1.0 )
                  {
                    v30 = v69[207];
                    v31 = *(_DWORD *)(v30 + v65);
                    if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(v30 + v65) & 0xFFF) + 2] != v31 >> 12 )
                      v68 = 0;
                    else
                      v68 = off_1061BE18[4 * (*(_DWORD *)(v30 + v65) & 0xFFF) + 1];
                    v32 = *(_DWORD *)(v30 + v67);
                    if ( v32 == -1
                      || (v33 = &off_1061BE18[4 * (*(_DWORD *)(v30 + v67) & 0xFFF) + 1], v33[1] != v32 >> 12) )
                    {
                      v34 = 0;
                    }
                    else
                    {
                      v34 = (_DWORD *)*v33;
                    }
                    v35 = v34[316];
                    v36 = v34[314];
                    if ( v35 + 1 > v36 )
                      sub_102ABFC0(v35 - v36 + 1);
                    ++v34[316];
                    v37 = v34[313];
                    v38 = v34[316] - v35 - 1;
                    v34[317] = v37;
                    if ( v38 > 0 )
                      memcpy((void *)(v37 + 4 * v35 + 4), (const void *)(v37 + 4 * v35), 4 * v38);
                    v39 = (int *)(v34[313] + 4 * v35);
                    if ( v39 )
                      *v39 = v68;
                    v40 = v69[207];
                    v41 = *(_DWORD *)(v40 + v67);
                    if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(v40 + v67) & 0xFFF) + 2] != v41 >> 12 )
                      v68 = 0;
                    else
                      v68 = off_1061BE18[4 * (*(_DWORD *)(v40 + v67) & 0xFFF) + 1];
                    v42 = *(_DWORD *)(v40 + v65);
                    if ( v42 == -1
                      || (v43 = &off_1061BE18[4 * (*(_DWORD *)(v40 + v65) & 0xFFF) + 1], v43[1] != v42 >> 12) )
                    {
                      v44 = 0;
                    }
                    else
                    {
                      v44 = (_DWORD *)*v43;
                    }
                    v45 = v44[316];
                    v46 = v44 + 313;
                    v47 = v44[314];
                    if ( v45 + 1 > v47 )
                      sub_102ABFC0(v45 - v47 + 1);
                    ++v46[3];
                    v48 = *v46;
                    v49 = v46[3] - v45 - 1;
                    v46[4] = *v46;
                    if ( v49 > 0 )
                      memcpy((void *)(v48 + 4 * v45 + 4), (const void *)(v48 + 4 * v45), 4 * v49);
                    v50 = (int *)(*v46 + 4 * v45);
                    if ( v50 )
                      *v50 = v68;
                  }
                }
                v16 = v69;
                v15 = v64 + 1;
                v64 = v15;
              }
              while ( v15 < v69[210] );
              v12 = v66;
            }
          }
          v67 += 4;
          v66 = ++v12;
        }
        while ( v12 - 1 < v69[210] );
        v2 = v69;
      }
    }
    v51 = 0;
    if ( v2[210] > 0 )
    {
      v52 = v69;
      do
      {
        v53 = v52[207];
        v54 = *(_DWORD *)(v53 + 4 * v51);
        if ( v54 == -1 || (v55 = &off_1061BE18[4 * (*(_DWORD *)(v53 + 4 * v51) & 0xFFF) + 1], v55[1] != v54 >> 12) )
          v56 = 0;
        else
          v56 = *v55;
        sub_10142540(v56, 0.1);
        ++v51;
      }
      while ( v51 < v52[210] );
    }
  }
}
