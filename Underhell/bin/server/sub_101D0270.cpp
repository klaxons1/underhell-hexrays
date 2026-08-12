int __cdecl sub_101D0270(int a1, int a2, int a3, int a4, char a5)
{
  int v6; // ecx
  _DWORD *v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  _BYTE *v10; // eax
  float v11; // edx
  int v12; // edi
  float v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ebx
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st6
  double v21; // st5
  double v22; // st7
  double v23; // st5
  volatile signed __int32 v24; // eax
  void (__thiscall *v25)(int, int *, int); // edx
  int v26; // eax
  int *v27; // ecx
  int v28; // eax
  int *v29; // ecx
  int v30; // edx
  float v31; // ecx
  float v32; // edx
  _DWORD *v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // rt2
  double v38; // st5
  double v39; // st7
  int v40; // edi
  _DWORD *v41; // eax
  int v42; // ebx
  int v43; // ebx
  int *v44; // edi
  float v45; // edx
  float v46; // ecx
  float v47; // eax
  int v48; // eax
  int v49; // ebx
  _DWORD *v50; // eax
  int v51; // edi
  double v52; // st7
  double v53; // st6
  double v54; // rt2
  double v55; // st7
  int v56; // ebx
  int v57; // eax
  int v58; // eax
  int *v59; // edi
  float v60; // ecx
  float v61; // eax
  int v62; // edx
  double v63; // st7
  void (__thiscall *v64)(int *, int *); // edx
  float v65; // ecx
  float v66; // edx
  int v67; // eax
  float v68; // ecx
  float v69; // edx
  int v70; // edi
  int v71; // ebx
  int *v72; // ecx
  float *v73; // eax
  int v74; // edx
  double v75; // st7
  int (__thiscall *v76)(int); // eax
  float *v77; // eax
  int v78; // esi
  float v80; // [esp+34h] [ebp-326Ch]
  float v81; // [esp+34h] [ebp-326Ch]
  int v82[1536]; // [esp+44h] [ebp-325Ch] BYREF
  int v83[1536]; // [esp+1844h] [ebp-1A5Ch] BYREF
  int v84[128]; // [esp+3044h] [ebp-25Ch] BYREF
  float v85[3]; // [esp+3244h] [ebp-5Ch] BYREF
  float v86[3]; // [esp+3250h] [ebp-50h] BYREF
  int v87; // [esp+325Ch] [ebp-44h] BYREF
  float v88; // [esp+3260h] [ebp-40h]
  float v89; // [esp+3264h] [ebp-3Ch]
  float i; // [esp+3268h] [ebp-38h]
  float v91; // [esp+326Ch] [ebp-34h]
  int v92; // [esp+3270h] [ebp-30h] BYREF
  float v93; // [esp+3274h] [ebp-2Ch]
  float v94; // [esp+3278h] [ebp-28h]
  float v95; // [esp+327Ch] [ebp-24h]
  float v96; // [esp+3280h] [ebp-20h]
  float v97; // [esp+3284h] [ebp-1Ch] BYREF
  float v98; // [esp+3288h] [ebp-18h]
  float v99; // [esp+328Ch] [ebp-14h]
  _DWORD *v100; // [esp+3290h] [ebp-10h]
  float v101; // [esp+3294h] [ebp-Ch] BYREF
  float v102; // [esp+3298h] [ebp-8h]
  float v103; // [esp+329Ch] [ebp-4h]
  float v104; // [esp+32A8h] [ebp+8h]
  int v105; // [esp+32A8h] [ebp+8h]

  if ( (*(_BYTE *)(a3 + 64) & 0x11) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 424);
    if ( v6 )
    {
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 276))(v6, &v92, 0);
      sub_100E0D20(a1, (float *)&v92);
    }
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = (_DWORD *)sub_100E2680((int)"prop_ragdoll", (float *)(a1 + 580), &flt_106F1CB4, 0);
  v100 = v7;
  sub_100C3050((int)v7, *(float *)&a1);
  (*(void (__thiscall **)(_DWORD *, int))(*v7 + 76))(v7, a1);
  sub_101CE2B0((int)v7);
  v104 = 0.1;
  if ( (*(_DWORD *)(a1 + 252) & 0x8000000) != 0 )
    v7[63] |= 0x8000000u;
  v8 = *(_DWORD *)(a3 + 40);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1];
  if ( v9 )
    v7[1259] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  else
    v7[1259] = -1;
  v10 = *(_BYTE **)(a1 + 92);
  if ( !v10 || !*v10 )
    v10 = 0;
  v7[1264] = v10;
  LODWORD(v11) = *(unsigned __int16 *)(a1 + 1060);
  *(_WORD *)(a1 + 1060) = LOWORD(v11) | 1;
  v12 = dword_10700AC8;
  v13 = *(float *)(a1 + 908);
  i = v11;
  v14 = *(_DWORD *)dword_10700AC8;
  v95 = v13;
  (*(void (__thiscall **)(int))(v14 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v15 = *(_DWORD **)(a1 + 1100);
  if ( v15 && *v15 )
    v16 = *(_DWORD *)(a1 + 1100);
  else
    v16 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
  v17 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 736))(a1, v16, LODWORD(v95));
  v18 = *(float *)(a1 + 904) * v17;
  if ( v18 > 0.1 || v18 <= 0.0 )
  {
    v20 = 0.0;
  }
  else
  {
    v19 = v18;
    v20 = 0.0;
    v104 = v19;
  }
  v21 = 1.0 / v17;
  v22 = 1.0;
  v23 = *(float *)(a1 + 904) - v21 * v104;
  if ( v23 <= 1.0 )
  {
    v22 = v23;
    if ( v20 > v23 )
      v22 = v20;
  }
  v24 = *(_DWORD *)a1;
  v96 = v22;
  v25 = *(void (__thiscall **)(int, int *, int))(v24 + 776);
  v95 = *(float *)(a1 + 904);
  v25(a1, v82, 524032);
  v26 = *(_DWORD *)(a1 + 904);
  v91 = v96;
  if ( v26 != LODWORD(v96) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v27 = *(int **)(a1 + 24);
      if ( v27 )
        sub_100194B0(v27, 904);
    }
    *(float *)(a1 + 904) = v96;
  }
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 776))(a1, v83, 524032);
  v28 = *(_DWORD *)(a1 + 904);
  v91 = v95;
  if ( v28 != LODWORD(v95) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v29 = *(int **)(a1 + 24);
      if ( v29 )
        sub_100194B0(v29, 904);
    }
    *(float *)(a1 + 904) = v95;
  }
  v30 = *(_DWORD *)(a1 + 252) >> 12;
  *(_WORD *)(a1 + 1060) = LOWORD(i) | *(_WORD *)(a1 + 1060) & 0xFFFE;
  if ( (v30 & 1) != 0 )
    sub_100DAFD0(a1);
  v31 = *(float *)(a1 + 480);
  v32 = *(float *)(a1 + 484);
  v101 = *(float *)(a1 + 476);
  v102 = v31;
  v103 = v32;
  v80 = v101 * v101 + v31 * v31 + v32 * v32;
  if ( 0.0 == off_10689708(v80)
    && v104 > 0.0
    && (v33 = sub_10001430((_DWORD *)a1)) != 0
    && sub_10100AE0((int)v33, *(_DWORD *)(a1 + 908), v96, *(float *)(a1 + 904), a1 + 912, (float *)&v92, (float *)&v87) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_10421C00(&v92, a1 + 500, &v101);
    v34 = 1.0 / v104;
    v35 = v101 * v34;
    v101 = v35;
    v36 = v102 * v34;
    v102 = v36;
    v37 = v36;
    v38 = v34 * v103;
    v39 = v37;
    v103 = v38;
  }
  else
  {
    v35 = v101;
    v38 = v103;
    v39 = v102;
  }
  if ( v39 * v39 + v35 * v35 + v38 * v38 > 0.0 )
  {
    v40 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
      sub_100BD750((volatile signed __int32 *)a1);
    v41 = *(_DWORD **)(a1 + 1100);
    if ( v41 && *v41 )
      v42 = *(_DWORD *)(a1 + 1100);
    else
      v42 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 104))(v40);
    v43 = *(_DWORD *)(*(_DWORD *)v42 + 156);
    v101 = v101 * v104;
    v102 = v102 * v104;
    v103 = v104 * v103;
    if ( v43 > 0 )
    {
      v44 = v83;
      do
      {
        sub_10421CE0(v44, 3, &v97);
        v97 = v97 - v101;
        v98 = v98 - v102;
        v99 = v99 - v103;
        sub_10421D00(&v97, 3, v44);
        v44 += 12;
        --v43;
      }
      while ( v43 );
    }
  }
  if ( (*(_BYTE *)(a3 + 64) & 0x10) == 0 || !sub_100D7680(a1) )
  {
    v65 = *(float *)(a3 + 20);
    v66 = *(float *)(a3 + 24);
    v92 = *(int *)(a3 + 16);
    v67 = *(int *)(a3 + 4);
    v93 = v65;
    v68 = *(float *)(a3 + 8);
    v87 = v67;
    v94 = v66;
    v69 = *(float *)(a3 + 12);
    v88 = v68;
    v89 = v69;
    sub_101CD150((int)v100, (float *)&v87, a2, (float *)&v92, (int)v83, (int)v82, v104, a4, (_DWORD *)1, 1);
    goto LABEL_83;
  }
  sub_101CD150((int)v100, &flt_106F1CA8, -1, &flt_106F1CA8, (int)v83, (int)v82, v104, a4, (_DWORD *)1, 1);
  v45 = *(float *)(a3 + 20);
  *(float *)&v87 = 0.0;
  v46 = *(float *)(a3 + 16);
  v88 = 0.0;
  v47 = *(float *)(a3 + 24);
  v89 = -1.0;
  v98 = v45;
  v97 = v46;
  v99 = v47;
  v81 = 0.0 * (v45 + v46) - v47 * 1.0;
  v48 = sub_100C0A40(a1, (int)v84, 128, (float *)&v87, v81);
  v49 = dword_10700AC8;
  v105 = v48;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v50 = *(_DWORD **)(a1 + 1100);
  if ( v50 && *v50 )
    v51 = *(_DWORD *)(a1 + 1100);
  else
    v51 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 104))(v49);
  v52 = sub_10100E80(v51);
  if ( v52 > 10000.0 )
  {
    v52 = 10000.0;
    v53 = 1.0;
LABEL_76:
    v54 = v53;
    v53 = v52;
    v55 = v54;
    goto LABEL_77;
  }
  v53 = 1.0;
  if ( v52 >= 1.0 )
    goto LABEL_76;
  v55 = 1.0;
