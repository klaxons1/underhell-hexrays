// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10010600@<eax>(float a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  _DWORD *v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  char v9; // al
  float v10; // edi
  unsigned __int8 (__thiscall *v11)(_DWORD); // eax
  unsigned __int8 (__thiscall *v12)(_DWORD); // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // eax
  double v17; // st3
  double v18; // rt0
  double v19; // st5
  double v20; // st6
  double v21; // st7
  void (__thiscall *v22)(int, float *, int, _DWORD *); // edx
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  double v27; // st7
  int v28; // eax
  int v29; // edi
  int v30; // eax
  float *v31; // edi
  float v32; // edi
  float v33; // ecx
  void (__thiscall *v34)(_DWORD, _BYTE *, float *, _DWORD *, float *, _DWORD); // edx
  double v35; // st7
  int v36; // eax
  double v37; // st7
  char v38; // cl
  int v39; // ecx
  int v40; // edx
  float v41; // edi
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int i; // edi
  int result; // eax
  bool v47; // zf
  int v48; // [esp+34h] [ebp-2D0h]
  int v49; // [esp+34h] [ebp-2D0h]
  int v50; // [esp+34h] [ebp-2D0h]
  _BYTE v51[88]; // [esp+48h] [ebp-2BCh] BYREF
  int v52; // [esp+A0h] [ebp-264h] BYREF
  float v53; // [esp+A4h] [ebp-260h]
  float v54; // [esp+A8h] [ebp-25Ch]
  float v55; // [esp+ACh] [ebp-258h]
  int v56; // [esp+ECh] [ebp-218h]
  float v57; // [esp+F0h] [ebp-214h] BYREF
  float v58; // [esp+F4h] [ebp-210h]
  float v59; // [esp+F8h] [ebp-20Ch]
  _BYTE v60[12]; // [esp+FCh] [ebp-208h] BYREF
  _BYTE v61[24]; // [esp+108h] [ebp-1FCh] BYREF
  float v62[18]; // [esp+120h] [ebp-1E4h] BYREF
  __int16 v63; // [esp+168h] [ebp-19Ch]
  int v64; // [esp+16Ch] [ebp-198h]
  float v65; // [esp+170h] [ebp-194h]
  int v66; // [esp+174h] [ebp-190h]
  char v67; // [esp+178h] [ebp-18Ch]
  float v68[3]; // [esp+184h] [ebp-180h] BYREF
  float v69[3]; // [esp+190h] [ebp-174h] BYREF
  float v70[3]; // [esp+19Ch] [ebp-168h] BYREF
  float v71; // [esp+1A8h] [ebp-15Ch] BYREF
  float v72; // [esp+1ACh] [ebp-158h]
  float v73; // [esp+1B0h] [ebp-154h]
  float v74; // [esp+1B4h] [ebp-150h]
  float v75; // [esp+1B8h] [ebp-14Ch]
  float v76; // [esp+1BCh] [ebp-148h]
  float v77; // [esp+1C0h] [ebp-144h]
  float v78; // [esp+1C8h] [ebp-13Ch]
  float v79; // [esp+1CCh] [ebp-138h]
  float v80; // [esp+1D0h] [ebp-134h]
  float v81; // [esp+1D8h] [ebp-12Ch]
  float v82; // [esp+1DCh] [ebp-128h]
  float v83; // [esp+1E0h] [ebp-124h]
  int v84; // [esp+1E4h] [ebp-120h]
  int v85; // [esp+1E8h] [ebp-11Ch]
  int v86; // [esp+1ECh] [ebp-118h]
  __int16 v87; // [esp+1F0h] [ebp-114h]
  int v88; // [esp+1F4h] [ebp-110h]
  int v89; // [esp+1F8h] [ebp-10Ch]
  _DWORD *v90; // [esp+214h] [ebp-F0h]
  float v91; // [esp+218h] [ebp-ECh] BYREF
  float v92; // [esp+21Ch] [ebp-E8h]
  float v93; // [esp+220h] [ebp-E4h]
  float v94; // [esp+224h] [ebp-E0h] BYREF
  float v95; // [esp+228h] [ebp-DCh]
  float v96; // [esp+22Ch] [ebp-D8h]
  float v97; // [esp+244h] [ebp-C0h]
  char v98; // [esp+24Fh] [ebp-B5h]
  float v99; // [esp+250h] [ebp-B4h]
  int v100; // [esp+254h] [ebp-B0h]
  int v101; // [esp+258h] [ebp-ACh]
  int v102; // [esp+25Ch] [ebp-A8h]
  __int16 v103; // [esp+260h] [ebp-A4h]
  int v104; // [esp+264h] [ebp-A0h]
  int v105; // [esp+268h] [ebp-9Ch]
  float v106; // [esp+270h] [ebp-94h] BYREF
  float v107; // [esp+274h] [ebp-90h]
  float v108; // [esp+278h] [ebp-8Ch]
  float v109; // [esp+27Ch] [ebp-88h] BYREF
  float v110; // [esp+280h] [ebp-84h]
  float v111; // [esp+284h] [ebp-80h]
  float v112; // [esp+288h] [ebp-7Ch] BYREF
  float v113; // [esp+28Ch] [ebp-78h]
  float v114; // [esp+290h] [ebp-74h]
  int *v115; // [esp+294h] [ebp-70h]
  float v116; // [esp+298h] [ebp-6Ch]
  _DWORD v117[3]; // [esp+29Ch] [ebp-68h] BYREF
  int v118; // [esp+2A8h] [ebp-5Ch]
  int v119; // [esp+2ACh] [ebp-58h]
  int v120; // [esp+2B0h] [ebp-54h]
  int v121; // [esp+2B4h] [ebp-50h]
  int v122; // [esp+2B8h] [ebp-4Ch]
  int v123; // [esp+2BCh] [ebp-48h]
  int v124; // [esp+2C0h] [ebp-44h]
  int v125; // [esp+2C4h] [ebp-40h]
  int v126; // [esp+2C8h] [ebp-3Ch]
  int v127; // [esp+2CCh] [ebp-38h]
  int v128; // [esp+2D0h] [ebp-34h]
  int v129; // [esp+2D4h] [ebp-30h]
  float *v130; // [esp+2D8h] [ebp-2Ch]
  int v131; // [esp+2DCh] [ebp-28h]
  int v132; // [esp+2E0h] [ebp-24h]
  int v133; // [esp+2E4h] [ebp-20h]
  float v134; // [esp+2E8h] [ebp-1Ch]
  float v135; // [esp+2ECh] [ebp-18h]
  float v136; // [esp+2F0h] [ebp-14h]
  float *v137; // [esp+2F4h] [ebp-10h]
  int v138; // [esp+2F8h] [ebp-Ch]
  void *v139; // [esp+2FCh] [ebp-8h]
  void *retaddr; // [esp+304h] [ebp+0h]

  v138 = a2;
  v139 = retaddr;
  v136 = a1;
  v5 = (_DWORD *)sub_101AB1E0(a3, a4);
  v6 = a5;
  v7 = v5;
  v48 = *(_DWORD *)(a5 + 44);
  v90 = v5;
  *(float *)&v8 = COERCE_FLOAT(sub_10007EB0(v5, v48));
  v49 = *(_DWORD *)(a5 + 44);
  v134 = *(float *)&v8;
  v9 = sub_10007EE0(v7, v49);
  v123 = *(_DWORD *)(a5 + 60);
  if ( !v123 && (v9 & 2) != 0 )
    v123 = sub_10008270(v7, *(_DWORD *)(a5 + 44));
  v10 = v136;
  v130 = *(float **)(a5 + 72);
  if ( !v130 )
    v130 = (float *)LODWORD(v136);
  if ( dword_103E69B0 != -1
    && *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 2) == (unsigned int)dword_103E69B0 >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 1) )
  {
    sub_10128BF0();
  }
  sub_10128B50();
  dword_103E69A0 = LODWORD(v134) | 0x1000;
  sub_1012D7F0(0);
  v50 = *(_DWORD *)(a5 + 76);
  *(float *)&v117[1] = v136;
  sub_1012D890(v50);
  v11 = *(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v136) + 72);
  BYTE1(v137) = 0;
  if ( v11(LODWORD(v136)) )
    BYTE1(v137) = ((**(int (__thiscall ***)(int, int, _DWORD))dword_104131A0)(dword_104131A0, a5 + 4, 0) & 0x30) != 0;
  v12 = *(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v10) + 504);
  v131 = 0;
  if ( v12(LODWORD(v10)) )
    v131 = (unsigned __int8)dword_103D89C4;
  v57 = *(float *)(a5 + 16);
  v136 = COERCE_FLOAT(v61);
  v58 = *(float *)(a5 + 20);
  v135 = COERCE_FLOAT(v60);
  v59 = *(float *)(a5 + 24);
  sub_101EDAE0(&v57, v60, v61);
  v116 = 0.0;
  v132 = 0;
  if ( *(int *)a5 > 0 )
  {
    v133 = a5 + 4;
    v115 = (int *)(a5 + 56);
LABEL_16:
    HIBYTE(v137) = 0;
    LOBYTE(v137) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(float, float *))(*(_DWORD *)LODWORD(v136) + 504))(
           COERCE_FLOAT(LODWORD(v136)),
           v137) )
    {
      RandomSeed(v131);
    }
    if ( v132 || *(int *)v6 <= 1 || (*(_BYTE *)(v6 + 64) & 1) == 0 )
    {
      v16 = sub_1000E6B0(&v57, (float *)(v6 + 28), 1.0);
      v13 = *v16;
      v112 = *v16;
      v14 = v16[1];
      v113 = v16[1];
      v15 = v16[2];
    }
    else
    {
      v13 = v57;
      v112 = v57;
      v14 = v58;
      v113 = v58;
      v15 = v59;
    }
    v114 = v15;
    v17 = *(float *)(v6 + 40);
    v124 = 0;
    v18 = v15 * v17;
    v19 = v13 * v17 + *(float *)v133;
    v20 = v14 * v17 + *(float *)(v133 + 4);
    v21 = v18 + *(float *)(v133 + 8);
    v109 = v19;
    v110 = v20;
    v111 = v21;
    BYTE2(v137) = *(_BYTE *)(v6 + 83) != 0;
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float, float *))(*(_DWORD *)LODWORD(v136) + 504))(
             COERCE_FLOAT(LODWORD(v136)),
             v137)
        && *(int *)v6 > 1
        && v132 % 2 )
      {
        v68[0] = 3.0;
        v68[1] = 3.0;
        v68[2] = 3.0;
        v69[0] = -3.0;
        v69[1] = -3.0;
        v69[2] = -3.0;
        sub_1000E4B0(&v71, (float *)v133, &v109, v69, v68);
        v22 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_104131A0 + 16);
        v137 = &v91;
        v22(dword_104131A0, &v71, 1174421507, v117);
        if ( !*(_DWORD *)(dword_10439134 + 48) )
          goto LABEL_32;
        v136 = -1.0;
        LODWORD(v135) = 1;
        v134 = 0.0;
        v133 = 255;
        v132 = 255;
        v131 = (int)&v94;
        v130 = &v91;
      }
      else
      {
        v23 = v109 - *(float *)v133;
        v75 = v23;
        v24 = v110 - *(float *)(v133 + 4);
        v76 = v24;
        v25 = v111 - *(float *)(v133 + 8);
        v77 = v25;
        BYTE1(v85) = 0.0 != v23 * v23 + v24 * v24 + v25 * v25;
        v83 = 0.0;
        v82 = 0.0;
        v137 = &v91;
        v81 = 0.0;
        v80 = 0.0;
        v136 = COERCE_FLOAT(v117);
        v79 = 0.0;
        LOBYTE(v85) = 1;
        v78 = 0.0;
        v135 = 8208.0029;
        v71 = *(float *)v133;
        v134 = COERCE_FLOAT(&v71);
        v72 = *(float *)(v133 + 4);
        v73 = *(float *)(v133 + 8);
        (*(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          &v71,
          1174421507,
          v117);
        if ( !*(_DWORD *)(dword_10439134 + 48) )
          goto LABEL_32;
        v136 = -1.0;
        LODWORD(v135) = 1;
        v134 = 0.0;
        v133 = 0;
        v132 = 255;
        v131 = (int)&v94;
        v130 = &v91;
      }
      sub_10130AC0((int)v130, v131, v132, v133, SLODWORD(v134), SLODWORD(v135), v136);
LABEL_32:
      if ( v98 )
      {
        v94 = v91;
        v95 = v92;
        v96 = v93;
        v97 = 0.0;
      }
      if ( BYTE1(v137) )
        HIBYTE(v137) = 1;
      v26 = (double)*v115;
      v135 = v134;
      v134 = v26;
      sub_10128F30((int)v130, (int)v130, v134, SLODWORD(v135), 0);
      sub_101289E0((int)&v52, *(_DWORD *)(v6 + 44), (int)&v112, (int)&v94, 1.0);
      v27 = *(float *)(v6 + 68);
      v56 = *(_DWORD *)(v6 + 44);
      v53 = v53 * v27;
      v54 = v54 * v27;
      v55 = v27 * v55;
      if ( v56 == -1 )
      {
        DevMsg("ERROR: Undefined ammo type!\n");
        if ( v127 >= 0 && v125 )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v125);
        result = v118;
        v121 = 0;
        if ( v120 >= 0 )
        {
          if ( v118 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v118);
            result = 0;
            v118 = 0;
          }
          v119 = 0;
        }
        v122 = result;
        if ( v120 >= 0 )
        {
          v47 = result == 0;
          goto LABEL_98;
        }
        return result;
      }
      v108 = v96;
      v106 = v94;
      v107 = v95;
      if ( 1.0 == v97 )
      {
        BYTE2(v137) = 0;
        goto LABEL_79;
      }
      if ( *(float *)&v104 != 0.0 && *(_BYTE *)(v6 + 83) )
      {
        sub_1012D890(v104);
        v28 = v128;
        v135 = *(float *)&v104;
        v29 = v128;
        if ( v128 + 1 > v126 )
        {
          sub_1010AFF0(v128 - v126 + 1);
          v28 = v128;
        }
        v128 = v28 + 1;
        v30 = v28 - v29;
        v129 = v125;
        if ( v30 > 0 )
          memcpy((void *)(v125 + 4 * v29 + 4), (const void *)(v125 + 4 * v29), 4 * v30);
        v31 = (float *)(v125 + 4 * v29);
        if ( v31 )
          *v31 = v135;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v104 + 520))(v104)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v104 + 244))(v104) )
      {
        BYTE2(v137) = 0;
      }
      if ( !*(_DWORD *)(dword_104017E4 + 48)
        && !HIBYTE(v137)
        && ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, &v94, 0) & 0x30) != 0 )
      {
        v32 = v136;
        HIBYTE(v137) = (*(int (__thiscall **)(float, int, float *, _DWORD *, float *))(*(_DWORD *)LODWORD(v136) + 80))(
                         COERCE_FLOAT(LODWORD(v136)),
                         v6,
                         &v109,
                         v117,
                         &v106);
        goto LABEL_58;
      }
      if ( !*(_DWORD *)(dword_104017E4 + 48) || *(_BYTE *)(v6 + 81) )
        goto LABEL_57;
      qmemcpy(v51, (const void *)v6, sizeof(v51));
      v6 = a5;
      v33 = v136;
      v34 = *(void (__thiscall **)(_DWORD, _BYTE *, float *, _DWORD *, float *, _DWORD))(*(_DWORD *)LODWORD(v136) + 84);
      v136 = *(float *)(a5 + 72);
      v51[81] = 1;
      v34(LODWORD(v33), v51, &v109, v117, &v106, LODWORD(v136));
      if ( *(_DWORD *)(a5 + 44) == 7 )
      {
        LOBYTE(v137) = 1;
LABEL_57:
        v32 = v136;
LABEL_58:
        v35 = (double)*v115;
        v135 = v35;
        if ( v123 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v104 + 504))(v104) )
            v35 = (double)v123;
          else
            v35 = v135;
        }
        v135 = v134;
        if ( 0.0 == v35 )
        {
          (*(void (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)dword_10412D50 + 124))(
            dword_10412D50,
            v130,
            v104,
            *(_DWORD *)(v6 + 44));
        }
        else
        {
          v36 = 0x2000;
          if ( v35 <= 16.0 )
            v36 = 4096;
          LODWORD(v135) = LODWORD(v134) | v36;
        }
        if ( (!HIBYTE(v137) || (*(_BYTE *)(v6 + 64) & 2) == 0) && !(_BYTE)v137 )
        {
          v134 = v35;
          sub_10128F30(SLODWORD(v32), (int)v130, v134, SLODWORD(v135), 0);
          sub_101289E0((int)&v71, *(_DWORD *)(v6 + 44), (int)&v112, (int)&v94, 1.0);
          v37 = *(float *)(v6 + 68);
          v38 = *(_BYTE *)(v6 + 83);
          v88 = *(_DWORD *)(v6 + 44);
          v72 = v72 * v37;
          v136 = COERCE_FLOAT(&v91);
          LOBYTE(v71) = v38;
          v73 = v73 * v37;
          v135 = COERCE_FLOAT(&v112);
          v74 = v37 * v74;
          (*(void (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)v104 + 92))(v104, &v71, &v112, &v91);
          if ( *(float *)&v104 != 0.0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v104 + 512))(v104) )
            v116 = v82 + v116;
          if ( BYTE1(v137) || !HIBYTE(v137) || (*(_BYTE *)(v6 + 64) & 4) != 0 )
          {
            (*(void (__thiscall **)(float, float *, float))(*(_DWORD *)LODWORD(v32) + 100))(
              COERCE_FLOAT(LODWORD(v32)),
              &v91,
              COERCE_FLOAT(LODWORD(v134)));
          }
          else
          {
            v62[6] = 0.0;
            v62[12] = 0.0;
            v62[7] = 0.0;
            v62[17] = 0.0;
            v62[8] = 0.0;
            v64 = 0;
            v62[9] = 0.0;
            v66 = 0;
            v62[10] = 0.0;
            v67 = 0;
            v62[11] = 0.0;
            v62[14] = 1.0;
            v62[13] = NAN;
            v63 = 0;
            v62[15] = 0.0;
            v65 = v134;
            v62[16] = 0.0;
            v62[3] = v91;
            v62[4] = v92;
            v62[5] = v93;
            v62[0] = v94;
            v62[1] = v95;
            v62[2] = v96;
            sub_10168E60("RagdollImpact", v62);
          }
        }
