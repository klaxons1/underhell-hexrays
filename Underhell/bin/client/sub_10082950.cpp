char __userpurge sub_10082950@<al>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  char *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  const char *v16; // eax
  char *v17; // eax
  int i; // esi
  const char *v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st6
  double v26; // rtt
  double v27; // st4
  double v28; // st7
  double v29; // st4
  double v30; // st7
  double v31; // st6
  long double v32; // st7
  long double v33; // st7
  double v34; // st6
  float *v35; // esi
  float *v36; // edi
  double v37; // st7
  double v38; // st6
  double v39; // st5
  double v40; // st7
  double v41; // st4
  float v42; // eax
  int v43; // esi
  float *v44; // edi
  double v45; // st4
  double v46; // st5
  long double v47; // st7
  long double v48; // st7
  int v49; // edi
  double v50; // st7
  float *v51; // esi
  double v52; // st6
  double v53; // st4
  double v54; // rt1
  double v55; // st7
  double v56; // st7
  double v57; // st7
  float *v58; // edi
  double v59; // st7
  double v60; // st6
  double v61; // st5
  double v62; // st7
  double v63; // rt0
  void (__thiscall *v64)(int); // eax
  double v65; // st6
  double v66; // st4
  double v67; // st5
  double v68; // st3
  double v69; // st2
  double v70; // st1
  double v71; // st2
  double v72; // st1
  float *v73; // ecx
  double v74; // st5
  double v75; // st4
  double v76; // st6
  double v77; // st7
  int v78; // eax
  float *v79; // edi
  float *v80; // eax
  double v81; // st7
  float v82; // ecx
  float v83; // edx
  float v84; // eax
  double v85; // st6
  double v86; // st5
  double v87; // st7
  double v88; // st2
  double v89; // st2
  double v90; // st4
  double v91; // st6
  double v92; // st7
  double v93; // st7
  double v94; // st7
  double v95; // st7
  double v96; // st6
  char v97; // cl
  int v98; // ecx
  _BYTE *v99; // eax
  int v100; // esi
  int v101; // ecx
  int v102; // edx
  _BYTE *v103; // eax
  int v104; // esi
  int v105; // ecx
  float v107; // [esp+38h] [ebp-724h]
  float v108; // [esp+3Ch] [ebp-720h]
  float v109; // [esp+3Ch] [ebp-720h]
  float v110; // [esp+3Ch] [ebp-720h]
  float v111; // [esp+40h] [ebp-71Ch]
  float v112; // [esp+40h] [ebp-71Ch]
  float v113; // [esp+40h] [ebp-71Ch]
  float *v114; // [esp+40h] [ebp-71Ch]
  float v116; // [esp+44h] [ebp-718h]
  int v117; // [esp+48h] [ebp-714h] BYREF
  float v118; // [esp+4Ch] [ebp-710h]
  _DWORD v119[64]; // [esp+450h] [ebp-30Ch]
  float v120[20]; // [esp+550h] [ebp-20Ch] BYREF
  _BYTE v121[12]; // [esp+5A0h] [ebp-1BCh] BYREF
  _BYTE v122[12]; // [esp+5ACh] [ebp-1B0h] BYREF
  float v123; // [esp+5B8h] [ebp-1A4h] BYREF
  float v124; // [esp+5BCh] [ebp-1A0h]
  float v125; // [esp+5C0h] [ebp-19Ch]
  float v126; // [esp+5C4h] [ebp-198h] BYREF
  float v127; // [esp+5C8h] [ebp-194h]
  float v128; // [esp+5CCh] [ebp-190h]
  float v129[3]; // [esp+610h] [ebp-14Ch] BYREF
  float v130[3]; // [esp+61Ch] [ebp-140h] BYREF
  float v131; // [esp+628h] [ebp-134h] BYREF
  float v132; // [esp+62Ch] [ebp-130h]
  float v133; // [esp+630h] [ebp-12Ch]
  int v134; // [esp+634h] [ebp-128h] BYREF
  __int64 v135; // [esp+638h] [ebp-124h]
  int v136; // [esp+640h] [ebp-11Ch]
  __int64 v137; // [esp+644h] [ebp-118h] BYREF
  int v138; // [esp+64Ch] [ebp-110h]
  __int64 v139; // [esp+650h] [ebp-10Ch]
  float v140[2]; // [esp+658h] [ebp-104h] BYREF
  float v141; // [esp+660h] [ebp-FCh] BYREF
  float v142[3]; // [esp+664h] [ebp-F8h] BYREF
  float v143[3]; // [esp+670h] [ebp-ECh] BYREF
  float v144; // [esp+67Ch] [ebp-E0h] BYREF
  float v145; // [esp+680h] [ebp-DCh]
  float v146[7]; // [esp+684h] [ebp-D8h] BYREF
  float v147; // [esp+6A0h] [ebp-BCh]
  float v148[3]; // [esp+6A4h] [ebp-B8h] BYREF
  int v149; // [esp+6B0h] [ebp-ACh] BYREF
  float v150; // [esp+6B4h] [ebp-A8h]
  float v151; // [esp+6B8h] [ebp-A4h]
  float v152; // [esp+6BCh] [ebp-A0h] BYREF
  float v153; // [esp+6C0h] [ebp-9Ch]
  float v154; // [esp+6C4h] [ebp-98h]
  float v155; // [esp+6C8h] [ebp-94h] BYREF
  float v156; // [esp+6CCh] [ebp-90h]
  float v157; // [esp+6D0h] [ebp-8Ch]
  float v158; // [esp+6D4h] [ebp-88h] BYREF
  float v159; // [esp+6D8h] [ebp-84h]
  float v160; // [esp+6DCh] [ebp-80h]
  float v161; // [esp+6E0h] [ebp-7Ch] BYREF
  float v162; // [esp+6E4h] [ebp-78h]
  float v163; // [esp+6E8h] [ebp-74h]
  float v164; // [esp+6ECh] [ebp-70h] BYREF
  float v165; // [esp+6F0h] [ebp-6Ch]
  float v166; // [esp+6F4h] [ebp-68h]
  float v167; // [esp+6F8h] [ebp-64h]
  float v168; // [esp+6FCh] [ebp-60h]
  float v169; // [esp+700h] [ebp-5Ch]
  float v170; // [esp+704h] [ebp-58h]
  float v171; // [esp+708h] [ebp-54h]
  float v172; // [esp+70Ch] [ebp-50h]
  float v173; // [esp+710h] [ebp-4Ch] BYREF
  float v174; // [esp+714h] [ebp-48h] BYREF
  float v175; // [esp+718h] [ebp-44h] BYREF
  float v176; // [esp+71Ch] [ebp-40h] BYREF
  int v177; // [esp+720h] [ebp-3Ch] BYREF
  float *v178; // [esp+724h] [ebp-38h]
  float v179; // [esp+728h] [ebp-34h] BYREF
  float v180; // [esp+72Ch] [ebp-30h]
  float v181; // [esp+730h] [ebp-2Ch]
  float v182; // [esp+734h] [ebp-28h] BYREF
  float v183; // [esp+738h] [ebp-24h]
  float v184; // [esp+73Ch] [ebp-20h]
  int v185; // [esp+740h] [ebp-1Ch]
  int v186; // [esp+744h] [ebp-18h]
  float v187; // [esp+748h] [ebp-14h]
  int v188; // [esp+74Ch] [ebp-10h]
  int v189; // [esp+750h] [ebp-Ch]
  void *v190; // [esp+754h] [ebp-8h]
  void *retaddr; // [esp+75Ch] [ebp+0h]

  v189 = a1;
  v190 = retaddr;
  v4 = sub_100422D0();
  v5 = v4;
  v188 = v4;
  if ( !v4 )
    return v4;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 964))(v4, a4);
  v187 = 0.0;
  if ( (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 796))(v5, a2) )
    {
      (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 136))(off_103ED0D8, &v161);
      v152 = v161;
      v153 = v162;
      v154 = 0.0;
      sub_101EE040(&v152, &v155, v122, v121);
      v94 = -v163;
      *(float *)(a4 + 44) = v155 * v94 + *(float *)(a4 + 44);
      *(float *)(a4 + 48) = v156 * v94 + *(float *)(a4 + 48);
      *(float *)(a4 + 52) = v94 * v157 + *(float *)(a4 + 52);
      *(float *)(a4 + 56) = v152;
      *(float *)(a4 + 60) = v153;
      *(float *)(a4 + 64) = v154;
      goto LABEL_102;
    }
    v148[0] = 10.0;
    v148[1] = 10.0;
    v6 = *(_DWORD *)(dword_1042BEAC + 48) == 0;
    v148[2] = 10.0;
    v164 = 20.0;
    HIBYTE(v186) = !v6;
    v165 = -75.0;
    v166 = 20.0;
    v167 = 30.0;
    v168 = -75.0;
    v169 = 20.0;
    v177 = *(int *)(dword_1042BDD4 + 44);
    v147 = *(float *)(dword_1042BE1C + 44);
    v7 = sub_10043030((char *)v5);
    v8 = *(float *)v7;
    v9 = *((float *)v7 + 1);
    v10 = *((float *)v7 + 2);
    v170 = v8;
    v11 = *(float *)(dword_1042BF3C + 44);
    v171 = v9;
    *(float *)&v185 = v11;
    v12 = *(float *)(dword_1042BEF4 + 44);
    v172 = v10;
    v13 = v12 * *((float *)off_103DC81C + 4) + flt_1042BCCC;
    flt_1042BCCC = v13;
    if ( v13 > 360.0 )
      flt_1042BCCC = v13 - 360.0;
    sub_1003BCF0((float *)v5, &v131);
    v111 = *((float *)off_103DC81C + 4) * 1000.0;
    v14 = v133;
    sub_101F0510(v133, flt_1042BCC8, v111);
    flt_1042BCC8 = v14;
    v6 = (*(_BYTE *)(v5 + 732) & 1) == 0;
    *(float *)&v178 = (v132 * v132 + v131 * v131) * 0.000011111111;
    if ( v6 )
      v15 = 0.0;
    else
      v15 = 1.0;
    v112 = *(float *)(dword_1042BF84 + 44) * *((float *)off_103DC81C + 4);
    v107 = v15;
    sub_101F0510(v107, flt_103DD07C, v112);
    flt_103DD07C = v15;
    v175 = 1.0 - v15;
    if ( (dword_1042BD84 & 0x1000) != 0 )
    {
      v16 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v16 = *(const char **)(dword_1042BD8C + 36);
      if ( !v16 )
        v16 = Locale;
    }
    if ( (int)strlen(v16) > 1 )
    {
      sub_10229200(&v117);
      if ( (dword_1042BD84 & 0x1000) != 0 )
      {
        v17 = "FCVAR_NEVER_AS_STRING";
      }
      else
      {
        v17 = *(char **)(dword_1042BD8C + 36);
        if ( !v17 )
          v17 = (char *)Locale;
      }
      sub_102296A0(v17, 0);
      if ( v117 >= 3 )
      {
        for ( i = 0; i < 3; *(&v166 + i) = v20 )
        {
          if ( i < 0 || i >= v117 )
            v19 = Locale;
          else
            v19 = (const char *)v119[i];
          v187 = COERCE_FLOAT(atoi(v19));
          v20 = (double)SLODWORD(v187);
          ++i;
          *(&v163 + i) = v20;
        }
        if ( v167 >= 0.0 )
          v21 = 1.0;
        else
          v21 = -1.0;
        v5 = v188;
        v167 = v167 + v21 * 10.0;
      }
    }
    *(float *)&v185 = (v165 * v165 + v164 * v164) * 0.00015564202 * *(float *)&v185;
    if ( (dword_1042BCC4 & 1) == 0 )
    {
      dword_1042BCC4 |= 1u;
      dword_1042BCB8 = LODWORD(flt_10459240);
      qword_1042BCBC = qword_10459244;
    }
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 532))(v5, &v149);
    v113 = (*(float *)&v149 - *(float *)&dword_1042BCB8) * (*(float *)&v149 - *(float *)&dword_1042BCB8)
         + (v150 - *(float *)&qword_1042BCBC) * (v150 - *(float *)&qword_1042BCBC)
         + (v151 - *((float *)&qword_1042BCBC + 1)) * (v151 - *((float *)&qword_1042BCBC + 1));
    v22 = off_103EDFE0(v113);
    if ( v22 <= 128.0 )
    {
      v23 = *(float *)&v149;
      v24 = v151;
      v25 = v150;
    }
    else
    {
      dword_1042BCB8 = v149;
      v23 = *(float *)&v149;
      *(float *)&qword_1042BCBC = v150;
      v24 = v151;
      v25 = v150;
      *((float *)&qword_1042BCBC + 1) = v151;
    }
    v26 = v24;
    v27 = v22;
    v28 = v26;
    v29 = v27 * 0.0078125;
    v187 = v29;
    if ( 0.0 != v29 )
    {
      v182 = v23 - *(float *)&dword_1042BCB8;
      v183 = v25 - *(float *)&qword_1042BCBC;
      v184 = v28 - *((float *)&qword_1042BCBC + 1);
      v30 = off_103EDFEC();
      v31 = (v147 + v147 * v147 * v187) * *((float *)off_103DC81C + 4);
      if ( v31 <= v30 )
        v30 = v31;
      *(float *)&dword_1042BCB8 = v182 * v30 + *(float *)&dword_1042BCB8;
      *(float *)&qword_1042BCBC = v183 * v30 + *(float *)&qword_1042BCBC;
      *((float *)&qword_1042BCBC + 1) = v30 * v184 + *((float *)&qword_1042BCBC + 1);
    }
    if ( (dword_1042BCC4 & 2) == 0 )
    {
      dword_1042BCC4 |= 2u;
      *(float *)dword_1042BCAC = flt_10459240;
      qword_1042BCB0 = qword_10459244;
    }
    (*(void (__thiscall **)(int *, float *))*off_103ED0D8)(off_103ED0D8, &v158);
    if ( HIBYTE(v186) )
    {
      *(float *)&v178 = flt_103DD07C * *(float *)&v178;
      v108 = flt_1042BCCC * 0.017453292;
      v32 = off_103EDFFC(v108);
      v159 = v32 * *(float *)&v178 * *(float *)&v185 + v159;
      v33 = *(float *)&v185 * (*(float *)&v178 * sin(flt_1042BCCC * 0.017453292 + flt_1042BCCC * 0.017453292)) * 0.5
          + v158;
      v34 = 1000.0;
      if ( flt_1042BCC8 <= 1000.0 )
      {
        v34 = flt_1042BCC8;
        if ( flt_1042BCC8 < -1000.0 )
          v34 = -1000.0;
      }
      v158 = v33 - v34 * v175 * 0.039999999;
    }
    sub_101EE040(&v158, v142, v140, v143);
    v179 = *(float *)&dword_1042BCB8;
    v180 = *(float *)&qword_1042BCBC;
    v134 = dword_1042BCB8;
    v181 = *((float *)&qword_1042BCBC + 1);
    v135 = qword_1042BCBC;
    v144 = 1.0;
    v145 = 1.0;
    v136 = dword_1042BCB8;
    v146[0] = 1.0;
    v137 = qword_1042BCBC;
    v146[1] = -1.0;
    v138 = dword_1042BCB8;
    v139 = qword_1042BCBC;
    v146[2] = 1.0;
    v187 = 0.0;
    v146[3] = 1.0;
    v146[4] = 0.0;
    v146[5] = 1.0;
    v146[6] = 1.0;
    v182 = -10.0;
    v183 = -10.0;
    v184 = -10.0;
    do
    {
      *(float *)&v185 = 0.0;
      v35 = (float *)((char *)&v134 + LODWORD(v187));
      v186 = (int)&v144 + LODWORD(v187);
      v36 = &v141;
      do
      {
        v37 = *(&v167 + v185);
        v38 = *(v36 - 2) * v37;
        v39 = *(v36 - 1) * v37;
        v40 = v37 * *v36;
        v41 = *(float *)v186;
        v173 = v38 * v41 + *v35;
        v174 = v39 * v41 + v35[1];
        v175 = v40 * v41 + v35[2];
        sub_1000E4B0(v120, v35, &v173, &v182, v148);
        sub_1012D400(v188, 1);
        (*(void (__thiscall **)(int, float *, int, float *, float *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          v120,
          33570827,
          &v161,
          &v123);
        if ( *(_DWORD *)(dword_10439134 + 48) )
          sub_10130AC0((int)&v123, (int)&v126, 255, 255, 0, 1, -1.0);
        v42 = *(float *)&v185;
        v186 += 4;
        *v35 = v126;
        ++LODWORD(v42);
        v35[1] = v127;
        v36 += 3;
        *(float *)&v185 = v42;
        v35[2] = v128;
      }
      while ( SLODWORD(v42) < 3 );
      LODWORD(v187) += 12;
    }
    while ( SLODWORD(v187) < 36 );
    v186 = 0;
    v109 = (*((float *)&v135 + 1) - *((float *)&qword_1042BCBC + 1))
         * (*((float *)&v135 + 1) - *((float *)&qword_1042BCBC + 1))
         + (*(float *)&v135 - *(float *)&qword_1042BCBC) * (*(float *)&v135 - *(float *)&qword_1042BCBC)
         + (*(float *)&v134 - *(float *)&dword_1042BCB8) * (*(float *)&v134 - *(float *)&dword_1042BCB8);
    v43 = 1;
    v187 = off_103EDFE0(v109);
    v185 = 1;
    v44 = (float *)&v137 + 1;
    do
    {
      v45 = *(v44 - 1) - *(float *)&qword_1042BCBC;
      v46 = *v44 - *((float *)&qword_1042BCBC + 1);
      v110 = v46 * v46 + v45 * v45 + (*(v44 - 2) - *(float *)&dword_1042BCB8) * (*(v44 - 2) - *(float *)&dword_1042BCB8);
      v47 = off_103EDFE0(v110);
      v48 = fabs(v47) - (double)v185 * 5.0;
      if ( v48 > v187 )
      {
        v187 = v48;
        v186 = v43;
      }
      ++v43;
      v44 += 3;
      v185 = v43;
    }
    while ( v43 < 3 );
    v167 = 1.0;
    v168 = 2.0;
    v182 = v179;
    v169 = 0.0;
    v183 = v180;
    v130[0] = -10.0;
    v184 = v181;
    v130[1] = -10.0;
    v187 = 0.0;
    v130[2] = -10.0;
    v186 *= 3;
    v155 = -10.0;
    v156 = -10.0;
    v157 = -10.0;
    do
    {
      v49 = (int)*(&v167 + LODWORD(v187));
      v50 = *(&v144 + v49 + v186) * *(&v164 + v49);
      v51 = &v140[3 * v49];
      v175 = v50;
      v52 = *v51;
      v178 = &v164 + v49;
      v53 = v51[2];
      v54 = v51[1] * v50;
      v129[0] = v52 * v50 + v182;
      v129[1] = v54 + v183;
      v129[2] = v50 * v53 + v184;
      sub_1000E4B0(v120, &v182, v129, v130, v148);
      sub_1012D400(v188, 1);
      (*(void (__thiscall **)(int, float *, int, _BYTE *, float *, float *, int, int, float))(*(_DWORD *)dword_104131A0
                                                                                            + 16))(
        dword_104131A0,
        v120,
        33570827,
        v122,
        &v123,
        v114,
        a3,
        v117,
        COERCE_FLOAT(LODWORD(v118)));
      if ( *(_DWORD *)(dword_10439134 + 48) )
        sub_10130AC0((int)&v123, (int)&v126, 255, 255, 0, 1, -1.0);
      if ( v175 >= 0.0 )
        v55 = 1.0;
      else
        v55 = -1.0;
      *(float *)&v185 = v55;
      v118 = (v128 - v125) * (v128 - v125) + (v127 - v124) * (v127 - v124) + (v126 - v123) * (v126 - v123);
      v56 = off_103EDFE0(v118);
      v57 = v56 * *(float *)&v185;
      v58 = (float *)&dword_1042BCAC[v49];
      v182 = v126;
      v183 = v127;
      v184 = v128;
      if ( *v58 != v57 )
      {
        v118 = fabs(*v178 / v164) * (*((float *)off_103DC81C + 4) * *(float *)&v177);
        v116 = v57;
        sub_101F0510(v116, *v58, v118);
        *v58 = v57;
      }
      v59 = *v58;
      v118 = COERCE_FLOAT(v148);
      v60 = v59 * *v51;
      v117 = (int)&v155;
      v61 = v59;
      v62 = v59 * v51[1];
      v63 = v61 * v51[2];
      v161 = v60 + v179;
      v162 = v62 + v180;
      v163 = v63 + v181;
      sub_1000E4B0(v120, &v179, &v161, &v155, v148);
      v5 = v188;
      sub_1012D400(v188, 1);
      v64 = *(void (__thiscall **)(int))(*(_DWORD *)dword_104131A0 + 16);
      v118 = COERCE_FLOAT(&v123);
      v117 = (int)v121;
      a3 = 33570827;
      v114 = v120;
      v64(dword_104131A0);
      if ( *(_DWORD *)(dword_10439134 + 48) )
        sub_10130AC0((int)&v123, (int)&v126, 255, 255, 0, 1, -1.0);
      v179 = v126;
      v65 = v127;
      ++LODWORD(v187);
      v180 = v127;
      v181 = v128;
    }
    while ( SLODWORD(v187) < 3 );
    v66 = v126 - *(float *)&dword_1042BCB8;
    v67 = v65 - *(float *)&qword_1042BCBC;
    v68 = v128 - *((float *)&qword_1042BCBC + 1);
    v69 = v140[1] * v67 + v140[0] * v66 + v141 * v68;
    v70 = v164;
    if ( v164 > (double)*(&v144 + v186) )
      v70 = *(&v144 + v186);
    if ( v70 >= 0.0 )
    {
      if ( *(float *)dword_1042BCAC >= v69 )
        goto LABEL_70;
    }
    else if ( *(float *)dword_1042BCAC <= v69 )
    {
      goto LABEL_70;
    }
    v69 = *(float *)dword_1042BCAC;
LABEL_70:
    *(float *)dword_1042BCAC = v69;
    v71 = v142[1] * v67 + v142[0] * v66 + v142[2] * v68;
    v72 = v165;
    if ( v165 > (double)v146[v186 - 1] )
      v72 = v146[v186 - 1];
    if ( v72 >= 0.0 )
    {
      if ( *(float *)&qword_1042BCB0 >= v71 )
        goto LABEL_74;
    }
    else if ( *(float *)&qword_1042BCB0 <= v71 )
    {
      goto LABEL_74;
    }
    v71 = *(float *)&qword_1042BCB0;
LABEL_74:
    *(float *)&qword_1042BCB0 = v71;
    v73 = &v146[v186];
    v74 = v68 * v143[2] + v66 * v143[0] + v67 * v143[1];
    v75 = v166;
    if ( v166 > (double)*v73 )
      v75 = *v73;
    if ( v75 >= 0.0 )
    {
      if ( *((float *)&qword_1042BCB0 + 1) >= v74 )
        goto LABEL_78;
    }
    else if ( *((float *)&qword_1042BCB0 + 1) <= v74 )
    {
LABEL_78:
      *((float *)&qword_1042BCB0 + 1) = v74;
      *(float *)(a4 + 44) = v126;
      *(float *)(a4 + 48) = v65;
      *(float *)(a4 + 52) = v128;
      v76 = v171 + v159;
      v77 = v172 + v160;
      *(float *)(a4 + 56) = v170 + v158;
      *(float *)(a4 + 60) = v76;
      *(float *)(a4 + 64) = v77;
      v174 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 20);
      v175 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 32);
      v176 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 44);
      v78 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v6 = *(_BYTE *)(v5 + 3529) == 0;
      v177 = *(int *)(v78 + 56);
      v79 = &v176;
      if ( v6 )
        v79 = &v174;
      v80 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
      v81 = *v79;
      v82 = *v80;
      v83 = v80[1];
      v84 = v80[2];
      v170 = v82;
      v171 = v83;
      v172 = v84;
      v85 = v179 - (v82 + v81);
      v86 = v180 - (v83 + v81);
      v87 = v181 - (v81 + v84);
      if ( v87 >= 0.0 )
        v88 = v87;
      else
        v88 = 0.0;
      if ( v88 <= v79[1] )
      {
        if ( v87 >= 0.0 )
          v89 = v87;
        else
          v89 = 0.0;
      }
      else
      {
        v89 = v79[1];
      }
      v90 = v85 * v85 + v86 * v86;
      v91 = *(float *)(dword_1042BE64 + 44) * *(float *)(dword_1042BE64 + 44);
      v92 = (v87 - v89) * (v87 - v89) + v90;
      if ( v91 == 0.0 )
      {
        v187 = 1.0 - 1.0;
      }
      else
      {
        v93 = v92 / v91;
        if ( v93 <= 1.0 )
          v187 = 1.0 - v93;
        else
          v187 = 1.0 - 1.0;
      }
      goto LABEL_102;
    }
    v74 = *((float *)&qword_1042BCB0 + 1);
    goto LABEL_78;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED0D8 + 172))(off_103ED0D8) )
  {
    *(_BYTE *)(a4 + 16) = 1;
    (*(void (__thiscall **)(int *, int *, float *))(*off_103ED0D8 + 176))(off_103ED0D8, &v177, &v175);
    v95 = *(float *)&v177 * 0.5;
    v96 = 0.5 * v175;
    *(float *)(a4 + 20) = -v95;
    *(float *)(a4 + 24) = -v96;
    *(float *)(a4 + 28) = v95;
    *(float *)(a4 + 32) = v96;
  }
