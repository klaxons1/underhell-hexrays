unsigned int __cdecl sub_1012A940(int a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int v5; // eax
  int v6; // ecx
  bool v7; // zf
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  int v14; // edx
  _DWORD *v15; // edx
  int v16; // edi
  int v17; // eax
  _DWORD *v18; // ecx
  unsigned int v19; // edx
  int v20; // ebx
  int v21; // edi
  unsigned int v22; // eax
  int v23; // edx
  _DWORD *v24; // eax
  _DWORD *v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // ecx
  _DWORD *v30; // edx
  int v31; // edx
  _DWORD *v32; // edx
  int v33; // edi
  int v34; // eax
  _DWORD *v35; // ecx
  unsigned int v36; // edx
  int v37; // ebx
  unsigned int v38; // eax
  int v39; // edx
  _DWORD *v40; // eax
  _DWORD *v41; // ecx
  int v42; // ecx
  float v43; // eax
  int v44; // ecx
  _DWORD *v45; // ecx
  _DWORD *v46; // edx
  _DWORD *v47; // edx
  int v48; // edi
  int v49; // eax
  _DWORD *v50; // ecx
  unsigned int v51; // edx
  int v52; // ebx
  unsigned int v53; // eax
  int v54; // edx
  _DWORD *v55; // eax
  _DWORD *v56; // ecx
  int v57; // ecx
  float v58; // eax
  int v59; // ecx
  _DWORD *v60; // ecx
  _DWORD *v61; // edx
  _DWORD *v62; // edx
  int v63; // edi
  int v64; // eax
  _DWORD *v65; // ecx
  unsigned int v66; // edx
  int v67; // ebx
  unsigned int v68; // eax
  int v69; // edx
  _DWORD *v70; // eax
  _DWORD *v71; // ecx
  int v72; // ecx
  float v73; // eax
  int v74; // ecx
  _DWORD *v75; // ecx
  _DWORD *v76; // edx
  _DWORD *v77; // edx
  int v78; // edi
  int v79; // eax
  _DWORD *v80; // ecx
  unsigned int v81; // edx
  int v82; // ebx
  unsigned int v83; // eax
  int v84; // edx
  _DWORD *v85; // eax
  _DWORD *v86; // ecx
  int v87; // ecx
  float v88; // eax
  int v89; // ecx
  _DWORD *v90; // ecx
  _DWORD *v91; // edx
  _DWORD *v92; // edx
  int v93; // edi
  int v94; // eax
  _DWORD *v95; // ecx
  unsigned int v96; // edx
  int v97; // ebx
  unsigned int v98; // eax
  int v99; // edx
  _DWORD *v100; // eax
  _DWORD *v101; // ecx
  int v102; // ecx
  float v103; // eax
  int v104; // ecx
  _DWORD *v105; // ecx
  _DWORD *v106; // edx
  _DWORD *v107; // edx
  int v108; // edi
  int v109; // eax
  _DWORD *v110; // ecx
  unsigned int v111; // edx
  int v112; // ebx
  unsigned int v113; // eax
  int v114; // edx
  _DWORD *v115; // eax
  _DWORD *v116; // ecx
  int v117; // ecx
  float v118; // eax
  int v119; // ecx
  _DWORD *v120; // ecx
  _DWORD *v121; // edx
  _DWORD *v122; // edx
  int v123; // edi
  int v124; // eax
  _DWORD *v125; // ecx
  unsigned int v126; // edx
  int v127; // ebx
  unsigned int v128; // eax
  int v129; // edx
  _DWORD *v130; // eax
  _DWORD *v131; // ecx
  int v132; // ecx
  int v133; // eax
  int v134; // ecx
  int v135; // edi
  _DWORD *v136; // ecx
  _DWORD *v137; // edx
  _DWORD *v138; // edx
  int v139; // edi
  int v140; // eax
  _DWORD *v141; // ecx
  unsigned int v142; // edx
  int v143; // ebx
  unsigned int v144; // eax
  int v145; // edx
  _DWORD *v146; // eax
  _DWORD *v147; // ecx
  int v148; // ecx
  unsigned int v149; // eax
  char v150; // dl
  int v151; // ecx
  _DWORD *v152; // ecx
  int v153; // ecx
  _DWORD *v154; // edx
  int v155; // edi
  _DWORD *v156; // ecx
  unsigned int v157; // edx
  int v158; // ebx
  unsigned int v159; // edx
  unsigned int v160; // eax
  int v161; // edx
  _DWORD *v162; // eax
  _DWORD *v163; // ecx
  int v164; // ecx
  unsigned int v165; // eax
  int v166; // edx
  int v167; // ecx
  int v168; // eax
  int *v169; // eax
  int *v170; // ecx
  int v171; // ecx
  _DWORD *v172; // edx
  int v173; // edi
  int v174; // eax
  _DWORD *v175; // ecx
  unsigned int v176; // edx
  int v177; // ebx
  unsigned int v178; // edx
  unsigned int v179; // eax
  int v180; // ecx
  _DWORD *v181; // eax
  _DWORD *v182; // edx
  int v183; // ecx
  unsigned int v184; // eax
  int v185; // edi
  int v186; // ecx
  _DWORD *v187; // eax
  _DWORD *v188; // ecx
  _DWORD *v189; // edx
  int v190; // edi
  int v191; // eax
  _DWORD *v192; // ecx
  unsigned int v193; // edx
  int v194; // ebx
  unsigned int v195; // eax
  int v196; // ecx
  _DWORD *v197; // eax
  _DWORD *v198; // edx
  int v199; // ecx
  unsigned int v200; // eax
  __int16 v201; // di
  int v202; // ecx
  _DWORD *v203; // eax
  _DWORD *v204; // ecx
  _DWORD *v205; // edx
  int v206; // edi
  int v207; // eax
  _DWORD *v208; // ecx
  unsigned int v209; // edx
  int v210; // ebx
  unsigned int v211; // eax
  int v212; // edx
  unsigned int result; // eax
  _DWORD *v214; // ecx
  int v215; // ecx
  int v216; // ecx
  unsigned int v217; // eax
  __int16 v218; // di
  int v219; // ecx
  _DWORD *v220; // ecx
  int v221; // edx
  _DWORD *v222; // edx
  int v223; // edi
  _DWORD *v224; // ecx
  unsigned int v225; // edx
  int v226; // ebx
  float v227; // [esp+14h] [ebp+8h]
  float v228; // [esp+14h] [ebp+8h]
  float v229; // [esp+14h] [ebp+8h]
  float v230; // [esp+14h] [ebp+8h]
  float v231; // [esp+14h] [ebp+8h]
  float v232; // [esp+14h] [ebp+8h]

  v3 = a3;
  sub_100B36D0(a2, a3);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v5 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v8 = *(_DWORD **)(a1 + 24);
    v9 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v8 + 1;
    }
    else if ( v8 <= v9 )
    {
      *(_DWORD *)(a1 + 16) = *v8;
      *(_DWORD *)(a1 + 24) = v8 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v5 >> 1;
  }
  if ( !v6 )
  {
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 4) + 1;
    goto LABEL_28;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 < 32 )
  {
    v15 = *(_DWORD **)(a1 + 28);
    v16 = *(_DWORD *)(a1 + 16);
    v17 = 32 - v10;
    v18 = *(_DWORD **)(a1 + 24);
    if ( v18 == v15 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v18 > v15 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 16) = *v18;
    }
    *(_DWORD *)(a1 + 24) = v18 + 1;
