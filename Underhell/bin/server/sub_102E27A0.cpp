int __thiscall sub_102E27A0(int *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // ebx
  int v12; // esi
  _DWORD *v13; // ebx
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // ebx
  int v17; // esi
  _DWORD *v18; // ebx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // ebx
  int v22; // esi
  _DWORD *v23; // ebx
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // ebx
  int v27; // esi
  _DWORD *v28; // ebx
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // ebx
  int v32; // esi
  _DWORD *v33; // ebx
  int v34; // eax
  _DWORD *v35; // ecx
  int v36; // ebx
  int v37; // esi
  _DWORD *v38; // ebx
  int v39; // eax
  _DWORD *v40; // ecx
  int v41; // ebx
  int v42; // esi
  _DWORD *v43; // ebx
  int v44; // eax
  _DWORD *v45; // ecx
  int v46; // ebx
  int v47; // esi
  _DWORD *v48; // ebx
  int v49; // eax
  _DWORD *v50; // ecx
  int v51; // ebx
  int v52; // esi
  _DWORD *v53; // ebx
  int v54; // eax
  _DWORD *v55; // ecx
  int v56; // ebx
  int v57; // esi
  _DWORD *v58; // ebx
  int v59; // eax
  _DWORD *v60; // ecx
  int v61; // ebx
  int v62; // esi
  _DWORD *v63; // ebx
  int v64; // eax
  _DWORD *v65; // ecx
  int v66; // ebx
  int v67; // esi
  _DWORD *v68; // ebx
  int v69; // eax
  _DWORD *v70; // ecx
  int v71; // ebx
  int v72; // esi
  _DWORD *v73; // ebx
  int v74; // eax
  _DWORD *v75; // ecx
  int v76; // ebx
  int v77; // esi
  _DWORD *v78; // ebx
  int v79; // eax
  _DWORD *v80; // ecx
  int v81; // ebx
  int v82; // esi
  _DWORD *v83; // ebx
  int v84; // eax
  _DWORD *v85; // ecx
  int v86; // ebx
  int v87; // esi
  _DWORD *v88; // ebx
  int v89; // eax
  _DWORD *v90; // ecx
  int v91; // ebx
  int v92; // esi
  _DWORD *v93; // ebx
  int v94; // eax
  _DWORD *v95; // ecx
  int v96; // ebx
  int v97; // esi
  _DWORD *v98; // ebx
  int v99; // eax
  _DWORD *v100; // ecx
  int v101; // ebx
  int v102; // esi
  _DWORD *v103; // ebx
  int v104; // eax
  _DWORD *v105; // ecx
  int v106; // ebx
  int v107; // esi
  _DWORD *v108; // ebx
  int v109; // eax
  _DWORD *v110; // ecx
  int v111; // ebx
  int v112; // esi
  _DWORD *v113; // ebx
  int v114; // eax
  _DWORD *v115; // ecx
  int v116; // ebx
  int v117; // esi
  _DWORD *v118; // ebx
  int v119; // eax
  _DWORD *v120; // ecx
  int v121; // ebx
  int v122; // esi
  _DWORD *v123; // edi
  int v124; // eax
  _DWORD *v125; // ecx
  int *v126; // esi
  int v127; // eax
  _DWORD *v128; // ecx
  int v129; // eax
  _DWORD *v130; // ecx
  int v131; // eax
  _DWORD *v132; // ecx
  int v133; // eax
  _DWORD *v134; // ecx
  int v135; // eax
  _DWORD *v136; // ecx
  int v137; // eax
  _DWORD *v138; // ecx
  int v139; // eax
  _DWORD *v140; // ecx
  int v141; // eax
  _DWORD *v142; // ecx
  int v143; // edi
  int v144; // esi
  _DWORD *v145; // ebx
  int v146; // eax
  _DWORD v148[8]; // [esp+Ch] [ebp-3Ch] BYREF
  void *Src; // [esp+2Ch] [ebp-1Ch] BYREF
  int v150; // [esp+30h] [ebp-18h]
  int v151; // [esp+34h] [ebp-14h]
  int v152; // [esp+38h] [ebp-10h]
  void *v153; // [esp+3Ch] [ebp-Ch]
  const char *v154; // [esp+40h] [ebp-8h] BYREF
  int *v155; // [esp+44h] [ebp-4h]

  v155 = this;
  Src = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  sub_102ABFC0(&Src, 1);
  v1 = Src;
  v2 = v152 + 1;
  v3 = v152++;
  v153 = Src;
  if ( v3 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v3);
  if ( v1 )
    *v1 = "none";
  v4 = 0;
  v5 = v155 + 1309;
  while ( *v5 )
  {
    ++v4;
    ++v5;
    if ( v4 >= 34 )
      goto LABEL_10;
  }
  v155[v4 + 1309] = (int)"none";
LABEL_10:
  v6 = v2;
  if ( v2 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v2 - v150 + 1);
    v2 = v152;
    v1 = Src;
  }
  v7 = v2 + 1;
  v152 = v7;
  v153 = v1;
  if ( v7 - v6 - 1 > 0 )
    memcpy(&v1[v6 + 1], &v1[v6], 4 * (v7 - v6 - 1));
  v8 = &v1[v6];
  if ( v8 )
    *v8 = "Apple (Red)";
  v9 = 0;
  v10 = v155 + 1309;
  while ( *v10 )
  {
    ++v9;
    ++v10;
    if ( v9 >= 34 )
      goto LABEL_21;
  }
  v155[v9 + 1309] = (int)"item_apple";
