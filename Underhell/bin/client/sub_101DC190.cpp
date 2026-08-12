double __cdecl sub_101DC190(
        float *a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        float *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11)
{
  int v11; // edx
  _DWORD *v12; // eax
  _BYTE *v13; // ecx
  double v14; // st7
  float *v15; // ebx
  float *v16; // eax
  int v17; // edi
  double v18; // st7
  float *v19; // edi
  _BYTE *v20; // esi
  int v21; // ebx
  double result; // st7
  unsigned __int8 v23; // dl
  int v24; // ebx
  double v25; // st7
  int v26; // edi
  float *v27; // esi
  int v28; // eax
  double v29; // st6
  float *v30; // ecx
  double v31; // st5
  double v32; // st4
  double v33; // st2
  double v34; // st6
  double v35; // st5
  double v36; // st4
  float *v37; // ecx
  double v38; // st2
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // st5
  int v46; // edi
  int v47; // esi
  float *v48; // ebx
  double v49; // st7
  int v50; // ecx
  double v51; // st5
  float *v52; // edx
  float *v53; // edx
  double v54; // st5
  float *v55; // edi
  _BYTE *v56; // esi
  int v57; // ebx
  int v58; // ebx
  double v59; // st7
  int v60; // edi
  float *v61; // esi
  int v62; // eax
  double v63; // st6
  float *v64; // ecx
  double v65; // st5
  double v66; // st4
  double v67; // st2
  double v68; // st6
  double v69; // st5
  double v70; // st4
  float *v71; // ecx
  double v72; // st2
  double v73; // st7
  double v74; // st5
  double v75; // st7
  double v76; // st5
  double v77; // rtt
  int v78; // edi
  int v79; // esi
  float *v80; // ebx
  double v81; // st7
  int v82; // ecx
  double v83; // st5
  float *v84; // edx
  float *v85; // edx
  double v86; // st5
  float *v87; // edi
  _BYTE *v88; // esi
  int v89; // ebx
  int v90; // ebx
  double v91; // st7
  int v92; // edi
  float *v93; // esi
  int v94; // eax
  double v95; // st6
  float *v96; // ecx
  double v97; // st5
  double v98; // st4
  double v99; // st2
  double v100; // st6
  double v101; // st5
  double v102; // st4
  float *v103; // ecx
  double v104; // st2
  double v105; // st7
  double v106; // st5
  double v107; // st7
  double v108; // st5
  double v109; // rt2
  int v110; // edi
  int v111; // esi
  float *v112; // ebx
  double v113; // st7
  int v114; // ecx
  double v115; // st5
  float *v116; // edx
  float *v117; // edx
  double v118; // st5
  double v119; // st7
  float v120; // ecx
  float v121; // edx
  float v122; // ecx
  float v123; // edx
  float v124; // [esp+18h] [ebp-15D8h]
  float v125; // [esp+18h] [ebp-15D8h]
  float v126; // [esp+18h] [ebp-15D8h]
  float v127; // [esp+18h] [ebp-15D8h]
  float v128; // [esp+18h] [ebp-15D8h]
  float v129; // [esp+18h] [ebp-15D8h]
  float v130; // [esp+18h] [ebp-15D8h]
  float v131; // [esp+18h] [ebp-15D8h]
  float v132; // [esp+18h] [ebp-15D8h]
  float v133; // [esp+18h] [ebp-15D8h]
  float v134; // [esp+18h] [ebp-15D8h]
  float v135; // [esp+18h] [ebp-15D8h]
  float v136; // [esp+18h] [ebp-15D8h]
  float v137; // [esp+18h] [ebp-15D8h]
  float v138; // [esp+18h] [ebp-15D8h]
  float v139; // [esp+18h] [ebp-15D8h]
  float v140; // [esp+18h] [ebp-15D8h]
  float v141; // [esp+18h] [ebp-15D8h]
  float v142; // [esp+18h] [ebp-15D8h]
  float v143; // [esp+18h] [ebp-15D8h]
  float v144; // [esp+18h] [ebp-15D8h]
  float v145; // [esp+18h] [ebp-15D8h]
  float v146; // [esp+18h] [ebp-15D8h]
  float v147; // [esp+18h] [ebp-15D8h]
  float v148; // [esp+18h] [ebp-15D8h]
  float v149; // [esp+18h] [ebp-15D8h]
  float v150; // [esp+18h] [ebp-15D8h]
  float v151; // [esp+18h] [ebp-15D8h]
  float v152; // [esp+18h] [ebp-15D8h]
  float v153; // [esp+18h] [ebp-15D8h]
  float v154; // [esp+18h] [ebp-15D8h]
  float v155; // [esp+18h] [ebp-15D8h]
  float v156; // [esp+18h] [ebp-15D8h]
  float v157; // [esp+18h] [ebp-15D8h]
  float v158; // [esp+18h] [ebp-15D8h]
  float v159; // [esp+18h] [ebp-15D8h]
  float v160; // [esp+18h] [ebp-15D8h]
  float v161; // [esp+18h] [ebp-15D8h]
  float v162; // [esp+18h] [ebp-15D8h]
  float v163; // [esp+18h] [ebp-15D8h]
  float v164; // [esp+18h] [ebp-15D8h]
  float v165; // [esp+18h] [ebp-15D8h]
  float v166; // [esp+18h] [ebp-15D8h]
  float v167; // [esp+18h] [ebp-15D8h]
  float v168; // [esp+18h] [ebp-15D8h]
  float v169; // [esp+1Ch] [ebp-15D4h]
  float v170; // [esp+1Ch] [ebp-15D4h]
  float v171; // [esp+1Ch] [ebp-15D4h]
  float v172; // [esp+1Ch] [ebp-15D4h]
  float v173; // [esp+1Ch] [ebp-15D4h]
  float v174; // [esp+1Ch] [ebp-15D4h]
  float v175; // [esp+1Ch] [ebp-15D4h]
  float v176; // [esp+1Ch] [ebp-15D4h]
  float v177; // [esp+1Ch] [ebp-15D4h]
  float v178; // [esp+1Ch] [ebp-15D4h]
  float v179; // [esp+1Ch] [ebp-15D4h]
  float v180; // [esp+1Ch] [ebp-15D4h]
  float v181; // [esp+1Ch] [ebp-15D4h]
  float v182; // [esp+1Ch] [ebp-15D4h]
  float v183; // [esp+1Ch] [ebp-15D4h]
  float v184; // [esp+1Ch] [ebp-15D4h]
  float v185; // [esp+1Ch] [ebp-15D4h]
  float v186; // [esp+1Ch] [ebp-15D4h]
  int v187; // [esp+20h] [ebp-15D0h]
  int v188; // [esp+20h] [ebp-15D0h]
  float *v189; // [esp+20h] [ebp-15D0h]
  float v190; // [esp+20h] [ebp-15D0h]
  float *v191; // [esp+20h] [ebp-15D0h]
  float v192; // [esp+20h] [ebp-15D0h]
  float v193; // [esp+24h] [ebp-15CCh]
  int v194; // [esp+24h] [ebp-15CCh]
  int v195; // [esp+24h] [ebp-15CCh]
  int v196; // [esp+24h] [ebp-15CCh]
  float *v197; // [esp+28h] [ebp-15C8h]
  float *v198; // [esp+28h] [ebp-15C8h]
  float *v199; // [esp+28h] [ebp-15C8h]
  float v200; // [esp+2Ch] [ebp-15C4h]
  int v201; // [esp+2Ch] [ebp-15C4h]
  int v202; // [esp+2Ch] [ebp-15C4h]
  int v203; // [esp+30h] [ebp-15C0h]
  int v204; // [esp+30h] [ebp-15C0h]
  int v205; // [esp+30h] [ebp-15C0h]
  int v206; // [esp+34h] [ebp-15BCh] BYREF
  float v207; // [esp+38h] [ebp-15B8h]
  float v208; // [esp+3Ch] [ebp-15B4h]
  float v209; // [esp+40h] [ebp-15B0h]
  float v210; // [esp+44h] [ebp-15ACh]
  float v211; // [esp+48h] [ebp-15A8h]
  int v212; // [esp+4Ch] [ebp-15A4h]
  int v213; // [esp+50h] [ebp-15A0h]
  float v214; // [esp+54h] [ebp-159Ch]
  _BYTE *v215; // [esp+58h] [ebp-1598h]
  int v216; // [esp+5Ch] [ebp-1594h]
  double v217; // [esp+60h] [ebp-1590h]
  float v218; // [esp+68h] [ebp-1588h] BYREF
  float v219; // [esp+6Ch] [ebp-1584h]
  float v220; // [esp+70h] [ebp-1580h]
  float v221; // [esp+74h] [ebp-157Ch]
  float v222; // [esp+78h] [ebp-1578h]
  float v223; // [esp+7Ch] [ebp-1574h]
  double v224; // [esp+88h] [ebp-1568h]
  double i; // [esp+90h] [ebp-1560h]
  double v226; // [esp+98h] [ebp-1558h]
  float v227; // [esp+A4h] [ebp-154Ch]
  float v228; // [esp+A8h] [ebp-1548h]
  float v229; // [esp+ACh] [ebp-1544h]
  _BYTE v230[8]; // [esp+B0h] [ebp-1540h] BYREF
  char v231[8]; // [esp+B8h] [ebp-1538h] BYREF
  char v232[16]; // [esp+C0h] [ebp-1530h] BYREF
  float v233; // [esp+D0h] [ebp-1520h] BYREF
  float v234; // [esp+D4h] [ebp-151Ch]
  float v235; // [esp+D8h] [ebp-1518h]
  float v236; // [esp+DCh] [ebp-1514h]
  float v237; // [esp+E0h] [ebp-1510h]
  float v238[3]; // [esp+E4h] [ebp-150Ch]
  float v239[16]; // [esp+F0h] [ebp-1500h] BYREF
  float v240[16]; // [esp+130h] [ebp-14C0h] BYREF
  float v241[32]; // [esp+170h] [ebp-1480h] BYREF
  _BYTE v242[4]; // [esp+1F0h] [ebp-1400h] BYREF
  char v243; // [esp+1F4h] [ebp-13FCh] BYREF
  _BYTE v244[1272]; // [esp+1F8h] [ebp-13F8h] BYREF
  _BYTE v245[3840]; // [esp+6F0h] [ebp-F00h] BYREF

  v11 = a5;
  v12 = a3;
  if ( a5 > 0 )
  {
    v13 = (_BYTE *)(v242 - (_BYTE *)a3);
    do
    {
      *(_DWORD *)((char *)v12 + (_DWORD)v13) = *v12;
      *(_DWORD *)((char *)v12 + (_DWORD)v13 + 4) = v12[1];
      *(_DWORD *)((char *)v12 + (_DWORD)v13 + 8) = v12[2];
      v12 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( a7 )
  {
    v207 = *a7;
    v214 = a7[1];
    v14 = a7[2];
  }
  else
  {
    v14 = 1.0;
    v207 = 1.0;
    v214 = 1.0;
  }
  v211 = v14;
  v229 = (float)(1 << (8 - a8));
  v228 = (float)(1 << (8 - a9));
  v227 = (float)(1 << (8 - a10));
  v15 = a1;
  v187 = 2;
  do
  {
    v16 = v15;
    v17 = 3;
    do
    {
      v18 = *(float *)((char *)v16 + a2 - (_DWORD)a1);
      v16 += 2;
      --v17;
      v193 = v18;
      *(v16 - 2) = v193;
      *(float *)((char *)v16 + (char *)&v218 - (char *)a1 - 8) = v193;
      *(float *)((char *)v16 + (char *)&v233 - (char *)a1 - 8) = v193;
    }
    while ( v17 );
    ++v15;
    --v187;
  }
  while ( v187 );
  sub_101E1780(&v206, v230, &v218, a8, a9, a10);
  v19 = v239;
  v20 = v230;
  v21 = 3;
  do
  {
    sub_101E18E0(v19, v20, a6);
    v20 += 8;
    v19 += 16;
    --v21;
  }
  while ( v21 );
  v213 = a6;
  v208 = sub_101D9530(a4, (int)v239, a5, a6, v206, a7);
  result = v208;
  if ( v208 != 0.0 )
  {
    v23 = a11;
    if ( a11 )
    {
      v24 = 0;
      v25 = v214;
      if ( a5 > 0 )
      {
        v26 = v213;
        v27 = (float *)v242;
        v197 = (float *)v245;
        do
        {
          v28 = 0;
          if ( v26 >= 4 )
          {
            v29 = v27[1];
            v30 = v197;
            v31 = *v27;
            v32 = v211;
            do
            {
              v33 = v240[v28];
              v28 += 4;
              v30 += 256;
              v124 = v33 - v29;
              v169 = v238[v28 - 1] - v31;
              *(v30 - 320) = v124 * v124 * v25 + v169 * v169 * v32;
              v125 = v239[v28 + 13] - v29;
              v170 = v238[v28] - v31;
              *(v30 - 256) = v125 * v125 * v25 + v170 * v170 * v32;
              v126 = v239[v28 + 14] - v29;
              v171 = v238[v28 + 1] - v31;
              *(v30 - 192) = v126 * v126 * v25 + v171 * v171 * v32;
              v127 = v239[v28 + 15] - v29;
              v172 = v238[v28 + 2] - v31;
              *(v30 - 128) = v127 * v127 * v25 + v172 * v172 * v32;
            }
            while ( v28 < v26 - 3 );
            v23 = a11;
          }
          if ( v28 < v26 )
          {
            v34 = v27[1];
            v35 = *v27;
            v36 = v211;
            v37 = (float *)&v244[256 * v28 + 1016 + 4 * v24];
            do
            {
              v38 = v240[v28++];
              v37 += 64;
              v128 = v38 - v34;
              v173 = v238[v28 + 2] - v35;
              *(v37 - 64) = v128 * v128 * v25 + v173 * v173 * v36;
            }
            while ( v28 < v26 );
          }
          ++v197;
          ++v24;
          v27 += 4;
        }
        while ( v24 < a5 );
      }
      v39 = v23;
      v209 = v237;
      v210 = v238[0];
      if ( v23 >= 8u )
        v39 = 8;
      v40 = -v39;
      v216 = v40;
      v41 = v23;
      if ( v23 >= 8u )
        v41 = 8;
      v212 = v41;
      v188 = v40;
      if ( v40 <= v41 )
      {
        v42 = 255.0;
        v224 = v237;
        v217 = v229;
        v43 = 0.0;
        v226 = v238[0];
        while ( 1 )
        {
          v203 = v216;
          v44 = (double)v188 * v217 + v224;
          i = v44;
          while ( 1 )
          {
            if ( v44 > v43 && v44 >= v42 )
            {
              v44 = v42;
            }
            else if ( v44 <= v43 )
            {
              v44 = v43;
            }
            v222 = v44;
            v45 = (double)v203 * v217 + v226;
            if ( v45 <= v43 || v45 < v42 )
            {
              v42 = v45;
              if ( v43 >= v45 )
                v42 = v43;
            }
            v223 = v42;
            sub_101E1780(&v206, v230, &v218, a8, a9, a10);
            sub_101E18E0(v241, v232, a6);
            v200 = 0.0;
            v46 = 1;
            if ( !(_BYTE)v206 )
              v46 = v213;
            v47 = 0;
            v194 = 0;
            if ( a5 > 0 )
            {
              v48 = (float *)a4;
              v49 = v207;
              v198 = (float *)v244;
              v215 = &v245[-a4];
              do
              {
                v50 = 0;
                v174 = 10000000.0;
                if ( v46 >= 4 )
                {
                  v51 = *v198;
                  v52 = (float *)((int)v48 + (_DWORD)v215);
                  do
                  {
                    v129 = v241[v50] - v51;
                    v130 = v129 * v129 * v49 + *(v52 - 64);
                    if ( v130 <= (double)v174 )
                      v174 = v130;
                    v131 = v241[v50 + 1] - v51;
                    v132 = v131 * v131 * v49 + *v52;
                    if ( v132 <= (double)v174 )
                      v174 = v132;
                    v133 = v241[v50 + 2] - v51;
                    v134 = v133 * v133 * v49 + v52[64];
                    if ( v134 <= (double)v174 )
                      v174 = v134;
                    v135 = v241[v50 + 3] - v51;
                    v136 = v135 * v135 * v49 + v52[128];
                    if ( v136 <= (double)v174 )
                      v174 = v136;
                    v50 += 4;
                    v52 += 256;
                  }
                  while ( v50 < v46 - 3 );
                  v47 = v194;
                }
                if ( v50 < v46 )
                {
                  v53 = (float *)&v244[256 * v50 + 1016 + 4 * v47];
                  do
                  {
                    v137 = v241[v50] - *v198;
                    v138 = v137 * v137 * v49 + *v53;
                    if ( v138 <= (double)v174 )
                      v174 = v138;
                    ++v50;
                    v53 += 64;
                  }
                  while ( v50 < v46 );
                }
                v198 += 4;
                v54 = v174 * *v48;
                ++v47;
                ++v48;
                v194 = v47;
                v200 = v54 + v200;
              }
              while ( v47 < a5 );
            }
            if ( v208 > (double)v200 )
            {
              v209 = v222;
              v210 = v223;
              v208 = v200;
            }
            if ( ++v203 > v212 )
              break;
            v42 = 255.0;
            v44 = i;
            v43 = 0.0;
          }
          if ( ++v188 > v212 )
            break;
          v42 = 255.0;
          v43 = 0.0;
        }
      }
      v222 = v209;
      v223 = v210;
      sub_101E1780(&v206, v230, &v218, a8, a9, a10);
      v55 = v239;
      v56 = v230;
      v57 = 3;
      do
      {
        sub_101E18E0(v55, v56, a6);
        v56 += 8;
        v55 += 16;
        --v57;
      }
      while ( v57 );
      v58 = 0;
      if ( a5 > 0 )
      {
        v59 = v207;
        v60 = v213;
        v61 = (float *)v242;
        v189 = (float *)v245;
        do
        {
          v62 = 0;
          if ( v60 >= 4 )
          {
            v63 = v61[2];
            v64 = v189;
            v65 = *v61;
            v66 = v211;
            do
            {
              v67 = v241[v62];
              v62 += 4;
              v64 += 256;
              v175 = v67 - v63;
              v139 = v238[v62 - 1] - v65;
              *(v64 - 320) = v175 * v175 * v59 + v139 * v139 * v66;
              v176 = v240[v62 + 13] - v63;
              v140 = v238[v62] - v65;
              *(v64 - 256) = v176 * v176 * v59 + v140 * v140 * v66;
              v177 = v240[v62 + 14] - v63;
              v141 = v238[v62 + 1] - v65;
              *(v64 - 192) = v177 * v177 * v59 + v141 * v141 * v66;
              v178 = v240[v62 + 15] - v63;
              v142 = v238[v62 + 2] - v65;
              *(v64 - 128) = v178 * v178 * v59 + v142 * v142 * v66;
            }
            while ( v62 < v60 - 3 );
          }
          if ( v62 < v60 )
          {
            v68 = v61[2];
            v69 = *v61;
            v70 = v211;
            v71 = (float *)&v244[256 * v62 + 1016 + 4 * v58];
            do
            {
              v72 = v241[v62++];
              v71 += 64;
              v179 = v72 - v68;
              v143 = v238[v62 + 2] - v69;
              *(v71 - 64) = v179 * v179 * v59 + v143 * v143 * v70;
            }
            while ( v62 < v60 );
          }
          ++v189;
          ++v58;
          v61 += 4;
        }
        while ( v58 < a5 );
      }
      v209 = v235;
      v201 = v216;
      v210 = v236;
      if ( v216 <= v212 )
      {
        v226 = v235;
        v217 = v228;
        v224 = v236;
        do
        {
          v204 = v216;
          v73 = (double)v201 * v217 + v226;
          for ( i = v73; ; v73 = i )
          {
            if ( v73 <= 0.0 )
            {
              v74 = 255.0;
            }
            else
            {
              v74 = 255.0;
              if ( v73 >= 255.0 )
              {
                v75 = 255.0;
                goto LABEL_87;
              }
            }
            v77 = v74;
            v74 = v73;
            v75 = v77;
            if ( v74 <= 0.0 )
              v74 = 0.0;
LABEL_87:
            v220 = v74;
            v76 = (double)v204 * v217 + v224;
            if ( v76 <= 0.0 || v76 < v75 )
            {
              v75 = v76;
              if ( v76 <= 0.0 )
                v75 = 0.0;
            }
            v221 = v75;
            sub_101E1780(&v206, v230, &v218, a8, a9, a10);
            sub_101E18E0(v240, v231, a6);
            v190 = 0.0;
            v78 = 1;
            if ( !(_BYTE)v206 )
              v78 = v213;
            v79 = 0;
            v195 = 0;
            if ( a5 > 0 )
            {
              v80 = (float *)a4;
              v81 = v214;
              v199 = (float *)&v243;
              v215 = &v245[-a4];
              do
              {
                v82 = 0;
                v180 = 10000000.0;
                if ( v78 >= 4 )
                {
                  v83 = *v199;
                  v84 = (float *)&v215[(_DWORD)v80];
                  do
                  {
                    v144 = v240[v82] - v83;
                    v145 = v144 * v144 * v81 + *(v84 - 64);
                    if ( v145 <= (double)v180 )
                      v180 = v145;
                    v146 = v240[v82 + 1] - v83;
                    v147 = v146 * v146 * v81 + *v84;
                    if ( v147 <= (double)v180 )
                      v180 = v147;
                    v148 = v240[v82 + 2] - v83;
                    v149 = v148 * v148 * v81 + v84[64];
                    if ( v149 <= (double)v180 )
                      v180 = v149;
                    v150 = v240[v82 + 3] - v83;
                    v151 = v150 * v150 * v81 + v84[128];
                    if ( v151 <= (double)v180 )
                      v180 = v151;
                    v82 += 4;
                    v84 += 256;
                  }
                  while ( v82 < v78 - 3 );
                  v79 = v195;
                }
                if ( v82 < v78 )
                {
                  v85 = (float *)&v244[256 * v82 + 1016 + 4 * v79];
                  do
                  {
                    v152 = v240[v82] - *v199;
                    v153 = v152 * v152 * v81 + *v85;
                    if ( v153 <= (double)v180 )
                      v180 = v153;
                    ++v82;
                    v85 += 64;
                  }
                  while ( v82 < v78 );
                }
                v199 += 4;
                v86 = v180 * *v80;
                ++v79;
                ++v80;
                v195 = v79;
                v190 = v86 + v190;
              }
              while ( v79 < a5 );
            }
            if ( v208 > (double)v190 )
            {
              v209 = v220;
              v210 = v221;
              v208 = v190;
            }
            if ( ++v204 > v212 )
              break;
          }
          ++v201;
        }
        while ( v201 <= v212 );
      }
      v220 = v209;
      v221 = v210;
      sub_101E1780(&v206, v230, &v218, a8, a9, a10);
      v87 = v239;
      v88 = v230;
      v89 = 3;
      do
      {
        sub_101E18E0(v87, v88, a6);
        v88 += 8;
        v87 += 16;
        --v89;
      }
      while ( v89 );
      v90 = 0;
      if ( a5 > 0 )
      {
        v91 = v207;
        v92 = v213;
        v93 = (float *)&v243;
        v191 = (float *)v245;
        do
        {
          v94 = 0;
          if ( v92 >= 4 )
          {
            v95 = v93[1];
            v96 = v191;
            v97 = *v93;
            v98 = v214;
            do
            {
              v99 = v241[v94];
              v94 += 4;
              v96 += 256;
              v181 = v99 - v95;
              v154 = v239[v94 + 12] - v97;
              *(v96 - 320) = v181 * v181 * v91 + v154 * v154 * v98;
              v182 = v240[v94 + 13] - v95;
              v155 = v239[v94 + 13] - v97;
              *(v96 - 256) = v182 * v182 * v91 + v155 * v155 * v98;
              v183 = v240[v94 + 14] - v95;
              v156 = v239[v94 + 14] - v97;
              *(v96 - 192) = v183 * v183 * v91 + v156 * v156 * v98;
              v184 = v240[v94 + 15] - v95;
              v157 = v239[v94 + 15] - v97;
              *(v96 - 128) = v184 * v184 * v91 + v157 * v157 * v98;
            }
            while ( v94 < v92 - 3 );
          }
          if ( v94 < v92 )
          {
            v100 = v93[1];
            v101 = *v93;
            v102 = v214;
            v103 = (float *)&v244[256 * v94 + 1016 + 4 * v90];
            do
            {
              v104 = v241[v94++];
              v103 += 64;
              v185 = v104 - v100;
              v158 = v239[v94 + 15] - v101;
              *(v103 - 64) = v185 * v185 * v91 + v158 * v158 * v102;
            }
            while ( v94 < v92 );
          }
          ++v191;
          ++v90;
          v93 += 4;
        }
        while ( v90 < a5 );
      }
      v209 = v233;
      v202 = v216;
      v210 = v234;
      if ( v216 <= v212 )
      {
        v226 = v233;
        v217 = v227;
        v224 = v234;
        do
        {
          v205 = v216;
          v105 = (double)v202 * v217 + v226;
          for ( i = v105; ; v105 = i )
          {
            if ( v105 <= 0.0 )
            {
              v106 = 255.0;
            }
            else
            {
              v106 = 255.0;
              if ( v105 >= 255.0 )
              {
                v107 = 255.0;
                goto LABEL_138;
              }
            }
            v109 = v106;
            v106 = v105;
            v107 = v109;
            if ( v106 <= 0.0 )
              v106 = 0.0;
LABEL_138:
            v218 = v106;
            v108 = (double)v205 * v217 + v224;
            if ( v108 <= 0.0 || v108 < v107 )
            {
              v107 = v108;
              if ( v108 <= 0.0 )
                v107 = 0.0;
            }
            v219 = v107;
            sub_101E1780(&v206, v230, &v218, a8, a9, a10);
            sub_101E18E0(v239, v230, a6);
            v192 = 0.0;
            v110 = 1;
            if ( !(_BYTE)v206 )
              v110 = v213;
            v111 = 0;
            v196 = 0;
            if ( a5 > 0 )
            {
              v112 = (float *)a4;
              v113 = v211;
              v207 = COERCE_FLOAT(v242);
              v215 = &v245[-a4];
              do
              {
                v114 = 0;
                v186 = 10000000.0;
                if ( v110 >= 4 )
                {
                  v115 = *(float *)LODWORD(v207);
                  v116 = (float *)&v215[(_DWORD)v112];
                  do
                  {
                    v159 = v239[v114] - v115;
                    v160 = v159 * v159 * v113 + *(v116 - 64);
                    if ( v160 <= (double)v186 )
                      v186 = v160;
                    v161 = v239[v114 + 1] - v115;
                    v162 = v161 * v161 * v113 + *v116;
                    if ( v162 <= (double)v186 )
                      v186 = v162;
                    v163 = v239[v114 + 2] - v115;
                    v164 = v163 * v163 * v113 + v116[64];
                    if ( v164 <= (double)v186 )
                      v186 = v164;
                    v165 = v239[v114 + 3] - v115;
                    v166 = v165 * v165 * v113 + v116[128];
                    if ( v166 <= (double)v186 )
                      v186 = v166;
                    v114 += 4;
                    v116 += 256;
                  }
                  while ( v114 < v110 - 3 );
                  v111 = v196;
                }
                if ( v114 < v110 )
                {
                  v117 = (float *)&v244[256 * v114 + 1016 + 4 * v111];
                  do
                  {
                    v167 = v239[v114] - *(float *)LODWORD(v207);
                    v168 = v167 * v167 * v113 + *v117;
                    if ( v168 <= (double)v186 )
                      v186 = v168;
                    ++v114;
                    v117 += 64;
                  }
                  while ( v114 < v110 );
                }
                LODWORD(v207) += 16;
                v118 = v186 * *v112;
                ++v111;
                ++v112;
                v196 = v111;
                v192 = v118 + v192;
              }
              while ( v111 < a5 );
            }
            if ( v208 > (double)v192 )
            {
              v209 = v218;
              v210 = v219;
              v208 = v192;
            }
            if ( ++v205 > v212 )
              break;
          }
          ++v202;
        }
        while ( v202 <= v212 );
      }
      v119 = v210;
      *a1 = v209;
      v120 = v220;
      v219 = v119;
      result = v208;
      a1[1] = v219;
      v121 = v221;
      a1[2] = v120;
      v122 = v222;
      a1[3] = v121;
      v123 = v223;
      a1[4] = v122;
      a1[5] = v123;
    }
  }
  return result;
}