LABEL_24:
    if ( *(_BYTE *)(a1 + 4) )
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 16);
      v20 = (v19 & dword_1039BF80[v17]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v17;
      v21 = v20 | v16;
      v3 = a3;
      *(_DWORD *)(a1 + 16) = v19 >> v17;
      *(_DWORD *)(a2 + 4) = v21;
    }
    goto LABEL_28;
  }
  v11 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v10 - 32;
  if ( v10 == 32 )
  {
    v12 = *(_DWORD **)(a1 + 24);
    v13 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v12 == v13 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v12 + 1;
      *(_DWORD *)(a2 + 4) = v11;
    }
    else
    {
      if ( v12 <= v13 )
      {
        *(_DWORD *)(a1 + 16) = *v12;
        v14 = a2;
        *(_DWORD *)(a1 + 24) = v12 + 1;
      }
      else
      {
        v14 = a2;
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_DWORD *)(v14 + 4) = v11;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a2 + 4) = v11;
  }
LABEL_28:
  v22 = *(_DWORD *)(a1 + 16);
  v23 = v22 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v24 = *(_DWORD **)(a1 + 24);
    v25 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v24 == v25 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v24 + 1;
    }
    else if ( v24 <= v25 )
    {
      *(_DWORD *)(a1 + 16) = *v24;
      *(_DWORD *)(a1 + 24) = v24 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v22 >> 1;
  }
  if ( !v23 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8) + 1;
    goto LABEL_55;
  }
  v26 = *(_DWORD *)(a1 + 20);
  if ( v26 < 32 )
  {
    v32 = *(_DWORD **)(a1 + 28);
    v33 = *(_DWORD *)(a1 + 16);
    v34 = 32 - v26;
    v35 = *(_DWORD **)(a1 + 24);
    if ( v35 == v32 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v35 > v32 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 16) = *v35;
    }
    *(_DWORD *)(a1 + 24) = v35 + 1;
