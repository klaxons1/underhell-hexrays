int __stdcall sub_10221B30(int a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  bool v11; // zf
  int v12; // edi
  int v13; // ecx
  double v14; // st7
  float *v15; // edi
  float *v16; // ebp
  int v17; // ebp
  float *v18; // eax
  int v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  float *v23; // eax
  double v24; // st7
  double v25; // st6
  float *v26; // eax
  double v27; // st5
  float *v28; // eax
  float *v29; // eax
  double v30; // st6
  double v31; // st5
  double v32; // st4
  float *v33; // eax
  double v34; // st6
  float *v35; // eax
  double v36; // st5
  double v37; // st4
  double v38; // st6
  double v39; // st5
  float *v40; // eax
  double v41; // st4
  float *v42; // eax
  float *v43; // eax
  int *v44; // edx
  double v45; // st7
  double v46; // st6
  double v47; // st5
  float *v48; // eax
  double v49; // st7
  double v50; // st6
  float *v51; // eax
  double v52; // st5
  float *v53; // eax
  float *v54; // eax
  double v55; // st6
  double v56; // st5
  float *v57; // eax
  double v58; // st4
  double v59; // st6
  double v60; // st5
  float *v61; // eax
  double v62; // st4
  double v63; // st6
  double v64; // st5
  float *v65; // eax
  double v66; // st4
  float *v67; // eax
  float *v68; // eax
  int *v69; // ecx
  double v70; // st7
  double v71; // st6
  double v72; // st5
  float *v73; // eax
  double v74; // st7
  double v75; // st6
  float *v76; // eax
  double v77; // st5
  float *v78; // eax
  float *v79; // eax
  double v80; // st7
  double v81; // st6
  double v82; // st5
  float *v83; // eax
  double v84; // st7
  double v85; // st6
  float *v86; // eax
  double v87; // st5
  double v88; // st7
  double v89; // st6
  float *v90; // eax
  double v91; // st5
  float *v92; // eax
  float *v93; // eax
  double v94; // st7
  double v95; // st6
  double v96; // st5
  float *v97; // eax
  double v98; // st7
  double v99; // st6
  double v100; // st5
  float *v101; // eax
  float *v102; // eax
  float *v103; // eax
  double v104; // st6
  double v105; // st5
  double v106; // st4
  float *v107; // eax
  double v108; // st6
  double v109; // st5
  float *v110; // eax
  double v111; // st4
  double v112; // st6
  double v113; // st5
  float *v114; // eax
  double v115; // st4
  float *v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int result; // eax
  float v121; // [esp+20h] [ebp-24h]
  float v122; // [esp+24h] [ebp-20h]
  float v123; // [esp+28h] [ebp-1Ch]
  float v124; // [esp+2Ch] [ebp-18h]
  int v125; // [esp+30h] [ebp-14h]
  float *v126; // [esp+34h] [ebp-10h]
  float v127; // [esp+38h] [ebp-Ch]
  float v128; // [esp+3Ch] [ebp-8h]
  float v129; // [esp+40h] [ebp-4h]
  float v130; // [esp+4Ch] [ebp+8h]
  char v131; // [esp+50h] [ebp+Ch]
  int v132; // [esp+50h] [ebp+Ch]
  float v133; // [esp+54h] [ebp+10h]

  v5 = *(_DWORD *)(a2 + 28);
  v6 = a3 & 3;
  v7 = a3 / 4;
  v8 = v6 + 4 * a3 / 4 * *(_DWORD *)(a2 + 24);
  v125 = v6;
  v9 = a3 / 4 * *(_DWORD *)(a2 + 8);
  v127 = *(float *)(v5 + 4 * v8) * 255.0 + 8388608.0;
  v131 = *(_BYTE *)(a4 + 12);
  v128 = *(float *)(v5 + 4 * v8 + 16) * 255.0 + 8388608.0;
  v129 = 255.0 * *(float *)(v5 + 4 * (v8 + 8)) + 8388608.0;
  v123 = *(float *)(a4 + 8);
  v122 = *(float *)(*(_DWORD *)(a2 + 12) + 4 * (v6 + 4 * v9));
  v10 = *(_DWORD *)(a2 + 4);
  v124 = *(float *)(*(_DWORD *)(a2 + 20) + 4 * (v6 + 4 * v7 * *(_DWORD *)(a2 + 16)));
  v11 = *(_DWORD *)(a2 + 64) == 0;
  v12 = v6 + 4 * v7 * *(_DWORD *)a2;
  v13 = v12 + 8;
  v130 = *(float *)(v10 + 4 * v12);
  v14 = *(float *)(v10 + 4 * v12 + 16);
  v15 = (float *)&unk_103FB670;
  v133 = v14;
  v16 = (float *)&unk_103FB670;
  v121 = *(float *)(v10 + 4 * v13);
  if ( !v11 )
  {
    v126 = (float *)(*(_DWORD *)(a2 + 36) + 4 * (v6 + 4 * v7 * *(_DWORD *)(a2 + 32)));
    v17 = *(_DWORD *)(a2 + 64);
    v15 = (float *)sub_10220FD0(
                     v17,
                     *v126,
                     *(float *)(*(_DWORD *)(a2 + 72) + 36),
                     *(float *)(a2 + 56),
                     (int)*(float *)(*(_DWORD *)(a2 + 44) + 4 * (v6 + 4 * v7 * *(_DWORD *)(a2 + 40))));
    v16 = (float *)sub_10220FD0(
                     v17,
                     *v126,
                     *(float *)(*(_DWORD *)(a2 + 72) + 36),
                     *(float *)(a2 + 60),
                     (int)*(float *)(*(_DWORD *)(a2 + 52) + 4 * (v125 + 4 * v7 * *(_DWORD *)(a2 + 48))));
  }
  v18 = *(float **)(a1 + 428);
  *v18++ = v130;
  *v18 = v133;
  v18[1] = v121;
  BYTE1(v18) = v131;
  LOBYTE(v18) = LOBYTE(v127);
  v19 = LOBYTE(v129) | ((LOBYTE(v128) | ((unsigned __int16)v18 << 8)) << 8);
  **(_DWORD **)(a1 + 468) = v19;
  v20 = v15[1];
  v21 = v15[2];
  v132 = v19;
  v22 = v15[3];
  v23 = (float *)(*(_DWORD *)(a1 + 436) + 4);
  *(v23++ - 1) = *v15;
  *(v23 - 1) = v20;
  *v23 = v21;
  v23[1] = v22;
  v24 = v15[5];
  v25 = v15[6];
  v26 = (float *)(*(_DWORD *)(a1 + 440) + 8);
  v27 = v15[7];
  *(v26 - 2) = v15[4];
  *(v26 - 1) = v24;
  *v26 = v25;
  v26[1] = v27;
  v28 = (float *)(*(_DWORD *)(a1 + 444) + 4);
  *(v28++ - 1) = v15[16];
  *(v28 - 1) = v122;
  *v28 = v123;
  v28[1] = v124;
  v29 = *(float **)(a1 + 448);
  *v29 = 0.0;
  v29[1] = 0.0;
  v30 = v15[9];
  v31 = v15[10];
  v32 = v15[11];
  v33 = (float *)(*(_DWORD *)(a1 + 452) + 8);
  *(v33 - 2) = v15[8];
  *(v33 - 1) = v30;
  *v33 = v31;
  v33[1] = v32;
  v34 = v16[1];
  v35 = (float *)(*(_DWORD *)(a1 + 456) + 4);
  v36 = v16[2];
  v37 = v16[3];
  *(v35 - 1) = *v16;
  *v35 = v34;
  v35[1] = v36;
  v35[2] = v37;
  v38 = v16[5];
  v39 = v16[6];
  v40 = (float *)(*(_DWORD *)(a1 + 460) + 8);
  v41 = v16[7];
  *(v40 - 2) = v16[4];
  *(v40 - 1) = v38;
  *v40 = v39;
  v40[1] = v41;
  v42 = (float *)(*(_DWORD *)(a1 + 464) + 4);
  *(v42++ - 1) = v16[16];
  *(v42 - 1) = 0.0;
  *v42 = 0.0;
  v42[1] = 0.0;
  sub_10016A80((_DWORD *)(a1 + 244));
  v43 = *(float **)(a1 + 428);
  *v43 = v130;
  v44 = *(int **)(a1 + 468);
  *++v43 = v133;
  v43[1] = v121;
  *v44 = v132;
  v45 = v15[1];
  v46 = v15[2];
  v47 = v15[3];
  v48 = (float *)(*(_DWORD *)(a1 + 436) + 8);
  *(v48 - 2) = *v15;
  *(v48 - 1) = v45;
  *v48 = v46;
  v48[1] = v47;
  v49 = v15[5];
  v50 = v15[6];
  v51 = (float *)(*(_DWORD *)(a1 + 440) + 8);
  v52 = v15[7];
  *(v51 - 2) = v15[4];
  *(v51 - 1) = v49;
  *v51 = v50;
  v51[1] = v52;
  v53 = (float *)(*(_DWORD *)(a1 + 444) + 4);
  *(v53++ - 1) = v15[16];
  *(v53 - 1) = v122;
  *v53 = v123;
  v53[1] = v124;
  v54 = *(float **)(a1 + 448);
  *v54 = 1.0;
  v54[1] = 0.0;
  v55 = v15[9];
  v56 = v15[10];
  v57 = *(float **)(a1 + 452);
  v58 = v15[11];
  *v57 = v15[8];
  v57 += 2;
  *(v57 - 1) = v55;
  *v57 = v56;
  v57[1] = v58;
  v59 = v16[1];
  v60 = v16[2];
  v61 = (float *)(*(_DWORD *)(a1 + 456) + 8);
  v62 = v16[3];
  *(v61 - 2) = *v16;
  *(v61 - 1) = v59;
  *v61 = v60;
  v61[1] = v62;
  v63 = v16[5];
  v64 = v16[6];
  v65 = (float *)(*(_DWORD *)(a1 + 460) + 8);
  v66 = v16[7];
  *(v65 - 2) = v16[4];
  *(v65 - 1) = v63;
  *v65 = v64;
  v65[1] = v66;
  v67 = (float *)(*(_DWORD *)(a1 + 464) + 4);
  *(v67++ - 1) = v16[16];
  *(v67 - 1) = 0.0;
  *v67 = 0.0;
  v67[1] = 0.0;
  sub_10016A80((_DWORD *)(a1 + 244));
  v68 = *(float **)(a1 + 428);
  *v68 = v130;
  v69 = *(int **)(a1 + 468);
  v68[1] = v133;
  v68[2] = v121;
  *v69 = v132;
  v70 = v15[1];
  v71 = v15[2];
  v72 = v15[3];
  v73 = (float *)(*(_DWORD *)(a1 + 436) + 8);
  *(v73 - 2) = *v15;
  *(v73 - 1) = v70;
  *v73 = v71;
  v73[1] = v72;
  v74 = v15[5];
  v75 = v15[6];
  v76 = (float *)(*(_DWORD *)(a1 + 440) + 8);
  v77 = v15[7];
  *(v76 - 2) = v15[4];
  *(v76 - 1) = v74;
  *v76 = v75;
  v76[1] = v77;
  v78 = (float *)(*(_DWORD *)(a1 + 444) + 4);
  *(v78 - 1) = v15[16];
  *v78++ = v122;
  *v78 = v123;
  v78[1] = v124;
  v79 = *(float **)(a1 + 448);
  *v79 = 1.0;
  v79[1] = 1.0;
  v80 = v15[9];
  v81 = v15[10];
  v82 = v15[11];
  v83 = (float *)(*(_DWORD *)(a1 + 452) + 8);
  *(v83 - 2) = v15[8];
  *(v83 - 1) = v80;
  *v83 = v81;
  v83[1] = v82;
  v84 = v16[1];
  v85 = v16[2];
  v86 = (float *)(*(_DWORD *)(a1 + 456) + 8);
  v87 = v16[3];
  *(v86 - 2) = *v16;
  *(v86 - 1) = v84;
  *v86 = v85;
  v86[1] = v87;
  v88 = v16[5];
  v89 = v16[6];
  v90 = (float *)(*(_DWORD *)(a1 + 460) + 8);
  v91 = v16[7];
  *(v90 - 2) = v16[4];
  *(v90 - 1) = v88;
  *v90 = v89;
  v90[1] = v91;
  v92 = (float *)(*(_DWORD *)(a1 + 464) + 4);
  *(v92++ - 1) = v16[16];
  *(v92 - 1) = 0.0;
  *v92 = 0.0;
  v92[1] = 0.0;
  sub_10016A80((_DWORD *)(a1 + 244));
  v93 = *(float **)(a1 + 428);
  *v93 = v130;
  v93[1] = v133;
  v93[2] = v121;
  **(_DWORD **)(a1 + 468) = v132;
  v94 = v15[1];
  v95 = v15[2];
  v96 = v15[3];
  v97 = (float *)(*(_DWORD *)(a1 + 436) + 8);
  *(v97 - 2) = *v15;
  *(v97 - 1) = v94;
  *v97 = v95;
  v97[1] = v96;
  v98 = v15[5];
  v99 = v15[6];
  v100 = v15[7];
  v101 = (float *)(*(_DWORD *)(a1 + 440) + 8);
  *(v101 - 2) = v15[4];
  *(v101 - 1) = v98;
  *v101 = v99;
  v101[1] = v100;
  v102 = (float *)(*(_DWORD *)(a1 + 444) + 4);
  *(v102++ - 1) = v15[16];
  *(v102 - 1) = v122;
  *v102 = v123;
  v102[1] = v124;
  v103 = *(float **)(a1 + 448);
  *v103 = 0.0;
  v103[1] = 1.0;
  v104 = v15[9];
  v105 = v15[10];
  v106 = v15[11];
  v107 = (float *)(*(_DWORD *)(a1 + 452) + 8);
  *(v107 - 2) = v15[8];
  *(v107 - 1) = v104;
  *v107 = v105;
  v107[1] = v106;
  v108 = v16[1];
  v109 = v16[2];
  v110 = (float *)(*(_DWORD *)(a1 + 456) + 8);
  v111 = v16[3];
  *(v110 - 2) = *v16;
  *(v110 - 1) = v108;
  *v110 = v109;
  v110[1] = v111;
  v112 = v16[5];
  v113 = v16[6];
  v114 = (float *)(*(_DWORD *)(a1 + 460) + 8);
  v115 = v16[7];
  *(v114 - 2) = v16[4];
  *(v114 - 1) = v112;
  *v114 = v113;
  v114[1] = v115;
  v116 = (float *)(*(_DWORD *)(a1 + 464) + 4);
  *(v116++ - 1) = v16[16];
  *(v116 - 1) = 0.0;
  *v116 = 0.0;
  v116[1] = 0.0;
  sub_10016A80((_DWORD *)(a1 + 244));
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220);
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 224);
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 1;
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  v117 = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(a1 + 216) = v117;
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v117) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 2;
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  v118 = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(a1 + 216) = v118;
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v118) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220);
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 224);
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 2;
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  v119 = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(a1 + 216) = v119;
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v119) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 3;
  *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
  result = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(a1 + 216) = result;
  *(_DWORD *)(a2 + 68) += 4;
  return result;
}
