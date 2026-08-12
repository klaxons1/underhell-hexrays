int __thiscall sub_100DA9F0(void *this, int a2, float a3, float a4, const void *a5, int a6)
{
  const void *v6; // esi
  int v8; // esi
  double v9; // st7
  int result; // eax
  float *v11; // edi
  double v12; // st7
  double v13; // st6
  float *v14; // ebx
  double v15; // rtt
  double v16; // st6
  double v17; // st7
  int v18; // eax
  double v19; // st6
  double v20; // st5
  double v21; // st4
  double v22; // st3
  double v23; // st2
  double v24; // st2
  double v25; // st5
  double v26; // rt1
  double v27; // rt0
  double v28; // st5
  double v29; // rtt
  double v30; // st5
  double v31; // st6
  double v32; // st6
  double v33; // st4
  double v34; // rt1
  double v35; // st3
  double v36; // st5
  double v37; // st6
  double v38; // st4
  double v39; // rt1
  int v40; // eax
  double v41; // st7
  double v42; // st6
  double v43; // st5
  long double v44; // st4
  double v45; // st3
  long double v46; // st7
  long double v47; // rt0
  double v48; // st4
  long double v49; // st5
  long double v50; // st6
  long double v51; // st5
  double v52; // st7
  double v53; // st5
  double v54; // st6
  double v55; // st3
  double v56; // st1
  double v57; // st1
  double v58; // st7
  double v59; // st4
  double v60; // st2
  double v61; // st2
  double v62; // rt2
  double v63; // st0
  double v64; // st1
  double v65; // rt0
  double v66; // st1
  double v67; // st6
  double v68; // st2
  double v69; // st1
  double v70; // st3
  double v71; // rt1
  double v72; // st1
  double v73; // st7
  double v74; // st1
  double v75; // st7
  double v76; // st1
  double v77; // st1
  double v78; // st6
  double v79; // st7
  double v80; // st6
  double v81; // st5
  double v82; // st7
  double v83; // rt1
  double v84; // st5
  long double v85; // st7
  double v86; // st7
  double v87; // st7
  double v88; // st5
  double v89; // st4
  double v90; // st6
  double v91; // st2
  double v92; // st3
  double v93; // st1
  double v94; // st0
  double v95; // st7
  double v96; // st0
  double v97; // st4
  double v98; // st2
  double v99; // st1
  double v100; // st2
  double v101; // st1
  double v102; // st0
  double v103; // st1
  double v104; // rt2
  double v105; // st1
  double v106; // st6
  double v107; // st5
  double v108; // rt0
  double v109; // st2
  double v110; // st1
  double v111; // st7
  double v112; // rtt
  double v113; // st1
  double v114; // st3
  double v115; // rt2
  double v116; // st1
  double v117; // rt0
  double v118; // st4
  double v119; // rtt
  long double v120; // st7
  double v121; // st7
  double v122; // st7
  double v123; // st6
  double v124; // st6
  double v125; // st7
  double v126; // st7
  double v127; // st6
  double v128; // st5
  double v129; // st4
  double v130; // rt2
  double v131; // rtt
  double v132; // st4
  double v133; // st7
  double v134; // st5
  double v135; // st4
  double v136; // st6
  double v137; // st3
  double v138; // st2
  float *v139; // edx
  double v140; // st0
  double v141; // st6
  double v142; // st5
  double v143; // st5
  double v144; // st6
  double v145; // st5
  double v146; // st6
  double v147; // st6
  double v148; // st5
  double v149; // st4
  double v150; // st3
  double v151; // st6
  double v152; // st2
  double v153; // st4
  double v154; // st1
  double v155; // st3
  double v156; // st1
  double v157; // st5
  double v158; // st1
  double v159; // st1
  double v160; // st1
  double v161; // rt2
  double v162; // st3
  double v163; // st6
  double v164; // st3
  double v165; // st2
  double v166; // rt2
  double v167; // st4
  double v168; // st1
  double v169; // st6
  double v170; // st4
  double v171; // st6
  double v172; // st3
  double v173; // st2
  double v174; // rtt
  double v175; // st4
  double v176; // st1
  double v177; // st6
  double v178; // st4
  double v179; // st4
  double v180; // st3
  double v181; // st6
  double v182; // st5
  double v183; // st3
  double v184; // st4
  double v185; // st6
  float v186; // [esp+18h] [ebp-ECh] BYREF
  float v187; // [esp+1Ch] [ebp-E8h]
  float v188; // [esp+20h] [ebp-E4h]
  float v189; // [esp+28h] [ebp-DCh]
  float v190; // [esp+2Ch] [ebp-D8h]
  float v191; // [esp+30h] [ebp-D4h]
  float v192; // [esp+38h] [ebp-CCh]
  float v193; // [esp+3Ch] [ebp-C8h]
  float v194; // [esp+40h] [ebp-C4h]
  float v195; // [esp+48h] [ebp-BCh] BYREF
  float v196; // [esp+4Ch] [ebp-B8h]
  float v197; // [esp+50h] [ebp-B4h]
  float v198; // [esp+54h] [ebp-B0h]
  float v199; // [esp+58h] [ebp-ACh]
  float v200; // [esp+5Ch] [ebp-A8h]
  float v201; // [esp+60h] [ebp-A4h]
  float v202; // [esp+64h] [ebp-A0h]
  float v203; // [esp+68h] [ebp-9Ch]
  float v204; // [esp+6Ch] [ebp-98h]
  float v205; // [esp+70h] [ebp-94h]
  float v206; // [esp+74h] [ebp-90h]
  float *v207; // [esp+78h] [ebp-8Ch]
  float *v208; // [esp+7Ch] [ebp-88h]
  int v209; // [esp+80h] [ebp-84h] BYREF
  float v210; // [esp+84h] [ebp-80h]
  float v211; // [esp+88h] [ebp-7Ch]
  float v212; // [esp+8Ch] [ebp-78h]
  float v213; // [esp+90h] [ebp-74h]
  float v214; // [esp+94h] [ebp-70h]
  float v215; // [esp+98h] [ebp-6Ch]
  float v216; // [esp+9Ch] [ebp-68h]
  float v217; // [esp+A0h] [ebp-64h]
  float v218; // [esp+A4h] [ebp-60h]
  float v219; // [esp+A8h] [ebp-5Ch]
  float v220; // [esp+ACh] [ebp-58h]
  float v221; // [esp+B0h] [ebp-54h] BYREF
  float v222; // [esp+B4h] [ebp-50h]
  float v223; // [esp+B8h] [ebp-4Ch]
  float v224; // [esp+BCh] [ebp-48h]
  float v225; // [esp+C0h] [ebp-44h]
  float v226; // [esp+C4h] [ebp-40h]
  int v227; // [esp+C8h] [ebp-3Ch] BYREF
  float v228; // [esp+CCh] [ebp-38h]
  float v229; // [esp+D0h] [ebp-34h]
  float v230; // [esp+D4h] [ebp-30h] BYREF
  float v231; // [esp+D8h] [ebp-2Ch]
  float v232; // [esp+DCh] [ebp-28h]
  float v233; // [esp+E0h] [ebp-24h] BYREF
  float v234; // [esp+E4h] [ebp-20h]
  float v235; // [esp+E8h] [ebp-1Ch]
  float v236; // [esp+ECh] [ebp-18h]
  float v237; // [esp+F0h] [ebp-14h]
  float v238; // [esp+F4h] [ebp-10h]
  float v239; // [esp+F8h] [ebp-Ch]
  float v240; // [esp+FCh] [ebp-8h]
  float v241; // [esp+100h] [ebp-4h]
  int v242; // [esp+10Ch] [ebp+8h]

  v6 = a5;
  sub_101EDA00(a5, 3, &v227);
  sub_101EDA00(v6, 0, &v221);
  sub_101EDA00(v6, 1, &v233);
  sub_101EDA00(v6, 2, &v230);
  v8 = LODWORD(a4);
  v9 = *(float *)(LODWORD(a4) + 4);
  *(float *)&v209 = v230 * v9 + *(float *)&v227;
  v210 = v9 * v231 + v228;
  v211 = v9 * v232 + v229;
  result = sub_100DA8E0((int)this, a2, a3, (float *)&v227, (float *)&v209);
  v11 = (float *)result;
  if ( !result )
    return result;
  v12 = a3;
  if ( a3 - *(float *)(result + 4) > 0.5 )
  {
    sub_100DA550((float *)result, a2, a3, (float *)&v227, (float *)&v209);
    v12 = a3;
  }
  v13 = v12 - v11[1];
  if ( v13 <= 0.033300001 )
  {
    if ( v13 < 0.001 )
      v13 = 0.001;
  }
  else
  {
    v13 = 0.033300001;
  }
  v14 = (float *)a6;
  *(float *)&v242 = v13;
  v15 = v13;
  v16 = v12;
  v17 = v15;
  v11[1] = v16;
  if ( (*(_BYTE *)v8 & 3) != 0 )
  {
    v11[22] = v11[22] - *(float *)(v8 + 8);
    v18 = *(_DWORD *)v8;
    if ( (*(_DWORD *)v8 & 1) != 0 )
    {
      v19 = *(float *)&v209 - v11[14];
      v20 = v210 - v11[15];
      v21 = v211 - v11[16];
      v217 = v21;
      v22 = v222;
      v239 = v21 * v223 + v19 * v221 + v222 * v20;
      v241 = v217 * v232 + v20 * v231 + v19 * v230;
      v23 = v222 * v11[18] + v221 * v11[17] + v223 * v11[19];
      v216 = v234 * v11[18] + v233 * v11[17] + v235 * v11[19];
      v24 = *(float *)(v8 + 12) * v239 - v23 * *(float *)(v8 + 16);
      v25 = (v235 * v217 + v234 * v20 + v19 * v233) * *(float *)(v8 + 20) - *(float *)(v8 + 24) * v216;
      if ( (v18 & 0x20) != 0 )
      {
        v26 = v234 * v25;
        v27 = v233 * v25 + v221 * v24;
        v28 = v25 * v235 + v24 * v223;
        v11[20] = v27 + v11[20];
        v29 = v28;
        v30 = v26 + v22 * v24;
        v31 = v29;
      }
      else
      {
        v32 = *(float *)(v8 + 28) * v241 - (v231 * v11[18] + v230 * v11[17] + v232 * v11[19]) * *(float *)(v8 + 32);
        v216 = v231 * v32;
        v239 = v233 * v25;
        v240 = v234 * v25;
        v33 = v230 * v32;
        v34 = v22 * v24 + v240;
        v35 = v25 * v235 + v24 * v223;
        v30 = v34 + v216;
        v31 = v32 * v232 + v35;
        v11[20] = v33 + v221 * v24 + v239 + v11[20];
      }
      v11[21] = v30 + v11[21];
      v11[22] = v31 + v11[22];
    }
    v36 = v17 * v11[21];
    v37 = v17 * v11[22];
    v11[17] = v11[20] * v17 + v11[17];
    v11[18] = v36 + v11[18];
    v11[19] = v37 + v11[19];
    v38 = v11[19];
    v39 = v11[18] * v17;
    v11[14] = v11[17] * v17 + v11[14];
    v11[15] = v39 + v11[15];
    v11[16] = v17 * v38 + v11[16];
    v11[20] = flt_10459240;
    *(_QWORD *)(v11 + 21) = qword_10459244;
    v40 = *(_DWORD *)v8;
    if ( (*(_DWORD *)v8 & 0xC) == 0 )
      goto LABEL_27;
    v41 = v11[14] - *(float *)&v227;
    v224 = v41;
    v42 = v11[15] - v228;
    v225 = v42;
    v43 = v11[16] - v229;
    v226 = v43;
    v44 = v42 * v222 + v41 * v221 + v43 * v223;
    v45 = v41;
    v46 = v42 * v234 + v41 * v233 + v43 * v235;
    v47 = v44;
    v48 = v43;
    v49 = v47;
    v50 = v45 * v230 + v42 * v231 + v48 * v232;
    if ( (v40 & 4) != 0 )
    {
      v51 = atan2(v49, v50);
      if ( v51 >= *(float *)(v8 + 40) )
      {
        if ( v51 <= *(float *)(v8 + 44) )
          goto LABEL_21;
        v52 = *(float *)(v8 + 44);
      }
      else
      {
        v52 = *(float *)(v8 + 40);
      }
      *(float *)&a6 = v52;
      v208 = &a3;
      v207 = &a4;
      a3 = cos(*(float *)&a6);
      a4 = sin(*(float *)&a6);
      v195 = a3;
      v199 = 0.0;
      v203 = -a4;
      v196 = 0.0;
      v200 = 1.0;
      v204 = 0.0;
      v201 = 0.0;
      v198 = 0.0;
      v202 = 0.0;
      v206 = 0.0;
      v197 = a4;
      v205 = a3;
      sub_101EDC00(a5, &v195, &v186);
      v53 = v191;
      v54 = v188;
      v55 = v194;
      v56 = v226 * v194 + v224 * v188 + v225 * v191;
      v239 = v56 * v188;
      v240 = v56 * v191;
      v241 = v56 * v194;
      v57 = v190;
      v58 = v187;
      v59 = v193;
      v60 = v226 * v193 + v224 * v187 + v225 * v190;
      v236 = v60 * v187;
      v238 = v60 * v193;
      v216 = v60 * v190 + v228;
      v236 = v236 + *(float *)&v227 + v239;
      v61 = v216 + v240;
      v238 = v238 + v229 + v241;
      v11[14] = v236;
      v62 = v57;
      v11[15] = v61;
      v11[16] = v238;
      v216 = v11[17] * v58 + v11[18] * v57 + v11[19] * v59;
      v63 = v11[17] * v54 + v11[18] * v53 + v11[19] * v55;
      v64 = v54 * v63;
      v239 = v64;
      v65 = v64;
      v66 = v53 * v63;
      v240 = v66;
      v67 = v66;
      v68 = v55 * v63;
      v241 = v68;
      v69 = v58 * v216;
      v236 = v69;
      v70 = v62 * v216;
      v71 = v69;
      v72 = v59 * v216;
      a3 = v72;
      v237 = v70 + v240;
      v238 = v72 + v241;
      v73 = *(float *)(v8 + 48);
      v239 = (v236 + v239) * v73;
      v74 = v73;
      v75 = v73 * v237;
      v76 = v74 * v238;
      v11[20] = v11[20] - v239;
      v11[21] = v11[21] - v75;
      v11[22] = v11[22] - v76;
      v77 = -(*(float *)(v8 + 52) * v215);
      v236 = v186 * v77;
      v237 = v189 * v77;
      v78 = v67 + v70 + v237;
      v79 = v68 + a3 + v77 * v192;
      v11[17] = v65 + v71 + v236;
      v11[18] = v78;
      v11[19] = v79;
      v80 = v11[15] - v228;
      v81 = v11[14] - *(float *)&v227;
      v82 = v11[16] - v229;
      v224 = v81;
      v83 = v81;
      v225 = v80;
      v84 = v82;
      v226 = v82;
      v46 = v233 * v83 + v80 * v234 + v82 * v235;
      v50 = v83 * v230 + v80 * v231 + v84 * v232;
    }
LABEL_21:
    if ( (*(_BYTE *)v8 & 8) != 0 )
    {
      v85 = atan2(v46, v50);
      if ( v85 < *(float *)(v8 + 56) )
      {
        v86 = *(float *)(v8 + 56);
LABEL_26:
        *(float *)&a6 = v86;
        v207 = &a3;
        v208 = &a4;
        a3 = cos(*(float *)&a6);
        a4 = sin(*(float *)&a6);
        v195 = 1.0;
        v199 = 0.0;
        v203 = 0.0;
        v196 = 0.0;
        v200 = a3;
        v204 = -a4;
        v197 = 0.0;
        v198 = 0.0;
        v202 = 0.0;
        v206 = 0.0;
        v201 = a4;
        v205 = a3;
        sub_101EDC00(a5, &v195, &v186);
        v87 = v224;
        v88 = v188;
        v89 = v225;
        v90 = v191;
        v91 = v226;
        v92 = v194;
        v93 = v226 * v194 + v225 * v191 + v224 * v188;
        v224 = v188 * v93;
        v225 = v191 * v93;
        v226 = v93 * v194;
        v94 = v87 * v186;
        v95 = v189;
        v96 = v89 * v189 + v94;
        v97 = v192;
        v98 = v91 * v192 + v96;
        v239 = v186 * v98;
        v240 = v189 * v98;
        v99 = v98 * v192;
        v100 = v186;
        v241 = v99;
        v216 = v240 + v228;
        v236 = *(float *)&v227 + v239 + v224;
        v101 = v216 + v225;
        v238 = v241 + v229 + v226;
        v11[14] = v236;
        v11[15] = v101;
        v11[16] = v238;
        v216 = v187 * v11[17] + v190 * v11[18] + v193 * v11[19];
        v102 = v88 * v11[17] + v90 * v11[18] + v92 * v11[19];
        v103 = v88 * v102;
        v239 = v103;
        v104 = v103;
        v105 = v90 * v102;
        v106 = v104;
        v240 = v105;
        v107 = v105;
        v108 = v100;
        v109 = v92 * v102;
        v241 = v109;
        v110 = v108 * v215;
        v236 = v110;
        v111 = v95 * v215;
        v112 = v110;
        v113 = v97 * v215;
        v238 = v113;
        v225 = v111 + v240;
        v226 = v238 + v241;
        v114 = *(float *)(v8 + 64);
        v239 = (v236 + v239) * v114;
        v240 = v225 * v114;
        v115 = v113;
        v241 = v114 * v226;
        v11[20] = v11[20] - v239;
        v11[21] = v11[21] - v240;
        v11[22] = v11[22] - v241;
        v116 = *(float *)(v8 + 68) * v216;
        v236 = v187 * v116;
        v237 = v190 * v116;
        v117 = v112 - v236;
        v118 = v115 - v116 * v193;
        v119 = v107 + v111 - v237;
        v11[17] = v106 + v117;
        v11[18] = v119;
        v11[19] = v109 + v118;
        goto LABEL_27;
      }
      if ( v85 > *(float *)(v8 + 60) )
      {
        v86 = *(float *)(v8 + 60);
        goto LABEL_26;
      }
    }
LABEL_27:
    v218 = v11[14] - *(float *)&v227;
    v219 = v11[15] - v228;
    v220 = v11[16] - v229;
    off_103EDFEC();
    if ( (*(_BYTE *)v8 & 0x10) != 0 )
    {
      v120 = v230 * v218 + v219 * v231 + v220 * v232;
      a3 = v120;
      v121 = acos(v120);
      if ( a3 < 0.0 )
        v121 = 6.283185307179586 - v121;
      if ( v121 > *(float *)(v8 + 36) )
      {
        a3 = sin(*(float *)(v8 + 36)) * *(float *)(v8 + 4);
        v224 = *(float *)&v209 - v11[14];
        v225 = v210 - v11[15];
        v226 = v211 - v11[16];
        off_103EDFEC();
        v122 = v211 - a3 * v226;
        v123 = v210 - v225 * a3;
        v11[14] = *(float *)&v209 - v224 * a3;
        v11[15] = v123;
        v11[16] = v122;
        v124 = v11[15] - v228;
        v125 = v11[16] - v229;
        v218 = v11[14] - *(float *)&v227;
        v219 = v124;
        v220 = v125;
        off_103EDFEC();
      }
    }
    v126 = v220;
    v127 = v219;
    v128 = v218;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
    {
      v129 = *(float *)(v8 + 4);
      v130 = v127 * v129 + v228;
      v131 = v129 * v126 + v229;
      v11[14] = v128 * v129 + *(float *)&v227;
      v11[15] = v130;
      v11[16] = v131;
      v132 = v127 * v11[18] + v128 * v11[17] + v126 * v11[19];
      v11[17] = v11[17] - v128 * v132;
      v11[18] = v11[18] - v127 * v132;
      v11[19] = v11[19] - v132 * v126;
    }
    v212 = v234 * v126 - v235 * v127;
    v213 = v235 * v128 - v126 * v233;
    v214 = v127 * v233 - v234 * v128;
    off_103EDFEC();
    v133 = v219;
    v134 = v214;
    v135 = v220;
    v136 = v213;
    v236 = v219 * v214 - v220 * v213;
    v137 = v218;
    v237 = v220 * v212 - v218 * v214;
    v138 = v218 * v213 - v219 * v212;
    *v14 = v212;
    v14[4] = v136;
    v14[8] = v134;
    v14[1] = v236;
    v14[5] = v237;
    v14[9] = v138;
    v14[2] = v137;
    v14[6] = v133;
    v14[10] = v135;
    v14[3] = *(float *)&v227;
    v14[7] = v228;
    v14[11] = v229;
    v17 = *(float *)&v242;
  }
  result = *(_DWORD *)v8;
  if ( (*(_DWORD *)v8 & 0x40) != 0 )
  {
    v139 = v11 + 2;
    v11[13] = v11[13] - *(float *)(v8 + 72);
    v140 = *(float *)(v8 + 76);
    v141 = (v229 - v11[4]) * v140 - *(float *)(v8 + 80) * v11[10];
    v142 = (v228 - v11[3]) * v140 - *(float *)(v8 + 80) * v11[9];
    v11[11] = (*(float *)&v227 - v11[2]) * v140 - v11[8] * *(float *)(v8 + 80) + v11[11];
    v11[12] = v142 + v11[12];
    v11[13] = v141 + v11[13];
    v143 = v17 * v11[12];
    v144 = v17 * v11[13];
    v11[8] = v11[11] * v17 + v11[8];
    v11[9] = v143 + v11[9];
    v11[10] = v144 + v11[10];
    v145 = v17 * v11[9];
    v146 = v17 * v11[10];
    v11[2] = v11[8] * v17 + v11[2];
    v11[3] = v145 + v11[3];
    v11[4] = v146 + v11[4];
    v11[11] = flt_10459240;
    *((_QWORD *)v11 + 6) = qword_10459244;
    v147 = v11[2] - *(float *)&v227;
    v148 = v11[3] - v228;
    v149 = v11[4] - v229;
    v150 = v148 * v222 + v221 * v147 + v149 * v223;
    v210 = v149 * v235 + v148 * v234 + v233 * v147;
    v151 = v147 * v230 + v148 * v231 + v149 * v232;
    v152 = v222 * v11[9] + v221 * v11[8] + v223 * v11[10];
    v153 = v234 * v11[9] + v233 * v11[8] + v235 * v11[10];
    v154 = v231 * v11[9] + v230 * v11[8] + v232 * v11[10];
    if ( *(float *)(v8 + 84) <= v150 )
    {
      if ( *(float *)(v8 + 88) >= v150 )
      {
        v157 = v150;
        v155 = v154;
LABEL_42:
        if ( v210 >= (double)*(float *)(v8 + 96) )
        {
          if ( v210 <= (double)*(float *)(v8 + 100) )
          {
            v162 = v152;
            goto LABEL_48;
          }
          v159 = *(float *)(v8 + 100);
        }
        else
        {
          v159 = *(float *)(v8 + 96);
        }
        v210 = v159;
        v215 = v230 * v155;
        v239 = v221 * v152;
        v240 = v152 * v222;
        v241 = v152 * v223;
        v236 = v239 + v215;
        v238 = v155 * v232 + v241;
        v160 = *(float *)(v8 + 104);
        v216 = (v155 * v231 + v240) * v160;
        v161 = v160 * v238;
        v11[11] = v11[11] - v236 * v160;
        v11[12] = v11[12] - v216;
        v162 = v152;
        v11[13] = v11[13] - v161;
LABEL_48:
        if ( *(float *)(v8 + 108) <= v151 )
        {
          if ( *(float *)(v8 + 112) < v151 )
          {
            v171 = v162;
            v172 = *(float *)(v8 + 112);
            v173 = v233 * v153;
            v236 = v221 * v171;
            v238 = v171 * v223;
            v174 = v153 * v235;
            v175 = v153 * v234 + v171 * v222;
            v176 = *(float *)(v8 + 116);
            v177 = (v174 + v238) * v176;
            v11[11] = v11[11] - (v173 + v236) * v176;
            v11[12] = v11[12] - v175 * v176;
            v178 = v11[13] - v177;
            v151 = v172;
            v11[13] = v178;
          }
        }
        else
        {
          v163 = v162;
          v164 = *(float *)(v8 + 108);
          v165 = v233 * v153;
          v236 = v221 * v163;
          v238 = v163 * v223;
          v166 = v153 * v235;
          v167 = v153 * v234 + v163 * v222;
          v168 = *(float *)(v8 + 116);
          v169 = (v166 + v238) * v168;
          v11[11] = v11[11] - (v165 + v236) * v168;
          v11[12] = v11[12] - v167 * v168;
          v170 = v11[13] - v169;
          v151 = v164;
          v11[13] = v170;
        }
        v179 = v230 * v151;
        v180 = v151;
        v237 = v210 * v234;
        v238 = v210 * v235;
        v215 = v221 * v157;
        v181 = v151 * v231 + v157 * v222 + v228 + v237;
        v182 = v157 * v223 + v229 + v238 + v180 * v232;
        *v139 = v179 + v233 * v210 + *(float *)&v227 + v215;
        v11[3] = v181;
        v11[4] = v182;
        v183 = 1.0 / v17;
        v184 = v11[4] - v11[7];
        v185 = (v11[3] - v11[6]) * v183;
        v11[8] = (*v139 - v11[5]) * v183;
        v11[9] = v185;
        v11[10] = v183 * v184;
        v11[5] = *v139;
        v11[6] = v11[3];
        v11[7] = v11[4];
        if ( (*(_BYTE *)v8 & 3) == 0 )
          qmemcpy(v14, a5, 0x30u);
        return sub_101EDA20(v139, 3, v14);
      }
      v155 = v154;
      v156 = *(float *)(v8 + 88);
    }
    else
    {
      v155 = v154;
      v156 = *(float *)(v8 + 84);
    }
    v212 = v230 * v155;
    v157 = v156;
    v213 = v231 * v155;
    v214 = v155 * v232;
    v239 = v233 * v153;
    v240 = v153 * v234;
    v241 = v153 * v235;
    v224 = v239 + v212;
    v225 = v240 + v213;
    v226 = v241 + v214;
    v158 = *(float *)(v8 + 92);
    v239 = v224 * v158;
    v240 = v225 * v158;
    v241 = v158 * v226;
    v11[11] = v11[11] - v239;
    v11[12] = v11[12] - v240;
    v11[13] = v11[13] - v241;
    goto LABEL_42;
  }
  if ( (result & 3) == 0 )
    qmemcpy(v14, a5, 0x30u);
  return result;
}
