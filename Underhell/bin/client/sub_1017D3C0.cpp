int __thiscall sub_1017D3C0(float *this, float *a2, float *a3)
{
  float v3; // edx
  float v5; // ecx
  float v6; // eax
  double v7; // st6
  double v8; // st0
  double v9; // st1
  int i; // esi
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int v14; // edx
  float *v15; // ecx
  long double v16; // st7
  double v17; // st6
  double v18; // st5
  long double v19; // rt1
  long double v20; // st3
  long double v21; // rt2
  long double v22; // st3
  long double v23; // st4
  long double v24; // rtt
  long double v25; // st3
  long double v26; // rt0
  long double v27; // st3
  long double v28; // st4
  long double v29; // rt1
  long double v30; // st3
  long double v31; // rt2
  long double v32; // st3
  long double v33; // st4
  long double v34; // rtt
  long double v35; // st3
  long double v36; // rt0
  long double v37; // st3
  long double v38; // st4
  double v39; // rt1
  double v40; // st5
  double v41; // st3
  double v42; // st1
  double v43; // st1
  double v44; // st1
  double v45; // st1
  double v46; // st1
  double v47; // st1
  double v48; // st1
  long double v49; // st6
  double v50; // st7
  double v51; // st5
  double v52; // st6
  double v53; // st3
  double v54; // st4
  int j; // ecx
  double v56; // st6
  float v58; // [esp+0h] [ebp-1F4h]
  float v59; // [esp+4h] [ebp-1F0h]
  _BYTE v60[60]; // [esp+14h] [ebp-1E0h] BYREF
  float v61; // [esp+50h] [ebp-1A4h]
  float v62; // [esp+5Ch] [ebp-198h]
  float v63; // [esp+68h] [ebp-18Ch]
  float v64; // [esp+74h] [ebp-180h]
  float v65; // [esp+80h] [ebp-174h]
  float v66; // [esp+8Ch] [ebp-168h]
  float v67; // [esp+A4h] [ebp-150h] BYREF
  float v68; // [esp+A8h] [ebp-14Ch]
  float v69; // [esp+ACh] [ebp-148h]
  float v70; // [esp+B0h] [ebp-144h]
  float v71; // [esp+B4h] [ebp-140h]
  float v72; // [esp+B8h] [ebp-13Ch]
  float v73; // [esp+BCh] [ebp-138h]
  float v74; // [esp+C0h] [ebp-134h]
  float v75; // [esp+C4h] [ebp-130h]
  float v76; // [esp+C8h] [ebp-12Ch]
  float v77; // [esp+CCh] [ebp-128h]
  float v78; // [esp+D0h] [ebp-124h]
  float v79; // [esp+D4h] [ebp-120h]
  float v80; // [esp+D8h] [ebp-11Ch]
  float v81; // [esp+DCh] [ebp-118h]
  float v82; // [esp+E0h] [ebp-114h]
  float v83; // [esp+E4h] [ebp-110h]
  float v84; // [esp+E8h] [ebp-10Ch]
  float v85; // [esp+ECh] [ebp-108h]
  float v86; // [esp+F0h] [ebp-104h]
  float v87; // [esp+F4h] [ebp-100h]
  float v88; // [esp+F8h] [ebp-FCh]
  float v89; // [esp+FCh] [ebp-F8h]
  float v90; // [esp+100h] [ebp-F4h]
  float v91[24]; // [esp+104h] [ebp-F0h] BYREF
  float v92[3]; // [esp+164h] [ebp-90h] BYREF
  float v93[3]; // [esp+170h] [ebp-84h] BYREF
  float v94; // [esp+17Ch] [ebp-78h]
  int v95; // [esp+180h] [ebp-74h] BYREF
  int v96; // [esp+184h] [ebp-70h] BYREF
  float v97; // [esp+188h] [ebp-6Ch]
  float v98; // [esp+18Ch] [ebp-68h]
  float v99; // [esp+190h] [ebp-64h] BYREF
  float v100; // [esp+194h] [ebp-60h]
  float v101; // [esp+198h] [ebp-5Ch]
  float v102; // [esp+19Ch] [ebp-58h]
  float v103; // [esp+1A0h] [ebp-54h]
  float v104; // [esp+1A4h] [ebp-50h]
  float v105; // [esp+1A8h] [ebp-4Ch]
  float v106; // [esp+1ACh] [ebp-48h]
  float v107; // [esp+1B0h] [ebp-44h]
  float v108; // [esp+1B4h] [ebp-40h]
  float v109; // [esp+1B8h] [ebp-3Ch]
  float v110; // [esp+1BCh] [ebp-38h]
  float v111; // [esp+1C0h] [ebp-34h]
  float v112; // [esp+1C4h] [ebp-30h]
  float v113; // [esp+1C8h] [ebp-2Ch]
  float v114; // [esp+1CCh] [ebp-28h]
  float v115; // [esp+1D0h] [ebp-24h]
  float v116; // [esp+1D4h] [ebp-20h]
  float v117; // [esp+1D8h] [ebp-1Ch]
  float v118; // [esp+1DCh] [ebp-18h]
  float v119; // [esp+1E0h] [ebp-14h]
  float v120; // [esp+1E4h] [ebp-10h]
  float v121; // [esp+1E8h] [ebp-Ch]
  float v122; // [esp+1ECh] [ebp-8h]
  float v123; // [esp+1F0h] [ebp-4h]
  float v124; // [esp+1FCh] [ebp+8h]
  float v125; // [esp+200h] [ebp+Ch]

  v3 = a2[1];
  v5 = *a2;
  v123 = a2[2];
  v121 = v5;
  v118 = *a3;
  v122 = v3;
  v6 = a3[2];
  v119 = a3[1];
  v120 = v6;
  v7 = (v5 + v118) * 0.5;
  v8 = (v3 + v119) * 0.5;
  v100 = v8;
  v9 = 0.5 * (v123 + v6);
  v101 = v9;
  v67 = v118 - v7;
  v73 = v67;
  v79 = v67;
  v85 = v67;
  v68 = v119 - v8;
  v71 = v68;
  v80 = v68;
  v83 = v68;
  v69 = v6 - v9;
  v72 = v69;
  v75 = v69;
  v78 = v69;
  v70 = v5 - v7;
  v76 = v70;
  v82 = v70;
  v88 = v70;
  v74 = v3 - v8;
  v77 = v74;
  v86 = v74;
  v89 = v74;
  v81 = v123 - v9;
  v84 = v81;
  v87 = v81;
  v90 = v81;
  v121 = -v7;
  v122 = -v100;
  v123 = -v101;
  sub_101EE440(this + 688);
  for ( i = 0; i < 24; i += 3 )
    sub_101ED860((char *)&v67 + i * 4, v60, &v91[i]);
  v99 = -v121;
  v100 = -v122;
  v101 = -v123;
  sub_101ED860(&v99, v60, v92);
  sub_102361D0(&v96, &v95);
  v11 = (double)v96;
  v125 = v11;
  v12 = (double)v95;
  v124 = v12;
  v13 = this[684] * 0.5;
  v97 = tan(0.017453292 * v13);
  v59 = v11 / v12;
  v58 = v13;
  sub_101F0720(v58, v59);
  v14 = 0;
  v15 = v91;
  v16 = tan(v13 * 0.017453292);
  v94 = v16;
  v17 = 0.0;
  v98 = 0.0;
  v18 = v97;
  do
  {
    v19 = fabs(v15[2] / v16) - *v15;
    v20 = fabs(v15[1] / v18) - *v15;
    *(&v102 + 2 * v14) = v20;
    v21 = v20;
    v22 = v19;
    v23 = v21;
    *(&v103 + 2 * v14) = v19;
    if ( v19 > v21 )
      v23 = v22;
    if ( v23 >= v17 )
      v17 = v23;
    v24 = fabs(v15[5] / v16) - v15[3];
    v25 = fabs(v15[4] / v18) - v15[3];
    *(&v104 + 2 * v14) = v25;
    v26 = v25;
    v27 = v24;
    v28 = v26;
    *(&v105 + 2 * v14) = v24;
    if ( v24 > v26 )
      v28 = v27;
    if ( v28 >= v17 )
      v17 = v28;
    v29 = fabs(v15[8] / v16) - v15[6];
    v30 = fabs(v15[7] / v18) - v15[6];
    *(&v106 + 2 * v14) = v30;
    v31 = v30;
    v32 = v29;
    v33 = v31;
    *(&v107 + 2 * v14) = v29;
    if ( v29 > v31 )
      v33 = v32;
    if ( v33 >= v17 )
      v17 = v33;
    v34 = fabs(v15[11] / v16) - v15[9];
    v35 = fabs(v15[10] / v18) - v15[9];
    *(&v108 + 2 * v14) = v35;
    v36 = v35;
    v37 = v34;
    v38 = v36;
    *(&v109 + 2 * v14) = v34;
    if ( v34 > v36 )
      v38 = v37;
    if ( v38 >= v17 )
      v17 = v38;
    v14 += 4;
    v15 += 12;
  }
  while ( v14 < 8 );
  v39 = v18;
  v40 = v17;
  v98 = v17;
  v41 = v91[0] + v17;
  v102 = (v91[1] / (v41 * v39) + 1.0) * 0.5 * v125;
  v103 = (v91[2] / (v41 * v16) + 1.0) * 0.5 * v124;
  v42 = v91[3] + v17;
  v61 = v42;
  v104 = v91[4] / (v42 * v39);
  v104 = (v104 + 1.0) * 0.5 * v125;
  v105 = (v91[5] / (v61 * v16) + 1.0) * 0.5 * v124;
  v43 = v91[6] + v17;
  v62 = v43;
  v106 = v91[7] / (v43 * v39);
  v106 = (v106 + 1.0) * 0.5 * v125;
  v107 = (v91[8] / (v62 * v16) + 1.0) * 0.5 * v124;
  v44 = v91[9] + v17;
  v63 = v44;
  v108 = v91[10] / (v44 * v39);
  v108 = (v108 + 1.0) * 0.5 * v125;
  v109 = (v91[11] / (v63 * v16) + 1.0) * 0.5 * v124;
  v45 = v91[12] + v17;
  v64 = v45;
  v110 = v91[13] / (v45 * v39);
  v110 = (v110 + 1.0) * 0.5 * v125;
  v111 = (v91[14] / (v64 * v16) + 1.0) * 0.5 * v124;
  v46 = v91[15] + v17;
  v65 = v46;
  v112 = v91[16] / (v46 * v39);
  v112 = (v112 + 1.0) * 0.5 * v125;
  v113 = (v91[17] / (v65 * v16) + 1.0) * 0.5 * v124;
  v47 = v91[18] + v17;
  v66 = v47;
  v114 = v91[19] / (v47 * v39);
  v114 = (v114 + 1.0) * 0.5 * v125;
  v115 = (v91[20] / (v66 * v16) + 1.0) * 0.5 * v124;
  v48 = v91[21] + v17;
  v116 = v125 * ((v91[22] / (v39 * v48) + 1.0) * 0.5);
  v49 = 0.5 * (v91[23] / (v16 * v48) + 1.0);
  v50 = v40;
  v117 = v49 * v124;
  v51 = 99999.0;
  v122 = 99999.0;
  v52 = 99999.0;
  v123 = 99999.0;
  v53 = -99999.0;
  v119 = -99999.0;
  v54 = -99999.0;
  v120 = -99999.0;
  for ( j = 0; j < 8; j += 4 )
  {
    if ( *(&v102 + 2 * j) <= v52 )
      v52 = *(&v102 + 2 * j);
    if ( *(&v103 + 2 * j) <= v51 )
      v51 = *(&v103 + 2 * j);
    if ( *(&v102 + 2 * j) >= v54 )
      v54 = *(&v102 + 2 * j);
    if ( v53 <= *(&v103 + 2 * j) )
      v53 = *(&v103 + 2 * j);
    if ( *(&v104 + 2 * j) <= v52 )
      v52 = *(&v104 + 2 * j);
    if ( *(&v105 + 2 * j) <= v51 )
      v51 = *(&v105 + 2 * j);
    if ( *(&v104 + 2 * j) >= v54 )
      v54 = *(&v104 + 2 * j);
    if ( v53 <= *(&v105 + 2 * j) )
      v53 = *(&v105 + 2 * j);
    if ( *(&v106 + 2 * j) <= v52 )
      v52 = *(&v106 + 2 * j);
    if ( *(&v107 + 2 * j) <= v51 )
      v51 = *(&v107 + 2 * j);
    if ( *(&v106 + 2 * j) >= v54 )
      v54 = *(&v106 + 2 * j);
    if ( v53 <= *(&v107 + 2 * j) )
      v53 = *(&v107 + 2 * j);
    if ( *(&v108 + 2 * j) <= v52 )
      v52 = *(&v108 + 2 * j);
    if ( *(&v109 + 2 * j) <= v51 )
      v51 = *(&v109 + 2 * j);
    if ( *(&v108 + 2 * j) >= v54 )
      v54 = *(&v108 + 2 * j);
    if ( v53 <= *(&v109 + 2 * j) )
      v53 = *(&v109 + 2 * j);
  }
  v120 = v53;
  v119 = v54;
  v123 = v51;
  v122 = v52;
  v93[0] = v50 - v92[0];
  v93[1] = -v92[1];
  v93[2] = -v92[2];
  sub_101F4560(this + 688, v93);
  v122 = (v119 + v122) * 0.5;
  v123 = (v120 + v123) * 0.5;
  v120 = v124 * 0.5 / v124 * 2.0 - 0.5;
  v56 = v97 * v98;
  v119 = (v125 * 0.5 / v125 * 2.0 - 0.5) * v56;
  v122 = v119 - (v122 / v125 * 2.0 - 0.5) * v56;
  v123 = v120 * (v98 * v94) - (2.0 * (v123 / v124) - 0.5) * (v98 * v94);
  sub_101F5960(this);
  v99 = 0.0;
  v100 = -v122;
  v101 = -v123;
  sub_101F5930(&v99);
  return sub_101F5A00(this);
}
