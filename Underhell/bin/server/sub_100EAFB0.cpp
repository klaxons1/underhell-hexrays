// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100EAFB0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // al
  unsigned __int8 (__thiscall *v16)(int); // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  float *v20; // eax
  double v21; // st3
  double v22; // st6
  double v23; // rt0
  float *v24; // edi
  void (__thiscall *v25)(int, float *, int, _DWORD *); // edx
  double v26; // st7
  double v27; // st6
  double v28; // st5
  double v29; // st7
  double v30; // st7
  float v31; // ecx
  float v32; // edx
  double v33; // st7
  double v34; // st7
  int v35; // eax
  int v36; // eax
  int v37; // edi
  int v38; // eax
  float *v39; // edi
  float v40; // edi
  float v41; // ecx
  void (__thiscall *v42)(_DWORD, _BYTE *, float *, _DWORD *, float *, _DWORD); // edx
  double v43; // st7
  int (__thiscall ***v44)(_DWORD, _DWORD); // eax
  int (__thiscall ***v45)(_DWORD, _DWORD); // eax
  int v46; // eax
  int v47; // eax
  double v48; // st7
  float *v49; // eax
  int v50; // eax
  float *v51; // ecx
  int v52; // ecx
  int v53; // edx
  float v54; // edi
  int v55; // edi
  int v56; // ecx
  int v57; // eax
  int i; // edi
  bool v59; // sf
  int result; // eax
  int v61; // [esp+3Ch] [ebp-2E0h]
  int v62; // [esp+3Ch] [ebp-2E0h]
  _BYTE v64[88]; // [esp+48h] [ebp-2D4h] BYREF
  int v65; // [esp+A0h] [ebp-27Ch] BYREF
  float v66; // [esp+A4h] [ebp-278h]
  float v67; // [esp+A8h] [ebp-274h]
  float v68; // [esp+ACh] [ebp-270h]
  int v69; // [esp+ECh] [ebp-230h]
  float v70; // [esp+F0h] [ebp-22Ch] BYREF
  float v71; // [esp+F4h] [ebp-228h]
  float v72; // [esp+F8h] [ebp-224h]
  _BYTE v73[12]; // [esp+FCh] [ebp-220h] BYREF
  int v74; // [esp+108h] [ebp-214h] BYREF
  float v75[18]; // [esp+120h] [ebp-1FCh] BYREF
  __int16 v76; // [esp+168h] [ebp-1B4h]
  int v77; // [esp+16Ch] [ebp-1B0h]
  float v78; // [esp+170h] [ebp-1ACh]
  int v79; // [esp+174h] [ebp-1A8h]
  char v80; // [esp+178h] [ebp-1A4h]
  float v81[3]; // [esp+184h] [ebp-198h] BYREF
  float v82[3]; // [esp+190h] [ebp-18Ch] BYREF
  float v83[3]; // [esp+19Ch] [ebp-180h] BYREF
  float v84[3]; // [esp+1A8h] [ebp-174h] BYREF
  float v85[3]; // [esp+1B4h] [ebp-168h] BYREF
  float v86; // [esp+1C0h] [ebp-15Ch] BYREF
  float v87; // [esp+1C4h] [ebp-158h]
  float v88; // [esp+1C8h] [ebp-154h]
  float v89; // [esp+1CCh] [ebp-150h]
  float v90; // [esp+1D0h] [ebp-14Ch]
  float v91; // [esp+1D4h] [ebp-148h]
  float v92; // [esp+1D8h] [ebp-144h]
  float v93; // [esp+1E0h] [ebp-13Ch]
  float v94; // [esp+1E4h] [ebp-138h]
  float v95; // [esp+1E8h] [ebp-134h]
  float v96; // [esp+1F0h] [ebp-12Ch]
  float v97; // [esp+1F4h] [ebp-128h]
  float v98; // [esp+1F8h] [ebp-124h]
  int v99; // [esp+1FCh] [ebp-120h]
  int v100; // [esp+200h] [ebp-11Ch]
  int v101; // [esp+204h] [ebp-118h]
  __int16 v102; // [esp+208h] [ebp-114h]
  float *v103; // [esp+20Ch] [ebp-110h]
  int v104; // [esp+210h] [ebp-10Ch]
  float v105; // [esp+224h] [ebp-F8h] BYREF
  float v106; // [esp+228h] [ebp-F4h]
  float v107; // [esp+22Ch] [ebp-F0h]
  float v108; // [esp+230h] [ebp-ECh] BYREF
  float v109; // [esp+234h] [ebp-E8h]
  float v110; // [esp+238h] [ebp-E4h]
  float v111; // [esp+23Ch] [ebp-E0h] BYREF
  float v112; // [esp+240h] [ebp-DCh]
  float v113; // [esp+244h] [ebp-D8h]
  float v114; // [esp+25Ch] [ebp-C0h]
  char v115; // [esp+267h] [ebp-B5h]
  float v116; // [esp+268h] [ebp-B4h]
  int v117; // [esp+26Ch] [ebp-B0h]
  int v118; // [esp+270h] [ebp-ACh]
  int v119; // [esp+274h] [ebp-A8h]
  __int16 v120; // [esp+278h] [ebp-A4h]
  float *v121; // [esp+27Ch] [ebp-A0h]
  int v122; // [esp+280h] [ebp-9Ch]
  float v123; // [esp+288h] [ebp-94h] BYREF
  float v124; // [esp+28Ch] [ebp-90h]
  float v125; // [esp+290h] [ebp-8Ch]
  _DWORD v126[3]; // [esp+294h] [ebp-88h] BYREF
  int v127; // [esp+2A0h] [ebp-7Ch]
  int v128; // [esp+2A4h] [ebp-78h]
  int v129; // [esp+2A8h] [ebp-74h]
  int v130; // [esp+2ACh] [ebp-70h]
  int v131; // [esp+2B0h] [ebp-6Ch]
  int v132; // [esp+2B4h] [ebp-68h]
  float v133; // [esp+2B8h] [ebp-64h]
  _DWORD *v134; // [esp+2BCh] [ebp-60h]
  float v135; // [esp+2C0h] [ebp-5Ch] BYREF
  float v136; // [esp+2C4h] [ebp-58h]
  float v137; // [esp+2C8h] [ebp-54h]
  float v138; // [esp+2CCh] [ebp-50h]
  int v139; // [esp+2D0h] [ebp-4Ch]
  int v140; // [esp+2D4h] [ebp-48h]
  int v141; // [esp+2D8h] [ebp-44h]
  int v142; // [esp+2DCh] [ebp-40h]
  int v143; // [esp+2E0h] [ebp-3Ch]
  int v144; // [esp+2E4h] [ebp-38h]
  int v145; // [esp+2E8h] [ebp-34h]
  int v146; // [esp+2ECh] [ebp-30h]
  float *v147; // [esp+2F0h] [ebp-2Ch]
  int *v148; // [esp+2F4h] [ebp-28h]
  int v149; // [esp+2F8h] [ebp-24h]
  int v150; // [esp+2FCh] [ebp-20h]
  float v151; // [esp+300h] [ebp-1Ch]
  int v152; // [esp+304h] [ebp-18h]
  float v153; // [esp+308h] [ebp-14h]
  float *v154; // [esp+30Ch] [ebp-10h]
  _DWORD v155[3]; // [esp+310h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+31Ch] [ebp+0h]

  v155[0] = a2;
  v155[1] = retaddr;
  v5 = (int)a1;
  v153 = *(float *)&a1;
  v6 = (_DWORD *)sub_102D9B20(a3, a4);
  v7 = a5;
  v61 = *(_DWORD *)(a5 + 44);
  v134 = v6;
  *(float *)&v8 = COERCE_FLOAT(sub_100B9D70(v6, v61));
  v62 = *(_DWORD *)(a5 + 44);
  v151 = *(float *)&v8;
  v150 = sub_100B9DA0(v134, v62);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
  {
    v148 = (int *)__RTDynamicCast(
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBasePlayer `RTTI Type Descriptor',
                    0);
    v9 = sub_100CF460(v148);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1268))(v9);
    if ( v10 != -1 )
    {
      if ( v10 == 5 && *(_DWORD *)a5 == 12 )
        LOBYTE(v10) = 6;
      sub_101E3110(v10, 0, 4);
    }
  }
  v144 = *(_DWORD *)(a5 + 60);
  if ( !v144 && (v150 & 2) != 0 )
    v144 = sub_100BA130(v134, *(_DWORD *)(a5 + 44));
  v149 = *(_DWORD *)(a5 + 72);
  if ( !v149 )
    v149 = v5;
  if ( dword_1064EDD0 != -1
    && off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] == (unsigned int)dword_1064EDD0 >> 12
    && off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 1] )
  {
    sub_10248230();
  }
  sub_10247FD0();
  dword_1064EDC0 = LODWORD(v151) | 0x1000;
  sub_10265E30(0);
  v153 = *(float *)(a5 + 76);
  v126[0] = &CBulletsTraceFilter::`vftable';
  v126[1] = v5;
  sub_10265E60(LODWORD(v153));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5) )
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 1088))(v11) )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 1096))(v12);
      sub_10265E60(v13);
    }
  }
  v15 = 0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v14 = sub_10261B20();
    if ( v14 )
    {
      if ( *(_BYTE *)(v14 + 447) == 3 )
        v15 = 1;
    }
  }
  LOBYTE(v154) = 0;
  if ( v15 )
    LOBYTE(v154) = ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, a5 + 4, 0) & 0x30) != 0;
  v16 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320);
  v146 = 0;
  if ( v16(v5) )
    v146 = (unsigned __int8)dword_1060F30C;
  v70 = *(float *)(a5 + 16);
  v153 = COERCE_FLOAT(&v74);
  v71 = *(float *)(a5 + 20);
  v152 = (int)v73;
  v72 = *(float *)(a5 + 24);
  sub_10421D80(&v70, v73);
  v133 = 0.0;
  v145 = 0;
  if ( *(int *)a5 <= 0 )
  {
LABEL_127:
    sub_10248230();
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) && v133 > 0.0 )
    {
      sub_10248110(v5, v149, v133, SLODWORD(v151), 0);
      v150 = *(_DWORD *)(sub_100CF460((_DWORD *)v5) + 92);
      if ( !v150 )
        v150 = (int)String;
      (*(void (__stdcall **)(int, _DWORD, int, int *))(*(_DWORD *)off_10627F88 + 120))(
        v5,
        *(unsigned __int8 *)(v7 + 80),
        v150,
        &v65);
    }
    goto LABEL_135;
  }
  v147 = (float *)(a5 + 4);
  v148 = (int *)(a5 + 56);
