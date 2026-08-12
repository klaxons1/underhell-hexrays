void __thiscall sub_1034A0E0(_DWORD *this)
{
  unsigned int v2; // eax
  double v3; // st7
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  float v10; // edi
  float v11; // eax
  unsigned int v12; // ecx
  float *v13; // edx
  float *v14; // ecx
  float v15; // edx
  float v16; // eax
  float v17; // ecx
  unsigned int v18; // eax
  double (__thiscall *v19)(_DWORD *); // eax
  double v20; // st7
  double v21; // st7
  double v22; // st7
  int v23; // ecx
  double v24; // st7
  int v25; // edx
  double v26; // st7
  int v27; // eax
  unsigned int v28; // eax
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st6
  long double v33; // st7
  long double v34; // st6
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  double v41; // st7
  double v42; // st7
  double v43; // st6
  double v44; // st4
  double v45; // st5
  double v46; // st3
  double v47; // rt1
  double v48; // st3
  double v49; // st7
  double v50; // st5
  double v51; // rtt
  double v52; // st5
  double v53; // st4
  double v54; // st6
  double v55; // st7
  double v56; // st4
  double v57; // st3
  double v58; // st5
  double v59; // rtt
  double v60; // st3
  double v61; // st6
  double v62; // rt0
  double v63; // st3
  double v64; // st7
  float v65; // ecx
  double v66; // st7
  double v67; // st5
  float v68; // edx
  double v69; // st6
  double v70; // rt0
  double v71; // st6
  long double v72; // st7
  long double v73; // st6
  long double v74; // st5
  long double v75; // st7
  long double v76; // st7
  int v77; // ecx
  float v78; // edx
  float v79; // eax
  double v80; // st7
  double v81; // st5
  double v82; // st4
  double v83; // st6
  double v84; // st2
  double v85; // st3
  double v86; // st1
  double v87; // rt1
  double v88; // st1
  double v89; // rt2
  double v90; // st1
  double v91; // st2
  double v92; // rt0
  double v93; // st1
  double v94; // rt1
  unsigned int v95; // eax
  int v96; // edi
  int v97; // edi
  int v98; // edx
  void (__thiscall *v99)(int); // eax
  _DWORD *v100; // ebx
  int v101; // edi
  int v102; // eax
  _DWORD *v103; // eax
  int v104; // ebx
  int v105; // eax
  double v106; // st6
  double v107; // st7
  int v108; // edi
  _DWORD *v109; // ebx
  int v110; // edi
  double v111; // st7
  int v112; // edi
  _DWORD *v113; // ebx
  float v114; // [esp+Ch] [ebp-E0h]
  float v115; // [esp+18h] [ebp-D4h]
  float v116; // [esp+18h] [ebp-D4h]
  float v117; // [esp+18h] [ebp-D4h]
  float v118; // [esp+18h] [ebp-D4h]
  float v119; // [esp+1Ch] [ebp-D0h]
  float v120; // [esp+1Ch] [ebp-D0h]
  float v121; // [esp+1Ch] [ebp-D0h]
  float v122; // [esp+1Ch] [ebp-D0h]
  float v123; // [esp+1Ch] [ebp-D0h]
  float v124[3]; // [esp+2Ch] [ebp-C0h] BYREF
  int v125; // [esp+38h] [ebp-B4h] BYREF
  float v126; // [esp+3Ch] [ebp-B0h]
  float v127; // [esp+40h] [ebp-ACh]
  int v128; // [esp+48h] [ebp-A4h] BYREF
  float v129[3]; // [esp+4Ch] [ebp-A0h] BYREF
  float v130[2]; // [esp+58h] [ebp-94h] BYREF
  float v131; // [esp+60h] [ebp-8Ch]
  float v132; // [esp+64h] [ebp-88h] BYREF
  float v133; // [esp+68h] [ebp-84h]
  float v134; // [esp+6Ch] [ebp-80h]
  float v135; // [esp+70h] [ebp-7Ch] BYREF
  float v136; // [esp+74h] [ebp-78h]
  float v137; // [esp+78h] [ebp-74h]
  int v138; // [esp+7Ch] [ebp-70h] BYREF
  float v139; // [esp+80h] [ebp-6Ch]
  float v140; // [esp+84h] [ebp-68h]
  float v141; // [esp+88h] [ebp-64h] BYREF
  float v142; // [esp+8Ch] [ebp-60h]
  float v143; // [esp+90h] [ebp-5Ch]
  float v144; // [esp+94h] [ebp-58h] BYREF
  float v145; // [esp+98h] [ebp-54h]
  float v146; // [esp+9Ch] [ebp-50h]
  float v147; // [esp+A0h] [ebp-4Ch]
  int v148; // [esp+A4h] [ebp-48h] BYREF
  float v149; // [esp+A8h] [ebp-44h]
  float v150; // [esp+ACh] [ebp-40h]
  float v151; // [esp+B0h] [ebp-3Ch]
  float v152; // [esp+B4h] [ebp-38h]
  float v153; // [esp+B8h] [ebp-34h]
  float v154; // [esp+BCh] [ebp-30h]
  float v155; // [esp+C0h] [ebp-2Ch]
  float v156; // [esp+C4h] [ebp-28h] BYREF
  float v157; // [esp+C8h] [ebp-24h]
  float v158; // [esp+CCh] [ebp-20h]
  float v159; // [esp+D0h] [ebp-1Ch] BYREF
  float v160; // [esp+D4h] [ebp-18h]
  float v161; // [esp+D8h] [ebp-14h]
  int v162; // [esp+DCh] [ebp-10h]
  int v163; // [esp+E0h] [ebp-Ch]
  int v164; // [esp+E4h] [ebp-8h]
  char v165; // [esp+EBh] [ebp-1h]

  v2 = this[990];
  if ( v2 < 2 || v2 == 6 || v2 == 7 || v2 == 2 || v2 == 9 || (v165 = 0, v2 == 10) )
    v165 = 1;
  (*(void (__thiscall **)(_DWORD *, float *, float *, float *))(*this + 528))(this, v130, &v132, v124);
  v3 = 0.0;
  v155 = 0.0;
  v147 = 0.0;
  v156 = flt_106F1CA8;
  v4 = this[1004];
  v157 = flt_106F1CAC;
  v158 = flt_106F1CB0;
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (v4 & 0xFFF) + 2] == v4 >> 12 )
    {
      if ( *v5 )
      {
        v7 = this[997];
        if ( v7 == 1 || v7 == 2 )
        {
          if ( v5[1] == v6 )
            v8 = (float *)*v5;
          else
            v8 = 0;
          if ( v8[179] != flt_106F1CA8 || v8[180] != flt_106F1CAC || v8[181] != flt_106F1CB0 )
          {
            if ( v5[1] == v6 )
              v9 = (float *)*v5;
            else
              v9 = 0;
            v159 = v9[179];
            v10 = v9[180];
            v11 = v9[181];
            v160 = v10;
            v161 = v11;
            v144 = v159 + (flt_106F1CA8 - v159) * 0.050000001;
            v145 = v10 + (flt_106F1CAC - v10) * 0.050000001;
            v146 = 0.050000001 * (flt_106F1CB0 - v11) + v11;
            if ( v5[1] == v6 )
              sub_100E10C0(*v5, &v144);
            else
              sub_100E10C0(0, &v144);
            v3 = 0.0;
          }
          v12 = this[1004];
          if ( v12 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != this[1004] >> 12 )
            v13 = 0;
          else
            v13 = (float *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
          if ( v13[182] != flt_106F1CB4 || v13[183] != flt_106F1CB8 || v13[184] != flt_106F1CBC )
          {
            if ( v12 == -1 || off_1061BE18[4 * (this[1004] & 0xFFF) + 2] != v12 >> 12 )
              v14 = 0;
            else
              v14 = (float *)off_1061BE18[4 * (this[1004] & 0xFFF) + 1];
            v159 = v14[182];
            v160 = v14[183];
            v161 = v14[184];
            if ( v159 == flt_106F1CB4 && v160 == flt_106F1CB8 && v161 == flt_106F1CBC )
            {
              v15 = v14[182];
              v16 = v14[183];
              v17 = v14[184];
              v149 = v15;
              v150 = v16;
              v151 = v17;
            }
            else
            {
              sub_10423260(&v159, &v128);
              sub_10423260(&flt_106F1CB4, &v125);
              sub_104251E0((int)&v128, (int)&v125, 0.050000001, (int)&v148);
              sub_104252C0(&v148, &v144);
              v149 = v144;
              v150 = v145;
              v151 = v146;
            }
            v18 = this[1004];
            v141 = v149;
            v142 = v150;
            v143 = v151;
            if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
            {
              sub_100E11A0(0, &v141);
              v3 = 0.0;
            }
            else
            {
              sub_100E11A0(off_1061BE18[4 * (v18 & 0xFFF) + 1], &v141);
              v3 = 0.0;
            }
          }
        }
      }
    }
  }
  if ( v165 )
  {
    if ( (this[64] & 1) != 0 )
      sub_101C73D0(this, 0);
    v19 = *(double (__thiscall **)(_DWORD *))(*this + 2328);
    *(float *)&v162 = 300.0;
    v20 = v19(this);
    *(float *)&v164 = v20;
    if ( *((_BYTE *)this + 224) == 1 )
    {
      *(float *)&v162 = 1500.0;
      *(float *)&v164 = v20 * 5.0;
    }
    if ( (this[63] & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v119 = *((float *)this + 120) * *((float *)this + 120)
         + *((float *)this + 119) * *((float *)this + 119)
         + *((float *)this + 121) * *((float *)this + 121);
    v21 = off_10689708(v119);
    v22 = v21 + *(float *)&v162;
    if ( *(float *)&v164 <= v22 )
      v22 = *(float *)&v164;
    if ( this[990] == 7 )
    {
      v138 = this[905];
      v139 = *((float *)this + 906);
      v140 = *((float *)this + 907);
    }
    else
    {
      v114 = v22;
      sub_102B3500((float *)this, v114, 1.0, 0.0, (float *)&v138, COERCE_FLOAT(1));
    }
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v23 = this[63] >> 12;
    *(float *)&v138 = *(float *)&v138 - *((float *)this + 145);
    v139 = v139 - *((float *)this + 146);
    v140 = v140 - *((float *)this + 147);
    if ( (v23 & 1) != 0 )
      sub_100DAFD0((int)this);
    v24 = *(float *)&v138 - *((float *)this + 119);
    v25 = this[63] >> 12;
    v152 = v24 + v24;
    if ( (v25 & 1) != 0 )
      sub_100DAFD0((int)this);
    v26 = v139 - *((float *)this + 120);
    v27 = this[63] >> 12;
    v153 = v26 + v26;
    if ( (v27 & 1) != 0 )
      sub_100DAFD0((int)this);
    v28 = this[911];
    v29 = v140 - *((float *)this + 121) + 192.0;
    v30 = v29 + v29;
    v154 = v30;
    v155 = 0.0;
    if ( v28 != -1
      && off_1061BE18[4 * (v28 & 0xFFF) + 2] == v28 >> 12
      && off_1061BE18[4 * (v28 & 0xFFF) + 1]
      && !this[990] )
    {
      sub_100B6940((int)this, v129);
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v149 = v129[0] - *((float *)this + 145);
      v150 = v129[1] - *((float *)this + 146);
      v151 = v129[2] - *((float *)this + 147);
      v31 = off_10689714();
      v155 = v31;
      if ( v31 <= 200.0 )
      {
        v30 = v154;
      }
      else
      {
        v32 = (v31 - 200.0) * 0.0049999999;
        if ( v32 <= 1.0 )
        {
          if ( v32 < 0.0 )
            v32 = 0.0;
        }
        else
        {
          v32 = 1.0;
        }
        v152 = v149 * (200.0 * v32) + v152;
        v153 = v150 * (200.0 * v32) + v153;
        v30 = 200.0 * v32 * v151 + v154;
      }
    }
    if ( v30 <= 768.0 )
    {
      if ( v30 < 76.80000000000001 )
        v30 = 76.80000000000001;
    }
    else
    {
      v30 = 768.0;
    }
    v154 = v30;
    v143 = v154;
    v141 = v152;
    v142 = v153;
    off_10689714();
    *(float *)&v164 = asin(v141 * v130[0] + v130[1] * v142 + v143 * v131) * 57.29578;
    v147 = sub_10265030((float *)this + 949);
    v33 = asin(v132 * v141 + v133 * v142 + v143 * v134) * 57.29578;
    *(float *)&v162 = v33;
    if ( *(float *)&v164 <= 60.0 )
    {
      v34 = -45.0;
      if ( *(float *)&v164 < -45.0 )
        *(float *)&v164 = -45.0;
    }
    else
    {
      v34 = -45.0;
      *(float *)&v164 = 60.0;
    }
    if ( v33 <= 45.0 )
    {
      if ( v34 > v33 )
        *(float *)&v162 = v34;
    }
    else
    {
      *(float *)&v162 = 45.0;
    }
    v35 = *((float *)this + 182);
    sub_10424CA0(*((float *)this + 182));
    v120 = v35;
    v36 = *(float *)&v164;
    sub_10424C10(*(float *)&v164, v120);
    v126 = (v36 - *((float *)this + 122) * 0.60000002 + v36 - *((float *)this + 122) * 0.60000002) * 2.7777777;
    v37 = *((float *)this + 183);
    sub_10424CA0(*((float *)this + 183));
    v121 = v37;
    v38 = v147;
    sub_10424C10(v147, v121);
    v127 = (v38 - *((float *)this + 123) * 0.60000002 + v38 - *((float *)this + 123) * 0.60000002) * 2.7777777;
    v39 = *((float *)this + 184);
    sub_10424CA0(*((float *)this + 184));
    v122 = v39;
    v40 = *(float *)&v162;
    sub_10424C10(*(float *)&v162, v122);
    v41 = v40 - *((float *)this + 124) * 0.60000002;
    v42 = (v41 + v41) * 2.7777777;
    v43 = 300.0;
    v44 = -300.0;
    if ( v126 <= 300.0 )
    {
      if ( v126 >= -300.0 )
        v44 = v126;
      v45 = -300.0;
    }
    else
    {
      v45 = -300.0;
      v44 = 300.0;
    }
    v46 = 120.0;
    if ( v127 <= 120.0 )
    {
      v46 = -120.0;
      if ( v127 >= -120.0 )
        v46 = v127;
    }
    v47 = v46;
    v48 = v42;
    v49 = v47;
    if ( v48 <= 300.0 )
    {
      if ( v48 >= v45 )
        v45 = v48;
      v51 = v45;
      v50 = v44;
      v43 = v51;
    }
    else
    {
      v50 = v44;
    }
    v52 = (v50 - *((float *)this + 1001)) * 10.0;
    v53 = v43;
    v54 = (v49 - *((float *)this + 1002)) * 10.0;
    v55 = 10.0 * (v53 - *((float *)this + 1003));
    v56 = 1000.0;
    v57 = -1000.0;
    if ( v52 <= 1000.0 )
    {
      if ( v52 >= -1000.0 )
        v57 = v52;
      v58 = -1000.0;
    }
    else
    {
      v58 = -1000.0;
      v57 = 1000.0;
    }
    v59 = v57;
    v60 = v54;
    v61 = v59;
    if ( v60 <= 1000.0 )
    {
      if ( v60 < v58 )
        v60 = v58;
    }
    else
    {
      v60 = 1000.0;
    }
    v62 = v60;
    v63 = v55;
    v64 = v62;
    if ( v63 > 1000.0 || (v56 = v63, v63 >= v58) )
      v58 = v56;
    *((float *)this + 1001) = v61 * 0.1 + *((float *)this + 1001);
    *((float *)this + 1002) = v64 * 0.1 + *((float *)this + 1002);
    *((float *)this + 1003) = v58 * 0.1 + *((float *)this + 1003);
    (*(void (__thiscall **)(_DWORD *, float *))(*this + 2284))(this, &v132);
    (*(void (__thiscall **)(_DWORD *))(*this + 2288))(this);
    v65 = *((float *)this + 123);
    v66 = *((float *)this + 1001) * 0.1;
    v67 = *((float *)this + 1002);
    v68 = *((float *)this + 124);
    v135 = *((float *)this + 122);
    v136 = v65;
    v69 = 0.1 * *((float *)this + 1003);
    v135 = v66 + v135;
    v70 = v69;
    v71 = v67 * 0.1 + v65;
    v136 = v71;
    v137 = v70 + v68;
    if ( v71 <= 120.0 )
    {
      if ( v71 < -120.0 )
        v136 = -120.0;
    }
    else
    {
      v136 = 120.0;
    }
    sub_100D7260((float *)this, &v135);
    v72 = (fabs(v152) * 0.1 + v154 + fabs(v153) * 0.1) * 0.1 * 0.2 + *((float *)this + 947) * 0.8;
    *((float *)this + 947) = v72;
    v73 = v124[0] * v72;
    v74 = v124[1] * v72;
    v75 = v72 * v124[2];
    v156 = v73;
    v157 = v74;
    if ( *((_BYTE *)this + 224) == 1 )
      v76 = -38.400002;
    else
      v76 = v75 - 38.4;
    v77 = this[63];
    v158 = v76;
    if ( (v77 & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v78 = *((float *)this + 119);
    v79 = *((float *)this + 120);
    v161 = *((float *)this + 121);
    v159 = v78;
    v160 = v79;
    off_10689714();
    if ( v155 > 100.0 )
    {
      v80 = v156;
      v81 = v149;
      v82 = v157;
      v83 = v150;
      v84 = v151;
      v85 = v158;
      v86 = v151 * v158 + v157 * v150 + v156 * v149;
      if ( v86 < 0.0 )
      {
        v87 = v86 * -0.1;
        v88 = v80 + v81 * v87;
        v156 = v88;
        v89 = v88;
        v90 = v82 + v83 * v87;
        v157 = v90;
        v91 = v85 + v87 * v84;
        v158 = v91;
        v80 = v89;
        v82 = v90;
        v92 = v91;
        v84 = v151;
        v85 = v92;
      }
      v93 = v159 * v81 + v160 * v83 + v84 * v161;
      if ( v93 < 0.0 )
      {
        v94 = v93 * -0.1;
        v156 = v80 + v81 * v94;
        v157 = v82 + v150 * v94;
        v158 = v84 * v94 + v85;
      }
    }
    v146 = v158;
    v144 = v156;
    v145 = v157;
    off_10689714();
    v3 = 0.0;
    v131 = 0.0;
    v134 = 0.0;
    v155 = (v145 * v160 + v144 * v159) * *((float *)this + 947);
    v147 = (v159 * v132 + v160 * v133) * *((float *)this + 947);
  }
  v95 = this[1004];
  if ( v95 != -1
    && off_1061BE18[4 * (this[1004] & 0xFFF) + 2] == v95 >> 12
    && off_1061BE18[4 * (this[1004] & 0xFFF) + 1]
    || this[990] == 7 )
  {
    v97 = dword_10700AC8;
    v162 = dword_106E670C;
    v98 = *(_DWORD *)dword_10700AC8;
    v164 = dword_106E6710;
    v99 = *(void (__thiscall **)(int))(v98 + 100);
    v163 = dword_106E6704;
    v99(dword_10700AC8);
    if ( !this[275] && sub_100D7240(this) )
      sub_100BD750(this);
    v100 = (_DWORD *)this[275];
    if ( !v100 || !*v100 )
      v100 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v97 + 104))(v97);
    sub_100BE7D0(this, (int)v100, v163, 0.0);
    v101 = dword_10700AC8;
    v102 = *(_DWORD *)dword_10700AC8;
    v163 = dword_106E6708;
    (*(void (__thiscall **)(int))(v102 + 100))(dword_10700AC8);
    if ( !this[275] && sub_100D7240(this) )
      sub_100BD750(this);
    v103 = (_DWORD *)this[275];
    if ( v103 && *v103 )
      v104 = this[275];
    else
      v104 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v101 + 104))(v101);
    sub_100BE7D0(this, v104, v163, 0.0);
    v96 = v162;
  }
  else
  {
    v96 = dword_106E6704;
    v123 = v3;
    v162 = dword_106E6704;
    v164 = dword_106E6708;
    sub_10019C10(this, dword_106E670C, v123);
    sub_10019C10(this, dword_106E6710, 0.0);
  }
  v105 = this[990];
  if ( v105 == 2 || v105 == 3 || v105 == 4 || v105 == 5 || v105 > 8 && v105 < 12 )
    v106 = -60.0;
  else
    v106 = v155;
  *(float *)&v163 = (3.0 * ((v106 - -60.0) * 0.0083333338 * ((v106 - -60.0) * 0.0083333338))
                   - (v106 - -60.0)
                   * 0.0083333338
                   * ((v106 - -60.0)
                    * 0.0083333338
                    * ((v106 - -60.0)
                     * 0.0083333338)
                    * 2.0))
                  * 2.0
                  - 1.0;
  v115 = sub_100BE820((int)this, v96);
  v107 = *(float *)&v163;
  sub_10424B10(*(float *)&v163, v115, 0.1);
  v116 = v107;
  *(float *)&v163 = sub_100BEA10((int)this, v96, v116, 0.0);
  v108 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v109 = (_DWORD *)this[275];
  if ( !v109 || !*v109 )
    v109 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v108 + 104))(v108);
  sub_100BE7D0(this, (int)v109, v162, *(float *)&v163);
  v110 = v164;
  *(float *)&v163 = (3.0 * ((v147 - -60.0) * 0.0083333338 * ((v147 - -60.0) * 0.0083333338))
                   - (v147 - -60.0)
                   * 0.0083333338
                   * ((v147 - -60.0)
                    * 0.0083333338
                    * ((v147 - -60.0)
                     * 0.0083333338)
                    * 2.0))
                  * 2.0
                  - 1.0;
  v117 = sub_100BE820((int)this, v164);
  v111 = *(float *)&v163;
  sub_10424B10(*(float *)&v163, v117, 0.1);
  v118 = v111;
  *(float *)&v163 = sub_100BEA10((int)this, v110, v118, 0.0);
  v112 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v113 = (_DWORD *)this[275];
  if ( !v113 || !*v113 )
    v113 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v112 + 104))(v112);
  sub_100BE7D0(this, (int)v113, v164, *(float *)&v163);
  if ( v165 )
    sub_100EA150((int)this, &v156);
}
