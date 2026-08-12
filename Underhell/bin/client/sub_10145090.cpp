int __usercall sub_10145090@<eax>(float *a1@<eax>, int *a2@<ecx>, int a3@<edi>, int a4@<esi>)
{
  float v4; // edx
  float *v6; // eax
  float v7; // edx
  float v8; // ecx
  float v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  double v12; // st6
  double v13; // st5
  double v14; // rt1
  double v15; // st5
  double v16; // st3
  double v17; // st2
  double v18; // rt0
  double v19; // st2
  double v20; // st1
  double v21; // st3
  double v22; // st4
  double v23; // st1
  double v24; // st2
  double v25; // rt0
  double v26; // st1
  double v27; // st7
  double v28; // st3
  double v29; // st2
  double v30; // rt1
  double v31; // st2
  float *v32; // edx
  int v33; // ecx
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st3
  double v38; // st2
  const char *v39; // edi
  int v40; // eax
  int v41; // ecx
  int v42; // esi
  int v43; // edx
  bool v44; // zf
  int v45; // esi
  float *v46; // edx
  double v47; // st6
  double v48; // st5
  double v49; // st4
  double v50; // st3
  double v51; // st5
  float *v52; // edx
  double v53; // rtt
  int v54; // eax
  double v55; // st3
  double v56; // st2
  double v57; // st2
  double v58; // st1
  double v59; // st3
  double v60; // st4
  double v61; // st6
  float *v62; // edx
  double v63; // st6
  double v64; // st5
  double v65; // st4
  double v66; // st3
  float *v67; // edx
  double v68; // st2
  double v69; // st6
  double v70; // rt2
  float *v71; // edx
  float *v72; // ecx
  int v73; // eax
  int v74; // esi
  int v75; // esi
  void (__thiscall *v76)(int, int); // edx
  float v77; // eax
  float *v78; // ebx
  int v79; // edx
  int v80; // esi
  int v81; // edi
  int v82; // ecx
  int v83; // edi
  int v84; // ebx
  float *v85; // esi
  int v86; // edx
  int *v87; // eax
  int v88; // esi
  int v89; // edi
  int v90; // eax
  int v91; // eax
  float *v92; // eax
  int v93; // edx
  int v94; // edi
  int v95; // esi
  float *v96; // eax
  float *v97; // eax
  float *v98; // ecx
  float *v99; // eax
  float *v100; // ecx
  int v101; // eax
  float v102; // esi
  _DWORD v105[264]; // [esp+4h] [ebp-734h] BYREF
  _DWORD v106[44]; // [esp+424h] [ebp-314h] BYREF
  char v107; // [esp+4D4h] [ebp-264h]
  int v108; // [esp+4D8h] [ebp-260h]
  int v109; // [esp+4DCh] [ebp-25Ch]
  char v110; // [esp+4E0h] [ebp-258h]
  _DWORD v111[3]; // [esp+4E4h] [ebp-254h] BYREF
  char v112; // [esp+4F0h] [ebp-248h]
  int v113; // [esp+4F4h] [ebp-244h]
  int v114; // [esp+4F8h] [ebp-240h]
  int v115; // [esp+4FCh] [ebp-23Ch]
  int v116; // [esp+500h] [ebp-238h]
  int v117; // [esp+504h] [ebp-234h]
  int v118; // [esp+508h] [ebp-230h]
  int v119; // [esp+50Ch] [ebp-22Ch]
  int v120; // [esp+510h] [ebp-228h]
  char v121; // [esp+514h] [ebp-224h]
  _DWORD v122[41]; // [esp+518h] [ebp-220h] BYREF
  int v123; // [esp+5BCh] [ebp-17Ch]
  char v124; // [esp+5C0h] [ebp-178h]
  int v125; // [esp+5C4h] [ebp-174h]
  int v126; // [esp+5C8h] [ebp-170h]
  int v127; // [esp+5CCh] [ebp-16Ch]
  float *v128; // [esp+5D0h] [ebp-168h]
  int v129; // [esp+5D4h] [ebp-164h]
  int v130; // [esp+5D8h] [ebp-160h]
  int v131; // [esp+5DCh] [ebp-15Ch]
  int v132; // [esp+5E0h] [ebp-158h]
  int v133; // [esp+5E4h] [ebp-154h]
  int v134; // [esp+5E8h] [ebp-150h]
  int v135; // [esp+5ECh] [ebp-14Ch]
  int v136; // [esp+5F0h] [ebp-148h]
  int v137; // [esp+5F4h] [ebp-144h]
  int v138; // [esp+5F8h] [ebp-140h]
  int v139; // [esp+5FCh] [ebp-13Ch]
  int v140; // [esp+600h] [ebp-138h]
  int v141; // [esp+604h] [ebp-134h]
  _DWORD v142[3]; // [esp+60Ch] [ebp-12Ch] BYREF
  float v143; // [esp+618h] [ebp-120h] BYREF
  float v144; // [esp+61Ch] [ebp-11Ch]
  float v145; // [esp+620h] [ebp-118h]
  float v146; // [esp+624h] [ebp-114h] BYREF
  float v147; // [esp+628h] [ebp-110h]
  float v148; // [esp+62Ch] [ebp-10Ch]
  float v149[2]; // [esp+630h] [ebp-108h] BYREF
  float v150[22]; // [esp+638h] [ebp-100h] BYREF
  float v151; // [esp+690h] [ebp-A8h] BYREF
  float v152; // [esp+694h] [ebp-A4h]
  float v153; // [esp+698h] [ebp-A0h]
  float v154; // [esp+69Ch] [ebp-9Ch] BYREF
  float v155; // [esp+6A0h] [ebp-98h]
  float v156; // [esp+6A4h] [ebp-94h]
  float v157; // [esp+6A8h] [ebp-90h] BYREF
  float v158; // [esp+6ACh] [ebp-8Ch]
  float v159; // [esp+6B0h] [ebp-88h]
  float v160[4]; // [esp+6B4h] [ebp-84h]
  float *v161; // [esp+6C4h] [ebp-74h]
  float v162; // [esp+6C8h] [ebp-70h]
  float v163; // [esp+6CCh] [ebp-6Ch]
  float v164; // [esp+6D0h] [ebp-68h]
  float v165; // [esp+6D4h] [ebp-64h]
  float v166; // [esp+6D8h] [ebp-60h]
  float v167; // [esp+6DCh] [ebp-5Ch]
  float v168; // [esp+6E0h] [ebp-58h]
  float v169; // [esp+6E4h] [ebp-54h]
  float v170; // [esp+6E8h] [ebp-50h]
  float v171; // [esp+6ECh] [ebp-4Ch]
  float v172; // [esp+6F0h] [ebp-48h]
  float v173; // [esp+6F4h] [ebp-44h]
  float v174; // [esp+6F8h] [ebp-40h]
  int v175; // [esp+6FCh] [ebp-3Ch]
  float v176; // [esp+700h] [ebp-38h]
  int *v177; // [esp+704h] [ebp-34h]
  float v178; // [esp+708h] [ebp-30h]
  float v179; // [esp+70Ch] [ebp-2Ch]
  float v180; // [esp+710h] [ebp-28h]
  float v181; // [esp+714h] [ebp-24h]
  float v182; // [esp+718h] [ebp-20h]
  float v183; // [esp+71Ch] [ebp-1Ch]
  float v184; // [esp+720h] [ebp-18h]
  float v185; // [esp+724h] [ebp-14h]
  float v186; // [esp+728h] [ebp-10h]
  float v187; // [esp+72Ch] [ebp-Ch]
  float v188; // [esp+730h] [ebp-8h]
  float v189; // [esp+734h] [ebp-4h]

  v4 = a1[1];
  v173 = a1[3];
  v162 = *a1;
  v164 = a1[2];
  v163 = v4;
  (*(void (__thiscall **)(int *, float *, float *, int, int))(*a2 + 80))(a2, &v143, &v146, a3, a4);
  v6 = (float *)(*(int (__thiscall **)(int *))(*a2 + 4))(a2);
  v7 = v6[1];
  v8 = *v6;
  v9 = v6[2];
  v179 = v7;
  v10 = *a2;
  v178 = v8;
  v180 = v9;
  v11 = (_DWORD *)(*(int (__thiscall **)(int *))(v10 + 8))(a2);
  v142[0] = *v11;
  v142[1] = v11[1];
  v142[2] = v11[2];
  sub_101EE040(v142, &v154, &v157, &v151);
  v12 = v151 * v145;
  v187 = v12;
  v13 = v152 * v145;
  v188 = v13;
  v14 = v13;
  v15 = v145 * v153;
  v189 = v15;
  v172 = v157 * v144;
  v171 = v158 * v144;
  v167 = v144 * v159;
  v16 = v154 * v143;
  v169 = v16;
  v17 = v155 * v143;
  v170 = v17;
  v18 = v17;
  v19 = v143 * v156;
  v168 = v19;
  v20 = v16 + v178;
  v21 = v178;
  v181 = v20;
  v22 = v179;
  v182 = v18 + v179;
  v23 = v19 + v180;
  v24 = v180;
  v183 = v23;
  v178 = v181 + v172;
  v179 = v182 + v171;
  v180 = v183 + v167;
  v184 = v178 + v187;
  v185 = v179 + v188;
  v149[0] = v184;
  v149[1] = v185;
  v150[0] = v180 + v189;
  v25 = v24;
  v178 = v12;
  v179 = v14;
  v180 = v15;
  *(float *)&v175 = v154 * v146;
  *(float *)&v177 = v155 * v146;
  v26 = v146 * v156;
  v176 = v26;
  v187 = *(float *)&v175 + v21;
  v188 = *(float *)&v177 + v22;
  v189 = v26 + v24;
  v181 = v187 + v172;
  v182 = v188 + v171;
  v183 = v189 + v167;
  v187 = v181 + v178;
  v188 = v182 + v179;
  v150[1] = v187;
  v150[2] = v188;
  v150[3] = v183 + v180;
  v178 = v12;
  v166 = v157 * v147;
  v165 = v158 * v147;
  v174 = v147 * v159;
  v187 = v169 + v21;
  v188 = v170 + v22;
  v189 = v168 + v24;
  v181 = v187 + v166;
  v182 = v188 + v165;
  v183 = v189 + v174;
  v187 = v181 + v178;
  v188 = v182 + v179;
  v150[4] = v187;
  v150[5] = v188;
  v150[6] = v183 + v180;
  v184 = *(float *)&v175 + v21;
  v185 = *(float *)&v177 + v22;
  v186 = v176 + v24;
  v187 = v166 + v184;
  v188 = v185 + v165;
  v150[7] = v12 + v187;
  v27 = v21;
  v150[8] = v14 + v188;
  v150[9] = v15 + v186 + v174;
  v28 = v151 * v148;
  v181 = v28;
  v29 = v152 * v148;
  v182 = v29;
  v30 = v29;
  v31 = v148 * v153;
  v183 = v31;
  v184 = v169 + v27;
  v185 = v170 + v22;
  v186 = v168 + v25;
  v187 = v172 + v184;
  v188 = v185 + v171;
  v189 = v186 + v167;
  v184 = v187 + v181;
  v185 = v188 + v182;
  v150[10] = v184;
  v150[11] = v185;
  v150[12] = v189 + v183;
  v181 = v28;
  v182 = v30;
  v183 = v31;
  v184 = *(float *)&v175 + v27;
  v185 = *(float *)&v177 + v22;
  v186 = v176 + v25;
  v187 = v172 + v184;
  v188 = v185 + v171;
  v189 = v186 + v167;
  v184 = v187 + v181;
  v185 = v188 + v182;
  v150[13] = v184;
  v150[14] = v185;
  v150[15] = v189 + v183;
  v182 = v30;
  v183 = v31;
  v179 = v165;
  v180 = v174;
  v184 = v169 + v27;
  v185 = v170 + v22;
  v186 = v168 + v25;
  v187 = v166 + v184;
  v188 = v185 + v165;
  v189 = v186 + v174;
  v184 = v187 + v181;
  v32 = v150;
  v33 = 0;
  v185 = v188 + v182;
  v150[16] = v184;
  v150[17] = v185;
  v150[18] = v189 + v183;
  v185 = v165;
  v186 = v174;
  v187 = *(float *)&v175;
  v188 = *(float *)&v177;
  v189 = v176;
  v150[19] = v28 + v27 + *(float *)&v175 + v166;
  v150[20] = v30 + v22 + *(float *)&v177 + v165;
  v150[21] = v31 + v25 + v176 + v174;
  v34 = v164;
  v35 = v163;
  v36 = v162;
  v37 = v173;
  do
  {
    v38 = *(v32 - 2) * v36 + *(v32 - 1) * v35 + v34 * *v32 - v37;
    v160[v33] = v38;
    v105[v33 + 256] = v38 > 0.0;
    ++v33;
    v32 += 3;
  }
  while ( v33 != 8 );
  v39 = (const char *)&unk_1031CDE0;
  do
  {
    v40 = *((_DWORD *)v39 + 1);
    v41 = *(_DWORD *)v39;
    v42 = v105[*(_DWORD *)v39 + 256];
    v43 = v42 + v105[v40 + 256];
    if ( v43 == 1 )
    {
      v44 = v42 == 1;
      v45 = v41 + 8 * v40;
      if ( v44 )
      {
        v46 = &v149[3 * v41];
        v47 = 1.0 / (v160[v41] - v160[v40]);
        v48 = v160[v40] * v47;
        v49 = v48 * *v46;
        v50 = v46[1] * v48;
        v51 = v48 * v46[2];
        v52 = &v149[3 * v40];
        v53 = v50;
        v54 = v40 + 8 * v41;
        v55 = v47 * v160[v41];
        v105[v54 + 192] = 3;
        v56 = *v52;
        v105[v45 + 192] = 4;
        v57 = v56 * v55;
        v58 = v52[1] * v55;
        v59 = v55 * v52[2];
        v60 = v57 - v49;
        v61 = v58 - v53;
      }
      else
      {
        v62 = &v149[3 * v40];
        v63 = 1.0 / (v160[v40] - v160[v41]);
        v64 = v63 * v160[v41];
        v65 = v64 * *v62;
        v66 = v62[1] * v64;
        v51 = v64 * v62[2];
        v67 = &v149[3 * v41];
        v68 = v160[v40];
        v54 = v40 + 8 * v41;
        v69 = v63 * v68;
        v105[v54 + 192] = 4;
        v105[v45 + 192] = 3;
        v60 = v69 * *v67 - v65;
        v70 = v67[1] * v69 - v66;
        v59 = v69 * v67[2];
        v61 = v70;
      }
      v71 = (float *)&v105[3 * v45];
      *v71 = v60;
      v72 = (float *)&v105[3 * v54];
      v71[1] = v61;
      v71[2] = v59 - v51;
      *v72 = v60;
      v72[1] = v71[1];
      v72[2] = v71[2];
    }
    else
    {
      v105[8 * v40 + 192 + v41] = v43;
      v105[8 * v41 + 192 + v40] = v43;
    }
    v39 += 8;
  }
  while ( v39 != "CViewRender::DrawTranslucentRenderables" );
  *(float *)&v73 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C));
  v74 = v73;
  v174 = *(float *)&v73;
  if ( *(float *)&v73 != 0.0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v73 + 8))(v73);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v74 + 36))(v74, dword_1043C864, 0);
  v108 = 0;
  v110 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v117 = 0;
  v118 = 0;
  v119 = -1;
  v120 = 0;
  v123 = 0;
  v140 = -1;
  v141 = 0;
  v126 = 0;
  v127 = 0;
  v125 = 0;
  v139 = 0;
  v122[19] = -1;
  *(float *)&v75 = COERCE_FLOAT(
                     (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v74 + 224))(
                       v74,
                       0,
                       0,
                       0,
                       0));
  v108 = v75;
  v110 = 1;
  v109 = 2;
  v76 = *(void (__thiscall **)(int, int))(*(_DWORD *)v75 + 40);
  v173 = *(float *)&v75;
  v76(v75, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v108 + 68))(v108, 54, 54, v106);
  v113 = v75 + 4;
  v116 = v106[39];
  v112 = v107;
  v123 = v75;
  v115 = 0;
  v114 = 54;
  v121 = 0;
  v111[0] = v106[41];
  qmemcpy(v122, v106, sizeof(v122));
  v125 = 54;
  v122[20] = v106[20] != 0 ? 2 : 0;
  v126 = 0;
  v124 = 0;
  if ( v140 == -1 )
  {
    v139 = 0;
    v140 = v106[40];
    v141 = v106[39];
  }
  v129 = v122[24];
  v128 = (float *)v122[21];
  v132 = v122[29];
  v130 = v122[27];
  v131 = v122[28];
  v135 = v122[32];
  v133 = v122[30];
  v134 = v122[31];
  v138 = v122[25];
  v77 = COERCE_FLOAT(&unk_1031CD68);
  v117 = 0;
  v127 = 0;
  v78 = (float *)LODWORD(v173);
  v136 = v122[33];
  v137 = v122[34];
  v176 = COERCE_FLOAT(&unk_1031CD68);
  do
  {
    v79 = 0;
    while ( 1 )
    {
      v80 = *(_DWORD *)(LODWORD(v77) + 4 * v79 + 4);
      if ( v105[8 * *(_DWORD *)(LODWORD(v77) + 4 * v79) + 192 + v80] != 2 )
        break;
      if ( ++v79 == 3 )
        goto LABEL_44;
    }
    v177 = (int *)(v80 + 8 * *(_DWORD *)(LODWORD(v77) + 4 * v79));
    v81 = v105[(_DWORD)v177 + 192];
    v82 = 1;
    if ( !v81 )
    {
      v84 = 3 * *(_DWORD *)(LODWORD(v77) + 4 * v79);
      v85 = &v149[3 * v80];
      goto LABEL_26;
    }
    v83 = v81 - 3;
    if ( !v83 )
    {
      v78 = (float *)&v105[3 * (_DWORD)v177];
      v85 = &v149[3 * v80];
LABEL_27:
      v161 = v85;
      goto LABEL_28;
    }
    if ( v83 == 1 )
    {
      v84 = 3 * *(_DWORD *)(LODWORD(v77) + 4 * v79);
      v85 = (float *)&v105[3 * (_DWORD)v177];
LABEL_26:
      v78 = &v149[v84];
      goto LABEL_27;
    }
LABEL_28:
    v86 = v79 + 1;
    if ( v86 == 3 )
      goto LABEL_39;
    v87 = (int *)(LODWORD(v77) + 4 * v86 + 4);
    v177 = v87;
    v175 = 3 - v86;
    v86 = 3;
    do
    {
      v88 = *v87;
      v89 = *v87 + 8 * *(v87 - 1);
      v90 = v105[v89 + 192];
      if ( v90 )
      {
        v91 = v90 - 3;
        if ( !v91 )
        {
          (&v161)[v82] = (float *)&v105[3 * v89];
          *((_DWORD *)&v162 + v82) = &v149[3 * v88];
          v82 += 2;
          goto LABEL_37;
        }
        if ( v91 != 1 )
          goto LABEL_37;
        v92 = (float *)&v105[3 * v89];
      }
      else
      {
        v92 = &v149[3 * v88];
      }
      (&v161)[v82++] = v92;
LABEL_37:
      v87 = v177 + 1;
      v44 = v175-- == 1;
      ++v177;
    }
    while ( !v44 );
    v77 = v176;
LABEL_39:
    v93 = *(_DWORD *)(LODWORD(v77) + 4 * v86 + 4) + 8 * *(_DWORD *)(LODWORD(v77) + 4 * v86);
    if ( (unsigned int)(v105[v93 + 192] - 3) <= 1 )
      (&v161)[v82++] = (float *)&v105[3 * v93];
    v94 = v82 - 1;
    v95 = 0;
    if ( v82 != 1 )
    {
      do
      {
        v96 = v128;
        *v128 = *v78;
        v96[1] = v78[1];
        v96[2] = v78[2];
        sub_10016A80(v122);
        v97 = (&v161)[v95];
        v98 = v128;
        *v128 = *v97;
        v98[1] = v97[1];
        v98[2] = v97[2];
        sub_10016A80(v122);
        v99 = (float *)*((_DWORD *)&v162 + v95);
        v100 = v128;
        *v128 = *v99;
        v100[1] = v99[1];
        v100[2] = v99[2];
        sub_10016A80(v122);
        ++v95;
      }
      while ( v95 != v94 );
      v77 = v176;
    }
LABEL_44:
    LODWORD(v77) += 20;
    v176 = v77;
  }
  while ( (_UNKNOWN *)LODWORD(v77) != &unk_1031CDE0 );
  if ( v110 )
  {
    switch ( v109 )
    {
      case 4:
        v101 = 2 * v126 - 2;
        break;
      case 5:
        v101 = 2 * v126;
        break;
      case 6:
        v101 = 3 * v126 - 6;
        break;
      case 7:
        v101 = 6 * v126 / 4;
        break;
      case 8:
        v101 = 0;
        break;
      default:
        v101 = v126;
        break;
    }
    sub_10016B00(v111, v109, v101);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v108 + 80))(v108, v126);
  v113 = 0;
  v114 = 0;
  v125 = 0;
  v123 = 0;
  v122[19] = -1;
  v108 = 0;
  (*(void (__thiscall **)(float, int, _DWORD))(*(_DWORD *)LODWORD(v173) + 48))(COERCE_FLOAT(LODWORD(v173)), -1, 0);
  v102 = v174;
  (*(void (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v174) + 16))(COERCE_FLOAT(LODWORD(v174)), 0);
  if ( v123 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v123 + 8))(v123) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v123 + 16))(v123);
  if ( v113 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v113 + 8))(v113) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v113 + 16))(v113);
  (*(void (__thiscall **)(float))(*(_DWORD *)LODWORD(v102) + 12))(COERCE_FLOAT(LODWORD(v102)));
  return (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v102) + 4))(COERCE_FLOAT(LODWORD(v102)));
}