LABEL_21:
  v11 = v7;
  if ( v7 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v7 - v150 + 1);
    v7 = v152;
    v1 = Src;
  }
  v12 = v7 + 1;
  v152 = v12;
  v153 = v1;
  if ( v12 - v11 - 1 > 0 )
    memcpy(&v1[v11 + 1], &v1[v11], 4 * (v12 - v11 - 1));
  v13 = &v1[v11];
  if ( v13 )
    *v13 = "Apple (Green)";
  v14 = 0;
  v15 = v155 + 1309;
  while ( *v15 )
  {
    ++v14;
    ++v15;
    if ( v14 >= 34 )
      goto LABEL_32;
  }
  v155[v14 + 1309] = (int)"item_apple";
LABEL_32:
  v16 = v12;
  if ( v12 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v12 - v150 + 1);
    v12 = v152;
    v1 = Src;
  }
  v17 = v12 + 1;
  v152 = v17;
  v153 = v1;
  if ( v17 - v16 - 1 > 0 )
    memcpy(&v1[v16 + 1], &v1[v16], 4 * (v17 - v16 - 1));
  v18 = &v1[v16];
  if ( v18 )
    *v18 = "Banana";
  v19 = 0;
  v20 = v155 + 1309;
  while ( *v20 )
  {
    ++v19;
    ++v20;
    if ( v19 >= 34 )
      goto LABEL_43;
  }
  v155[v19 + 1309] = (int)"item_banana";
LABEL_43:
  v21 = v17;
  if ( v17 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v17 - v150 + 1);
    v17 = v152;
    v1 = Src;
  }
  v22 = v17 + 1;
  v152 = v22;
  v153 = v1;
  if ( v22 - v21 - 1 > 0 )
    memcpy(&v1[v21 + 1], &v1[v21], 4 * (v22 - v21 - 1));
  v23 = &v1[v21];
  if ( v23 )
    *v23 = "Burrito";
  v24 = 0;
  v25 = v155 + 1309;
  while ( *v25 )
  {
    ++v24;
    ++v25;
    if ( v24 >= 34 )
      goto LABEL_54;
  }
  v155[v24 + 1309] = (int)"item_burrito";
LABEL_54:
  v26 = v22;
  if ( v22 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v22 - v150 + 1);
    v22 = v152;
    v1 = Src;
  }
  v27 = v22 + 1;
  v152 = v27;
  v153 = v1;
  if ( v27 - v26 - 1 > 0 )
    memcpy(&v1[v26 + 1], &v1[v26], 4 * (v27 - v26 - 1));
  v28 = &v1[v26];
  if ( v28 )
    *v28 = "Sandwich";
  v29 = 0;
  v30 = v155 + 1309;
  while ( *v30 )
  {
    ++v29;
    ++v30;
    if ( v29 >= 34 )
      goto LABEL_65;
  }
  v155[v29 + 1309] = (int)"item_sandwich";