LABEL_79:
        v39 = *(_DWORD *)(v6 + 48);
        if ( v39 )
        {
          v40 = dword_10401FC8 % v39;
          ++dword_10401FC8;
          if ( !v40 && !*(_BYTE *)(v6 + 81) )
          {
            v41 = v136;
            v70[0] = flt_10459240;
            v70[1] = flt_10459244;
            v70[2] = flt_10459248;
            sub_1000EAE0((void *)LODWORD(v136), (float *)v133, v70);
            sub_1000F8E0(&v71, (int)&v91);
            v83 = v99;
            v74 = v106;
            v42 = *(_DWORD *)LODWORD(v41);
            v84 = v100;
            v75 = v107;
            v85 = v101;
            v76 = v108;
            v87 = v103;
            v43 = *(_DWORD *)(v6 + 44);
            v86 = v102;
            v88 = v104;
            v89 = v105;
            v44 = sub_10007F70(v90, v43);
            (*(void (__thiscall **)(int, float *, float *, int))(v42 + 104))(v44, v70, &v71, v44);
          }
        }
        ++v131;
        ++v124;
      }
      if ( !BYTE2(v137) || v124 > *(_DWORD *)(v6 + 52) )
      {
        for ( i = 0; i < v128; ++i )
          sub_1012D8F0(*(_DWORD *)(v125 + 4 * i));
        if ( v127 >= 0 && v125 )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v125);
        if ( ++v132 < *(_DWORD *)v6 )
          goto LABEL_16;
        break;
      }
    }
  }
  result = v118;
  v121 = 0;
  if ( v120 >= 0 )
  {
    if ( v118 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v118);
      result = 0;
      v118 = 0;
    }
    v119 = 0;
  }
  v122 = result;
  if ( v120 >= 0 )
  {
    v47 = result == 0;
LABEL_98:
    if ( !v47 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