LABEL_77:
  v56 = 0;
  for ( i = v55 / v53; v56 < v105; ++v56 )
  {
    v57 = sub_100C07F0(a1, v84[v56]);
    v58 = sub_100C09B0(a1, v57);
    v59 = (int *)v100[6 * v58 + 289];
    v60 = *(float *)(a3 + 4);
    v61 = *(float *)(a3 + 12);
    v98 = *(float *)(a3 + 8);
    v62 = *v59;
    v97 = v60;
    v99 = v61;
    v63 = ((double (__thiscall *)(int *))*(_DWORD *)(v62 + 116))(v59);
    v64 = *(void (__thiscall **)(int *, int *))(*v59 + 236);
    *(float *)&v92 = v97 * v63 * i;
    v93 = v98 * v63 * i;
    v94 = v63 * v99 * i;
    v64(v59, &v92);
  }
LABEL_83:
  if ( (*(_DWORD *)(a1 + 256) & 0x10000000) != 0 )
  {
    sub_10218970(a1);
  }
  else if ( a5 )
  {
    v70 = (int)v100;
    v71 = v100[62] | 0x1000;
    if ( v100[62] != v71 )
    {
      if ( *((_BYTE *)v100 + 84) )
      {
        *((_BYTE *)v100 + 88) |= 1u;
      }
      else
      {
        v72 = (int *)v100[6];
        if ( v72 )
          sub_100194B0(v72, 248);
      }
      *(_DWORD *)(v70 + 248) = v71;
    }
    sub_10218FC0(v100, 0);
  }
  v73 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320);
  v74 = *(_DWORD *)(a1 + 320);
  v85[0] = *v73;
  v85[1] = v73[1];
  v75 = v73[2];
  v76 = *(int (__thiscall **)(int))(v74 + 8);
  v85[2] = v75;
  v77 = (float *)v76(a1 + 320);
  v78 = (int)v100;
  v86[0] = *v77;
  v86[1] = v77[1];
  v86[2] = v77[2];
  sub_10112A40((int)(v100 + 80), v85, v86);
  return v78;
}
