int __thiscall sub_10061BE0(char *this, int a2)
{
  char *v2; // esi
  double v3; // st7
  double v4; // st7
  int v5; // edi
  double v6; // st7
  int v7; // eax
  int *v8; // ebx
  float *v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // st6
  long double v14; // st7
  long double v15; // st5
  long double v16; // st7
  long double v17; // rtt
  double v18; // st5
  long double v19; // st6
  long double v20; // st4
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // st6
  long double v25; // st7
  long double v26; // st5
  long double v27; // st7
  long double v28; // rt2
  double v29; // st5
  long double v30; // st6
  long double v31; // st4
  long double v32; // st7
  int v33; // edi
  double v34; // st7
  int v35; // eax
  int v36; // eax
  int v37; // edi
  bool v38; // zf
  double v39; // st7
  int v40; // edi
  int v41; // eax
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // rtt
  double v46; // st5
  double v47; // st6
  double v48; // rt1
  double v49; // st5
  double v50; // st7
  double v51; // st7
  double v52; // st6
  double v53; // st5
  double v54; // rt2
  double v55; // st5
  double v56; // rt0
  int v57; // eax
  double v58; // st4
  int v59; // edx
  float *v60; // eax
  double v61; // st3
  double v62; // st7
  double v63; // st7
  bool v64; // c0
  double v65; // st7
  int v66; // eax
  int v67; // edi
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  float *v71; // edi
  double v72; // st7
  int v73; // eax
  int v74; // edi
  float *v75; // eax
  double v76; // st6
  double v77; // st5
  double v78; // st7
  int v79; // eax
  int v80; // ecx
  int v81; // ecx
  double v82; // st7
  double v83; // st5
  bool v84; // c0
  bool v85; // c3
  double v86; // st7
  int v87; // edi
  double v88; // st6
  double v89; // st5
  int v90; // eax
  double v91; // st7
  bool v92; // c0
  bool v93; // c3
  int v94; // eax
  double v95; // st7
  int v96; // eax
  float v97; // eax
  double v98; // st7
  int v99; // eax
  float *v100; // ecx
  double v101; // st6
  int v102; // edx
  int v103; // edi
  int v104; // ecx
  double v105; // st6
  int result; // eax
  int v107; // esi
  double v108; // st6
  float *v109; // eax
  double v110; // st4
  double v111; // rt1
  double v112; // st6
  double v113; // st6
  double v114; // st5
  int v115; // ecx
  double v116; // st7
  double v117; // st6
  float v118; // eax
  float v119; // edx
  float v120; // edx
  int v121; // eax
  double v122; // st7
  int v123; // ecx
  int v124; // ecx
  int v125; // eax
  double v126; // st7
  double v127; // st6
  __int16 v128; // fps
  bool v129; // c0
  char v130; // c2
  bool v131; // c3
  __int16 v132; // fps
  bool v133; // c0
  char v134; // c2
  bool v135; // c3
  int v136; // eax
  double v137; // st7
  int v138; // ecx
  int v139; // ecx
  int v140; // eax
  long double v141; // st7
  long double v142; // st7
  __int16 v143; // fps
  bool v144; // c0
  char v145; // c2
  bool v146; // c3
  double v147; // st6
  float *v148; // edi
  double v149; // st5
  long double v150; // st4
  __int16 v151; // fps
  bool v152; // c0
  char v153; // c2
  bool v154; // c3
  __int16 v155; // fps
  long double v156; // st3
  bool v157; // c0
  char v158; // c2
  bool v159; // c3
  double v160; // st7
  double v161; // st5
  double v162; // st6
  double v163; // st7
  double v164; // st7
  __int16 v165; // fps
  bool v166; // c0
  char v167; // c2
  bool v168; // c3
  int v169; // eax
  int v170; // ecx
  int v171; // ecx
  int v172; // eax
  int v173; // edx
  char *v174; // esi
  __int16 v175; // fps
  int v176; // edx
  int v177; // edi
  bool v178; // c0
  char v179; // c2
  bool v180; // c3
  float *v181; // ecx
  double v182; // st6
  int v183; // edi
  int v184; // esi
  float *v185; // eax
  double v186; // st7
  double v187; // st6
  int v188; // ecx
  char *v189; // edx
  double v190; // st7
  int v191; // eax
  float v192; // [esp+0h] [ebp-C4h]
  float v193; // [esp+0h] [ebp-C4h]
  float v194; // [esp+4h] [ebp-C0h]
  float v195; // [esp+8h] [ebp-BCh]
  float v196; // [esp+8h] [ebp-BCh]
  float v197; // [esp+8h] [ebp-BCh]
  float v198; // [esp+8h] [ebp-BCh]
  float v199; // [esp+Ch] [ebp-B8h]
  int v200; // [esp+Ch] [ebp-B8h]
  float v201; // [esp+10h] [ebp-B4h]
  float v202; // [esp+10h] [ebp-B4h]
  float v203; // [esp+10h] [ebp-B4h]
  float v204; // [esp+10h] [ebp-B4h]
  float v205; // [esp+10h] [ebp-B4h]
  float v206; // [esp+10h] [ebp-B4h]
  float v207; // [esp+10h] [ebp-B4h]
  float v208; // [esp+10h] [ebp-B4h]
  float v209; // [esp+10h] [ebp-B4h]
  float v210; // [esp+10h] [ebp-B4h]
  float v211; // [esp+10h] [ebp-B4h]
  float v212; // [esp+10h] [ebp-B4h]
  int v213[3]; // [esp+20h] [ebp-A4h] BYREF
  int v214; // [esp+2Ch] [ebp-98h] BYREF
  float v215; // [esp+30h] [ebp-94h]
  float v216; // [esp+38h] [ebp-8Ch]
  float v217; // [esp+3Ch] [ebp-88h]
  float v218; // [esp+40h] [ebp-84h]
  float v219; // [esp+44h] [ebp-80h]
  float v220[14]; // [esp+48h] [ebp-7Ch] BYREF
  float v221; // [esp+80h] [ebp-44h]
  float v222; // [esp+84h] [ebp-40h]
  char *v223; // [esp+88h] [ebp-3Ch]
  int v224; // [esp+8Ch] [ebp-38h] BYREF
  float v225; // [esp+90h] [ebp-34h]
  int v226; // [esp+94h] [ebp-30h] BYREF
  float v227; // [esp+98h] [ebp-2Ch]
  float v228; // [esp+9Ch] [ebp-28h]
  float v229; // [esp+A0h] [ebp-24h]
  float v230; // [esp+A4h] [ebp-20h]
  float v231; // [esp+A8h] [ebp-1Ch]
  int v232; // [esp+ACh] [ebp-18h]
  float v233; // [esp+B0h] [ebp-14h]
  char v234; // [esp+B7h] [ebp-Dh]
  float v235; // [esp+B8h] [ebp-Ch]
  int v236; // [esp+BCh] [ebp-8h]
  int v237; // [esp+C0h] [ebp-4h]

  v2 = this;
  v223 = this;
  v3 = sub_100781B0(this);
  v233 = v3;
  if ( 0.0 == v3 )
    v233 = 50.0;
  v4 = sub_100781C0(v2);
  v235 = v4;
  if ( 0.0 == v4 )
    v235 = 100.0;
  memset(v220, 0, sizeof(v220));
  v5 = *((_DWORD *)v2 + 1);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(*((_DWORD *)v2 + 1));
  v220[11] = *(float *)(v5 + 580);
  v220[12] = *(float *)(v5 + 584);
  v220[13] = *(float *)(v5 + 588);
  v201 = *((float *)v2 + 8) * *((float *)v2 + 8)
       + *((float *)v2 + 7) * *((float *)v2 + 7)
       + *((float *)v2 + 9) * *((float *)v2 + 9);
  v6 = off_10689708(v201);
  v7 = *((_DWORD *)v2 + 27);
  v220[3] = v6;
  v8 = (int *)(v2 + 96);
  sub_100616E0((int *)v2 + 24, v7, v220);
  v9 = (float *)a2;
  if ( *(_DWORD *)(dword_10696234 + 48) && *(_BYTE *)(a2 + 64) && *(float *)(a2 + 156) != *(float *)(a2 + 100) )
  {
    v10 = *(float *)(a2 + 72) - *(float *)(*v8 + 44);
    v11 = *(float *)(a2 + 76) - *(float *)(*v8 + 48);
    v202 = v10 * v10 + v11 * v11;
    v12 = off_10689708(v202);
    v13 = v9[20] - *(float *)(*v8 + 52);
    if ( v12 <= 0.0 )
      v14 = 0.0;
    else
      v14 = v13 / v12;
    v15 = 1.1 - fabs(v14);
    *((float *)v2 + 47) = v15;
    if ( v15 <= 1.0 )
    {
      v17 = v15;
      v18 = v13;
      v19 = v17;
      if ( v18 <= 0.0 )
        v20 = 0.8;
      else
        v20 = 0.5;
      if ( v20 <= v19 )
      {
        v16 = v19;
      }
      else if ( v18 <= 0.0 )
      {
        v16 = 0.8;
      }
      else
      {
        v16 = 0.5;
      }
    }
    else
    {
      v16 = 1.0;
    }
    *((float *)v2 + 47) = v16;
  }
  if ( *(_DWORD *)(dword_10696234 + 48) )
  {
    v21 = v9[33] - *((float *)v2 + 53);
    v22 = v9[32] - *((float *)v2 + 52);
    v203 = v22 * v22 + v21 * v21;
    v23 = off_10689708(v203);
    v24 = v9[34] - *((float *)v2 + 54);
    if ( v23 <= 0.0 )
      v25 = 0.0;
    else
      v25 = v24 / v23;
    v26 = 1.1 - fabs(v25);
    if ( v26 <= 1.0 )
    {
      v28 = v26;
      v29 = v24;
      v30 = v28;
      if ( v29 <= 0.0 )
        v31 = 0.8;
      else
        v31 = 0.5;
      if ( v31 <= v30 )
      {
        v27 = v30;
      }
      else if ( v29 <= 0.0 )
      {
        v27 = 0.8;
      }
      else
      {
        v27 = 0.5;
      }
    }
    else
    {
      v27 = 1.0;
    }
    if ( v27 >= *((float *)v2 + 48) )
      v32 = (v27 + *((float *)v2 + 48)) * 0.5;
    else
      v32 = v27 * 0.8 + *((float *)v2 + 48) * 0.2;
    *((float *)v2 + 48) = v32;
    *((float *)v2 + 52) = *((float *)v2 + 49);
    *((float *)v2 + 53) = *((float *)v2 + 50);
    *((float *)v2 + 54) = *((float *)v2 + 51);
    v33 = *((_DWORD *)v2 + 1);
    if ( (*(_DWORD *)(v33 + 252) & 0x800) != 0 )
      sub_100DAE60(*((_DWORD *)v2 + 1));
    *((float *)v2 + 49) = *(float *)(v33 + 580);
    *((float *)v2 + 50) = *(float *)(v33 + 584);
    *((float *)v2 + 51) = *(float *)(v33 + 588);
  }
  if ( *((float *)v2 + 47) <= (double)*((float *)v2 + 48) )
    v34 = *((float *)v2 + 47);
  else
    v34 = *((float *)v2 + 48);
  v234 = 0;
  v233 = v34 * v233;
  v35 = **(int **)(sub_10078330(v2) + 36);
  v236 = v35;
  if ( *(float *)&v35 != 0.0 )
  {
    while ( 1 )
    {
      v36 = *(_DWORD *)(v35 + 36);
      if ( v36 )
      {
        if ( v36 != 2 )
          break;
      }
      memset(v220, 0, sizeof(v220));
      v37 = *(int *)(v236 + 40);
      v38 = *(_DWORD *)(dword_106925BC + 48) == 0;
      v237 = v37;
      if ( v38 || v234 )
      {
        v51 = *(float *)v236;
        v220[11] = *(float *)v236;
        v52 = *(float *)(v236 + 4);
        v220[12] = *(float *)(v236 + 4);
        v53 = *(float *)(v236 + 8);
        LODWORD(v220[8]) = v236;
        v220[13] = v53;
        v54 = v53;
        v55 = v51;
        v50 = v52;
        v56 = v55;
        v49 = v54;
        v47 = v56;
      }
      else
      {
        v39 = *(float *)(a2 + 44);
        v40 = *((_DWORD *)v2 + 1);
        v217 = v39 * *(float *)(a2 + 12);
        v218 = *(float *)(a2 + 16) * v39;
        v41 = *(_DWORD *)(v40 + 252) >> 11;
        v219 = v39 * *(float *)(a2 + 20);
        if ( (v41 & 1) != 0 )
          sub_100DAE60(v40);
        v234 = 1;
        v42 = v217 + *(float *)(v40 + 580);
        v43 = *(float *)(v40 + 584) + v218;
        v44 = *(float *)(v40 + 588);
        v37 = v236;
        v237 = v236;
        v45 = v44 + v219;
        v220[11] = v42;
        v46 = v43;
        v47 = v42;
        v220[12] = v46;
        v48 = v46;
        v49 = v45;
        v50 = v48;
        v220[13] = v45;
      }
      if ( *(float *)&v37 == 0.0 )
      {
        v66 = sub_10078330(v2);
        v220[3] = sub_1007E6E0(v66);
      }
      else
      {
        switch ( *(_DWORD *)(v37 + 36) )
        {
          case 0:
          case 2:
            v57 = *((_DWORD *)v2 + 27);
            v58 = *(float *)v37 - v47;
            v59 = *v8;
            v227 = v58;
            v60 = (float *)(v59 + 56 * v57 - 12);
            v61 = *(float *)(v37 + 4) - v50;
            v228 = v61;
            v229 = *(float *)(v37 + 8) - v49;
            v230 = v47 - *v60;
            v231 = v50 - v60[1];
            *(float *)&v232 = v49 - v60[2];
            v204 = v58 * v58 + v61 * v61;
            if ( off_10689708(v204) < 1.0 )
            {
              v236 = v37;
              goto LABEL_80;
            }
            v229 = 0.0;
            off_10689714();
            *(float *)&v232 = 0.0;
            off_10689714();
            v62 = v231 * v228 + v230 * v227 + *(float *)&v232 * v229 + 0.2;
            if ( v62 <= 0.0 )
            {
              v220[3] = 0.0;
            }
            else
            {
              if ( v62 <= 1.0 )
                v63 = v62 * v233;
              else
                v63 = 1.0 * v233;
              v220[3] = v63;
            }
            break;
          case 1:
            *(float *)&v226 = 0.0;
            v205 = *((float *)v2 + 8) * *((float *)v2 + 8)
                 + *((float *)v2 + 7) * *((float *)v2 + 7)
                 + *((float *)v2 + 9) * *((float *)v2 + 9);
            v64 = off_10689708(v205) > 100.0;
            v65 = 100.0;
            if ( v64 )
            {
              v206 = *((float *)v2 + 8) * *((float *)v2 + 8)
                   + *((float *)v2 + 7) * *((float *)v2 + 7)
                   + *((float *)v2 + 9) * *((float *)v2 + 9);
              v65 = off_10689708(v206);
            }
            v199 = v65;
            v194 = *(float *)(*((_DWORD *)v2 + 1) + 552) * *(float *)(dword_106B6F0C + 44);
            sub_10079AD0((int)&v214, (int)&v220[11], v37, v194, (int)&v226, v199, (int)v213);
            v207 = v215 * v215 + *(float *)&v214 * *(float *)&v214;
            v220[3] = off_10689708(v207);
            break;
          case 3:
            v220[3] = 0.0;
            break;
          default:
            break;
        }
      }
      v67 = v8[3];
      v68 = v8[1];
      if ( v67 + 1 > v68 )
        sub_10061230(v8, v67 - v68 + 1);
      ++v8[3];
      v69 = *v8;
      v70 = v8[3] - v67 - 1;
      v8[4] = *v8;
      if ( v70 > 0 )
        memcpy((void *)(v69 + 56 * v67 + 56), (const void *)(v69 + 56 * v67), 56 * v70);
      v71 = (float *)(*v8 + 56 * v67);
      if ( v71 )
      {
        qmemcpy(v71, v220, 0x38u);
        v2 = v223;
      }
      v236 = v237;
      v37 = v237;
LABEL_80:
      if ( *(float *)&v37 == 0.0 )
        break;
      v35 = v236;
    }
  }
  v72 = 0.0;
  v73 = *((_DWORD *)v2 + 27) - 1;
  *(float *)&v236 = 0.0;
  *(float *)&v237 = 0.0;
  if ( v73 > 0 )
  {
    v74 = 0;
    do
    {
      v75 = (float *)(v74 + *v8);
      v76 = v75[26] - v75[12];
      v77 = v75[25] - v75[11];
      v208 = v77 * v77 + v76 * v76;
      v78 = off_10689708(v208);
      v79 = v237;
      *(float *)(v74 + *v8 + 8) = v78;
      v72 = v78 + *(float *)&v236;
      v80 = *((_DWORD *)v2 + 27) - 1;
      *(float *)&v236 = v72;
      v74 += 56;
      v237 = v79 + 1;
    }
    while ( v79 + 1 < v80 );
  }
  if ( v2[136] || (v81 = *((_DWORD *)v2 + 27)) == 0 || v72 <= 0.0 )
  {
    v86 = v235;
  }
  else
  {
    v209 = v72;
    v82 = *(float *)(*v8 + 12);
    sub_100781F0(*(float *)(*v8 + 12), *(float *)(*v8 + 56 * v81 - 44), v209);
    v83 = -v235;
    v84 = v83 < v82;
    v85 = v83 == v82;
    v86 = v235;
    v2[136] = !v84 && !v85;
  }
  v87 = 0;
  if ( *(_DWORD *)(dword_10692574 + 48) && *(_DWORD *)(a2 + 96) )
  {
    v88 = *(float *)(a2 + 76) - *(float *)(*v8 + 48);
    v89 = *(float *)(a2 + 72) - *(float *)(*v8 + 44);
    v210 = v89 * v89 + v88 * v88;
    v195 = off_10689708(v210) + 16.0;
    sub_10061850((int *)v2, v195, SLODWORD(v235), 0);
    v86 = v235;
  }
  if ( *(_DWORD *)(dword_10692604 + 48) )
  {
    v90 = sub_10078330(v2);
    v91 = sub_1007DFD0(v90);
    v92 = v91 < 0.0;
    v93 = v91 == 0.0;
    v86 = v235;
    if ( !v92 && !v93 )
    {
      *(float *)&v200 = v235;
      v94 = sub_10078330(v2);
      v95 = sub_1007DFD0(v94);
      v196 = *(float *)&v236 - v95;
      sub_10061850((int *)v2, v196, v200, 1);
      v86 = v235;
    }
  }
  if ( *(_DWORD *)(dword_106925BC + 48) && *((int *)v2 + 27) > 1 )
  {
    v96 = *v8;
    v227 = *(float *)(*v8 + 100) - *(float *)(*v8 + 44);
    v228 = *(float *)(v96 + 104) - *(float *)(v96 + 48);
    v229 = 0.0;
    off_10689714();
    v97 = *((float *)v2 + 7);
    v231 = *((float *)v2 + 8);
    *(float *)&v232 = 0.0;
    v230 = v97;
    off_10689714();
    v98 = v231 * v228 + v227 * v230 + *(float *)&v232 * v229;
    if ( v98 <= 1.0 )
    {
      if ( v98 < 0.0 )
        v98 = 0.0;
    }
    else
    {
      v98 = 1.0;
    }
    *(float *)(*v8 + 12) = v98 * *(float *)(*v8 + 12);
    v86 = v235;
  }
  v99 = *((_DWORD *)v2 + 27) - 1;
  *(float *)&v237 = 0.0;
  if ( v99 > 0 )
  {
    do
    {
      v100 = (float *)(v87 + *v8);
      v101 = v100[17] - v100[3];
      if ( v101 > 0.0 && v101 / v86 * (v86 * 0.5 * (v101 / v86) + v100[3]) > v100[2] )
      {
        v197 = -v100[2];
        v192 = v86 * 0.5;
        if ( (unsigned __int8)sub_10422A40(v192, v100[3], v197, (int)&a2, (int)&v224) )
        {
          v86 = v235;
          *(float *)(v87 + *v8 + 68) = *(float *)&a2 * v235 + *(float *)(v87 + *v8 + 12);
        }
        else
        {
          v86 = v235;
        }
      }
      v102 = *((_DWORD *)v2 + 27) - 1;
      v87 += 56;
      ++v237;
    }
    while ( v237 < v102 );
  }
  v103 = *((_DWORD *)v2 + 27) - 1;
  if ( v103 > 0 )
  {
    a2 = 56 * v103;
    do
    {
      v104 = *v8 + a2;
      v105 = *(float *)(v104 + 12) - *(float *)(v104 - 44);
      if ( v105 < 0.0 && -(v105 / v86) * (v86 * 0.5 * -(v105 / v86) + *(float *)(v104 + 12)) > *(float *)(v104 - 48) )
      {
        v198 = -*(float *)(v104 - 48);
        v193 = v86 * 0.5;
        if ( (unsigned __int8)sub_10422A40(v193, *(float *)(v104 + 12), v198, (int)&v226, (int)&v224) )
        {
          v86 = v235;
          *(float *)(a2 + *v8 - 44) = *(float *)&v226 * v235 + *(float *)(a2 + *v8 + 12);
        }
        else
        {
          v86 = v235;
        }
      }
      a2 -= 56;
      --v103;
    }
    while ( v103 > 0 );
  }
  result = *((_DWORD *)v2 + 27) - 1;
  *(float *)&v237 = 0.0;
  if ( result > 0 )
  {
    *(float *)&v236 = 0.0;
    *(float *)&v107 = 0.0;
    v108 = 0.5 * v86;
    a2 = 1;
    for ( *(float *)&v226 = 0.5 * v86; ; v108 = *(float *)&v226 )
    {
      v109 = (float *)(v107 + *v8);
      v110 = (v233 - v109[3]) / v86;
      v216 = v110;
      v225 = v110 * (v108 * v110 + v109[3]);
      v111 = v108;
      v112 = (v233 - v109[17]) / v86;
      *(float *)&v224 = v112;
      v221 = v112 * (v111 * v112 + v109[17]);
      v113 = v109[26] - v109[12];
      v114 = v109[25] - v109[11];
      v211 = v114 * v114 + v113 * v113;
      *(float *)(v107 + *v8 + 8) = off_10689708(v211);
      v115 = v107 + *v8;
      v116 = v225;
      if ( v221 + v225 >= *(float *)(v115 + 8) )
      {
        v141 = *(float *)(v115 + 12);
        *(float *)&result = COERCE_FLOAT(sub_100781F0(*(float *)(v115 + 12), *(float *)(v115 + 68), *(float *)(v115 + 8)));
        v142 = fabs(v141);
        v144 = v235 < v142;
        v145 = 0;
        v146 = v235 == v142;
        LOWORD(result) = v143;
        v86 = v235;
        if ( !v144 && !v146 )
        {
          v147 = *(float *)(v107 + *v8 + 12);
          v148 = (float *)(v107 + *v8);
          v149 = v148[17];
          v150 = (sqrt(v147 * 0.5 * v147 + v86 * v148[2] + 0.5 * v149 * v149) - v147) / v86;
          v152 = v150 > 0.0;
          v153 = 0;
          v154 = 0.0 == v150;
          LOWORD(result) = v151;
          if ( v150 > 0.0 )
          {
            v222 = v150 * v86;
            v156 = (v150 * v86 + v147 - v149) / v86;
            v157 = v156 < 0.0;
            v158 = 0;
            v159 = v156 == 0.0;
            LOWORD(result) = v155;
            if ( v156 > 0.0 )
            {
              *(float *)&v224 = v150 * (v147 + *(float *)&v226 * v150) / v148[2];
              *(float *)&result = COERCE_FLOAT(memset(v220, 0, sizeof(v220)));
              v160 = 1.0 - *(float *)&v224;
              v161 = v160 * v148[11] + *(float *)&v224 * v148[25];
              v162 = v148[12] * v160 + v148[26] * *(float *)&v224;
              v163 = v160 * v148[13] + *(float *)&v224 * v148[27];
              v220[11] = v161;
              v220[12] = v162;
              v220[13] = v163;
              v164 = v222 + v148[3];
              v220[3] = v164;
              v166 = v164 < v233;
              v167 = 0;
              v168 = v164 == v233;
              LOWORD(result) = v165;
              if ( v164 >= v233 )
              {
                v86 = v235;
              }
              else
              {
                v169 = v8[3];
                v170 = v8[1];
                if ( v169 + 1 > v170 )
                  sub_10061230(v8, v169 - v170 + 1);
                ++v8[3];
                v171 = *v8;
                v172 = v8[3] - a2 - 1;
                v8[4] = *v8;
                if ( v172 > 0 )
                  memcpy((void *)(v107 + v171 + 112), (const void *)(v107 + v171 + 56), 56 * v172);
                if ( v107 + *v8 != -56 )
                {
                  qmemcpy((void *)(v107 + *v8 + 56), v220, 0x38u);
                  v107 = v236;
                }
                v86 = v235;
                result = 1;
                ++v237;
                v107 += 56;
                ++a2;
              }
            }
          }
        }
      }
      else
      {
        v117 = *(float *)(v115 + 8);
        v118 = *(float *)(v115 + 48);
        v119 = *(float *)(v115 + 44);
        v222 = *(float *)(v115 + 8);
        v228 = v118;
        v230 = *(float *)(v115 + 100);
        result = *(int *)(v115 + 108);
        v227 = v119;
        v120 = *(float *)(v115 + 52);
        v232 = result;
        v229 = v120;
        v231 = *(float *)(v115 + 104);
        if ( v116 <= 1.0 || v216 <= 0.1 )
        {
          v126 = v117;
        }
        else
        {
          v225 = v116 / v117;
          memset(v220, 0, sizeof(v220));
          v121 = v8[3];
          v122 = 1.0 - v225;
          v123 = v8[1];
          v220[11] = v227 * v122 + v230 * v225;
          v220[12] = v228 * v122 + v231 * v225;
          v220[13] = v122 * v229 + v225 * *(float *)&v232;
          v220[3] = v233;
          if ( v121 + 1 > v123 )
            sub_10061230(v8, v121 - v123 + 1);
          ++v8[3];
          v124 = *v8;
          v125 = v8[3] - a2 - 1;
          v8[4] = *v8;
          if ( v125 > 0 )
            memcpy((void *)(v107 + v124 + 112), (const void *)(v107 + v124 + 56), 56 * v125);
          if ( v107 + *v8 != -56 )
          {
            qmemcpy((void *)(v107 + *v8 + 56), v220, 0x38u);
            v107 = v236;
          }
          v126 = v222;
          HIWORD(result) = 0;
          ++v237;
          v107 += 56;
          ++a2;
          v236 = v107;
        }
        v127 = v126 - v221;
        v129 = v127 > 1.0;
        v130 = 0;
        v131 = 1.0 == v127;
        LOWORD(result) = v128;
        if ( v127 <= 1.0
          || (v133 = *(float *)&v224 < 0.1,
              v134 = 0,
              v135 = *(float *)&v224 == 0.1,
              LOWORD(result) = v132,
              *(float *)&v224 <= 0.1) )
        {
          v86 = v235;
        }
        else
        {
          v225 = v127 / v126;
          memset(v220, 0, sizeof(v220));
          v136 = v8[3];
          v137 = 1.0 - v225;
          v138 = v8[1];
          v220[11] = v227 * v137 + v230 * v225;
          v220[12] = v228 * v137 + v231 * v225;
          v220[13] = v137 * v229 + v225 * *(float *)&v232;
          v220[3] = v233;
          if ( v136 + 1 > v138 )
            sub_10061230(v8, v136 - v138 + 1);
          ++v8[3];
          v139 = *v8;
          v140 = v8[3] - a2 - 1;
          v8[4] = *v8;
          if ( v140 > 0 )
            memcpy((void *)(v107 + v139 + 112), (const void *)(v107 + v139 + 56), 56 * v140);
          if ( v107 + *v8 != -56 )
          {
            qmemcpy((void *)(v107 + *v8 + 56), v220, 0x38u);
            v107 = v236;
          }
          v86 = v235;
          result = 1;
          ++v237;
          v107 += 56;
          ++a2;
        }
      }
      v173 = *((_DWORD *)v223 + 27);
      ++v237;
      ++a2;
      v107 += 56;
      v236 = v107;
      if ( v237 >= v173 - 1 )
        break;
    }
  }
  v174 = v223;
  v176 = 0;
  if ( *((int *)v223 + 27) > 0 )
  {
    v177 = 0;
    do
    {
      result = *v8;
      v178 = *(float *)(v177 + *v8 + 12) > 0.0;
      v179 = 0;
      v180 = 0.0 == *(float *)(v177 + *v8 + 12);
      v181 = (float *)(v177 + *v8 + 12);
      LOWORD(result) = v175;
      if ( *v181 <= 0.0 )
        v182 = 0.0;
      else
        v182 = *v181;
      ++v176;
      *v181 = v182;
      v177 += 56;
    }
    while ( v176 < *((_DWORD *)v174 + 27) );
  }
  *(float *)(*v8 + 4) = 0.0;
  v183 = 0;
  if ( *((_DWORD *)v174 + 27) - 1 > 0 )
  {
    v184 = 0;
    do
    {
      v185 = (float *)(v184 + *v8);
      v186 = v185[25] - v185[11];
      v187 = v185[26] - v185[12];
      v212 = v186 * v186 + v187 * v187;
      v185[2] = off_10689708(v212);
      v188 = *v8;
      if ( 0.0 == *(float *)(*v8 + v184 + 12) && *(float *)(v188 + v184 + 68) == 0.0 )
        *(float *)(v188 + v184 + 68) = 1.0;
      v189 = v223;
      ++v183;
      *(float *)(v184 + *v8) = *(float *)(v184 + *v8 + 8)
                             / ((*(float *)(*v8 + v184 + 68) + *(float *)(v184 + *v8 + 12))
                              * 0.5);
      v190 = *(float *)(*v8 + v184 + 4) + *(float *)(*v8 + v184);
      v191 = *v8 + v184;
      v184 += 56;
      *(float *)(v191 + 60) = v190;
      result = *((_DWORD *)v189 + 27) - 1;
    }
    while ( v183 < result );
  }
  return result;
}
