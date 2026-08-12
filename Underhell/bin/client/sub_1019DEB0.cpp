// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1019DEB0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        float a5,
        float a6,
        int a7,
        float a8,
        float a9,
        int a10,
        float a11,
        float a12)
{
  double v12; // st7
  int (__thiscall *v14)(int, const char *, _DWORD, _DWORD, _DWORD, int, int, int); // edx
  int v15; // esi
  int v16; // ebx
  int v17; // ebx
  int v18; // esi
  double v19; // st7
  double (__thiscall *v20)(int, _DWORD, _DWORD); // edx
  double v21; // st7
  double (__thiscall *v22)(int, _DWORD, _DWORD); // edx
  double v23; // st7
  int v24; // edx
  double v25; // st7
  long double v26; // st4
  long double v27; // st3
  long double v28; // st2
  long double v29; // rt2
  long double v30; // st1
  long double v31; // st2
  long double v32; // st4
  long double v33; // st3
  long double v34; // st2
  long double v35; // rt2
  long double v36; // st5
  long double v37; // st2
  long double v38; // st1
  long double v39; // st0
  long double v40; // rtt
  long double v41; // st1
  long double v42; // rt0
  long double v43; // st1
  long double v44; // st6
  float *v45; // eax
  double v46; // rtt
  long double v47; // st2
  long double v48; // rt0
  long double v49; // st2
  long double v50; // rt1
  long double v51; // st2
  long double v52; // st4
  float *v53; // eax
  long double v54; // rt1
  double v55; // st4
  long double v56; // st5
  float *v57; // eax
  float *v58; // eax
  double v59; // st6
  double v60; // st5
  double v61; // rt2
  double v62; // st5
  double v63; // rtt
  double v64; // st5
  double v65; // rt0
  double v66; // st5
  double v67; // rt1
  double v68; // st5
  float *v69; // eax
  float *v70; // eax
  double v71; // st3
  double v72; // st4
  double v73; // st3
  double v74; // rt1
  double v75; // st4
  double v76; // rt2
  double v77; // st4
  double v78; // st5
  float *v79; // eax
  float *v80; // eax
  double v81; // st5
  double v82; // rt2
  double v83; // st5
  double v84; // rtt
  double v85; // st5
  int v86; // eax
  int v87; // esi
  _DWORD v90[44]; // [esp+54h] [ebp-274h] BYREF
  char v91; // [esp+104h] [ebp-1C4h]
  int v92; // [esp+108h] [ebp-1C0h]
  int v93; // [esp+10Ch] [ebp-1BCh]
  char v94; // [esp+110h] [ebp-1B8h]
  int v95[3]; // [esp+114h] [ebp-1B4h] BYREF
  char v96; // [esp+120h] [ebp-1A8h]
  int v97; // [esp+124h] [ebp-1A4h]
  int v98; // [esp+128h] [ebp-1A0h]
  int v99; // [esp+12Ch] [ebp-19Ch]
  int v100; // [esp+130h] [ebp-198h]
  int v101; // [esp+134h] [ebp-194h]
  char v102; // [esp+144h] [ebp-184h]
  _DWORD v103[41]; // [esp+148h] [ebp-180h] BYREF
  int v104; // [esp+1ECh] [ebp-DCh]
  int v105; // [esp+1F4h] [ebp-D4h]
  int v106; // [esp+1F8h] [ebp-D0h]
  float *v107; // [esp+200h] [ebp-C8h]
  float *v108; // [esp+208h] [ebp-C0h]
  int *v109; // [esp+228h] [ebp-A0h]
  float v110; // [esp+244h] [ebp-84h]
  float v111; // [esp+248h] [ebp-80h]
  float v112; // [esp+24Ch] [ebp-7Ch]
  float v113; // [esp+258h] [ebp-70h]
  float v114; // [esp+25Ch] [ebp-6Ch]
  float v115; // [esp+260h] [ebp-68h]
  float v116; // [esp+264h] [ebp-64h]
  float v117; // [esp+26Ch] [ebp-5Ch]
  float v118; // [esp+270h] [ebp-58h]
  float v119; // [esp+274h] [ebp-54h]
  float v120; // [esp+278h] [ebp-50h]
  int v121; // [esp+27Ch] [ebp-4Ch]
  float v122; // [esp+280h] [ebp-48h]
  float v123; // [esp+284h] [ebp-44h]
  float v124; // [esp+288h] [ebp-40h]
  float v125; // [esp+28Ch] [ebp-3Ch]
  float v126; // [esp+290h] [ebp-38h]
  float v127; // [esp+294h] [ebp-34h]
  float v128; // [esp+298h] [ebp-30h]
  float v129; // [esp+29Ch] [ebp-2Ch]
  float v130; // [esp+2A0h] [ebp-28h]
  float v131; // [esp+2A4h] [ebp-24h]
  float v132; // [esp+2A8h] [ebp-20h]
  float v133; // [esp+2ACh] [ebp-1Ch]
  float v134; // [esp+2B0h] [ebp-18h]
  float v135; // [esp+2B4h] [ebp-14h]
  float v136; // [esp+2B8h] [ebp-10h]
  float v137; // [esp+2BCh] [ebp-Ch]
  float v138; // [esp+2C0h] [ebp-8h]
  float v139; // [esp+2C4h] [ebp-4h]
  float v140; // [esp+2E8h] [ebp+20h]
  float v141; // [esp+2ECh] [ebp+24h]
  float v142; // [esp+2ECh] [ebp+24h]
  float v143; // [esp+2ECh] [ebp+24h]

  v12 = a11 * 0.16666667;
  v14 = *(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, int, int, int))(*(_DWORD *)dword_1047C96C + 280);
  v115 = a8 * v12;
  v116 = v12 * a9;
  v15 = v14(dword_1047C96C, "effects/splashwake1", 0, 0, 0, a3, a4, a2);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v121 = v16;
  if ( v16 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
  v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v16 + 224))(v16, 0, 0, 0, v15);
  sub_10016C20((int)v90);
  v92 = v17;
  v94 = 1;
  v93 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 40))(v17, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v92 + 68))(v92, 24, 36, v90);
  v100 = v90[39];
  v97 = v17 + 4;
  v18 = 0;
  v96 = v91;
  v99 = 0;
  v98 = 36;
  v102 = 0;
  v95[0] = v90[41];
  v101 = 0;
  sub_10016990((int)v103, v17, 24, v90);
  v101 = 0;
  sub_10016A00(v103);
  v139 = 0.0;
  v140 = sub_100260E0(a12, 128.0, 600.0, 0.050000001, 0.25) * 255.0 + 8388608.0;
  do
  {
    v19 = (double)SLODWORD(v139);
    v20 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v141 = v19;
    v111 = v115 * v19 + a5;
    v112 = v19 * v116 + a6;
    v21 = v20(dword_10413198, -4.0, 4.0);
    v22 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v127 = v21 + v111;
    v23 = v22(dword_10413198, -4.0, 4.0);
    v24 = *(_DWORD *)dword_10413198;
    v128 = v23 + v112;
    v129 = (double)*(int *)(a1 + 2296) + 2.0;
    v142 = v141 * 32.0 * 0.2 + 32.0 + sin(v141 * (*((float *)off_103DC81C + 3) * 5.0)) * 8.0;
    v25 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(v24 + 4))(0.0, 360.0);
    v26 = sin(v25 * 0.017453292);
    v27 = v26 * 0.0;
    v110 = v27;
    v28 = cos(v25 * 0.017453292);
    v29 = v28 * 0.0;
    v30 = v28 - v27;
    v117 = v30;
    v31 = v29 - v26;
    v32 = v30;
    v118 = v31;
    v33 = v31;
    v34 = v29 - v110;
    v119 = v34;
    v35 = v34;
    v36 = 0.017453292 * (v25 + 90.0);
    v37 = sin(v36);
    v38 = v37 * 0.0;
    v113 = v37;
    v114 = v38;
    v39 = cos(v36);
    v40 = v39 * 0.0;
    v41 = v39 - v38;
    v124 = v41;
    v42 = v41;
    v43 = v40 - v113;
    v125 = v43;
    v126 = v40 - v114;
    v136 = 8388863.0;
    v137 = 8388863.0;
    v138 = 8388863.0;
    v139 = v140;
    v44 = v42;
    *v109 = LOBYTE(v136) | ((LOBYTE(v137) | ((LOBYTE(v138) | (LOBYTE(v139) << 8)) << 8)) << 8);
    v45 = v108;
    *v108 = 0.0;
    v45[1] = 1.0;
    v46 = -v142;
    v47 = v32 * v46 + v127;
    v122 = v47;
    v48 = v47;
    v49 = v33 * v46 + v128;
    v120 = v49;
    v50 = v49;
    v51 = v35 * v46 + v129;
    v123 = v51;
    v135 = v44 * v46;
    v130 = v48 + v44 * v46;
    v133 = v43 * v46;
    v52 = v50 + v43 * v46;
    v53 = v107;
    v131 = v52;
    v54 = v52;
    v55 = v46 * v126;
    v134 = v55;
    v56 = v51 + v55;
    v132 = v56;
    *v107 = v130;
    v53[1] = v54;
    v53[2] = v56;
    sub_10016A80(v103);
    v139 = 8388863.0;
    v138 = 8388863.0;
    v137 = 8388863.0;
    v136 = v140;
    *v109 = LOBYTE(v139) | ((LOBYTE(v138) | ((LOBYTE(v137) | (LOBYTE(v136) << 8)) << 8)) << 8);
    v57 = v108;
    *v108 = 0.0;
    v57[1] = 0.0;
    v58 = v107;
    v59 = v117 * v142 + v127;
    v137 = v59;
    v60 = v118 * v142 + v128;
    v138 = v60;
    v61 = v60;
    v62 = v142 * v119 + v129;
    v139 = v62;
    v63 = v62;
    v64 = v59 + v135;
    v130 = v64;
    v65 = v64;
    v66 = v61 + v133;
    v131 = v66;
    v67 = v66;
    v68 = v63 + v134;
    v132 = v68;
    *v107 = v65;
    v58[1] = v67;
    v58[2] = v68;
    sub_10016A80(v103);
    v136 = 8388863.0;
    v135 = 8388863.0;
    v133 = 8388863.0;
    v134 = v140;
    *v109 = LOBYTE(v136) | ((LOBYTE(v135) | ((LOBYTE(v133) | (LOBYTE(v134) << 8)) << 8)) << 8);
    v69 = v108;
    *v108 = 1.0;
    v69[1] = 0.0;
    v70 = v107;
    v71 = v124 * v142;
    v136 = v71;
    v72 = v137 + v71;
    v130 = v72;
    v73 = v125 * v142;
    v137 = v73;
    v74 = v72;
    v75 = v138 + v73;
    v131 = v75;
    v76 = v75;
    v77 = v142 * v126;
    v138 = v77;
    v78 = v139 + v77;
    v132 = v78;
    *v107 = v74;
    v70[1] = v76;
    v70[2] = v78;
    sub_10016A80(v103);
    v135 = 8388863.0;
    v133 = 8388863.0;
    v134 = 8388863.0;
    v143 = v140;
    *v109 = LOBYTE(v135) | ((LOBYTE(v133) | ((LOBYTE(v134) | (LOBYTE(v143) << 8)) << 8)) << 8);
    v79 = v108;
    *v108 = 1.0;
    v79[1] = 1.0;
    v80 = v107;
    v81 = v122 + v136;
    v130 = v81;
    v82 = v81;
    v83 = v120 + v137;
    v131 = v83;
    v84 = v83;
    v85 = v123 + v138;
    v132 = v85;
    *v107 = v82;
    v80[1] = v84;
    v80[2] = v85;
    sub_10016A80(v103);
    ++v18;
    v139 = *(float *)&v18;
  }
  while ( v18 < 6 );
  if ( v94 )
  {
    switch ( v93 )
    {
      case 4:
        v86 = 2 * v106 - 2;
        break;
      case 5:
        v86 = 2 * v106;
        break;
      case 6:
        v86 = 3 * v106 - 6;
        break;
      case 7:
        v86 = 6 * v106 / 4;
        break;
      case 8:
        v86 = 0;
        break;
      default:
        v86 = v106;
        break;
    }
    sub_10016B00(v95, v93, v86);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v92 + 80))(v92, v106, v99, v90);
  v97 = 0;
  v98 = 0;
  v105 = 0;
  v104 = 0;
  v103[19] = -1;
  v92 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 48))(v17, -1, 0);
  if ( v104 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v104 + 8))(v104) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v104 + 16))(v104);
  if ( v97 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v97 + 8))(v97) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v97 + 16))(v97);
  v87 = v121;
  (*(void (__thiscall **)(int))(*(_DWORD *)v121 + 12))(v121);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v87 + 4))(v87);
}
