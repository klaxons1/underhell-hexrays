float *__thiscall sub_100DFA80(void *this, int a2)
{
  int v3; // edx
  unsigned int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // edx
  unsigned int v11; // edx
  int v12; // ebx
  float *result; // eax
  int v14; // ecx
  float v15; // eax
  int v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // edx
  _DWORD *v19; // edx
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // edx
  int v24; // ebx
  int v25; // ecx
  float v26; // eax
  int v27; // ecx
  _DWORD *v28; // ecx
  _DWORD *v29; // edx
  _DWORD *v30; // edx
  int v31; // edi
  int v32; // eax
  _DWORD *v33; // ecx
  unsigned int v34; // edx
  int v35; // ebx
  int v36; // ecx
  unsigned int v37; // eax
  char v38; // dl
  int v39; // ecx
  _DWORD *v40; // ecx
  int v41; // ecx
  _DWORD *v42; // edx
  int v43; // edi
  _DWORD *v44; // ecx
  unsigned int v45; // edx
  int v46; // ebx
  unsigned int v47; // edx
  int v48; // ecx
  unsigned int v49; // eax
  char v50; // dl
  int v51; // ecx
  _DWORD *v52; // ecx
  int v53; // ecx
  _DWORD *v54; // edx
  int v55; // edi
  _DWORD *v56; // ecx
  unsigned int v57; // edx
  int v58; // ebx
  unsigned int v59; // edx
  int v60; // ecx
  unsigned int v61; // eax
  char v62; // dl
  int v63; // ecx
  _DWORD *v64; // ecx
  int v65; // ecx
  _DWORD *v66; // edx
  int v67; // edi
  _DWORD *v68; // ecx
  unsigned int v69; // edx
  int v70; // ebx
  unsigned int v71; // edx
  int v72; // ecx
  unsigned int v73; // eax
  char v74; // dl
  int v75; // ecx
  _DWORD *v76; // ecx
  int v77; // ecx
  _DWORD *v78; // edx
  int v79; // edi
  _DWORD *v80; // ecx
  unsigned int v81; // edx
  int v82; // ebx
  unsigned int v83; // edx
  int v84; // ecx
  unsigned int v85; // eax
  char v86; // dl
  int v87; // ecx
  _DWORD *v88; // ecx
  int v89; // ecx
  _DWORD *v90; // edx
  int v91; // edi
  _DWORD *v92; // ecx
  unsigned int v93; // edx
  int v94; // ebx
  unsigned int v95; // edx
  int v96; // ecx
  unsigned int v97; // eax
  char v98; // dl
  int v99; // ecx
  _DWORD *v100; // ecx
  int v101; // ecx
  _DWORD *v102; // edx
  int v103; // edi
  _DWORD *v104; // ecx
  unsigned int v105; // edx
  int v106; // ebx
  unsigned int v107; // edx
  int v108; // ecx
  unsigned int v109; // eax
  char v110; // dl
  int v111; // ecx
  _DWORD *v112; // ecx
  int v113; // ecx
  _DWORD *v114; // edx
  int v115; // edi
  _DWORD *v116; // ecx
  unsigned int v117; // edx
  int v118; // ebx
  unsigned int v119; // edx
  int v120; // ecx
  unsigned int v121; // eax
  char v122; // dl
  int v123; // ecx
  _DWORD *v124; // ecx
  int v125; // ecx
  _DWORD *v126; // edx
  int v127; // edi
  _DWORD *v128; // ecx
  unsigned int v129; // edx
  int v130; // ebx
  unsigned int v131; // edx
  int v132; // ecx
  unsigned int v133; // eax
  unsigned int v134; // edx
  int v135; // ecx
  int *v136; // eax
  int *v137; // ecx
  int v138; // ecx
  _DWORD *v139; // edx
  int v140; // edi
  int v141; // eax
  _DWORD *v142; // ecx
  unsigned int v143; // edx
  int v144; // ebx
  unsigned int v145; // edx
  int v146; // ecx
  float v147; // eax
  int v148; // ecx
  _DWORD *v149; // ecx
  _DWORD *v150; // edx
  _DWORD *v151; // edx
  int v152; // edi
  int v153; // eax
  _DWORD *v154; // ecx
  unsigned int v155; // edx
  int v156; // ebx
  int v157; // ecx
  float v158; // eax
  int v159; // ecx
  _DWORD *v160; // ecx
  _DWORD *v161; // edx
  _DWORD *v162; // edx
  int v163; // edi
  int v164; // eax
  _DWORD *v165; // ecx
  unsigned int v166; // edx
  int v167; // ebx
  int v168; // ecx
  float v169; // eax
  int v170; // ecx
  _DWORD *v171; // ecx
  _DWORD *v172; // edx
  _DWORD *v173; // edx
  int v174; // edi
  int v175; // eax
  _DWORD *v176; // ecx
  unsigned int v177; // edx
  int v178; // ebx
  int v179; // ecx
  float v180; // eax
  int v181; // ecx
  _DWORD *v182; // ecx
  _DWORD *v183; // edx
  _DWORD *v184; // edx
  int v185; // edi
  int v186; // eax
  _DWORD *v187; // ecx
  unsigned int v188; // edx
  int v189; // ebx
  int v190; // ecx
  int v192; // [esp+10h] [ebp-8h]
  float v193; // [esp+14h] [ebp-4h]
  float v194; // [esp+14h] [ebp-4h]
  float v195; // [esp+14h] [ebp-4h]
  float v196; // [esp+14h] [ebp-4h]
  float v197; // [esp+14h] [ebp-4h]
  float v198; // [esp+14h] [ebp-4h]
  float *v199; // [esp+20h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 20);
  v4 = *(_DWORD *)(a2 + 16);
  if ( v3 >= 8 )
  {
    v5 = (unsigned __int8)v4;
    *(_DWORD *)(a2 + 20) = v3 - 8;
    if ( v3 == 8 )
    {
      v6 = *(_DWORD **)(a2 + 24);
      v7 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v6 == v7 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v6 + 1;
      }
      else if ( v6 <= v7 )
      {
        *(_DWORD *)(a2 + 16) = *v6;
        *(_DWORD *)(a2 + 24) = v6 + 1;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 16) = v4 >> 8;
    }
    goto LABEL_18;
  }
  v8 = *(_DWORD **)(a2 + 24);
  v9 = 8 - v3;
  v10 = *(_DWORD **)(a2 + 28);
  if ( v8 == v10 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v8 > v10 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 16) = *v8;
  }
  *(_DWORD *)(a2 + 24) = v8 + 1;