LABEL_51:
    if ( *(_BYTE *)(a1 + 4) )
    {
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v36 = *(_DWORD *)(a1 + 16);
      v37 = (v36 & dword_1039BF80[v34]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v34;
      *(_DWORD *)(a1 + 16) = v36 >> v34;
      *(_DWORD *)(a2 + 8) = v37 | v33;
    }
    goto LABEL_55;
  }
  v27 = *(_DWORD *)(a1 + 16);
  v28 = v26 - 32;
  *(_DWORD *)(a1 + 20) = v28;
  if ( v28 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a2 + 8) = v27;
  }
  else
  {
    v29 = *(_DWORD **)(a1 + 24);
    v30 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v29 == v30 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 24) = v29 + 1;
      *(_DWORD *)(a2 + 8) = v27;
    }
    else
    {
      if ( v29 <= v30 )
      {
        *(_DWORD *)(a1 + 16) = *v29;
        v31 = a2;
        *(_DWORD *)(a1 + 24) = v29 + 1;
      }
      else
      {
        v31 = a2;
        *(_DWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 4) = 1;
      }
      *(_DWORD *)(v31 + 8) = v27;
    }
  }
LABEL_55:
  v38 = *(_DWORD *)(a1 + 16);
  v39 = v38 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v40 = *(_DWORD **)(a1 + 24);
    v41 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v40 == v41 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v40 + 1;
    }
    else if ( v40 <= v41 )
    {
      *(_DWORD *)(a1 + 16) = *v40;
      *(_DWORD *)(a1 + 24) = v40 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v38 >> 1;
  }
  if ( v39 )
  {
    v42 = *(_DWORD *)(a1 + 20);
    if ( v42 >= 32 )
    {
      v43 = *(float *)(a1 + 16);
      v44 = v42 - 32;
      *(_DWORD *)(a1 + 20) = v44;
      if ( v44 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v227 = v43;
      }
      else
      {
        v45 = *(_DWORD **)(a1 + 24);
        v46 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v45 == v46 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v45 + 1;
          v227 = v43;
        }
        else
        {
          if ( v45 <= v46 )
          {
            *(_DWORD *)(a1 + 16) = *v45;
            *(_DWORD *)(a1 + 24) = v45 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v227 = v43;
        }
      }
      goto LABEL_81;
    }
    v47 = *(_DWORD **)(a1 + 28);
    v48 = *(_DWORD *)(a1 + 16);
    v49 = 32 - v42;
    v50 = *(_DWORD **)(a1 + 24);
    if ( v50 == v47 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v50 > v47 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_78;
      }
      *(_DWORD *)(a1 + 16) = *v50;
    }
    *(_DWORD *)(a1 + 24) = v50 + 1;
LABEL_78:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v227 = 0.0;
    }
    else
    {
      v51 = *(_DWORD *)(a1 + 16);
      v52 = (v51 & dword_1039BF80[v49]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v49;
      LODWORD(v227) = v52 | v48;
      *(_DWORD *)(a1 + 16) = v51 >> v49;
    }
LABEL_81:
    *(float *)(a2 + 12) = v227;
  }
  v53 = *(_DWORD *)(a1 + 16);
  v54 = v53 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v55 = *(_DWORD **)(a1 + 24);
    v56 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v55 == v56 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v55 + 1;
    }
    else if ( v55 <= v56 )
    {
      *(_DWORD *)(a1 + 16) = *v55;
      *(_DWORD *)(a1 + 24) = v55 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v53 >> 1;
  }
  if ( v54 )
  {
    v57 = *(_DWORD *)(a1 + 20);
    if ( v57 >= 32 )
    {
      v58 = *(float *)(a1 + 16);
      v59 = v57 - 32;
      *(_DWORD *)(a1 + 20) = v59;
      if ( v59 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v228 = v58;
      }
      else
      {
        v60 = *(_DWORD **)(a1 + 24);
        v61 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v60 == v61 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v60 + 1;
          v228 = v58;
        }
        else
        {
          if ( v60 <= v61 )
          {
            *(_DWORD *)(a1 + 16) = *v60;
            *(_DWORD *)(a1 + 24) = v60 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v228 = v58;
        }
      }
      goto LABEL_108;
    }
    v62 = *(_DWORD **)(a1 + 28);
    v63 = *(_DWORD *)(a1 + 16);
    v64 = 32 - v57;
    v65 = *(_DWORD **)(a1 + 24);
    if ( v65 == v62 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v65 > v62 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_105;
      }
      *(_DWORD *)(a1 + 16) = *v65;
    }
    *(_DWORD *)(a1 + 24) = v65 + 1;
