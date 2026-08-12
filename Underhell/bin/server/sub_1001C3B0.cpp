void __thiscall sub_1001C3B0(int this, float a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  char *v5; // eax
  double v6; // st4
  double v7; // st7
  int v8; // edi
  int v9; // edx
  _DWORD *v10; // ebx
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // ebx
  double v14; // st7
  int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  int v19; // edi
  float v20; // ecx
  float *v21; // eax
  float v22; // ecx
  float *v23; // eax
  float v24; // ecx
  float *v25; // eax
  int v26; // ebx
  int v27; // eax
  double v28; // st7
  int v29; // eax
  float *v30; // eax
  double v31; // st6
  double v32; // st7
  int v33; // ecx
  int v34; // eax
  double v35; // st7
  double v36; // st5
  double v37; // st7
  double v38; // st4
  double v39; // st3
  double v40; // st6
  double v41; // st7
  double v42; // st6
  double v43; // rt2
  double v44; // st5
  double v45; // st6
  double v46; // st7
  double v47; // st7
  double v48; // st4
  double v49; // st7
  unsigned int v50; // ebx
  int v51; // edi
  int v52; // ebx
  int v53; // ecx
  int v54; // eax
  int v55; // edx
  unsigned int v56; // eax
  int v57; // eax
  int (__thiscall *v58)(int); // edx
  float *v59; // eax
  double v60; // st7
  double v61; // st5
  double v62; // st4
  float v63; // eax
  int v64; // edi
  float v65; // eax
  bool v66; // zf
  double v67; // st7
  int *v68; // eax
  unsigned int v69; // ecx
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // eax
  int v74; // ecx
  int v75; // edx
  const char *v76; // edi
  int v77; // eax
  int v78; // eax
  double v79; // st7
  double (__thiscall *v80)(int, _DWORD, _DWORD); // edx
  double v81; // st7
  int (__thiscall *v82)(int, char *); // edx
  float *v83; // eax
  int (__thiscall *v84)(int, _BYTE *); // edx
  float *v85; // eax
  double v86; // st7
  double v87; // st6
  void (__thiscall *v88)(int, int *); // edx
  unsigned int v89; // ecx
  int *v90; // eax
  unsigned int v91; // ecx
  int v92; // edi
  int v93; // ecx
  float v94; // edx
  unsigned int v95; // eax
  int v96; // ecx
  int v97; // eax
  float *v98; // edi
  double v99; // st6
  double v100; // st7
  unsigned int v101; // eax
  int v102; // ecx
  unsigned int v103; // eax
  int v104; // ecx
  int v105; // eax
  int v106; // eax
  int v107; // eax
  double v108; // st7
  double v109; // st6
  double v110; // st5
  float v111; // ecx
  float v112; // edx
  float v113; // eax
  void (__thiscall *v114)(int, int *); // edx
  int v115; // ebx
  int *v116; // ecx
  int v117; // eax
  float v118; // [esp+48h] [ebp-B4h]
  int v119; // [esp+48h] [ebp-B4h]
  float v120; // [esp+4Ch] [ebp-B0h]
  char v121[12]; // [esp+58h] [ebp-A4h] BYREF
  _BYTE v122[12]; // [esp+64h] [ebp-98h] BYREF
  float v123[3]; // [esp+70h] [ebp-8Ch] BYREF
  int v124; // [esp+7Ch] [ebp-80h] BYREF
  float v125; // [esp+80h] [ebp-7Ch]
  float v126; // [esp+84h] [ebp-78h]
  int v127; // [esp+88h] [ebp-74h] BYREF
  float v128; // [esp+8Ch] [ebp-70h]
  float v129; // [esp+90h] [ebp-6Ch]
  float v130; // [esp+94h] [ebp-68h] BYREF
  float v131; // [esp+98h] [ebp-64h]
  float v132; // [esp+9Ch] [ebp-60h]
  int v133; // [esp+A0h] [ebp-5Ch] BYREF
  float v134; // [esp+A4h] [ebp-58h]
  float v135; // [esp+A8h] [ebp-54h]
  float v136; // [esp+ACh] [ebp-50h]
  int v137; // [esp+B0h] [ebp-4Ch] BYREF
  float v138; // [esp+B4h] [ebp-48h]
  float v139; // [esp+B8h] [ebp-44h]
  int v140; // [esp+BCh] [ebp-40h]
  int v141; // [esp+C0h] [ebp-3Ch]
  int v142; // [esp+C4h] [ebp-38h]
  int v143; // [esp+C8h] [ebp-34h]
  int v144; // [esp+CCh] [ebp-30h]
  int v145; // [esp+D0h] [ebp-2Ch] BYREF
  float v146; // [esp+D4h] [ebp-28h]
  float v147; // [esp+D8h] [ebp-24h]
  int v148; // [esp+DCh] [ebp-20h]
  int v149; // [esp+E0h] [ebp-1Ch]
  int v150; // [esp+E4h] [ebp-18h] BYREF
  float v151; // [esp+E8h] [ebp-14h]
  float v152; // [esp+ECh] [ebp-10h]
  float v153; // [esp+F0h] [ebp-Ch]
  int v154; // [esp+F4h] [ebp-8h]
  char v155; // [esp+FBh] [ebp-1h]

  if ( *(_DWORD *)(this + 3812) )
  {
    v3 = *(_DWORD *)(this + 3816);
    if ( v3 == -1
      || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3816) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 3816) & 0xFFF) + 2] != v3 >> 12)
      || !*v4 )
    {
      v5 = *(char **)(this + 3812);
      if ( !v5 )
        v5 = (char *)String;
      sub_102286F0(this, v5, this + 3816, 0.0, 1, 0, 0, 0);
    }
  }
  *(float *)(this + 3720) = *(float *)(this + 3720) * 0.8;
  *(float *)(this + 3724) = 0.8 * *(float *)(this + 3724);
  v6 = *(float *)(this + 3736);
  v7 = *(float *)(this + 3732) * 0.80000001;
  *(float *)(this + 3728) = *(float *)(this + 3728) * 0.80000001;
  *(float *)(this + 3732) = v7;
  *(float *)(this + 3736) = 0.80000001 * v6;
  sub_1001A330((float *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 844))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1828))(this);
  sub_100EFF50(this);
  sub_1001A3C0(this);
  sub_100BCCF0(this);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 504))(this, &v130);
  v153 = sub_100ED7A0(*(_DWORD *)(this + 3900));
  v8 = dword_10700AC8;
  v9 = *(_DWORD *)dword_10700AC8;
  v154 = *(int *)(this + 3892);
  (*(void (__thiscall **)(int))(v9 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v10 = *(_DWORD **)(this + 1100);
  if ( !v10 || !*v10 )
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  sub_100BE7D0((int)v10, v154, v153);
  v153 = sub_100ED7A0(*(_DWORD *)(this + 3904));
  v11 = dword_10700AC8;
  v12 = *(_DWORD *)dword_10700AC8;
  v154 = *(int *)(this + 3896);
  (*(void (__thiscall **)(int))(v12 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v13 = *(_DWORD **)(this + 1100);
  if ( !v13 || !*v13 )
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  sub_100BE7D0((int)v13, v154, v153);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 916))(this, &v137);
  v136 = 0.0;
  sub_1001B120((_DWORD *)(this + 3748));
  sub_1001B120((_DWORD *)(this + 3788));
  sub_1001B120((_DWORD *)(this + 3768));
  if ( *(_DWORD *)(this + 3760) || *(_DWORD *)(this + 3780) )
  {
    v15 = 0;
    if ( *(int *)(this + 3800) > 0 )
    {
      v16 = 0;
      do
      {
        v17 = v16 + *(_DWORD *)(this + 3788);
        if ( *(float *)(v17 + 24) - *(float *)(v17 + 28) - 0.2 > *(float *)(dword_106B31C8 + 12) )
          *(float *)(v17 + 24) = *(float *)(dword_106B31C8 + 12) + *(float *)(v17 + 28) + 0.2;
        ++v15;
        v16 += 36;
      }
      while ( v15 < *(_DWORD *)(this + 3800) );
    }
    v14 = *(float *)(dword_106B31C8 + 12) + 1.0;
    goto LABEL_31;
  }
  if ( *(float *)(this + 3808) <= (double)*(float *)(dword_106B31C8 + 12) && *(_DWORD *)(this + 2324) != 4 )
  {
    v14 = ((double (__thiscall *)(int, int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 2256))(
            this,
            this + 3788,
            0,
            1.5,
            2.5)
        + *(float *)(dword_106B31C8 + 12)
        - 0.4;
LABEL_31:
    *(float *)(this + 3808) = v14;
  }
  if ( (unsigned __int8)sub_10023D10(1) )
  {
    if ( 0.0 != *(float *)(this + 3820) && *(float *)(this + 3820) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_1001AFE0((_DWORD *)this);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2304))(this, *(_DWORD *)(this + 2324));
    }
    v18 = 0;
    *(float *)&v19 = 0.0;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v149 = 0;
    if ( *(int *)(this + 3800) > 0 )
    {
      *(float *)&v154 = 0.0;
      do
      {
        LODWORD(v20) = v154 + *(_DWORD *)(this + 3788);
        v153 = v20;
        v148 = v19;
        if ( v19 + 1 > v141 )
        {
          sub_102ABFC0(v19 - v141 + 1);
          v19 = v143;
          v18 = v140;
          v20 = v153;
        }
        v143 = ++v19;
        v144 = v18;
        if ( v19 - v148 - 1 > 0 )
        {
          memcpy((void *)(v18 + 4 * v148 + 4), (const void *)(v18 + 4 * v148), 4 * (v19 - v148 - 1));
          v20 = v153;
        }
        v21 = (float *)(v18 + 4 * v148);
        if ( v21 )
          *v21 = v20;
        v154 += 36;
        ++v149;
      }
      while ( v149 < *(_DWORD *)(this + 3800) );
    }
    v149 = 0;
    if ( *(int *)(this + 3760) > 0 )
    {
      v148 = 0;
      do
      {
        LODWORD(v22) = v148 + *(_DWORD *)(this + 3748);
        v153 = v22;
        v154 = v19;
        if ( v19 + 1 > v141 )
        {
          sub_102ABFC0(v19 - v141 + 1);
          v19 = v143;
          v18 = v140;
          v22 = v153;
        }
        v143 = ++v19;
        v144 = v18;
        if ( v19 - v154 - 1 > 0 )
        {
          memcpy((void *)(v18 + 4 * v154 + 4), (const void *)(v18 + 4 * v154), 4 * (v19 - v154 - 1));
          v22 = v153;
        }
        v23 = (float *)(v18 + 4 * v154);
        if ( v23 )
          *v23 = v22;
        v148 += 36;
        ++v149;
      }
      while ( v149 < *(_DWORD *)(this + 3760) );
    }
    v149 = 0;
    if ( *(int *)(this + 3780) > 0 )
    {
      v148 = 0;
      do
      {
        LODWORD(v24) = v148 + *(_DWORD *)(this + 3768);
        v153 = v24;
        v154 = v19;
        if ( v19 + 1 > v141 )
        {
          sub_102ABFC0(v19 - v141 + 1);
          v19 = v143;
          v18 = v140;
          v24 = v153;
        }
        v143 = ++v19;
        v144 = v18;
        if ( v19 - v154 - 1 > 0 )
        {
          memcpy((void *)(v18 + 4 * v154 + 4), (const void *)(v18 + 4 * v154), 4 * (v19 - v154 - 1));
          v24 = v153;
        }
        v25 = (float *)(v18 + 4 * v154);
        if ( v25 )
          *v25 = v24;
        v148 += 36;
        ++v149;
      }
      while ( v149 < *(_DWORD *)(this + 3780) );
    }
    v26 = 0;
    v155 = 0;
    v149 = 0;
    if ( v19 <= 0 )
      goto LABEL_78;
    do
    {
      *(float *)&v154 = sub_100740E0(*(_DWORD *)(v140 + 4 * v26));
      if ( (unsigned __int8)sub_10074040(this) )
      {
        v27 = sub_100BEF30("forward");
        if ( v27 )
        {
          sub_100BD6D0(v27, &v133, &v150, 0, 0);
        }
        else
        {
          v29 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 916))(this, &v124);
          v150 = *(int *)v29;
          v151 = *(float *)(v29 + 4);
          v152 = *(float *)(v29 + 8);
        }
        v28 = *(float *)&v154;
      }
      else
      {
        v30 = (float *)sub_10074190(*(_DWORD *)(v140 + 4 * v26));
        v31 = v30[1] - v131;
        v32 = v30[2] - v132;
        *(float *)&v150 = *v30 - v130;
        v151 = v31;
        v152 = v32;
        off_10689714();
        v33 = *(_DWORD *)(v140 + 4 * v26);
        v153 = *(float *)this;
        v34 = sub_10074190(v33);
        v35 = ((double (__thiscall *)(int, int))*(_DWORD *)(LODWORD(v153) + 2300))(this, v34);
        v28 = v35 * *(float *)&v154;
        v26 = v149;
      }
      if ( v28 <= 0.0 )
      {
        v28 = v136;
      }
      else
      {
        v155 = 1;
        if ( v136 == 0.0 )
        {
          v137 = v150;
          v138 = v151;
          v139 = v152;
          v136 = v28;
        }
        else
        {
          v36 = v136 * (1.0 - v28) + v28;
          v136 = v36;
          v37 = v28 / v36;
          v38 = *(float *)&v150 * v37;
          v39 = v151 * v37;
          v40 = v152 * v37;
          v41 = 1.0 - v37;
          v42 = v40 + v41 * v139;
          *(float *)&v137 = v38 + v41 * *(float *)&v137;
          v43 = v36;
          v44 = v39 + v41 * v138;
          v28 = v43;
          v138 = v44;
          v139 = v42;
        }
      }
      v149 = ++v26;
    }
    while ( v26 < v19 );
    if ( v155 )
    {
      *(float *)&v145 = *(float *)&v137 * 100.0 + v130;
      v146 = v138 * 100.0 + v131;
      v147 = 100.0 * v139 + v132;
      v118 = v28;
      sub_1001A540((int *)this, v19, (float *)&v145, v118);
      *(float *)(this + 3704) = *(float *)&v137;
      *(float *)(this + 3708) = v138;
      *(float *)(this + 3712) = v139;
      *(float *)(this + 3716) = v136;
    }
    else
    {
LABEL_78:
      v45 = 0.2 * v139 + 0.80000001 * *(float *)(this + 3712);
      v46 = v138 * 0.2 + *(float *)(this + 3708) * 0.80000001;
      *(float *)(this + 3704) = *(float *)&v137 * 0.2 + *(float *)(this + 3704) * 0.80000001;
      *(float *)(this + 3708) = v46;
      *(float *)(this + 3712) = v45;
      v47 = *(float *)(this + 3716) - 0.2;
      if ( v47 <= 0.0 )
        v47 = 0.0;
      *(float *)(this + 3716) = v47;
      off_10689714();
      v48 = *(float *)(this + 3712);
      v49 = *(float *)(this + 3708) * 100.0;
      *(float *)&v145 = *(float *)(this + 3704) * 100.0 + v130;
      v146 = v49 + v131;
      v147 = 100.0 * v48 + v132;
      sub_1001A540((int *)this, v19, (float *)&v145, *(float *)(this + 3716));
    }
    v50 = -1;
    v51 = v19 - 1;
    v155 = 0;
    *(float *)&v154 = NAN;
    if ( v51 < 0 )
      goto LABEL_86;
    while ( 1 )
    {
      v52 = v140;
      if ( (unsigned __int8)sub_10074040(this) )
      {
        v58 = *(int (__thiscall **)(int))(*(_DWORD *)this + 8);
        v155 = 1;
        v50 = *(_DWORD *)v58(this);
        v59 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 916))(this, &v133);
        v60 = *v59 * 100.0;
        v61 = v59[1] * 100.0;
        v62 = v59[2];
        v63 = *(float *)this;
        *(float *)&v145 = v60 + v130;
        v146 = v61 + v131;
        v147 = 100.0 * v62 + v132;
        (*(void (__thiscall **)(int, int *))(LODWORD(v63) + 836))(this, &v145);
        goto LABEL_92;
      }
      v53 = *(_DWORD *)(v52 + 4 * v51);
      v153 = *(float *)this;
      v54 = sub_10074190(v53);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(LODWORD(v153) + 1820))(this, v54) )
        break;
      if ( --v51 < 0 )
      {
        v50 = v154;
        goto LABEL_86;
      }
    }
    v64 = *(_DWORD *)(v140 + 4 * v51);
    v65 = *(float *)this;
    v50 = *(_DWORD *)(v64 + 4);
    v155 = 1;
    v153 = v65;
    v119 = sub_10074190(v64);
    (*(void (__thiscall **)(int, int))(LODWORD(v153) + 836))(this, v119);
