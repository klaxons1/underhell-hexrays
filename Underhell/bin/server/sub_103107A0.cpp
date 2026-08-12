// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_103107A0(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, float *a4)
{
  float v5; // eax
  bool v6; // zf
  float v7; // eax
  float *v8; // eax
  int v9; // eax
  float *v10; // eax
  int v11; // eax
  float v12; // edx
  float *v13; // eax
  float v14; // edx
  float *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  float v19; // edx
  int v20; // eax
  double v21; // st7
  double v22; // st7
  void (__thiscall *v23)(int, float *, float *); // edx
  double v24; // st7
  int v25; // eax
  int v26; // eax
  double (__thiscall *v27)(int, _DWORD); // edx
  double v28; // st7
  int *v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // eax
  float *v34; // eax
  int v35; // edx
  int (__thiscall *v36)(int *); // eax
  float *v37; // eax
  int v38; // eax
  int v39; // eax
  double v40; // st7
  int v41; // ecx
  float v42; // edx
  int (__thiscall *v43)(int *, float *); // edx
  float *v44; // eax
  double v45; // st7
  double v46; // st5
  double v47; // st6
  float *v48; // eax
  int v49; // ecx
  float *v50; // eax
  float *v51; // eax
  char *v52; // eax
  float v53; // edx
  int (__thiscall *v54)(int *, float *); // edx
  int v55; // edi
  int v56; // eax
  int v57; // eax
  void (__noreturn ***v58)(); // eax
  void (__noreturn ***v59)(); // eax
  void (__noreturn *v60)(); // edx
  float *v61; // ecx
  double (__thiscall *v62)(int, _DWORD); // edx
  void (__noreturn ***v63)(); // eax
  void (__noreturn ***v64)(); // eax
  double v65; // st7
  void (__noreturn ***v66)(); // eax
  void (__noreturn ***v67)(); // eax
  void (__noreturn ***v68)(); // eax
  void (__noreturn ***v69)(); // eax
  void (__noreturn ***v70)(); // eax
  void (__noreturn ***v71)(); // eax
  void (__noreturn ***v72)(); // eax
  double v73; // st7
  void (__noreturn ***v74)(); // eax
  void (__noreturn ***v75)(); // eax
  void (__noreturn ***v76)(); // eax
  void (__noreturn ***v77)(); // eax
  void (__noreturn ***v78)(); // eax
  float *v79; // eax
  float v80; // edi
  double v81; // st7
  int v82; // eax
  void (__thiscall *v83)(_DWORD, int, _DWORD, _DWORD); // edx
  void (__noreturn ***v84)(); // eax
  void (__noreturn **v85)(); // edi
  float *v86; // eax
  void (__noreturn *v87)(); // edx
  double v88; // st7
  int v89; // eax
  void (__noreturn ***v90)(); // eax
  void (__noreturn ***v91)(); // eax
  void (__noreturn ***v92)(); // eax
  void (__noreturn **v93)(); // edi
  float *v94; // eax
  void (__noreturn *v95)(); // edx
  double v96; // st7
  int v97; // eax
  void (__noreturn ***v98)(); // eax
  void (__noreturn ***v99)(); // eax
  void (__noreturn ***v100)(); // eax
  void (__noreturn ***v101)(); // eax
  void (__noreturn ***v102)(); // eax
  float *v103; // eax
  float *v104; // eax
  int v105; // ecx
  int v106; // ecx
  int v107; // [esp+50h] [ebp-144h] BYREF
  float v108; // [esp+5Ch] [ebp-138h] BYREF
  float v109[23]; // [esp+A8h] [ebp-ECh] BYREF
  float v110[3]; // [esp+104h] [ebp-90h] BYREF
  float v111[6]; // [esp+110h] [ebp-84h] BYREF
  _DWORD v112[3]; // [esp+128h] [ebp-6Ch] BYREF
  void **v113; // [esp+134h] [ebp-60h] BYREF
  _DWORD v114[3]; // [esp+138h] [ebp-5Ch] BYREF
  float v115; // [esp+144h] [ebp-50h]
  float v116; // [esp+148h] [ebp-4Ch] BYREF
  float v117; // [esp+14Ch] [ebp-48h]
  float v118; // [esp+150h] [ebp-44h]
  float v119; // [esp+154h] [ebp-40h] BYREF
  float v120; // [esp+158h] [ebp-3Ch]
  float v121; // [esp+15Ch] [ebp-38h]
  float v122; // [esp+160h] [ebp-34h]
  int v123; // [esp+164h] [ebp-30h]
  int *v124; // [esp+168h] [ebp-2Ch]
  float v125; // [esp+16Ch] [ebp-28h] BYREF
  int v126; // [esp+170h] [ebp-24h] BYREF
  int v127; // [esp+174h] [ebp-20h]
  int v128; // [esp+178h] [ebp-1Ch]
  int v129; // [esp+17Ch] [ebp-18h] BYREF
  float v130; // [esp+180h] [ebp-14h]
  float v131; // [esp+184h] [ebp-10h] BYREF
  _DWORD v132[3]; // [esp+188h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+194h] [ebp+0h]

  v132[0] = a2;
  v132[1] = retaddr;
  v5 = *a4;
  if ( *(_DWORD *)a4 == dword_106E2FD8 )
    return;
  if ( a1[581] == 7 )
    goto LABEL_71;
  if ( LODWORD(v5) != dword_106E2FE8 )
  {
    if ( LODWORD(v5) == dword_106E2FEC )
    {
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      sub_10261B70((float *)a1 + 145, 32.0, 4.0, 1.0, 512.0, 0, 0);
      sub_1023C380(a1, (int)"NPC_AntlionGuard.HitHard", 0.0, 0);
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      v39 = a1[147];
      v40 = *((float *)a1 + 88) + 8.0;
      v41 = a1[145];
      v127 = a1[146];
      v42 = *(float *)a1;
      v130 = v40;
      v43 = *(int (__thiscall **)(int *, float *))(LODWORD(v42) + 908);
      v128 = v39;
      v126 = v41;
      v44 = (float *)v43(a1, &v119);
      v45 = *v44 * v130;
      v46 = v44[1] * v130;
      v47 = v130 * v44[2];
      v130 = *((float *)a1 + 419);
      v113 = &CTraceFilterCharge::`vftable';
      v114[0] = a1;
      v114[1] = 0;
      v114[2] = a1;
      v119 = v45 + *(float *)&v126;
      v120 = v46 + *(float *)&v127;
      v121 = v47 + *(float *)&v128;
      *(float *)&v48 = COERCE_FLOAT(sub_10073730(SLODWORD(v130)));
      v49 = a1[419];
      v130 = *(float *)&v48;
      v50 = (float *)sub_10073710(v49);
      sub_1001F200(v109, (float *)&v126, &v119, v50, (float *)LODWORD(v130));
      (*(void (__thiscall **)(int, float *, int, void ***, int *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v109,
        1174421507,
        &v113,
        &v107);
      if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
      {
        v51 = (float *)sub_10073730(a1[419]);
        v116 = *v51;
        v117 = v51[1];
        v118 = v51[2];
        v116 = v116 + v130;
        v52 = sub_10073710(a1[419]);
        v53 = *(float *)a1;
        v130 = 1.0;
        v54 = *(int (__thiscall **)(int *, float *))(LODWORD(v53) + 904);
        v129 = 20;
        v128 = 255;
        v127 = 255;
        v55 = (int)v52;
        v126 = 100;
        v56 = v54(a1, &v119);
        sub_1011BB60((int)&v126, v55, (int)&v116, v56, v126, v127, v128, v129, v130);
      }
      if ( sub_1026A890((unsigned int *)a1 + 926) )
      {
        v57 = sub_1026A890((unsigned int *)a1 + 926);
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v57 + 264))(v57) )
        {
          a1[926] = -1;
          a1[927] = -1;
        }
      }
      sub_1030B5E0((int)a1, &v108, 200.0, 500.0, 0);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FE4 )
    {
      sub_1023C380(a1, (int)"NPC_AntlionGuard.StepLight", a4[3], 0);
      sub_1030BD10(a1, (int)v132, a3, (int)a1);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FE0 )
    {
      sub_1030F8C0((float *)a1, 0);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FDC )
    {
      sub_1030F8C0((float *)a1, 1);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FD4 )
    {
      sub_10309160(a1);
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 10) >= 6 )
      {
        sub_1023C380(a1, (int)"NPC_AntlionGuard.FrustratedRoar", 0.0, 0);
        v59 = sub_1023DBA0();
        v60 = (*v59)[13];
        v130 = *(float *)&v61;
        ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v60)(v59, a1[946], 0.5, 0);
      }
      else
      {
        v58 = sub_1023DBA0();
        *(float *)&v129 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v58)[17])(
                            v58,
                            a1[946],
                            0,
                            &unk_1066BAF8,
                            3);
      }
      v62 = *(double (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v131 = 4.0;
      *((float *)a1 + 911) = v62(dword_106B31E4, 2.0) + *(float *)(dword_106B31C8 + 12) + *(float *)&v129;
      v63 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v63)[12])(v63, a1[949], 0.0, 0.1);
      v64 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v64)[12])(v64, a1[948], 0.0, 0.1);
      v65 = *(float *)(dword_106B31C8 + 12) + *(float *)&v129 - 0.2;
      goto LABEL_52;
    }
    if ( LODWORD(v5) == dword_106E2FD0 )
    {
      sub_10309160(a1);
      v66 = sub_1023DBA0();
      v130 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v66)[17])(
               v66,
               a1[946],
               0,
               &unk_1066BB28,
               2);
      v67 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v67)[17])(
        v67,
        a1[950],
        0,
        &unk_1066BB48,
        3);
      *((float *)a1 + 911) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               2.0,
                               4.0)
                           + *(float *)(dword_106B31C8 + 12)
                           + v130;
      v68 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v68)[12])(v68, a1[949], 0.0, 0.1);
      v69 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v69)[12])(v69, a1[948], 0.0, 0.1);
      *((float *)a1 + 912) = *(float *)(dword_106B31C8 + 12) + v130 - 0.2;
      return;
    }
    if ( LODWORD(v5) == dword_106E2FBC )
    {
      sub_10309160(a1);
      v70 = sub_1023DBA0();
      v130 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v70)[17])(
               v70,
               a1[946],
               0,
               &unk_1066BAF8,
               3);
      *((float *)a1 + 911) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               2.0,
                               4.0)
                           + *(float *)(dword_106B31C8 + 12)
                           + v130;
      v71 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v71)[12])(v71, a1[949], 0.0, 0.1);
      v72 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v72)[12])(v72, a1[948], 0.0, 0.1);
      v73 = *(float *)(dword_106B31C8 + 12);
      *(float *)&v128 = 0.0;
      *((float *)a1 + 912) = v73 + v130 - 0.2;
      sub_1023C380(a1, (int)"NPC_AntlionGuard.Roar", 0.0, v128);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FCC )
    {
      sub_10309160(a1);
      v74 = sub_1023DBA0();
      v131 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v74)[17])(
               v74,
               a1[950],
               0,
               &unk_1066BB78,
               4);
      v75 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v75)[17])(
        v75,
        a1[946],
        0,
        &unk_1066BB48,
        3);
      v76 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v76)[12])(v76, a1[949], 0.0, 0.1);
      v77 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v77)[12])(v77, a1[948], 0.0, 0.1);
      *((float *)a1 + 912) = *(float *)(dword_106B31C8 + 12) + v131 - 0.2;
      return;
    }
    if ( LODWORD(v5) == dword_106E2FC8 )
    {
      sub_10309160(a1);
      v78 = sub_1023DBA0();
      v130 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v78)[17])(
               v78,
               a1[946],
               0,
               &unk_1066BBB8,
               2);
      *(float *)&v79 = COERCE_FLOAT(sub_1023DBA0());
      v80 = *v79;
      v131 = *(float *)&v79;
      v81 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              2.0,
              4.0);
      v82 = a1[949];
      v83 = *(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(LODWORD(v80) + 48);
      v130 = v81;
      v83(LODWORD(v131), v82, 0.60000002, LODWORD(v130));
      v84 = sub_1023DBA0();
      v85 = *v84;
      v124 = (int *)v84;
      v130 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               2.0,
               4.0);
      *(float *)&v86 = COERCE_FLOAT(
                         (*(int (__thiscall **)(int, int, int, float))(*(_DWORD *)dword_106B31E4 + 8))(
                           dword_106B31E4,
                           60,
                           80,
                           COERCE_FLOAT(LODWORD(v130))));
      v87 = v85[11];
      v131 = *(float *)&v86;
      v88 = (double)(int)v86;
      v89 = a1[949];
      v130 = v88;
      ((void (__thiscall *)(int *, int, _DWORD))v87)(v124, v89, LODWORD(v130));
      v90 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v90)[12])(v90, a1[948], 0.0, 0.1);
      v65 = v130 * 0.5 + *(float *)(dword_106B31C8 + 12);
LABEL_52:
      *((float *)a1 + 912) = v65;
      sub_1023C380(a1, (int)"NPC_AntlionGuard.Anger", 0.0, 0);
      return;
    }
    if ( LODWORD(v5) == dword_106E2FC4 )
    {
      sub_10309160(a1);
      *(float *)&v129 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                          dword_106B31E4,
                          2.0,
                          4.0);
      v91 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, int))(*v91)[12])(v91, a1[949], 0.60000002, v129);
      v92 = sub_1023DBA0();
      v93 = *v92;
      v124 = (int *)v92;
      *(float *)&v94 = COERCE_FLOAT(
                         (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                           dword_106B31E4,
                           60,
                           80,
                           v129));
      v95 = v93[11];
      v131 = *(float *)&v94;
      v96 = (double)(int)v94;
      v97 = a1[949];
      v130 = v96;
      ((void (__thiscall *)(int *, int, _DWORD))v95)(v124, v97, LODWORD(v130));
      v98 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v98)[12])(v98, a1[948], 0.0, 0.1);
      v65 = *(float *)(dword_106B31C8 + 12) + *(float *)&v129;
      goto LABEL_52;
    }
    if ( LODWORD(v5) == dword_106E2FC0 )
    {
      sub_10309160(a1);
      v99 = sub_1023DBA0();
      v131 = ((double (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v99)[17])(
               v99,
               a1[950],
               0,
               &unk_1066BC08,
               2);
      v100 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v100)[17])(
        v100,
        a1[946],
        0,
        &unk_1066BC28,
        2);
      v101 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v101)[12])(v101, a1[949], 0.0, 0.1);
      v102 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v102)[12])(v102, a1[948], 0.0, 0.1);
      *((float *)a1 + 912) = *(float *)(dword_106B31C8 + 12) + v131;
      return;
    }
    if ( LODWORD(v5) == dword_106E2FB8 )
    {
      sub_1023C380(a1, (int)"NPC_Antlion.BurrowOut", 0.0, 0);
      v103 = (float *)sub_10019640(a1);
      sub_10261B70(v103, 0.5, 80.0, 1.0, 256.0, 0, 0);
      v104 = (float *)sub_10019640(a1);
      v119 = *v104;
      v120 = v104[1];
      v121 = v104[2] + 24.0;
      sub_102ABAF0(&v119, (float *)a1 + 182, 0);
      sub_10035360(a1, 32);
      sub_100EA9A0(a1, 0x8000);
      if ( *((_BYTE *)a1 + 3674) )
      {
        v105 = a1[953];
        if ( v105 )
          sub_10242BA0(v105);
        v106 = a1[954];
        if ( v106 )
          sub_10242BA0(v106);
      }
      return;
    }
LABEL_71:
    sub_1003AD70((int)a1, (int)a4);
    return;
  }
  v6 = !sub_1012B040((unsigned int *)a1 + 929, 0);
  v7 = *(float *)a1;
  if ( !v6 )
  {
    v8 = (float *)(*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(LODWORD(v7) + 576))(a1, 150.0, 250.0, 0);
    sub_1030B5E0((int)a1, v8, *(float *)&v126, *(float *)&v127, v128);
    return;
  }
  v130 = COERCE_FLOAT((*(int (__thiscall **)(int *))(LODWORD(v7) + 368))(a1));
  if ( v130 != 0.0 )
  {
    v123 = *(_DWORD *)(sub_1026A890((unsigned int *)a1 + 929) + 424);
    v9 = sub_1026A890((unsigned int *)a1 + 929);
    *(float *)&v129 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9));
    v10 = (float *)sub_10019640((_DWORD *)LODWORD(v130));
    *(float *)&v126 = *v10 - *(float *)v129;
    *(float *)&v127 = v10[1] - *(float *)(v129 + 4);
    *(float *)&v128 = v10[2] - *(float *)(v129 + 8);
    v125 = off_10689714();
    *(float *)&v11 = COERCE_FLOAT(sub_1026A890((unsigned int *)a1 + 929));
    v12 = *(float *)a1;
    v129 = v11;
    *(float *)&v13 = COERCE_FLOAT((*(int (__thiscall **)(int *))(LODWORD(v12) + 576))(a1));
    v14 = *(float *)v129;
    v122 = *(float *)&v13;
    v15 = (float *)(*(int (__thiscall **)(int))(LODWORD(v14) + 576))(v129);
    v111[3] = *v15 - *(float *)LODWORD(v122);
    v111[4] = v15[1] - *(float *)(LODWORD(v122) + 4);
    v111[5] = v15[2] - *(float *)(LODWORD(v122) + 8);
    if ( off_10689714() > 300.0 )
    {
      v16 = sub_1026A890((unsigned int *)a1 + 929);
      sub_103101D0(a1, v16);
      a1[929] = -1;
      return;
    }
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v112[0] = v126;
      v112[2] = v128;
      v112[1] = v127;
      v130 = ((double (__thiscall *)(int, int *))*(_DWORD *)(*(_DWORD *)v123 + 116))(v123, &v126);
      v17 = sub_1026A890((unsigned int *)a1 + 929);
      sub_103083D0(a1, v17, v130, (float *)LODWORD(v131));
      if ( sub_10023D10(a1, 31) && !sub_10023D10(a1, 28) )
      {
        v115 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.0,
                 0.52359879);
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
          v115 = v115 * -1.0;
        v124 = &v129;
        v122 = cos(v115);
        sub_10422540(v112, v114);
        v119 = 0.0;
        v120 = v122;
        v121 = COERCE_FLOAT(v111);
        sub_10424E70(&v119, v114, v111);
        v18 = sub_1026A890((unsigned int *)a1 + 929);
        v19 = *(float *)a1;
        v131 = *(float *)(v18 + 352);
        v20 = (*(int (__thiscall **)(int *))(LODWORD(v19) + 368))(a1);
        v21 = (*(float *)(v20 + 352) + v131) * 1.5;
        *(float *)&v126 = v111[0] * v21 + *(float *)&v126;
        *(float *)&v127 = v111[1] * v21 + *(float *)&v127;
        *(float *)&v128 = v21 * v111[2] + *(float *)&v128;
      }
      v22 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v123 + 116))(v123);
      v131 = COERCE_FLOAT(&v125);
      *(float *)&v126 = *(float *)&v126 * v22;
      v130 = COERCE_FLOAT(&v125);
      *(float *)&v127 = *(float *)&v127 * v22;
      *(float *)&v128 = v22 * *(float *)&v128;
      v23 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v123 + 144);
      v125 = 0.0;
      v23(v123, &v125, &v125);
    }
    else
    {
      if ( v125 >= 512.0 )
      {
        if ( v125 > 1024.0 )
          v125 = 1024.0;
      }
      else
      {
        v125 = 512.0;
      }
      v24 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v123 + 116))(v123, LODWORD(v131)) * (v125 * 3.0);
      *(float *)&v126 = *(float *)&v126 * v24;
      *(float *)&v127 = *(float *)&v127 * v24;
      *(float *)&v128 = v24 * *(float *)&v128;
      *(float *)&v128 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v123 + 116))(v123) * 350.0 + *(float *)&v128;
    }
    v25 = sub_1026A890((unsigned int *)a1 + 929);
    if ( (unsigned __int8)sub_1039DC40(v25) )
    {
      LODWORD(v131) = 3;
      v130 = 0.0;
      v26 = sub_1026A890((unsigned int *)a1 + 929);
      sub_101FB150(v26, SLODWORD(v130), SLODWORD(v131));
    }
    v27 = *(double (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v131 = 180.0;
    v131 = v27(dword_106B31E4, -180.0);
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -360.0,
            360.0);
    v116 = v131;
    v117 = 100.0;
    v118 = v28;
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v123 + 236))(v123, &v126);
    (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v123 + 208))(v123, 0, &v116);
  }
  sub_1001F010(v110, -1.0, 1.0);
  off_10689714();
  v29 = (int *)sub_1026A890((unsigned int *)a1 + 929);
  v30 = (int)*off_1061B7A0;
  v130 = 32.0;
  *(float *)&v129 = 64.0;
  *(float *)&v128 = COERCE_FLOAT(v110);
  v31 = *v29;
  LODWORD(v131) = v30 + 16;
  v32 = (*(int (__thiscall **)(int *, float *, _DWORD, _DWORD))(v31 + 576))(v29, v110, 64.0, 32.0);
  (*(void (__thiscall **)(int (__stdcall ***)(char), int))LODWORD(v131))(off_1061B7A0, v32);
  v33 = sub_1026A890((unsigned int *)a1 + 929);
  sub_101FB2A0(v33);
  sub_1023C380(a1, (int)"NPC_AntlionGuard.HitHard", 0.0, 0);
  sub_10023E00((char *)a1, 73);
  sub_10023E00((char *)a1, 74);
  if ( v130 == 0.0 )
    v131 = NAN;
  else
    v131 = *((float *)a1 + 929);
  v130 = COERCE_FLOAT(&v131);
  v124 = (int *)sub_1026A890((unsigned int *)a1 + 929);
  *(float *)&v34 = COERCE_FLOAT(sub_1026A890((unsigned int *)LODWORD(v130)));
  v35 = *v124;
  v130 = *(float *)&v34;
  v36 = *(int (__thiscall **)(int *))(v35 + 576);
  *(float *)&v129 = 250.0;
  *(float *)&v128 = 150.0;
  v37 = (float *)v36(v124);
  sub_1030B5E0((int)a1, v37, *(float *)&v128, *(float *)&v129, SLODWORD(v130));
  if ( a1[699] )
  {
    v130 = *(float *)&a1;
    v38 = sub_1026A890((unsigned int *)a1 + 929);
    sub_100B1890((_DWORD *)a1[699], dword_106E3050, v38, SLODWORD(v130));
  }
  a1[929] = -1;
  a1[938] = 0;
}
