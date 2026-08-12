// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_1030A830@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  void (__thiscall *v5)(int, float *, float *, _DWORD, int, int); // eax
  int v6; // eax
  double v7; // st7
  float *v8; // edi
  double v9; // st6
  double v10; // st5
  double v11; // st7
  float *v12; // eax
  int v13; // edx
  double v14; // st7
  float *v15; // ecx
  float *v16; // eax
  int v17; // edx
  char *v18; // eax
  int v19; // edx
  char *v20; // eax
  double v21; // st7
  int v22; // eax
  double v23; // st4
  int v24; // eax
  double v25; // st7
  float *v26; // ecx
  double v27; // st6
  double v28; // st5
  double v29; // st7
  float *v30; // eax
  int v31; // edx
  char *v32; // eax
  int v33; // edx
  char *v34; // eax
  double v35; // st7
  int v36; // eax
  double v37; // st4
  double v38; // st5
  double v39; // rtt
  double v40; // st5
  double v41; // st7
  double v42; // rt0
  double v43; // st5
  double v44; // st6
  int v45; // edx
  int v46; // eax
  float v47; // ecx
  int v48; // edx
  float *v49; // eax
  double v50; // st7
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int (__thiscall *v54)(int, int *); // edx
  float *v55; // eax
  double v56; // st7
  int v57; // eax
  float v60[22]; // [esp+48h] [ebp-14Ch] BYREF
  _BYTE v61[44]; // [esp+A0h] [ebp-F4h] BYREF
  float v62; // [esp+CCh] [ebp-C8h]
  float v63; // [esp+FCh] [ebp-98h]
  float v64; // [esp+100h] [ebp-94h] BYREF
  float v65; // [esp+104h] [ebp-90h]
  float v66; // [esp+108h] [ebp-8Ch]
  int v67; // [esp+10Ch] [ebp-88h] BYREF
  float v68; // [esp+110h] [ebp-84h]
  void **v69; // [esp+118h] [ebp-7Ch] BYREF
  int v70; // [esp+11Ch] [ebp-78h] BYREF
  int v71; // [esp+120h] [ebp-74h]
  float v72; // [esp+124h] [ebp-70h]
  float v73; // [esp+128h] [ebp-6Ch] BYREF
  float v74; // [esp+12Ch] [ebp-68h]
  float v75; // [esp+130h] [ebp-64h]
  float v76[2]; // [esp+134h] [ebp-60h] BYREF
  float v77; // [esp+13Ch] [ebp-58h]
  float v78; // [esp+140h] [ebp-54h] BYREF
  float v79; // [esp+144h] [ebp-50h]
  float v80; // [esp+148h] [ebp-4Ch]
  float v81; // [esp+14Ch] [ebp-48h]
  float v82; // [esp+150h] [ebp-44h]
  float v83; // [esp+154h] [ebp-40h] BYREF
  float v84; // [esp+158h] [ebp-3Ch]
  float v85; // [esp+15Ch] [ebp-38h]
  float v86; // [esp+160h] [ebp-34h] BYREF
  float v87; // [esp+164h] [ebp-30h]
  float v88; // [esp+168h] [ebp-2Ch]
  float v89; // [esp+16Ch] [ebp-28h]
  int v90; // [esp+170h] [ebp-24h] BYREF
  int v91; // [esp+174h] [ebp-20h]
  int v92; // [esp+178h] [ebp-1Ch]
  int v93; // [esp+17Ch] [ebp-18h] BYREF
  int v94; // [esp+180h] [ebp-14h]
  int v95; // [esp+184h] [ebp-10h]
  int v96; // [esp+188h] [ebp-Ch]
  void *v97; // [esp+18Ch] [ebp-8h]
  int v98; // [esp+190h] [ebp-4h]
  void *retaddr; // [esp+194h] [ebp+0h]

  v96 = a2;
  v97 = retaddr;
  v5 = *(void (__thiscall **)(int, float *, float *, _DWORD, int, int))(*(_DWORD *)a1 + 528);
  v89 = *(float *)(a1 + 800) * 0.15000001;
  v5(a1, &v83, &v64, 0, a3, a4);
  v86 = v83;
  v87 = v84;
  v88 = v85;
  v63 = sub_10265030(&v83);
  sub_10422540(&v83, &v67);
  v68 = v68 + 45.0;
  sub_10422220(&v67, &v83);
  v6 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v90 = v83 * v89;
  *(float *)&v91 = v84 * v89;
  *(float *)&v92 = v89 * v85;
  if ( (v6 & 1) != 0 )
    sub_100DAE60(a1);
  v7 = *(float *)(a1 + 580) + *(float *)&v90;
  v8 = (float *)(a1 + 580);
  v95 = *(int *)(a1 + 1676);
  v9 = *(float *)&v91 + *(float *)(a1 + 584);
  v10 = v7;
  v11 = *(float *)&v92 + *(float *)(a1 + 588);
  *(float *)&v90 = v10;
  *(float *)&v91 = v9;
  *(float *)&v92 = v11;
  v12 = (float *)sub_10073710(v95);
  v76[0] = *v12;
  v76[1] = v12[1];
  v13 = *(_DWORD *)a1;
  v77 = v12[2];
  v14 = ((double (__thiscall *)(int))*(_DWORD *)(v13 + 1724))(a1);
  v15 = *(float **)(a1 + 424);
  v95 = *(int *)(a1 + 1676);
  v82 = *(float *)&v15;
  v77 = v14 + v14 + v77;
  v16 = (float *)sub_10073730(v95);
  v17 = *(_DWORD *)(a1 + 252) >> 11;
  v81 = *(float *)&v16;
  if ( (v17 & 1) != 0 )
    sub_100DAE60(a1);
  v82 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v82) + 116))(LODWORD(v82)) * 0.5;
  sub_1001F200(v60, (float *)(a1 + 580), (float *)&v90, v76, (float *)LODWORD(v81));
  v72 = v82;
  v69 = &CTraceFilterSkipPhysics::`vftable';
  v70 = a1;
  v71 = 0;
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v60,
    16395,
    &v69,
    v61);
  if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
  {
    v95 = *(int *)(a1 + 1676);
    if ( 1.0 == v62 )
    {
      v18 = sub_10073730(v95);
      v19 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)&v93 = *(float *)v18 + v89;
      v94 = *((int *)v18 + 1);
      v95 = *((int *)v18 + 2);
      if ( (v19 & 1) != 0 )
        sub_100DAE60(a1);
      *(float *)&v95 = 0.1;
      v94 = 8;
      *(float *)&v93 = 0.0;
      v92 = 255;
      *(float *)&v91 = 0.0;
      *(float *)&v90 = COERCE_FLOAT(&v83);
      v89 = COERCE_FLOAT(&v93);
      v88 = COERCE_FLOAT(v76);
    }
    else
    {
      v20 = sub_10073730(v95);
      *(float *)&v93 = *(float *)v20 + v89;
      v94 = *((int *)v20 + 1);
      v21 = *((float *)v20 + 2);
      v22 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)&v95 = v21;
      if ( (v22 & 1) != 0 )
        sub_100DAE60(a1);
      *(float *)&v95 = 0.1;
      v94 = 8;
      *(float *)&v93 = 0.0;
      *(float *)&v92 = 0.0;
      v91 = 255;
      *(float *)&v90 = COERCE_FLOAT(&v83);
      v89 = COERCE_FLOAT(&v93);
      v88 = COERCE_FLOAT(v76);
    }
    sub_1011BB60(a1 + 580, SLODWORD(v88), SLODWORD(v89), v90, v91, v92, v93, v94, *(float *)&v95);
  }
  v23 = 1.0 - v62;
  v86 = v64 * 0.5 * v23 + v86;
  v87 = v65 * 0.5 * v23 + v87;
  v88 = 0.5 * v66 * v23 + v88;
  v68 = v68 - 90.0;
  sub_10422220(&v67, &v83);
  v24 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v93 = v83 * v89;
  *(float *)&v94 = v84 * v89;
  *(float *)&v95 = v89 * v85;
  if ( (v24 & 1) != 0 )
    sub_100DAE60(a1);
  v25 = *(float *)&v93 + *v8;
  v26 = *(float **)(a1 + 424);
  v95 = *(int *)(a1 + 1676);
  v27 = *(float *)&v94 + *(float *)(a1 + 584);
  v81 = *(float *)&v26;
  v28 = v25;
  v29 = *(float *)&v95 + *(float *)(a1 + 588);
  *(float *)&v90 = v28;
  *(float *)&v91 = v27;
  *(float *)&v92 = v29;
  v30 = (float *)sub_10073730(v95);
  v31 = *(_DWORD *)(a1 + 252) >> 11;
  v82 = *(float *)&v30;
  if ( (v31 & 1) != 0 )
    sub_100DAE60(a1);
  v81 = ((double (__thiscall *)(_DWORD, int, void *, int))*(_DWORD *)(*(_DWORD *)LODWORD(v81) + 116))(
          LODWORD(v81),
          v96,
          v97,
          v98)
      * 0.5;
  sub_1001F200(v60, (float *)(a1 + 580), (float *)&v90, v76, (float *)LODWORD(v82));
  v72 = v81;
  v69 = &CTraceFilterSkipPhysics::`vftable';
  v70 = a1;
  v71 = 0;
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v60,
    16395,
    &v69,
    v61);
  if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
  {
    v94 = *(int *)(a1 + 1676);
    if ( 1.0 == v62 )
    {
      v32 = sub_10073730(v94);
      v33 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)&v93 = v89 + *(float *)v32;
      v94 = *((int *)v32 + 1);
      v95 = *((int *)v32 + 2);
      if ( (v33 & 1) != 0 )
        sub_100DAE60(a1);
      *(float *)&v94 = 0.1;
      v93 = 8;
      *(float *)&v92 = 0.0;
      v91 = 255;
      *(float *)&v90 = 0.0;
      v89 = COERCE_FLOAT(&v83);
      v88 = COERCE_FLOAT(&v93);
      v87 = COERCE_FLOAT(v76);
    }
    else
    {
      v34 = sub_10073730(v94);
      *(float *)&v93 = *(float *)v34 + v89;
      v94 = *((int *)v34 + 1);
      v35 = *((float *)v34 + 2);
      v36 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)&v95 = v35;
      if ( (v36 & 1) != 0 )
        sub_100DAE60(a1);
      *(float *)&v94 = 0.1;
      v93 = 8;
      *(float *)&v92 = 0.0;
      *(float *)&v91 = 0.0;
      v90 = 255;
      v89 = COERCE_FLOAT(&v83);
      v88 = COERCE_FLOAT(&v93);
      v87 = COERCE_FLOAT(v76);
    }
    sub_1011BB60(a1 + 580, SLODWORD(v87), SLODWORD(v88), SLODWORD(v89), v90, v91, v92, v93, *(float *)&v94);
  }
  v37 = 1.0 - v62;
  v38 = v86 - v64 * 0.5 * v37;
  v86 = v38;
  v39 = v38;
  v40 = v87 - v65 * 0.5 * v37;
  v41 = v39;
  v87 = v40;
  v42 = v40;
  v43 = v88 - 0.5 * v66 * v37;
  v44 = v42;
  v88 = v43;
  if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
  {
    v45 = *(_DWORD *)(a1 + 252) >> 11;
    *(float *)&v93 = v41 * 512.0;
    *(float *)&v94 = v44 * 512.0;
    *(float *)&v95 = 512.0 * v43;
    if ( (v45 & 1) != 0 )
      sub_100DAE60(a1);
    v46 = *(_DWORD *)(a1 + 252) >> 11;
    *(float *)&v90 = *(float *)&v93 + *v8;
    *(float *)&v91 = *(float *)&v94 + *(float *)(a1 + 584);
    *(float *)&v92 = *(float *)&v95 + *(float *)(a1 + 588);
    if ( (v46 & 1) != 0 )
      sub_100DAE60(a1);
    sub_1011BC50((float *)(a1 + 580), (float *)&v90, 255, 255, 0, 1, 0.1);
    *(float *)&v90 = -2.0;
    v48 = *(_DWORD *)(a1 + 252);
    *(float *)&v91 = -2.0;
    *(float *)&v92 = -2.0;
    v73 = 2.0;
    v74 = 2.0;
    v75 = 2.0;
    *(float *)&v93 = v86 * 512.0;
    *(float *)&v94 = v87 * 512.0;
    *(float *)&v95 = 512.0 * v88;
    if ( (v48 & 0x800) != 0 )
      sub_100DAE60(a1);
    *(float *)&v94 = v47;
    v78 = *(float *)&v93 + *v8;
    v79 = v47 + *(float *)(a1 + 584);
    v80 = *(float *)&v95 + *(float *)(a1 + 588);
    sub_1011C000(&v78, &v73, (float *)&v90, 255, 255, 0, 1, 0.1);
    v49 = (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)a1 + 908))(a1, &v73, v95);
    *(float *)&v93 = *v49 * 256.0;
    *(float *)&v94 = v49[1] * 256.0;
    v50 = 256.0 * v49[2];
    v51 = *(_DWORD *)(a1 + 252) >> 11;
    *(float *)&v95 = v50;
    if ( (v51 & 1) != 0 )
      sub_100DAE60(a1);
    v52 = *(_DWORD *)(a1 + 252) >> 11;
    v78 = *(float *)&v93 + *v8;
    v79 = *(float *)&v94 + *(float *)(a1 + 584);
    v80 = *(float *)&v95 + *(float *)(a1 + 588);
    if ( (v52 & 1) != 0 )
      sub_100DAE60(a1);
    sub_1011BC50((float *)(a1 + 580), &v78, 255, 0, 255, 1, 0.1);
    v53 = *(_DWORD *)a1;
    v78 = -2.0;
    v54 = *(int (__thiscall **)(int, int *))(v53 + 908);
    v79 = -2.0;
    v80 = -2.0;
    v73 = 2.0;
    v74 = 2.0;
    v75 = 2.0;
    v55 = (float *)v54(a1, &v70);
    *(float *)&v93 = *v55 * 256.0;
    *(float *)&v94 = v55[1] * 256.0;
    v56 = 256.0 * v55[2];
    v57 = *(_DWORD *)(a1 + 252) >> 11;
    *(float *)&v95 = v56;
    if ( (v57 & 1) != 0 )
      sub_100DAE60(a1);
    sub_1011C000((float *)&v90, &v73, &v78, 255, 0, 255, 1, 0.1);
  }
  *(float *)&v93 = sub_10265030(&v86);
  return sub_10424C10(*(float *)&v93, v63);
}
