int __cdecl sub_101C52F0(_DWORD *a1, int a2, _DWORD *a3, _WORD *a4, int a5, int a6)
{
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // ecx
  unsigned int v9; // eax
  int i; // edx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int j; // eax
  int result; // eax
  int v15; // edx
  int k; // eax
  int v17; // ebx
  _DWORD *v18; // edi
  int v19; // esi
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  double v23; // st7
  int v24; // esi
  int v25; // edi
  int v26; // eax
  _BYTE *v27; // edi
  int jj; // eax
  unsigned int v29; // edi
  _DWORD *v30; // esi
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  _DWORD *v38; // esi
  char v39; // di
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  int v46; // edi
  unsigned __int8 *v47; // esi
  int v48; // eax
  unsigned __int8 *v49; // eax
  unsigned int v50; // ecx
  double *v51; // ecx
  bool v52; // cc
  int v53; // edi
  int v54; // eax
  int mm; // edx
  int v56; // eax
  unsigned __int8 *v57; // ecx
  double *v58; // eax
  int v59; // edi
  int v60; // ecx
  char *v61; // edx
  int v62; // eax
  unsigned int v63; // esi
  double *v64; // edx
  int v65; // eax
  double v66; // st7
  unsigned int v67; // ebx
  unsigned int v68; // eax
  double *v69; // esi
  int v70; // ebx
  int nn; // edx
  int v72; // ecx
  unsigned int v73; // edi
  char *v74; // esi
  int v75; // eax
  int v76; // edx
  int v77; // ecx
  unsigned int v78; // edi
  double *v79; // esi
  int i1; // edx
  unsigned int v81; // eax
  int v82; // ecx
  _DWORD *v83; // eax
  int v84; // ecx
  int v85; // ecx
  char *v86; // eax
  __int16 v87; // dx
  unsigned __int16 v88; // dx
  unsigned __int16 v89; // cx
  bool v90; // cf
  int v91; // eax
  __int16 v92; // ax
  int v93; // ebx
  _DWORD *v94; // esi
  int *v95; // edx
  int v96; // eax
  int v97; // edi
  int v98; // edx
  int v99; // [esp+18h] [ebp-888h]
  int v100; // [esp+18h] [ebp-888h]
  int m; // [esp+18h] [ebp-888h]
  int v102; // [esp+18h] [ebp-888h]
  int v103; // [esp+18h] [ebp-888h]
  int v104; // [esp+18h] [ebp-888h]
  int v105; // [esp+18h] [ebp-888h]
  int v106; // [esp+18h] [ebp-888h]
  int v107; // [esp+1Ch] [ebp-884h]
  int v108; // [esp+1Ch] [ebp-884h]
  int n; // [esp+1Ch] [ebp-884h]
  int kk; // [esp+1Ch] [ebp-884h]
  int v111; // [esp+1Ch] [ebp-884h]
  int v112; // [esp+1Ch] [ebp-884h]
  int v113; // [esp+1Ch] [ebp-884h]
  int *v114; // [esp+1Ch] [ebp-884h]
  int ii; // [esp+20h] [ebp-880h]
  int v116; // [esp+20h] [ebp-880h]
  int v117; // [esp+20h] [ebp-880h]
  int v118; // [esp+20h] [ebp-880h]
  int v119; // [esp+20h] [ebp-880h]
  int v120; // [esp+20h] [ebp-880h]
  int v121; // [esp+20h] [ebp-880h]
  int v122; // [esp+20h] [ebp-880h]
  int v123; // [esp+24h] [ebp-87Ch]
  int v124; // [esp+24h] [ebp-87Ch]
  int v125; // [esp+24h] [ebp-87Ch]
  int v126; // [esp+28h] [ebp-878h]
  char *v127; // [esp+28h] [ebp-878h]
  unsigned int v128; // [esp+2Ch] [ebp-874h]
  _WORD *v129; // [esp+30h] [ebp-870h]
  int v130; // [esp+34h] [ebp-86Ch]
  int v131; // [esp+38h] [ebp-868h]
  int v132; // [esp+3Ch] [ebp-864h]
  _DWORD *v133; // [esp+40h] [ebp-860h]
  int v134; // [esp+44h] [ebp-85Ch]
  int v135; // [esp+48h] [ebp-858h]
  int v136; // [esp+4Ch] [ebp-854h]
  int v137; // [esp+50h] [ebp-850h]
  _DWORD *v138; // [esp+54h] [ebp-84Ch]
  int v139; // [esp+58h] [ebp-848h]
  _DWORD v140[3]; // [esp+5Ch] [ebp-844h] BYREF
  int v141; // [esp+68h] [ebp-838h]
  unsigned int v142; // [esp+6Ch] [ebp-834h]
  int v143; // [esp+70h] [ebp-830h]
  unsigned int v144; // [esp+74h] [ebp-82Ch]
  __int64 v145; // [esp+78h] [ebp-828h]
  __int64 v146; // [esp+80h] [ebp-820h]
  __int64 v147; // [esp+88h] [ebp-818h]
  __int64 v148; // [esp+90h] [ebp-810h]
  __int64 v149; // [esp+98h] [ebp-808h]
  __int64 v150; // [esp+A0h] [ebp-800h]
  __int64 v151; // [esp+A8h] [ebp-7F8h]
  __int64 v152; // [esp+B0h] [ebp-7F0h]
  __int64 v153; // [esp+B8h] [ebp-7E8h]
  __int64 v154; // [esp+C0h] [ebp-7E0h]
  _DWORD v155[48]; // [esp+C8h] [ebp-7D8h] BYREF
  _DWORD v156[51]; // [esp+188h] [ebp-718h] BYREF
  int v157; // [esp+254h] [ebp-64Ch]
  int v158; // [esp+258h] [ebp-648h]
  int v159; // [esp+25Ch] [ebp-644h]
  _DWORD v160[48]; // [esp+260h] [ebp-640h]
  double v161[176]; // [esp+320h] [ebp-580h] BYREF

  v6 = a5 & 0xFF00;
  v143 = v6;
  if ( (a5 & 0xFF00) != 0 )
  {
    if ( v6 == 256 || v6 == 512 )
      byte_1044FA18 = 1;
  }
  else
  {
    byte_1044FA18 = 0;
  }
  v7 = a1;
  a3[1] = 6150;
  a3[3] = a1[3];
  a3[2] = a1[2];
  a3[9] = a4;
  a3[18] = 32;
  a3[19] = 4;
  a3[21] = a5;
  a3[20] = 305419896;
  v128 = (unsigned int)(a1[21] + 7) >> 3;
  v8 = 0;
  v135 = (char *)(a1 + 22) - (char *)v140;
  do
  {
    v9 = *(_DWORD *)((char *)&v140[v8] + (char *)(a1 + 22) - (char *)v140);
    for ( i = 0; (v9 & 1) == 0; ++i )
      v9 >>= 1;
    v140[v8++] = i;
  }
  while ( v8 < 3 );
  if ( (a5 & 0xFF00) != 0 )
  {
    v11 = a1[25];
    v12 = 0;
    for ( j = v11; (j & 1) == 0; ++v12 )
      j >>= 1;
    v137 = v12;
    v144 = (dword_1044FA14 * (v11 >> v12) / 0xFF) << v12;
  }
  v138 = (_DWORD *)a1[9];
  result = a1[2];
  v129 = a4;
  v136 = 0;
  if ( result > 0 )
  {
    while ( 1 )
    {
      v131 = result - v136;
      if ( (unsigned int)(result - v136) >= 4 )
        v131 = 4;
      v139 = 0;
      v133 = v138;
      v15 = v7[3];
      if ( v15 > 0 )
        break;
LABEL_171:
      v98 = a1[4];
      result = a1[2];
      v52 = v136 + 4 < result;
      v136 += 4;
      v138 += v98;
      if ( !v52 )
        return result;
      v7 = a1;
    }
    v141 = (unsigned __int8)a5;
    while ( 1 )
    {
      memset(v161, 0, sizeof(v161));
      memset(v155, 0xFFu, sizeof(v155));
      for ( k = 0; k < 3; v161[k + 144] = *(float *)(a6 + 4 * k - 4) )
        ++k;
      v130 = v15 - v139;
      if ( v15 - v139 >= (unsigned int)dword_103EDAC8 )
        v130 = dword_103EDAC8;
      v17 = 0;
      LODWORD(v161[0]) = 0;
      if ( v143 == 256 )
      {
        v38 = v133;
        v39 = v137;
        v40 = dword_103EDAC8;
        v41 = 0;
        for ( m = 0; m < 4; v41 = m )
        {
          if ( v41 >= v131 )
          {
            *v129 = 0;
          }
          else
          {
            v42 = 0;
            for ( n = 0; v42 < v40; n = v42 )
            {
              if ( v42 >= v130 )
              {
                LOWORD(v134) = (unsigned __int16)v134 >> 4;
              }
              else
              {
                v43 = a1[25] >> v39;
                v152 = (unsigned int)(*v38 & a1[25]) >> v39;
                v148 = v43;
                v44 = (__int64)floor((double)v152 / (double)v43 * 15.0 + 0.5);
                v17 = LODWORD(v161[0]);
                LOWORD(v45) = (unsigned __int16)v134 >> 4;
                LODWORD(v44) = v45 | ((_DWORD)v44 << 12);
                v40 = dword_103EDAC8;
                v134 = v44;
                v42 = n;
              }
              ++v42;
              v38 = (_DWORD *)((char *)v38 + v128);
            }
            *v129 = v134;
          }
          ++v129;
          v40 = dword_103EDAC8;
          ++m;
          v38 = (_DWORD *)((char *)v38 + a1[4] - v128 * dword_103EDAC8);
        }
        goto LABEL_82;
      }
      if ( v143 != 512 )
        goto LABEL_82;
      v18 = v133;
      v19 = 0;
      v20 = a1[4] - v128 * dword_103EDAC8;
      v156[0] = 0;
      v99 = 0;
      v107 = v20;
      do
      {
        for ( ii = 0; ii < dword_103EDAC8; ++ii )
        {
          if ( ii >= v130 || v99 >= v131 )
          {
            v155[v19++] = -1;
          }
          else
          {
            v21 = (unsigned int)(*v18 & a1[25]) >> v137;
            v22 = a1[25] >> v137;
            v155[v19++] = v156[0];
            if ( v21 == v22 )
            {
              v23 = 1.0;
            }
            else
            {
              v150 = v21;
              v151 = v22;
              v23 = (double)v21 / (double)v22;
            }
            *(float *)&v156[++v156[0]] = v23;
          }
          v18 = (_DWORD *)((char *)v18 + v128);
        }
        v18 = (_DWORD *)((char *)v18 + v107);
        ++v99;
      }
      while ( v99 < 4 );
      v24 = 0;
      v156[49] = 0;
      v156[50] = 0;
      if ( v156[0] )
      {
        sub_101CFD50(v156);
        v24 = v158;
        v25 = v159;
        v17 = LODWORD(v161[0]);
        if ( v158 != v159 )
          goto LABEL_45;
      }
      else
      {
        v25 = 0;
        v158 = 0;
      }
      ++v25;
      v26 = 0;
      v159 = v25;
      if ( v156[0] > 0 )
      {
        do
          v160[v26++] = 0;
        while ( v26 < v156[0] );
        v24 = v158;
        v25 = v159;
      }
      v157 = 6;
LABEL_45:
      if ( v24 > v25 == (v157 == 6) )
      {
        v158 = v25;
        v159 = v24;
        v116 = 1;
      }
      else
      {
        v116 = 0;
      }
      v27 = v129;
      for ( jj = 0; jj < 2; ++jj )
        *v27++ = *((_BYTE *)&v158 + 4 * jj);
      v129 = v27;
      v123 = 0;
      v126 = 0;
      memset(v27, 0, 6 * (dword_103EDAC8 / 4));
      v29 = 0;
      if ( dword_103EDAC8 / 4 > 0 )
      {
        v30 = v129;
        while ( 1 )
        {
          v31 = v123;
          v100 = 0;
          do
          {
            v108 = 4;
            do
            {
              v32 = v155[v31];
              v29 >>= 3;
              if ( v32 < 0 )
                goto LABEL_66;
              v33 = v160[v32];
              if ( v116 )
              {
                if ( v157 == 8 )
                {
                  if ( v33 > 1 )
                  {
                    v34 = 9 - v33;
LABEL_64:
                    v33 = v34;
                    goto LABEL_65;
                  }
                }
                else
                {
                  if ( v157 != 6 || v33 > 5 )
                    goto LABEL_65;
                  if ( v33 > 1 )
                  {
                    v34 = 7 - v33;
                    goto LABEL_64;
                  }
                }
                v34 = v33 == 0;
                goto LABEL_64;
              }
LABEL_65:
              v29 |= v33 << 21;
LABEL_66:
              ++v31;
              --v108;
            }
            while ( v108 );
            v35 = v100;
            if ( (v100 & 1) != 0 )
            {
              v36 = *v30;
              v30 = (_DWORD *)((char *)v30 + 3);
              v37 = v29 | v36;
              v29 = 0;
              *(_DWORD *)((char *)v30 - 3) = v37;
            }
            ++v100;
          }
          while ( v35 + 1 < 4 );
          v123 = v31;
          if ( ++v126 >= dword_103EDAC8 / 4 )
          {
            v129 = v30;
            break;
          }
        }
      }
LABEL_82:
      v46 = 0;
      if ( a2 )
      {
        v47 = (unsigned __int8 *)v133;
        if ( v141 )
        {
          if ( v141 == 1 )
          {
            v102 = 0;
            v117 = a1[4];
            do
            {
              v48 = 0;
              for ( kk = 0; kk < 4; ++kk )
              {
                if ( v48 >= v130
                  || v102 >= v131
                  || (v49 = (unsigned __int8 *)(a2 + 4 * *v47), v50 = *(_DWORD *)v49 & 0xFFFFFF, v50 >= a1[16])
                  && v50 <= a1[17] )
                {
                  v155[v46++] = -1;
                }
                else
                {
                  v155[v46++] = v17;
                  LODWORD(v161[0]) = v17 + 1;
                  v51 = &v161[3 * v17 + 2];
                  *(v51 - 1) = (double)*v49 * 0.00392156862745098;
                  *v51 = (double)v49[1] * 0.00392156862745098;
                  v51[1] = (double)v49[2] * 0.00392156862745098;
                  v17 = LODWORD(v161[0]);
                }
                v48 = kk + 1;
                ++v47;
              }
              v52 = ++v102 < 4;
              v47 = &v47[v117 - 4];
            }
            while ( v52 );
          }
        }
        else
        {
          v53 = 0;
          v54 = 0;
          v103 = 0;
          v118 = a1[4];
          do
          {
            for ( mm = 0; mm < 4; ++mm )
            {
              if ( mm >= v130 || v54 >= v131 )
              {
                v155[v53++] = -1;
              }
              else
              {
                v56 = *v47;
                v155[v53++] = v17;
                v57 = (unsigned __int8 *)(a2 + 4 * v56);
                LODWORD(v161[0]) = v17 + 1;
                v58 = &v161[3 * v17 + 2];
                *(v58 - 1) = (double)*v57 * 0.00392156862745098;
                *v58 = (double)v57[1] * 0.00392156862745098;
                v58[1] = (double)v57[2] * 0.00392156862745098;
                v17 = LODWORD(v161[0]);
                v54 = v103;
              }
              ++v47;
            }
            v103 = ++v54;
            v47 = &v47[v118 - 4];
          }
          while ( v54 < 4 );
        }
      }
      else
      {
        v127 = (char *)v133;
        if ( v141 )
        {
          if ( v141 == 1 )
          {
            v124 = 0;
            v105 = 0;
            v112 = a1[4] - 4 * v128;
            do
            {
              v120 = 0;
              do
              {
                if ( v120 >= v130 || v105 >= v131 || (v68 = *(_DWORD *)v127, v142 = v68, v68 >= a1[16]) && v68 <= a1[17] )
                {
                  v155[v124++] = -1;
                }
                else
                {
                  v155[v124] = v17;
                  v69 = &v161[3 * v17 + 1];
                  LODWORD(v161[0]) = v17 + 1;
                  v70 = v135;
                  ++v124;
                  for ( nn = 0; nn < 3; ++nn )
                  {
                    v72 = v140[nn];
                    ++v69;
                    v73 = (v142 & *(_DWORD *)((char *)&v140[nn] + v70)) >> v72;
                    v146 = (unsigned int)(*(_DWORD *)((char *)&v140[nn] + v70) >> v72);
                    v153 = v73;
                    *(v69 - 1) = (double)v73 / (double)v146;
                  }
                  v17 = LODWORD(v161[0]);
                }
                v74 = &v127[v128];
                v52 = ++v120 < 4;
                v127 += v128;
              }
              while ( v52 );
              v52 = ++v105 < 4;
              v127 = &v74[v112];
            }
            while ( v52 );
          }
          else if ( v141 == 2 )
          {
            v59 = 0;
            v60 = 0;
            v104 = 0;
            v111 = a1[4] - 4 * v128;
            do
            {
              v61 = v127;
              v62 = 0;
              v119 = 0;
              do
              {
                if ( v62 >= v130 || v60 >= v131 || (v63 = *(_DWORD *)v61, (*(_DWORD *)v61 & a1[25]) <= v144) )
                {
                  v155[v59++] = -1;
                }
                else
                {
                  v155[v59++] = v17;
                  LODWORD(v161[0]) = v17 + 1;
                  v64 = &v161[3 * v17 + 1];
                  v65 = 0;
                  v154 = (unsigned int)(a1[v59 + 22] >> v140[v59]);
                  v66 = (double)v154;
                  do
                  {
                    ++v64;
                    v67 = (v63 & *(_DWORD *)((char *)&v140[v65] + v135)) >> v140[v65];
                    ++v65;
                    v145 = v67;
                    *(v64 - 1) = (double)v67 / v66;
                  }
                  while ( v65 < 3 );
                  v17 = LODWORD(v161[0]);
                  v62 = v119;
                  v60 = v104;
                }
                ++v62;
                v61 = &v127[v128];
                v119 = v62;
                v127 += v128;
              }
              while ( v62 < 4 );
              v104 = ++v60;
              v127 = &v61[v111];
            }
            while ( v60 < 4 );
          }
        }
        else
        {
          v75 = 0;
          v76 = a1[4] - v128 * dword_103EDAC8;
          v106 = 0;
          v113 = v76;
          do
          {
            v77 = 0;
            v121 = 0;
            if ( dword_103EDAC8 > 0 )
            {
              do
              {
                if ( v77 >= v130 || v46 >= v131 )
                {
                  v155[v75++] = -1;
                }
                else
                {
                  v155[v75] = v17;
                  v78 = *(_DWORD *)v127;
                  v79 = &v161[3 * v17 + 1];
                  v125 = v75 + 1;
                  LODWORD(v161[0]) = v17 + 1;
                  for ( i1 = 0; i1 < 3; ++i1 )
                  {
                    ++v79;
                    v81 = *(_DWORD *)((char *)&v140[i1] + v135);
                    v82 = v140[i1];
                    v147 = (v81 & v78) >> v82;
                    v149 = v81 >> v82;
                    *(v79 - 1) = (double)v147 / (double)v149;
                  }
                  v17 = LODWORD(v161[0]);
                  v75 = v125;
                  v77 = v121;
                  v46 = v106;
                }
                ++v77;
                v127 += v128;
                v121 = v77;
              }
              while ( v77 < dword_103EDAC8 );
              v76 = v113;
            }
            v106 = ++v46;
            v127 += v76;
          }
          while ( v46 < 4 );
        }
      }
      LODWORD(v161[148]) = (v17 >= v131 * v130) + 3;
      if ( v17 )
      {
        sub_101CCD30(v161);
      }
      else
      {
        v83 = (_DWORD *)&v161[149] + 1;
        v84 = 2;
        do
        {
          v83[1] = 0;
          *v83 = 0;
          *(v83 - 1) = 0;
          v83 += 3;
          --v84;
        }
        while ( v84 );
      }
      v85 = 0;
      v86 = (char *)&v161[149] + 4;
      do
      {
        v87 = *((_WORD *)v86 - 2);
        v86 += 12;
        *((_WORD *)&v131 + ++v85 + 1) = *((_WORD *)v86 - 4) | (32 * (*((_WORD *)v86 - 6) | (v87 << 6)));
      }
      while ( v85 < 2 );
      v89 = HIWORD(v132);
      v88 = v132;
      v90 = HIWORD(v132) < (unsigned __int16)v132;
      if ( HIWORD(v132) == (_WORD)v132 )
      {
        v89 = HIWORD(v132) + 1;
        v91 = 0;
        ++HIWORD(v132);
        if ( SLODWORD(v161[0]) > 0 )
        {
          do
            *((_DWORD *)&v161[152] + v91++) = 0;
          while ( v91 < SLODWORD(v161[0]) );
        }
        HIDWORD(v161[148]) = 3;
        v90 = v89 < v88;
      }
      if ( v90 == (HIDWORD(v161[148]) == 3) )
      {
        v92 = v132;
        LOWORD(v132) = v89;
        HIWORD(v132) = v92;
        v122 = 1;
      }
      else
      {
        v122 = 0;
      }
      v93 = 0;
      *(_DWORD *)v129 = v132;
      v94 = v129 + 2;
      v129 += 2;
      if ( dword_103EDAC8 / 4 > 0 )
      {
        v114 = &v155[15];
        do
        {
          v95 = v114;
          v96 = 0;
          v97 = 16;
          do
          {
            v96 *= 4;
            if ( *v95 >= 0 )
            {
              v96 |= *((_DWORD *)&v161[152] + *v95);
              if ( v122 )
              {
                if ( HIDWORD(v161[148]) == 4 )
                  v96 ^= 1u;
                else
                  v96 ^= ((unsigned int)~v96 >> 1) & 1;
              }
            }
            else
            {
              LOBYTE(v96) = v96 | 3;
            }
            --v95;
            --v97;
          }
          while ( v97 );
          *v94 = v96;
          v114 += 16;
          ++v94;
          ++v93;
        }
        while ( v93 < dword_103EDAC8 / 4 );
        v129 = v94;
      }
      v133 += v128;
      v139 += 4;
      v15 = a1[3];
      if ( v139 >= v15 )
        goto LABEL_171;
    }
  }
  return result;
}