LABEL_105:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v228 = 0.0;
    }
    else
    {
      v66 = *(_DWORD *)(a1 + 16);
      v67 = (v66 & dword_1039BF80[v64]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v64;
      LODWORD(v228) = v67 | v63;
      *(_DWORD *)(a1 + 16) = v66 >> v64;
    }
LABEL_108:
    *(float *)(a2 + 16) = v228;
  }
  v68 = *(_DWORD *)(a1 + 16);
  v69 = v68 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v70 = *(_DWORD **)(a1 + 24);
    v71 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v70 == v71 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v70 + 1;
    }
    else if ( v70 <= v71 )
    {
      *(_DWORD *)(a1 + 16) = *v70;
      *(_DWORD *)(a1 + 24) = v70 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v68 >> 1;
  }
  if ( v69 )
  {
    v72 = *(_DWORD *)(a1 + 20);
    if ( v72 >= 32 )
    {
      v73 = *(float *)(a1 + 16);
      v74 = v72 - 32;
      *(_DWORD *)(a1 + 20) = v74;
      if ( v74 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v229 = v73;
      }
      else
      {
        v75 = *(_DWORD **)(a1 + 24);
        v76 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v75 == v76 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v75 + 1;
          v229 = v73;
        }
        else
        {
          if ( v75 <= v76 )
          {
            *(_DWORD *)(a1 + 16) = *v75;
            *(_DWORD *)(a1 + 24) = v75 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v229 = v73;
        }
      }
      goto LABEL_135;
    }
    v77 = *(_DWORD **)(a1 + 28);
    v78 = *(_DWORD *)(a1 + 16);
    v79 = 32 - v72;
    v80 = *(_DWORD **)(a1 + 24);
    if ( v80 == v77 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v80 > v77 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_132;
      }
      *(_DWORD *)(a1 + 16) = *v80;
    }
    *(_DWORD *)(a1 + 24) = v80 + 1;
LABEL_132:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v229 = 0.0;
    }
    else
    {
      v81 = *(_DWORD *)(a1 + 16);
      v82 = (v81 & dword_1039BF80[v79]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v79;
      LODWORD(v229) = v82 | v78;
      *(_DWORD *)(a1 + 16) = v81 >> v79;
    }
LABEL_135:
    *(float *)(a2 + 20) = v229;
  }
  v83 = *(_DWORD *)(a1 + 16);
  v84 = v83 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v85 = *(_DWORD **)(a1 + 24);
    v86 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v85 == v86 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v85 + 1;
    }
    else if ( v85 <= v86 )
    {
      *(_DWORD *)(a1 + 16) = *v85;
      *(_DWORD *)(a1 + 24) = v85 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v83 >> 1;
  }
  if ( v84 )
  {
    v87 = *(_DWORD *)(a1 + 20);
    if ( v87 >= 32 )
    {
      v88 = *(float *)(a1 + 16);
      v89 = v87 - 32;
      *(_DWORD *)(a1 + 20) = v89;
      if ( v89 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v230 = v88;
      }
      else
      {
        v90 = *(_DWORD **)(a1 + 24);
        v91 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v90 == v91 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v90 + 1;
          v230 = v88;
        }
        else
        {
          if ( v90 <= v91 )
          {
            *(_DWORD *)(a1 + 16) = *v90;
            *(_DWORD *)(a1 + 24) = v90 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v230 = v88;
        }
      }
      goto LABEL_162;
    }
    v92 = *(_DWORD **)(a1 + 28);
    v93 = *(_DWORD *)(a1 + 16);
    v94 = 32 - v87;
    v95 = *(_DWORD **)(a1 + 24);
    if ( v95 == v92 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v95 > v92 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_159;
      }
      *(_DWORD *)(a1 + 16) = *v95;
    }
    *(_DWORD *)(a1 + 24) = v95 + 1;
