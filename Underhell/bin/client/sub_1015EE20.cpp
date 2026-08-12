void __userpurge sub_1015EE20(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  float *v5; // esi
  float *v6; // eax
  int v7; // eax
  int (__thiscall *v8)(int, _DWORD, int); // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st6
  float *v12; // esi
  double v13; // st7
  int v14; // eax
  char *v15; // eax
  int v16; // eax
  float *v17; // eax
  float *v18; // esi
  double v19; // st7
  char v20; // al
  int v21; // eax
  int v22; // eax
  float *v23; // eax
  double v24; // st7
  int v25; // eax
  double v26; // st7
  float *v27; // esi
  float *v28; // eax
  int v29; // esi
  int v30; // eax
  char *v31; // eax
  int v32; // eax
  int v33; // edx
  double v34; // st7
  int (__thiscall *v35)(int); // eax
  float *v36; // eax
  double v37; // st6
  double v38; // st7
  float *v39; // eax
  double v40; // st7
  double v41; // st7
  double v42; // st6
  double v43; // st5
  double v44; // st7
  double v45; // st4
  double v46; // st3
  double v47; // st6
  double v48; // st4
  double v49; // st2
  double v50; // st1
  int v51; // esi
  double v52; // st4
  double v53; // rtt
  double v54; // rt0
  int v55; // eax
  float *v56; // eax
  float *v57; // esi
  double v58; // st7
  double v59; // st7
  double v60; // st6
  double v61; // st5
  double v62; // st7
  double v63; // st4
  double v64; // st3
  double v65; // st6
  double v66; // st4
  double v67; // st2
  double v68; // st1
  bool v69; // c0
  bool v70; // c3
  double v71; // st2
  double v72; // st1
  double v73; // rt0
  double v74; // rt1
  double v75; // st1
  double v76; // st5
  double v77; // st3
  double v78; // st2
  double v79; // rt2
  double v80; // rtt
  double v81; // st2
  double v82; // st7
  double v83; // st5
  double v84; // rt1
  double v85; // st7
  bool v86; // c0
  bool v87; // c3
  double v88; // st2
  double v89; // st1
  double v90; // rt2
  double v91; // rtt
  double v92; // st1
  double v93; // st5
  double v94; // st3
  double v95; // st2
  double v96; // rt0
  double v97; // rt1
  double v98; // st2
  double v99; // st7
  double v100; // st5
  double v101; // rtt
  float *v102; // eax
  float v103; // [esp+78h] [ebp-6Ch]
  float v104; // [esp+7Ch] [ebp-68h]
  float v105; // [esp+7Ch] [ebp-68h]
  float v107; // [esp+80h] [ebp-64h]
  float v108; // [esp+80h] [ebp-64h]
  int v109; // [esp+84h] [ebp-60h]
  float v110; // [esp+84h] [ebp-60h]
  float v111[3]; // [esp+8Ch] [ebp-58h] BYREF
  float v112; // [esp+98h] [ebp-4Ch]
  float v113; // [esp+9Ch] [ebp-48h]
  float v114; // [esp+A0h] [ebp-44h]
  float v115; // [esp+A4h] [ebp-40h]
  float v116; // [esp+A8h] [ebp-3Ch]
  float v117; // [esp+ACh] [ebp-38h]
  float v118; // [esp+B0h] [ebp-34h] BYREF
  float v119; // [esp+B4h] [ebp-30h]
  float v120; // [esp+B8h] [ebp-2Ch]
  float v121; // [esp+BCh] [ebp-28h] BYREF
  float v122; // [esp+C0h] [ebp-24h]
  float v123; // [esp+C4h] [ebp-20h]
  float v124; // [esp+C8h] [ebp-1Ch]
  int v125; // [esp+CCh] [ebp-18h]
  float *v126; // [esp+D0h] [ebp-14h] BYREF
  int v127; // [esp+D4h] [ebp-10h]
  float *v128; // [esp+D8h] [ebp-Ch] BYREF
  int v129; // [esp+DCh] [ebp-8h]

  if ( *(_DWORD *)(a1 + 352) && 0.0 != *((float *)off_103DC81C + 4) )
  {
    sub_100F32D0(&v128, (int)"MuzzleFlash");
    v5 = v128;
    v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192, a3, a2);
    sub_100F3060((int)v5, v6);
    v7 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)(a1 - 1192) + 40))(a1 - 1192, &v121);
    sub_101EDFB0(v7);
    v121 = -v121;
    v122 = -v122;
    v123 = -v123;
    v107 = *(float *)(a1 + 328) + 0.5;
    v104 = *(float *)(a1 + 328) - 0.5;
    *(float *)&v125 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(LODWORD(v104));
    v129 = 1;
    v127 = 11;
    while ( 1 )
    {
      v8 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(a1 - 1192) + 36);
      v9 = ((double)v129 + (double)v129) * *(float *)(a1 + 328);
      v112 = v121 * v9;
      v113 = v122 * v9;
      v114 = v9 * v123;
      v10 = (float *)v8(a1 - 1192, LODWORD(v107), v109);
      v109 = (int)&v118;
      v11 = v10[1] + v113;
      LODWORD(v107) = 4;
      v12 = v128;
      v13 = v10[2] + v114;
      v118 = v112 + *v10;
      v119 = v11;
      v120 = v13;
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
      v15 = sub_10076640("effects/muzzleflash%d", v14);
      v16 = sub_100F29B0((int)v12, a1, (int)v12, v15);
      v17 = sub_100F2B60((int)v12, (int)v12, 60, v16, (float *)1);
      v18 = v17;
      if ( !v17 )
        break;
      v17[11] = 0.0;
      v17[10] = 0.0099999998;
      v17[6] = 0.0;
      v17[7] = 0.0;
      v17[8] = 0.0;
      v17[12] = NAN;
      *((_BYTE *)v17 + 52) = 0x80;
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              5.0,
              6.0);
      LODWORD(v124) = (int)(v19 * (double)v127 * 0.11111111 * *(float *)&v125);
      v20 = LOBYTE(v124);
      *((_BYTE *)v18 + 53) = LOBYTE(v124);
      *((_BYTE *)v18 + 54) = v20;
      v21 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      ++v129;
      v124 = *(float *)&v21;
      v22 = --v127;
      v18[9] = (float)SLODWORD(v124);
      v18[14] = 0.0;
      if ( v22 <= 3 )
      {
        if ( *(_BYTE *)(a1 + 308) )
        {
          v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192);
          v115 = *v23 - *(float *)(a1 + 316);
          v116 = v23[1] - *(float *)(a1 + 320);
          v117 = v23[2] - *(float *)(a1 + 324);
          v24 = off_103EDFEC();
          v25 = (int)(v24 / (*(float *)(a1 + 284) * 0.5));
          v127 = v25;
          if ( v25 > 50 )
          {
            v25 = 50;
            v127 = 50;
          }
          v26 = v24 / (double)v127;
          v129 = 1;
          v127 = v25 + 1;
          v124 = v26;
          if ( v25 + 1 > 1 )
          {
            while ( 1 )
            {
              v51 = *(_DWORD *)(a1 + 352);
              v52 = (double)v129;
              v53 = v116 * v26 * v52 + *(float *)(a1 + 320);
              v54 = v26 * v117 * v52 + *(float *)(a1 + 324);
              v118 = v115 * v26 * v52 + *(float *)(a1 + 316);
              v119 = v53;
              v120 = v54;
              v55 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
              v56 = sub_100F2B60(v51, v51, 60, *(_DWORD *)(a1 + 4 * v55 + 332), &v118);
              v57 = v56;
              if ( v56 )
              {
                v56[11] = 0.0;
                v105 = *(float *)(a1 + 268) * 1.1;
                v103 = *(float *)(a1 + 268) * 0.89999998;
                v56[10] = ((double (__stdcall *)(_DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            LODWORD(v103),
                            LODWORD(v105),
                            LODWORD(v107),
                            v109)
                        + *(float *)(a1 + 268);
                *(float *)&v125 = COERCE_FLOAT(sub_10115FB0());
                v57[6] = (double)v125 * 0.000030518509 + (double)v125 * 0.000030518509 - 1.0;
                *(float *)&v125 = COERCE_FLOAT(sub_10115FB0());
                v57[7] = (double)v125 * 0.000030518509 + (double)v125 * 0.000030518509 - 1.0;
                *(float *)&v125 = COERCE_FLOAT(sub_10115FB0());
                v57[8] = (double)v125 * 0.000030518509 + (double)v125 * 0.000030518509 - 1.0;
                v58 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        *(float *)(a1 + 276),
                        *(float *)(a1 + 280));
                v57[6] = v57[6] * v58;
                v57[7] = v57[7] * v58;
                v57[8] = v58 * v57[8];
                v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        0.75,
                        1.25);
                v60 = v59 * *(float *)(a1 + 240);
                v61 = *(float *)(a1 + 244) * v59;
                v62 = v59 * *(float *)(a1 + 248);
                v63 = v60;
                v64 = v61;
                if ( v60 <= 1.0 )
                {
                  v69 = v60 > 0.0;
                  v70 = 0.0 == v60;
                  v65 = 1.0;
                  if ( v69 || v70 )
                  {
                    v71 = 0.0;
                    v72 = v63;
                    v66 = v62;
                  }
                  else
                  {
                    v66 = v62;
                    v71 = 0.0;
                    v72 = 0.0;
                  }
                  v73 = v72;
                  v68 = v71;
                  v67 = v73;
                }
                else
                {
                  v65 = 1.0;
                  v66 = v62;
                  v67 = 1.0;
                  v68 = 0.0;
                }
                v74 = v68;
                v75 = v61;
                v76 = v74;
                if ( v75 <= v65 )
                {
                  if ( v75 >= v76 )
                  {
                    v79 = v67;
                    v78 = v64;
                    v77 = v79;
                  }
                  else
                  {
                    v77 = v67;
                    v78 = v76;
                  }
                }
                else
                {
                  v77 = v67;
                  v78 = v65;
                }
                v80 = v78;
                v81 = v62;
                v82 = v80;
                if ( v81 <= v65 )
                {
                  if ( v81 >= v76 )
                    v76 = v66;
                  v84 = v76;
                  v83 = v77;
                  v65 = v84;
                }
                else
                {
                  v83 = v77;
                }
                *((_BYTE *)v57 + 48) = (int)(v83 * 255.0);
                *((_BYTE *)v57 + 49) = (int)(v82 * 255.0);
                v125 = (int)(255.0 * v65);
                *((_BYTE *)v57 + 50) = v125;
                v125 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               0.75,
                               1.25)
                           * *(float *)(a1 + 284));
                *((_BYTE *)v57 + 53) = v125;
                v125 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               1.0,
                               1.25)
                           * *(float *)(a1 + 288));
                *((_BYTE *)v57 + 54) = v125;
                v110 = *(float *)(a1 + 264) * 1.25;
                v108 = *(float *)(a1 + 264) * 0.75;
                v85 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        LODWORD(v108),
                        LODWORD(v110));
                if ( v85 <= 1.0 )
                {
                  if ( v85 < 0.0 )
                    v85 = 0.0;
                }
                else
                {
                  v85 = 1.0;
                }
                *((_BYTE *)v57 + 52) = 0;
                v109 = 360;
                v107 = 0.0;
                v125 = (int)(v85 * 255.0);
                *((_BYTE *)v57 + 51) = v125;
                *(float *)&v125 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
                v57[9] = (float)v125;
                v57[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            -8.0,
                            8.0);
              }
              if ( ++v129 >= v127 )
                break;
              v26 = v124;
            }
          }
        }
        if ( *(_BYTE *)(a1 + 309) )
        {
          sub_100F3330(&v126, (int)"C_RocketTrail::damaged");
          v27 = v126;
          v28 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192);
          sub_100F3060((int)v27, v28);
          v29 = *(_DWORD *)(a1 + 352);
          v30 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 4);
          v31 = sub_10076640("sprites/flamelet%d", v30);
          *(float *)&v125 = COERCE_FLOAT(sub_100F29B0(v29, a1, v29, v31));
          v127 = 8;
          do
          {
            v124 = COERCE_FLOAT(sub_10115FB0());
            v112 = (double)SLODWORD(v124) * 0.000030518509 * 16.0 - 8.0;
            v124 = COERCE_FLOAT(sub_10115FB0());
            v113 = (double)SLODWORD(v124) * 0.000030518509 * 16.0 - 8.0;
            v32 = sub_10115FB0();
            v33 = *(_DWORD *)(a1 - 1192);
            v124 = *(float *)&v32;
            v34 = (double)v32;
            v35 = *(int (__thiscall **)(int))(v33 + 36);
            v114 = v34 * 0.000030518509 * 16.0 - 8.0;
            v36 = (float *)v35(a1 - 1192);
            v37 = v36[1] + v113;
            v38 = v36[2] + v114;
            v111[0] = v112 + *v36;
            v111[1] = v37;
            v111[2] = v38;
            v39 = sub_100F2B60((int)v126, v29, 60, v125, v111);
            v29 = (int)v39;
            if ( v39 )
            {
              v39[11] = 0.0;
              v39[10] = 0.25;
              v124 = COERCE_FLOAT(sub_10115FB0());
              *(float *)(v29 + 24) = (double)SLODWORD(v124) * 0.000030518509
                                   + (double)SLODWORD(v124) * 0.000030518509
                                   - 1.0;
              v124 = COERCE_FLOAT(sub_10115FB0());
              *(float *)(v29 + 28) = (double)SLODWORD(v124) * 0.000030518509
                                   + (double)SLODWORD(v124) * 0.000030518509
                                   - 1.0;
              v124 = COERCE_FLOAT(sub_10115FB0());
              *(float *)(v29 + 32) = (double)SLODWORD(v124) * 0.000030518509
                                   + (double)SLODWORD(v124) * 0.000030518509
                                   - 1.0;
              v40 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      32.0,
                      128.0,
                      LODWORD(v107),
                      v109);
              *(float *)(v29 + 24) = v40 * *(float *)(v29 + 24);
              *(float *)(v29 + 28) = v40 * *(float *)(v29 + 28);
              *(float *)(v29 + 32) = v40 * *(float *)(v29 + 32);
              v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.75,
                      1.25);
              v42 = v41 * *(float *)(a1 + 240);
              v43 = *(float *)(a1 + 244) * v41;
              v44 = v41 * *(float *)(a1 + 248);
              v45 = v42;
              v46 = v43;
              if ( v42 <= 1.0 )
              {
                v86 = v42 > 0.0;
                v87 = 0.0 == v42;
                v47 = 1.0;
                if ( v86 || v87 )
                {
                  v88 = 0.0;
                  v89 = v45;
                  v48 = v44;
                }
                else
                {
                  v48 = v44;
                  v88 = 0.0;
                  v89 = 0.0;
                }
                v90 = v89;
                v50 = v88;
                v49 = v90;
              }
              else
              {
                v47 = 1.0;
                v48 = v44;
                v49 = 1.0;
                v50 = 0.0;
              }
              v91 = v50;
              v92 = v43;
              v93 = v91;
              if ( v92 <= v47 )
              {
                if ( v92 >= v93 )
                {
                  v96 = v49;
                  v95 = v46;
                  v94 = v96;
                }
                else
                {
                  v94 = v49;
                  v95 = v93;
                }
              }
              else
              {
                v94 = v49;
                v95 = v47;
              }
              v97 = v95;
              v98 = v44;
              v99 = v97;
              if ( v98 <= v47 )
              {
                if ( v98 >= v93 )
                  v93 = v48;
                v101 = v93;
                v100 = v94;
                v47 = v101;
              }
              else
              {
                v100 = v94;
              }
              *(_DWORD *)(v29 + 51) = 537395455;
              v109 = 360;
              v107 = 0.0;
              *(_BYTE *)(v29 + 48) = (int)(v100 * 255.0);
              *(_BYTE *)(v29 + 49) = (int)(v99 * 255.0);
              LODWORD(v124) = (int)(255.0 * v47);
              *(_BYTE *)(v29 + 50) = LOBYTE(v124);
              v124 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
              *(float *)(v29 + 36) = (float)SLODWORD(v124);
              *(float *)(v29 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                            + 4))(
                                       dword_10413198,
                                       -8.0,
                                       8.0);
            }
            --v127;
          }
          while ( v127 );
          if ( v126 )
            sub_100F2FF0((int)v126);
        }
        v102 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36))(a1 - 1192);
        *(float *)(a1 + 316) = *v102;
        *(float *)(a1 + 320) = v102[1];
        *(float *)(a1 + 324) = v102[2];
        break;
      }
    }
    if ( v128 )
      sub_100F2FF0((int)v128);
  }
}