LABEL_15:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v5 = 0;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 16);
    v12 = (v11 & dword_1039BF80[v9]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v9;
    v5 = v12 | v4;
    *(_DWORD *)(a2 + 16) = v11 >> v9;
  }
LABEL_18:
  v192 = v5 % 6;
  result = (float *)sub_10076700((int)off_103E1300[v5 % 6]);
  v199 = result;
  if ( result && *((_DWORD *)result + 11) )
  {
    v14 = *(_DWORD *)(a2 + 20);
    if ( v14 >= 32 )
    {
      v15 = *(float *)(a2 + 16);
      v16 = v14 - 32;
      *(_DWORD *)(a2 + 20) = v16;
      if ( v16 )
      {
        *(_DWORD *)(a2 + 16) = 0;
        v193 = v15;
      }
      else
      {
        v17 = *(_DWORD **)(a2 + 24);
        v18 = *(_DWORD **)(a2 + 28);
        *(_DWORD *)(a2 + 20) = 32;
        if ( v17 == v18 )
        {
          *(_DWORD *)(a2 + 20) = 1;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 24) = v17 + 1;
          v193 = v15;
        }
        else
        {
          if ( v17 <= v18 )
          {
            *(_DWORD *)(a2 + 16) = *v17;
            *(_DWORD *)(a2 + 24) = v17 + 1;
          }
          else
          {
            *(_BYTE *)(a2 + 4) = 1;
            *(_DWORD *)(a2 + 16) = 0;
          }
          v193 = v15;
        }
      }
LABEL_38:
      v199[3] = v193;
      v25 = *(_DWORD *)(a2 + 20);
      if ( v25 >= 32 )
      {
        v26 = *(float *)(a2 + 16);
        v27 = v25 - 32;
        *(_DWORD *)(a2 + 20) = v27;
        if ( v27 )
        {
          *(_DWORD *)(a2 + 16) = 0;
          v194 = v26;
        }
        else
        {
          v28 = *(_DWORD **)(a2 + 24);
          v29 = *(_DWORD **)(a2 + 28);
          *(_DWORD *)(a2 + 20) = 32;
          if ( v28 == v29 )
          {
            *(_DWORD *)(a2 + 20) = 1;
            *(_DWORD *)(a2 + 16) = 0;
            *(_DWORD *)(a2 + 24) = v28 + 1;
            v194 = v26;
          }
          else
          {
            if ( v28 <= v29 )
            {
              *(_DWORD *)(a2 + 16) = *v28;
              *(_DWORD *)(a2 + 24) = v28 + 1;
            }
            else
            {
              *(_BYTE *)(a2 + 4) = 1;
              *(_DWORD *)(a2 + 16) = 0;
            }
            v194 = v26;
          }
        }
LABEL_56:
        v199[4] = v194;
        v36 = *(_DWORD *)(a2 + 20);
        if ( v36 >= 8 )
        {
          v37 = *(_DWORD *)(a2 + 16);
          v38 = v37;
          v39 = v36 - 8;
          *(_DWORD *)(a2 + 20) = v39;
          if ( v39 )
          {
            *(_DWORD *)(a2 + 16) = v37 >> 8;
          }
          else
          {
            v37 = *(_DWORD *)(a2 + 24);
            v40 = *(_DWORD **)(a2 + 28);
            *(_DWORD *)(a2 + 20) = 32;
            if ( (_DWORD *)v37 == v40 )
            {
              *(_DWORD *)(a2 + 24) = v37 + 4;
              *(_DWORD *)(a2 + 20) = 1;
              *(_DWORD *)(a2 + 16) = 0;
              LOBYTE(v37) = v38;
            }
            else
            {
              if ( v37 <= (unsigned int)v40 )
              {
                v41 = *(_DWORD *)v37;
                *(_DWORD *)(a2 + 24) = v37 + 4;
                *(_DWORD *)(a2 + 16) = v41;
              }
              else
              {
                *(_BYTE *)(a2 + 4) = 1;
                *(_DWORD *)(a2 + 16) = 0;
              }
              LOBYTE(v37) = v38;
            }
          }
LABEL_74:
          *((_BYTE *)v199 + 4) = v37;
          v48 = *(_DWORD *)(a2 + 20);
          if ( v48 >= 8 )
          {
            v49 = *(_DWORD *)(a2 + 16);
            v50 = v49;
            v51 = v48 - 8;
            *(_DWORD *)(a2 + 20) = v51;
            if ( v51 )
            {
              *(_DWORD *)(a2 + 16) = v49 >> 8;
            }
            else
            {
              v49 = *(_DWORD *)(a2 + 24);
              v52 = *(_DWORD **)(a2 + 28);
              *(_DWORD *)(a2 + 20) = 32;
              if ( (_DWORD *)v49 == v52 )
              {
                *(_DWORD *)(a2 + 24) = v49 + 4;
                *(_DWORD *)(a2 + 20) = 1;
                *(_DWORD *)(a2 + 16) = 0;
                LOBYTE(v49) = v50;
              }
              else
              {
                if ( v49 <= (unsigned int)v52 )
                {
                  v53 = *(_DWORD *)v49;
                  *(_DWORD *)(a2 + 24) = v49 + 4;
                  *(_DWORD *)(a2 + 16) = v53;
                }
                else
                {
                  *(_BYTE *)(a2 + 4) = 1;
                  *(_DWORD *)(a2 + 16) = 0;
                }
                LOBYTE(v49) = v50;
              }
            }
LABEL_92:
            *((_BYTE *)v199 + 5) = v49;
            v60 = *(_DWORD *)(a2 + 20);
            if ( v60 >= 8 )
            {
              v61 = *(_DWORD *)(a2 + 16);
              v62 = v61;
              v63 = v60 - 8;
              *(_DWORD *)(a2 + 20) = v63;
              if ( v63 )
              {
                *(_DWORD *)(a2 + 16) = v61 >> 8;
              }
              else
              {
                v61 = *(_DWORD *)(a2 + 24);
                v64 = *(_DWORD **)(a2 + 28);
                *(_DWORD *)(a2 + 20) = 32;
                if ( (_DWORD *)v61 == v64 )
                {
                  *(_DWORD *)(a2 + 24) = v61 + 4;
                  *(_DWORD *)(a2 + 20) = 1;
                  *(_DWORD *)(a2 + 16) = 0;
                  LOBYTE(v61) = v62;
                }
                else
                {
                  if ( v61 <= (unsigned int)v64 )
                  {
                    v65 = *(_DWORD *)v61;
                    *(_DWORD *)(a2 + 24) = v61 + 4;
                    *(_DWORD *)(a2 + 16) = v65;
                  }
                  else
                  {
                    *(_BYTE *)(a2 + 4) = 1;
                    *(_DWORD *)(a2 + 16) = 0;
                  }
                  LOBYTE(v61) = v62;
                }
              }
LABEL_110:
              *((_BYTE *)v199 + 6) = v61;
              v72 = *(_DWORD *)(a2 + 20);
              if ( v72 >= 8 )
              {
                v73 = *(_DWORD *)(a2 + 16);
                v74 = v73;
                v75 = v72 - 8;
                *(_DWORD *)(a2 + 20) = v75;
                if ( v75 )
                {
                  *(_DWORD *)(a2 + 16) = v73 >> 8;
                }
                else
                {
                  v73 = *(_DWORD *)(a2 + 24);
                  v76 = *(_DWORD **)(a2 + 28);
                  *(_DWORD *)(a2 + 20) = 32;
                  if ( (_DWORD *)v73 == v76 )
                  {
                    *(_DWORD *)(a2 + 24) = v73 + 4;
                    *(_DWORD *)(a2 + 20) = 1;
                    *(_DWORD *)(a2 + 16) = 0;
                    LOBYTE(v73) = v74;
                  }
                  else
                  {
                    if ( v73 <= (unsigned int)v76 )
                    {
                      v77 = *(_DWORD *)v73;
                      *(_DWORD *)(a2 + 24) = v73 + 4;
                      *(_DWORD *)(a2 + 16) = v77;
                    }
                    else
                    {
                      *(_BYTE *)(a2 + 4) = 1;
                      *(_DWORD *)(a2 + 16) = 0;
                    }
                    LOBYTE(v73) = v74;
                  }
                }
LABEL_128:
                *((_BYTE *)v199 + 7) = v73;
                v84 = *(_DWORD *)(a2 + 20);
                if ( v84 >= 8 )
                {
                  v85 = *(_DWORD *)(a2 + 16);
                  v86 = v85;
                  v87 = v84 - 8;
                  *(_DWORD *)(a2 + 20) = v87;
                  if ( v87 )
                  {
                    *(_DWORD *)(a2 + 16) = v85 >> 8;
                  }
                  else
                  {
                    v85 = *(_DWORD *)(a2 + 24);
                    v88 = *(_DWORD **)(a2 + 28);
                    *(_DWORD *)(a2 + 20) = 32;
                    if ( (_DWORD *)v85 == v88 )
                    {
                      *(_DWORD *)(a2 + 24) = v85 + 4;
                      *(_DWORD *)(a2 + 20) = 1;
                      *(_DWORD *)(a2 + 16) = 0;
                      LOBYTE(v85) = v86;
                    }
                    else
                    {
                      if ( v85 <= (unsigned int)v88 )
                      {
                        v89 = *(_DWORD *)v85;
                        *(_DWORD *)(a2 + 24) = v85 + 4;
                        *(_DWORD *)(a2 + 16) = v89;
                      }
                      else
                      {
                        *(_BYTE *)(a2 + 4) = 1;
                        *(_DWORD *)(a2 + 16) = 0;
                      }
                      LOBYTE(v85) = v86;
                    }
                  }
LABEL_146:
                  *((_BYTE *)v199 + 8) = v85;
                  v96 = *(_DWORD *)(a2 + 20);
                  if ( v96 >= 8 )
                  {
                    v97 = *(_DWORD *)(a2 + 16);
                    v98 = v97;
                    v99 = v96 - 8;
                    *(_DWORD *)(a2 + 20) = v99;
                    if ( v99 )
                    {
                      *(_DWORD *)(a2 + 16) = v97 >> 8;
                    }
                    else
                    {
                      v97 = *(_DWORD *)(a2 + 24);
                      v100 = *(_DWORD **)(a2 + 28);
                      *(_DWORD *)(a2 + 20) = 32;
                      if ( (_DWORD *)v97 == v100 )
                      {
                        *(_DWORD *)(a2 + 24) = v97 + 4;
                        *(_DWORD *)(a2 + 20) = 1;
                        *(_DWORD *)(a2 + 16) = 0;
                        LOBYTE(v97) = v98;
                      }
                      else
                      {
                        if ( v97 <= (unsigned int)v100 )
                        {
                          v101 = *(_DWORD *)v97;
                          *(_DWORD *)(a2 + 24) = v97 + 4;
                          *(_DWORD *)(a2 + 16) = v101;
                        }
                        else
                        {
                          *(_BYTE *)(a2 + 4) = 1;
                          *(_DWORD *)(a2 + 16) = 0;
                        }
                        LOBYTE(v97) = v98;
                      }
                    }
LABEL_164:
                    *((_BYTE *)v199 + 9) = v97;
                    v108 = *(_DWORD *)(a2 + 20);
                    if ( v108 >= 8 )
                    {
                      v109 = *(_DWORD *)(a2 + 16);
                      v110 = v109;
                      v111 = v108 - 8;
                      *(_DWORD *)(a2 + 20) = v111;
                      if ( v111 )
                      {
                        *(_DWORD *)(a2 + 16) = v109 >> 8;
                      }
                      else
                      {
                        v109 = *(_DWORD *)(a2 + 24);
                        v112 = *(_DWORD **)(a2 + 28);
                        *(_DWORD *)(a2 + 20) = 32;
                        if ( (_DWORD *)v109 == v112 )
                        {
                          *(_DWORD *)(a2 + 24) = v109 + 4;
                          *(_DWORD *)(a2 + 20) = 1;
                          *(_DWORD *)(a2 + 16) = 0;
                          LOBYTE(v109) = v110;
                        }
                        else
                        {
                          if ( v109 <= (unsigned int)v112 )
                          {
                            v113 = *(_DWORD *)v109;
                            *(_DWORD *)(a2 + 24) = v109 + 4;
                            *(_DWORD *)(a2 + 16) = v113;
                          }
                          else
                          {
                            *(_BYTE *)(a2 + 4) = 1;
                            *(_DWORD *)(a2 + 16) = 0;
                          }
                          LOBYTE(v109) = v110;
                        }
                      }
LABEL_182:
                      *((_BYTE *)v199 + 10) = v109;
                      v120 = *(_DWORD *)(a2 + 20);
                      if ( v120 >= 8 )
                      {
                        v121 = *(_DWORD *)(a2 + 16);
                        v122 = v121;
                        v123 = v120 - 8;
                        *(_DWORD *)(a2 + 20) = v123;
                        if ( v123 )
                        {
                          *(_DWORD *)(a2 + 16) = v121 >> 8;
                        }
                        else
                        {
                          v121 = *(_DWORD *)(a2 + 24);
                          v124 = *(_DWORD **)(a2 + 28);
                          *(_DWORD *)(a2 + 20) = 32;
                          if ( (_DWORD *)v121 == v124 )
                          {
                            *(_DWORD *)(a2 + 24) = v121 + 4;
                            *(_DWORD *)(a2 + 20) = 1;
                            *(_DWORD *)(a2 + 16) = 0;
                            LOBYTE(v121) = v122;
                          }
                          else
                          {
                            if ( v121 <= (unsigned int)v124 )
                            {
                              v125 = *(_DWORD *)v121;
                              *(_DWORD *)(a2 + 24) = v121 + 4;
                              *(_DWORD *)(a2 + 16) = v125;
                            }
                            else
                            {
                              *(_BYTE *)(a2 + 4) = 1;
                              *(_DWORD *)(a2 + 16) = 0;
                            }
                            LOBYTE(v121) = v122;
                          }
                        }
LABEL_200:
                        *((_BYTE *)v199 + 11) = v121;
                        v132 = *(_DWORD *)(a2 + 20);
                        if ( v132 >= 8 )
                        {
                          v133 = *(_DWORD *)(a2 + 16);
                          v134 = (unsigned __int8)v133;
                          v135 = v132 - 8;
                          *(_DWORD *)(a2 + 20) = v135;
                          if ( v135 )
                          {
                            *(_DWORD *)(a2 + 16) = v133 >> 8;
                            v133 = (unsigned __int8)v133;
                          }
                          else
                          {
                            v136 = *(int **)(a2 + 24);
                            v137 = *(int **)(a2 + 28);
                            *(_DWORD *)(a2 + 20) = 32;
                            if ( v136 == v137 )
                            {
                              *(_DWORD *)(a2 + 24) = v136 + 1;
                              *(_DWORD *)(a2 + 20) = 1;
                              *(_DWORD *)(a2 + 16) = 0;
                              v133 = v134;
                            }
                            else
                            {
                              if ( v136 <= v137 )
                              {
                                v138 = *v136;
                                *(_DWORD *)(a2 + 24) = v136 + 1;
                                *(_DWORD *)(a2 + 16) = v138;
                              }
                              else
                              {
                                *(_BYTE *)(a2 + 4) = 1;
                                *(_DWORD *)(a2 + 16) = 0;
                              }
                              v133 = v134;
                            }
                          }
LABEL_218:
                          *(_DWORD *)v199 = v133;
                          v146 = *(_DWORD *)(a2 + 20);
                          if ( v146 >= 32 )
                          {
                            v147 = *(float *)(a2 + 16);
                            v148 = v146 - 32;
                            *(_DWORD *)(a2 + 20) = v148;
                            if ( v148 )
                            {
                              *(_DWORD *)(a2 + 16) = 0;
                              v195 = v147;
                            }
                            else
                            {
                              v149 = *(_DWORD **)(a2 + 24);
                              v150 = *(_DWORD **)(a2 + 28);
                              *(_DWORD *)(a2 + 20) = 32;
                              if ( v149 == v150 )
                              {
                                *(_DWORD *)(a2 + 20) = 1;
                                *(_DWORD *)(a2 + 16) = 0;
                                *(_DWORD *)(a2 + 24) = v149 + 1;
                                v195 = v147;
                              }
                              else
                              {
                                if ( v149 <= v150 )
                                {
                                  *(_DWORD *)(a2 + 16) = *v149;
                                  *(_DWORD *)(a2 + 24) = v149 + 1;
                                }
                                else
                                {
                                  *(_BYTE *)(a2 + 4) = 1;
                                  *(_DWORD *)(a2 + 16) = 0;
                                }
                                v195 = v147;
                              }
                            }
LABEL_236:
                            v199[5] = v195;
                            v157 = *(_DWORD *)(a2 + 20);
                            if ( v157 >= 32 )
                            {
                              v158 = *(float *)(a2 + 16);
                              v159 = v157 - 32;
                              *(_DWORD *)(a2 + 20) = v159;
                              if ( v159 )
                              {
                                *(_DWORD *)(a2 + 16) = 0;
                                v196 = v158;
                              }
                              else
                              {
                                v160 = *(_DWORD **)(a2 + 24);
                                v161 = *(_DWORD **)(a2 + 28);
                                *(_DWORD *)(a2 + 20) = 32;
                                if ( v160 == v161 )
                                {
                                  *(_DWORD *)(a2 + 20) = 1;
                                  *(_DWORD *)(a2 + 16) = 0;
                                  *(_DWORD *)(a2 + 24) = v160 + 1;
                                  v196 = v158;
                                }
                                else
                                {
                                  if ( v160 <= v161 )
                                  {
                                    *(_DWORD *)(a2 + 16) = *v160;
                                    *(_DWORD *)(a2 + 24) = v160 + 1;
                                  }
                                  else
                                  {
                                    *(_BYTE *)(a2 + 4) = 1;
                                    *(_DWORD *)(a2 + 16) = 0;
                                  }
                                  v196 = v158;
                                }
                              }
LABEL_254:
                              v199[6] = v196;
                              v168 = *(_DWORD *)(a2 + 20);
                              if ( v168 >= 32 )
                              {
                                v169 = *(float *)(a2 + 16);
                                v170 = v168 - 32;
                                *(_DWORD *)(a2 + 20) = v170;
                                if ( v170 )
                                {
                                  *(_DWORD *)(a2 + 16) = 0;
                                  v197 = v169;
                                }
                                else
                                {
                                  v171 = *(_DWORD **)(a2 + 24);
                                  v172 = *(_DWORD **)(a2 + 28);
                                  *(_DWORD *)(a2 + 20) = 32;
                                  if ( v171 == v172 )
                                  {
                                    *(_DWORD *)(a2 + 20) = 1;
                                    *(_DWORD *)(a2 + 16) = 0;
                                    *(_DWORD *)(a2 + 24) = v171 + 1;
                                    v197 = v169;
                                  }
                                  else
                                  {
                                    if ( v171 <= v172 )
                                    {
                                      *(_DWORD *)(a2 + 16) = *v171;
                                      *(_DWORD *)(a2 + 24) = v171 + 1;
                                    }
                                    else
                                    {
                                      *(_BYTE *)(a2 + 4) = 1;
                                      *(_DWORD *)(a2 + 16) = 0;
                                    }
                                    v197 = v169;
                                  }
                                }
LABEL_272:
                                v199[7] = v197;
                                v179 = *(_DWORD *)(a2 + 20);
                                if ( v179 >= 32 )
                                {
                                  v180 = *(float *)(a2 + 16);
                                  v181 = v179 - 32;
                                  *(_DWORD *)(a2 + 20) = v181;
                                  if ( !v181 )
                                  {
                                    v182 = *(_DWORD **)(a2 + 24);
                                    v183 = *(_DWORD **)(a2 + 28);
                                    *(_DWORD *)(a2 + 20) = 32;
                                    if ( v182 == v183 )
                                    {
                                      *(_DWORD *)(a2 + 20) = 1;
                                      *(_DWORD *)(a2 + 16) = 0;
                                      *(_DWORD *)(a2 + 24) = v182 + 1;
                                      v198 = v180;
LABEL_289:
                                      v190 = *((_DWORD *)v199 + 11);
                                      v199[8] = v198;
                                      *((_DWORD *)v199 + 10) = off_103E1300[v192];
                                      sub_1022C220(v190, 512, 0, 0);
                                      return (float *)sub_100DF6B0((int)this, *((char **)v199 + 10));
                                    }
                                    if ( v182 <= v183 )
                                    {
                                      *(_DWORD *)(a2 + 16) = *v182;
                                      *(_DWORD *)(a2 + 24) = v182 + 1;
                                      v198 = v180;
                                      goto LABEL_289;
                                    }
                                    *(_BYTE *)(a2 + 4) = 1;
                                  }
                                  *(_DWORD *)(a2 + 16) = 0;
                                  v198 = v180;
                                  goto LABEL_289;
                                }
                                v184 = *(_DWORD **)(a2 + 28);
                                v185 = *(_DWORD *)(a2 + 16);
                                v186 = 32 - v179;
                                v187 = *(_DWORD **)(a2 + 24);
                                if ( v187 == v184 )
                                {
                                  *(_DWORD *)(a2 + 20) = 1;
                                  *(_DWORD *)(a2 + 16) = 0;
                                  *(_BYTE *)(a2 + 4) = 1;
                                }
                                else
                                {
                                  if ( v187 > v184 )
                                  {
                                    *(_BYTE *)(a2 + 4) = 1;
                                    *(_DWORD *)(a2 + 16) = 0;
                                    goto LABEL_286;
                                  }
                                  *(_DWORD *)(a2 + 16) = *v187;
                                }
                                *(_DWORD *)(a2 + 24) = v187 + 1;
LABEL_286:
                                if ( *(_BYTE *)(a2 + 4) )
                                {
                                  v198 = 0.0;
                                }
                                else
                                {
                                  v188 = *(_DWORD *)(a2 + 16);
                                  v189 = (v188 & dword_1039BF80[v186]) << *(_DWORD *)(a2 + 20);
                                  *(_DWORD *)(a2 + 20) = 32 - v186;
                                  LODWORD(v198) = v189 | v185;
                                  *(_DWORD *)(a2 + 16) = v188 >> v186;
                                }
                                goto LABEL_289;
                              }
                              v173 = *(_DWORD **)(a2 + 28);
                              v174 = *(_DWORD *)(a2 + 16);
                              v175 = 32 - v168;
                              v176 = *(_DWORD **)(a2 + 24);
                              if ( v176 == v173 )
                              {
                                *(_DWORD *)(a2 + 20) = 1;
                                *(_DWORD *)(a2 + 16) = 0;
                                *(_BYTE *)(a2 + 4) = 1;
                              }
                              else
                              {
                                if ( v176 > v173 )
                                {
                                  *(_BYTE *)(a2 + 4) = 1;
                                  *(_DWORD *)(a2 + 16) = 0;
                                  goto LABEL_269;
                                }
                                *(_DWORD *)(a2 + 16) = *v176;
                              }
                              *(_DWORD *)(a2 + 24) = v176 + 1;
LABEL_269:
                              if ( *(_BYTE *)(a2 + 4) )
                              {
                                v197 = 0.0;
                              }
                              else
                              {
                                v177 = *(_DWORD *)(a2 + 16);
                                v178 = (v177 & dword_1039BF80[v175]) << *(_DWORD *)(a2 + 20);
                                *(_DWORD *)(a2 + 20) = 32 - v175;
                                LODWORD(v197) = v178 | v174;
                                *(_DWORD *)(a2 + 16) = v177 >> v175;
                              }
                              goto LABEL_272;
                            }
                            v162 = *(_DWORD **)(a2 + 28);
                            v163 = *(_DWORD *)(a2 + 16);
                            v164 = 32 - v157;
                            v165 = *(_DWORD **)(a2 + 24);
                            if ( v165 == v162 )
                            {
                              *(_DWORD *)(a2 + 20) = 1;
                              *(_DWORD *)(a2 + 16) = 0;
                              *(_BYTE *)(a2 + 4) = 1;
                            }
                            else
                            {
                              if ( v165 > v162 )
                              {
                                *(_BYTE *)(a2 + 4) = 1;
                                *(_DWORD *)(a2 + 16) = 0;
                                goto LABEL_251;
                              }
                              *(_DWORD *)(a2 + 16) = *v165;
                            }
                            *(_DWORD *)(a2 + 24) = v165 + 1;
LABEL_251:
                            if ( *(_BYTE *)(a2 + 4) )
                            {
                              v196 = 0.0;
                            }
                            else
                            {
                              v166 = *(_DWORD *)(a2 + 16);
                              v167 = (v166 & dword_1039BF80[v164]) << *(_DWORD *)(a2 + 20);
                              *(_DWORD *)(a2 + 20) = 32 - v164;
                              LODWORD(v196) = v167 | v163;
                              *(_DWORD *)(a2 + 16) = v166 >> v164;
                            }
                            goto LABEL_254;
                          }
                          v151 = *(_DWORD **)(a2 + 28);
                          v152 = *(_DWORD *)(a2 + 16);
                          v153 = 32 - v146;
                          v154 = *(_DWORD **)(a2 + 24);
                          if ( v154 == v151 )
                          {
                            *(_DWORD *)(a2 + 20) = 1;
                            *(_DWORD *)(a2 + 16) = 0;
                            *(_BYTE *)(a2 + 4) = 1;
                          }
                          else
                          {
                            if ( v154 > v151 )
                            {
                              *(_BYTE *)(a2 + 4) = 1;
                              *(_DWORD *)(a2 + 16) = 0;
                              goto LABEL_233;
                            }
                            *(_DWORD *)(a2 + 16) = *v154;
                          }
                          *(_DWORD *)(a2 + 24) = v154 + 1;
LABEL_233:
                          if ( *(_BYTE *)(a2 + 4) )
                          {
                            v195 = 0.0;
                          }
                          else
                          {
                            v155 = *(_DWORD *)(a2 + 16);
                            v156 = (v155 & dword_1039BF80[v153]) << *(_DWORD *)(a2 + 20);
                            *(_DWORD *)(a2 + 20) = 32 - v153;
                            LODWORD(v195) = v156 | v152;
                            *(_DWORD *)(a2 + 16) = v155 >> v153;
                          }
                          goto LABEL_236;
                        }
                        v139 = *(_DWORD **)(a2 + 28);
                        v140 = *(_DWORD *)(a2 + 16);
                        v141 = 8 - v132;
                        v142 = *(_DWORD **)(a2 + 24);
                        if ( v142 == v139 )
                        {
                          *(_DWORD *)(a2 + 20) = 1;
                          *(_DWORD *)(a2 + 16) = 0;
                          *(_BYTE *)(a2 + 4) = 1;
                        }
                        else
                        {
                          if ( v142 > v139 )
                          {
                            *(_BYTE *)(a2 + 4) = 1;
                            *(_DWORD *)(a2 + 16) = 0;
                            goto LABEL_215;
                          }
                          *(_DWORD *)(a2 + 16) = *v142;
                        }
                        *(_DWORD *)(a2 + 24) = v142 + 1;
LABEL_215:
                        if ( *(_BYTE *)(a2 + 4) )
                        {
                          v133 = 0;
                        }
                        else
                        {
                          v143 = *(_DWORD *)(a2 + 16);
                          v144 = (v143 & dword_1039BF80[v141]) << *(_DWORD *)(a2 + 20);
                          *(_DWORD *)(a2 + 20) = 32 - v141;
                          v145 = v143 >> v141;
                          v133 = v144 | v140;
                          *(_DWORD *)(a2 + 16) = v145;
                        }
                        goto LABEL_218;
                      }
                      v126 = *(_DWORD **)(a2 + 28);
                      v127 = *(_DWORD *)(a2 + 16);
                      v121 = 8 - v120;
                      v128 = *(_DWORD **)(a2 + 24);
                      if ( v128 == v126 )
                      {
                        *(_DWORD *)(a2 + 20) = 1;
                        *(_DWORD *)(a2 + 16) = 0;
                        *(_BYTE *)(a2 + 4) = 1;
                      }
                      else
                      {
                        if ( v128 > v126 )
                        {
                          *(_BYTE *)(a2 + 4) = 1;
                          *(_DWORD *)(a2 + 16) = 0;
                          goto LABEL_197;
                        }
                        *(_DWORD *)(a2 + 16) = *v128;
                      }
                      *(_DWORD *)(a2 + 24) = v128 + 1;
LABEL_197:
                      if ( *(_BYTE *)(a2 + 4) )
                      {
                        LOBYTE(v121) = 0;
                      }
                      else
                      {
                        v129 = *(_DWORD *)(a2 + 16);
                        v130 = (v129 & dword_1039BF80[v121]) << *(_DWORD *)(a2 + 20);
                        *(_DWORD *)(a2 + 20) = 32 - v121;
                        v131 = v129 >> v121;
                        LOBYTE(v121) = v130 | v127;
                        *(_DWORD *)(a2 + 16) = v131;
                      }
                      goto LABEL_200;
                    }
                    v114 = *(_DWORD **)(a2 + 28);
                    v115 = *(_DWORD *)(a2 + 16);
                    v109 = 8 - v108;
                    v116 = *(_DWORD **)(a2 + 24);
                    if ( v116 == v114 )
                    {
                      *(_DWORD *)(a2 + 20) = 1;
                      *(_DWORD *)(a2 + 16) = 0;
                      *(_BYTE *)(a2 + 4) = 1;
                    }
                    else
                    {
                      if ( v116 > v114 )
                      {
                        *(_BYTE *)(a2 + 4) = 1;
                        *(_DWORD *)(a2 + 16) = 0;
                        goto LABEL_179;
                      }
                      *(_DWORD *)(a2 + 16) = *v116;
                    }
                    *(_DWORD *)(a2 + 24) = v116 + 1;
LABEL_179:
                    if ( *(_BYTE *)(a2 + 4) )
                    {
                      LOBYTE(v109) = 0;
                    }
                    else
                    {
                      v117 = *(_DWORD *)(a2 + 16);
                      v118 = (v117 & dword_1039BF80[v109]) << *(_DWORD *)(a2 + 20);
                      *(_DWORD *)(a2 + 20) = 32 - v109;
                      v119 = v117 >> v109;
                      LOBYTE(v109) = v118 | v115;
                      *(_DWORD *)(a2 + 16) = v119;
                    }
                    goto LABEL_182;
                  }
                  v102 = *(_DWORD **)(a2 + 28);
                  v103 = *(_DWORD *)(a2 + 16);
                  v97 = 8 - v96;
                  v104 = *(_DWORD **)(a2 + 24);
                  if ( v104 == v102 )
                  {
                    *(_DWORD *)(a2 + 20) = 1;
                    *(_DWORD *)(a2 + 16) = 0;
                    *(_BYTE *)(a2 + 4) = 1;
                  }
                  else
                  {
                    if ( v104 > v102 )
                    {
                      *(_BYTE *)(a2 + 4) = 1;
                      *(_DWORD *)(a2 + 16) = 0;
                      goto LABEL_161;
                    }
                    *(_DWORD *)(a2 + 16) = *v104;
                  }
                  *(_DWORD *)(a2 + 24) = v104 + 1;
LABEL_161:
                  if ( *(_BYTE *)(a2 + 4) )
                  {
                    LOBYTE(v97) = 0;
                  }
                  else
                  {
                    v105 = *(_DWORD *)(a2 + 16);
                    v106 = (v105 & dword_1039BF80[v97]) << *(_DWORD *)(a2 + 20);
                    *(_DWORD *)(a2 + 20) = 32 - v97;
                    v107 = v105 >> v97;
                    LOBYTE(v97) = v106 | v103;
                    *(_DWORD *)(a2 + 16) = v107;
                  }
                  goto LABEL_164;
                }
                v90 = *(_DWORD **)(a2 + 28);
                v91 = *(_DWORD *)(a2 + 16);
                v85 = 8 - v84;
                v92 = *(_DWORD **)(a2 + 24);
                if ( v92 == v90 )
                {
                  *(_DWORD *)(a2 + 20) = 1;
                  *(_DWORD *)(a2 + 16) = 0;
                  *(_BYTE *)(a2 + 4) = 1;
                }
                else
                {
                  if ( v92 > v90 )
                  {
                    *(_BYTE *)(a2 + 4) = 1;
                    *(_DWORD *)(a2 + 16) = 0;
                    goto LABEL_143;
                  }
                  *(_DWORD *)(a2 + 16) = *v92;
                }
                *(_DWORD *)(a2 + 24) = v92 + 1;
LABEL_143:
                if ( *(_BYTE *)(a2 + 4) )
                {
                  LOBYTE(v85) = 0;
                }
                else
                {
                  v93 = *(_DWORD *)(a2 + 16);
                  v94 = (v93 & dword_1039BF80[v85]) << *(_DWORD *)(a2 + 20);
                  *(_DWORD *)(a2 + 20) = 32 - v85;
                  v95 = v93 >> v85;
                  LOBYTE(v85) = v94 | v91;
                  *(_DWORD *)(a2 + 16) = v95;
                }
                goto LABEL_146;
              }
              v78 = *(_DWORD **)(a2 + 28);
              v79 = *(_DWORD *)(a2 + 16);
              v73 = 8 - v72;
              v80 = *(_DWORD **)(a2 + 24);
              if ( v80 == v78 )
              {
                *(_DWORD *)(a2 + 20) = 1;
                *(_DWORD *)(a2 + 16) = 0;
                *(_BYTE *)(a2 + 4) = 1;
              }
              else
              {
                if ( v80 > v78 )
                {
                  *(_BYTE *)(a2 + 4) = 1;
                  *(_DWORD *)(a2 + 16) = 0;
                  goto LABEL_125;
                }
                *(_DWORD *)(a2 + 16) = *v80;
              }
              *(_DWORD *)(a2 + 24) = v80 + 1;
LABEL_125:
              if ( *(_BYTE *)(a2 + 4) )
              {
                LOBYTE(v73) = 0;
              }
              else
              {
                v81 = *(_DWORD *)(a2 + 16);
                v82 = (v81 & dword_1039BF80[v73]) << *(_DWORD *)(a2 + 20);
                *(_DWORD *)(a2 + 20) = 32 - v73;
                v83 = v81 >> v73;
                LOBYTE(v73) = v82 | v79;
                *(_DWORD *)(a2 + 16) = v83;
              }
              goto LABEL_128;
            }
            v66 = *(_DWORD **)(a2 + 28);
            v67 = *(_DWORD *)(a2 + 16);
            v61 = 8 - v60;
            v68 = *(_DWORD **)(a2 + 24);
            if ( v68 == v66 )
            {
              *(_DWORD *)(a2 + 20) = 1;
              *(_DWORD *)(a2 + 16) = 0;
              *(_BYTE *)(a2 + 4) = 1;
            }
            else
            {
              if ( v68 > v66 )
              {
                *(_BYTE *)(a2 + 4) = 1;
                *(_DWORD *)(a2 + 16) = 0;
                goto LABEL_107;
              }
              *(_DWORD *)(a2 + 16) = *v68;
            }
            *(_DWORD *)(a2 + 24) = v68 + 1;
LABEL_107:
            if ( *(_BYTE *)(a2 + 4) )
            {
              LOBYTE(v61) = 0;
            }
            else
            {
              v69 = *(_DWORD *)(a2 + 16);
              v70 = (v69 & dword_1039BF80[v61]) << *(_DWORD *)(a2 + 20);
              *(_DWORD *)(a2 + 20) = 32 - v61;
              v71 = v69 >> v61;
              LOBYTE(v61) = v70 | v67;
              *(_DWORD *)(a2 + 16) = v71;
            }
            goto LABEL_110;
          }
          v54 = *(_DWORD **)(a2 + 28);
          v55 = *(_DWORD *)(a2 + 16);
          v49 = 8 - v48;
          v56 = *(_DWORD **)(a2 + 24);
          if ( v56 == v54 )
          {
            *(_DWORD *)(a2 + 20) = 1;
            *(_DWORD *)(a2 + 16) = 0;
            *(_BYTE *)(a2 + 4) = 1;
          }
          else
          {
            if ( v56 > v54 )
            {
              *(_BYTE *)(a2 + 4) = 1;
              *(_DWORD *)(a2 + 16) = 0;
              goto LABEL_89;
            }
            *(_DWORD *)(a2 + 16) = *v56;
          }
          *(_DWORD *)(a2 + 24) = v56 + 1;
LABEL_89:
          if ( *(_BYTE *)(a2 + 4) )
          {
            LOBYTE(v49) = 0;
          }
          else
          {
            v57 = *(_DWORD *)(a2 + 16);
            v58 = (v57 & dword_1039BF80[v49]) << *(_DWORD *)(a2 + 20);
            *(_DWORD *)(a2 + 20) = 32 - v49;
            v59 = v57 >> v49;
            LOBYTE(v49) = v58 | v55;
            *(_DWORD *)(a2 + 16) = v59;
          }
          goto LABEL_92;
        }
        v42 = *(_DWORD **)(a2 + 28);
        v43 = *(_DWORD *)(a2 + 16);
        v37 = 8 - v36;
        v44 = *(_DWORD **)(a2 + 24);
        if ( v44 == v42 )
        {
          *(_DWORD *)(a2 + 20) = 1;
          *(_DWORD *)(a2 + 16) = 0;
          *(_BYTE *)(a2 + 4) = 1;
        }
        else
        {
          if ( v44 > v42 )
          {
            *(_BYTE *)(a2 + 4) = 1;
            *(_DWORD *)(a2 + 16) = 0;
            goto LABEL_71;
          }
          *(_DWORD *)(a2 + 16) = *v44;
        }
        *(_DWORD *)(a2 + 24) = v44 + 1;
LABEL_71:
        if ( *(_BYTE *)(a2 + 4) )
        {
          LOBYTE(v37) = 0;
        }
        else
        {
          v45 = *(_DWORD *)(a2 + 16);
          v46 = (v45 & dword_1039BF80[v37]) << *(_DWORD *)(a2 + 20);
          *(_DWORD *)(a2 + 20) = 32 - v37;
          v47 = v45 >> v37;
          LOBYTE(v37) = v46 | v43;
          *(_DWORD *)(a2 + 16) = v47;
        }
        goto LABEL_74;
      }
      v30 = *(_DWORD **)(a2 + 28);
      v31 = *(_DWORD *)(a2 + 16);
      v32 = 32 - v25;
      v33 = *(_DWORD **)(a2 + 24);
      if ( v33 == v30 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_BYTE *)(a2 + 4) = 1;
      }
      else
      {
        if ( v33 > v30 )
        {
          *(_BYTE *)(a2 + 4) = 1;
          *(_DWORD *)(a2 + 16) = 0;
          goto LABEL_53;
        }
        *(_DWORD *)(a2 + 16) = *v33;
      }
      *(_DWORD *)(a2 + 24) = v33 + 1;
LABEL_53:
      if ( *(_BYTE *)(a2 + 4) )
      {
        v194 = 0.0;
      }
      else
      {
        v34 = *(_DWORD *)(a2 + 16);
        v35 = (v34 & dword_1039BF80[v32]) << *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = 32 - v32;
        LODWORD(v194) = v35 | v31;
        *(_DWORD *)(a2 + 16) = v34 >> v32;
      }
      goto LABEL_56;
    }
    v19 = *(_DWORD **)(a2 + 28);
    v20 = *(_DWORD *)(a2 + 16);
    v21 = 32 - v14;
    v22 = *(_DWORD **)(a2 + 24);
    if ( v22 == v19 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v22 > v19 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_35;
      }
      *(_DWORD *)(a2 + 16) = *v22;
    }
    *(_DWORD *)(a2 + 24) = v22 + 1;
LABEL_35:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v193 = 0.0;
    }
    else
    {
      v23 = *(_DWORD *)(a2 + 16);
      v24 = (v23 & dword_1039BF80[v21]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v21;
      LODWORD(v193) = v24 | v20;
      *(_DWORD *)(a2 + 16) = v23 >> v21;
    }
    goto LABEL_38;
  }
  return result;
}