LABEL_159:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v230 = 0.0;
    }
    else
    {
      v96 = *(_DWORD *)(a1 + 16);
      v97 = (v96 & dword_1039BF80[v94]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v94;
      LODWORD(v230) = v97 | v93;
      *(_DWORD *)(a1 + 16) = v96 >> v94;
    }
LABEL_162:
    *(float *)(a2 + 24) = v230;
  }
  v98 = *(_DWORD *)(a1 + 16);
  v99 = v98 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v100 = *(_DWORD **)(a1 + 24);
    v101 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v100 == v101 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v100 + 1;
    }
    else if ( v100 <= v101 )
    {
      *(_DWORD *)(a1 + 16) = *v100;
      *(_DWORD *)(a1 + 24) = v100 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v98 >> 1;
  }
  if ( v99 )
  {
    v102 = *(_DWORD *)(a1 + 20);
    if ( v102 >= 32 )
    {
      v103 = *(float *)(a1 + 16);
      v104 = v102 - 32;
      *(_DWORD *)(a1 + 20) = v104;
      if ( v104 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v231 = v103;
      }
      else
      {
        v105 = *(_DWORD **)(a1 + 24);
        v106 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v105 == v106 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v105 + 1;
          v231 = v103;
        }
        else
        {
          if ( v105 <= v106 )
          {
            *(_DWORD *)(a1 + 16) = *v105;
            *(_DWORD *)(a1 + 24) = v105 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v231 = v103;
        }
      }
      goto LABEL_189;
    }
    v107 = *(_DWORD **)(a1 + 28);
    v108 = *(_DWORD *)(a1 + 16);
    v109 = 32 - v102;
    v110 = *(_DWORD **)(a1 + 24);
    if ( v110 == v107 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v110 > v107 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_186;
      }
      *(_DWORD *)(a1 + 16) = *v110;
    }
    *(_DWORD *)(a1 + 24) = v110 + 1;
LABEL_186:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v231 = 0.0;
    }
    else
    {
      v111 = *(_DWORD *)(a1 + 16);
      v112 = (v111 & dword_1039BF80[v109]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v109;
      LODWORD(v231) = v112 | v108;
      *(_DWORD *)(a1 + 16) = v111 >> v109;
    }
LABEL_189:
    *(float *)(a2 + 28) = v231;
  }
  v113 = *(_DWORD *)(a1 + 16);
  v114 = v113 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v115 = *(_DWORD **)(a1 + 24);
    v116 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v115 == v116 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v115 + 1;
    }
    else if ( v115 <= v116 )
    {
      *(_DWORD *)(a1 + 16) = *v115;
      *(_DWORD *)(a1 + 24) = v115 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v113 >> 1;
  }
  if ( v114 )
  {
    v117 = *(_DWORD *)(a1 + 20);
    if ( v117 >= 32 )
    {
      v118 = *(float *)(a1 + 16);
      v119 = v117 - 32;
      *(_DWORD *)(a1 + 20) = v119;
      if ( v119 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v232 = v118;
      }
      else
      {
        v120 = *(_DWORD **)(a1 + 24);
        v121 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v120 == v121 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v120 + 1;
          v232 = v118;
        }
        else
        {
          if ( v120 <= v121 )
          {
            *(_DWORD *)(a1 + 16) = *v120;
            *(_DWORD *)(a1 + 24) = v120 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v232 = v118;
        }
      }
      goto LABEL_216;
    }
    v122 = *(_DWORD **)(a1 + 28);
    v123 = *(_DWORD *)(a1 + 16);
    v124 = 32 - v117;
    v125 = *(_DWORD **)(a1 + 24);
    if ( v125 == v122 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v125 > v122 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_213;
      }
      *(_DWORD *)(a1 + 16) = *v125;
    }
    *(_DWORD *)(a1 + 24) = v125 + 1;
