void __thiscall sub_1033B970(float *this)
{
  bool v1; // zf
  float *v2; // edi
  int v3; // esi
  double v4; // st6
  double v5; // st5
  float v6; // eax
  int i; // esi
  const char *v8; // ebx
  _DWORD *v9; // eax
  float *v10; // eax
  float *v11; // edi
  _DWORD *v12; // eax
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  float *v16; // edi
  _DWORD *v17; // eax
  float *v18; // eax
  double v19; // st7
  int v20; // esi
  int j; // esi
  int v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // esi
  const char *v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  double v30; // st6
  double v31; // st5
  double v32; // st7
  float *v33; // eax
  _DWORD **v34; // edi
  _DWORD *v35; // eax
  int v36; // edi
  int v37; // eax
  double v38; // st7
  int v39; // eax
  int v40; // ebx
  int v41; // esi
  int v42; // edi
  int *v43; // ecx
  int k; // ebx
  int v45; // esi
  const char *v46; // edi
  double v47; // st6
  double v48; // st5
  int v49; // edi
  double v50; // st6
  double v51; // st5
  double v52; // st7
  int v53; // eax
  double v54; // st7
  int v55; // eax
  int v56; // edx
  int v57; // ebx
  int v58; // esi
  unsigned int v59; // edi
  int *v60; // ecx
  float v61; // ebx
  _DWORD **v62; // esi
  int v63; // edi
  int v64; // ebx
  _DWORD *v65; // edi
  float *v66; // esi
  bool v67; // c0
  bool v68; // c3
  void *v69; // eax
  char *v70; // eax
  int *v71; // ecx
  int v72; // ebx
  int v73; // eax
  float *v74; // esi
  float *v75; // eax
  double v76; // st4
  double v77; // st6
  double v78; // st4
  double v79; // st5
  double v80; // st6
  unsigned __int8 v81; // al
  char *v82; // eax
  _DWORD *v83; // edi
  int v84; // ebx
  int v85; // esi
  int v86; // eax
  char Buffer[256]; // [esp+24h] [ebp-1A8h] BYREF
  _DWORD v88[27]; // [esp+124h] [ebp-A8h] BYREF
  float v89[2]; // [esp+190h] [ebp-3Ch] BYREF
  int v90; // [esp+198h] [ebp-34h]
  float v91; // [esp+19Ch] [ebp-30h] BYREF
  int v92; // [esp+1A0h] [ebp-2Ch] BYREF
  int v93[2]; // [esp+1A4h] [ebp-28h] BYREF
  int v94; // [esp+1ACh] [ebp-20h]
  float v95; // [esp+1B0h] [ebp-1Ch]
  int *v96; // [esp+1B4h] [ebp-18h]
  float *v97; // [esp+1B8h] [ebp-14h]
  float v98; // [esp+1BCh] [ebp-10h] BYREF
  char v99; // [esp+1C3h] [ebp-9h]
  float v100; // [esp+1C4h] [ebp-8h]
  char ArgList[4]; // [esp+1C8h] [ebp-4h]

  v1 = *(_DWORD *)(dword_106B31C8 + 20) == 1;
  v2 = this;
  v97 = this;
  if ( v1 )
  {
    v3 = sub_10261B20();
    v90 = v3;
    if ( v3 )
    {
      if ( ((_DWORD)v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v4 = *(float *)(v3 + 584) - v2[146];
      v5 = *(float *)(v3 + 580) - v2[145];
      if ( v5 * v5 + v4 * v4 < 57600.0 )
        v2[1436] = *(float *)(dword_106B31C8 + 12);
      if ( *(float *)(dword_106B31C8 + 12) - flt_1066E9A4 > -0.001 )
      {
        flt_1066E9A4 = *(float *)(dword_106B31C8 + 12) + 2.0;
        v6 = COERCE_FLOAT(sub_100B0F90(&dword_10695280, "player_squad"));
        *(float *)ArgList = v6;
        if ( v6 != 0.0 )
        {
          v96 = &v92;
          v95 = 0.0;
          for ( i = sub_100B1560((_DWORD *)LODWORD(v6), &v91, 1); i; i = sub_100B1630(
                                                                           *(_DWORD **)ArgList,
                                                                           (int *)&v91,
                                                                           1) )
          {
            v8 = *(const char **)(i + 92);
            if ( !v8 )
              v8 = String;
            if ( v8 == sub_10019630(v2) )
            {
              v1 = *(_BYTE *)(i + 5973) == 0;
              v98 = *(float *)&i;
              if ( v1 )
              {
                if ( sub_10050FC0((_DWORD *)(i + 4508)) )
                {
                  if ( !sub_102FCDE0((_DWORD **)(i + 4508))
                    && *(int *)(i + 4620) > 0
                    && *(float *)(dword_106B31C8 + 12) - *(float *)(i + 4624) > 20.0 )
                  {
                    v9 = (_DWORD *)sub_10050FC0((_DWORD *)(i + 4508));
                    v100 = *((float *)sub_10019640(v9) + 2);
                    v10 = (float *)sub_10019640((_DWORD *)i);
                    if ( fabs(v100 - v10[2]) > 196.0
                      || (v11 = (float *)sub_10019640((_DWORD *)i),
                          v12 = (_DWORD *)sub_10050FC0((_DWORD *)(i + 4508)),
                          v13 = (float *)sub_10019640(v12),
                          v14 = *v13 - *v11,
                          v15 = v13[1] - v11[1],
                          v2 = v97,
                          v14 * v14 + v15 * v15 > 360000.0) )
                    {
                      if ( *(_DWORD *)(dword_106E640C + 48) && ((_DWORD)v2[59] & 0x1000) != 0 )
                      {
                        v16 = (float *)sub_10019640((_DWORD *)i);
                        v17 = (_DWORD *)sub_10050FC0((_DWORD *)(i + 4508));
                        v18 = (float *)sub_10019640(v17);
                        v89[0] = *v18 - *v16;
                        v89[1] = v18[1] - v16[1];
                        v19 = *(float *)(i + 4624);
                        v20 = *(_DWORD *)(i + 4620);
                        v100 = v19;
                        sub_10018D40(v89);
                        DevMsg(
                          "Player follower is lost (%d, %f, %d)\n",
                          v20,
                          *(float *)(dword_106B31C8 + 12) - v100,
                          (int)v19);
                        v2 = v97;
                      }
                      sub_1033B4C0(&v92, &v98);
                    }
                  }
                }
              }
            }
          }
          for ( j = 0; j < SLODWORD(v95); ++j )
            sub_10337C80((_DWORD *)v93[j - 1]);
        }
        v22 = 0;
        if ( *(_DWORD *)(dword_106E601C + 48) )
        {
          v23 = v90;
          if ( (*(_DWORD *)(v90 + 256) & 0x8000) == 0 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v90 + 264))(v90) )
            {
              v100 = COERCE_FLOAT(sub_1002A680(&dword_10690DF8));
              v24 = *(_DWORD *)(v23 + 252) >> 11;
              v93[0] = 0;
              v93[1] = 0;
              v94 = 0;
              v95 = 0.0;
              v96 = 0;
              if ( (v24 & 1) != 0 )
                sub_100DAE60(v23);
              v99 = 0;
              v98 = 0.0;
              if ( sub_1016BFB0(&dword_10690DF8) > 0 )
              {
                do
                {
                  v25 = *(_DWORD *)(LODWORD(v100) + 4 * v22);
                  if ( *(_DWORD *)(v25 + 2324) != 7 )
                  {
                    v26 = *(const char **)(v25 + 92);
                    if ( !v26 )
                      v26 = String;
                    if ( v26 == sub_10019630(v97) )
                    {
                      if ( sub_100296A0((_DWORD *)v25) )
                      {
                        v27 = sub_10339720(v93);
                        v28 = v93[0] + 16 * v27;
                        *(_DWORD *)v28 = v25;
                        *(_BYTE *)(v28 + 4) = 1;
                        *(float *)(v28 + 8) = 0.0;
                        *(_DWORD *)(v28 + 12) = sub_10338B60(*(_DWORD **)(v25 + 2796), v25);
                      }
                      else
                      {
                        if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
                          sub_100DAE60(v25);
                        v29 = v90;
                        v30 = *(float *)(v90 + 584) - *(float *)(v25 + 584);
                        v31 = *(float *)(v90 + 580) - *(float *)(v25 + 580);
                        v32 = v31 * v31 + v30 * v30;
                        *(float *)ArgList = v32;
                        if ( (v32 <= 186624.0
                           || 0.0 != *(float *)(v25 + 5736)
                           && *(float *)(dword_106B31C8 + 12) - *(float *)(v25 + 5736) <= 60.0
                           || *(float *)(v25 + 5744) != 0.0
                           && *(float *)(dword_106B31C8 + 12) - *(float *)(v25 + 5744) <= 15.0)
                          && sub_10335530((_DWORD *)v25) )
                        {
                          if ( sub_10023D10((_DWORD *)v25, 32)
                            || (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v25 + 548))(
                                 v25,
                                 v29,
                                 16449,
                                 0)
                            && (sub_10023D10((_DWORD *)v25, 55)
                             || *(float *)ArgList < 20736.0
                             && (v91 = *(float *)(v29 + 588),
                                 v33 = (float *)sub_10019640((_DWORD *)v25),
                                 fabs(v91 - v33[2]) < 60.0)) )
                          {
                            v34 = *(_DWORD ***)(v25 + 2596);
                            v35 = sub_10019640((_DWORD *)v25);
                            v36 = sub_1008E9F0(v34, (int)v35, v29 + 580, v29, 60.0, -1, 1);
                            sub_1008DB10(*((_DWORD **)v97 + 649), v36);
                            if ( v36 )
                            {
                              sub_100A6450(v88);
                              sub_100A61F0((int)v88, v36, 0);
                              v37 = sub_10339720(v93);
                              v38 = *(float *)ArgList;
                              v39 = v93[0] + 16 * v37;
                              *(_DWORD *)v39 = v25;
                              *(_BYTE *)(v39 + 4) = 0;
                              *(float *)(v39 + 8) = v38;
                              *(_DWORD *)(v39 + 12) = -1;
                              v99 = 1;
                              sub_100A61E0(v88);
                            }
                          }
                        }
                      }
                    }
                  }
                  v22 = ++LODWORD(v98);
                }
                while ( v22 < sub_1016BFB0(&dword_10690DF8) );
                if ( v99 )
                {
                  if ( SLODWORD(v95) > 0 )
                  {
                    v40 = v93[0];
                    v98 = v95;
                    do
                    {
                      v41 = *(_DWORD *)v40;
                      v42 = *(_DWORD *)(*(_DWORD *)v40 + 248) | 0x100000;
                      if ( *(_DWORD *)(*(_DWORD *)v40 + 248) != v42 )
                      {
                        if ( *(_BYTE *)(v41 + 84) )
                        {
                          *(_BYTE *)(v41 + 88) |= 1u;
                        }
                        else
                        {
                          v43 = *(int **)(v41 + 24);
                          if ( v43 )
                            sub_100194B0(v43, 248);
                        }
                        *(_DWORD *)(v41 + 248) = v42;
                      }
                      v40 += 16;
                      --LODWORD(v98);
                    }
                    while ( v98 != 0.0 );
                    if ( SLODWORD(v95) > 0 )
                    {
                      *(float *)ArgList = 0.0;
                      v98 = v95;
                      do
                      {
                        if ( *(_DWORD *)(*(_DWORD *)ArgList + v93[0] + 12) == -1 )
                        {
                          for ( k = 0; k < sub_1016BFB0(&dword_10690DF8); ++k )
                          {
                            v45 = *(_DWORD *)(LODWORD(v100) + 4 * k);
                            if ( *(_DWORD *)(v45 + 2324) != 7 )
                            {
                              v46 = *(const char **)(v45 + 92);
                              if ( !v46 )
                                v46 = String;
                              if ( v46 == sub_10019630(v97) && (*(_DWORD *)(v45 + 248) & 0x100000) == 0 )
                              {
                                if ( (*(_DWORD *)(v45 + 252) & 0x800) != 0 )
                                  sub_100DAE60(v45);
                                v47 = *(float *)(v90 + 584) - *(float *)(v45 + 584);
                                v48 = *(float *)(v90 + 580) - *(float *)(v45 + 580);
                                if ( v48 * v48 + v47 * v47 <= 186624.0 )
                                {
                                  if ( (*(_DWORD *)(v45 + 252) & 0x800) != 0 )
                                    sub_100DAE60(v45);
                                  v49 = *(_DWORD *)(*(_DWORD *)ArgList + v93[0]);
                                  if ( (*(_DWORD *)(v49 + 252) & 0x800) != 0 )
                                    sub_100DAE60(*(_DWORD *)(*(_DWORD *)ArgList + v93[0]));
                                  v50 = *(float *)(v49 + 584) - *(float *)(v45 + 584);
                                  v51 = *(float *)(v49 + 580) - *(float *)(v45 + 580);
                                  v52 = v51 * v51 + v50 * v50;
                                  v91 = v52;
                                  if ( v52 <= 331776.0
                                    && sub_10335530((_DWORD *)v45)
                                    && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v45 + 548))(
                                         v45,
                                         v90,
                                         16449,
                                         0) )
                                  {
                                    v53 = sub_10339720(v93);
                                    v54 = v91;
                                    v55 = v93[0] + 16 * v53;
                                    *(_DWORD *)v55 = v45;
                                    *(_BYTE *)(v55 + 4) = 0;
                                    *(float *)(v55 + 8) = v54;
                                    *(_DWORD *)(v55 + 12) = -1;
                                    sub_10035270(v45, v56, 0x100000);
                                  }
                                }
                              }
                            }
                          }
                        }
                        *(_DWORD *)ArgList += 16;
                        --LODWORD(v98);
                      }
                      while ( v98 != 0.0 );
                      if ( SLODWORD(v95) > 0 )
                      {
                        v57 = v93[0];
                        v100 = v95;
                        do
                        {
                          v58 = *(_DWORD *)v57;
                          v59 = *(_DWORD *)(*(_DWORD *)v57 + 248) & 0xFFEFFFFF;
                          if ( *(_DWORD *)(*(_DWORD *)v57 + 248) != v59 )
                          {
                            if ( *(_BYTE *)(v58 + 84) )
                            {
                              *(_BYTE *)(v58 + 88) |= 1u;
                            }
                            else
                            {
                              v60 = *(int **)(v58 + 24);
                              if ( v60 )
                                sub_100194B0(v60, 248);
                            }
                            *(_DWORD *)(v58 + 248) = v59;
                          }
                          v57 += 16;
                          --LODWORD(v100);
                        }
                        while ( v100 != 0.0 );
                      }
                    }
                  }
                  if ( SLODWORD(v95) <= 4 )
                  {
                    v61 = v95;
                  }
                  else
                  {
                    sub_10338040(v93, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10334280);
                    v61 = v95;
                    if ( SLODWORD(v95) > 4 )
                    {
                      v62 = (_DWORD **)(v93[0] + 64);
                      v63 = LODWORD(v95) - 4;
                      do
                      {
                        if ( sub_100296A0(*v62) )
                          sub_10337C80(*v62);
                        v62 += 4;
                        --v63;
                      }
                      while ( v63 );
                    }
                  }
                  if ( v61 != 0.0 )
                  {
                    v64 = 0;
                    v65 = 0;
                    v100 = 3.4028235e38;
                    *(float *)ArgList = 0.0;
                    if ( SLODWORD(v95) > 0 )
                    {
                      v66 = (float *)v93[0];
                      do
                      {
                        if ( v64 >= 4 )
                          break;
                        if ( !sub_100296A0(*(_DWORD **)v66) )
                        {
                          sub_10337BF0(*(_DWORD **)v66);
                          v67 = v100 < (double)v66[2];
                          v68 = v100 == v66[2];
                          ++*(_DWORD *)ArgList;
                          if ( !v67 && !v68 )
                          {
                            v65 = *(_DWORD **)v66;
                            v100 = v66[2];
                          }
                        }
                        ++v64;
                        v66 += 4;
                      }
                      while ( v64 < SLODWORD(v95) );
                      if ( v65 )
                      {
                        v69 = (void *)(*(int (__thiscall **)(_DWORD *))(*v65 + 1656))(v65);
                        if ( sub_100AFBB0(v69, (int)"TLK_JOINPLAYER") )
                        {
                          v71 = (int *)v65[699];
                          if ( v71 )
                            v72 = sub_100B16F0(v71, 1);
                          else
                            v72 = 1;
                          if ( *(int *)(dword_106B31C8 + 20) > 1 )
                            goto LABEL_124;
                          v73 = sub_10261B20();
                          if ( !v73 )
                            goto LABEL_124;
                          v74 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v73 + 576))(v73);
                          v75 = (float *)(*(int (__thiscall **)(_DWORD *))(*v65 + 576))(v65);
                          v76 = v75[1] - v74[1];
                          v77 = v76 * v76;
                          v78 = *v75 - *v74;
                          v79 = v77;
                          v80 = v75[2] - v74[2];
                          if ( v78 * v78 + v79 + v80 * v80 > 147456.0 )
                            v81 = 1;
                          else
LABEL_124:
                            v81 = 0;
                          v82 = sub_1001E280(Buffer, "numselected:%d,useradio:%d%s", v72, v81, String);
                          (*(void (__thiscall **)(_DWORD *, const char *, char *, _DWORD, _DWORD, _DWORD))(*v65 + 2344))(
                            v65,
                            "TLK_STARTFOLLOW",
                            v82,
                            0,
                            0,
                            0);
                        }
                        else
                        {
                          v70 = sub_1001E280(Buffer, "numjoining:%d", *(_DWORD *)ArgList);
                          sub_10335B60(v65, (int)"TLK_JOINPLAYER", v70);
                        }
                        v83 = (_DWORD *)v93[0];
                        v84 = LODWORD(v95);
                        v85 = 0;
                        do
                        {
                          if ( v85 >= 4 )
                            break;
                          v86 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v83 + 1656))(*v83);
                          sub_100B0060(v86, "TLK_JOINPLAYER", 0, 1);
                          ++v85;
                          v83 += 4;
                        }
                        while ( v85 < v84 );
                      }
                    }
                  }
                }
              }
              if ( v94 >= 0 )
              {
                if ( v93[0] )
                  (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v93[0]);
              }
            }
          }
        }
      }
    }
  }
}
