void __thiscall sub_1021DC10(int this, int a2, float a3, int a4)
{
  int v4; // ebx
  _DWORD *i; // esi
  int v7; // ecx
  int v8; // eax
  float *v9; // ecx
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // rtt
  double v14; // st5
  double v15; // st7
  double v16; // st4
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // ebx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  double v27; // st4
  double v28; // st3
  double v29; // rt0
  double v30; // st3
  double v31; // st7
  double v32; // st2
  double v33; // st1
  double v34; // rt1
  double v35; // st1
  double v36; // st3
  double v37; // st1
  double v38; // rt0
  int v39; // ecx
  int v40; // edx
  float *v41; // ebx
  double v42; // rt2
  double v43; // st1
  double v44; // st2
  float *v45; // eax
  int v46; // ebx
  int v47; // ecx
  float *v48; // ecx
  double v49; // st5
  double v50; // st1
  double v51; // st3
  double v52; // st0
  int v53; // ecx
  int v54; // edx
  double v55; // rt2
  double v56; // st1
  double v57; // st5
  float *v58; // eax
  int v59; // ebx
  int v60; // ecx
  float *v61; // ecx
  double v62; // st2
  double v63; // rt2
  double v64; // st1
  double v65; // st2
  double v66; // st1
  double v67; // st0
  int v68; // ecx
  int v69; // edx
  double v70; // rt0
  double v71; // st1
  double v72; // st2
  float *v73; // eax
  int v74; // ebx
  int v75; // ecx
  float *v76; // ecx
  double v77; // st5
  double v78; // rt0
  double v79; // st1
  double v80; // st5
  double v81; // st1
  double v82; // st0
  int v83; // ecx
  int v84; // edx
  double v85; // rt2
  double v86; // st1
  float *v87; // eax
  int v88; // ebx
  int v89; // ecx
  float *v90; // ecx
  double v91; // st2
  double v92; // rt2
  double v93; // st1
  double v94; // st1
  double v95; // st3
  double v96; // st0
  double v97; // rtt
  double v98; // rt0
  double v99; // st1
  double v100; // rt2
  double v101; // st1
  double v102; // rt0
  int v103; // ecx
  int v104; // edx
  float *v105; // ebx
  double v106; // rt2
  double v107; // st1
  double v108; // st2
  float *v109; // eax
  int v110; // ebx
  int v111; // ecx
  float *v112; // ecx
  double v113; // rt0
  double v114; // st1
  double v115; // st3
  double v116; // rt2
  double v117; // st1
  double v118; // st3
  double v119; // st5
  double v120; // st1
  double v121; // st0
  float v122; // [esp+4h] [ebp-84h]
  float v123; // [esp+38h] [ebp-50h]
  float v124; // [esp+3Ch] [ebp-4Ch]
  int v125; // [esp+3Ch] [ebp-4Ch]
  float *v126; // [esp+40h] [ebp-48h]
  int v127; // [esp+44h] [ebp-44h]
  int v128; // [esp+44h] [ebp-44h]
  float v129; // [esp+48h] [ebp-40h]
  int v130; // [esp+48h] [ebp-40h]
  int v131; // [esp+4Ch] [ebp-3Ch]
  int v132; // [esp+4Ch] [ebp-3Ch]
  float v133; // [esp+4Ch] [ebp-3Ch]
  int j; // [esp+50h] [ebp-38h]
  float v135; // [esp+54h] [ebp-34h]
  float v136; // [esp+54h] [ebp-34h]
  float v137; // [esp+58h] [ebp-30h]
  float v138; // [esp+5Ch] [ebp-2Ch]
  float v139; // [esp+60h] [ebp-28h]
  float v140; // [esp+60h] [ebp-28h]
  float v141; // [esp+60h] [ebp-28h]
  float v142; // [esp+60h] [ebp-28h]
  float v143; // [esp+64h] [ebp-24h]
  float v144; // [esp+68h] [ebp-20h]
  float v145; // [esp+6Ch] [ebp-1Ch]
  float v146; // [esp+70h] [ebp-18h]
  float v147; // [esp+74h] [ebp-14h]
  float v148; // [esp+78h] [ebp-10h]
  float v149; // [esp+7Ch] [ebp-Ch]
  float v150; // [esp+80h] [ebp-8h]
  float v151; // [esp+84h] [ebp-4h]

  v4 = a2;
  for ( i = *(_DWORD **)(a2 + 6008); i; i = (_DWORD *)i[1495] )
  {
    if ( *(_DWORD *)(i[16] + 492) == *(_DWORD *)(this + 44) )
    {
      v7 = 0;
      for ( j = 0; j < *(_DWORD *)(v4 + 40); ++j )
      {
        v8 = v7 / 4;
        v131 = v7 & 3;
        v9 = (float *)(*(_DWORD *)(v4 + 6068) + 4 * (v131 + v7 / 4 * *(_DWORD *)(v4 + 6324)));
        v126 = (float *)(*(_DWORD *)(v4 + 6076) + 4 * (v131 + v8 * *(_DWORD *)(v4 + 6332)));
        v149 = *v126;
        v150 = v126[4];
        v151 = v126[8];
        v10 = *v9 - v149;
        v146 = v10;
        v11 = v9[4] - v150;
        v12 = v10;
        v147 = v11;
        v13 = v11;
        v14 = v9[8] - v151;
        v15 = v13;
        v148 = v14;
        v16 = *(float *)(this + 52) * a3;
        v129 = v16;
        if ( 0.0 == *(float *)(this + 56) )
        {
          v17 = v16;
        }
        else
        {
          v122 = v15 * v15 + v14 * v14 + v12 * v12;
          v17 = off_103EDFE0(v122) * (*(float *)(v4 + 44) * *(float *)(this + 56)) * v129;
          v129 = v17;
        }
        if ( 0.0 != v17 && sub_10217920((float *)this, (int)i, a4) )
        {
          v124 = *(float *)(v4 + 36) - *(float *)(v4 + 44);
          v123 = *(float *)(v4 + 36);
          if ( !sub_10217900((float *)this) )
          {
            if ( *(float *)(this + 60) > (double)v124 )
              v124 = *(float *)(this + 60);
            v18 = *(float *)(this + 64) + *(float *)(this + 60);
            if ( v18 < v123 )
              v123 = v18;
          }
          v19 = v123 - v124;
          v127 = *(_DWORD *)(a4 + 4);
          v135 = v19;
          v20 = v19 * v129 + *(float *)a4;
          *(float *)a4 = v20;
          v21 = floor(v20) - (double)v127;
          v22 = (int)v21;
          *(_DWORD *)(a4 + 4) = (int)v21 + v127;
          if ( (int)v21 )
          {
            v132 = (int)v21;
            if ( i[18] - *(_DWORD *)(v4 + 40) < v22 )
            {
              v22 = i[18] - *(_DWORD *)(v4 + 40);
              v132 = v22;
            }
            if ( v22 )
            {
              v23 = i[10];
              v24 = 1.0 / (double)v132;
              i[8] = (v23 + v22 + 3) / 4;
              v130 = v23 + v22;
              i[10] = v23 + v22;
              v25 = v135 * v24;
              v26 = v124 + v25;
              v27 = v24 * v146;
              v28 = v147 * v24;
              v144 = v28;
              v29 = v28;
              v30 = v24 * v148;
              v31 = v29;
              v145 = v30;
              v32 = v27 + v149;
              v33 = v29 + v150;
              v138 = v33;
              v34 = v33;
              v35 = v30;
              v36 = v34;
              v37 = v35 + v151;
              if ( v127 != v23 + v22 )
              {
                sub_101F9E60((int)i, v127, v23 + v22 - v127, 261);
                v31 = v144;
                v133 = v25;
                v25 = v133;
                v136 = v26;
                v26 = v136;
                v143 = v27;
                v27 = v143;
                v137 = v32;
                v32 = v137;
                v139 = v37;
                v37 = v139;
                v36 = v138;
              }
              v128 = v23;
              if ( v130 - v23 < 4 )
              {
                v97 = v37;
                v94 = v36;
                v95 = v97;
              }
              else
              {
                v125 = v23 + 1;
                while ( 1 )
                {
                  v39 = v23 / 4;
                  v40 = v23 & 3;
                  v41 = (float *)(i[1525] + 4 * (v40 + v23 / 4 * i[1589]));
                  if ( v123 <= v26 )
                    v26 = v123;
                  v42 = v37;
                  *v41 = v26;
                  v43 = v32;
                  v44 = v26 + v25;
                  v45 = (float *)(i[1517] + 4 * (v40 + v39 * i[1581]));
                  v46 = v39 * i[1583];
                  v47 = i[1519];
                  *v45 = v43;
                  v48 = (float *)(v47 + 4 * (v40 + v46));
                  v45[4] = v36;
                  v45[8] = v42;
                  v49 = v43 + v27;
                  v50 = v36 + v31;
                  v51 = v145;
                  v140 = v42 + v145;
                  if ( *(_BYTE *)(this + 48) )
                    v52 = *v126;
                  else
                    v52 = *v45;
                  *v48 = v52;
                  v53 = v125 / 4;
                  v54 = v125 & 3;
                  if ( v123 <= v44 )
                    v44 = v123;
                  v55 = v50;
                  *(float *)(i[1525] + 4 * (v54 + v125 / 4 * i[1589])) = v44;
                  v56 = v49;
                  v57 = v44 + v25;
                  v58 = (float *)(i[1517] + 4 * (v54 + v53 * i[1581]));
                  v59 = v53 * i[1583];
                  v60 = i[1519];
                  *v58 = v56;
                  v61 = (float *)(v60 + 4 * (v54 + v59));
                  v58[4] = v55;
                  v58[8] = v140;
                  v62 = v55;
                  v63 = v56 + v27;
                  v64 = v62;
                  v65 = v63;
                  v66 = v64 + v31;
                  v141 = v140 + v51;
                  if ( *(_BYTE *)(this + 48) )
                    v67 = *v126;
                  else
                    v67 = *v58;
                  *v61 = v67;
                  v68 = (v125 + 1) / 4;
                  v69 = ((_BYTE)v125 + 1) & 3;
                  if ( v123 <= v57 )
                    v57 = v123;
                  v70 = v66;
                  *(float *)(i[1525] + 4 * (v69 + v68 * i[1589])) = v57;
                  v71 = v65;
                  v72 = v57 + v25;
                  v73 = (float *)(i[1517] + 4 * (v69 + v68 * i[1581]));
                  v74 = v68 * i[1583];
                  v75 = i[1519];
                  *v73 = v71;
                  v76 = (float *)(v75 + 4 * (v69 + v74));
                  v73[4] = v70;
                  v73[8] = v141;
                  v77 = v70;
                  v78 = v71 + v27;
                  v79 = v77;
                  v80 = v78;
                  v81 = v79 + v31;
                  v142 = v141 + v51;
                  if ( *(_BYTE *)(this + 48) )
                    v82 = *v126;
                  else
                    v82 = *v73;
                  *v76 = v82;
                  v83 = (v125 + 2) / 4;
                  v84 = ((_BYTE)v125 - 2) & 3;
                  if ( v123 <= v72 )
                    v72 = v123;
                  v85 = v81;
                  *(float *)(i[1525] + 4 * (v84 + v83 * i[1589])) = v72;
                  v86 = v80;
                  v26 = v72 + v25;
                  v87 = (float *)(i[1517] + 4 * (v84 + v83 * i[1581]));
                  v88 = v83 * i[1583];
                  v89 = i[1519];
                  *v87 = v86;
                  v90 = (float *)(v89 + 4 * (v84 + v88));
                  v87[4] = v85;
                  v87[8] = v142;
                  v91 = v85;
                  v92 = v86 + v27;
                  v93 = v91;
                  v32 = v92;
                  v94 = v93 + v31;
                  v95 = v51 + v142;
                  v96 = *(_BYTE *)(this + 48) ? *v126 : *v87;
                  *v90 = v96;
                  v125 += 4;
                  v23 = v128 + 4;
                  v128 = v23;
                  if ( v23 >= v130 - 3 )
                    break;
                  v38 = v94;
                  v37 = v95;
                  v36 = v38;
                }
              }
              if ( v23 < v130 )
              {
                while ( 1 )
                {
                  v103 = v23 / 4;
                  v104 = v23 & 3;
                  v105 = (float *)(i[1525] + 4 * (v104 + v23 / 4 * i[1589]));
                  if ( v123 <= v26 )
                    v26 = v123;
                  v106 = v94;
                  *v105 = v26;
                  v107 = v32;
                  v108 = v26 + v25;
                  v109 = (float *)(i[1517] + 4 * (v104 + v103 * i[1581]));
                  v110 = v103 * i[1583];
                  v111 = i[1519];
                  *v109 = v107;
                  v112 = (float *)(v111 + 4 * (v104 + v110));
                  v113 = v107;
                  v109[4] = v106;
                  v114 = v95;
                  v115 = v106;
                  v109[8] = v114;
                  v116 = v114;
                  v117 = v115;
                  v118 = v113 + v27;
                  v119 = v117 + v31;
                  v120 = v116 + v145;
                  v121 = *(_BYTE *)(this + 48) ? *v126 : *v109;
                  *v112 = v121;
                  v23 = v128 + 1;
                  v128 = v23;
                  if ( v23 >= v130 )
                    break;
                  v98 = v120;
                  v99 = v119;
                  v26 = v108;
                  v100 = v99;
                  v101 = v118;
                  v95 = v98;
                  v102 = v101;
                  v94 = v100;
                  v32 = v102;
                }
              }
              v4 = a2;
            }
          }
        }
        v7 = j + 1;
      }
    }
  }
}
