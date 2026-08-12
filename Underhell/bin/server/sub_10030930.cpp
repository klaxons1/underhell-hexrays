// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_10030930@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4, float *a5, float *a6)
{
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  char v10; // cl
  float *v11; // edx
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  double v16; // st7
  const char *v17; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  double v22; // st7
  const char *v23; // eax
  const char *v24; // eax
  int v25; // edx
  float v26; // eax
  int v27; // eax
  float v28; // ecx
  long double v29; // st7
  double v30; // st6
  const char *v31; // eax
  float *v32; // eax
  void (__thiscall *v33)(int, float *, int); // edx
  const char *v34; // eax
  int v35; // eax
  int (__thiscall *v36)(int); // edx
  int v37; // eax
  void (__thiscall *v38)(int, float *, int); // edx
  const char *v39; // eax
  float *v40; // eax
  int v41; // eax
  int v42; // esi
  int v43; // eax
  double v44; // [esp+0h] [ebp-1ECh]
  double v45; // [esp+8h] [ebp-1E4h]
  double v46; // [esp+8h] [ebp-1E4h]
  double v47; // [esp+10h] [ebp-1DCh]
  double v48; // [esp+10h] [ebp-1DCh]
  double v49; // [esp+10h] [ebp-1DCh]
  double v50; // [esp+18h] [ebp-1D4h]
  double v51; // [esp+18h] [ebp-1D4h]
  double v52; // [esp+18h] [ebp-1D4h]
  double v53; // [esp+20h] [ebp-1CCh]
  double v54; // [esp+20h] [ebp-1CCh]
  double v55; // [esp+20h] [ebp-1CCh]
  double v56; // [esp+28h] [ebp-1C4h]
  double v57; // [esp+28h] [ebp-1C4h]
  double v58; // [esp+28h] [ebp-1C4h]
  double v59; // [esp+28h] [ebp-1C4h]
  double v60; // [esp+30h] [ebp-1BCh]
  double v61; // [esp+30h] [ebp-1BCh]
  double v62; // [esp+30h] [ebp-1BCh]
  double v63; // [esp+30h] [ebp-1BCh]
  double v64; // [esp+38h] [ebp-1B4h]
  double v65; // [esp+38h] [ebp-1B4h]
  double v66; // [esp+38h] [ebp-1B4h]
  const char *v67; // [esp+3Ch] [ebp-1B0h]
  int v68; // [esp+50h] [ebp-19Ch] BYREF
  float v69[20]; // [esp+90h] [ebp-15Ch] BYREF
  float v70[16]; // [esp+E0h] [ebp-10Ch] BYREF
  int v71; // [esp+120h] [ebp-CCh] BYREF
  int v72; // [esp+12Ch] [ebp-C0h] BYREF
  _BYTE v73[12]; // [esp+13Ch] [ebp-B0h] BYREF
  float v74[3]; // [esp+148h] [ebp-A4h] BYREF
  float v75[3]; // [esp+154h] [ebp-98h] BYREF
  _BYTE v76[12]; // [esp+160h] [ebp-8Ch] BYREF
  _BYTE v77[32]; // [esp+16Ch] [ebp-80h] BYREF
  float v78; // [esp+18Ch] [ebp-60h]
  char v79; // [esp+197h] [ebp-55h]
  int v80; // [esp+1ACh] [ebp-40h]
  _DWORD v81[2]; // [esp+1BCh] [ebp-30h] BYREF
  _BYTE *v82; // [esp+1C4h] [ebp-28h]
  int v83; // [esp+1C8h] [ebp-24h]
  int v84; // [esp+1CCh] [ebp-20h] BYREF
  float v85; // [esp+1D0h] [ebp-1Ch]
  int v86; // [esp+1D4h] [ebp-18h]
  float v87; // [esp+1D8h] [ebp-14h]
  float v88; // [esp+1DCh] [ebp-10h]
  _DWORD v89[3]; // [esp+1E0h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1ECh] [ebp+0h]

  v89[0] = a2;
  v89[1] = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(float *)(a1 + 2544);
  v8 = *(_DWORD *)(a1 + 712);
  v81[0] = *(_DWORD *)(a1 + 704);
  v9 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v81[1] = v7;
  v82 = (_BYTE *)v8;
  if ( (v9 & 1) != 0 )
    sub_100DAE60(a1);
  sub_10425A30(a1 + 580, v81);
  sub_10425BE0(&v68, a4 + 92, v70);
  *a5 = v70[3];
  a5[1] = v70[7];
  a5[2] = v70[11];
  sub_10421A90(v70, a6);
  v10 = *(_DWORD *)(dword_1069076C + 48) != 0;
  LOBYTE(v87) = v10;
  if ( v10 )
  {
    sub_1011CB60((int)a5, (int)a6, 20.0, 1, 0.1);
    v10 = LOBYTE(v87);
  }
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
  {
    sub_100DAE60(a3);
    v10 = LOBYTE(v87);
  }
  v11 = a5;
  v12 = *a5 - *(float *)(a3 + 580);
  v13 = v12 * v12;
  v14 = a5[1] - *(float *)(a3 + 584);
  v15 = a5[2] - *(float *)(a3 + 588);
  v16 = v15 * v15 + v14 * v14 + v13;
  *(float *)&v83 = v16;
  if ( v16 > *(float *)(a4 + 56) )
  {
    if ( v10
      && ((*(_DWORD *)(a1 + 236) & 0x1000) != 0 || (*(_DWORD *)(a3 + 236) & 0x1000) != 0)
      && 2.0 == *(float *)(dword_1069076C + 44) )
    {
      if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(a3);
        v11 = a5;
      }
      if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(a3);
        v11 = a5;
      }
      if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(a3);
        v11 = a5;
      }
      v64 = v11[2];
      v60 = v11[1];
      v56 = *v11;
      v53 = *(float *)(a4 + 56);
      v50 = *(float *)(a3 + 588);
      v47 = *(float *)(a3 + 584);
      v45 = *(float *)(a3 + 580);
      v44 = *(float *)&v83;
      v17 = (const char *)sub_100D6390(a1);
      Msg(
        "   %s distsqr: %0.2f (%0.2f %0.2f %0.2f), desired: <%0.2f (%0.2f %0.2f %0.2f)\n",
        v17,
        v44,
        v45,
        v47,
        v50,
        v53,
        v56,
        v60,
        v64);
    }
    return 0;
  }
  if ( v10 )
  {
    v19 = *(const char **)a4;
    if ( !*(_DWORD *)a4 )
      v19 = String;
    v67 = v19;
    v20 = (const char *)sub_100D6390(a1);
    Msg("DYNINT: (%s) testing interaction \"%s\"\n", v20, v67);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v65 = *(float *)(a1 + 588);
    v61 = *(float *)(a1 + 584);
    v57 = *(float *)(a1 + 580);
    v21 = (const char *)sub_100D6390(a1);
    Msg("   %s is at: %0.2f %0.2f %0.2f\n", v21, v57, v61, v65);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v66 = a5[2];
    v62 = a5[1];
    v58 = *a5;
    v54 = *(float *)(a3 + 588);
    v51 = *(float *)(a3 + 584);
    v48 = *(float *)(a3 + 580);
    v22 = *(float *)&v83;
    v46 = *(float *)&v83;
    v23 = (const char *)sub_100D6390(a1);
    Msg(
      "   %s distsqr: %0.2f (%0.2f %0.2f %0.2f), desired: (%0.2f %0.2f %0.2f)\n",
      v23,
      v46,
      v48,
      v51,
      v54,
      v58,
      v62,
      v66);
    sub_10023490((_DWORD *)a3, *(_DWORD *)(a3 + 908));
    v24 = (const char *)sub_100BE1F0(*(_DWORD *)(a3 + 908));
    Msg("   %s Speed: %.2f\n", v24, v22);
  }
  if ( (*(_BYTE *)(a4 + 4) & 2) != 0 )
  {
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v25 = *(int *)(a3 + 704);
    v26 = *(float *)(a3 + 708);
    v86 = *(int *)(a3 + 712);
    v84 = v25;
    v85 = v26;
    v27 = 0;
    LODWORD(v28) = (char *)a6 - (char *)&v84;
    *(float *)&v83 = 0.0;
    LODWORD(v88) = (char *)a6 - (char *)&v84;
    while ( 1 )
    {
      v29 = *((float *)&v84 + v27);
      sub_10424C10(*((float *)&v84 + v27), *(float *)((char *)&v84 + 4 * v27 + LODWORD(v28)));
      if ( fabs(v29) > 4.0 )
        return 0;
      if ( ++v83 >= 3 )
      {
        if ( LOBYTE(v87) )
        {
          LODWORD(v88) = (unsigned __int16)(int)(a6[2] * 182.04445);
          v30 = (double)SLODWORD(v88) * 0.0054931641;
          LODWORD(v88) = (unsigned __int16)(int)(a6[1] * 182.04445);
          v63 = (double)SLODWORD(v88) * 0.0054931641;
          v59 = (double)(unsigned __int16)(int)(*a6 * 182.04445) * 0.0054931641;
          v55 = (double)(unsigned __int16)(int)(*(float *)&v86 * 182.04445) * 0.0054931641;
          v52 = (double)(unsigned __int16)(int)(v85 * 182.04445) * 0.0054931641;
          LODWORD(v88) = (unsigned __int16)(int)(182.04445 * *(float *)&v84);
          v49 = 0.0054931641 * (double)SLODWORD(v88);
          v31 = (const char *)sub_100D6390(a1);
          Msg(
            "   %s angle matched: (%0.2f %0.2f %0.2f), desired (%0.2f, %0.2f, %0.2f)\n",
            v31,
            v49,
            v52,
            v55,
            v59,
            v63,
            v30);
        }
        break;
      }
      v28 = v88;
      v27 = v83;
    }
  }
  v88 = COERCE_FLOAT((*(int (__thiscall **)(int, int *))(*(_DWORD *)a3 + 504))(a3, &v71));
  v32 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504))(a1, v73);
  sub_1001F180(v69, v32, (float *)LODWORD(v88));
  sub_10265570(a1, 0);
  v33 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v87 = COERCE_FLOAT(v76);
  *(float *)&v86 = COERCE_FLOAT(&v84);
  v33(dword_106B31F4, v69, 33701899);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v76, (int)v77, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v78 && v80 != a3 )
  {
    if ( LOBYTE(v87) )
    {
      v34 = (const char *)sub_100D6390(a1);
      Msg("   %s Interaction was blocked.\n", v34);
      sub_1011BC50((int)v76, (int)v77, 0, 255, 0, 1, 1.0);
      v35 = *(_DWORD *)a3;
      v88 = 1.0;
      LODWORD(v87) = 1;
      *(float *)&v86 = 0.0;
      v85 = 0.0;
      v84 = 255;
      *(float *)&v83 = COERCE_FLOAT(v77);
      v36 = *(int (__thiscall **)(int))(v35 + 504);
      v82 = v73;
      v37 = v36(a3);
      sub_1011BC50(v37, (int)v82, v83, v84, SLODWORD(v85), v86, v87);
    }
    return 0;
  }
  if ( LOBYTE(v87) )
    sub_1011BC50((int)v76, (int)v77, 0, 255, 0, 1, 1.0);
  sub_101117D0(0.25, v74);
  *(float *)&v84 = 0.0;
  v85 = 0.0;
  sub_101117D0(0.25, v75);
  sub_1001F180(v69, v74, v75);
  sub_10265570(a1, 0);
  v38 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v87 = COERCE_FLOAT(v76);
  *(float *)&v86 = COERCE_FLOAT(&v84);
  v38(dword_106B31F4, v69, 33701899);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v76, (int)v77, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v78 || v80 == a3 )
  {
    if ( LOBYTE(v87) )
      sub_1011BC50((int)v76, (int)v77, 0, 255, 0, 1, 1.0);
    sub_10265720(a3, a1, 0);
    v88 = COERCE_FLOAT(sub_10073730(*(_DWORD *)(a3 + 1676)));
    v40 = (float *)sub_10073710(*(_DWORD *)(a3 + 1676));
    sub_1001F200(v69, a5, a5, v40, (float *)LODWORD(v88));
    (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v69,
      33570827,
      &v72,
      v76);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v76, (int)v77, 255, 255, 0, 1, -1.0);
    if ( v79 )
    {
      if ( LOBYTE(v87) )
      {
        v41 = sub_10073730(*(_DWORD *)(a3 + 1676));
        v42 = *(_DWORD *)(a3 + 1676);
        v87 = 1.0;
        v86 = 1;
        v85 = 0.0;
        *(float *)&v84 = 0.0;
        v83 = 255;
        v82 = (_BYTE *)v41;
        v43 = sub_10073710(v42);
        sub_1011BB20((int)a5, v43, (int)v82, v83, v84, SLODWORD(v85), v86, v87);
      }
      return 0;
    }
    else
    {
      return sub_10029A50((int)v89, a1, a3, SLOBYTE(v87)) != 0;
    }
  }
  else
  {
    if ( !LOBYTE(v87) )
      return 0;
    v39 = (const char *)sub_100D6390(a1);
    Msg("   %s Interaction was blocked.\n", v39);
    sub_1011BC50((int)v76, (int)v77, 0, 255, 0, 1, 1.0);
    sub_1011BC50((int)v75, (int)v77, 255, 0, 0, 1, 1.0);
    return 0;
  }
}
