void __cdecl sub_101CCD30(_DWORD *a1)
{
  int v1; // ebx
  double *v2; // edx
  double *v3; // ecx
  double v4; // st7
  double *v5; // edx
  int v6; // ecx
  int v7; // edi
  double *v8; // esi
  double v9; // st7
  int v10; // edi
  int i; // eax
  double v12; // st7
  int v13; // ecx
  int v14; // edx
  double v15; // st5
  double v16; // st6
  int v17; // ecx
  int v18; // edx
  double *v19; // esi
  int v20; // esi
  int v21; // ecx
  double *v22; // eax
  double v23; // st7
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // edx
  int v27; // ebx
  double *v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // esi
  bool v33; // zf
  bool v34; // cc
  BOOL v35; // eax
  int j; // esi
  int k; // ecx
  double *v38; // edx
  __int16 v39; // fps
  double v40; // st7
  bool v41; // c0
  char v42; // c2
  bool v43; // c3
  _DWORD *v44; // eax
  int v45; // esi
  int v46; // esi
  int v47; // ebx
  double *v48; // edx
  double *v49; // ecx
  double *v50; // eax
  double v51; // st7
  _DWORD *v52; // ebx
  int v53; // eax
  _DWORD *v54; // ecx
  int v55; // esi
  int v56; // [esp-20h] [ebp-F70h]
  _OWORD *v57; // [esp+10h] [ebp-F40h]
  _OWORD *v58; // [esp+10h] [ebp-F40h]
  _OWORD *v59; // [esp+10h] [ebp-F40h]
  int v60; // [esp+14h] [ebp-F3Ch]
  int v61; // [esp+14h] [ebp-F3Ch]
  int v62; // [esp+14h] [ebp-F3Ch]
  int v63; // [esp+18h] [ebp-F38h]
  int v64; // [esp+18h] [ebp-F38h]
  int v65; // [esp+1Ch] [ebp-F34h]
  double *v66; // [esp+20h] [ebp-F30h]
  int v67; // [esp+20h] [ebp-F30h]
  _OWORD *v68; // [esp+24h] [ebp-F2Ch]
  _OWORD *v69; // [esp+24h] [ebp-F2Ch]
  int v70; // [esp+28h] [ebp-F28h]
  int v71; // [esp+28h] [ebp-F28h]
  _OWORD *v72; // [esp+2Ch] [ebp-F24h]
  _OWORD *v73; // [esp+2Ch] [ebp-F24h]
  int v74; // [esp+30h] [ebp-F20h]
  int v75; // [esp+30h] [ebp-F20h]
  int v76; // [esp+34h] [ebp-F1Ch]
  int v77; // [esp+34h] [ebp-F1Ch]
  double *v78; // [esp+38h] [ebp-F18h]
  int v79; // [esp+3Ch] [ebp-F14h]
  double v80; // [esp+40h] [ebp-F10h] BYREF
  double *v81; // [esp+4Ch] [ebp-F04h]
  _DWORD v82[96]; // [esp+50h] [ebp-F00h] BYREF
  _OWORD v83[24]; // [esp+1D0h] [ebp-D80h] BYREF
  _OWORD v84[192]; // [esp+350h] [ebp-C00h] BYREF

  v65 = -1;
  v60 = 1;
  if ( !a1 )
    return;
  v1 = *a1;
  v79 = *a1;
  if ( !*a1 )
    return;
  v2 = (double *)(a1 + 290);
  v80 = 1.0 / (double)v79;
  dbl_10456130 = v80;
  v3 = dbl_10454248;
  do
  {
    if ( *v2 >= 0.0 )
      v4 = *v2;
    else
      v4 = 0.0;
    *v3++ = v4;
    ++v2;
  }
  while ( (int)v3 < (int)&dbl_10454260 );
  if ( byte_1044FA18 )
  {
    a1[297] = 4;
    a1[296] = 4;
  }
  v5 = (double *)(a1 + 2);
  v6 = 0;
  v66 = (double *)(a1 + 2);
  do
  {
    LODWORD(dbl_10458480[v6]) = 0;
    HIDWORD(dbl_10458480[v6]) = 0;
    if ( v1 > 0 )
    {
      v7 = v1;
      LOBYTE(v1) = v60;
      v8 = &dbl_10458800[v6];
      do
      {
        v9 = *v5 * dbl_10454248[v6];
        v1 = (fabs(*v5 - *v66) < 0.00048828125) & (unsigned __int8)v1;
        v5 += 3;
        v8 += 3;
        --v7;
        *(v8 - 3) = v9;
        dbl_10458480[v6] = v9 + dbl_10458480[v6];
      }
      while ( v7 );
      v60 = v1;
      v1 = v79;
    }
    ++v6;
    v5 = ++v66;
  }
  while ( v6 < 3 );
  v10 = 0;
  if ( v60 )
  {
    LODWORD(v80) = a1[296];
    sub_101CEE40(&v80, v1, dbl_10458800, dbl_10454248, a1 + 298, a1 + 304);
    a1[297] = LODWORD(v80);
    return;
  }
  for ( i = 0; i < 3; dbl_104584E8[i] = v16 )
  {
    v12 = v80 * dbl_10458480[i];
    dbl_10458480[i] = v12;
    if ( v1 > 0 )
    {
      v13 = i * 8;
      v14 = v1;
      do
      {
        v15 = *(double *)((char *)dbl_10458800 + v13) - v12;
        v13 += 24;
        --v14;
        *(double *)((char *)&dbl_10455C98 + v13) = v15;
      }
      while ( v14 );
    }
    dbl_104584D8[i] = -v12;
    v16 = dbl_10454248[i++] - v12;
  }
  v74 = 0;
  v67 = 0;
  if ( v1 > 0 )
  {
    v17 = 0;
    do
    {
      v18 = 0;
      if ( v10 > 0 )
      {
        v19 = (double *)dword_10456360;
        do
        {
          if ( *(v19 - 1) == dbl_10458800[v17] && *v19 == dbl_10458808[v17] && v19[1] == dbl_10458810[v17] )
            break;
          ++v18;
          v19 += 3;
        }
        while ( v18 < v10 );
      }
      if ( v18 == v10 )
      {
        v20 = LODWORD(dbl_10458800[v17]);
        LODWORD(dbl_10456148[v18]) = 0;
        dword_10456358[6 * v18] = v20;
        dword_1045635C[6 * v18] = HIDWORD(dbl_10458800[v17]);
        dword_10456360[6 * v18] = LODWORD(dbl_10458808[v17]);
        dword_10456364[6 * v18] = HIDWORD(dbl_10458808[v17]);
        dword_10456368[6 * v18] = LODWORD(dbl_10458810[v17]);
        dword_1045636C[6 * v18] = HIDWORD(dbl_10458810[v17]);
        LODWORD(dbl_104546F8[3 * v18]) = LODWORD(dbl_10455CB0[v17]);
        HIDWORD(dbl_104546F8[3 * v18]) = HIDWORD(dbl_10455CB0[v17]);
        LODWORD(dbl_10454700[3 * v18]) = LODWORD(dbl_10455CB8[v17]);
        HIDWORD(dbl_10454700[3 * v18]) = HIDWORD(dbl_10455CB8[v17]);
        LODWORD(dbl_10454708[3 * v18]) = LODWORD(dbl_10455CC0[v17]);
        HIDWORD(dbl_10454708[3 * v18]) = HIDWORD(dbl_10455CC0[v17]);
        HIDWORD(dbl_10456148[v18]) = 1072693248;
        ++v10;
      }
      else
      {
        dbl_104546F8[3 * v18] = dbl_10455CB0[v17] + dbl_104546F8[3 * v18];
        dbl_10454700[3 * v18] = dbl_10455CB8[v17] + dbl_10454700[3 * v18];
        dbl_10454708[3 * v18] = dbl_10454708[3 * v18] + dbl_10455CC0[v17];
        dbl_10456148[v18] = dbl_10456148[v18] + 1.0;
      }
      v17 += 3;
      v82[v74++ + 48] = v18;
    }
    while ( v74 < v1 );
    v67 = v10;
  }
  v21 = 0;
  if ( v10 > 0 )
  {
    v22 = dbl_10454700;
    do
    {
      v23 = dbl_10456130 * dbl_10456148[v21++];
      v22 += 3;
      dbl_10456140[v21] = v23;
      *(v22 - 4) = dbl_10456130 * *(v22 - 4);
      *(v22 - 3) = dbl_10456130 * *(v22 - 3);
      *(v22 - 2) = dbl_10456130 * *(v22 - 2);
    }
    while ( v21 < v10 );
  }
  if ( v10 == 2 && !byte_1044FA18 )
  {
    v56 = a1[296];
    a1[297] = 2;
    sub_101CF390(a1 + 297, v56, 2, dword_10456358, dbl_10456148, dbl_10454248, dword_10456358, a1 + 298, v82);
    v24 = 0;
    if ( v1 > 0 )
    {
      v25 = a1 + 304;
      do
      {
        v26 = v82[v24++ + 48];
        *v25++ = v82[v26];
      }
      while ( v24 < v1 );
    }
    return;
  }
  v63 = 0;
  v76 = 0;
  sub_101CD6C0(v1, dbl_10455CB0, &unk_10455208);
  sub_101CDBD0(v10, dword_10456358, &unk_10455208, v84, 0);
  v27 = v79;
  v75 = 0;
  v57 = v83;
  v78 = dbl_104585A0;
  v81 = &v80;
  do
  {
    v61 = 16;
    do
    {
      v28 = v81;
      *(_DWORD *)v81 = a1[296] - 1;
      if ( v75 + v61 == 17 )
      {
        sub_101CDAC0(v10, dword_10456358, &unk_10455208);
        v29 = v63;
      }
      else
      {
        v29 = v63;
        v65 = v75;
        dbl_10456318[v75] = sub_101CDD90(v28, v10, dbl_104546F8, dbl_10456148, &v84[12 * v63], v78, &unk_10455208);
      }
      v30 = (v29 + 1) % 16;
      v63 = v30;
      v70 = 0;
      v76 |= v30 == 0;
      v72 = &v84[12 * v30];
      while ( 1 )
      {
        sub_101CDBD0(v10, dword_10456358, &unk_10455208, v72, v70);
        v31 = v63 - 1;
        if ( v63 - 1 >= 0 )
        {
          v68 = &v84[12 * v31];
          while ( 1 )
          {
            v27 = sub_101CDD20(v10, v68, v72);
            if ( v27 )
              goto LABEL_63;
            --v31;
            v68 -= 12;
            if ( v31 < 0 )
              goto LABEL_57;
          }
        }
        if ( !v27 )
          break;
LABEL_63:
        if ( v61 )
        {
          if ( ++v70 < 2 )
            continue;
        }
        goto LABEL_65;
      }
LABEL_57:
      if ( v76 )
      {
        v32 = v63 + 1;
        if ( v63 + 1 < 16 )
        {
          v69 = &v84[12 * v32];
          do
          {
            v27 = sub_101CDD20(v10, v69, v72);
            if ( v27 )
              goto LABEL_63;
            ++v32;
            v69 += 12;
          }
          while ( v32 < 16 );
        }
      }
LABEL_65:
      v33 = v61-- == 0;
    }
    while ( !v33 && !v27 );
    if ( v10 > 0 )
    {
      qmemcpy(v57, &v84[12 * v63], 4 * v67);
      v10 = v67;
    }
    v81 = (double *)((char *)v81 + 4);
    v34 = (int)(v78 + 6) < (int)&dbl_10458600;
    ++v75;
    v78 += 6;
    v57 += 12;
  }
  while ( v34 );
  if ( v65 == 1 )
    v65 = dbl_10456318[0] >= dbl_10456320;
  v35 = 0;
  for ( j = 0; j < 2; ++j )
  {
    for ( k = 0; k < 3; ++k )
      v35 = v35
         || (v38 = &dbl_104585A0[4 * v65 + 2 * j + 2 * v65 + k + j], *v38 < dbl_104584D8[k])
         || (v40 = *v38, v41 = v40 < dbl_104584F0[k], v42 = 0, v43 = v40 == dbl_104584F0[k], (v39 & 0x4100) == 0);
  }
  if ( v35 )
  {
    if ( v10 > 0 )
    {
      qmemcpy(v84, &v83[12 * v65], 4 * v67);
      v10 = v67;
    }
    v62 = 8;
    v64 = 0;
    v77 = 0;
    while ( 1 )
    {
      v44 = (_DWORD *)&v80 + v65;
      *v44 = a1[296] - 1;
      dbl_10456318[v65] = sub_101CE430(
                            v44,
                            v10,
                            dbl_104546F8,
                            dbl_10456148,
                            &v84[12 * v64],
                            dbl_104584D8,
                            &dbl_104585A0[6 * v65],
                            &unk_10455208);
      v64 = (v64 + 1) % 16;
      v77 |= v64 == 0;
      v71 = 0;
      v73 = &v84[12 * v64];
      while ( 1 )
      {
        sub_101CDBD0(v10, dword_10456358, &unk_10455208, v73, v71);
        v45 = v64 - 1;
        if ( v64 - 1 >= 0 )
        {
          v58 = &v84[12 * v45];
          while ( 1 )
          {
            v27 = sub_101CDD20(v10, v58, v73);
            if ( v27 )
              goto LABEL_98;
            --v45;
            v58 -= 12;
            if ( v45 < 0 )
              goto LABEL_92;
          }
        }
        if ( !v27 )
          break;
LABEL_98:
        if ( ++v71 >= 2 )
          goto LABEL_99;
      }
LABEL_92:
      if ( v77 )
      {
        v46 = v64 + 1;
        if ( v64 + 1 < 16 )
          break;
      }
LABEL_99:
      v33 = v62-- == 0;
      if ( v33 || v27 )
        goto LABEL_101;
    }
    v59 = &v84[12 * v46];
    while ( 1 )
    {
      v27 = sub_101CDD20(v10, v59, v73);
      if ( v27 )
        goto LABEL_98;
      ++v46;
      v59 += 12;
      if ( v46 >= 16 )
        goto LABEL_99;
    }
  }
LABEL_101:
  v47 = 2;
  v48 = (double *)((char *)&unk_104585D0 - 48 * v65);
  v49 = &dbl_104585A0[6 * v65];
  do
  {
    v50 = dbl_10458480;
    do
    {
      v51 = *v50++ + *v49++;
      *v48++ = v51;
    }
    while ( (int)v50 < (int)&dbl_10458498 );
    --v47;
  }
  while ( v47 );
  v52 = a1 + 297;
  a1[297] = *((_DWORD *)&v80 + v65) + 1;
  if ( byte_1044FA18 )
    *v52 = 4;
  sub_101CF390(
    v52,
    a1[296],
    v10,
    dword_10456358,
    dbl_10456148,
    dbl_10454248,
    (char *)&unk_104585D0 - 48 * v65,
    a1 + 298,
    v82);
  if ( byte_1044FA18 && *v52 != 4 )
    *v52 = 4;
  v53 = 0;
  if ( v79 > 0 )
  {
    v54 = a1 + 304;
    do
    {
      v55 = v82[v53++ + 48];
      *v54++ = v82[v55];
    }
    while ( v53 < v79 );
  }
}