LABEL_30:
  HIBYTE(v154) = 0;
  BYTE1(v154) = 0;
  HIBYTE(v152) = 0;
  if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v153) + 320))(COERCE_FLOAT(LODWORD(v153))) )
    RandomSeed(v146);
  if ( v145 || *(int *)v7 <= 1 || (*(_BYTE *)(v7 + 64) & 1) == 0 )
  {
    v20 = sub_10022E00(&v70, (float *)(v7 + 28), 1.0);
    v17 = *v20;
    v135 = *v20;
    v18 = v20[1];
    v136 = v20[1];
    v19 = v20[2];
  }
  else
  {
    v17 = v70;
    v135 = v70;
    v18 = v71;
    v136 = v71;
    v19 = v72;
  }
  v137 = v19;
  v21 = *(float *)(v7 + 40);
  v132 = 0;
  v22 = v18 * v21 + v147[1];
  v23 = v19 * v21 + v147[2];
  v123 = v17 * v21 + *v147;
  v124 = v22;
  v125 = v23;
  BYTE2(v154) = *(_BYTE *)(v7 + 83) != 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float, float *))(*(_DWORD *)LODWORD(v153) + 320))(
           COERCE_FLOAT(LODWORD(v153)),
           v154)
      && *(int *)v7 > 1
      && v145 % 2 )
    {
      v24 = v147;
      v84[0] = 3.0;
      v84[1] = 3.0;
      v84[2] = 3.0;
      v81[0] = -3.0;
      v81[1] = -3.0;
      v81[2] = -3.0;
      sub_1001F200(&v86, v147, &v123, v81, v84);
      v25 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
      v154 = &v108;
      v25(dword_106B31F4, &v86, 1174421507, v126);
      if ( !*(_DWORD *)(dword_106CE63C + 48) )
        goto LABEL_46;
      v153 = -1.0;
      v152 = 1;
      v151 = 0.0;
      v150 = 255;
      v149 = 255;
      v148 = (int *)&v111;
      v147 = &v108;
    }
    else
    {
      v24 = v147;
      v26 = v123 - *v147;
      v90 = v26;
      v27 = v124 - v147[1];
      v91 = v27;
      v28 = v125 - v147[2];
      v92 = v28;
      BYTE1(v100) = 0.0 != v26 * v26 + v27 * v27 + v28 * v28;
      v98 = 0.0;
      v97 = 0.0;
      v96 = 0.0;
      v154 = &v108;
      v95 = 0.0;
      v94 = 0.0;
      v153 = COERCE_FLOAT(v126);
      v93 = 0.0;
      LOBYTE(v100) = 1;
      v29 = *v147;
      v152 = 1174421507;
      v86 = v29;
      v30 = v147[1];
      v151 = COERCE_FLOAT(&v86);
      v87 = v30;
      v88 = v147[2];
      (*(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        &v86,
        1174421507,
        v126);
      if ( !*(_DWORD *)(dword_106CE63C + 48) )
        goto LABEL_46;
      v153 = -1.0;
      v152 = 1;
      v151 = 0.0;
      v150 = 0;
      v149 = 255;
      v148 = (int *)&v111;
      v147 = &v108;
    }
    sub_101A0AD0((int)v147, (int)v148, v149, v150, SLODWORD(v151), v152, v153);
LABEL_46:
    if ( v115 )
    {
      v111 = v108;
      v112 = v109;
      v113 = v110;
      v114 = 0.0;
    }
    if ( *(_DWORD *)(dword_10698464 + 48) )
      sub_1011BC50((int)v24, (int)&v123, 255, 255, 255, 0, 0.1);
    if ( (_BYTE)v154 )
    {
      v31 = v24[1];
      v32 = v24[2];
      v82[0] = *v24;
      v82[1] = v31;
      v82[2] = v32;
      v83[0] = v111;
      v83[1] = v112;
      v83[2] = v113;
      sub_10023BF0(v82, v83, &v135);
      HIBYTE(v154) = 1;
    }
    v33 = (double)*v148;
    v152 = LODWORD(v151);
    v151 = v33;
    sub_10248110(v149, v149, v151, v152, 0);
    sub_10248070((int)&v65, *(_DWORD *)(v7 + 44), (int)&v135, (int)&v111, 1.0);
    v34 = *(float *)(v7 + 68);
    v35 = *(_DWORD *)(v7 + 44);
    v66 = v66 * v34;
    v69 = v35;
    v67 = v67 * v34;
    v68 = v34 * v68;
    sub_10023860((int)v155, (int)&v65, &v108, &v111, (int *)&v135);
    if ( *(_DWORD *)(v7 + 44) == -1 )
      break;
    v106 = v112;
    v105 = v111;
    v107 = v113;
    if ( 1.0 == v114 )
    {
      BYTE2(v154) = 0;
    }
    else
    {
      if ( *(float *)&v121 != 0.0 && *(_BYTE *)(v7 + 83) )
      {
        sub_10265E60(v121);
        v36 = v142;
        v138 = *(float *)&v121;
        v37 = v142;
        if ( v142 + 1 > v140 )
        {
          sub_102ABFC0(v142 - v140 + 1);
          v36 = v142;
        }
        v142 = v36 + 1;
        v38 = v36 - v37;
        v143 = v139;
        if ( v38 > 0 )
          memcpy((void *)(v139 + 4 * v37 + 4), (const void *)(v139 + 4 * v37), 4 * v38);
        v39 = (float *)(v139 + 4 * v37);
        if ( v39 )
          *v39 = v138;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v121 + 284))(v121)
        && !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v121 + 628))(v121) )
      {
        BYTE2(v154) = 0;
      }
      v40 = v153;
      sub_100238F0((void *)LODWORD(v153), (int)&v108);
      sub_1023D4B0(16, (int)&v111, 200, 0.5, SLODWORD(v40), (*(_DWORD *)(v7 + 64) & 8) != 0 ? 6 : 0, 0);
      if ( *(_DWORD *)(dword_106984AC + 48)
        || HIBYTE(v154)
        || ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, &v111, 0) & 0x30) == 0 )
      {
        if ( *(_DWORD *)(dword_106984AC + 48) && !*(_BYTE *)(v7 + 81) )
        {
          qmemcpy(v64, (const void *)v7, sizeof(v64));
          v7 = a5;
          v41 = v153;
          v42 = *(void (__thiscall **)(_DWORD, _BYTE *, float *, _DWORD *, float *, _DWORD))(*(_DWORD *)LODWORD(v153)
                                                                                           + 656);
          v153 = *(float *)(a5 + 72);
          v64[81] = 1;
          v42(LODWORD(v41), v64, &v123, v126, &v105, LODWORD(v153));
          if ( *(_DWORD *)(a5 + 44) != 7 )
            goto LABEL_118;
          HIBYTE(v152) = 1;
        }
      }
      else
      {
        HIBYTE(v154) = sub_100E9A60(SLODWORD(v40), (int)v155, SLODWORD(v40), v7, (float *)v7, &v123, (int)v126, &v105);
      }
      v43 = (double)*v148;
      v138 = v43;
      if ( v144 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v121 + 320))(v121) )
        {
          v43 = (double)v144;
        }
        else if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v121 + 340))(v121)
               && (v44 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(float *))(*(_DWORD *)v121 + 340))(v121),
                   (**v44)(v44, 0))
               && (v45 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(float *))(*(_DWORD *)v121 + 340))(v121),
                   v46 = (**v45)(v45, 0),
                   (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v46 + 320))(v46)) )
        {
          v43 = (double)v144;
        }
        else
        {
          v43 = v138;
        }
      }
      v24 = (float *)LODWORD(v151);
      if ( 0.0 == v43 )
      {
        (*(void (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)dword_106B3CDC + 124))(
          dword_106B3CDC,
          v149,
          v121,
          *(_DWORD *)(v7 + 44));
      }
      else
      {
        v47 = 0x2000;
        if ( v43 <= 16.0 )
          v47 = 4096;
        v24 = (float *)(v47 | LODWORD(v151));
      }
      if ( (!HIBYTE(v154) || (*(_BYTE *)(v7 + 64) & 2) == 0) && !HIBYTE(v152) )
      {
        v151 = v43;
        sub_10248110(0, v149, v151, (int)v24, 0);
        sub_10248070((int)&v86, *(_DWORD *)(v7 + 44), (int)&v135, (int)&v111, 1.0);
        v48 = *(float *)(v7 + 68);
        v49 = *(float **)(v7 + 44);
        LOBYTE(v86) = *(_BYTE *)(v7 + 83);
        v87 = v87 * v48;
        v103 = v49;
        v153 = COERCE_FLOAT(&v86);
        v24 = v121;
        v88 = v88 * v48;
        v89 = v48 * v89;
        if ( (*(unsigned __int8 (__thiscall **)(float *, float *))(*(_DWORD *)v121 + 244))(v121, &v86) )
          (*(void (__thiscall **)(float *, float *, float *, float *))(*(_DWORD *)v24 + 248))(v24, &v86, &v135, &v108);
        if ( *(float *)&v121 != 0.0 && (*(int (__thiscall **)(float *))(*(_DWORD *)v121 + 288))(v121) )
          v133 = v97 + v133;
        if ( (_BYTE)v154 || !HIBYTE(v154) || (*(_BYTE *)(v7 + 64) & 4) != 0 )
        {
          (*(void (__thiscall **)(float, float *, float))(*(_DWORD *)LODWORD(v153) + 436))(
            COERCE_FLOAT(LODWORD(v153)),
            &v108,
            COERCE_FLOAT(LODWORD(v151)));
        }
        else
        {
          v75[6] = 0.0;
          v75[12] = 0.0;
          v75[7] = 0.0;
          v75[13] = 0.0;
          v75[8] = 0.0;
          v75[17] = 0.0;
          v75[9] = 0.0;
          v77 = 0;
          v75[10] = 0.0;
          v79 = 0;
          v75[11] = 0.0;
          v80 = 0;
          v75[14] = 1.0;
          v76 = 0;
          v75[15] = 0.0;
          v78 = v151;
          v75[16] = 0.0;
          v75[3] = v108;
          v75[4] = v109;
          v75[5] = v110;
          v75[0] = v111;
          v75[1] = v112;
          v75[2] = v113;
          sub_1028E890("RagdollImpact", v75);
        }
        if ( (v150 & 1) != 0 )
          sub_101FB2A0(v121);
      }
    }
    if ( *(float *)&v121 != 0.0 )
    {
      v50 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, (__int16)v118);
      if ( v50 )
      {
        if ( *(_WORD *)(v50 + 72) == 89 )
        {
          v51 = v121;
          if ( *((char **)v121 + 23) != "func_breakable" )
          {
            if ( !sub_100D6240(v121, "func_breakable") )
              goto LABEL_110;
            v51 = v121;
          }
          if ( ((_DWORD)v51[62] & 0x800) == 0 )
            BYTE1(v154) = 1;
        }
      }
    }
