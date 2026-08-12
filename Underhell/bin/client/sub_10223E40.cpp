int __thiscall sub_10223E40(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v6; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // edi
  double v13; // st7
  float *v14; // edi
  double v15; // st7
  float *v16; // eax
  unsigned __int16 v17; // bx
  int v18; // ebx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  float *v25; // eax
  double v26; // st5
  float *v27; // eax
  float *v28; // eax
  double v29; // st7
  double v30; // st6
  double v31; // st5
  float *v32; // eax
  float *v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  float *v37; // eax
  double v38; // st7
  double v39; // st6
  float *v40; // eax
  double v41; // st5
  float *v42; // eax
  float *v43; // eax
  double v44; // st7
  double v45; // st6
  double v46; // st5
  float *v47; // eax
  float *v48; // eax
  int *v49; // edx
  double v50; // st7
  double v51; // st6
  double v52; // st5
  float *v53; // eax
  double v54; // st7
  double v55; // st6
  double v56; // st5
  float *v57; // eax
  float *v58; // eax
  float *v59; // eax
  double v60; // st7
  double v61; // st6
  double v62; // st5
  float *v63; // eax
  float *v64; // eax
  double v65; // st7
  double v66; // st6
  double v67; // st5
  float *v68; // eax
  double v69; // st7
  double v70; // st6
  float *v71; // eax
  double v72; // st5
  float *v73; // eax
  float *v74; // eax
  double v75; // st7
  double v76; // st6
  double v77; // st5
  float *v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int result; // eax
  float v83; // [esp+8h] [ebp-34h]
  float v84; // [esp+20h] [ebp-1Ch]
  float v85; // [esp+24h] [ebp-18h]
  float v86; // [esp+28h] [ebp-14h]
  float v87; // [esp+2Ch] [ebp-10h]
  float v88; // [esp+30h] [ebp-Ch]
  float v89; // [esp+34h] [ebp-8h]
  float v90; // [esp+38h] [ebp-4h]
  float v91; // [esp+44h] [ebp+8h]
  char v92; // [esp+48h] [ebp+Ch]
  float v93; // [esp+4Ch] [ebp+10h]

  v6 = *(_DWORD *)(a3 + 28);
  v7 = a4 / 4;
  v8 = a4 & 3;
  v9 = v8 + 4 * a4 / 4 * *(_DWORD *)(a3 + 24);
  v92 = *(_BYTE *)(a5 + 12);
  v88 = *(float *)(v6 + 4 * v9) * 255.0 + 8388608.0;
  v89 = *(float *)(v6 + 4 * v9 + 16) * 255.0 + 8388608.0;
  v90 = 255.0 * *(float *)(v6 + 4 * (v9 + 8)) + 8388608.0;
  v86 = *(float *)(a5 + 8);
  v85 = *(float *)(*(_DWORD *)(a3 + 12) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 8)));
  v10 = *(_DWORD *)(a3 + 4);
  v11 = v7 * *(_DWORD *)a3;
  v87 = *(float *)(*(_DWORD *)(a3 + 20) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 16)));
  v12 = v8 + 4 * v11;
  v91 = *(float *)(v10 + 4 * v12);
  v13 = *(float *)(v10 + 4 * v12 + 16);
  v14 = (float *)&unk_103FB670;
  v93 = v13;
  v84 = *(float *)(v10 + 4 * (v8 + 4 * v11 + 8));
  if ( *(_DWORD *)(a3 + 64) )
  {
    v15 = *(float *)(a3 + 56);
    if ( this[93] )
      v15 = v15
          / *(float *)(*(_DWORD *)(*(_DWORD *)(a3 + 72) + 8)
                     + 4 * (int)*(float *)(*(_DWORD *)(a3 + 44) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 40)))
                     + 644);
    v83 = v15;
    v14 = (float *)sub_10220FD0(
                     *(_DWORD *)(a3 + 64),
                     *(float *)(*(_DWORD *)(a3 + 36) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 32))),
                     *(float *)(*(_DWORD *)(a3 + 72) + 36),
                     v83,
                     (int)*(float *)(*(_DWORD *)(a3 + 44) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 40))));
  }
  v16 = *(float **)(a2 + 428);
  *v16 = v91;
  v16[1] = v93;
  v16[2] = v84;
  HIBYTE(v17) = v92;
  LOBYTE(v17) = LOBYTE(v88);
  v18 = LOBYTE(v90) | ((LOBYTE(v89) | (v17 << 8)) << 8);
  **(_DWORD **)(a2 + 468) = v18;
  v19 = v14[1];
  v20 = v14[2];
  v21 = v14[3];
  v22 = (float *)(*(_DWORD *)(a2 + 436) + 8);
  *(v22 - 2) = *v14;
  *(v22 - 1) = v19;
  *v22 = v20;
  v22[1] = v21;
  v23 = v14[5];
  v24 = v14[6];
  v25 = (float *)(*(_DWORD *)(a2 + 440) + 8);
  v26 = v14[7];
  *(v25 - 2) = v14[4];
  *(v25 - 1) = v23;
  *v25 = v24;
  v25[1] = v26;
  v27 = (float *)(*(_DWORD *)(a2 + 444) + 4);
  *(v27++ - 1) = v14[16];
  *(v27 - 1) = v85;
  *v27 = v86;
  v27[1] = v87;
  v28 = *(float **)(a2 + 448);
  *v28 = 0.0;
  v28[1] = 0.0;
  v29 = v14[9];
  v30 = v14[10];
  v31 = v14[11];
  v32 = (float *)(*(_DWORD *)(a2 + 452) + 8);
  *(v32 - 2) = v14[8];
  *(v32 - 1) = v29;
  *v32 = v30;
  v32[1] = v31;
  sub_10016A80((_DWORD *)(a2 + 244));
  v33 = *(float **)(a2 + 428);
  *v33++ = v91;
  *v33 = v93;
  v33[1] = v84;
  **(_DWORD **)(a2 + 468) = v18;
  v34 = v14[1];
  v35 = v14[2];
  v36 = v14[3];
  v37 = (float *)(*(_DWORD *)(a2 + 436) + 8);
  *(v37 - 2) = *v14;
  *(v37 - 1) = v34;
  *v37 = v35;
  v37[1] = v36;
  v38 = v14[5];
  v39 = v14[6];
  v40 = (float *)(*(_DWORD *)(a2 + 440) + 8);
  v41 = v14[7];
  *(v40 - 2) = v14[4];
  *(v40 - 1) = v38;
  *v40 = v39;
  v40[1] = v41;
  v42 = (float *)(*(_DWORD *)(a2 + 444) + 4);
  *(v42++ - 1) = v14[16];
  *(v42 - 1) = v85;
  *v42 = v86;
  v42[1] = v87;
  v43 = *(float **)(a2 + 448);
  *v43 = 1.0;
  v43[1] = 0.0;
  v44 = v14[9];
  v45 = v14[10];
  v46 = v14[11];
  v47 = (float *)(*(_DWORD *)(a2 + 452) + 8);
  *(v47 - 2) = v14[8];
  *(v47 - 1) = v44;
  *v47 = v45;
  v47[1] = v46;
  sub_10016A80((_DWORD *)(a2 + 244));
  v48 = *(float **)(a2 + 428);
  v49 = *(int **)(a2 + 468);
  *v48++ = v91;
  *v48 = v93;
  v48[1] = v84;
  *v49 = v18;
  v50 = v14[1];
  v51 = v14[2];
  v52 = v14[3];
  v53 = (float *)(*(_DWORD *)(a2 + 436) + 8);
  *(v53 - 2) = *v14;
  *(v53 - 1) = v50;
  *v53 = v51;
  v53[1] = v52;
  v54 = v14[5];
  v55 = v14[6];
  v56 = v14[7];
  v57 = *(float **)(a2 + 440);
  *v57 = v14[4];
  v57 += 2;
  *(v57 - 1) = v54;
  *v57 = v55;
  v57[1] = v56;
  v58 = (float *)(*(_DWORD *)(a2 + 444) + 4);
  *(v58++ - 1) = v14[16];
  *(v58 - 1) = v85;
  *v58 = v86;
  v58[1] = v87;
  v59 = *(float **)(a2 + 448);
  *v59 = 1.0;
  v59[1] = 1.0;
  v60 = v14[9];
  v61 = v14[10];
  v62 = v14[11];
  v63 = (float *)(*(_DWORD *)(a2 + 452) + 8);
  *(v63 - 2) = v14[8];
  *(v63 - 1) = v60;
  *v63 = v61;
  v63[1] = v62;
  sub_10016A80((_DWORD *)(a2 + 244));
  v64 = *(float **)(a2 + 428);
  *v64++ = v91;
  *v64 = v93;
  v64[1] = v84;
  **(_DWORD **)(a2 + 468) = v18;
  v65 = v14[1];
  v66 = v14[2];
  v67 = v14[3];
  v68 = (float *)(*(_DWORD *)(a2 + 436) + 8);
  *(v68 - 2) = *v14;
  *(v68 - 1) = v65;
  *v68 = v66;
  v68[1] = v67;
  v69 = v14[5];
  v70 = v14[6];
  v71 = (float *)(*(_DWORD *)(a2 + 440) + 8);
  v72 = v14[7];
  *(v71 - 2) = v14[4];
  *(v71 - 1) = v69;
  *v71 = v70;
  v71[1] = v72;
  v73 = (float *)(*(_DWORD *)(a2 + 444) + 4);
  *(v73++ - 1) = v14[16];
  *(v73 - 1) = v85;
  *v73 = v86;
  v73[1] = v87;
  v74 = *(float **)(a2 + 448);
  *v74 = 0.0;
  v74[1] = 1.0;
  v75 = v14[9];
  v76 = v14[10];
  v77 = v14[11];
  v78 = (float *)(*(_DWORD *)(a2 + 452) + 8);
  *(v78 - 2) = v14[8];
  *(v78 - 1) = v75;
  *v78 = v76;
  v78[1] = v77;
  sub_10016A80((_DWORD *)(a2 + 244));
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  v79 = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a2 + 216) = v79;
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v79) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 1;
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  v80 = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a2 + 216) = v80;
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v80) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  v81 = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a2 + 216) = v81;
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v81) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
  *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 3;
  *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
  result = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a2 + 216) = result;
  *(_DWORD *)(a3 + 68) += 4;
  return result;
}
