int __thiscall sub_1017EC00(int *this, int a2)
{
  double v3; // st6
  double v4; // st0
  double v5; // st1
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  int i; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float *v13; // ecx
  int v14; // edx
  long double v15; // st7
  double v16; // st6
  double v17; // st5
  long double v18; // st4
  long double v19; // st3
  long double v20; // st4
  long double v21; // st3
  long double v22; // st4
  long double v23; // st3
  long double v24; // st4
  long double v25; // st3
  float *v26; // eax
  double v27; // rt2
  double v28; // st4
  int result; // eax
  double v30; // st3
  double v31; // st1
  double v32; // st1
  double v33; // st1
  double v34; // st1
  double v35; // st1
  double v36; // st1
  double v37; // st5
  double v38; // st6
  double v39; // st1
  double v40; // st5
  int v41; // ecx
  double v42; // st6
  double v43; // st4
  double v44; // st3
  double v45; // st2
  double v46; // st1
  double v47; // rtt
  double v48; // st1
  double v49; // st3
  double v50; // rt0
  double v51; // st1
  double v52; // st4
  double v53; // rt1
  double v54; // st1
  double v55; // st3
  __int16 v56; // fps
  double v57; // rt2
  double v58; // st1
  double v59; // st2
  bool v60; // c0
  char v61; // c2
  bool v62; // c3
  __int16 v63; // fps
  bool v64; // c0
  char v65; // c2
  bool v66; // c3
  float v67; // [esp+Ch] [ebp-168h]
  float v68; // [esp+10h] [ebp-164h]
  float v69[24]; // [esp+1Ch] [ebp-158h] BYREF
  float v70[3]; // [esp+7Ch] [ebp-F8h] BYREF
  float v71[3]; // [esp+88h] [ebp-ECh] BYREF
  float v72; // [esp+94h] [ebp-E0h]
  float v73; // [esp+98h] [ebp-DCh]
  float v74; // [esp+9Ch] [ebp-D8h]
  float v75; // [esp+A0h] [ebp-D4h]
  float v76; // [esp+A4h] [ebp-D0h]
  float v77; // [esp+A8h] [ebp-CCh]
  float v78; // [esp+ACh] [ebp-C8h]
  float v79; // [esp+B0h] [ebp-C4h]
  float v80; // [esp+B4h] [ebp-C0h]
  float v81; // [esp+B8h] [ebp-BCh]
  float v82; // [esp+BCh] [ebp-B8h]
  float v83; // [esp+C0h] [ebp-B4h]
  float v84; // [esp+C4h] [ebp-B0h]
  float v85; // [esp+C8h] [ebp-ACh]
  float v86; // [esp+CCh] [ebp-A8h]
  float v87; // [esp+D0h] [ebp-A4h]
  float v88; // [esp+D4h] [ebp-A0h]
  float v89; // [esp+D8h] [ebp-9Ch]
  float v90; // [esp+DCh] [ebp-98h]
  float v91; // [esp+E0h] [ebp-94h]
  float v92; // [esp+E4h] [ebp-90h]
  int v93; // [esp+E8h] [ebp-8Ch] BYREF
  float v94; // [esp+ECh] [ebp-88h]
  float v95; // [esp+F0h] [ebp-84h]
  int v96; // [esp+F4h] [ebp-80h] BYREF
  float v97; // [esp+F8h] [ebp-7Ch]
  float v98; // [esp+FCh] [ebp-78h]
  float v99; // [esp+100h] [ebp-74h]
  float v100; // [esp+104h] [ebp-70h] BYREF
  float v101; // [esp+108h] [ebp-6Ch]
  float v102; // [esp+10Ch] [ebp-68h]
  float v103; // [esp+110h] [ebp-64h] BYREF
  float v104; // [esp+114h] [ebp-60h]
  float v105; // [esp+118h] [ebp-5Ch]
  float v106; // [esp+11Ch] [ebp-58h] BYREF
  float v107; // [esp+120h] [ebp-54h]
  float v108; // [esp+124h] [ebp-50h]
  float v109; // [esp+128h] [ebp-4Ch] BYREF
  float v110; // [esp+12Ch] [ebp-48h]
  float v111; // [esp+130h] [ebp-44h]
  float v112; // [esp+134h] [ebp-40h]
  float v113; // [esp+138h] [ebp-3Ch]
  float v114; // [esp+13Ch] [ebp-38h]
  float v115; // [esp+140h] [ebp-34h]
  float v116; // [esp+144h] [ebp-30h] BYREF
  float v117; // [esp+148h] [ebp-2Ch]
  float v118; // [esp+14Ch] [ebp-28h]
  float v119; // [esp+150h] [ebp-24h]
  float v120; // [esp+154h] [ebp-20h]
  float v121; // [esp+158h] [ebp-1Ch]
  float v122; // [esp+15Ch] [ebp-18h]
  float v123; // [esp+160h] [ebp-14h]
  float v124; // [esp+164h] [ebp-10h]
  float v125; // [esp+168h] [ebp-Ch]
  float v126; // [esp+16Ch] [ebp-8h]
  float v127; // [esp+170h] [ebp-4h]
  float v128; // [esp+17Ch] [ebp+8h]

  (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_10413178 + 28))(
    dword_10413178,
    a2,
    &v100,
    &v106);
  v3 = (v100 + v106) * 0.5;
  v4 = (v101 + v107) * 0.5;
  v104 = v4;
  v5 = 0.5 * (v102 + v108);
  v105 = v5;
  v100 = v100 - v3;
  v101 = v101 - v4;
  v102 = v102 - v5;
  v106 = v106 - v3;
  v107 = v107 - v4;
  v108 = v108 - v5;
  v71[2] = v108;
  v74 = v108;
  v77 = v108;
  v80 = v108;
  v71[0] = v106;
  v75 = v106;
  v81 = v106;
  v87 = v106;
  v71[1] = v107;
  v73 = v107;
  v82 = v107;
  v85 = v107;
  v72 = v100;
  v78 = v100;
  v84 = v100;
  v90 = v100;
  v76 = v101;
  v79 = v101;
  v88 = v101;
  v91 = v101;
  v83 = v102;
  v86 = v102;
  v89 = v102;
  v92 = v102;
  v97 = -v3;
  v6 = (float *)this[70];
  v98 = -v104;
  v99 = -v105;
  v7 = v6[5];
  v8 = v6[6];
  v70[0] = v6[4];
  v70[1] = v7;
  v70[2] = v8;
  sub_101EE440(v70);
  for ( i = 0; i < 24; i += 3 )
    sub_101ED860(&v71[i], &v116, &v69[i]);
  v103 = -v97;
  v104 = -v98;
  v105 = -v99;
  sub_101ED860(&v103, &v116, &v109);
  sub_102361D0(&v93, &v96);
  v10 = (double)v93;
  v95 = v10;
  v11 = (double)v96;
  v128 = v11;
  v12 = (double)this[67] * 0.5;
  v94 = tan(0.017453292 * v12);
  v68 = v10 / v11;
  v67 = v12;
  sub_101F0720(v67, v68);
  v13 = v69;
  v14 = 2;
  v15 = tan(v12 * 0.017453292);
  v16 = 0.0;
  v17 = v94;
  do
  {
    v18 = fabs(v13[2] / v15 - *v13);
    v19 = fabs(v13[1] / v17 - *v13);
    if ( v19 >= v18 )
      v18 = v19;
    if ( v18 >= v16 )
      v16 = v18;
    v20 = fabs(v13[5] / v15 - v13[3]);
    v21 = fabs(v13[4] / v17 - v13[3]);
    if ( v21 >= v20 )
      v20 = v21;
    if ( v20 >= v16 )
      v16 = v20;
    v22 = fabs(v13[8] / v15 - v13[6]);
    v23 = fabs(v13[7] / v17 - v13[6]);
    if ( v23 >= v22 )
      v22 = v23;
    if ( v22 >= v16 )
      v16 = v22;
    v24 = fabs(v13[11] / v15 - v13[9]);
    v25 = fabs(v13[10] / v17 - v13[9]);
    if ( v25 >= v24 )
      v24 = v25;
    if ( v24 >= v16 )
      v16 = v24;
    v13 += 12;
    --v14;
  }
  while ( v14 );
  v26 = (float *)this[70];
  v27 = v94;
  v28 = v26[12] + v109;
  v109 = v28;
  v110 = v26[13] + v110;
  v111 = v26[14] + v111;
  v26[7] = v16 * 1.1 - v28;
  *(float *)(this[70] + 32) = -v110;
  result = this[70];
  *(float *)(result + 36) = -v111;
  v30 = v69[0] + v16 * 1.1;
  v112 = (v69[1] / (v30 * v17) + 1.0) * 0.5 * v95;
  v113 = (v69[2] / (v30 * v15) + 1.0) * 0.5 * v128;
  v31 = v69[3] + v16 * 1.1;
  v72 = v31;
  v114 = v69[4] / (v31 * v17);
  v114 = (v114 + 1.0) * 0.5 * v95;
  v115 = (v69[5] / (v72 * v15) + 1.0) * 0.5 * v128;
  v32 = v69[6] + v16 * 1.1;
  v75 = v32;
  v116 = v69[7] / (v32 * v17);
  v116 = (v116 + 1.0) * 0.5 * v95;
  v117 = (v69[8] / (v75 * v15) + 1.0) * 0.5 * v128;
  v33 = v69[9] + v16 * 1.1;
  v78 = v33;
  v118 = v69[10] / (v33 * v17);
  v118 = (v118 + 1.0) * 0.5 * v95;
  v119 = (v69[11] / (v78 * v15) + 1.0) * 0.5 * v128;
  v34 = v69[12] + v16 * 1.1;
  v81 = v34;
  v120 = v69[13] / (v34 * v17);
  v120 = (v120 + 1.0) * 0.5 * v95;
  v121 = (v69[14] / (v81 * v15) + 1.0) * 0.5 * v128;
  v35 = v69[15] + v16 * 1.1;
  v84 = v35;
  v122 = v69[16] / (v35 * v17);
  v122 = (v122 + 1.0) * 0.5 * v95;
  v123 = (v69[17] / (v84 * v15) + 1.0) * 0.5 * v128;
  v36 = v69[18] + v16 * 1.1;
  v87 = v36;
  v124 = v69[19] / (v36 * v17);
  v124 = (v124 + 1.0) * 0.5 * v95;
  v125 = (v69[20] / (v87 * v15) + 1.0) * 0.5 * v128;
  v37 = v16 * 1.1 + v69[21];
  v38 = v69[22] / (v27 * v37);
  v39 = v37;
  v40 = v128;
  v41 = 0;
  v126 = (v38 + 1.0) * 0.5 * v95;
  v42 = v95;
  v127 = (v69[23] / (v15 * v39) + 1.0) * 0.5 * v128;
  v43 = 99999.0;
  v44 = 99999.0;
  v45 = -99999.0;
  v46 = -99999.0;
  do
  {
    if ( *(&v112 + 2 * v41) <= v44 )
      v44 = *(&v112 + 2 * v41);
    if ( *(&v113 + 2 * v41) <= v43 )
      v43 = *(&v113 + 2 * v41);
    if ( v46 <= *(&v112 + 2 * v41) )
      v46 = *(&v112 + 2 * v41);
    if ( *(&v113 + 2 * v41) >= v45 )
      v45 = *(&v113 + 2 * v41);
    if ( *(&v114 + 2 * v41) <= v44 )
      v44 = *(&v114 + 2 * v41);
    if ( *(&v115 + 2 * v41) <= v43 )
      v43 = *(&v115 + 2 * v41);
    if ( v46 <= *(&v114 + 2 * v41) )
      v46 = *(&v114 + 2 * v41);
    if ( *(&v115 + 2 * v41) >= v45 )
      v45 = *(&v115 + 2 * v41);
    if ( *(&v116 + 2 * v41) <= v44 )
      v44 = *(&v116 + 2 * v41);
    if ( *(&v117 + 2 * v41) <= v43 )
      v43 = *(&v117 + 2 * v41);
    if ( v46 <= *(&v116 + 2 * v41) )
      v46 = *(&v116 + 2 * v41);
    if ( *(&v117 + 2 * v41) >= v45 )
      v45 = *(&v117 + 2 * v41);
    if ( *(&v118 + 2 * v41) <= v44 )
      v44 = *(&v118 + 2 * v41);
    if ( *(&v119 + 2 * v41) <= v43 )
      v43 = *(&v119 + 2 * v41);
    if ( v46 <= *(&v118 + 2 * v41) )
      v46 = *(&v118 + 2 * v41);
    if ( *(&v119 + 2 * v41) >= v45 )
      v45 = *(&v119 + 2 * v41);
    v41 += 4;
  }
  while ( v41 < 8 );
  v47 = v46;
  v48 = v44;
  v49 = v47;
  if ( v48 <= v42 )
  {
    if ( v48 < 0.0 )
      v48 = 0.0;
  }
  else
  {
    v48 = v95;
  }
  v50 = v48;
  v51 = v43;
  v52 = v50;
  if ( v51 <= v40 )
  {
    if ( v51 < 0.0 )
      v51 = 0.0;
  }
  else
  {
    v51 = v128;
  }
  v53 = v51;
  v54 = v49;
  v55 = v53;
  if ( v54 <= v42 )
  {
    if ( v54 < 0.0 )
      v54 = 0.0;
  }
  else
  {
    v54 = v95;
  }
  v57 = v54;
  v58 = v45;
  v59 = v57;
  v60 = v58 < v40;
  v61 = 0;
  v62 = v58 == v40;
  LOWORD(result) = v56;
  if ( v58 <= v40 )
  {
    v64 = v58 > 0.0;
    v65 = 0;
    v66 = 0.0 == v58;
    LOWORD(result) = v63;
    if ( v58 < 0.0 )
      v58 = 0.0;
  }
  else
  {
    v58 = v128;
  }
  *(float *)(this[70] + 40) = -(v95 * 0.5 - (v52 + v59) * 0.5);
  *(float *)(this[70] + 44) = -(0.5 * v40 - (v55 + v58) * 0.5);
  return result;
}