LABEL_65:
  v31 = v27;
  if ( v27 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v27 - v150 + 1);
    v27 = v152;
    v1 = Src;
  }
  v32 = v27 + 1;
  v152 = v32;
  v153 = v1;
  if ( v32 - v31 - 1 > 0 )
    memcpy(&v1[v31 + 1], &v1[v31], 4 * (v32 - v31 - 1));
  v33 = &v1[v31];
  if ( v33 )
    *v33 = "Banana Bunch";
  v34 = 0;
  v35 = v155 + 1309;
  while ( *v35 )
  {
    ++v34;
    ++v35;
    if ( v34 >= 34 )
      goto LABEL_76;
  }
  v155[v34 + 1309] = (int)"item_bananabunch";
LABEL_76:
  v36 = v32;
  if ( v32 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v32 - v150 + 1);
    v32 = v152;
    v1 = Src;
  }
  v37 = v32 + 1;
  v152 = v37;
  v153 = v1;
  if ( v37 - v36 - 1 > 0 )
    memcpy(&v1[v36 + 1], &v1[v36], 4 * (v37 - v36 - 1));
  v38 = &v1[v36];
  if ( v38 )
    *v38 = "Soda1";
  v39 = 0;
  v40 = v155 + 1309;
  while ( *v40 )
  {
    ++v39;
    ++v40;
    if ( v39 >= 34 )
      goto LABEL_87;
  }
  v155[v39 + 1309] = (int)"item_uhsoda";
LABEL_87:
  v41 = v37;
  if ( v37 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v37 - v150 + 1);
    v37 = v152;
    v1 = Src;
  }
  v42 = v37 + 1;
  v152 = v42;
  v153 = v1;
  if ( v42 - v41 - 1 > 0 )
    memcpy(&v1[v41 + 1], &v1[v41], 4 * (v42 - v41 - 1));
  v43 = &v1[v41];
  if ( v43 )
    *v43 = "Soda2";
  v44 = 0;
  v45 = v155 + 1309;
  while ( *v45 )
  {
    ++v44;
    ++v45;
    if ( v44 >= 34 )
      goto LABEL_98;
  }
  v155[v44 + 1309] = (int)"item_uhsoda";
LABEL_98:
  v46 = v42;
  if ( v42 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v42 - v150 + 1);
    v42 = v152;
    v1 = Src;
  }
  v47 = v42 + 1;
  v152 = v47;
  v153 = v1;
  if ( v47 - v46 - 1 > 0 )
    memcpy(&v1[v46 + 1], &v1[v46], 4 * (v47 - v46 - 1));
  v48 = &v1[v46];
  if ( v48 )
    *v48 = "Soda3";
  v49 = 0;
  v50 = v155 + 1309;
  while ( *v50 )
  {
    ++v49;
    ++v50;
    if ( v49 >= 34 )
      goto LABEL_109;
  }
  v155[v49 + 1309] = (int)"item_uhsoda";
LABEL_109:
  v51 = v47;
  if ( v47 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v47 - v150 + 1);
    v47 = v152;
    v1 = Src;
  }
  v52 = v47 + 1;
  v152 = v52;
  v153 = v1;
  if ( v52 - v51 - 1 > 0 )
    memcpy(&v1[v51 + 1], &v1[v51], 4 * (v52 - v51 - 1));
  v53 = &v1[v51];
  if ( v53 )
    *v53 = "Soda4";
  v54 = 0;
  v55 = v155 + 1309;
  while ( *v55 )
  {
    ++v54;
    ++v55;
    if ( v54 >= 34 )
      goto LABEL_120;
  }
  v155[v54 + 1309] = (int)"item_uhsoda";
LABEL_120:
  v56 = v52;
  if ( v52 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v52 - v150 + 1);
    v52 = v152;
    v1 = Src;
  }
  v57 = v52 + 1;
  v152 = v57;
  v153 = v1;
  if ( v57 - v56 - 1 > 0 )
    memcpy(&v1[v56 + 1], &v1[v56], 4 * (v57 - v56 - 1));
  v58 = &v1[v56];
  if ( v58 )
    *v58 = "Soda5";
  v59 = 0;
  v60 = v155 + 1309;
  while ( *v60 )
  {
    ++v59;
    ++v60;
    if ( v59 >= 34 )
      goto LABEL_131;
  }
  v155[v59 + 1309] = (int)"item_uhsoda";
