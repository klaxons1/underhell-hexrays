_DWORD *__thiscall sub_103A8C40(unsigned int *this)
{
  bool v2; // zf
  unsigned int v4; // eax
  int v5; // esi
  int *v6; // ecx
  unsigned int v7; // eax
  double v8; // st7
  float *v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  float *v12; // edi
  float *v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  int v19; // edi
  int v20; // eax
  int v21; // eax
  float *v22; // esi
  double v23; // st4
  double v24; // st6
  double v25; // st4
  double v26; // st5
  double v27; // st6
  int v28; // esi
  int v29; // ebx
  float *v30; // eax
  int i; // ebx
  int v32; // esi
  double v33; // st4
  double v34; // st6
  double v35; // st4
  double v36; // st5
  double v37; // st6
  int v38; // esi
  int v39; // ecx
  float *v40; // eax
  float v41; // eax
  _DWORD *v42; // esi
  int v43; // eax
  int v44; // ebx
  float *v45; // eax
  double v46; // st4
  double v47; // st6
  double v48; // st4
  double v49; // st5
  double v50; // st6
  double v51; // st7
  float v52; // [esp+10h] [ebp-48h]
  int v53; // [esp+20h] [ebp-38h] BYREF
  int v54; // [esp+24h] [ebp-34h]
  int v55; // [esp+28h] [ebp-30h]
  int v56; // [esp+2Ch] [ebp-2Ch]
  int v57; // [esp+30h] [ebp-28h]
  float v58; // [esp+34h] [ebp-24h] BYREF
  float v59; // [esp+38h] [ebp-20h]
  float v60; // [esp+3Ch] [ebp-1Ch]
  float v61; // [esp+40h] [ebp-18h]
  _DWORD *v62; // [esp+44h] [ebp-14h]
  float v63; // [esp+48h] [ebp-10h]
  float v64; // [esp+4Ch] [ebp-Ch]
  unsigned int *v65; // [esp+50h] [ebp-8h]
  float v66; // [esp+54h] [ebp-4h]

  v2 = *((_BYTE *)this + 3880) == 0;
  v65 = this;
  if ( v2 )
    return 0;
  v4 = this[980];
  v63 = 16384.0;
  v5 = 0;
  v62 = 0;
  if ( v4 != -1 && (v6 = &off_1061BE18[4 * (v4 & 0xFFF) + 1], v7 = v4 >> 12, v6[1] == v7) && *v6 )
  {
    if ( v6[1] == v7 )
      v5 = *v6;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v58 = *(float *)(v5 + 580);
    v59 = *(float *)(v5 + 584);
    v60 = *(float *)(v5 + 588);
    v8 = 500.0;
  }
  else
  {
    v9 = (float *)(*(int (__thiscall **)(unsigned int *))(*this + 576))(this);
    v58 = *v9;
    v59 = v9[1];
    v60 = v9[2];
    v8 = 1500.0;
  }
  v2 = *((_BYTE *)this + 3881) == 0;
  v66 = v8;
  if ( v2 )
  {
    v19 = 0;
    v2 = *((_BYTE *)this + 3882) == 0;
    v53 = 0;
    v64 = v8 * v8;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    if ( v2 )
    {
      v20 = 1;
      for ( LODWORD(v66) = 1; v20 <= *(_DWORD *)(dword_106B31C8 + 20); v66 = *(float *)&v20 )
      {
        *(float *)&v21 = COERCE_FLOAT(sub_1025FB50(v20));
        v22 = (float *)v21;
        v61 = *(float *)&v21;
        if ( *(float *)&v21 != 0.0 )
        {
          if ( (*(_DWORD *)(v21 + 252) & 0x800) != 0 )
            sub_100DAE60(v21);
          v23 = v59 - v22[146];
          v24 = v23 * v23;
          v25 = v58 - v22[145];
          v26 = v24;
          v27 = v60 - v22[147];
          if ( v25 * v25 + v26 + v27 * v27 < v64 )
          {
            v28 = v19;
            if ( v19 + 1 > v54 )
            {
              sub_102ABFC0(&v53, v19 - v54 + 1);
              v19 = v56;
            }
            v29 = v53;
            v56 = ++v19;
            v57 = v53;
            if ( v19 - v28 - 1 > 0 )
              memcpy((void *)(v53 + 4 * v28 + 4), (const void *)(v53 + 4 * v28), 4 * (v19 - v28 - 1));
            v30 = (float *)(v29 + 4 * v28);
            if ( v30 )
              *v30 = v61;
          }
        }
        v20 = LODWORD(v66) + 1;
      }
    }
    v66 = COERCE_FLOAT(sub_1002A680(&dword_10690DF8));
    for ( i = 0; i < sub_1016BFB0(&dword_10690DF8); ++i )
    {
      v32 = *(_DWORD *)(LODWORD(v66) + 4 * i);
      if ( (unsigned int *)v32 != v65 )
      {
        if ( (*(_DWORD *)(v32 + 252) & 0x800) != 0 )
          sub_100DAE60(*(_DWORD *)(LODWORD(v66) + 4 * i));
        v33 = v59 - *(float *)(v32 + 584);
        v34 = v33 * v33;
        v35 = v58 - *(float *)(v32 + 580);
        v36 = v34;
        v37 = v60 - *(float *)(v32 + 588);
        if ( v35 * v35 + v36 + v37 * v37 < v64 )
        {
          v61 = *(float *)(LODWORD(v66) + 4 * i);
          v38 = v19;
          if ( v19 + 1 > v54 )
          {
            sub_102ABFC0(&v53, v19 - v54 + 1);
            v19 = v56;
          }
          v39 = v53;
          v56 = ++v19;
          v57 = v53;
          if ( v19 - v38 - 1 > 0 )
          {
            memcpy((void *)(v53 + 4 * v38 + 4), (const void *)(v53 + 4 * v38), 4 * (v19 - v38 - 1));
            v39 = v53;
          }
          v40 = (float *)(v39 + 4 * v38);
          if ( v40 )
            *v40 = v61;
        }
      }
    }
    v41 = 0.0;
    v66 = 0.0;
    if ( v19 > 0 )
    {
      do
      {
        v42 = *(_DWORD **)(v53 + 4 * LODWORD(v41));
        v43 = sub_100D7680((int)v42);
        if ( (v43 && (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 220))(v43) == 7
           || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v42 + 320))(v42))
          && (v42[64] & 0x8000) == 0 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v42 + 264))(v42) )
          {
            v44 = (int)v65;
            if ( (*(unsigned __int8 (__thiscall **)(unsigned int *, _DWORD *, int, _DWORD))(*v65 + 548))(
                   v65,
                   v42,
                   16449,
                   0) )
            {
              if ( (*(_DWORD *)(v44 + 252) & 0x800) != 0 )
                sub_100DAE60(v44);
              v45 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*v42 + 504))(v42, &v58);
              v46 = *(float *)(v44 + 584) - v45[1];
              v47 = v46 * v46;
              v48 = *(float *)(v44 + 580) - *v45;
              v49 = v47;
              v50 = *(float *)(v44 + 588) - v45[2];
              v52 = v48 * v48 + v49 + v50 * v50;
              v51 = off_10689708(v52);
              v61 = v51;
              if ( v51 < v63 && sub_103A4ED0((_DWORD *)v44, (int)v42) )
              {
                v62 = v42;
                v63 = v61;
              }
            }
          }
        }
        LODWORD(v41) = LODWORD(v66) + 1;
        v66 = v41;
      }
      while ( SLODWORD(v41) < v19 );
    }
    if ( v55 >= 0 && v53 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v53);
    return v62;
  }
  else
  {
    if ( *(int *)(dword_106B31C8 + 20) > 1 )
      return 0;
    v10 = sub_10261B20();
    v11 = (_DWORD *)v10;
    if ( !v10 )
      return 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 264))(v10)
      && (v11[64] & 0x8000) == 0
      && (v12 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*v11 + 504))(v11, &v58),
          v13 = (float *)(*(int (__thiscall **)(unsigned int *))(*this + 576))(this),
          v14 = v13[1] - v12[1],
          v15 = v14 * v14,
          v16 = *v13 - *v12,
          v17 = v15,
          v18 = v13[2] - v12[2],
          v66 * v66 >= v16 * v16 + v17 + v18 * v18) )
    {
      return v11;
    }
    else
    {
      return 0;
    }
  }
}
