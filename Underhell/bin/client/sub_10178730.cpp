// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10178730(int a1@<ecx>, float a2@<ebx>, float a3@<edi>, int a4@<esi>, double a5)
{
  double v6; // st7
  double v7; // st6
  long double v8; // st5
  double v9; // st4
  double v10; // st5
  double v11; // st4
  double v12; // rt0
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // rt1
  double v17; // st2
  float *v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // st5
  int v22; // ebx
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // st3
  double v29; // st7
  int v30; // eax
  int v31; // edi
  double v32; // st7
  float *v33; // eax
  double v34; // st6
  double v35; // st5
  double v36; // st4
  double v37; // st6
  double v38; // rtt
  float *v39; // eax
  unsigned int v40; // esi
  float *v41; // eax
  float *v42; // eax
  double v43; // st7
  double v44; // st6
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  double v48; // st7
  double v49; // st6
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  double v53; // st7
  double v54; // st6
  float *v55; // eax
  float *v56; // eax
  float *v57; // eax
  double v58; // st7
  double v59; // st6
  double v60; // st7
  double v61; // st6
  double v62; // st5
  double v63; // st4
  double v64; // st6
  double v65; // rt2
  float *v66; // eax
  unsigned int v67; // esi
  float *v68; // eax
  float *v69; // eax
  double v70; // st7
  double v71; // st6
  float *v72; // eax
  float *v73; // eax
  float *v74; // eax
  double v75; // st7
  double v76; // st6
  float *v77; // eax
  float *v78; // eax
  float *v79; // eax
  double v80; // st7
  double v81; // st6
  float *v82; // eax
  double v83; // st7
  float *v84; // eax
  double v85; // rtt
  double v86; // rt0
  float *v87; // eax
  float *v88; // eax
  double v89; // st7
  float *v90; // eax
  double v91; // rt2
  double v92; // rtt
  float *v93; // eax
  float *v94; // eax
  double v95; // st7
  float *v96; // eax
  double v97; // rt1
  double v98; // rt2
  float *v99; // eax
  float *v100; // eax
  float *v101; // eax
  double v102; // st7
  double v103; // rt0
  double v104; // rt1
  float *v105; // eax
  float *v106; // eax
  int v107; // eax
  _DWORD v109[39]; // [esp+Ch] [ebp-22Ch] BYREF
  int v110; // [esp+A8h] [ebp-190h]
  int v111; // [esp+B0h] [ebp-188h]
  char v112; // [esp+BCh] [ebp-17Ch]
  int v113; // [esp+C0h] [ebp-178h]
  int v114; // [esp+C4h] [ebp-174h]
  char v115; // [esp+C8h] [ebp-170h]
  _DWORD v116[3]; // [esp+CCh] [ebp-16Ch] BYREF
  char v117; // [esp+D8h] [ebp-160h]
  int v118; // [esp+DCh] [ebp-15Ch]
  int v119; // [esp+E0h] [ebp-158h]
  int v120; // [esp+E4h] [ebp-154h]
  int v121; // [esp+E8h] [ebp-150h]
  int v122; // [esp+ECh] [ebp-14Ch]
  char v123; // [esp+FCh] [ebp-13Ch]
  _DWORD v124[41]; // [esp+100h] [ebp-138h] BYREF
  int v125; // [esp+1A4h] [ebp-94h]
  int v126; // [esp+1ACh] [ebp-8Ch]
  int v127; // [esp+1B0h] [ebp-88h]
  float *v128; // [esp+1B8h] [ebp-80h]
  float *v129; // [esp+1BCh] [ebp-7Ch]
  float *v130; // [esp+1C0h] [ebp-78h]
  unsigned int *v131; // [esp+1E0h] [ebp-58h]
  float v132; // [esp+1F4h] [ebp-44h]
  float v133; // [esp+1F8h] [ebp-40h]
  float v134; // [esp+1FCh] [ebp-3Ch]
  float v135; // [esp+200h] [ebp-38h]
  float v136; // [esp+204h] [ebp-34h]
  float v137; // [esp+208h] [ebp-30h]
  float v138; // [esp+20Ch] [ebp-2Ch]
  float v139; // [esp+210h] [ebp-28h]
  float v140; // [esp+214h] [ebp-24h]
  float v141; // [esp+218h] [ebp-20h]
  float v142; // [esp+21Ch] [ebp-1Ch]
  float v143; // [esp+220h] [ebp-18h]
  int v144; // [esp+224h] [ebp-14h]
  float v145; // [esp+228h] [ebp-10h]
  float v146; // [esp+22Ch] [ebp-Ch]
  float v147; // [esp+230h] [ebp-8h]
  float v148; // [esp+234h] [ebp-4h]
  float v149; // [esp+244h] [ebp+Ch]

  (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 20))(a1, LODWORD(a5), HIDWORD(a5), a4);
  v6 = *(float *)(a1 + 48) * *(float *)(a1 + 44);
  v7 = v6 - *(float *)(a1 + 60);
  if ( v6 < 0.0 )
    v6 = 0.0;
  if ( v7 < 0.0 )
    v7 = 0.0;
  if ( 0.0 != v6 || 0.0 != v7 )
  {
    if ( 0.0 != *(float *)(a1 + 52) )
    {
      if ( *(float *)(a1 + 52) <= v6 )
        v6 = *(float *)(a1 + 52);
      if ( *(float *)(a1 + 52) <= v7 )
        v7 = *(float *)(a1 + 52);
    }
    v8 = fabs(v6 - v7);
    if ( *(float *)(a1 + 60) == 0.0 )
      v9 = 0.0099999998;
    else
      v9 = *(float *)(a1 + 60);
    v147 = a2;
    v146 = a3;
    v137 = v8 / v9;
    v10 = *(float *)(a1 + 32) * v6 + *(float *)(a1 + 20);
    v138 = v10;
    v11 = *(float *)(a1 + 36) * v6 + *(float *)(a1 + 24);
    v139 = v11;
    v12 = v11;
    v13 = v6 * *(float *)(a1 + 40) + *(float *)(a1 + 28);
    v140 = v13;
    v14 = *(float *)(a1 + 32) * v7 + *(float *)(a1 + 20);
    v141 = v14;
    v15 = *(float *)(a1 + 36) * v7 + *(float *)(a1 + 24);
    v142 = v15;
    v16 = v15;
    v17 = v7 * *(float *)(a1 + 40) + *(float *)(a1 + 28);
    v143 = v17;
    v132 = v10 - v14;
    v133 = v12 - v16;
    v134 = v13 - v17;
    v18 = sub_101422C0();
    v19 = v138 - *v18;
    v20 = v139 - v18[1];
    v21 = v140 - v18[2];
    v146 = v21 * v133 - v20 * v134;
    v147 = v134 * v19 - v21 * v132;
    v148 = v20 * v132 - v19 * v133;
    off_103EDFEC();
    sub_10016C20((int)v109);
    v22 = (*(int (__thiscall **)(int, float, float, float))(*(_DWORD *)dword_1047C96C + 380))(
            dword_1047C96C,
            COERCE_FLOAT(LODWORD(v146)),
            COERCE_FLOAT(LODWORD(v147)),
            COERCE_FLOAT(LODWORD(v148)));
    if ( v22 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
    if ( *(_DWORD *)(dword_10445234 + 48) )
    {
      v149 = (double)sub_10076740() * 0.5;
      v23 = sub_101422C0();
      v132 = v141 - *v23;
      v133 = v142 - v23[1];
      v134 = v143 - v23[2];
      v24 = sub_101422E0();
      v25 = v24[1] * v133 + v132 * *v24 + v24[2] * v134;
      v26 = v149;
      v27 = *(float *)(a1 + 56) * v149 / v25;
      if ( v27 >= 0.5 )
      {
        v136 = 1.0;
        v29 = *(float *)(a1 + 56);
      }
      else
      {
        v28 = (v27 - 0.25) * 0.69999999 * 0.5714286 + 0.30000001;
        v136 = v28;
        if ( v28 <= 1.0 )
        {
          if ( v28 < 0.25 )
            v136 = 0.25;
          v29 = v25 * 0.5 / v26;
        }
        else
        {
          v136 = 1.0;
          v29 = v25 * 0.5 / v26;
        }
      }
      v30 = *(_DWORD *)(a1 + 12);
      v145 = v29;
      v31 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v22 + 224))(v22, 1, 0, 0, v30);
      v113 = v31;
      v115 = 1;
      v114 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 40))(v31, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v113 + 68))(v113, 8, 12, v109);
      v121 = v110;
      v118 = v31 + 4;
      v117 = v112;
      v120 = 0;
      v119 = 12;
      v123 = 0;
      v116[0] = v111;
      sub_10016990((int)v124, v31, 8, v109);
      v122 = 0;
      sub_10016A00(v124);
      v32 = v136 * 255.0;
      v33 = v128;
      v34 = -v145;
      v135 = v34;
      v35 = v146 * v34 + v141;
      v36 = v34;
      v37 = v34 * v147 + v142;
      v38 = v36 * v148 + v143;
      *v128 = v35;
      v33[1] = v37;
      v33[2] = v38;
      v39 = v130;
      *v130 = 1.0;
      v39[1] = 0.0;
      v40 = (unsigned __int8)(int)v32 | (((unsigned __int8)(int)v32 | (((int)v32 | 0xFFFFFF00) << 8)) << 8);
      *v131 = v40;
      v41 = v129;
      *v129 = v146;
      v41[1] = v147;
      v41[2] = v148;
      sub_10016A80(v124);
      v42 = v128;
      v43 = v147 * v145 + v142;
      v44 = v145 * v148 + v143;
      *v128 = v146 * v145 + v141;
      v42[1] = v43;
      v42[2] = v44;
      v45 = v130;
      *v130 = 0.0;
      v45[1] = 0.0;
      *v131 = v40;
      v46 = v129;
      *v129 = v146;
      v46[1] = v147;
      v46[2] = v148;
      sub_10016A80(v124);
      v47 = v128;
      v48 = v147 * v145 + v139;
      v49 = v145 * v148 + v140;
      *v128 = v146 * v145 + v138;
      v47[1] = v48;
      v47[2] = v49;
      v50 = v130;
      *v130 = 0.0;
      v50[1] = v137;
      *v131 = v40;
      v51 = v129;
      *v129 = v146;
      v51[1] = v147;
      v51[2] = v148;
      sub_10016A80(v124);
      v52 = v128;
      v53 = v135 * v147 + v139;
      v54 = v135 * v148 + v140;
      *v128 = v146 * v135 + v138;
      v52[1] = v53;
      v52[2] = v54;
      v55 = v130;
      *v130 = 1.0;
      v55[1] = v137;
      *v131 = v40;
      v56 = v129;
      *v129 = v146;
      v56[1] = v147;
      v56[2] = v148;
      sub_10016A80(v124);
      v57 = v128;
      v58 = v145 + v145;
      v145 = v58;
      v59 = v58;
      v60 = v136 * 64.0;
      v61 = -v59;
      v135 = v61;
      v62 = v146 * v61 + v141;
      v63 = v61;
      v64 = v61 * v147 + v142;
      v65 = v63 * v148 + v143;
      *v128 = v62;
      v57[1] = v64;
      v57[2] = v65;
      v66 = v130;
      *v130 = 1.0;
      v66[1] = 0.0;
      v144 = (int)v60;
      v67 = (unsigned __int8)(int)v60 | (((unsigned __int8)(int)v60 | (((int)v60 | 0xFFFFFF00) << 8)) << 8);
      *v131 = v67;
      v68 = v129;
      *v129 = v146;
      v68[1] = v147;
      v68[2] = v148;
      sub_10016A80(v124);
      v69 = v128;
      v70 = v147 * v145 + v142;
      v71 = v145 * v148 + v143;
      *v128 = v146 * v145 + v141;
      v69[1] = v70;
      v69[2] = v71;
      v72 = v130;
      *v130 = 0.0;
      v72[1] = 0.0;
      *v131 = v67;
      v73 = v129;
      *v129 = v146;
      v73[1] = v147;
      v73[2] = v148;
      sub_10016A80(v124);
      v74 = v128;
      v75 = v147 * v145 + v139;
      v76 = v145 * v148 + v140;
      *v128 = v146 * v145 + v138;
      v74[1] = v75;
      v74[2] = v76;
      v77 = v130;
      *v130 = 0.0;
      v77[1] = v137;
      *v131 = v67;
      v78 = v129;
      *v129 = v146;
      v78[1] = v147;
      v78[2] = v148;
      sub_10016A80(v124);
      v79 = v128;
      v80 = v135 * v147 + v139;
      v81 = v135 * v148 + v140;
      *v128 = v146 * v135 + v138;
      v79[1] = v80;
      v79[2] = v81;
      v82 = v130;
      *v130 = 1.0;
      v82[1] = v137;
      *v131 = v67;
    }
    else
    {
      v31 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v22 + 224))(
              v22,
              1,
              0,
              0,
              *(_DWORD *)(a1 + 12));
      v113 = v31;
      v115 = 1;
      v114 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 40))(v31, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v113 + 68))(v113, 4, 6, v109);
      v120 = 0;
      v123 = 0;
      v118 = v31 + 4;
      v121 = v110;
      v116[0] = v111;
      v119 = 6;
      v117 = v112;
      sub_10016990((int)v124, v31, 4, v109);
      v122 = 0;
      sub_10016A00(v124);
      v83 = -*(float *)(a1 + 56);
      v84 = v128;
      v85 = v147 * v83 + v142;
      v86 = v83 * v148 + v143;
      *v128 = v146 * v83 + v141;
      v84[1] = v85;
      v84[2] = v86;
      v87 = v130;
      *v130 = 1.0;
      v87[1] = 0.0;
      *v131 = -1;
      v88 = v129;
      *v129 = v146;
      v88[1] = v147;
      v88[2] = v148;
      sub_10016A80(v124);
      v89 = *(float *)(a1 + 56);
      v90 = v128;
      v91 = v147 * v89 + v142;
      v92 = v89 * v148 + v143;
      *v128 = v146 * v89 + v141;
      v90[1] = v91;
      v90[2] = v92;
      v93 = v130;
      *v130 = 0.0;
      v93[1] = 0.0;
      *v131 = -1;
      v94 = v129;
      *v129 = v146;
      v94[1] = v147;
      v94[2] = v148;
      sub_10016A80(v124);
      v95 = *(float *)(a1 + 56);
      v96 = v128;
      v97 = v147 * v95 + v139;
      v98 = v95 * v148 + v140;
      *v128 = v146 * v95 + v138;
      v96[1] = v97;
      v96[2] = v98;
      v99 = v130;
      *v130 = 0.0;
      v99[1] = v137;
      *v131 = -1;
      v100 = v129;
      *v129 = v146;
      v100[1] = v147;
      v100[2] = v148;
      sub_10016A80(v124);
      v101 = v128;
      v102 = -*(float *)(a1 + 56);
      v103 = v147 * v102 + v139;
      v104 = v102 * v148 + v140;
      *v128 = v146 * v102 + v138;
      v101[1] = v103;
      v101[2] = v104;
      v105 = v130;
      *v130 = 1.0;
      v105[1] = v137;
      *v131 = -1;
    }
    v106 = v129;
    *v129 = v146;
    v106[1] = v147;
    v106[2] = v148;
    sub_10016A80(v124);
    if ( v115 )
    {
      switch ( v114 )
      {
        case 4:
          v107 = 2 * v127 - 2;
          break;
        case 5:
          v107 = 2 * v127;
          break;
        case 6:
          v107 = 3 * v127 - 6;
          break;
        case 7:
          v107 = 6 * v127 / 4;
          break;
        case 8:
          v107 = 0;
          break;
        default:
          v107 = v127;
          break;
      }
      sub_10016B00(v116, v114, v107);
    }
    (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v113 + 80))(v113, v127, v120, v109);
    v118 = 0;
    v119 = 0;
    v126 = 0;
    v125 = 0;
    v124[19] = -1;
    v113 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 48))(v31, -1, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 12))(v22);
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 4))(v22);
    if ( v125 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v125 + 8))(v125) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v125 + 16))(v125);
    if ( v118 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v118 + 8))(v118) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v118 + 16))(v118);
    }
  }
}