LABEL_131:
  v61 = v57;
  if ( v57 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v57 - v150 + 1);
    v57 = v152;
    v1 = Src;
  }
  v62 = v57 + 1;
  v152 = v62;
  v153 = v1;
  if ( v62 - v61 - 1 > 0 )
    memcpy(&v1[v61 + 1], &v1[v61], 4 * (v62 - v61 - 1));
  v63 = &v1[v61];
  if ( v63 )
    *v63 = "Mega Soda";
  v64 = 0;
  v65 = v155 + 1309;
  while ( *v65 )
  {
    ++v64;
    ++v65;
    if ( v64 >= 34 )
      goto LABEL_142;
  }
  v155[v64 + 1309] = (int)"item_uhsoda";
LABEL_142:
  v66 = v62;
  if ( v62 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v62 - v150 + 1);
    v62 = v152;
    v1 = Src;
  }
  v67 = v62 + 1;
  v152 = v67;
  v153 = v1;
  if ( v67 - v66 - 1 > 0 )
    memcpy(&v1[v66 + 1], &v1[v66], 4 * (v67 - v66 - 1));
  v68 = &v1[v66];
  if ( v68 )
    *v68 = "Flare";
  v69 = 0;
  v70 = v155 + 1309;
  while ( *v70 )
  {
    ++v69;
    ++v70;
    if ( v69 >= 34 )
      goto LABEL_153;
  }
  v155[v69 + 1309] = (int)"item_flarepack";
LABEL_153:
  v71 = v67;
  if ( v67 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v67 - v150 + 1);
    v67 = v152;
    v1 = Src;
  }
  v72 = v67 + 1;
  v152 = v72;
  v153 = v1;
  if ( v72 - v71 - 1 > 0 )
    memcpy(&v1[v71 + 1], &v1[v71], 4 * (v72 - v71 - 1));
  v73 = &v1[v71];
  if ( v73 )
    *v73 = "GlowStick (Green)";
  v74 = 0;
  v75 = v155 + 1309;
  while ( *v75 )
  {
    ++v74;
    ++v75;
    if ( v74 >= 34 )
      goto LABEL_164;
  }
  v155[v74 + 1309] = (int)"item_glowstick";
LABEL_164:
  v76 = v72;
  if ( v72 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v72 - v150 + 1);
    v72 = v152;
    v1 = Src;
  }
  v77 = v72 + 1;
  v152 = v77;
  v153 = v1;
  if ( v77 - v76 - 1 > 0 )
    memcpy(&v1[v76 + 1], &v1[v76], 4 * (v77 - v76 - 1));
  v78 = &v1[v76];
  if ( v78 )
    *v78 = "GlowStick (Red)";
  v79 = 0;
  v80 = v155 + 1309;
  while ( *v80 )
  {
    ++v79;
    ++v80;
    if ( v79 >= 34 )
      goto LABEL_175;
  }
  v155[v79 + 1309] = (int)"item_glowstick";
LABEL_175:
  v81 = v77;
  if ( v77 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v77 - v150 + 1);
    v77 = v152;
    v1 = Src;
  }
  v82 = v77 + 1;
  v152 = v82;
  v153 = v1;
  if ( v82 - v81 - 1 > 0 )
    memcpy(&v1[v81 + 1], &v1[v81], 4 * (v82 - v81 - 1));
  v83 = &v1[v81];
  if ( v83 )
    *v83 = "GlowStick (Blue)";
  v84 = 0;
  v85 = v155 + 1309;
  while ( *v85 )
  {
    ++v84;
    ++v85;
    if ( v84 >= 34 )
      goto LABEL_186;
  }
  v155[v84 + 1309] = (int)"item_glowstick";
LABEL_186:
  v86 = v82;
  if ( v82 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v82 - v150 + 1);
    v82 = v152;
    v1 = Src;
  }
  v87 = v82 + 1;
  v152 = v87;
  v153 = v1;
  if ( v87 - v86 - 1 > 0 )
    memcpy(&v1[v86 + 1], &v1[v86], 4 * (v87 - v86 - 1));
  v88 = &v1[v86];
  if ( v88 )
    *v88 = "GlowStick (Yellow)";
  v89 = 0;
  v90 = v155 + 1309;
  while ( *v90 )
  {
    ++v89;
    ++v90;
    if ( v89 >= 34 )
      goto LABEL_197;
  }
  v155[v89 + 1309] = (int)"item_glowstick";