LABEL_102:
  v97 = *(_BYTE *)(v5 + 116)
     || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5)
     && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5) + 116);
  LOBYTE(v4) = 0.0 != v187;
  if ( v97 == (_BYTE)v4 )
  {
    if ( 0.0 == v187 )
      return v4;
    goto LABEL_111;
  }
  if ( 0.0 != v187 )
  {
LABEL_111:
    v177 = (int)((1.0 - v187) * 255.0);
    HIBYTE(v186) = v177;
    sub_10035090((_BYTE *)v5, 2, 1);
    v98 = *(_DWORD *)(v5 + 88);
    LOWORD(v188) = v98;
    BYTE2(v188) = BYTE2(v98);
    HIBYTE(v188) = HIBYTE(v186);
    if ( *(_DWORD *)(v5 + 88) != v188 )
      *(_DWORD *)(v5 + 88) = v188;
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
    if ( v4 )
    {
      v99 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
      sub_10035090(v99, 2, 1);
      v100 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
      v101 = *(_DWORD *)(v100 + 88);
      LOWORD(v188) = v101;
      BYTE2(v188) = BYTE2(v101);
      HIBYTE(v188) = HIBYTE(v186);
      LOWORD(v4) = v101;
      if ( *(_DWORD *)(v100 + 88) != v188 )
        *(_DWORD *)(v100 + 88) = v188;
    }
    return v4;
  }
  sub_10035090((_BYTE *)v5, 0, 1);
  v102 = *(_DWORD *)(v5 + 88);
  LOWORD(v188) = v102;
  BYTE2(v188) = BYTE2(v102);
  HIBYTE(v188) = -1;
  if ( *(_DWORD *)(v5 + 88) != v188 )
    *(_DWORD *)(v5 + 88) = v188;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
  if ( v4 )
  {
    v103 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
    sub_10035090(v103, 0, 1);
    v104 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
    v105 = *(_DWORD *)(v104 + 88);
    LOWORD(v188) = v105;
    BYTE2(v188) = BYTE2(v105);
    HIBYTE(v188) = -1;
    LOBYTE(v4) = v105;
    if ( *(_DWORD *)(v104 + 88) != v188 )
      *(_DWORD *)(v104 + 88) = v188;
  }
  return v4;
}
