_DWORD *__userpurge sub_101DE7B0@<eax>(int a1@<ecx>, int a2@<ebp>, int **a3@<edi>, int a4@<esi>, int a5, int a6)
{
  _DWORD *result; // eax
  int i; // esi
  float *v9; // eax
  double v10; // st7
  int v11; // ecx
  double v12; // st6
  double v13; // st5
  double v14; // st7
  float v15; // ecx
  float v16; // edx
  double v17; // st7
  int v18; // eax
  double v19; // st6
  double v20; // st7
  int (__thiscall *v21)(int); // edx
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  float *v25; // eax
  double v26; // st7
  double v27; // st7
  int v28; // eax
  int v29; // eax
  int v30; // edx
  void (__thiscall *v31)(int); // eax
  double v32; // st6
  int v33; // ecx
  double v34; // rtt
  double v35; // st4
  double v36; // st6
  double v37; // st7
  double v38; // st4
  double v39; // rt2
  double v40; // st4
  double v41; // st6
  double v42; // st4
  double v43; // rtt
  double v44; // st4
  double v45; // st7
  double v46; // st5
  double v47; // st7
  double v48; // st4
  double v49; // st6
  double v50; // st7
  float v51; // edx
  float v52; // eax
  float v53; // [esp+24h] [ebp-200h]
  float v54; // [esp+2Ch] [ebp-1F8h]
  float v55; // [esp+2Ch] [ebp-1F8h]
  __int64 v56; // [esp+2Ch] [ebp-1F8h]
  float v57; // [esp+34h] [ebp-1F0h]
  int *v60; // [esp+40h] [ebp-1E4h]
  _BYTE *v61; // [esp+44h] [ebp-1E0h]
  int *v62; // [esp+48h] [ebp-1DCh] BYREF
  float *v63; // [esp+4Ch] [ebp-1D8h]
  int v64; // [esp+50h] [ebp-1D4h]
  _DWORD v65[20]; // [esp+98h] [ebp-18Ch] BYREF
  _BYTE v66[12]; // [esp+E8h] [ebp-13Ch] BYREF
  float v67[20]; // [esp+F4h] [ebp-130h] BYREF
  int v68; // [esp+144h] [ebp-E0h] BYREF
  int v69; // [esp+150h] [ebp-D4h] BYREF
  int v70; // [esp+15Ch] [ebp-C8h] BYREF
  int v71; // [esp+168h] [ebp-BCh] BYREF
  float v72[3]; // [esp+174h] [ebp-B0h] BYREF
  float v73[3]; // [esp+180h] [ebp-A4h] BYREF
  float v74[3]; // [esp+18Ch] [ebp-98h] BYREF
  float v75[3]; // [esp+198h] [ebp-8Ch] BYREF
  float v76; // [esp+1A4h] [ebp-80h]
  float v77; // [esp+1A8h] [ebp-7Ch]
  float v78; // [esp+1ACh] [ebp-78h]
  float v79; // [esp+1B0h] [ebp-74h]
  float v80; // [esp+1B4h] [ebp-70h]
  float v81; // [esp+1B8h] [ebp-6Ch]
  float v82; // [esp+1BCh] [ebp-68h]
  float v83[2]; // [esp+1C0h] [ebp-64h] BYREF
  float v84; // [esp+1C8h] [ebp-5Ch]
  float v85; // [esp+1CCh] [ebp-58h]
  float v86; // [esp+1D0h] [ebp-54h]
  float v87; // [esp+1D4h] [ebp-50h]
  float v88; // [esp+1D8h] [ebp-4Ch]
  float v89; // [esp+1DCh] [ebp-48h]
  float v90; // [esp+1E0h] [ebp-44h]
  float v91; // [esp+1E4h] [ebp-40h] BYREF
  float v92; // [esp+1E8h] [ebp-3Ch]
  float v93; // [esp+1ECh] [ebp-38h]
  float v94; // [esp+1F0h] [ebp-34h]
  float v95; // [esp+1F4h] [ebp-30h]
  float v96; // [esp+1F8h] [ebp-2Ch]
  float v97; // [esp+1FCh] [ebp-28h] BYREF
  float v98; // [esp+200h] [ebp-24h]
  float v99; // [esp+204h] [ebp-20h]
  float v100; // [esp+208h] [ebp-1Ch] BYREF
  float v101; // [esp+20Ch] [ebp-18h]
  float v102; // [esp+210h] [ebp-14h]
  int v103; // [esp+214h] [ebp-10h]
  int v104; // [esp+218h] [ebp-Ch]
  void *v105; // [esp+21Ch] [ebp-8h]
  void *retaddr; // [esp+224h] [ebp+0h]

  v104 = a2;
  v105 = retaddr;
  result = sub_101DCEB0(a1, 0, a5, a6);
  for ( i = (int)result; result; i = (int)result )
  {
    if ( !*(_BYTE *)(i + 225) || *(_BYTE *)(i + 306) != 6 && !*(_DWORD *)(i + 424) )
      goto LABEL_22;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v97 = *(float *)(a1 + 580);
    v98 = *(float *)(a1 + 584);
    v99 = *(float *)(a1 + 588);
    v9 = (float *)(*(int (__thiscall **)(int, int *, float *, int))(*(_DWORD *)i + 520))(i, &v70, &v97, 1);
    v10 = *v9;
    v11 = *(_DWORD *)(a1 + 248);
    v80 = *v9;
    v12 = v9[1];
    v81 = v9[1];
    v13 = v9[2];
    v82 = v9[2];
    if ( (v11 & 4) != 0 )
      v99 = v13;
    v57 = (v99 - v13) * (v99 - v13) + (v98 - v12) * (v98 - v12) + (v97 - v10) * (v97 - v10);
    v14 = off_10689708(v57);
    *(float *)&v103 = v14;
    if ( 0.0 != *(float *)(a1 + 804) && v14 > *(float *)(a1 + 804) )
      goto LABEL_22;
    if ( (*(_DWORD *)(a1 + 248) & 8) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v15 = *(float *)(a1 + 580);
      v16 = *(float *)(a1 + 584);
      v102 = *(float *)(a1 + 588);
      v100 = v15;
      v101 = v16;
      (*(void (__thiscall **)(int, float *, float *, _DWORD, int **, int, int *, _BYTE *, int *, float *, int))(*(_DWORD *)i + 520))(
        i,
        v73,
        &v100,
        0,
        a3,
        a4,
        v60,
        v61,
        v62,
        v63,
        v64);
      if ( 0.0 != *(float *)(a1 + 812) )
      {
        v88 = v73[0] - v100;
        v89 = v73[1] - v101;
        v90 = v73[2] - v102;
        off_10689714();
        v17 = *(float *)(a1 + 812);
        v18 = *(_DWORD *)(a1 + 252) >> 11;
        v77 = v88 * v17;
        v78 = v89 * v17;
        v79 = v17 * v90;
        if ( (v18 & 1) != 0 )
          sub_100DAE60(a1);
        v19 = *(float *)(a1 + 584) + v78;
        v20 = v79 + *(float *)(a1 + 588);
        v100 = *(float *)(a1 + 580) + v77;
        v101 = v19;
        v102 = v20;
      }
      v21 = *(int (__thiscall **)(int))(*(_DWORD *)i + 520);
      v64 = 0;
      v63 = &v100;
      v62 = &v68;
      v22 = (float *)v21(i);
      sub_1001F180((float *)&v62, &v100, v22);
      sub_10265570(a1, 0);
      v61 = v66;
      v60 = &v71;
      a4 = 16395;
      a3 = &v62;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v66, (int)v67, 255, 0, 0, 1, 5.0);
      v23 = 1.0;
      if ( v67[8] < 1.0 && LODWORD(v67[16]) != i )
        goto LABEL_22;
    }
    else
    {
      v23 = 1.0;
    }
    v24 = *(float *)(a1 + 800) - *(float *)&v103 * 0.40000001;
    if ( v24 >= v23 )
      v23 = v24;
    v54 = v23;
    sub_10248110(a1, a1, v54, 64, 0);
    v72[0] = v80 - v97;
    v72[1] = v81 - v98;
    v72[2] = v82 - v99;
    sub_102485A0((int)v65, (int)v72, (int)&v97, 1.0);
    if ( (*(_DWORD *)(a1 + 248) & 2) != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 320))(i) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v25 = (float *)(*(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)i + 520))(i, &v69, a1 + 580, 0);
      v85 = *v25 - *(float *)(a1 + 580);
      v86 = v25[1] - *(float *)(a1 + 584);
      v87 = v25[2] - *(float *)(a1 + 588);
      v26 = off_10689714();
      v55 = *(float *)(a1 + 804) * 0.75;
      v53 = v26;
      v27 = sub_10134630(v53, *(float *)(a1 + 804), v55, 0.0, 1.0);
      v28 = *(_DWORD *)(a1 + 248);
      v76 = v27;
      if ( (v28 & 0x10) != 0 )
      {
        *(float *)&v103 = COERCE_FLOAT(
                            (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                              dword_106B31E4,
                              -30,
                              30));
        v91 = (float)v103;
        *(float *)&v29 = COERCE_FLOAT(
                           (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                             dword_106B31E4,
                             -30,
                             30));
        v30 = *(_DWORD *)i;
        v103 = v29;
        v31 = *(void (__thiscall **)(int))(v30 + 320);
        v92 = (float)v103;
        v93 = 0.0;
        v31(i);
        v74[0] = *(float *)(a1 + 728) + v91;
        v74[1] = *(float *)(a1 + 732) + v92;
        v74[2] = *(float *)(a1 + 736) + v93;
        sub_101E1CC0(v74, 0);
        sub_100D8FC0((void *)i, (int)&v91);
        v27 = v76;
      }
      v32 = *(float *)(a1 + 800);
      v33 = *(_DWORD *)(i + 256);
      v34 = v85 * v32 * v27;
      v35 = v32 * v87;
      v36 = v86 * v32 * v27;
      v37 = v27 * v35;
      v38 = v34 * 2.0;
      v94 = v38;
      v39 = v38;
      v40 = v36;
      v41 = v39;
      v42 = v40 * 2.0;
      v95 = v42;
      v43 = v42;
      v44 = v37;
      v45 = v43;
      v46 = 2.0 * v44;
      v96 = 2.0 * v44;
      if ( (v33 & 0x800000) != 0 )
      {
        v47 = v45 + *(float *)(i + 468);
        v48 = *(float *)(i + 472);
        v94 = v41 + *(float *)(i + 464);
        v49 = v47;
        v50 = v46 + v48;
        v95 = v49;
        v96 = v50;
      }
      else
      {
        v50 = v46;
      }
      if ( v50 > 0.0 && (v33 & 1) != 0 )
      {
        sub_101C73D0((unsigned int *)i, 0);
        if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
          sub_100DAE60(i);
        v51 = *(float *)(i + 580);
        v52 = *(float *)(i + 584);
        v84 = *(float *)(i + 588);
        v83[0] = v51;
        v84 = v84 + 1.0;
        v83[1] = v52;
        sub_100E0D20(i, v83);
      }
      v75[0] = v94;
      v75[1] = v95;
      v75[2] = v96;
      sub_100D9710((float *)(i + 464), v75);
      sub_100EA940((int *)i, 0x800000);
      HIDWORD(v56) = a1;
      LODWORD(v56) = a1;
      sub_1010DD80((_DWORD *)(a1 + 816), v56, 0.0);
    }
    else if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)i + 600))(i, v65);
    }
    else
    {
      sub_100D9E70((int *)i, i, v65);
    }
LABEL_22:
    result = sub_101DCEB0(a1, i, a5, a6);
  }
  return result;
}