LABEL_197:
  v91 = v87;
  if ( v87 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v87 - v150 + 1);
    v87 = v152;
    v1 = Src;
  }
  v92 = v87 + 1;
  v152 = v92;
  v153 = v1;
  if ( v92 - v91 - 1 > 0 )
    memcpy(&v1[v91 + 1], &v1[v91], 4 * (v92 - v91 - 1));
  v93 = &v1[v91];
  if ( v93 )
    *v93 = "GlowStick (Purple)";
  v94 = 0;
  v95 = v155 + 1309;
  while ( *v95 )
  {
    ++v94;
    ++v95;
    if ( v94 >= 34 )
      goto LABEL_208;
  }
  v155[v94 + 1309] = (int)"item_glowstick";
LABEL_208:
  v96 = v92;
  if ( v92 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v92 - v150 + 1);
    v92 = v152;
    v1 = Src;
  }
  v97 = v92 + 1;
  v152 = v97;
  v153 = v1;
  if ( v97 - v96 - 1 > 0 )
    memcpy(&v1[v96 + 1], &v1[v96], 4 * (v97 - v96 - 1));
  v98 = &v1[v96];
  if ( v98 )
    *v98 = "Lit GlowStick (Green)";
  v99 = 0;
  v100 = v155 + 1309;
  while ( *v100 )
  {
    ++v99;
    ++v100;
    if ( v99 >= 34 )
      goto LABEL_219;
  }
  v155[v99 + 1309] = (int)"nothing";
LABEL_219:
  v101 = v97;
  if ( v97 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v97 - v150 + 1);
    v97 = v152;
    v1 = Src;
  }
  v102 = v97 + 1;
  v152 = v102;
  v153 = v1;
  if ( v102 - v101 - 1 > 0 )
    memcpy(&v1[v101 + 1], &v1[v101], 4 * (v102 - v101 - 1));
  v103 = &v1[v101];
  if ( v103 )
    *v103 = "Lit GlowStick (Red)";
  v104 = 0;
  v105 = v155 + 1309;
  while ( *v105 )
  {
    ++v104;
    ++v105;
    if ( v104 >= 34 )
      goto LABEL_230;
  }
  v155[v104 + 1309] = (int)"nothing";
LABEL_230:
  v106 = v102;
  if ( v102 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v102 - v150 + 1);
    v102 = v152;
    v1 = Src;
  }
  v107 = v102 + 1;
  v152 = v107;
  v153 = v1;
  if ( v107 - v106 - 1 > 0 )
    memcpy(&v1[v106 + 1], &v1[v106], 4 * (v107 - v106 - 1));
  v108 = &v1[v106];
  if ( v108 )
    *v108 = "Lit GlowStick (Blue)";
  v109 = 0;
  v110 = v155 + 1309;
  while ( *v110 )
  {
    ++v109;
    ++v110;
    if ( v109 >= 34 )
      goto LABEL_241;
  }
  v155[v109 + 1309] = (int)"nothing";
LABEL_241:
  v111 = v107;
  if ( v107 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v107 - v150 + 1);
    v107 = v152;
    v1 = Src;
  }
  v112 = v107 + 1;
  v152 = v112;
  v153 = v1;
  if ( v112 - v111 - 1 > 0 )
    memcpy(&v1[v111 + 1], &v1[v111], 4 * (v112 - v111 - 1));
  v113 = &v1[v111];
  if ( v113 )
    *v113 = "Lit GlowStick (Yellow)";
  v114 = 0;
  v115 = v155 + 1309;
  while ( *v115 )
  {
    ++v114;
    ++v115;
    if ( v114 >= 34 )
      goto LABEL_252;
  }
  v155[v114 + 1309] = (int)"nothing";
LABEL_252:
  v116 = v112;
  if ( v112 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v112 - v150 + 1);
    v112 = v152;
    v1 = Src;
  }
  v117 = v112 + 1;
  v152 = v117;
  v153 = v1;
  if ( v117 - v116 - 1 > 0 )
    memcpy(&v1[v116 + 1], &v1[v116], 4 * (v117 - v116 - 1));
  v118 = &v1[v116];
  if ( v118 )
    *v118 = "Lit GlowStick (Purple)";
  v119 = 0;
  v120 = v155 + 1309;
  while ( *v120 )
  {
    ++v119;
    ++v120;
    if ( v119 >= 34 )
      goto LABEL_263;
  }
  v155[v119 + 1309] = (int)"nothing";