LABEL_213:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v232 = 0.0;
    }
    else
    {
      v126 = *(_DWORD *)(a1 + 16);
      v127 = (v126 & dword_1039BF80[v124]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v124;
      LODWORD(v232) = v127 | v123;
      *(_DWORD *)(a1 + 16) = v126 >> v124;
    }
LABEL_216:
    *(float *)(a2 + 32) = v232;
  }
  v128 = *(_DWORD *)(a1 + 16);
  v129 = v128 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v130 = *(_DWORD **)(a1 + 24);
    v131 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v130 == v131 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v130 + 1;
    }
    else if ( v130 <= v131 )
    {
      *(_DWORD *)(a1 + 16) = *v130;
      *(_DWORD *)(a1 + 24) = v130 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v128 >> 1;
  }
  if ( v129 )
  {
    v132 = *(_DWORD *)(a1 + 20);
    if ( v132 >= 32 )
    {
      v133 = *(_DWORD *)(a1 + 16);
      v134 = v132 - 32;
      *(_DWORD *)(a1 + 20) = v134;
      if ( v134 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        v135 = v133;
      }
      else
      {
        v136 = *(_DWORD **)(a1 + 24);
        v137 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v136 == v137 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v136 + 1;
          v135 = v133;
        }
        else
        {
          if ( v136 <= v137 )
          {
            *(_DWORD *)(a1 + 16) = *v136;
            *(_DWORD *)(a1 + 24) = v136 + 1;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          v135 = v133;
        }
      }
      goto LABEL_243;
    }
    v138 = *(_DWORD **)(a1 + 28);
    v139 = *(_DWORD *)(a1 + 16);
    v140 = 32 - v132;
    v141 = *(_DWORD **)(a1 + 24);
    if ( v141 == v138 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v141 > v138 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_240;
      }
      *(_DWORD *)(a1 + 16) = *v141;
    }
    *(_DWORD *)(a1 + 24) = v141 + 1;
LABEL_240:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v135 = 0;
    }
    else
    {
      v142 = *(_DWORD *)(a1 + 16);
      v143 = (v142 & dword_1039BF80[v140]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v140;
      v135 = v143 | v139;
      *(_DWORD *)(a1 + 16) = v142 >> v140;
    }
LABEL_243:
    *(_DWORD *)(a2 + 36) = v135;
  }
  v144 = *(_DWORD *)(a1 + 16);
  v145 = v144 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v146 = *(_DWORD **)(a1 + 24);
    v147 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v146 == v147 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v146 + 1;
    }
    else if ( v146 <= v147 )
    {
      *(_DWORD *)(a1 + 16) = *v146;
      *(_DWORD *)(a1 + 24) = v146 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v144 >> 1;
  }
  if ( v145 )
  {
    v148 = *(_DWORD *)(a1 + 20);
    if ( v148 >= 8 )
    {
      v149 = *(_DWORD *)(a1 + 16);
      v150 = v149;
      v151 = v148 - 8;
      *(_DWORD *)(a1 + 20) = v151;
      if ( v151 )
      {
        *(_DWORD *)(a1 + 16) = v149 >> 8;
      }
      else
      {
        v149 = *(_DWORD *)(a1 + 24);
        v152 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( (_DWORD *)v149 == v152 )
        {
          *(_DWORD *)(a1 + 24) = v149 + 4;
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          LOBYTE(v149) = v150;
        }
        else
        {
          if ( v149 <= (unsigned int)v152 )
          {
            v153 = *(_DWORD *)v149;
            *(_DWORD *)(a1 + 24) = v149 + 4;
            *(_DWORD *)(a1 + 16) = v153;
          }
          else
          {
            *(_BYTE *)(a1 + 4) = 1;
            *(_DWORD *)(a1 + 16) = 0;
          }
          LOBYTE(v149) = v150;
        }
      }
      goto LABEL_270;
    }
    v154 = *(_DWORD **)(a1 + 28);
    v155 = *(_DWORD *)(a1 + 16);
    v149 = 8 - v148;
    v156 = *(_DWORD **)(a1 + 24);
    if ( v156 == v154 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v156 > v154 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_267;
      }
      *(_DWORD *)(a1 + 16) = *v156;
    }
    *(_DWORD *)(a1 + 24) = v156 + 1;
LABEL_267:
    if ( *(_BYTE *)(a1 + 4) )
    {
      LOBYTE(v149) = 0;
    }
    else
    {
      v157 = *(_DWORD *)(a1 + 16);
      v158 = (v157 & dword_1039BF80[v149]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v149;
      v159 = v157 >> v149;
      LOBYTE(v149) = v158 | v155;
      *(_DWORD *)(a1 + 16) = v159;
    }
LABEL_270:
    *(_BYTE *)(a2 + 40) = v149;
  }
  v160 = *(_DWORD *)(a1 + 16);
  v161 = v160 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v162 = *(_DWORD **)(a1 + 24);
    v163 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v162 == v163 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v162 + 1;
    }
    else if ( v162 <= v163 )
    {
      *(_DWORD *)(a1 + 16) = *v162;
      *(_DWORD *)(a1 + 24) = v162 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v160 >> 1;
  }
  if ( !v161 )
    goto LABEL_323;
  v164 = *(_DWORD *)(a1 + 20);
  if ( v164 < 11 )
  {
    v172 = *(_DWORD **)(a1 + 28);
    v173 = *(_DWORD *)(a1 + 16);
    v174 = 11 - v164;
    v175 = *(_DWORD **)(a1 + 24);
    if ( v175 == v172 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v175 > v172 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_294;
      }
      *(_DWORD *)(a1 + 16) = *v175;
    }
    *(_DWORD *)(a1 + 24) = v175 + 1;
