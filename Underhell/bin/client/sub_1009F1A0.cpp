int __usercall sub_1009F1A0@<eax>(
        float a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        float *a5,
        float a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        char a10)
{
  int result; // eax
  double v11; // st5
  double v12; // st7
  double v13; // rt2
  double v14; // st5
  double v15; // rtt
  double v16; // st5
  double v17; // rt1
  double v18; // st7
  double v19; // rt2
  double v20; // st5
  double v21; // st6
  double v22; // st6
  char v23; // cl
  int v24; // esi
  double v25; // st7
  double v26; // st7
  int v27; // eax
  int v28; // esi
  float *v29; // eax
  double (__stdcall *v30)(_DWORD, _DWORD); // edx
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st7
  double v35; // st7
  double v36; // st7
  int v37; // eax
  int v38; // esi
  double (__stdcall *v39)(_DWORD, _DWORD); // eax
  double v40; // st7
  double (__thiscall *v41)(int, _DWORD, _DWORD); // eax
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // st7
  int v46; // esi
  bool v47; // zf
  double v48; // st7
  double v49; // rtt
  double v50; // st6
  double v51; // st7
  double v52; // st7
  int v53; // eax
  int v54; // esi
  double v55; // st7
  double v56; // st6
  double v57; // st5
  double v58; // st7
  double v59; // rt1
  double v60; // st7
  double v61; // st6
  double v62; // st5
  double v63; // st4
  double v64; // st7
  double v65; // st7
  char v66; // al
  double v67; // st6
  double v68; // st7
  double v69; // st7
  double v70; // st7
  int v71; // eax
  int v72; // esi
  double v73; // st7
  double v74; // st6
  double v75; // st5
  double v76; // st7
  double v77; // rt1
  double v78; // st7
  double v79; // st6
  double v80; // st5
  double v81; // st4
  double v82; // st7
  double v83; // st7
  char v84; // al
  float v85; // [esp+E4h] [ebp-98h]
  float v86; // [esp+E4h] [ebp-98h]
  int v87; // [esp+E8h] [ebp-94h]
  float v88; // [esp+E8h] [ebp-94h]
  float v89; // [esp+E8h] [ebp-94h]
  int v90; // [esp+E8h] [ebp-94h]
  int v91; // [esp+E8h] [ebp-94h]
  float v94; // [esp+F0h] [ebp-8Ch]
  float v95; // [esp+F0h] [ebp-8Ch]
  float v97[5]; // [esp+F8h] [ebp-84h] BYREF
  float v98; // [esp+10Ch] [ebp-70h]
  float v99[3]; // [esp+110h] [ebp-6Ch] BYREF
  float j; // [esp+11Ch] [ebp-60h]
  float v101; // [esp+120h] [ebp-5Ch] BYREF
  float v102; // [esp+124h] [ebp-58h]
  float v103; // [esp+128h] [ebp-54h]
  float v104; // [esp+12Ch] [ebp-50h]
  float v105; // [esp+130h] [ebp-4Ch]
  float v106; // [esp+134h] [ebp-48h]
  float v107; // [esp+138h] [ebp-44h] BYREF
  float v108; // [esp+13Ch] [ebp-40h]
  float v109; // [esp+140h] [ebp-3Ch]
  float v110; // [esp+144h] [ebp-38h]
  float v111; // [esp+148h] [ebp-34h]
  float v112; // [esp+14Ch] [ebp-30h]
  float v113; // [esp+150h] [ebp-2Ch]
  float v114; // [esp+154h] [ebp-28h]
  float v115; // [esp+158h] [ebp-24h]
  int v116; // [esp+15Ch] [ebp-20h]
  int v117; // [esp+160h] [ebp-1Ch]
  int v118; // [esp+164h] [ebp-18h]
  float v119; // [esp+168h] [ebp-14h] BYREF
  float v120; // [esp+16Ch] [ebp-10h]
  float v121; // [esp+170h] [ebp-Ch]
  int i; // [esp+174h] [ebp-8h]
  int v123; // [esp+178h] [ebp-4h]

  result = sub_1012D5A0();
  if ( !(_BYTE)result )
  {
    (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v99, a4, 1);
    v104 = (double)a7 * v99[0] * 0.0039215689;
    v118 = a9;
    v105 = (double)a8 * v99[1] * 0.0039215689;
    v106 = 0.0039215689 * ((double)a9 * v99[2]);
    if ( *a5 == 0.0 && a5[1] == 0.0 && a5[2] == 1.0 )
    {
      v113 = 0.0;
      v114 = 0.0;
      v115 = 1.0;
      v22 = a5[2] * 0.0;
      v20 = v22 - a5[1];
      v21 = *a5 - v22;
      v18 = a5[1] * 0.0 - 0.0 * *a5;
    }
    else
    {
      v11 = a5[2] * 0.0;
      v12 = *a5 * 0.0 - 0.0 * a5[1];
      v13 = v11 - *a5;
      v14 = a5[1] - v11;
      v113 = v14;
      v15 = v14;
      v114 = v13;
      v16 = v12;
      v115 = v12;
      v17 = v13 * a5[2] - v12 * a5[1];
      v18 = v15 * a5[1] - v13 * *a5;
      v19 = v16 * *a5 - v15 * a5[2];
      v20 = v17;
      v21 = v19;
    }
    v23 = a10;
    v110 = v20;
    v111 = v21;
    v112 = v18;
    if ( (a10 & 1) != 0 )
    {
      result = sub_100DDA40(384);
      if ( !result )
        return result;
      result = sub_1017A770("blooddrops");
      v24 = result;
      v117 = result;
      if ( !result )
        return result;
      sub_100F2950(result);
      sub_100F3060(a4);
      *(float *)(v24 + 364) = 600.0;
      v107 = *a4 + 32.0;
      v108 = a4[1] + 32.0;
      v109 = a4[2] + 32.0;
      v101 = *a4 - 32.0;
      v102 = a4[1] - 32.0;
      v103 = a4[2] - 32.0;
      sub_100EC3F0(&v101, &v107, 1);
      *(_DWORD *)(v24 + 376) |= 1u;
      *(float *)(v24 + 380) = 0.2;
      sub_100F0920("effects/blood_drop");
      v116 = sub_100F0950(v87);
      for ( i = 0; i < 14; ++i )
      {
        v119 = *a4;
        v120 = a4[1];
        v121 = a4[2];
        v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -0.5,
                0.5);
        v119 = v113 * v25 * a6 + v119;
        v120 = v114 * v25 * a6 + v120;
        v121 = v25 * v115 * a6 + v121;
        v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -0.5,
                0.5);
        v119 = v110 * v26 * a6 + v119;
        v120 = v111 * v26 * a6 + v120;
        v121 = v26 * v112 * a6 + v121;
        v27 = sub_100F2B60(56, v116, &v119);
        v28 = v27;
        if ( !v27 )
          break;
        *(float *)(v27 + 44) = 0.0;
        v29 = sub_10042010(v97, -0.30000001, 0.30000001);
        v107 = *a5 + *v29;
        v108 = v29[1] + a5[1];
        v30 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v109 = v29[2] + a5[2];
        v88 = 40.0 * a6;
        v85 = a6 * 4.0;
        v31 = v30(LODWORD(v85), LODWORD(v88));
        v32 = v107 * v31;
        v33 = v108 * v31;
        v34 = v31 * v109;
        *(float *)(v28 + 24) = v32;
        *(float *)(v28 + 28) = v33;
        *(float *)(v28 + 32) = v34;
        *(float *)(v28 + 32) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 4.0,
                                 16.0)
                             * a6
                             + *(float *)(v28 + 32);
        *(float *)(v28 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.125,
                                 0.27500001)
                             * a6;
        *(float *)(v28 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.02,
                                 0.029999999)
                             * a6;
        *(float *)(v28 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.5,
                                 1.0);
        sub_1009ECE0((_BYTE *)(v28 + 36), v104, v105, v106, 1.0);
      }
      for ( i = 0; i < 24; ++i )
      {
        v119 = *a4;
        v120 = a4[1];
        v121 = a4[2];
        v35 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -0.5,
                0.5);
        v119 = v113 * v35 * a6 + v119;
        v120 = v114 * v35 * a6 + v120;
        v121 = v35 * v115 * a6 + v121;
        v36 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -0.5,
                0.5);
        v119 = v110 * v36 * a6 + v119;
        v120 = v111 * v36 * a6 + v120;
        v121 = v36 * v112 * a6 + v121;
        v37 = sub_100F2B60(56, v116, &v119);
        v38 = v37;
        if ( !v37 )
          break;
        *(float *)(v37 + 44) = 0.0;
        v118 = sub_10115FB0();
        v101 = (double)v118 * 0.000030518509 + (double)v118 * 0.000030518509 - 1.0;
        v118 = sub_10115FB0();
        v102 = (double)v118 * 0.000030518509 + (double)v118 * 0.000030518509 - 1.0;
        v118 = sub_10115FB0();
        v39 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v107 = *a5 + v101;
        v108 = v102 + a5[1];
        v109 = (double)v118 * 0.000030518509 + (double)v118 * 0.000030518509 - 1.0 + a5[2];
        v40 = v39(0.0, 1.0);
        v41 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v98 = v40 + v109;
        v89 = 25.0 * a6;
        v86 = a6 + a6;
        v42 = v41(dword_10413198, LODWORD(v86), LODWORD(v89));
        v43 = v107 * v42;
        v44 = v108 * v42;
        v45 = v42 * v98;
        *(float *)(v38 + 24) = v43;
        *(float *)(v38 + 28) = v44;
        *(float *)(v38 + 32) = v45;
        *(float *)(v38 + 32) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 4.0,
                                 16.0)
                             * a6
                             + *(float *)(v38 + 32);
        *(float *)(v38 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.25,
                                 0.375)
                             * a6;
        *(float *)(v38 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.0024999999,
                                 0.0049999999)
                             * a6;
        *(float *)(v38 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.5,
                                 1.0);
        sub_1009ECE0((_BYTE *)(v38 + 36), v104, v105, v106, 1.0);
      }
      sub_100F2FF0(v117);
      v23 = a10;
    }
    result = v23 & 2;
    v118 = result;
    if ( (v23 & 2) != 0 || (v23 & 4) != 0 )
    {
      result = sub_100DDA40(264);
      v46 = result;
      v117 = result;
      if ( result )
      {
        sub_100F2BA0("bloodgore");
        *(_DWORD *)v46 = &CBloodSprayEmitter::`vftable';
        sub_100F2950(v46);
        sub_100F3060(a4);
        v47 = v118 == 0;
        *(float *)(v46 + 260) = 0.0;
        if ( !v47 )
        {
          sub_100F0920("effects/blood_gore");
          v48 = a6 * 0.5;
          v116 = sub_100F0950(v90);
          v118 = 6;
          for ( j = v48; ; v48 = j )
          {
            v49 = v48 * a5[1] + a4[1];
            v50 = v48 * a5[2] + a4[2];
            v119 = *a5 * v48 + *a4;
            v120 = v49;
            v121 = v50;
            v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -0.5,
                    0.5);
            v119 = v113 * v51 * a6 + v119;
            v120 = v114 * v51 * a6 + v120;
            v121 = v51 * v115 * a6 + v121;
            v52 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -0.5,
                    0.5);
            v119 = v110 * v52 * a6 + v119;
            v120 = v111 * v52 * a6 + v120;
            v121 = v52 * v112 * a6 + v121;
            v53 = sub_100F2B60(60, v116, &v119);
            v54 = v53;
            if ( v53 )
            {
              *(float *)(v53 + 44) = 0.0;
              *(float *)(v53 + 40) = 0.30000001;
              i = sub_10115FB0();
              *(float *)(v54 + 24) = (double)i * 0.000030518509 * 0.40000001 - 0.2;
              i = sub_10115FB0();
              *(float *)(v54 + 28) = (double)i * 0.000030518509 * 0.40000001 - 0.2;
              i = sub_10115FB0();
              *(float *)(v54 + 32) = (double)i * 0.000030518509 * 0.40000001 - 0.2;
              i = (*(int (__thiscall **)(int, int, int, int, int, float))(*(_DWORD *)dword_10413198 + 8))(
                    dword_10413198,
                    10,
                    100,
                    a3,
                    a2,
                    COERCE_FLOAT(LODWORD(a1)));
              v55 = (double)i;
              v56 = *a5 * v55;
              v57 = v55;
              v58 = v55 * a5[1];
              v59 = v57 * a5[2];
              *(float *)(v54 + 24) = v56 + *(float *)(v54 + 24);
              *(float *)(v54 + 28) = v58 + *(float *)(v54 + 28);
              *(float *)(v54 + 32) = v59 + *(float *)(v54 + 32);
              v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.75,
                      1.25);
              v61 = v104 * v60;
              v62 = 1.0;
              if ( v61 <= 1.0 )
                v62 = v61;
              v123 = (int)(v62 * 255.0);
              *(_BYTE *)(v54 + 48) = v123;
              v63 = v105 * v60;
              if ( v63 > 1.0 )
                v63 = 1.0;
              v123 = (int)(v63 * 255.0);
              *(_BYTE *)(v54 + 49) = v123;
              v64 = v60 * v106;
              if ( v64 > 1.0 )
                v64 = 1.0;
              v123 = (int)(v64 * 255.0);
              *(_BYTE *)(v54 + 50) = v123;
              a1 = a6;
              v94 = a6 * 0.25;
              v65 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      LODWORD(v94));
              a2 = 255;
              a3 = 200;
              v123 = (int)v65;
              v66 = (int)v65;
              *(_BYTE *)(v54 + 53) = v66;
              *(_BYTE *)(v54 + 54) = 2 * v66;
              *(_BYTE *)(v54 + 51) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
              *(_BYTE *)(v54 + 52) = 0;
              v123 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
              *(float *)(v54 + 36) = (float)v123;
              *(float *)(v54 + 56) = 0.0;
            }
            v47 = v118-- == 1;
            v46 = v117;
            if ( v47 )
              break;
          }
        }
        if ( (a10 & 4) != 0 )
        {
          sub_100F0920("effects/blood_puff");
          v116 = sub_100F0950(v91);
          v118 = 6;
          do
          {
            v67 = a6 * a5[1] + a4[1];
            v68 = a6 * a5[2] + a4[2];
            v119 = *a5 * a6 + *a4;
            v120 = v67;
            v121 = v68;
            v69 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
            v119 = v113 * v69 * a6 + v119;
            v120 = v114 * v69 * a6 + v120;
            v121 = v69 * v115 * a6 + v121;
            v70 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
            v119 = v110 * v70 * a6 + v119;
            v120 = v111 * v70 * a6 + v120;
            v121 = v70 * v112 * a6 + v121;
            v71 = sub_100F2B60(60, v116, &v119);
            v72 = v71;
            if ( v71 )
            {
              *(float *)(v71 + 44) = 0.0;
              *(float *)(v71 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                       dword_10413198,
                                       0.5,
                                       0.80000001,
                                       a3,
                                       a2,
                                       LODWORD(a1));
              v123 = sub_10115FB0();
              *(float *)(v72 + 24) = (double)v123 * 0.000030518509 - 0.5;
              v123 = sub_10115FB0();
              *(float *)(v72 + 28) = (double)v123 * 0.000030518509 - 0.5;
              v123 = sub_10115FB0();
              *(float *)(v72 + 32) = (double)v123 * 0.000030518509 - 0.5;
              v123 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 100, 200);
              v73 = (double)v123;
              v74 = *a5 * v73;
              v75 = v73;
              v76 = v73 * a5[1];
              v77 = v75 * a5[2];
              *(float *)(v72 + 24) = v74 + *(float *)(v72 + 24);
              *(float *)(v72 + 28) = v76 + *(float *)(v72 + 28);
              *(float *)(v72 + 32) = v77 + *(float *)(v72 + 32);
              v78 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.75,
                      1.25);
              v79 = v104 * v78;
              v80 = 1.0;
              if ( v79 <= 1.0 )
                v80 = v79;
              v123 = (int)(v80 * 255.0);
              *(_BYTE *)(v72 + 48) = v123;
              v81 = v105 * v78;
              if ( v81 > 1.0 )
                v81 = 1.0;
              v123 = (int)(v81 * 255.0);
              *(_BYTE *)(v72 + 49) = v123;
              v82 = v78 * v106;
              if ( v82 > 1.0 )
                v82 = 1.0;
              v123 = (int)(v82 * 255.0);
              *(_BYTE *)(v72 + 50) = v123;
              a1 = a6 + a6;
              v95 = a6 * 1.5;
              v83 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      LODWORD(v95));
              a2 = 128;
              a3 = 80;
              v123 = (int)v83;
              v84 = (int)v83;
              *(_BYTE *)(v72 + 53) = v84;
              *(_BYTE *)(v72 + 54) = 4 * v84;
              *(_BYTE *)(v72 + 51) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
              *(_BYTE *)(v72 + 52) = 0;
              v123 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
              *(float *)(v72 + 36) = (float)v123;
              *(float *)(v72 + 56) = 0.0;
            }
            v47 = v118-- == 1;
            v46 = v117;
          }
          while ( !v47 );
        }
        return sub_100F2FF0(v46);
      }
    }
  }
  return result;
}