LABEL_263:
  v121 = v117;
  if ( v117 + 1 > v150 )
  {
    sub_102ABFC0(&Src, v117 - v150 + 1);
    v117 = v152;
    v1 = Src;
  }
  v122 = v117 + 1;
  v152 = v122;
  v153 = v1;
  if ( v122 - v121 - 1 > 0 )
    memcpy(&v1[v121 + 1], &v1[v121], 4 * (v122 - v121 - 1));
  v123 = &v1[v121];
  if ( v123 )
    *v123 = "PainKillers";
  v124 = 0;
  v125 = v155 + 1309;
  while ( *v125 )
  {
    ++v124;
    ++v125;
    if ( v124 >= 34 )
      goto LABEL_274;
  }
  v155[v124 + 1309] = (int)"item_painkillers";
LABEL_274:
  v154 = "Syringe";
  sub_10194990((int *)&Src, v122, &v154);
  v126 = v155;
  v127 = 0;
  v128 = v155 + 1309;
  while ( *v128 )
  {
    ++v127;
    ++v128;
    if ( v127 >= 34 )
      goto LABEL_279;
  }
  v155[v127 + 1309] = (int)"item_syringe";
LABEL_279:
  v154 = "Bandages";
  sub_10194990((int *)&Src, v152, &v154);
  v129 = 0;
  v130 = v126 + 1309;
  while ( *v130 )
  {
    ++v129;
    ++v130;
    if ( v129 >= 34 )
      goto LABEL_284;
  }
  v126[v129 + 1309] = (int)"item_bandages";
LABEL_284:
  v154 = "Healthkit";
  sub_10194990((int *)&Src, v152, &v154);
  v131 = 0;
  v132 = v126 + 1309;
  while ( *v132 )
  {
    ++v131;
    ++v132;
    if ( v131 >= 34 )
      goto LABEL_289;
  }
  v126[v131 + 1309] = (int)"item_healthkit";
LABEL_289:
  v154 = "Health Vial";
  sub_10194990((int *)&Src, v152, &v154);
  v133 = 0;
  v134 = v126 + 1309;
  while ( *v134 )
  {
    ++v133;
    ++v134;
    if ( v133 >= 34 )
      goto LABEL_294;
  }
  v126[v133 + 1309] = (int)"item_healthvial";
LABEL_294:
  v154 = "Chocolate Bar";
  sub_10194990((int *)&Src, v152, &v154);
  v135 = 0;
  v136 = v126 + 1309;
  while ( *v136 )
  {
    ++v135;
    ++v136;
    if ( v135 >= 34 )
      goto LABEL_299;
  }
  v126[v135 + 1309] = (int)"item_chocobar";
LABEL_299:
  v154 = "Orange";
  sub_10194990((int *)&Src, v152, &v154);
  v137 = 0;
  v138 = v126 + 1309;
  while ( *v138 )
  {
    ++v137;
    ++v138;
    if ( v137 >= 34 )
      goto LABEL_304;
  }
  v126[v137 + 1309] = (int)"item_orange";
LABEL_304:
  v154 = "FM Radio";
  sub_10194990((int *)&Src, v152, &v154);
  v139 = 0;
  v140 = v126 + 1309;
  while ( *v140 )
  {
    ++v139;
    ++v140;
    if ( v139 >= 34 )
      goto LABEL_309;
  }
  v126[v139 + 1309] = (int)"item_fmradio";
LABEL_309:
  v154 = "Radio Cracker";
  sub_10194990((int *)&Src, v152, &v154);
  v141 = 0;
  v142 = v126 + 1309;
  while ( *v142 )
  {
    ++v141;
    ++v142;
    if ( v141 >= 34 )
      goto LABEL_314;
  }
  v126[v141 + 1309] = (int)"item_radiocracker";
LABEL_314:
  sub_10219BB0(v148);
  v148[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v148, v126);
  sub_10219A50(v148);
  v143 = v152;
  v144 = 0;
  if ( v152 > 0 )
  {
    v145 = Src;
    do
    {
      sub_10154B40((int)v148, "EntityNames");
      v146 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v155[6]);
      sub_10154BB0(v146);
      sub_10154D00(v145[v144]);
      sub_10154B90();
      ++v144;
    }
    while ( v144 < v143 );
  }
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v148);
  return sub_102375F0((int *)&Src);
}
