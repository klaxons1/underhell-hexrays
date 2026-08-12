int __thiscall sub_1008BF10(int *this, int *a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  float v9; // esi
  double v10; // st6
  double v11; // st5
  double v12; // st4
  int v13; // esi
  _DWORD *v14; // ecx
  int v15; // eax
  double v16; // st0
  double v17; // st2
  double v18; // st0
  double v19; // st1
  double v20; // st2
  double v21; // st3
  bool v22; // c0
  int v23; // eax
  double v24; // st0
  double v25; // st2
  double v26; // st0
  double v27; // st1
  double v28; // st2
  double v29; // st3
  bool v30; // c0
  double v31; // st0
  double v32; // st2
  double v33; // st0
  double v34; // st1
  double v35; // st2
  double v36; // st3
  bool v37; // c0
  int v38; // eax
  double v39; // st0
  double v40; // st2
  double v41; // st0
  double v42; // st1
  double v43; // st2
  double v44; // st3
  bool v45; // c0
  int v46; // eax
  double v47; // st0
  double v48; // st2
  double v49; // st0
  double v50; // st1
  double v51; // st2
  double v52; // st3
  bool v53; // c0
  int j; // esi
  int v55; // esi
  void *v56; // eax
  int v57; // edi
  int v58; // ebx
  int v59; // esi
  int v60; // esi
  int v61; // edi
  int k; // edi
  int v63; // edi
  _DWORD *v64; // esi
  int m; // edi
  _DWORD *n; // eax
  int v67; // edi
  int v68; // ebx
  int v69; // esi
  float v70; // [esp+Ch] [ebp-20h]
  int v71; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  unsigned int v73; // [esp+20h] [ebp-Ch]
  int v74; // [esp+24h] [ebp-8h]

  result = (int)a2;
  v3 = a2[2];
  v4 = a2[1];
  v71 = v3;
  if ( v4 )
  {
    v6 = sub_10073900((const char *)this);
    v7 = 0;
    this[8] = v6;
    for ( i = 0; v7 < v4; i = v7 )
    {
      v8 = *(_DWORD *)(v3 + 4 * v7);
      if ( (*(_DWORD *)(v8 + 64) & 0x20000000) != 0 )
      {
        v70 = *(float *)(v8 + 4);
        v9 = *(float *)(v8 + 8);
        v10 = *(float *)(v8 + 12);
        *(_DWORD *)(*(_DWORD *)(v3 + 4 * v7) + 64) |= 0x10000000u;
        v11 = v9;
        v12 = v70;
        *(_DWORD *)(*(_DWORD *)(v3 + 4 * v7) + 68) = 3;
        v13 = 0;
        if ( v4 >= 4 )
        {
          v14 = (_DWORD *)(v3 + 8);
          v73 = ((unsigned int)(v4 - 4) >> 2) + 1;
          v13 = 4 * v73;
          do
          {
            v15 = *(v14 - 2);
            v16 = *(float *)(v15 + 8) - v11;
            v17 = v16 * v16;
            v18 = *(float *)(v15 + 4) - v12;
            v19 = v17;
            v20 = *(float *)(v15 + 12) - v10;
            v21 = v18 * v18 + v19 + v20 * v20;
            if ( *(_DWORD *)(v15 + 60) == 3 )
              v22 = v21 < 2073600.0;
            else
              v22 = v21 < 518400.0;
            if ( v22 )
            {
              *(_DWORD *)(*(v14 - 2) + 64) |= 0x10000000u;
              *(_DWORD *)(*(v14 - 2) + 68) = 3;
            }
            v23 = *(v14 - 1);
            v24 = *(float *)(v23 + 8) - v11;
            v25 = v24 * v24;
            v26 = *(float *)(v23 + 4) - v12;
            v27 = v25;
            v28 = *(float *)(v23 + 12) - v10;
            v29 = v26 * v26 + v27 + v28 * v28;
            if ( *(_DWORD *)(v23 + 60) == 3 )
              v30 = v29 < 2073600.0;
            else
              v30 = v29 < 518400.0;
            if ( v30 )
            {
              *(_DWORD *)(*(v14 - 1) + 64) |= 0x10000000u;
              *(_DWORD *)(*(v14 - 1) + 68) = 3;
            }
            v31 = *(float *)(*v14 + 8) - v11;
            v32 = v31 * v31;
            v33 = *(float *)(*v14 + 4) - v12;
            v34 = v32;
            v35 = *(float *)(*v14 + 12) - v10;
            v36 = v33 * v33 + v34 + v35 * v35;
            if ( *(_DWORD *)(*v14 + 60) == 3 )
              v37 = v36 < 2073600.0;
            else
              v37 = v36 < 518400.0;
            if ( v37 )
            {
              *(_DWORD *)(*v14 + 64) |= 0x10000000u;
              *(_DWORD *)(*v14 + 68) = 3;
            }
            v38 = v14[1];
            v39 = *(float *)(v38 + 8) - v11;
            v40 = v39 * v39;
            v41 = *(float *)(v38 + 4) - v12;
            v42 = v40;
            v43 = *(float *)(v38 + 12) - v10;
            v44 = v41 * v41 + v42 + v43 * v43;
            if ( *(_DWORD *)(v38 + 60) == 3 )
              v45 = v44 < 2073600.0;
            else
              v45 = v44 < 518400.0;
            if ( v45 )
            {
              *(_DWORD *)(v14[1] + 64) |= 0x10000000u;
              *(_DWORD *)(v14[1] + 68) = 3;
            }
            v14 += 4;
            --v73;
          }
          while ( v73 );
          v7 = i;
        }
        for ( ; v13 < v4; ++v13 )
        {
          v46 = *(_DWORD *)(v3 + 4 * v13);
          v47 = *(float *)(v46 + 8) - v11;
          v48 = v47 * v47;
          v49 = *(float *)(v46 + 4) - v12;
          v50 = v48;
          v51 = *(float *)(v46 + 12) - v10;
          v52 = v49 * v49 + v50 + v51 * v51;
          if ( *(_DWORD *)(v46 + 60) == 3 )
            v53 = v52 < 2073600.0;
          else
            v53 = v52 < 518400.0;
          if ( v53 )
          {
            *(_DWORD *)(*(_DWORD *)(v3 + 4 * v13) + 64) |= 0x10000000u;
            *(_DWORD *)(*(_DWORD *)(v3 + 4 * v13) + 68) = 3;
          }
        }
      }
      ++v7;
    }
    for ( j = 0; j < v4; ++j )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4 * j) + 64) & 0x10000000) != 0 )
        sub_100889E0(this, a2, *(_DWORD *)(v3 + 4 * j));
    }
    v74 = a2[1];
    v55 = v74;
    sub_10052D00((unsigned __int16 *)this + 10, v74, 0);
    v56 = (void *)this[7];
    if ( v56 )
      memset(v56, 0, 4 * *((unsigned __int16 *)this + 11));
    v57 = this[3] - 1;
    if ( v57 >= 0 )
    {
      v58 = 12 * v57;
      do
      {
        v59 = *this;
        if ( *(_WORD *)(*this + v58 + 2) > 1u )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v59 + v58 + 8));
        *(_DWORD *)(v59 + v58 + 8) = 0;
        v58 -= 12;
        --v57;
      }
      while ( v57 >= 0 );
      v55 = v74;
      v3 = v71;
    }
    this[3] = 0;
    sub_1008A340(this, 0, v55, 0);
    if ( v55 > 0 )
    {
      v60 = 0;
      v61 = v74;
      do
      {
        sub_10052D00((unsigned __int16 *)(v60 + *this), v74, 0);
        v60 += 12;
        --v61;
      }
      while ( v61 );
      v55 = v74;
      v3 = v71;
    }
    for ( k = 0; k < v55; ++k )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4 * k) + 64) & 0x10000000) != 0 )
        sub_10088E20(this, (int)a2, *(_DWORD *)(v3 + 4 * k));
    }
    sub_10086C20(this);
    v63 = 0;
    if ( v55 > 0 )
    {
      do
      {
        v64 = *(_DWORD **)(v3 + 4 * v63);
        if ( (v64[16] & 0x10000000) != 0 )
        {
          v64[21] = 0;
          if ( (int)v64[20] >= 0 )
          {
            if ( v64[18] )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v64[18]);
              v64[18] = 0;
            }
            v64[19] = 0;
          }
          v64[22] = v64[18];
        }
        ++v63;
      }
      while ( v63 < v74 );
      v55 = v74;
    }
    for ( m = 0; m < v55; ++m )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v3 + 4 * m) + 64) & 0x10000000) != 0 )
        sub_10087500(this, (int)a2, *(int **)(v3 + 4 * m));
    }
    for ( n = (_DWORD *)sub_100709F0(&a2); n; n = (_DWORD *)sub_10070A20((int *)&a2) )
      sub_100700E0(n);
    v67 = this[3] - 1;
    if ( v67 >= 0 )
    {
      v68 = 12 * v67;
      do
      {
        v69 = *this;
        if ( *(_WORD *)(*this + v68 + 2) > 1u )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v69 + v68 + 8));
        *(_DWORD *)(v69 + v68 + 8) = 0;
        v68 -= 12;
        --v67;
      }
      while ( v67 >= 0 );
    }
    this[3] = 0;
    sub_10052D00((unsigned __int16 *)this + 10, 0, 0);
    return sub_100739B0();
  }
  return result;
}
