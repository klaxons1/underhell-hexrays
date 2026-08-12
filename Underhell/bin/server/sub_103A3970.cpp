void __thiscall sub_103A3970(int this, int a2)
{
  int *v3; // eax
  int v4; // ecx
  float v5; // edx
  float v6; // eax
  int v7; // edx
  void (__thiscall *v8)(int, int *); // edx
  float *v9; // eax
  double v10; // st7
  char v11; // al
  _DWORD *v12; // ecx
  float *v13; // eax
  double v14; // st7
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  int v18; // ecx
  double v19; // st5
  double v20; // st6
  double v21; // st4
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  double v26; // st7
  float *v27; // eax
  _DWORD *v28; // edi
  float *v29; // eax
  float v30; // ecx
  float v31; // edx
  float v32; // eax
  int v33; // eax
  int v34; // eax
  double v35; // st7
  double v36; // st7
  float *v37; // eax
  float *v38; // eax
  double v39; // st5
  double v40; // st3
  double v41; // st6
  double v42; // st3
  int v43; // ecx
  double v44; // st5
  double v45; // st4
  double v46; // st3
  double v47; // rt0
  double v48; // st3
  double v49; // st4
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  int v54; // ebx
  _DWORD *v55; // eax
  float *v56; // eax
  double v57; // st7
  _DWORD *v58; // eax
  float *v59; // eax
  double v60; // st7
  _DWORD *v61; // edi
  float *v62; // eax
  int v63; // ecx
  float v64; // edx
  float v65; // eax
  double v66; // st7
  int v67; // ecx
  double v68; // st7
  double v69; // st6
  float *v70; // eax
  float *v71; // eax
  float *v72; // eax
  float *v73; // eax
  float *v74; // eax
  double v75; // st4
  double v76; // st6
  double v77; // st4
  double v78; // st5
  double v79; // st6
  float *v80; // eax
  float v81; // [esp+Ch] [ebp-398h]
  float v82; // [esp+10h] [ebp-394h]
  float v83; // [esp+10h] [ebp-394h]
  float v84; // [esp+10h] [ebp-394h]
  float v85; // [esp+10h] [ebp-394h]
  float v86; // [esp+10h] [ebp-394h]
  float v87; // [esp+10h] [ebp-394h]
  float *v88; // [esp+10h] [ebp-394h]
  float *v89; // [esp+10h] [ebp-394h]
  float v90; // [esp+10h] [ebp-394h]
  float v91; // [esp+10h] [ebp-394h]
  _BYTE v92[64]; // [esp+20h] [ebp-384h] BYREF
  _BYTE v93[64]; // [esp+60h] [ebp-344h] BYREF
  _BYTE v94[64]; // [esp+A0h] [ebp-304h] BYREF
  _BYTE v95[64]; // [esp+E0h] [ebp-2C4h] BYREF
  _BYTE v96[64]; // [esp+120h] [ebp-284h] BYREF
  _BYTE v97[64]; // [esp+160h] [ebp-244h] BYREF
  _BYTE v98[64]; // [esp+1A0h] [ebp-204h] BYREF
  _BYTE v99[64]; // [esp+1E0h] [ebp-1C4h] BYREF
  _BYTE v100[44]; // [esp+220h] [ebp-184h] BYREF
  float v101; // [esp+24Ch] [ebp-158h]
  char v102; // [esp+256h] [ebp-14Eh]
  char v103; // [esp+257h] [ebp-14Dh]
  float v104[3]; // [esp+274h] [ebp-130h] BYREF
  float v105[3]; // [esp+280h] [ebp-124h] BYREF
  float v106[3]; // [esp+28Ch] [ebp-118h] BYREF
  float v107[3]; // [esp+298h] [ebp-10Ch] BYREF
  float v108[3]; // [esp+2A4h] [ebp-100h] BYREF
  float v109[3]; // [esp+2B0h] [ebp-F4h] BYREF
  float v110[3]; // [esp+2BCh] [ebp-E8h] BYREF
  float v111[3]; // [esp+2C8h] [ebp-DCh] BYREF
  int v112[3]; // [esp+2D4h] [ebp-D0h] BYREF
  float v113[3]; // [esp+2E0h] [ebp-C4h] BYREF
  float v114[3]; // [esp+2ECh] [ebp-B8h] BYREF
  float v115[3]; // [esp+2F8h] [ebp-ACh] BYREF
  float v116[3]; // [esp+304h] [ebp-A0h] BYREF
  float v117[3]; // [esp+310h] [ebp-94h] BYREF
  float v118[3]; // [esp+31Ch] [ebp-88h] BYREF
  float v119[2]; // [esp+328h] [ebp-7Ch] BYREF
  float v120[2]; // [esp+330h] [ebp-74h] BYREF
  float v121[2]; // [esp+338h] [ebp-6Ch] BYREF
  int v122[3]; // [esp+340h] [ebp-64h] BYREF
  int v123; // [esp+34Ch] [ebp-58h] BYREF
  float v124; // [esp+350h] [ebp-54h]
  int v125; // [esp+354h] [ebp-50h] BYREF
  float v126; // [esp+358h] [ebp-4Ch]
  float v127; // [esp+35Ch] [ebp-48h]
  float v128; // [esp+360h] [ebp-44h] BYREF
  float v129; // [esp+364h] [ebp-40h]
  float v130; // [esp+368h] [ebp-3Ch]
  float v131; // [esp+36Ch] [ebp-38h]
  float v132; // [esp+370h] [ebp-34h] BYREF
  int v133; // [esp+374h] [ebp-30h] BYREF
  int v134; // [esp+378h] [ebp-2Ch]
  float v135; // [esp+37Ch] [ebp-28h]
  int v136; // [esp+380h] [ebp-24h] BYREF
  int v137; // [esp+384h] [ebp-20h]
  float v138; // [esp+388h] [ebp-1Ch]
  int v139; // [esp+38Ch] [ebp-18h] BYREF
  float v140; // [esp+390h] [ebp-14h]
  float v141; // [esp+394h] [ebp-10h]
  int v142; // [esp+398h] [ebp-Ch] BYREF
  float v143; // [esp+39Ch] [ebp-8h]
  float v144; // [esp+3A0h] [ebp-4h]
  int savedregs; // [esp+3A4h] [ebp+0h] BYREF
  float v146; // [esp+3ACh] [ebp+8h]
  int v147; // [esp+3ACh] [ebp+8h]
  int v148; // [esp+3ACh] [ebp+8h]
  int v149; // [esp+3ACh] [ebp+8h]

  switch ( *(_DWORD *)a2 )
  {
    case 0x30:
    case 0x31:
      if ( *(_BYTE *)(this + 3808) || sub_1026A890((unsigned int *)(this + 3812)) )
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Player interrupted by grabbing");
      }
      else
      {
        if ( sub_100697A0((_DWORD *)this, 92, 1) && !sub_10023D10((_DWORD *)this, 8)
          || !sub_1007E040(*(_DWORD **)(this + 2588)) )
        {
          goto LABEL_10;
        }
        v9 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
        *(float *)&v139 = *(float *)(this + 716) - *v9;
        v140 = *(float *)(this + 720) - v9[1];
        v10 = *(float *)(this + 724) - v9[2];
        v141 = v10;
        sub_100D7A40((float *)&v139);
        if ( v10 <= 64.0 )
        {
          v11 = sub_1007E020(*(_DWORD **)(this + 2588));
          v12 = *(_DWORD **)(this + 2588);
          if ( v11 )
          {
            v13 = (float *)sub_1007DFE0(v12);
            v113[0] = *v13 - *(float *)(this + 716);
            v113[1] = v13[1] - *(float *)(this + 720);
            v113[2] = v13[2] - *(float *)(this + 724);
            v14 = sub_10265030(v113);
            v114[0] = 0.0;
            v114[2] = 0.0;
            v114[1] = v14;
            sub_104222B0(v114, 0, v122, 0);
            v82 = *(float *)(this + 3788) * -5.0;
            v15 = (float *)sub_10425F80(v99, this + 728);
            v16 = sub_10260C90(v106, v15, (float *)v122, v82);
            *(float *)(this + 3740) = *(float *)(this + 3740) + *v16;
            *(float *)(this + 3744) = v16[1] + *(float *)(this + 3744);
            *(float *)(this + 3748) = v16[2] + *(float *)(this + 3748);
            sub_10027CD0((_DWORD *)this, 0);
            return;
          }
          sub_100820C0((int)v12);
        }
        v17 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
        v118[0] = *v17 - *(float *)(this + 716);
        v118[1] = v17[1] - *(float *)(this + 720);
        v118[2] = v17[2] - *(float *)(this + 724);
        v115[0] = 0.0;
        v115[2] = 0.0;
        v115[1] = sub_10265030(v118);
        sub_104222B0(v115, &v139, &v136, 0);
        v18 = *(_DWORD *)(this + 424);
        if ( !v18 )
          goto LABEL_43;
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v18 + 204))(v18, &v142, 0);
        off_10689714();
        v144 = 0.0;
        v19 = v143;
        v20 = *(float *)&v142;
        v21 = *(float *)&v139 * *(float *)&v142 + v140 * v143 + v141 * 0.0;
        *(float *)(this + 3740) = flt_106F1CA8;
        *(float *)(this + 3744) = flt_106F1CAC;
        *(float *)(this + 3748) = flt_106F1CB0;
        if ( v21 > 0.25 && v21 < 0.7 )
        {
          *(float *)&v133 = v19;
          *(float *)&v134 = -v20;
          v135 = 0.0;
          v83 = *(float *)(this + 3788) * -0.75;
          v22 = (float *)sub_10425F80(v92, this + 728);
          v23 = sub_10260C90(v105, v22, (float *)&v133, v83);
          *(float *)(this + 3740) = *v23;
          *(float *)(this + 3744) = v23[1];
          *(float *)(this + 3748) = v23[2];
        }
        if ( *(_BYTE *)(this + 3829) )
        {
          v84 = *(float *)(this + 3788) + *(float *)(this + 3788);
          v24 = (float *)sub_10425F80(v97, this + 728);
          v25 = sub_10260C90(v108, v24, (float *)&v136, v84);
          v26 = *v25 + *(float *)(this + 3740);
        }
        else
        {
          v85 = *(float *)(this + 3788);
          v27 = (float *)sub_10425F80(v93, this + 728);
          v25 = sub_10260C90(v111, v27, (float *)&v136, v85);
          v26 = *(float *)(this + 3740) + *v25;
        }
        *(float *)(this + 3740) = v26;
        *(float *)(this + 3744) = v25[1] + *(float *)(this + 3744);
        *(float *)(this + 3748) = v25[2] + *(float *)(this + 3748);
      }
      return;
    case 0x81:
      goto LABEL_10;
    case 0x96:
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
        return;
      }
      if ( *(_BYTE *)(this + 3808) || sub_1026A890((unsigned int *)(this + 3812)) )
      {
LABEL_10:
        sub_10027CD0((_DWORD *)this, 0);
        return;
      }
      v28 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v29 = (float *)sub_10019640(v28);
      v30 = *v29;
      v31 = v29[1];
      v32 = v29[2];
      v128 = v30;
      v129 = v31;
      v130 = v32;
      if ( sub_1039E8B0((void *)this) )
      {
        v33 = (*(int (__thiscall **)(_DWORD *))(*v28 + 288))(v28);
        v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 1096))(v33);
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v34 + 536))(v34, v122);
        *(float *)&v142 = *(float *)v122 + v128;
        v143 = *(float *)&v122[1] + v129;
        v124 = v143;
        v123 = v142;
        v120[0] = v128;
        v120[1] = v129;
        v146 = *(float *)sub_10019640((_DWORD *)this);
        v35 = *((float *)sub_10019640((_DWORD *)this) + 1);
        v119[0] = v146;
        v119[1] = v35;
        sub_104247B0(v119, v120, &v123, v121, &v132);
        v147 = SLODWORD(v121[0]);
        v131 = v121[1];
        v36 = *((float *)sub_10019640((_DWORD *)this) + 2);
        v125 = v147;
        v126 = v131;
        v127 = v36;
        if ( v132 > 0.0 )
        {
          if ( v132 > 1.0 )
          {
            v125 = v142;
            v126 = v143;
          }
          v37 = (float *)sub_10019640((_DWORD *)this);
          *(float *)&v142 = *v37 - v128;
          v143 = v37[1] - v129;
          v144 = v37[2] - v130;
          v38 = (float *)sub_10019640((_DWORD *)this);
          v39 = v38[2] - v127;
          v40 = v38[1] - v126;
          v41 = v40 * v40;
          v42 = *v38 - *(float *)&v125;
          if ( v143 * v143 + *(float *)&v142 * *(float *)&v142 + v144 * v144 > v42 * v42 + v41 + v39 * v39
            && (**(int (__thiscall ***)(int, int *, _DWORD))dword_106B31F4)(dword_106B31F4, &v125, 0) != 1 )
          {
            v128 = *(float *)&v125;
            v129 = v126;
            v130 = v127;
          }
        }
      }
      *(float *)&v133 = v128 - *(float *)(this + 716);
      *(float *)&v134 = v129 - *(float *)(this + 720);
      v135 = v130 - *(float *)(this + 724);
      v117[0] = 0.0;
      v117[2] = 0.0;
      v117[1] = sub_10265030((float *)&v133);
      sub_104222B0(v117, 0, v112, 0);
      v43 = *(_DWORD *)(this + 424);
      if ( !v43 )
        goto LABEL_43;
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v43 + 204))(v43, &v136, 0);
      off_10689714();
      off_10689714();
      v131 = *(float *)&v133 * *(float *)&v136 + *(float *)&v134 * *(float *)&v137 + v138 * v135;
      v44 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3776);
      v45 = v44 + v44 + 1.0;
      *(float *)&v148 = v45;
      v46 = 5.0;
      if ( (*(_BYTE *)(this + 250) & 1) != 0 )
        v46 = 3.75;
      v47 = v46;
      v48 = v45;
      v49 = v47;
      if ( v48 >= 1.0 )
      {
        if ( v49 < v48 )
          *(float *)&v148 = v49;
      }
      else
      {
        *(float *)&v148 = 1.0;
      }
      v139 = v137;
      v140 = -*(float *)&v136;
      v141 = 0.0;
      off_10689714();
      v86 = *(float *)(this + 3788) * -0.75;
      v50 = (float *)sub_10425F80(v95, this + 728);
      v51 = sub_10260C90(v110, v50, (float *)&v139, v86);
      *(float *)(this + 3740) = *v51;
      *(float *)(this + 3744) = v51[1];
      *(float *)(this + 3748) = v51[2];
      v87 = *(float *)&v148 * *(float *)(this + 3788);
      v52 = (float *)sub_10425F80(v98, this + 728);
      v53 = sub_10260C90(v109, v52, (float *)v112, v87);
      *(float *)(this + 3740) = *v53 + *(float *)(this + 3740);
      *(float *)(this + 3744) = v53[1] + *(float *)(this + 3744);
      *(float *)(this + 3748) = v53[2] + *(float *)(this + 3748);
      v54 = *(_DWORD *)(this + 3792);
      if ( (v54 & 2) == 0 && sub_101631D0((float *)(this + 716), &v128) <= 400.0 )
      {
        *(_DWORD *)(this + 3792) = v54 | 2;
        sub_1023C380((_DWORD *)this, (int)"NPC_RollerMine.Taunt", 0.0, 0);
      }
      v132 = 256.0;
      if ( sub_1039E8B0((void *)this) )
        v132 = 400.0;
      if ( *(_BYTE *)(this + 3800) )
        goto LABEL_60;
      v55 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v88 = (float *)sub_10019640(v55);
      v56 = (float *)sub_10019640((_DWORD *)this);
      v57 = sub_101631D0(v56, v88);
      if ( v57 > v132 && sub_1039DF60((float *)this) )
      {
        if ( *(_BYTE *)(this + 3800) )
        {
LABEL_60:
          v58 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          v89 = (float *)sub_10019640(v58);
          v59 = (float *)sub_10019640((_DWORD *)this);
          v60 = sub_101631D0(v59, v89);
          v124 = v60;
          if ( v60 < v132 )
          {
            if ( sub_1039E8B0((void *)this)
              && v124 < 300.0
              && 0.0 != *(float *)&v136
              && 0.0 != *(float *)&v137
              && *(float *)&v148 > 3.0
              && v131 > 0.0 )
            {
              sub_1039F290(this, 300.0);
            }
          }
          else
          {
            sub_1039FCC0((_DWORD *)this);
          }
        }
      }
      else
      {
        sub_103A2F20(this);
      }
      if ( !sub_1039E8B0((void *)this)
        && 0.0 != *(float *)&v136
        && 0.0 != *(float *)&v137
        && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3776) > 1.0
        && *(float *)&v148 > 1.0
        && v131 < 0.0 )
      {
        if ( *(_BYTE *)(this + 3800) )
          sub_1039FCC0((_DWORD *)this);
        sub_10027CD0((_DWORD *)this, 0);
      }
      return;
    case 0x97:
      if ( sub_10023D10((_DWORD *)this, 10) || sub_10023D10((_DWORD *)this, 17) )
        goto LABEL_10;
      return;
    case 0x98:
      v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      v4 = *v3;
      *(float *)&v139 = 16.0;
      v5 = *((float *)v3 + 1);
      v140 = 16.0;
      v6 = *((float *)v3 + 2);
      v141 = 16.0;
      v142 = v4;
      v143 = v5;
      *(float *)&v133 = -16.0;
      v7 = *(_DWORD *)(this + 420);
      *(float *)&v134 = -16.0;
      v135 = -16.0;
      v144 = v6;
      sub_100231A0(
        (int)&savedregs,
        this,
        (float *)&v142,
        (float *)&v142,
        (float *)&v133,
        (float *)&v139,
        33701899,
        this,
        v7,
        (int)v100);
      if ( 1.0 == v101 && v102 != 1 && v103 != 1 )
      {
        if ( sub_1039EFD0((unsigned __int16 *)this) )
        {
          sub_1039F290(this, 256.0);
          *(_BYTE *)(this + 3825) = 0;
          sub_10027CD0((_DWORD *)this, 0);
          if ( *(_DWORD *)(this + 2336) != 2 )
            *(_DWORD *)(this + 2336) = 2;
        }
      }
      return;
    case 0x99:
      v8 = *(void (__thiscall **)(int, int *))(*(_DWORD *)this + 1264);
      v124 = *(float *)(a2 + 4);
      v123 = 14;
      v8(this, &v123);
      return;
    case 0x9B:
      if ( !*(_BYTE *)(this + 2321) || sub_10023D10((_DWORD *)this, 32) )
      {
        v61 = sub_1012BF20(&dword_1069E3E0, 0, "!player", 0, 0, 0, 0);
        if ( !v61 || *(_BYTE *)(this + 3808) || sub_1026A890((unsigned int *)(this + 3812)) )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 1);
        }
        else
        {
          v62 = (float *)sub_10019640(v61);
          v63 = *(int *)v62;
          v64 = v62[1];
          v65 = v62[2];
          v136 = v63;
          v66 = *(float *)&v63 - *(float *)(this + 716);
          *(float *)&v137 = v64;
          v138 = v65;
          *(float *)&v139 = v66;
          v140 = v64 - *(float *)(this + 720);
          v141 = v65 - *(float *)(this + 724);
          v116[0] = 0.0;
          v116[2] = 0.0;
          v116[1] = sub_10265030((float *)&v139);
          sub_104222B0(v116, 0, v112, 0);
          v67 = *(_DWORD *)(this + 424);
          if ( v67 )
          {
            (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v67 + 204))(v67, &v133, 0);
            off_10689714();
            off_10689714();
            v68 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3776);
            v69 = v68 + v68 + 1.0;
            *(float *)&v149 = v69;
            if ( v69 >= 1.0 )
            {
              if ( v69 > 3.75 )
                *(float *)&v149 = 3.75;
            }
            else
            {
              *(float *)&v149 = 1.0;
            }
            v142 = v134;
            v143 = -*(float *)&v133;
            v144 = 0.0;
            off_10689714();
            v90 = *(float *)(this + 3788) * -0.75;
            v70 = (float *)sub_10425F80(v96, this + 728);
            v71 = sub_10260C90(v107, v70, (float *)&v142, v90);
            *(float *)(this + 3740) = *v71;
            *(float *)(this + 3744) = v71[1];
            *(float *)(this + 3748) = v71[2];
            v91 = *(float *)&v149 * *(float *)(this + 3788);
            v72 = (float *)sub_10425F80(v94, this + 728);
            v73 = sub_10260C90(v104, v72, (float *)v112, v91);
            *(float *)(this + 3740) = *(float *)(this + 3740) + *v73;
            *(float *)(this + 3744) = v73[1] + *(float *)(this + 3744);
            *(float *)(this + 3748) = v73[2] + *(float *)(this + 3748);
            v74 = (float *)sub_10019640((_DWORD *)this);
            v75 = v74[1] - *(float *)&v137;
            v76 = v75 * v75;
            v77 = *v74 - *(float *)&v136;
            v78 = v76;
            v79 = v74[2] - v138;
            if ( v77 * v77 + v78 + v79 * v79 < 80000.0 )
              sub_10027CD0((_DWORD *)this, 0);
          }
          else
          {
LABEL_43:
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(
              this,
              "Roller lost internal physics object?");
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 21);
      }
      return;
    case 0x9C:
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3840) )
      {
        *(float *)(this + 3820) = *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 3840) = RandomFloat(0.30000001, 0.89999998) + *(float *)(dword_106B31C8 + 12);
        sub_1023C380((_DWORD *)this, (int)"NPC_RollerMine.Hurt", 0.0, 0);
        v80 = (float *)sub_10019640((_DWORD *)this);
        sub_1023D4B0(8, v80, 400, 0.5, this, 0, 0);
        if ( *(_BYTE *)(this + 3800) )
          sub_1039FCC0((_DWORD *)this);
        else
          sub_103A2F20(this);
      }
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3844) )
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_103A0180, 0.0, 0);
        v81 = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100EC4A0((int *)this, v81, 0);
      }
      return;
    default:
      sub_100497D0((int *)this, (_DWORD *)a2);
      return;
  }
}
