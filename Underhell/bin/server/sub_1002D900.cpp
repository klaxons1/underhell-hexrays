int __usercall sub_1002D900@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int (__thiscall *v6)(_DWORD *); // eax
  _DWORD *v7; // eax
  double v9; // st7
  int (__thiscall *v10)(_DWORD *); // eax
  float *v11; // eax
  int v12; // edx
  double v13; // st7
  int (__thiscall *v14)(_DWORD *); // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int (__thiscall *v18)(_DWORD *, int *); // edx
  double v19; // st6
  double v20; // st5
  long double v21; // st3
  long double v22; // st2
  long double v23; // rtt
  long double v24; // st2
  float *v25; // eax
  int v26; // eax
  int (__thiscall *v27)(_DWORD *, int *, _DWORD); // edx
  float *v28; // eax
  int (__thiscall *v29)(_DWORD *); // edx
  int v30; // eax
  int (__thiscall *v31)(_DWORD *, int *, _DWORD); // edx
  float *v32; // eax
  int (__thiscall *v33)(_DWORD *); // edx
  int v34; // eax
  int v35; // edx
  int (__thiscall *v36)(_DWORD *); // edx
  int v37; // eax
  int v38; // edx
  float v39; // ecx
  int v40; // ebx
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // edi
  int i; // ebx
  int v45; // edi
  int v46; // eax
  int j; // ebx
  int *v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // edi
  int (__thiscall *v52)(_DWORD *, int); // eax
  double v53; // st7
  float v54; // ecx
  float v55; // edx
  double v56; // st4
  double v57; // st7
  double v58; // st4
  double v59; // st5
  int (__thiscall *v60)(int, int *); // edx
  float *v61; // eax
  double v62; // st7
  double v63; // st6
  double v64; // st5
  double v65; // st1
  double v66; // rtt
  double v67; // st1
  double v68; // rt1
  double v69; // st1
  int v70; // edi
  int v71; // ebx
  int v72; // edi
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // ecx
  int *v77; // eax
  unsigned int v78; // ecx
  int v79; // eax
  int v80; // eax
  int v81; // [esp+3Ch] [ebp-20Ch]
  int v82; // [esp+40h] [ebp-208h]
  int v83; // [esp+44h] [ebp-204h]
  int v84; // [esp+44h] [ebp-204h]
  int v85; // [esp+44h] [ebp-204h]
  int v86; // [esp+48h] [ebp-200h]
  char *v87; // [esp+4Ch] [ebp-1FCh]
  float v88; // [esp+50h] [ebp-1F8h]
  float v89; // [esp+50h] [ebp-1F8h]
  float v91; // [esp+58h] [ebp-1F0h]
  float v92; // [esp+5Ch] [ebp-1ECh]
  _BYTE v93[256]; // [esp+60h] [ebp-1E8h] BYREF
  _BYTE v94[40]; // [esp+160h] [ebp-E8h] BYREF
  int v95; // [esp+188h] [ebp-C0h]
  int v96; // [esp+18Ch] [ebp-BCh]
  float v97; // [esp+194h] [ebp-B4h]
  int v98; // [esp+1A0h] [ebp-A8h]
  int v99[3]; // [esp+1B0h] [ebp-98h] BYREF
  int v100[3]; // [esp+1BCh] [ebp-8Ch] BYREF
  int v101[3]; // [esp+1C8h] [ebp-80h] BYREF
  float v102; // [esp+1D4h] [ebp-74h]
  int v103; // [esp+1D8h] [ebp-70h]
  float v104; // [esp+1DCh] [ebp-6Ch]
  int v105[3]; // [esp+1E0h] [ebp-68h] BYREF
  int v106[3]; // [esp+1ECh] [ebp-5Ch] BYREF
  int v107; // [esp+1F8h] [ebp-50h]
  float v108; // [esp+1FCh] [ebp-4Ch]
  float v109; // [esp+200h] [ebp-48h]
  float v110; // [esp+204h] [ebp-44h]
  int v111; // [esp+208h] [ebp-40h] BYREF
  float v112; // [esp+20Ch] [ebp-3Ch]
  float v113; // [esp+210h] [ebp-38h]
  int v114; // [esp+214h] [ebp-34h] BYREF
  float v115; // [esp+218h] [ebp-30h]
  float v116; // [esp+21Ch] [ebp-2Ch]
  float v117; // [esp+220h] [ebp-28h] BYREF
  float v118; // [esp+224h] [ebp-24h]
  float v119; // [esp+228h] [ebp-20h]
  float v120; // [esp+22Ch] [ebp-1Ch] BYREF
  int v121; // [esp+230h] [ebp-18h] BYREF
  float v122; // [esp+234h] [ebp-14h]
  float v123; // [esp+238h] [ebp-10h]
  int v124; // [esp+23Ch] [ebp-Ch] BYREF
  int v125; // [esp+240h] [ebp-8h] BYREF
  int v126; // [esp+244h] [ebp-4h] BYREF

  if ( (a1[59] & 0x10000) != 0 )
  {
    sub_1004AF00(a1);
    v3 = *a1;
    v4 = sub_100CF460(a1);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(v3 + 960))(a1, v4, 0, 0);
    if ( a1[55] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 464))(a1, a1 + 55);
      a1[55] = 0;
    }
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  }
  v5 = a1[59];
  if ( (v5 & 0x800000) != 0 )
  {
    sub_10247EC0(v94);
    v6 = *(int (__thiscall **)(_DWORD *))(*a1 + 8);
    v97 = (float)(int)a1[55];
    v96 = *(_DWORD *)v6(a1);
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
      v7 = (_DWORD *)sub_10261B20();
    else
      v7 = a1;
    if ( v7 )
      v95 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
    else
      v95 = -1;
    a1[59] &= ~0x800000u;
    v98 = 0;
    return sub_100D9E70(v94);
  }
  else
  {
    if ( (v5 & 0x4000) != 0 )
    {
      sub_10081500(a1[647]);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 296))(a1) )
      {
        sub_102650F0((int)&v121, *(float *)(a1[651] + 20));
        v9 = sub_100737B0(a1[419]);
        v10 = *(int (__thiscall **)(_DWORD *))(*a1 + 576);
        v117 = *(float *)&v121 * v9 * 0.5;
        v118 = v122 * v9 * 0.5;
        v119 = v9 * v123 * 0.5;
        v11 = (float *)v10(a1);
        v12 = *a1;
        *(float *)&v114 = v117 + *v11;
        v115 = v11[1] + v118;
        v13 = v11[2];
        v14 = *(int (__thiscall **)(_DWORD *))(v12 + 576);
        v116 = v13 + v119;
        v15 = v14(a1);
        sub_1011BC50(v15, (int)&v114, 255, 255, 255, 1, 0.0);
      }
    }
    if ( (dword_1069042C & 1) == 0 && ((unsigned __int8)sub_100697A0(71, 1) || (unsigned __int8)sub_100697A0(72, 1)) )
    {
      *(float *)&v121 = 5.0;
      v122 = 5.0;
      v123 = 5.0;
      *(float *)&v114 = -5.0;
      v115 = -5.0;
      v116 = -5.0;
      sub_1011BB20((int)(a1 + 713), (int)&v114, (int)&v121, 255, 0, 255, 0, 0.0);
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_1011C3A0((int)(a1 + 145), (int)(a1 + 713), 16.0, 255, 0, 255, 64, 1, 0.0);
    }
    if ( (a1[59] & 0x1000) != 0 && !*(_DWORD *)(dword_10690454 + 48) )
      sub_1011BBD0((int)a1, 255, 0, 0, 20, 0.0);
    if ( (a1[59] & 0x2000) != 0 && sub_1008DDF0(a1[649]) != -1 )
    {
      v16 = a1[419];
      *(float *)&v121 = 10.0;
      v122 = 10.0;
      v123 = 10.0;
      *(float *)&v114 = -10.0;
      v115 = -10.0;
      v116 = -10.0;
      v17 = sub_1008D160(v106, v16);
      sub_1011BB20(v17, (int)&v114, (int)&v121, 255, 255, 255, 0, 0.0);
    }
    if ( (a1[59] & 0x400000) != 0 || *(_DWORD *)(dword_1069088C + 48) == 1 )
    {
      v120 = acos(*((float *)a1 + 421));
      (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 920))(a1, &v111);
      v107 = (int)&v126;
      *(float *)&v124 = COERCE_FLOAT(&v125);
      *(float *)&v126 = cos(v120);
      *(float *)&v125 = sin(v120);
      v18 = *(int (__thiscall **)(_DWORD *, int *))(*a1 + 504);
      v19 = *(float *)&v111 * *(float *)&v126 - v112 * *(float *)&v125;
      v20 = *(float *)&v126 * v112 + *(float *)&v125 * *(float *)&v111;
      v21 = -v120;
      v22 = sin(v21);
      *(float *)&v125 = v22;
      v23 = v22;
      v24 = cos(v21);
      *(float *)&v126 = v24;
      v108 = *(float *)&v111 * v24 - v112 * v23;
      v109 = v24 * v112 + v23 * *(float *)&v111;
      v110 = v113;
      v117 = v19 * 200.0;
      v118 = v20 * 200.0;
      v119 = v113 * 200.0;
      v25 = (float *)v18(a1, v106);
      *(float *)&v121 = v117 + *v25;
      v122 = v25[1] + v118;
      v123 = v25[2] + v119;
      v26 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
      sub_1011C790(v26, (int)v105, COERCE_FLOAT(&v121), COERCE_INT(64.0), 255, 0, 0, 50, 0.0);
      v27 = *(int (__thiscall **)(_DWORD *, int *, _DWORD))(*a1 + 504);
      v117 = v108 * 200.0;
      v118 = v109 * 200.0;
      v119 = 200.0 * v110;
      v28 = (float *)v27(a1, v106, 0.0);
      v29 = *(int (__thiscall **)(_DWORD *))(*a1 + 504);
      *(float *)&v121 = *v28 + v117;
      v122 = v28[1] + v118;
      v123 = v28[2] + v119;
      v30 = v29(a1);
      sub_1011C790(v30, (int)v105, COERCE_FLOAT(&v121), COERCE_INT(64.0), 255, 0, 0, 50, 0.0);
      v31 = *(int (__thiscall **)(_DWORD *, int *, _DWORD))(*a1 + 504);
      v108 = *(float *)&v111 * 100.0;
      v109 = v112 * 100.0;
      v110 = 100.0 * v113;
      v32 = (float *)v31(a1, v106, 0.0);
      v33 = *(int (__thiscall **)(_DWORD *))(*a1 + 504);
      *(float *)&v121 = v108 + *v32;
      v122 = v32[1] + v109;
      v123 = v32[2] + v110;
      v92 = 0.0;
      v34 = v33(a1);
      sub_1011C790(v34, (int)v105, COERCE_FLOAT(&v121), COERCE_INT(8.0), 0, 255, 0, 50, 0.0);
      v35 = *a1;
      *(float *)&v121 = 2.0;
      v36 = *(int (__thiscall **)(_DWORD *))(v35 + 504);
      v122 = 2.0;
      v123 = 2.0;
      *(float *)&v114 = -2.0;
      v115 = -2.0;
      v116 = -2.0;
      v91 = 0.0;
      v37 = v36(a1);
      sub_1011BB20(v37, (int)v106, (int)&v114, (int)&v121, 0, 255, 0, COERCE_FLOAT(128));
    }
    if ( (a1[59] & 0x20000000) != 0 )
    {
      v38 = dword_10690E04;
      v39 = 0.0;
      v40 = dword_10690E04 != 0 ? dword_10690DF8 : 0;
      *(float *)&v124 = 0.0;
      *(float *)&v126 = 0.0;
      *(float *)&v125 = 0.0;
      v120 = 0.0;
      if ( dword_10690E04 > 0 )
      {
        do
        {
          v41 = *(_DWORD **)(v40 + 4 * LODWORD(v39));
          if ( v41 && v41 != a1 )
          {
            v42 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1080))(a1, *(_DWORD *)(v40 + 4 * LODWORD(v39)));
            sub_1025F810(v42, &v124, &v126, &v125);
            v43 = *(_DWORD *)(v40 + 4 * LODWORD(v120));
            if ( (*(_DWORD *)(v43 + 252) & 0x800) != 0 )
              sub_100DAE60(*(_DWORD *)(v40 + 4 * LODWORD(v120)));
            if ( (a1[63] & 0x800) != 0 )
              sub_100DAE60(a1);
            sub_1011C3A0((int)(a1 + 145), v43 + 580, 16.0, v124, v126, v125, 64, 1, 0.0);
            v38 = dword_10690E04;
            v39 = v120;
          }
          ++LODWORD(v39);
          v120 = v39;
        }
        while ( SLODWORD(v39) < v38 );
      }
      for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
      {
        v45 = sub_1025FB50(i);
        if ( v45 )
        {
          v46 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1080))(a1, v45);
          sub_1025F810(v46, &v124, &v126, &v125);
          if ( (*(_DWORD *)(v45 + 252) & 0x800) != 0 )
            sub_100DAE60(v45);
          if ( (a1[63] & 0x800) != 0 )
            sub_100DAE60(a1);
          sub_1011C3A0((int)(a1 + 145), v45 + 580, 16.0, v124, v126, v125, 64, 1, 0.0);
        }
      }
    }
    if ( (a1[59] & 0x20000) != 0 )
    {
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
      for ( j = sub_10077AB0(&v120); j; j = sub_10077340(&v120) )
      {
        if ( *(_DWORD *)j != -1 )
        {
          v48 = &off_1061BE18[4 * (*(_DWORD *)j & 0xFFF) + 1];
          v49 = *(_DWORD *)j >> 12;
          if ( off_1061BE18[4 * (*(_DWORD *)j & 0xFFF) + 2] == v49 )
          {
            if ( *v48 )
            {
              v50 = off_1061BE18[4 * (*(_DWORD *)j & 0xFFF) + 2] == v49 ? *v48 : 0;
              v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 288))(v50);
              if ( v51 )
              {
                v52 = *(int (__thiscall **)(_DWORD *, int))(*a1 + 368);
                v93[0] = 0;
                if ( v51 == v52(a1, a2) )
                {
                  sub_10429750((int)v93, "Current Enemy", 255, -1);
                }
                else
                {
                  if ( v51 == sub_10022C40(a1) )
                    v87 = "Current Target";
                  else
                    v87 = "Other Memory";
                  sub_10429750((int)v93, v87, 255, -1);
                }
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 1768))(a1, v51) )
                  sub_10429750((int)v93, " (Unreachable)", 255, -1);
                if ( *(_BYTE *)(j + 53) )
                  sub_10429750((int)v93, " (Eluded)", 255, -1);
                a2 = v51;
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 1768))(a1) )
                {
                  v53 = 0.0;
                  *(float *)&v125 = 0.0;
                  *(float *)&v126 = 255.0;
                  *(float *)&v124 = 0.0;
                }
                else if ( *(_BYTE *)(j + 53) )
                {
                  v53 = 0.0;
                  *(float *)&v125 = 0.0;
                  *(float *)&v126 = 0.0;
                  *(float *)&v124 = 255.0;
                }
                else if ( v51 == (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
                {
                  *(float *)&v125 = 255.0;
                  v53 = 0.0;
                  *(float *)&v126 = 0.0;
                  *(float *)&v124 = 0.0;
                }
                else if ( v51 == sub_10022C40(a1) )
                {
                  *(float *)&v125 = 255.0;
                  *(float *)&v126 = 0.0;
                  v53 = 0.0;
                  *(float *)&v124 = 255.0;
                }
                else
                {
                  *(float *)&v125 = 255.0;
                  *(float *)&v126 = 100.0;
                  *(float *)&v124 = 100.0;
                  v53 = 0.0;
                }
                v54 = *(float *)(j + 8);
                v55 = *(float *)(j + 12);
                v88 = v53;
                v121 = *(int *)(j + 4);
                v122 = v54;
                v123 = v55;
                sub_1011CF30((int)&v121, (int)v93, 0, v88);
                if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v51 + 320))(v51) )
                  goto LABEL_82;
                if ( (*(_DWORD *)(v51 + 252) & 0x800) != 0 )
                  sub_100DAE60(v51);
                v56 = *(float *)(j + 4) - *(float *)(v51 + 580);
                v57 = v56 * v56;
                v58 = *(float *)(j + 8) - *(float *)(v51 + 584);
                v59 = *(float *)(j + 12) - *(float *)(v51 + 588);
                v89 = v59 * v59 + v58 * v58 + v57;
                if ( off_10689708(v89) < 10.0 )
                {
                  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v51 + 904))(v51, &v117);
                  v60 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v51 + 504);
                  v108 = v117 * 10.0;
                  v109 = v118 * 10.0;
                  v110 = 10.0 * v119;
                  v61 = (float *)v60(v51, v99);
                  v62 = *v61 + v108;
                  *(float *)&v111 = v62;
                  v63 = v61[1] + v109;
                  v112 = v63;
                  v113 = v61[2] + v110;
                  v64 = v119 * 0.0;
                  v65 = v118 * 2.0 - v64;
                  *(float *)&v114 = v65;
                  v66 = v65;
                  v67 = v64 - v117 * 2.0;
                  v115 = v67;
                  v68 = v67;
                  v69 = v117 * 0.0 - v118 * 0.0;
                  v116 = v69;
                  v102 = v62 - v66;
                  *(float *)&v103 = v63 - v68;
                  v104 = v113 - v69;
                  *(float *)v101 = v102;
                  v101[1] = v103;
                  *(float *)&v101[2] = v104 - 2.0;
                  *(float *)v100 = v66 + v62;
                  *(float *)&v100[1] = v63 + v68;
                  *(float *)&v100[2] = v69 + v113 + 2.0;
                  v70 = (int)*(float *)&v124;
                  v71 = (int)*(float *)&v126;
                  v107 = (int)*(float *)&v125;
                  sub_1011BC50((int)v100, (int)v101, v107, v71, v70, 0, 0.0);
                  *(float *)v105 = *(float *)&v111 - *(float *)&v114;
                  *(float *)&v105[1] = v112 - v115;
                  *(float *)&v105[2] = v113 - v116 + 2.0;
                  *(float *)v106 = *(float *)&v114 + *(float *)&v111;
                  *(float *)&v106[1] = v112 + v115;
                  *(float *)&v106[2] = v116 + v113 - 2.0;
                  sub_1011BC50((int)v106, (int)v105, v107, v71, v70, 0, 0.0);
                  sub_1011CF30((int)&v111, (int)v93, 0, 0.0);
                }
                else
                {
LABEL_82:
                  v72 = *(_DWORD *)(v51 + 1676);
                  v86 = (int)*(float *)&v124;
                  v83 = (int)*(float *)&v126;
                  v82 = (int)*(float *)&v125;
                  v81 = sub_10073730(v72);
                  v73 = sub_10073710(v72);
                  sub_1011C000((int)&v121, v73, v81, v82, v83, v86, 0, 0.0);
                }
              }
            }
          }
        }
        (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
      }
    }
    if ( (a1[59] & 0x200000) != 0 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
      {
        v74 = (*(int (__thiscall **)(_DWORD *, float, float))(*a1 + 368))(
                a1,
                COERCE_FLOAT(LODWORD(v91)),
                COERCE_FLOAT(LODWORD(v92)));
        v84 = (*(int (__thiscall **)(int))(*(_DWORD *)v74 + 504))(v74);
        v75 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
        sub_1011BC50(v75, (int)v106, v84, (int)v99, 255, 0, 0.0);
      }
      v76 = a1[605];
      if ( v76 != -1 )
      {
        v77 = &off_1061BE18[4 * (a1[605] & 0xFFF) + 1];
        v78 = v76 >> 12;
        if ( off_1061BE18[4 * (a1[605] & 0xFFF) + 2] == v78 )
        {
          if ( *v77 )
          {
            if ( off_1061BE18[4 * (a1[605] & 0xFFF) + 2] == v78 )
              v79 = *v77;
            else
              v79 = 0;
            v85 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v79 + 504))(v79, v99, 0);
            v80 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
            sub_1011BC50(v80, (int)v106, v85, 0, 255, 1, 0.0);
          }
        }
      }
    }
    sub_1008EB80(a1[59]);
    return sub_100DF330((int)a1);
  }
}
