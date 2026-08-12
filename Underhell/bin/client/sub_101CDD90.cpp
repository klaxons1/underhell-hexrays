double __cdecl sub_101CDD90(int *a1, int a2, int a3, int a4, int *a5, int a6, int a7)
{
  int v7; // edx
  _DWORD *v9; // ecx
  double *v10; // edi
  int v11; // edx
  int v12; // eax
  int v13; // eax
  double *v14; // eax
  int v15; // edi
  double *v16; // ebx
  int v17; // ecx
  double *v18; // esi
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double *v23; // eax
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st6
  int v29; // esi
  int v30; // ecx
  double v31; // st5
  int v32; // edi
  double v33; // st4
  double v34; // st3
  int v35; // edx
  double v36; // st2
  double *v37; // eax
  double v38; // st1
  double *v39; // eax
  int v40; // ecx
  int v41; // edx
  double v42; // st7
  double v43; // st6
  int v44; // eax
  int v46; // [esp+10h] [ebp-28h]
  double *v47; // [esp+10h] [ebp-28h]
  double v48; // [esp+10h] [ebp-28h]
  double *v49; // [esp+1Ch] [ebp-1Ch]
  int v50; // [esp+1Ch] [ebp-1Ch]
  double *v51; // [esp+20h] [ebp-18h]
  int v52; // [esp+20h] [ebp-18h]
  double v53; // [esp+20h] [ebp-18h]
  int v54; // [esp+28h] [ebp-10h]
  int v55; // [esp+2Ch] [ebp-Ch]
  int v56; // [esp+30h] [ebp-8h]
  int v57; // [esp+34h] [ebp-4h]

  v7 = a2;
  if ( a2 > 0 )
  {
    v9 = &unk_10454B78;
    v10 = dbl_104567D8;
    v46 = a2;
    do
    {
      v11 = 0;
      do
      {
        v9 += 2;
        v12 = v11 + 2 * *a5 + *a5;
        ++v11;
        *(v9 - 2) = *(_DWORD *)(a3 + 8 * v12);
        *(v9 - 1) = *(_DWORD *)(a3 + 8 * v12 + 4);
        v13 = *a5;
        *(_DWORD *)v10 = *(_DWORD *)(a4 + 8 * *a5);
        *((_DWORD *)v10 + 1) = *(_DWORD *)(a4 + 8 * v13 + 4);
      }
      while ( v11 < 3 );
      ++a5;
      ++v10;
      --v46;
    }
    while ( v46 );
    v7 = a2;
  }
  dbl_10456340 = 0.0;
  dbl_10456328 = 0.0;
  v14 = (double *)((char *)&unk_10454B80 + 24 * v7);
  dbl_10455008 = 0.0;
  dbl_10455000 = 0.0;
  dbl_10454FF8 = 0.0;
  dbl_10456348 = 0.0;
  dbl_10456330 = 0.0;
  dbl_10455020 = 0.0;
  dbl_10455018 = 0.0;
  dbl_10455010 = 0.0;
  dbl_10456350 = 0.0;
  dbl_10456338 = 0.0;
  dbl_10455038 = 0.0;
  dbl_10455030 = 0.0;
  dbl_10455028 = 0.0;
  v15 = v7;
  v51 = v14;
  v49 = v14;
  while ( 1 )
  {
    v16 = v14;
    v47 = v14;
    while ( 1 )
    {
      v17 = a2;
      v18 = v14;
      while ( 1 )
      {
        v19 = -(dbl_10455028 * dbl_10455028) - dbl_10455030 * dbl_10455030 - dbl_10455038 * dbl_10455038;
        if ( dbl_103EDB00 * v19 <= dbl_10458C80 * dbl_10456338 )
        {
          dbl_10458C80 = v19;
          v16 = v47;
          dbl_103EDB00 = dbl_10456338;
          v54 = v15;
          v55 = v7;
          v56 = v17;
        }
        --v17;
        v18 -= 3;
        if ( v17 < v7 || *a1 < 3 )
          break;
        dbl_10455028 = dbl_10455028 + *(v18 - 1);
        dbl_10455030 = dbl_10455030 + *v18;
        dbl_10455038 = dbl_10455038 + v18[1];
        dbl_10456338 = (5.0 - (dbl_10456350 + dbl_10456350) - dbl_104567D8[v17]) * dbl_104567D8[v17] + dbl_10456338;
        dbl_10456350 = dbl_10456350 + dbl_104567D8[v17];
      }
      --v7;
      v16 -= 3;
      v47 = v16;
      if ( v7 < v15 )
        break;
      dbl_10455010 = dbl_10455010 + *(v16 - 1);
      v20 = dbl_10455018 + *v16;
      dbl_10455028 = dbl_10455010;
      dbl_10455018 = v20;
      v21 = dbl_10455020 + v16[1];
      dbl_10455030 = dbl_10455018;
      dbl_10455020 = v21;
      dbl_10455038 = v21;
      dbl_10456330 = (3.0 - (dbl_10456348 + dbl_10456348) - dbl_104567D8[v7]) * dbl_104567D8[v7] + dbl_10456330;
      v22 = dbl_10456348 + dbl_104567D8[v7];
      dbl_10456338 = dbl_10456330;
      dbl_10456348 = v22;
      v14 = v51;
      dbl_10456350 = v22;
    }
    --v15;
    v23 = v49 - 3;
    v49 -= 3;
    if ( v15 < 1 )
      break;
    dbl_10454FF8 = dbl_10454FF8 + *(v23 - 1);
    v24 = dbl_10455000 + *v23;
    dbl_10455010 = dbl_10454FF8;
    dbl_10455028 = dbl_10454FF8;
    dbl_10455000 = v24;
    v25 = dbl_10455008 + v23[1];
    dbl_10455018 = dbl_10455000;
    dbl_10455030 = dbl_10455000;
    dbl_10455008 = v25;
    dbl_10455020 = v25;
    dbl_10455038 = v25;
    dbl_10456328 = (1.0 - (dbl_10456340 + dbl_10456340) - dbl_104567D8[v15]) * dbl_104567D8[v15] + dbl_10456328;
    v26 = dbl_10456340 + dbl_104567D8[v15];
    dbl_10456330 = dbl_10456328;
    dbl_10456340 = v26;
    dbl_10456338 = dbl_10456328;
    dbl_10456348 = v26;
    v14 = v51;
    v7 = a2;
    *(_QWORD *)&dbl_10456350 = __PAIR64__(HIDWORD(dbl_10456340), LODWORD(dbl_10456348));
  }
  v57 = a2;
  v50 = (v56 != a2) + (v54 != v55) + (v55 != v56);
  if ( v50 == 1 && v56 != a2 )
  {
    if ( v55 == v56 )
    {
      v56 = a2;
    }
    else if ( v54 == v55 )
    {
      v57 = v54;
      v56 = v54;
    }
  }
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0;
  v30 = 0;
  dbl_10456350 = 0.0;
  v31 = 0.0;
  v52 = 0;
  v32 = 0;
  dbl_10455038 = 0.0;
  v33 = 0.0;
  dbl_10455030 = 0.0;
  v34 = 0.0;
  dbl_10455028 = 0.0;
  do
  {
    v35 = *(&v54 + v29);
    if ( v30 < v35 )
    {
      v36 = (double)v52;
      v37 = (double *)((char *)&unk_10454B80 + 24 * v30);
      do
      {
        v38 = v36 * dbl_104567D8[v30++];
        v37 += 3;
        v28 = v28 + v38;
        v27 = v27 + v38 * v36;
        v34 = v34 + v36 * *(v37 - 4);
        v33 = v33 + v36 * *(v37 - 3);
        v31 = v31 + v36 * *(v37 - 2);
      }
      while ( v30 < v35 );
    }
    v32 += v35 != a2;
    v52 = ++v29;
  }
  while ( v29 < 4 );
  dbl_10455028 = v34;
  dbl_10456350 = v28;
  dbl_10455030 = v33;
  dbl_10455038 = v31;
  v39 = &dbl_10455028;
  v40 = a6 - (_DWORD)&dbl_10455028;
  v41 = a7 - (_DWORD)&dbl_10455028;
  dbl_10456338 = v27 - v28 * v28;
  v48 = -v28;
  v53 = (double)v32 - v28;
  v42 = -(dbl_10455028 * dbl_10455028) - v33 * v33 - dbl_10455038 * dbl_10455038;
  do
  {
    v43 = v48 * *v39++;
    *(double *)((char *)v39 + v40 - 8) = v43 / dbl_10456338;
    *(double *)((char *)v39 + v40 + 16) = v53 * *(v39 - 1) / dbl_10456338;
    *(_DWORD *)((char *)v39 + v41 - 8) = *((_DWORD *)v39 - 2);
    *(_DWORD *)((char *)v39 + v41 - 4) = *((_DWORD *)v39 - 1);
  }
  while ( (int)v39 < (int)dbl_10455040 );
  v44 = 1;
  if ( v50 != 1 )
    v44 = v32;
  *a1 = v44;
  return v42 / dbl_10456338;
}
