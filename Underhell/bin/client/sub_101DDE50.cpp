double __usercall sub_101DDE50@<st0>(
        float *a1@<edx>,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        float *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11)
{
  float *v12; // ebx
  float *v13; // ecx
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  double v17; // st7
  int v18; // ecx
  char *v19; // edx
  char *v20; // esi
  float *v21; // ebx
  float *v22; // eax
  int v23; // edi
  double v24; // st7
  _BYTE *v25; // edi
  _BYTE *v26; // esi
  int v27; // ebx
  double result; // st7
  unsigned __int8 v29; // dl
  double v30; // st7
  int v31; // edi
  float *v32; // ebx
  int v33; // eax
  double v34; // st6
  double v35; // st5
  float *v36; // ecx
  double v37; // st4
  double v38; // st2
  double v39; // st6
  double v40; // st5
  float *v41; // ecx
  double v42; // st4
  double v43; // st2
  int v44; // eax
  int v45; // esi
  double v46; // st7
  double v47; // st6
  double v48; // st5
  double v49; // st5
  __m128 *v50; // esi
  __m128 v51; // xmm0
  __m128 *v52; // edi
  __m128 v53; // xmm0
  int v54; // edx
  __m128 *v55; // ecx
  __m128 *v56; // eax
  __m128 v57; // xmm0
  __m128 v58; // xmm0
  __m128 v59; // xmm2
  __m128 v60; // xmm0
  __m128 v61; // xmm5
  __m128 v62; // xmm0
  __m128 v63; // xmm2
  __m128 v64; // xmm0
  __m128 v65; // xmm2
  __m128 v66; // xmm2
  __m128 v67; // xmm3
  __m128 v68; // xmm2
  __m128 v69; // xmm6
  __m128 v70; // xmm2
  __m128 v71; // xmm3
  __m128 v72; // xmm0
  bool v73; // zf
  _BYTE *v74; // edi
  _BYTE *v75; // esi
  int v76; // ebx
  double v77; // st7
  int v78; // edi
  float *v79; // ebx
  int v80; // eax
  double v81; // st6
  double v82; // st5
  float *v83; // ecx
  double v84; // st3
  double v85; // st2
  double v86; // st6
  double v87; // st5
  float *v88; // ecx
  double v89; // st3
  double v90; // st2
  double v91; // st7
  double v92; // st5
  double v93; // st7
  double v94; // st5
  double v95; // rt2
  __m128 *v96; // esi
  __m128 v97; // xmm0
  __m128 *v98; // edi
  __m128 v99; // xmm0
  int v100; // edx
  __m128 *v101; // ecx
  __m128 *v102; // eax
  __m128 v103; // xmm0
  __m128 v104; // xmm0
  __m128 v105; // xmm2
  __m128 v106; // xmm0
  __m128 v107; // xmm5
  __m128 v108; // xmm0
  __m128 v109; // xmm2
  __m128 v110; // xmm0
  __m128 v111; // xmm2
  __m128 v112; // xmm2
  __m128 v113; // xmm3
  __m128 v114; // xmm2
  __m128 v115; // xmm6
  __m128 v116; // xmm2
  __m128 v117; // xmm3
  __m128 v118; // xmm0
  _BYTE *v119; // edi
  _BYTE *v120; // esi
  int v121; // ebx
  double v122; // st7
  int v123; // edi
  float *v124; // ebx
  int v125; // eax
  double v126; // st6
  double v127; // st5
  float *v128; // ecx
  double v129; // st4
  double v130; // st2
  double v131; // st6
  double v132; // st5
  float *v133; // ecx
  double v134; // st4
  double v135; // st2
  double v136; // st7
  double v137; // st5
  double v138; // st7
  double v139; // st5
  double v140; // rt2
  __m128 *v141; // esi
  __m128 v142; // xmm0
  __m128 *v143; // edi
  __m128 v144; // xmm0
  int v145; // edx
  __m128 *v146; // ecx
  __m128 *v147; // eax
  __m128 v148; // xmm0
  __m128 v149; // xmm0
  __m128 v150; // xmm2
  __m128 v151; // xmm0
  __m128 v152; // xmm5
  __m128 v153; // xmm0
  __m128 v154; // xmm2
  __m128 v155; // xmm0
  __m128 v156; // xmm2
  __m128 v157; // xmm2
  __m128 v158; // xmm3
  __m128 v159; // xmm2
  __m128 v160; // xmm6
  __m128 v161; // xmm2
  __m128 v162; // xmm3
  __m128 v163; // xmm0
  _BYTE *v164; // edi
  _BYTE *v165; // esi
  int v166; // ebx
  float *v167; // eax
  float v168; // edx
  float v169; // ecx
  float v170; // edx
  float v171; // ecx
  float v172; // edx
  float v173; // [esp+14h] [ebp-1A5Ch]
  float v174; // [esp+14h] [ebp-1A5Ch]
  float v175; // [esp+14h] [ebp-1A5Ch]
  float v176; // [esp+14h] [ebp-1A5Ch]
  float v177; // [esp+14h] [ebp-1A5Ch]
  float v178; // [esp+14h] [ebp-1A5Ch]
  float v179; // [esp+14h] [ebp-1A5Ch]
  float v180; // [esp+14h] [ebp-1A5Ch]
  float v181; // [esp+14h] [ebp-1A5Ch]
  float v182; // [esp+14h] [ebp-1A5Ch]
  float v183; // [esp+14h] [ebp-1A5Ch]
  float v184; // [esp+14h] [ebp-1A5Ch]
  float v185; // [esp+14h] [ebp-1A5Ch]
  float v186; // [esp+14h] [ebp-1A5Ch]
  float v187; // [esp+14h] [ebp-1A5Ch]
  float v188; // [esp+14h] [ebp-1A5Ch]
  float v189; // [esp+14h] [ebp-1A5Ch]
  float v190; // [esp+14h] [ebp-1A5Ch]
  float v191; // [esp+18h] [ebp-1A58h]
  float v192; // [esp+18h] [ebp-1A58h]
  float v193; // [esp+18h] [ebp-1A58h]
  float v194; // [esp+18h] [ebp-1A58h]
  float v195; // [esp+18h] [ebp-1A58h]
  float v196; // [esp+18h] [ebp-1A58h]
  float v197; // [esp+18h] [ebp-1A58h]
  float v198; // [esp+18h] [ebp-1A58h]
  float v199; // [esp+18h] [ebp-1A58h]
  float v200; // [esp+18h] [ebp-1A58h]
  float v201; // [esp+18h] [ebp-1A58h]
  float v202; // [esp+18h] [ebp-1A58h]
  float v203; // [esp+18h] [ebp-1A58h]
  float v204; // [esp+18h] [ebp-1A58h]
  float v205; // [esp+18h] [ebp-1A58h]
  float v206; // [esp+18h] [ebp-1A58h]
  float v207; // [esp+18h] [ebp-1A58h]
  float v208; // [esp+18h] [ebp-1A58h]
  float v209; // [esp+1Ch] [ebp-1A54h]
  float v210; // [esp+1Ch] [ebp-1A54h]
  int v211; // [esp+1Ch] [ebp-1A54h]
  float v212; // [esp+1Ch] [ebp-1A54h]
  int v213; // [esp+1Ch] [ebp-1A54h]
  int v214; // [esp+1Ch] [ebp-1A54h]
  float v215; // [esp+1Ch] [ebp-1A54h]
  int v216; // [esp+1Ch] [ebp-1A54h]
  int v217; // [esp+1Ch] [ebp-1A54h]
  float v218; // [esp+1Ch] [ebp-1A54h]
  int v219; // [esp+20h] [ebp-1A50h]
  int v220; // [esp+20h] [ebp-1A50h]
  int v221; // [esp+20h] [ebp-1A50h]
  int v222; // [esp+20h] [ebp-1A50h]
  int v223; // [esp+20h] [ebp-1A50h]
  int v224; // [esp+20h] [ebp-1A50h]
  int v225; // [esp+24h] [ebp-1A4Ch]
  int v226; // [esp+24h] [ebp-1A4Ch]
  int v227; // [esp+24h] [ebp-1A4Ch]
  float v228; // [esp+28h] [ebp-1A48h]
  float v229; // [esp+28h] [ebp-1A48h]
  float *v230; // [esp+2Ch] [ebp-1A44h]
  int v231; // [esp+30h] [ebp-1A40h] BYREF
  int v232; // [esp+34h] [ebp-1A3Ch]
  int v233; // [esp+38h] [ebp-1A38h]
  int v234; // [esp+3Ch] [ebp-1A34h]
  unsigned int v235; // [esp+40h] [ebp-1A30h]
  int v236; // [esp+44h] [ebp-1A2Ch]
  unsigned int v237; // [esp+48h] [ebp-1A28h]
  float v238; // [esp+4Ch] [ebp-1A24h]
  double v239; // [esp+50h] [ebp-1A20h]
  float v240; // [esp+58h] [ebp-1A18h] BYREF
  float v241; // [esp+5Ch] [ebp-1A14h]
  float v242; // [esp+60h] [ebp-1A10h]
  float v243; // [esp+64h] [ebp-1A0Ch]
  float v244; // [esp+68h] [ebp-1A08h]
  float v245; // [esp+6Ch] [ebp-1A04h]
  double i; // [esp+78h] [ebp-19F8h]
  double v247; // [esp+80h] [ebp-19F0h]
  double v248; // [esp+88h] [ebp-19E8h]
  float v249; // [esp+90h] [ebp-19E0h]
  float v250; // [esp+94h] [ebp-19DCh]
  float v251; // [esp+98h] [ebp-19D8h]
  float *v252; // [esp+9Ch] [ebp-19D4h]
  _BYTE v253[8]; // [esp+A0h] [ebp-19D0h] BYREF
  char v254[8]; // [esp+A8h] [ebp-19C8h] BYREF
  char v255[16]; // [esp+B0h] [ebp-19C0h] BYREF
  __m128 v256; // [esp+C0h] [ebp-19B0h]
  __m128 v257; // [esp+D0h] [ebp-19A0h]
  __m128 v258; // [esp+E0h] [ebp-1990h]
  __m128 v259; // [esp+F0h] [ebp-1980h]
  __m128 v260; // [esp+100h] [ebp-1970h]
  __m128 v261; // [esp+110h] [ebp-1960h]
  __m128 v262; // [esp+120h] [ebp-1950h]
  float v263; // [esp+130h] [ebp-1940h] BYREF
  float v264; // [esp+134h] [ebp-193Ch]
  float v265; // [esp+138h] [ebp-1938h]
  float v266; // [esp+13Ch] [ebp-1934h]
  float v267; // [esp+140h] [ebp-1930h]
  float v268[3]; // [esp+144h] [ebp-192Ch]
  _BYTE v269[64]; // [esp+150h] [ebp-1920h] BYREF
  float v270[16]; // [esp+190h] [ebp-18E0h] BYREF
  float v271[32]; // [esp+1D0h] [ebp-18A0h] BYREF
  float v272[256]; // [esp+250h] [ebp-1820h] BYREF
  _BYTE v273[256]; // [esp+650h] [ebp-1420h] BYREF
  _BYTE v275[516]; // [esp+850h] [ebp-1220h] BYREF
  _BYTE v276[60]; // [esp+A54h] [ebp-101Ch] BYREF
  _BYTE v277[4032]; // [esp+A90h] [ebp-FE0h] BYREF
  __m128 v278; // [esp+1A50h] [ebp-20h]
  __m128 v279; // [esp+1A60h] [ebp-10h]

  v252 = a1;
  v233 = (a5 + 3) / 4;
  if ( a5 > 0 )
  {
    v230 = (float *)v273;
    v12 = v272;
    v219 = a5;
    do
    {
      v13 = v230;
      v14 = v12;
      v15 = 3;
      do
      {
        v16 = *(float *)((char *)v14++ + a3 - (_DWORD)v272);
        v209 = v16;
        v13 += 64;
        --v15;
        *(v14 - 1) = v209;
        *(v13 - 64) = v209;
      }
      while ( v15 );
      ++v230;
      v12 += 4;
      --v219;
    }
    while ( v219 );
  }
  if ( a7 )
  {
    v238 = *a7;
    v235 = *((unsigned int *)a7 + 1);
    v17 = a7[2];
  }
  else
  {
    v17 = 1.0;
    v238 = 1.0;
    *(float *)&v235 = 1.0;
  }
  *(float *)&v237 = v17;
  v251 = (float)(1 << (8 - a8));
  v250 = (float)(1 << (8 - a9));
  v18 = a2 - (_DWORD)a1;
  v19 = (char *)((char *)&v240 - (char *)a1);
  v20 = (char *)((char *)&v263 - (char *)a1);
  v249 = (float)(1 << (8 - a10));
  v21 = a1;
  v220 = 2;
  do
  {
    v22 = v21;
    v23 = 3;
    do
    {
      v24 = *(float *)((char *)v22 + v18);
      v22 += 2;
      --v23;
      v210 = v24;
      *(v22 - 2) = v210;
      *(float *)((char *)v22 + (_DWORD)v19 - 8) = v210;
      *(float *)((char *)v22 + (_DWORD)v20 - 8) = v210;
    }
    while ( v23 );
    ++v21;
    --v220;
  }
  while ( v220 );
  sub_101E1780(&v231, v253, &v240, a8, a9, a10);
  v25 = v269;
  v26 = v253;
  v27 = 3;
  do
  {
    sub_101E18E0(v25, v26, a6);
    v26 += 8;
    v25 += 64;
    --v27;
  }
  while ( v27 );
  v228 = sub_101D9530(a4, (int)v269, a5, a6, v231, a7);
  result = v228;
  if ( v228 != 0.0 )
  {
    v29 = a11;
    if ( a11 )
    {
      v30 = *(float *)&v235;
      if ( a5 > 0 )
      {
        v31 = 0;
        v32 = (float *)v276;
        v221 = a5;
        do
        {
          v33 = 0;
          if ( a6 >= 4u )
          {
            v34 = v272[v31 + 1];
            v35 = v272[v31];
            v36 = v32;
            v37 = *(float *)&v237;
            do
            {
              v38 = v270[v33];
              v33 += 4;
              v36 += 4;
              v191 = v38 - v34;
              v173 = v268[v33 - 1] - v35;
              *(v36 - 5) = v191 * v191 * v30 + v173 * v173 * v37;
              v192 = *(float *)&v269[4 * v33 + 52] - v34;
              v174 = v268[v33] - v35;
              *(v36 - 4) = v192 * v192 * v30 + v174 * v174 * v37;
              v193 = *(float *)&v269[4 * v33 + 56] - v34;
              v175 = v268[v33 + 1] - v35;
              *(v36 - 3) = v193 * v193 * v30 + v175 * v175 * v37;
              v194 = *(float *)&v269[4 * v33 + 60] - v34;
              v176 = v268[v33 + 2] - v35;
              *(v36 - 2) = v194 * v194 * v30 + v176 * v176 * v37;
            }
            while ( v33 < a6 - 3 );
            v29 = a11;
          }
          if ( v33 < a6 )
          {
            v39 = v272[v31 + 1];
            v40 = v272[v31];
            v41 = (float *)&v275[4 * v33 + 512 + 1 * v31];
            v42 = *(float *)&v237;
            do
            {
              v43 = v270[v33++];
              ++v41;
              v195 = v43 - v39;
              v177 = v268[v33 + 2] - v40;
              *(v41 - 1) = v195 * v195 * v30 + v177 * v177 * v42;
            }
            while ( v33 < a6 );
          }
          v32 += 16;
          v31 += 4;
          --v221;
        }
        while ( v221 );
      }
      v44 = v29;
      v196 = v267;
      v178 = v268[0];
      if ( v29 >= 8u )
        v44 = 8;
      v236 = -v44;
      v45 = v29;
      if ( v29 >= 8u )
        v45 = 8;
      v234 = v45;
      v232 = (a6 + 3) / 4;
      v222 = -v44;
      if ( -v44 <= v45 )
      {
        v46 = 255.0;
        v247 = v267;
        v258 = _mm_shuffle_ps((__m128)LODWORD(v238), (__m128)LODWORD(v238), 0);
        v239 = v251;
        v47 = 0.0;
        v257 = 0;
        v248 = v268[0];
        while ( 1 )
        {
          v225 = v236;
          v48 = (double)v222 * v239 + v247;
          i = v48;
          while ( 1 )
          {
            if ( v48 > v47 && v48 >= v46 )
            {
              v48 = v46;
            }
            else if ( v48 <= v47 )
            {
              v48 = v47;
            }
            v244 = v48;
            v49 = (double)v225 * v239 + v248;
            if ( v49 <= v47 || v49 < v46 )
            {
              v46 = v49;
              if ( v47 >= v49 )
                v46 = v47;
            }
            v245 = v46;
            sub_101E1780(&v231, v253, &v240, a8, a9, a10);
            sub_101E18E0(v271, v255, a6);
            v278 = v257;
            if ( v233 > 0 )
            {
              v50 = (__m128 *)a4;
              v51 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
              v259 = v51;
              v52 = (__m128 *)v277;
              v211 = v233;
              while ( 1 )
              {
                v279 = v51;
                if ( v232 > 0 )
                {
                  v53 = *(__m128 *)&v275[(_DWORD)v50 - a4];
                  v54 = v232;
                  v260 = _mm_shuffle_ps(v53, v53, 0);
                  v256 = _mm_shuffle_ps(v53, v53, 85);
                  v261 = _mm_shuffle_ps(v53, v53, 170);
                  v262 = _mm_shuffle_ps(v53, v53, 255);
                  v55 = (__m128 *)v271;
                  v56 = v52;
                  do
                  {
                    v57 = _mm_sub_ps(v260, *v55);
                    v58 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v57, v57), v258), v56[-4]);
                    v59 = _mm_min_ps(_mm_shuffle_ps(v58, v257, 254), v58);
                    v60 = _mm_sub_ps(v256, *v55);
                    v61 = _mm_min_ps(_mm_shuffle_ps(v59, v257, 253), v59);
                    v62 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v60, v60), v258), *v56);
                    v63 = _mm_min_ps(_mm_shuffle_ps(v62, v257, 254), v62);
                    v64 = _mm_min_ps(_mm_shuffle_ps(v63, v257, 243), v63);
                    v65 = _mm_sub_ps(v261, *v55);
                    v66 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v65, v65), v258), v56[4]);
                    v67 = _mm_min_ps(_mm_shuffle_ps(v257, v66, 79), v66);
                    v68 = _mm_sub_ps(v262, *v55);
                    v69 = _mm_min_ps(_mm_shuffle_ps(v257, v67, 63), v67);
                    v70 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v68, v68), v258), v56[8]);
                    v71 = _mm_min_ps(_mm_shuffle_ps(v257, v70, 79), v70);
                    ++v55;
                    ++v56;
                    --v54;
                    v279 = _mm_min_ps(
                             v279,
                             _mm_add_ps(
                               _mm_min_ps(_mm_shuffle_ps(v257, v71, 143), v71),
                               _mm_add_ps(_mm_add_ps(v64, v61), v69)));
                  }
                  while ( v54 );
                }
                v72 = _mm_add_ps(_mm_mul_ps(*v50, v279), v278);
                v52 += 16;
                ++v50;
                v73 = v211-- == 1;
                v278 = v72;
                if ( v73 )
                  break;
                v51 = v259;
              }
            }
            v212 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            if ( v228 > (double)v212 )
            {
              v196 = v244;
              v178 = v245;
              v228 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            }
            if ( ++v225 > v234 )
              break;
            v47 = 0.0;
            v48 = i;
            v46 = 255.0;
          }
          if ( ++v222 > v234 )
            break;
          v46 = 255.0;
          v47 = 0.0;
        }
      }
      v244 = v196;
      v245 = v178;
      sub_101E1780(&v231, v253, &v240, a8, a9, a10);
      v74 = v269;
      v75 = v253;
      v76 = 3;
      do
      {
        sub_101E18E0(v74, v75, a6);
        v75 += 8;
        v74 += 64;
        --v76;
      }
      while ( v76 );
      if ( a5 > 0 )
      {
        v77 = *(float *)&v237;
        v78 = 0;
        v79 = (float *)v276;
        v213 = a5;
        do
        {
          v80 = 0;
          if ( a6 >= 4u )
          {
            v81 = v272[v78 + 2];
            v82 = v272[v78];
            v83 = v79;
            v84 = v238;
            do
            {
              v85 = v271[v80];
              v80 += 4;
              v83 += 4;
              v179 = v85 - v81;
              v197 = v268[v80 - 1] - v82;
              *(v83 - 5) = v179 * v179 * v84 + v197 * v197 * v77;
              v180 = v270[v80 + 13] - v81;
              v198 = v268[v80] - v82;
              *(v83 - 4) = v180 * v180 * v84 + v198 * v198 * v77;
              v181 = v270[v80 + 14] - v81;
              v199 = v268[v80 + 1] - v82;
              *(v83 - 3) = v181 * v181 * v84 + v199 * v199 * v77;
              v182 = v270[v80 + 15] - v81;
              v200 = v268[v80 + 2] - v82;
              *(v83 - 2) = v182 * v182 * v84 + v200 * v200 * v77;
            }
            while ( v80 < a6 - 3 );
          }
          if ( v80 < a6 )
          {
            v86 = v272[v78 + 2];
            v87 = v272[v78];
            v88 = (float *)&v275[4 * v80 + 512 + 1 * v78];
            v89 = v238;
            do
            {
              v90 = v271[v80++];
              ++v88;
              v183 = v90 - v86;
              v201 = v268[v80 + 2] - v87;
              *(v88 - 1) = v183 * v183 * v89 + v201 * v201 * v77;
            }
            while ( v80 < a6 );
          }
          v79 += 16;
          v78 += 4;
          --v213;
        }
        while ( v213 );
      }
      v202 = v265;
      v226 = v236;
      v184 = v266;
      if ( v236 <= v234 )
      {
        v248 = v265;
        v262 = _mm_shuffle_ps((__m128)v235, (__m128)v235, 0);
        v239 = v250;
        v257 = 0;
        v247 = v266;
        do
        {
          v223 = v236;
          v91 = (double)v226 * v239 + v248;
          for ( i = v91; ; v91 = i )
          {
            if ( v91 <= 0.0 )
            {
              v92 = 255.0;
            }
            else
            {
              v92 = 255.0;
              if ( v91 >= 255.0 )
              {
                v93 = 255.0;
                goto LABEL_74;
              }
            }
            v95 = v92;
            v92 = v91;
            v93 = v95;
            if ( v92 <= 0.0 )
              v92 = 0.0;
LABEL_74:
            v242 = v92;
            v94 = (double)v223 * v239 + v247;
            if ( v94 <= 0.0 || v94 < v93 )
            {
              v93 = v94;
              if ( v94 <= 0.0 )
                v93 = 0.0;
            }
            v243 = v93;
            sub_101E1780(&v231, v253, &v240, a8, a9, a10);
            sub_101E18E0(v270, v254, a6);
            v278 = v257;
            if ( v233 > 0 )
            {
              v96 = (__m128 *)a4;
              v97 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
              v261 = v97;
              v98 = (__m128 *)v277;
              v214 = v233;
              while ( 1 )
              {
                v279 = v97;
                if ( v232 > 0 )
                {
                  v99 = *(__m128 *)((char *)v96 + (_DWORD)(v275 - a4 + 254));
                  v100 = v232;
                  v256 = _mm_shuffle_ps(v99, v99, 0);
                  v260 = _mm_shuffle_ps(v99, v99, 85);
                  v259 = _mm_shuffle_ps(v99, v99, 170);
                  v258 = _mm_shuffle_ps(v99, v99, 255);
                  v101 = (__m128 *)v270;
                  v102 = v98;
                  do
                  {
                    v103 = _mm_sub_ps(v256, *v101);
                    v104 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v103, v103), v262), v102[-4]);
                    v105 = _mm_min_ps(_mm_shuffle_ps(v104, v257, 254), v104);
                    v106 = _mm_sub_ps(v260, *v101);
                    v107 = _mm_min_ps(_mm_shuffle_ps(v105, v257, 253), v105);
                    v108 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v106, v106), v262), *v102);
                    v109 = _mm_min_ps(_mm_shuffle_ps(v108, v257, 254), v108);
                    v110 = _mm_min_ps(_mm_shuffle_ps(v109, v257, 243), v109);
                    v111 = _mm_sub_ps(v259, *v101);
                    v112 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v111, v111), v262), v102[4]);
                    v113 = _mm_min_ps(_mm_shuffle_ps(v257, v112, 79), v112);
                    v114 = _mm_sub_ps(v258, *v101);
                    v115 = _mm_min_ps(_mm_shuffle_ps(v257, v113, 63), v113);
                    v116 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v114, v114), v262), v102[8]);
                    v117 = _mm_min_ps(_mm_shuffle_ps(v257, v116, 79), v116);
                    ++v101;
                    ++v102;
                    --v100;
                    v279 = _mm_min_ps(
                             v279,
                             _mm_add_ps(
                               _mm_min_ps(_mm_shuffle_ps(v257, v117, 143), v117),
                               _mm_add_ps(_mm_add_ps(v110, v107), v115)));
                  }
                  while ( v100 );
                }
                v118 = _mm_add_ps(_mm_mul_ps(*v96, v279), v278);
                v98 += 16;
                ++v96;
                v73 = v214-- == 1;
                v278 = v118;
                if ( v73 )
                  break;
                v97 = v261;
              }
            }
            v215 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            if ( v228 > (double)v215 )
            {
              v202 = v242;
              v184 = v243;
              v228 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            }
            if ( ++v223 > v234 )
              break;
          }
          ++v226;
        }
        while ( v226 <= v234 );
      }
      v242 = v202;
      v243 = v184;
      sub_101E1780(&v231, v253, &v240, a8, a9, a10);
      v119 = v269;
      v120 = v253;
      v121 = 3;
      do
      {
        sub_101E18E0(v119, v120, a6);
        v120 += 8;
        v119 += 64;
        --v121;
      }
      while ( v121 );
      if ( a5 > 0 )
      {
        v122 = v238;
        v123 = 0;
        v124 = (float *)v276;
        v216 = a5;
        do
        {
          v125 = 0;
          if ( a6 >= 4u )
          {
            v126 = v272[v123 + 2];
            v127 = v272[v123 + 1];
            v128 = v124;
            v129 = *(float *)&v235;
            do
            {
              v130 = v271[v125];
              v125 += 4;
              v128 += 4;
              v185 = v130 - v126;
              v203 = *(float *)&v269[4 * v125 + 48] - v127;
              *(v128 - 5) = v203 * v203 * v129 + v185 * v185 * v122;
              v186 = v270[v125 + 13] - v126;
              v204 = *(float *)&v269[4 * v125 + 52] - v127;
              *(v128 - 4) = v204 * v204 * v129 + v186 * v186 * v122;
              v187 = v270[v125 + 14] - v126;
              v205 = *(float *)&v269[4 * v125 + 56] - v127;
              *(v128 - 3) = v205 * v205 * v129 + v187 * v187 * v122;
              v188 = v270[v125 + 15] - v126;
              v206 = *(float *)&v269[4 * v125 + 60] - v127;
              *(v128 - 2) = v206 * v206 * v129 + v188 * v188 * v122;
            }
            while ( v125 < a6 - 3 );
          }
          if ( v125 < a6 )
          {
            v131 = v272[v123 + 2];
            v132 = v272[v123 + 1];
            v133 = (float *)&v275[1 * v123 + 512 + 4 * v125];
            v134 = *(float *)&v235;
            do
            {
              v135 = v271[v125++];
              ++v133;
              v189 = v135 - v131;
              v207 = *(float *)&v269[4 * v125 + 60] - v132;
              *(v133 - 1) = v207 * v207 * v134 + v189 * v189 * v122;
            }
            while ( v125 < a6 );
          }
          v124 += 16;
          v123 += 4;
          --v216;
        }
        while ( v216 );
      }
      v208 = v263;
      v227 = v236;
      v190 = v264;
      if ( v236 <= v234 )
      {
        v248 = v263;
        v262 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 0);
        v239 = v249;
        v257 = 0;
        v247 = v264;
        do
        {
          v224 = v236;
          v136 = (double)v227 * v239 + v248;
          for ( i = v136; ; v136 = i )
          {
            if ( v136 <= 0.0 )
            {
              v137 = 255.0;
            }
            else
            {
              v137 = 255.0;
              if ( v136 >= 255.0 )
              {
                v138 = 255.0;
                goto LABEL_110;
              }
            }
            v140 = v137;
            v137 = v136;
            v138 = v140;
            if ( v137 <= 0.0 )
              v137 = 0.0;
LABEL_110:
            v240 = v137;
            v139 = (double)v224 * v239 + v247;
            if ( v139 <= 0.0 || v139 < v138 )
            {
              v138 = v139;
              if ( v139 <= 0.0 )
                v138 = 0.0;
            }
            v241 = v138;
            sub_101E1780(&v231, v253, &v240, a8, a9, a10);
            sub_101E18E0(v269, v253, a6);
            v278 = v257;
            if ( v233 > 0 )
            {
              v141 = (__m128 *)a4;
              v142 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
              v261 = v142;
              v143 = (__m128 *)v277;
              v217 = v233;
              while ( 1 )
              {
                v279 = v142;
                if ( v232 > 0 )
                {
                  v144 = *(__m128 *)&v273[(_DWORD)v141 - a4];
                  v145 = v232;
                  v256 = _mm_shuffle_ps(v144, v144, 0);
                  v260 = _mm_shuffle_ps(v144, v144, 85);
                  v259 = _mm_shuffle_ps(v144, v144, 170);
                  v258 = _mm_shuffle_ps(v144, v144, 255);
                  v146 = (__m128 *)v269;
                  v147 = v143;
                  do
                  {
                    v148 = _mm_sub_ps(v256, *v146);
                    v149 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v148, v148), v262), v147[-4]);
                    v150 = _mm_min_ps(_mm_shuffle_ps(v149, v257, 254), v149);
                    v151 = _mm_sub_ps(v260, *v146);
                    v152 = _mm_min_ps(_mm_shuffle_ps(v150, v257, 253), v150);
                    v153 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v151, v151), v262), *v147);
                    v154 = _mm_min_ps(_mm_shuffle_ps(v153, v257, 254), v153);
                    v155 = _mm_min_ps(_mm_shuffle_ps(v154, v257, 243), v154);
                    v156 = _mm_sub_ps(v259, *v146);
                    v157 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v156, v156), v262), v147[4]);
                    v158 = _mm_min_ps(_mm_shuffle_ps(v257, v157, 79), v157);
                    v159 = _mm_sub_ps(v258, *v146);
                    v160 = _mm_min_ps(_mm_shuffle_ps(v257, v158, 63), v158);
                    v161 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v159, v159), v262), v147[8]);
                    v162 = _mm_min_ps(_mm_shuffle_ps(v257, v161, 79), v161);
                    ++v146;
                    ++v147;
                    --v145;
                    v279 = _mm_min_ps(
                             v279,
                             _mm_add_ps(
                               _mm_min_ps(_mm_shuffle_ps(v257, v162, 143), v162),
                               _mm_add_ps(_mm_add_ps(v155, v152), v160)));
                  }
                  while ( v145 );
                }
                v163 = _mm_add_ps(_mm_mul_ps(*v141, v279), v278);
                v143 += 16;
                ++v141;
                v73 = v217-- == 1;
                v278 = v163;
                if ( v73 )
                  break;
                v142 = v261;
              }
            }
            v218 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            if ( v228 > (double)v218 )
            {
              v208 = v240;
              v190 = v241;
              v228 = v278.m128_f32[1] + v278.m128_f32[0] + v278.m128_f32[2] + v278.m128_f32[3];
            }
            if ( ++v224 > v234 )
              break;
          }
          ++v227;
        }
        while ( v227 <= v234 );
      }
      v240 = v208;
      v241 = v190;
      sub_101E1780(&v231, v253, &v240, a8, a9, a10);
      v164 = v269;
      v165 = v253;
      v166 = 3;
      do
      {
        sub_101E18E0(v164, v165, a6);
        v165 += 8;
        v164 += 64;
        --v166;
      }
      while ( v166 );
      v229 = sub_101D9530(a4, (int)v269, a5, a6, v231, a7);
      v167 = v252;
      result = v229;
      v168 = v241;
      *v252 = v240;
      v169 = v242;
      v167[1] = v168;
      v170 = v243;
      v167[2] = v169;
      v171 = v244;
      v167[3] = v170;
      v172 = v245;
      v167[4] = v171;
      v167[5] = v172;
    }
  }
  return result;
}