LABEL_294:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v168 = 0;
    }
    else
    {
      v176 = *(_DWORD *)(a1 + 16);
      v177 = (v176 & dword_1039BF80[v174]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v174;
      v178 = v176 >> v174;
      v168 = v177 | v173;
      *(_DWORD *)(a1 + 16) = v178;
    }
    goto LABEL_297;
  }
  v165 = *(_DWORD *)(a1 + 16);
  v166 = v165 & 0x7FF;
  v167 = v164 - 11;
  *(_DWORD *)(a1 + 20) = v167;
  if ( v167 )
  {
    *(_DWORD *)(a1 + 16) = v165 >> 11;
    v168 = v165 & 0x7FF;
  }
  else
  {
    v169 = *(int **)(a1 + 24);
    v170 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v169 == v170 )
    {
      *(_DWORD *)(a1 + 24) = v169 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v168 = v166;
    }
    else
    {
      if ( v169 <= v170 )
      {
        v171 = *v169;
        *(_DWORD *)(a1 + 24) = v169 + 1;
        *(_DWORD *)(a1 + 16) = v171;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v168 = v166;
    }
  }
LABEL_297:
  *(_DWORD *)(a2 + 44) = v168;
  v179 = *(_DWORD *)(a1 + 16);
  v180 = v179 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v181 = *(_DWORD **)(a1 + 24);
    v182 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v181 == v182 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v181 + 1;
    }
    else if ( v181 <= v182 )
    {
      *(_DWORD *)(a1 + 16) = *v181;
      *(_DWORD *)(a1 + 24) = v181 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v179 >> 1;
  }
  if ( v180 )
  {
    v183 = *(_DWORD *)(a1 + 20);
    if ( v183 >= 6 )
    {
      v184 = *(_DWORD *)(a1 + 16);
      v185 = v184 & 0x3F;
      v186 = v183 - 6;
      *(_DWORD *)(a1 + 20) = v186;
      if ( v186 )
      {
        *(_DWORD *)(a1 + 16) = v184 >> 6;
      }
      else
      {
        v187 = *(_DWORD **)(a1 + 24);
        v188 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v187 == v188 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v187 + 1;
        }
        else if ( v187 <= v188 )
        {
          *(_DWORD *)(a1 + 16) = *v187;
          *(_DWORD *)(a1 + 24) = v187 + 1;
        }
        else
        {
          *(_BYTE *)(a1 + 4) = 1;
          *(_DWORD *)(a1 + 16) = 0;
        }
      }
LABEL_322:
      *(_DWORD *)(a2 + 48) = v185;
      goto LABEL_323;
    }
    v189 = *(_DWORD **)(a1 + 28);
    v190 = *(_DWORD *)(a1 + 16);
    v191 = 6 - v183;
    v192 = *(_DWORD **)(a1 + 24);
    if ( v192 == v189 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v192 > v189 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_319;
      }
      *(_DWORD *)(a1 + 16) = *v192;
    }
    *(_DWORD *)(a1 + 24) = v192 + 1;
LABEL_319:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v185 = 0;
    }
    else
    {
      v193 = *(_DWORD *)(a1 + 16);
      v194 = (v193 & dword_1039BF80[v191]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v191;
      v185 = v194 | v190;
      *(_DWORD *)(a1 + 16) = v193 >> v191;
    }
    goto LABEL_322;
  }