LABEL_92:
    if ( v50 == -1 || off_1061BE18[4 * (v50 & 0xFFF) + 2] != v50 >> 12 )
LABEL_86:
      v55 = 0;
    else
      v55 = off_1061BE18[4 * (v50 & 0xFFF) + 1];
    v56 = *(_DWORD *)(this + 3744);
    if ( v56 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] != v56 >> 12 )
      v57 = 0;
    else
      v57 = off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1];
    if ( v57 != v55 )
    {
      v66 = (*(_DWORD *)(this + 236) & 0x1000) == 0;
      v67 = *(float *)(this + 3740) - 0.5;
      *(_DWORD *)(this + 3744) = v50;
      *(float *)(this + 3740) = v67;
      if ( !v66 && *(_DWORD *)(dword_10690304 + 48) == 2 && v50 != -1 )
      {
        v68 = &off_1061BE18[4 * (v50 & 0xFFF) + 1];
        v69 = v50 >> 12;
        if ( off_1061BE18[4 * (v50 & 0xFFF) + 2] == v50 >> 12 )
        {
          if ( *v68 )
          {
            v70 = off_1061BE18[4 * (v50 & 0xFFF) + 2] == v69 ? *v68 : 0;
            if ( v70 != this )
            {
              if ( off_1061BE18[4 * (v50 & 0xFFF) + 2] == v69 )
                v71 = *v68;
              else
                v71 = 0;
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)v71 + 504))(v71, &v150);
              *(float *)&v145 = 5.0;
              v146 = 5.0;
              v147 = 5.0;
              *(float *)&v127 = -5.0;
              v128 = -5.0;
              v129 = -5.0;
              sub_1011BB20((int)&v150, (int)&v127, (int)&v145, 0, 255, 0, 255, 20.0);
              v120 = 20.0;
              v72 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 504))(this);
              sub_1011BC50(v72, (int)&v133, (int)&v150, 0, 255, 0, COERCE_FLOAT(1));
              v73 = *(_DWORD *)(this + 3744);
              if ( v73 == -1
                || off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] != *(_DWORD *)(this + 3744) >> 12 )
              {
                v74 = 0;
              }
              else
              {
                v74 = off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1];
              }
              if ( v73 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] != v73 >> 12 )
                v75 = 0;
              else
                v75 = off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1];
              v76 = *(const char **)(v75 + 92);
              if ( !v76 )
                v76 = String;
              sub_100D6390(v74);
              v77 = sub_1025F440("%s (%s)", (char)v76);
              sub_1011CF30((int)&v150, v77, 0, 20.0);
            }
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2252))(this);
    }
    if ( !v155 && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 1820))(this, this + 1524) )
    {
      v78 = (*(int (__thiscall **)(int, int *, int *, float *))(*(_DWORD *)this + 916))(this, &v133, &v124, v123);
      sub_10421D80(v78, LODWORD(v120));
      v79 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -16.0,
              16.0);
      v80 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      *(float *)&v145 = v123[0] * v79;
      v146 = v123[1] * v79;
      v147 = v79 * v123[2];
      v81 = v80(dword_106B31E4, -32.0, 32.0);
      v82 = *(int (__thiscall **)(int, char *))(*(_DWORD *)this + 916);
      *(float *)&v127 = *(float *)&v124 * v81;
      v128 = v125 * v81;
      v129 = v81 * v126;
      v83 = (float *)v82(this, v121);
      *(float *)&v150 = *v83 * 128.0;
      v151 = v83[1] * 128.0;
      v84 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504);
      v152 = 128.0 * v83[2];
      v85 = (float *)v84(this, v122);
      v86 = v85[1] + v151 + v128;
      v87 = v85[2] + v152 + v129;
      v88 = *(void (__thiscall **)(int, int *))(*(_DWORD *)this + 836);
      *(float *)&v133 = *(float *)&v150 + *v85 + *(float *)&v127 + *(float *)&v145;
      v134 = v86 + v146;
      v135 = v87 + v147;
      v88(this, &v133);
    }
    v89 = *(_DWORD *)(this + 3744);
    if ( v89 != -1 )
    {
      v90 = &off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1];
      v91 = v89 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] == v91 )
      {
        if ( *v90 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] == v91 )
            v92 = *v90;
          else
            v92 = 0;
          if ( (*(_DWORD *)(v92 + 252) & 0x1000) != 0 )
            sub_100DAFD0(v92);
          v93 = *(int *)(v92 + 476);
          v94 = *(float *)(v92 + 480);
          v152 = *(float *)(v92 + 484);
          v95 = *(_DWORD *)(this + 3744);
          v150 = v93;
          v151 = v94;
          if ( v95 == -1 || off_1061BE18[4 * (v95 & 0xFFF) + 2] != v95 >> 12 )
            v96 = 0;
          else
            v96 = off_1061BE18[4 * (v95 & 0xFFF) + 1];
          v97 = sub_101C5260(v96);
          v98 = (float *)v97;
          if ( v97 && *(_BYTE *)(v97 + 306) == 7 )
          {
            if ( (*(_DWORD *)(v97 + 252) & 0x1000) != 0 )
              sub_100DAFD0(v97);
            v99 = v98[120] + v151;
            v100 = v98[121] + v152;
            *(float *)&v150 = *(float *)&v150 + v98[119];
            v151 = v99;
            v152 = v100;
          }
          v101 = *(_DWORD *)(this + 3744);
          if ( v101 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] != v101 >> 12 )
            v102 = 0;
          else
            v102 = off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1];
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v102 + 288))(v102)
            && ((v103 = *(_DWORD *)(this + 3744), v103 == -1)
             || off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 2] != v103 >> 12
              ? (v104 = 0)
              : (v104 = off_1061BE18[4 * (*(_DWORD *)(this + 3744) & 0xFFF) + 1]),
                (v105 = (*(int (__thiscall **)(int))(*(_DWORD *)v104 + 288))(v104),
                 (v106 = (*(int (__thiscall **)(int))(*(_DWORD *)v105 + 1096))(v105)) != 0)
             && (v107 = *(_DWORD *)(v106 + 424)) != 0) )
          {
            (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v107 + 204))(v107, &v133, 0);
            v108 = *(float *)&v133 + *(float *)&v150;
            v109 = v134 + v151;
            v110 = v135 + v152;
          }
          else
          {
            v109 = v151;
            v110 = v152;
            v108 = *(float *)&v150;
          }
          if ( v108 != flt_106F1CA8 || v109 != flt_106F1CAC || v110 != flt_106F1CB0 )
          {
            v111 = *(float *)(this + 1528);
            v112 = *(float *)(this + 1532);
            v150 = *(int *)(this + 1524);
            v113 = *(float *)this;
            v151 = v111;
            v152 = v112;
            v114 = *(void (__thiscall **)(int, int *))(LODWORD(v113) + 836);
            *(float *)&v150 = v108 * a2 + *(float *)&v150;
            v151 = v109 * a2 + v111;
            v152 = v110 * a2 + v152;
            v114(this, &v150);
          }
        }
      }
    }
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3740) )
    {
      v115 = *(_DWORD *)(this + 1536) == 0;
      if ( *(_DWORD *)(this + 1536) != v115 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v116 = *(int **)(this + 24);
          if ( v116 )
            sub_100194B0(v116, 1536);
        }
        *(_DWORD *)(this + 1536) = v115;
      }
      *(float *)(this + 3740) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  1.5,
                                  4.5)
                              + *(float *)(dword_106B31C8 + 12);
    }
    if ( *(_DWORD *)(dword_10690304 + 48) == 1 && (*(_DWORD *)(this + 236) & 0x1000) != 0 )
    {
      *(float *)&v133 = 2.0;
      v134 = 2.0;
      v135 = 2.0;
      *(float *)&v124 = -2.0;
      v125 = -2.0;
      v126 = -2.0;
      sub_1011BB20(this + 1524, (int)&v124, (int)&v133, 0, 255, 0, 0, 20.0);
      v117 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v122);
      sub_1011BC50(v117, this + 1524, 0, 255, 0, 0, 0.1);
    }
    if ( v142 >= 0 )
    {
      if ( v140 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v140);
    }
  }
}