LABEL_110:
    v52 = *(_DWORD *)(v7 + 48);
    if ( v52 )
    {
      v53 = dword_10698648 % v52;
      v24 = (float *)++dword_10698648;
      if ( !v53 )
      {
        if ( !BYTE1(v154) )
        {
          if ( !*(_BYTE *)(v7 + 81) )
          {
            v54 = v153;
            v85[0] = flt_106F1CA8;
            v85[1] = flt_106F1CAC;
            v85[2] = flt_106F1CB0;
            sub_100E8B30((void *)LODWORD(v153), v147, v85);
            sub_10079DC0(&v86, (int)&v108);
            v98 = v116;
            v89 = v105;
            v55 = *(_DWORD *)LODWORD(v54);
            v99 = v117;
            v90 = v106;
            v102 = v120;
            v91 = v107;
            v56 = *(_DWORD *)(v7 + 44);
            v100 = v118;
            v101 = v119;
            v103 = v121;
            v104 = v122;
            v57 = sub_100B9E30(v134, v56);
            (*(void (__thiscall **)(float, float *, float *, int))(v55 + 424))(
              COERCE_FLOAT(LODWORD(v153)),
              v85,
              &v86,
              v57);
          }
          goto LABEL_117;
        }
LABEL_116:
        sub_10023930((int)v126, (int)v155, (int)v24, v7, v7, &v108, &v135, (int)v126);
        goto LABEL_117;
      }
    }
    if ( BYTE1(v154) )
      goto LABEL_116;
LABEL_117:
    ++v146;
    ++v132;
LABEL_118:
    if ( !BYTE2(v154) || v132 > *(_DWORD *)(v7 + 52) )
    {
      for ( i = 0; i < v142; ++i )
        sub_10265EC0(*(_DWORD *)(v139 + 4 * i));
      if ( v141 >= 0 && v139 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v139);
      if ( ++v145 >= *(_DWORD *)v7 )
      {
        v5 = LODWORD(v153);
        goto LABEL_127;
      }
      goto LABEL_30;
    }
  }
  DevMsg("ERROR: Undefined ammo type!\n");
  if ( v141 >= 0 && v139 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v139);
LABEL_135:
  v59 = v129 < 0;
  result = v127;
  v130 = 0;
  if ( v129 >= 0 )
  {
    if ( v127 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v127);
      result = 0;
      v127 = 0;
    }
    v59 = v129 < 0;
    v128 = 0;
  }
  v131 = result;
  if ( !v59 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