LABEL_323:
  *(_DWORD *)(a2 + 52) = sub_10232AE0(*(_DWORD *)(a2 + 4)) & 0x7FFFFFFF;
  v195 = *(_DWORD *)(a1 + 16);
  v196 = v195 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    v197 = *(_DWORD **)(a1 + 24);
    v198 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v197 == v198 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v197 + 1;
    }
    else if ( v197 <= v198 )
    {
      *(_DWORD *)(a1 + 16) = *v197;
      *(_DWORD *)(a1 + 24) = v197 + 1;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v195 >> 1;
  }
  if ( v196 )
  {
    v199 = *(_DWORD *)(a1 + 20);
    if ( v199 >= 16 )
    {
      v200 = *(_DWORD *)(a1 + 16);
      v201 = v200;
      v202 = v199 - 16;
      *(_DWORD *)(a1 + 20) = v202;
      if ( v202 )
      {
        *(_DWORD *)(a1 + 16) = HIWORD(v200);
      }
      else
      {
        v203 = *(_DWORD **)(a1 + 24);
        v204 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( v203 == v204 )
        {
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = v203 + 1;
        }
        else if ( v203 <= v204 )
        {
          *(_DWORD *)(a1 + 16) = *v203;
          *(_DWORD *)(a1 + 24) = v203 + 1;
        }
        else
        {
          *(_BYTE *)(a1 + 4) = 1;
          *(_DWORD *)(a1 + 16) = 0;
        }
      }
LABEL_348:
      *(_WORD *)(a2 + 56) = v201;
      goto LABEL_349;
    }
    v205 = *(_DWORD **)(a1 + 28);
    v206 = *(_DWORD *)(a1 + 16);
    v207 = 16 - v199;
    v208 = *(_DWORD **)(a1 + 24);
    if ( v208 == v205 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v208 > v205 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_345;
      }
      *(_DWORD *)(a1 + 16) = *v208;
    }
    *(_DWORD *)(a1 + 24) = v208 + 1;
LABEL_345:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v201 = 0;
    }
    else
    {
      v209 = *(_DWORD *)(a1 + 16);
      v210 = (v209 & dword_1039BF80[v207]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v207;
      v201 = v210 | v206;
      *(_DWORD *)(a1 + 16) = v209 >> v207;
    }
    goto LABEL_348;
  }
LABEL_349:
  v211 = *(_DWORD *)(a1 + 16);
  v212 = v211 & 1;
  v7 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v7 )
  {
    result = *(_DWORD *)(a1 + 24);
    v214 = *(_DWORD **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( (_DWORD *)result == v214 )
    {
      result += 4;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = result;
    }
    else if ( result <= (unsigned int)v214 )
    {
      v215 = *(_DWORD *)result;
      result += 4;
      *(_DWORD *)(a1 + 16) = v215;
      *(_DWORD *)(a1 + 24) = result;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    result = v211 >> 1;
    *(_DWORD *)(a1 + 16) = result;
  }
  if ( v212 )
  {
    v216 = *(_DWORD *)(a1 + 20);
    if ( v216 >= 16 )
    {
      v217 = *(_DWORD *)(a1 + 16);
      v218 = v217;
      v219 = v216 - 16;
      *(_DWORD *)(a1 + 20) = v219;
      if ( v219 )
      {
        result = HIWORD(v217);
        *(_DWORD *)(a1 + 16) = result;
        *(_WORD *)(a2 + 58) = v218;
      }
      else
      {
        result = *(_DWORD *)(a1 + 24);
        v220 = *(_DWORD **)(a1 + 28);
        *(_DWORD *)(a1 + 20) = 32;
        if ( (_DWORD *)result == v220 )
        {
          *(_DWORD *)(a1 + 16) = 0;
          result += 4;
          *(_DWORD *)(a1 + 20) = 1;
          *(_DWORD *)(a1 + 24) = result;
          *(_WORD *)(a2 + 58) = v218;
        }
        else
        {
          if ( result <= (unsigned int)v220 )
          {
            *(_DWORD *)(a1 + 16) = *(_DWORD *)result;
            v221 = a2;
            result += 4;
            *(_DWORD *)(a1 + 24) = result;
          }
          else
          {
            v221 = a2;
            *(_DWORD *)(a1 + 16) = 0;
            *(_BYTE *)(a1 + 4) = 1;
          }
          *(_WORD *)(v221 + 58) = v218;
        }
      }
      return result;
    }
    v222 = *(_DWORD **)(a1 + 28);
    v223 = *(_DWORD *)(a1 + 16);
    result = 16 - v216;
    v224 = *(_DWORD **)(a1 + 24);
    if ( v224 == v222 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v224 > v222 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_372;
      }
      *(_DWORD *)(a1 + 16) = *v224;
    }
    *(_DWORD *)(a1 + 24) = v224 + 1;
LABEL_372:
    if ( *(_BYTE *)(a1 + 4) )
    {
      *(_WORD *)(a2 + 58) = 0;
    }
    else
    {
      v225 = *(_DWORD *)(a1 + 16);
      v226 = (v225 & dword_1039BF80[result]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - result;
      *(_DWORD *)(a1 + 16) = v225 >> result;
      *(_WORD *)(a2 + 58) = v226 | v223;
    }
  }
  return result;
}
