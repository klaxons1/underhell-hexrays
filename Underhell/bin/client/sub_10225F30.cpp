int __userpurge sub_10225F30@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  float *v16; // esi
  int v17; // ebp
  int v18; // ecx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st2
  double v25; // st1
  double v26; // st7
  __int16 v27; // si
  int v28; // esi
  int v29; // eax
  unsigned __int16 v30; // dx
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  unsigned __int16 v36; // cx
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  double v42; // st7
  double v43; // st6
  unsigned __int16 v44; // cx
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  unsigned __int16 v50; // ax
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  bool v56; // cc
  double v57; // st7
  double v58; // st6
  double v59; // st5
  double v60; // st6
  float *v61; // eax
  int v62; // edx
  unsigned __int16 v63; // cx
  float *v64; // eax
  float *v65; // eax
  float *v66; // eax
  float *v67; // eax
  float *v68; // eax
  unsigned __int16 v69; // ax
  float *v70; // eax
  float *v71; // eax
  float *v72; // eax
  float *v73; // eax
  float *v74; // eax
  int v75; // eax
  float v76; // [esp+38h] [ebp-2A4h]
  float v77; // [esp+4Ch] [ebp-290h]
  float v78; // [esp+4Ch] [ebp-290h]
  float v79; // [esp+50h] [ebp-28Ch]
  float v80; // [esp+50h] [ebp-28Ch]
  float v81; // [esp+54h] [ebp-288h]
  float v82; // [esp+54h] [ebp-288h]
  float v83; // [esp+58h] [ebp-284h]
  float v84; // [esp+58h] [ebp-284h]
  float *v85; // [esp+5Ch] [ebp-280h]
  float v86; // [esp+5Ch] [ebp-280h]
  float v87; // [esp+5Ch] [ebp-280h]
  int v88; // [esp+5Ch] [ebp-280h]
  int v89; // [esp+5Ch] [ebp-280h]
  char v90; // [esp+63h] [ebp-279h]
  float *v91; // [esp+64h] [ebp-278h]
  int v92; // [esp+64h] [ebp-278h]
  float v93; // [esp+64h] [ebp-278h]
  float v94; // [esp+64h] [ebp-278h]
  float v95; // [esp+68h] [ebp-274h]
  float v96; // [esp+6Ch] [ebp-270h]
  float v97; // [esp+70h] [ebp-26Ch]
  float v98; // [esp+74h] [ebp-268h]
  float v99; // [esp+78h] [ebp-264h]
  float v100; // [esp+7Ch] [ebp-260h]
  float v101; // [esp+80h] [ebp-25Ch]
  float v102; // [esp+84h] [ebp-258h]
  float v103; // [esp+88h] [ebp-254h]
  float v104; // [esp+88h] [ebp-254h]
  float v105; // [esp+88h] [ebp-254h]
  int v106; // [esp+8Ch] [ebp-250h]
  float v107; // [esp+8Ch] [ebp-250h]
  float v108; // [esp+8Ch] [ebp-250h]
  float v109; // [esp+8Ch] [ebp-250h]
  float v110; // [esp+90h] [ebp-24Ch]
  int v111; // [esp+94h] [ebp-248h]
  float v112; // [esp+94h] [ebp-248h]
  float v113; // [esp+94h] [ebp-248h]
  float v114; // [esp+98h] [ebp-244h]
  float v115; // [esp+9Ch] [ebp-240h]
  float v116; // [esp+9Ch] [ebp-240h]
  float v117; // [esp+9Ch] [ebp-240h]
  float v118; // [esp+9Ch] [ebp-240h]
  float v119; // [esp+A0h] [ebp-23Ch]
  float v120; // [esp+A0h] [ebp-23Ch]
  float v121; // [esp+A0h] [ebp-23Ch]
  float v122; // [esp+A0h] [ebp-23Ch]
  float v123; // [esp+A4h] [ebp-238h]
  float v124; // [esp+A4h] [ebp-238h]
  float v125; // [esp+A4h] [ebp-238h]
  float v126; // [esp+A4h] [ebp-238h]
  float v127; // [esp+A8h] [ebp-234h]
  float v128; // [esp+A8h] [ebp-234h]
  float v129; // [esp+A8h] [ebp-234h]
  float v130; // [esp+A8h] [ebp-234h]
  float v131; // [esp+ACh] [ebp-230h]
  float v132; // [esp+B0h] [ebp-22Ch]
  float v133; // [esp+B4h] [ebp-228h]
  float v134; // [esp+B8h] [ebp-224h]
  float v135; // [esp+BCh] [ebp-220h]
  float v136; // [esp+BCh] [ebp-220h]
  float v137; // [esp+C0h] [ebp-21Ch]
  float v138; // [esp+C0h] [ebp-21Ch]
  float v139; // [esp+C0h] [ebp-21Ch]
  int v140; // [esp+C4h] [ebp-218h]
  int v141; // [esp+C8h] [ebp-214h]
  int v142; // [esp+CCh] [ebp-210h]
  float v143; // [esp+CCh] [ebp-210h]
  float v144; // [esp+CCh] [ebp-210h]
  int v145; // [esp+D0h] [ebp-20Ch]
  float *v146; // [esp+D0h] [ebp-20Ch]
  int v147; // [esp+D4h] [ebp-208h]
  float v148; // [esp+D8h] [ebp-204h]
  float v149; // [esp+DCh] [ebp-200h]
  int v150; // [esp+E0h] [ebp-1FCh]
  float v151; // [esp+E0h] [ebp-1FCh]
  float v152; // [esp+E4h] [ebp-1F8h]
  int v153; // [esp+E8h] [ebp-1F4h]
  int v154; // [esp+ECh] [ebp-1F0h]
  int v155; // [esp+F0h] [ebp-1ECh]
  float v156; // [esp+F4h] [ebp-1E8h]
  _BYTE v157[172]; // [esp+FCh] [ebp-1E0h] BYREF
  int v158; // [esp+1A8h] [ebp-134h]
  int v159; // [esp+1B0h] [ebp-12Ch]
  int v160; // [esp+1B4h] [ebp-128h]
  char v161; // [esp+1B8h] [ebp-124h]
  _DWORD v162[2]; // [esp+1BCh] [ebp-120h] BYREF
  int v163; // [esp+1C4h] [ebp-118h]
  int v164; // [esp+1C8h] [ebp-114h]
  int v165; // [esp+1CCh] [ebp-110h]
  int v166; // [esp+1D0h] [ebp-10Ch]
  int v167; // [esp+1D4h] [ebp-108h]
  int v168; // [esp+1D8h] [ebp-104h]
  int v169; // [esp+1DCh] [ebp-100h]
  _DWORD v170[39]; // [esp+1F0h] [ebp-ECh] BYREF
  int v171; // [esp+28Ch] [ebp-50h]
  int v172; // [esp+294h] [ebp-48h]
  int v173; // [esp+29Ch] [ebp-40h]
  int v174; // [esp+2A0h] [ebp-3Ch]
  float *v175; // [esp+2A8h] [ebp-34h]
  float *v176; // [esp+2B0h] [ebp-2Ch]
  float *v177; // [esp+2B4h] [ebp-28h]
  float *v178; // [esp+2B8h] [ebp-24h]
  float *v179; // [esp+2BCh] [ebp-20h]
  int *v180; // [esp+2D0h] [ebp-Ch]

  v150 = *(_DWORD *)(a4 + 40);
  result = v150 - 1;
  if ( v150 != 1 )
  {
    v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970, a3, a2);
    v11 = v10;
    if ( v10 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 36))(v11, a8, 0);
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 516))(v11, a8);
    v145 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 520))(v11);
    v13 = *(_DWORD *)(a1 + 44);
    v106 = 2 * v13;
    v111 = 6 * v13;
    v14 = (v12 - 2) / (2 * v13);
    v15 = v145 / (6 * v13);
    v140 = v14;
    if ( v14 >= v145 / v111 )
      v140 = v15;
    v16 = *(float **)(a6 + 6068);
    v85 = *(float **)(a6 + 6080);
    v146 = *(float **)(a6 + 6092);
    v91 = *(float **)(a6 + 6096);
    v17 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 224))(v11, 1, 0, 0, 0);
    v142 = v17;
    sub_10016C20((int)v157);
    v18 = v140;
    if ( v140 >= v147 )
    {
      v140 = v147;
      v18 = v147;
    }
    v90 = 1;
    v110 = *(float *)(a6 + 36) * *(float *)(a1 + 56);
    v19 = *v16;
    v99 = *v16;
    v20 = v16[4];
    v100 = v16[4];
    v21 = v16[8];
    v101 = v16[8];
    v22 = *v85;
    v102 = *v85;
    v23 = v16[1];
    v95 = v16[1];
    v24 = v16[5];
    v96 = v16[5];
    v25 = v16[9];
    v97 = v16[9];
    v98 = v85[1];
    v148 = *v146;
    v149 = v146[4];
    v151 = v146[8];
    v152 = *v91;
    v77 = v23 - v19;
    v79 = v24 - v20;
    v81 = v25 - v21;
    v83 = v98 - v22;
    v131 = v19 - v77;
    v132 = v20 - v79;
    v133 = v21 - v81;
    v134 = v22 - v83;
    if ( v153 >= 3 )
    {
      v78 = v16[2];
      v80 = v16[6];
      v82 = v16[10];
      v26 = v85[2];
    }
    else
    {
      v78 = v23 + v77;
      v80 = v79 + v24;
      v82 = v25 + v81;
      v26 = v83 + v98;
    }
    v141 = 3;
    v84 = v26;
    v92 = v18;
    v155 = v106 * v18 + 2;
    v27 = 0;
    v154 = v111 * v18;
    sub_10061780((int)v157, v17, 2, v155, v111 * v18);
    v156 = *(float *)(a1 + 48) * *(float *)(a1 + 60);
    v114 = 0.0;
    do
    {
      if ( !v92 )
      {
        if ( v161 )
        {
          v28 = v160;
          v29 = sub_10016D90(v160, v174);
          sub_10016B00(v162, v28, v29);
        }
        (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v159 + 80))(v159, v174, v167, v157);
        v165 = 0;
        v166 = 0;
        v173 = 0;
        v172 = 0;
        v170[19] = -1;
        v159 = 0;
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 48))(v17, -1, 0);
        sub_10061780((int)v157, v17, 2, v155, v154);
        v135 = v152 * 255.0 + 8388608.0;
        v86 = v135;
        HIBYTE(v30) = LOBYTE(v86);
        v137 = v151 * 255.0 + 8388608.0;
        v119 = v137;
        v112 = v149 * 255.0 + 8388608.0;
        v127 = v112;
        v107 = 255.0 * v148 + 8388608.0;
        v93 = v107;
        LOBYTE(v30) = LOBYTE(v93);
        *v180 = LOBYTE(v119) | ((LOBYTE(v127) | (v30 << 8)) << 8);
        v31 = v175;
        *v175 = v114;
        *++v31 = v110;
        v31[1] = 0.0;
        v32 = v176;
        *v176 = v131;
        *++v32 = v132;
        *++v32 = v133;
        v32[1] = v134;
        v33 = v177 + 1;
        *v177 = v99;
        *v33++ = v100;
        *v33 = v101;
        v33[1] = v102;
        v34 = v178 + 1;
        *v178 = v95;
        *v34++ = v96;
        *v34 = v97;
        v34[1] = v98;
        v35 = v179 + 1;
        *v179 = v78;
        *v35++ = v80;
        *v35 = v82;
        v35[1] = v84;
        sub_10016A80(v170);
        v120 = v135;
        HIBYTE(v36) = LOBYTE(v120);
        v94 = v137;
        v87 = v112;
        v128 = v107;
        LOBYTE(v36) = LOBYTE(v128);
        *v180 = LOBYTE(v94) | ((LOBYTE(v87) | (v36 << 8)) << 8);
        v37 = v175;
        *v175 = v114;
        *++v37 = v110;
        v37[1] = 1.0;
        v38 = v176;
        *v176 = v131;
        *++v38 = v132;
        *++v38 = v133;
        v38[1] = v134;
        v39 = v177;
        *v177 = v99;
        *++v39 = v100;
        *++v39 = v101;
        v39[1] = v102;
        v40 = v178 + 1;
        *v178 = v95;
        *v40++ = v96;
        *v40 = v97;
        v40[1] = v98;
        v41 = v179 + 1;
        *v179 = v78;
        *v41++ = v80;
        *v41 = v82;
        v41[1] = v84;
        sub_10016A80(v170);
        v92 = v140;
        v27 = 0;
      }
      --v92;
      v114 = 0.0;
      v76 = (v95 - v99) * (v95 - v99) + (v97 - v101) * (v97 - v101) + (v96 - v100) * (v96 - v100);
      v88 = 0;
      v103 = off_103EDFE0(v76) * v156;
      if ( *(int *)(a1 + 44) <= 0 )
      {
        v57 = v110;
      }
      else
      {
        v42 = v114;
        v43 = v110;
        do
        {
          v121 = v152 * 255.0 + 8388608.0;
          HIBYTE(v44) = LOBYTE(v121);
          v115 = v151 * 255.0 + 8388608.0;
          v123 = v149 * 255.0 + 8388608.0;
          v129 = 255.0 * v148 + 8388608.0;
          LOBYTE(v44) = LOBYTE(v129);
          *v180 = LOBYTE(v115) | ((LOBYTE(v123) | (v44 << 8)) << 8);
          v45 = v175;
          *v175 = v42;
          *++v45 = v43;
          v45[1] = 0.0;
          v46 = v176;
          *v176 = v131;
          *++v46 = v132;
          *++v46 = v133;
          v46[1] = v134;
          v47 = v177;
          *v177 = v99;
          *++v47 = v100;
          *++v47 = v101;
          v47[1] = v102;
          v48 = v178;
          *v178 = v95;
          *++v48 = v96;
          *++v48 = v97;
          v48[1] = v98;
          v49 = v179;
          *v179 = v78;
          *++v49 = v80;
          *++v49 = v82;
          v49[1] = v84;
          sub_10016A80(v170);
          v116 = v121;
          v138 = v151 * 255.0 + 8388608.0;
          v130 = v138;
          v122 = v123;
          v108 = 255.0 * v148 + 8388608.0;
          v124 = v108;
          HIBYTE(v50) = LOBYTE(v116);
          LOBYTE(v50) = LOBYTE(v124);
          *v180 = LOBYTE(v130) | ((LOBYTE(v122) | (v50 << 8)) << 8);
          v51 = v175;
          *v175 = v114;
          *++v51 = v110;
          v51[1] = 1.0;
          v52 = v176;
          *v176 = v131;
          *++v52 = v132;
          *++v52 = v133;
          v52[1] = v134;
          v53 = v177;
          *v177 = v99;
          *++v53 = v100;
          *++v53 = v101;
          v53[1] = v102;
          v54 = v178;
          *v178 = v95;
          *++v54 = v96;
          *++v54 = v97;
          v54[1] = v98;
          v55 = v179;
          *v179 = v78;
          *++v55 = v80;
          *++v55 = v82;
          v55[1] = v84;
          sub_10016A80(v170);
          v42 = *(float *)(a1 + 60) + v114;
          v114 = v42;
          v43 = v103 + v110;
          v110 = v43;
          if ( !v90 )
          {
            *(_WORD *)(v162[0] + 2 * v169) = v27 + v168;
            v169 += (unsigned __int8)v164;
            *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 1;
            v169 += (unsigned __int8)v164;
            *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 2;
            v169 += (unsigned __int8)v164;
            *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 1;
            v169 += (unsigned __int8)v164;
            *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 3;
            v17 = v142;
            v169 += (unsigned __int8)v164;
            *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 2;
            v169 += (unsigned __int8)v164;
            v167 = v169;
            v27 += 2;
          }
          v56 = v88 + 1 < *(_DWORD *)(a1 + 44);
          v90 = 0;
          ++v88;
        }
        while ( v56 );
        v57 = v43;
      }
      if ( v147 <= 1 )
      {
        v60 = v102;
      }
      else
      {
        v131 = v99;
        v132 = v100;
        v133 = v101;
        v134 = v102;
        v58 = v95;
        v99 = v95;
        v100 = v96;
        v101 = v97;
        v59 = v98;
        v102 = v98;
        v95 = v78;
        v96 = v80;
        v97 = v82;
        v98 = v84;
        v148 = *v146;
        v149 = v146[4];
        v151 = v146[8];
        v152 = *(float *)(*(_DWORD *)(a6 + 6096)
                        + 4 * ((((_BYTE)v141 - 2) & 3) + *(_DWORD *)(a6 + 6352) * ((v141 - 2) / 4)));
        if ( v141 >= v153 )
        {
          v78 = v78 * 2.0 - v58;
          v80 = v80 * 2.0 - v100;
          v82 = v82 * 2.0 - v101;
          v60 = v59;
          v84 = v84 * 2.0 - v59;
        }
        else
        {
          v60 = v59;
          v89 = v141 & 3;
          v61 = (float *)(*(_DWORD *)(a6 + 6068) + 4 * (v89 + v141 / 4 * *(_DWORD *)(a6 + 6324)));
          v78 = *v61;
          v80 = v61[4];
          v82 = v61[8];
          v62 = v89 + v141 / 4 * *(_DWORD *)(a6 + 6336);
          ++v141;
          v84 = *(float *)(*(_DWORD *)(a6 + 6080) + 4 * v62);
        }
      }
      --v147;
    }
    while ( v147 );
    v136 = v152 * 255.0 + 8388608.0;
    v143 = v136;
    HIBYTE(v63) = LOBYTE(v143);
    v139 = v151 * 255.0 + 8388608.0;
    v125 = v139;
    v113 = v149 * 255.0 + 8388608.0;
    v117 = v113;
    v109 = 255.0 * v148 + 8388608.0;
    v104 = v109;
    LOBYTE(v63) = LOBYTE(v104);
    *v180 = LOBYTE(v125) | ((LOBYTE(v117) | (v63 << 8)) << 8);
    v64 = v175;
    *v175 = 1.0;
    *++v64 = v57;
    v64[1] = 0.0;
    v65 = v176;
    *v176 = v131;
    *++v65 = v132;
    *++v65 = v133;
    v65[1] = v134;
    v66 = v177;
    *v177 = v99;
    *++v66 = v100;
    *++v66 = v101;
    v66[1] = v60;
    v67 = v178 + 1;
    *v178 = v95;
    *v67++ = v96;
    *v67 = v97;
    v67[1] = v98;
    v68 = v179 + 1;
    *v179 = v78;
    *v68++ = v80;
    *v68 = v82;
    v68[1] = v84;
    sub_10016A80(v170);
    v144 = v136;
    HIBYTE(v69) = LOBYTE(v144);
    v126 = v139;
    v118 = v113;
    v105 = v109;
    LOBYTE(v69) = LOBYTE(v105);
    *v180 = LOBYTE(v126) | ((LOBYTE(v118) | (v69 << 8)) << 8);
    v70 = v175;
    *v175 = 1.0;
    *++v70 = v110;
    v70[1] = 1.0;
    v71 = v176 + 1;
    *v176 = v131;
    *v71++ = v132;
    *v71 = v133;
    v71[1] = v134;
    v72 = v177 + 1;
    *v177 = v99;
    *v72++ = v100;
    *v72 = v101;
    v72[1] = v102;
    v73 = v178 + 1;
    *v178 = v95;
    *v73++ = v96;
    *v73 = v97;
    v73[1] = v98;
    v74 = v179 + 1;
    *v179 = v78;
    *v74++ = v80;
    *v74 = v82;
    v74[1] = v84;
    sub_10016A80(v170);
    *(_WORD *)(v162[0] + 2 * v169) = v27 + v168;
    v169 += (unsigned __int8)v164;
    *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 1;
    v169 += (unsigned __int8)v164;
    *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 2;
    v169 += (unsigned __int8)v164;
    *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 1;
    v169 += (unsigned __int8)v164;
    *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 3;
    v169 += (unsigned __int8)v164;
    *(_WORD *)(v162[0] + 2 * v169) = v168 + v27 + 2;
    v169 += (unsigned __int8)v164;
    v167 = v169;
    if ( v161 )
    {
      switch ( v160 )
      {
        case 4:
          v75 = 2 * v174 - 2;
          break;
        case 5:
          v75 = 2 * v174;
          break;
        case 6:
          v75 = 3 * v174 - 6;
          break;
        case 7:
          v75 = 6 * v174 / 4;
          break;
        case 8:
          v75 = 0;
          break;
        default:
          v75 = v174;
          break;
      }
      sub_10016B00(v162, v160, v75);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v159 + 80))(v159, v174);
    v163 = 0;
    v164 = 0;
    v172 = 0;
    v171 = 0;
    v170[17] = -1;
    v158 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 48))(v17, -1, 0);
    if ( v171 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v171 + 8))(v171) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v171 + 16))(v171);
    if ( v163 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v163 + 8))(v163) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v163 + 16))(v163);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v155 + 12))(v155);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v155 + 4))(v155);
  }
  return result;
}
