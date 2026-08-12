void __thiscall sub_100497D0(int *this, _DWORD *a2)
{
  int v4; // eax
  char v5; // al
  _DWORD *v6; // eax
  float *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  const char *v10; // eax
  void (__thiscall *v11)(int *, double *); // edx
  char *v12; // eax
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int8 (__thiscall *v19)(int *, int *); // edx
  int v20; // edi
  double v21; // st7
  int v22; // ecx
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  unsigned __int8 (__thiscall *v29)(int *, int *); // edx
  _DWORD *v30; // ebx
  int v31; // eax
  int v32; // ecx
  float v33; // edx
  long double v34; // st6
  long double v35; // st6
  long double v36; // st7
  float *v37; // eax
  float *v38; // eax
  double v39; // st7
  _DWORD *v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // eax
  int *v45; // eax
  int v46; // ecx
  float v47; // edx
  float v48; // eax
  int *v49; // eax
  float v50; // ecx
  float v51; // edx
  float *v52; // eax
  float v53; // eax
  int v54; // edx
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // edi
  int v61; // eax
  int *v62; // ebx
  int v63; // edi
  float *v64; // eax
  double v65; // st7
  int v66; // ebx
  int v67; // eax
  double v68; // st7
  double v69; // st4
  double v70; // rt0
  double v71; // st4
  bool v72; // c0
  double v73; // rt1
  double v74; // st7
  bool v75; // c0
  bool v76; // c3
  double v77; // st7
  _DWORD *v78; // eax
  _DWORD *v79; // eax
  _DWORD *v80; // ebx
  int *v81; // eax
  float v82; // ecx
  float v83; // edx
  float *v84; // eax
  float *v85; // eax
  double v86; // st5
  double v87; // st3
  double v88; // st6
  double v89; // st3
  int v90; // eax
  int v91; // ebx
  int v92; // eax
  int v93; // eax
  float *v94; // ebx
  float *v95; // eax
  double v96; // st6
  double v97; // st7
  double v98; // st7
  int v99; // ebx
  int v100; // eax
  int v101; // edi
  int v102; // eax
  _DWORD *v103; // eax
  int v104; // eax
  int (__thiscall *v105)(int *); // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int *v111; // ecx
  int v112; // eax
  char v113; // al
  int *v114; // ecx
  int v115; // eax
  int v116; // eax
  int v117; // eax
  double v118; // st7
  float *v119; // eax
  double v120; // st6
  double v121; // st7
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int *v125; // ecx
  int v126; // eax
  float *v127; // eax
  float *v128; // eax
  float *v129; // eax
  _DWORD *v130; // eax
  const char *v131; // eax
  float v132; // [esp+24h] [ebp-52Ch]
  int v133; // [esp+24h] [ebp-52Ch]
  float v134; // [esp+24h] [ebp-52Ch]
  float v135; // [esp+24h] [ebp-52Ch]
  float v136; // [esp+24h] [ebp-52Ch]
  char *v137; // [esp+24h] [ebp-52Ch]
  int v138; // [esp+28h] [ebp-528h]
  int v139; // [esp+28h] [ebp-528h]
  char v140[256]; // [esp+38h] [ebp-518h] BYREF
  char v141[256]; // [esp+138h] [ebp-418h] BYREF
  char v142[256]; // [esp+238h] [ebp-318h] BYREF
  char Buffer[256]; // [esp+338h] [ebp-218h] BYREF
  float v144[12]; // [esp+438h] [ebp-118h] BYREF
  float v145[12]; // [esp+468h] [ebp-E8h] BYREF
  float v146[3]; // [esp+498h] [ebp-B8h] BYREF
  _BYTE v147[12]; // [esp+4A4h] [ebp-ACh] BYREF
  _BYTE v148[8]; // [esp+4B0h] [ebp-A0h] BYREF
  _BYTE v149[28]; // [esp+4B8h] [ebp-98h] BYREF
  float v150[10]; // [esp+4D4h] [ebp-7Ch] BYREF
  int v151; // [esp+4FCh] [ebp-54h]
  float v152[3]; // [esp+504h] [ebp-4Ch] BYREF
  float v153[3]; // [esp+510h] [ebp-40h] BYREF
  _DWORD *v154; // [esp+51Ch] [ebp-34h]
  int v155; // [esp+520h] [ebp-30h] BYREF
  float v156; // [esp+524h] [ebp-2Ch]
  float v157; // [esp+528h] [ebp-28h]
  float v158; // [esp+52Ch] [ebp-24h] BYREF
  double v159; // [esp+530h] [ebp-20h] BYREF
  int v160; // [esp+538h] [ebp-18h] BYREF
  float v161; // [esp+53Ch] [ebp-14h]
  float v162; // [esp+540h] [ebp-10h]
  int v163; // [esp+544h] [ebp-Ch] BYREF
  float v164; // [esp+548h] [ebp-8h]
  float v165; // [esp+54Ch] [ebp-4h]
  _DWORD *v166; // [esp+558h] [ebp+8h]
  char v167; // [esp+55Bh] [ebp+Bh]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CAI_BaseNPC::RunTask", 0, "NPCs", 0, 4);
  v4 = *a2;
  switch ( *a2 )
  {
    case 2:
    case 0x7A:
      goto LABEL_71;
    case 4:
    case 5:
      v28 = sub_100217F0(this);
      v163 = *(int *)v28;
      v164 = *(float *)(v28 + 4);
      v29 = *(unsigned __int8 (__thiscall **)(int *, int *))(*this + 880);
      v165 = *(float *)(v28 + 8);
      if ( !v29(this, &v163) )
        sub_10078720((int)&v163, -2.0);
LABEL_71:
      v5 = sub_10022810((float *)this);
      goto LABEL_4;
    case 6:
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1288))(this) )
        goto LABEL_232;
      if ( sub_10262560(this[6]) )
        goto LABEL_232;
      if ( this[581] == 3 )
      {
        if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
        {
          v27 = dword_106B31C8;
          v133 = (*(int (__thiscall **)(int *))(*this + 368))(this);
          (*(void (__thiscall **)(int *))(*this + 1868))(this);
          if ( *(float *)(v27 + 12) - sub_10077680(v133, 1) < 15.0 )
            goto LABEL_232;
        }
      }
      goto LABEL_234;
    case 9:
    case 0xA:
    case 0xB:
      sub_100458D0((int)this, *a2);
      goto LABEL_234;
    case 0xC:
    case 0xD:
      if ( v4 == 13 )
      {
        v30 = (_DWORD *)sub_1007E670(this[647]);
        v154 = v30;
        if ( v30 )
          goto LABEL_79;
      }
      v154 = (_DWORD *)sub_1026A890(this + 605);
      if ( !v154 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 1);
        goto LABEL_234;
      }
      v30 = v154;
LABEL_79:
      if ( !sub_1007E000(this[647]) )
      {
        sub_10027CD0(this, 0);
        sub_10081C10(this[647]);
        goto LABEL_234;
      }
      v167 = 0;
      v31 = sub_1007DD50(this[647]);
      v32 = *(int *)v31;
      v33 = *(float *)(v31 + 4);
      v162 = *(float *)(v31 + 8);
      v160 = v32;
      v34 = v162 - *((float *)this + 181);
      v161 = v33;
      v35 = fabs(v34);
      *((float *)&v159 + 1) = v35;
      if ( v35 >= *((float *)a2 + 1) )
      {
        v36 = v35;
        v167 = 1;
      }
      else
      {
        *(float *)&v163 = *(float *)&v160 - *((float *)this + 179);
        v164 = v161 - *((float *)this + 180);
        v36 = v162 - *((float *)this + 181);
        v165 = v36;
        sub_10018D40((float *)&v163);
        *((float *)&v159 + 1) = v36;
      }
      if ( *(_DWORD *)(this[647] + 12) == 1 )
        goto LABEL_91;
      if ( v36 >= *((float *)a2 + 1) )
      {
        v37 = (float *)sub_10019640(v30);
        *(float *)&v163 = *(float *)&v160 - *v37;
        v164 = v161 - v37[1];
        v165 = v162 - v37[2];
        if ( *((float *)a2 + 1) * 0.5 >= sub_100D7A40(&v163) )
          goto LABEL_90;
      }
      v38 = (float *)sub_10019640(v30);
      *(float *)&v163 = *v38 - *((float *)this + 179);
      v164 = v38[1] - *((float *)this + 180);
      v39 = v38[2] - *((float *)this + 181);
      v165 = v39;
      sub_10018D40((float *)&v163);
      *((float *)&v159 + 1) = v39;
      v40 = sub_10019640(v154);
      if ( !(unsigned __int8)sub_100846B0(v40) )
        goto LABEL_88;
      v30 = v154;
LABEL_90:
      v36 = *((float *)&v159 + 1);
LABEL_91:
      if ( v36 < *((float *)a2 + 1) )
        goto LABEL_232;
      if ( v167 || v36 >= 190.0 || (v41 = 6, this[581] == 3) )
        v41 = 11;
      v42 = sub_1007DE30(this[647]);
      if ( v42 == 7 )
      {
        v42 = 6;
      }
      else if ( v42 == 12 )
      {
        v42 = 11;
      }
      if ( v42 != v41 )
        sub_1007DD70(v41);
      sub_1007DF80(v30);
      goto LABEL_234;
    case 0xE:
      v53 = *((float *)this + 182);
      v54 = this[184];
      LODWORD(v159) = this[183];
      v55 = this[651];
      v158 = v53;
      v56 = this[538];
      HIDWORD(v159) = v54;
      *(float *)&v159 = *(float *)(v55 + 20) + 180.0;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          if ( v57 == 1 )
          {
            v58 = *this;
            this[538] = 0;
            *(float *)&v138 = ((double (__thiscall *)(int *, int *))*(_DWORD *)(v58 + 1948))(this, &v163);
            v59 = (*(int (__thiscall **)(int *))(*this + 504))(this);
            if ( (unsigned __int8)sub_100B3FD0((int)(this + 179), v59, COERCE_FLOAT(v146), 0.0, v138)
              && (v60 = *this,
                  v61 = sub_1007DD50(this[647]),
                  (*(unsigned __int8 (__thiscall **)(int *, int))(v60 + 1756))(this, v61)) )
            {
              v62 = (int *)this[647];
              v63 = *v62;
              v64 = sub_10042450(v144, (float *)&v163, 11, -1.0, 0, SLODWORD(flt_10601D4C));
              (*(void (__thiscall **)(int *, float *, _DWORD))(v63 + 20))(v62, v64, 0);
              *((float *)this + 640) = *(float *)(dword_106B31C8 + 12) + 2.0;
            }
            else
            {
LABEL_88:
              (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 11);
            }
          }
          goto LABEL_234;
        }
        *(float *)&v159 = *(float *)(v55 + 20) + 271.0;
        sub_10422220(&v158, &v155);
        v65 = 24.0;
        if ( *((float *)a2 + 1) <= 24.0 )
          v65 = *((float *)a2 + 1);
        v134 = v65;
        if ( (unsigned __int8)sub_10081A70((int)&v155, *((float *)a2 + 1), v134, COERCE_FLOAT(1)) )
        {
          v66 = *this;
          v67 = sub_1007DD50(this[647]);
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v66 + 1756))(this, v67) )
            goto LABEL_232;
        }
        v68 = *(float *)(this[651] + 20) + 180.0;
        v69 = 360.0;
        if ( v68 < 0.0 )
        {
          do
          {
            v70 = v69;
            v71 = v68 + v69;
            v72 = v71 < 0.0;
            v73 = v71;
            v69 = v70;
            v68 = v73;
          }
          while ( v72 );
        }
        for ( ; v69 <= v68; v68 = v68 - v69 )
          ;
        if ( v68 < 45.0 || v68 >= 315.0 )
        {
          v74 = 0.0;
        }
        else if ( v68 >= 135.0 )
        {
          v75 = v68 > 225.0;
          v76 = 225.0 == v68;
          v74 = 180.0;
          if ( v75 || v76 )
            v74 = 270.0;
        }
        else
        {
          v74 = 90.0;
        }
        *(float *)&v159 = v74;
        sub_10422220(&v158, &v155);
        v77 = 6.0;
        if ( *((float *)a2 + 1) <= 6.0 )
          v77 = *((float *)a2 + 1);
        v139 = 0;
      }
      else
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 1528))(this, 0) )
        {
          sub_10072560(v149);
          sub_10072690(950);
          sub_1042C170(2);
          v78 = sub_10019640(this);
          sub_10072770((int)v78, 240.0);
          v79 = sub_10019640(this);
          sub_10072790((int)v79, 28.0);
          v80 = (_DWORD *)sub_10072EE0(this, v149);
          if ( v80 )
          {
            v166 = *(int *)(dword_106B31C8 + 20) <= 1 ? (_DWORD *)sub_10261B20() : 0;
            v81 = sub_10019640(v80);
            v82 = *((float *)v81 + 1);
            v160 = *v81;
            v83 = *((float *)v81 + 2);
            v161 = v82;
            v162 = v83;
            v84 = (float *)sub_10019640(this);
            *(float *)&v163 = *(float *)&v160 - *v84;
            v164 = v161 - v84[1];
            v165 = v162 - v84[2];
            v85 = (float *)sub_10019640(v166);
            v86 = v162 - v85[2];
            v87 = v161 - v85[1];
            v88 = v87 * v87;
            v89 = *(float *)&v160 - *v85;
            if ( v164 * v164 + *(float *)&v163 * *(float *)&v163 + v165 * v165 < v89 * v89 + v88 + v86 * v86 )
            {
              sub_10042450(v145, (float *)&v160, -1, -1.0, 0, SLODWORD(flt_10601D4C));
              if ( (*(unsigned __int8 (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(
                     this[647],
                     v145,
                     0) )
              {
                sub_10070510(0.1);
                sub_10027CD0(this, 0);
                sub_100725D0(v149);
                goto LABEL_234;
              }
            }
          }
          sub_100725D0(v149);
        }
        v90 = (*(int (__thiscall **)(int *, int))(*this + 1460))(this, 4096);
        v91 = v90;
        if ( v90
          && sub_1026A890(v90)
          && (v92 = sub_1026A890(v91), (*(int (__thiscall **)(int))(*(_DWORD *)v92 + 340))(v92)) )
        {
          v93 = sub_1026A890(v91);
          v94 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v93 + 576))(v93);
          v95 = (float *)sub_10019640(this);
          v96 = v95[1] - v94[1];
          v97 = v95[2] - v94[2];
          *(float *)&v155 = *v95 - *v94;
          v156 = v96;
          v157 = v97;
          off_10689714();
        }
        else
        {
          sub_10422220(&v158, &v155);
        }
        v98 = 36.0;
        if ( *((float *)a2 + 1) <= 36.0 )
          v98 = *((float *)a2 + 1);
        v135 = v98;
        if ( (unsigned __int8)sub_10081A70((int)&v155, *((float *)a2 + 1), v135, COERCE_FLOAT(1)) )
        {
          v99 = *this;
          v100 = sub_1007DD50(this[647]);
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v99 + 1756))(this, v100) )
            goto LABEL_232;
        }
        *(float *)&v159 = *(float *)(this[651] + 20) + 91.0;
        sub_10422220(&v158, &v155);
        v77 = 24.0;
        if ( *((float *)a2 + 1) <= 24.0 )
          v77 = *((float *)a2 + 1);
        v139 = 1;
      }
      v136 = v77;
      if ( !(unsigned __int8)sub_10081A70((int)&v155, *((float *)a2 + 1), v136, *(float *)&v139)
        || (v101 = *this,
            v102 = sub_1007DD50(this[647]),
            !(*(unsigned __int8 (__thiscall **)(int *, int))(v101 + 1756))(this, v102)) )
      {
        ++this[538];
        goto LABEL_234;
      }
      goto LABEL_232;
    case 0xF:
      sub_100439B0(this, 14, *((float *)a2 + 1));
      if ( (unsigned __int8)sub_1007E040(this[647]) )
      {
        v49 = (int *)sub_1007DD50(this[647]);
        v50 = *((float *)v49 + 1);
        v160 = *v49;
        v51 = *((float *)v49 + 2);
        v161 = v50;
        v162 = v51;
        v52 = (float *)sub_10019640(this);
        *(float *)&v163 = *v52 - *(float *)&v160;
        v164 = v52[1] - v161;
        v165 = v52[2] - v162;
        if ( sub_100D7A40(&v163) < 120.0 )
          (*(void (__thiscall **)(int *, const char *))(*this + 1312))(this, "Path away from best sound too short!\n");
      }
      goto LABEL_234;
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1A:
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
      {
        v43 = this[538];
        if ( v43 <= 0 )
        {
          this[538] = v43 + 1;
        }
        else
        {
          this[538] = 0;
          if ( *a2 == 24 )
          {
            v44 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
            v45 = sub_10019640(v44);
          }
          else
          {
            v45 = (int *)sub_100217F0(this);
          }
          v46 = *v45;
          v47 = *((float *)v45 + 1);
          v48 = *((float *)v45 + 2);
          v160 = v46;
          v161 = v47;
          v162 = v48;
          sub_10042450(v150, (float *)this + 719, 11, -2.0, 0, SLODWORD(flt_10601D4C));
          (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)this[647] + 20))(this[647], v150, 2);
          v152[0] = *(float *)&v160 - v150[1];
          v152[1] = v161 - v150[2];
          v152[2] = v162 - v150[3];
          sub_1007DF40(v152);
        }
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 6);
      }
      goto LABEL_234;
    case 0x2D:
    case 0x7B:
    case 0x8C:
    case 0x8D:
      goto LABEL_234;
    case 0x32:
    case 0x36:
      if ( !sub_10022810((float *)this) )
        goto LABEL_215;
      goto LABEL_232;
    case 0x33:
    case 0x35:
    case 0x38:
      v119 = (float *)sub_1007DD50(this[647]);
      v120 = *((float *)this + 180) - v119[1];
      v121 = *((float *)this + 181) - v119[2];
      *(float *)&v163 = *((float *)this + 179) - *v119;
      v164 = v120;
      v165 = v121;
      if ( sub_100D7A40(&v163) <= *((float *)a2 + 1) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x34:
    case 0x37:
      *(float *)&v163 = *((float *)this + 713) - *((float *)this + 179);
      v164 = *((float *)this + 714) - *((float *)this + 180);
      v118 = *((float *)this + 715) - *((float *)this + 181);
      v165 = v118;
      sub_10018D40((float *)&v163);
      if ( v118 <= *((float *)a2 + 1) )
        goto LABEL_215;
      goto LABEL_232;
    case 0x3B:
    case 0x3C:
    case 0x88:
      v5 = (*(int (__thiscall **)(int *))(*this + 732))(this);
      goto LABEL_4;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x78:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this[651] + 76))(this[651], -1);
      goto LABEL_3;
    case 0x41:
      if ( *(int *)(dword_106B31C8 + 20) > 1 || (v23 = (_DWORD *)sub_10261B20()) == 0 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 21);
        goto LABEL_234;
      }
      v24 = sub_10019640(v23);
      sub_10078720((int)v24, -2.0);
      (*(void (__thiscall **)(int *))(*this + 2076))(this);
      if ( sub_10022810((float *)this) && sub_10078F10(this[651]) < 10.0 )
        goto LABEL_232;
      goto LABEL_234;
    case 0x42:
      v18 = sub_100217F0(this);
      v163 = *(int *)v18;
      v164 = *(float *)(v18 + 4);
      v19 = *(unsigned __int8 (__thiscall **)(int *, int *))(*this + 880);
      v165 = *(float *)(v18 + 8);
      if ( v19(this, &v163) )
      {
        v21 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 2148))(this, 1);
        v22 = this[651];
        if ( fabs(v21 - *(float *)(v22 + 20)) > 1.0 )
          *(float *)(v22 + 20) = v21;
      }
      else
      {
        sub_10078690((int)&v163, 0.0, 0.0);
        v20 = this[651];
        *(float *)(v20 + 20) = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 2148))(this, 1);
      }
      goto LABEL_2;
    case 0x44:
      if ( !sub_1002A5B0(this) )
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 4);
      v8 = (_DWORD *)sub_1002A5B0(this);
      if ( (int *)sub_10043FC0(v8) != this )
      {
        v9 = sub_1002A5B0(this);
        v10 = (const char *)sub_100D6390(v9);
        DevMsg("Hint node (%s) being used by non-owner!\n", v10);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
      sub_10043BB0(this, *a2);
      goto LABEL_234;
    case 0x5C:
      if ( !(*(int (__thiscall **)(int *))(*this + 1656))(this) )
        goto LABEL_234;
      v105 = *(int (__thiscall **)(int *))(*this + 1656);
      if ( 0.0 == *((float *)a2 + 1) )
      {
        v107 = v105(this);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v107 + 8))(v107) )
          goto LABEL_234;
      }
      else
      {
        v106 = v105(this);
        v5 = sub_100AC5F0(v106);
LABEL_4:
        if ( !v5 )
          goto LABEL_234;
      }
      goto LABEL_232;
    case 0x5D:
      if ( this[227] == this[596] )
        goto LABEL_232;
      goto LABEL_234;
    case 0x64:
    case 0x65:
      sub_10043050(this, 0, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x66:
    case 0x67:
    case 0x68:
      if ( v4 == 104 )
        v6 = (_DWORD *)sub_1026A890(this + 605);
      else
        v6 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( v6 )
      {
        v7 = (float *)sub_10019640(v6);
        v153[0] = *v7 - *((float *)this + 179);
        v153[1] = v7[1] - *((float *)this + 180);
        v153[2] = v7[2] - *((float *)this + 181);
        v132 = sub_10265030(v153);
        sub_10078210(v132, -2.0);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x69:
      v25 = this[538];
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          sub_10042450(v150, (float *)this + 719, 11, -2.0, 0, SLODWORD(flt_10601D4C));
          v26 = (*(int (__thiscall **)(int *, int))(*this + 1460))(this, 1048351);
          if ( v26 )
            v150[9] = (double)*(int *)(v26 + 8) * 0.5;
          if ( (*(unsigned __int8 (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], v150, 0) )
            *((float *)this + 640) = *(float *)(dword_106B31C8 + 12) + *((float *)a2 + 1);
        }
      }
      else if ( sub_10043B20(this, (int)(this + 719)) )
      {
        sub_1007E340(this[647]);
        sub_100247A0(this);
        ++this[538];
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 8);
      }
      goto LABEL_234;
    case 0x71:
      sub_10049690((int)this);
      goto LABEL_234;
    case 0x72:
      if ( sub_1026A890(this + 672) && (v108 = sub_1026A890(this + 672), (unsigned __int8)sub_1022F710(v108)) )
      {
        sub_10027CD0(this, 0);
        v109 = sub_1026A890(this + 672);
        sub_1022F730(v109);
        v110 = sub_1026A890(this + 672);
        v111 = this + 672;
        if ( *(_DWORD *)(v110 + 800) )
          v137 = *(char **)(sub_1026A890(v111) + 800);
        else
          v137 = *(char **)(sub_1026A890(v111) + 808);
        v112 = sub_1026A890(this + 672);
        sub_10232840(v112, (int)this, v137, 1);
        if ( (unsigned __int8)sub_102DC130(this + 672) )
          sub_10044510((int)this, (int)"Waiting for script, but lost script!");
        v159 = 1.0;
        sub_10045730((float *)this + 216, &v159);
      }
      else
      {
        if ( (unsigned __int8)sub_102DC130(this + 672) )
        {
          DevMsg("Cine died!\n");
          goto LABEL_232;
        }
        if ( sub_1002A570(this) && (unsigned __int8)sub_102DC130(this + 626) )
          sub_10033F30(this);
      }
      goto LABEL_234;
    case 0x74:
      sub_10043050(this, 0, 0);
      if ( !*((_BYTE *)this + 896) )
        goto LABEL_234;
      sub_1026A890(this + 672);
      v113 = sub_10232950(this);
      v114 = this + 672;
      if ( v113 )
      {
        if ( sub_1026A890(v114) )
        {
          v115 = sub_1026A890(this + 672);
          sub_10230940(v115, (int)this);
        }
        goto LABEL_232;
      }
      if ( sub_1026A890(v114) && *(_BYTE *)(sub_1026A890(this + 672) + 901) )
      {
        sub_1026A890(this + 672);
        sub_10231F40(this);
      }
      goto LABEL_234;
    case 0x75:
      if ( (unsigned __int8)sub_102DC130(this + 672) )
        goto LABEL_203;
      if ( *((_BYTE *)this + 896) || (sub_1026A890(this + 672), (unsigned __int8)sub_103E0CF0(0)) )
      {
        v116 = sub_1026A890(this + 672);
        sub_102329C0(v116, (int)this);
      }
      goto LABEL_234;
    case 0x76:
      if ( (unsigned __int8)sub_102DC130(this + 672) )
      {
LABEL_203:
        DevMsg("Scripted sequence destroyed while in use\n");
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 5);
        goto LABEL_234;
      }
      v117 = sub_1026A890(this + 672);
      if ( (unsigned __int8)sub_1022F720(v117) )
        goto LABEL_234;
      sub_1026A890(this + 672);
      sub_10231080(0);
      goto LABEL_232;
    case 0x79:
      if ( !sub_1001EF20((float *)this) )
        sub_10044510((int)this, (int)"Playing a scene, but not in a scene!");
      if ( sub_1007E000(this[647]) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x7C:
      if ( 1.0 == *((float *)a2 + 1) )
      {
        v11 = *(void (__thiscall **)(int *, double *))(*this + 1264);
        *((float *)&v159 + 1) = 0.0;
        LODWORD(v159) = 129;
        v11(this, &v159);
        if ( this[534] == 4 && *(_DWORD *)(dword_106934A4 + 48) )
        {
          v12 = sub_1001E280(Buffer, "[Nav] %s", "TASK_STOP_MOVING Complete\n");
          sub_10029660(this, (int)v12);
        }
        goto LABEL_234;
      }
      if ( sub_100223E0(this) == 1 )
      {
        if ( (this[64] & 1) != 0 )
        {
          if ( *(_DWORD *)(dword_106934A4 + 48) )
          {
            v13 = sub_1001E280(v141, "[Nav] %s", "Jump landed\n");
            sub_10029660(this, (int)v13);
          }
          sub_100223F0(0);
        }
        else
        {
          v14 = (*(int (__thiscall **)(int *, _BYTE *))(*this + 536))(this, v147);
          if ( sub_100D7A40(v14) > 0.01 )
            goto LABEL_234;
          if ( *(_DWORD *)(dword_106934A4 + 48) )
          {
            v15 = sub_1001E280(v142, "[Nav] %s", "Jump stuck\n");
            sub_10029660(this, (int)v15);
          }
          sub_100223F0(0);
          (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 26);
        }
      }
      if ( sub_100223E0(this) == 3 )
        goto LABEL_234;
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v16 = sub_1001E280(v140, "[Nav] %s", "TASK_STOP_MOVING Complete\n");
        sub_10029660(this, (int)v16);
      }
      v17 = sub_10021B60(this);
      sub_10039F40(this, v17);
      goto LABEL_232;
    case 0x7D:
    case 0x7E:
LABEL_2:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this[651] + 76))(this[651], -1);
LABEL_3:
      v5 = sub_10021530(this);
      goto LABEL_4;
    case 0x81:
    case 0x82:
      if ( (0.0 == *((float *)a2 + 1) || *(float *)(dword_106B31C8 + 12) - *((float *)this + 536) <= *((float *)a2 + 1))
        && sub_1007E000(this[647]) )
      {
        if ( (unsigned __int8)sub_1007E040(this[647]) )
        {
          (*(void (__thiscall **)(int *))(*this + 1748))(this);
        }
        else
        {
          v104 = sub_10021B60(this);
          sub_10039F40(this, v104);
        }
      }
      else
      {
        sub_10027CD0(this, 0);
        sub_10082A70(1);
      }
      goto LABEL_234;
    case 0x83:
      if ( !sub_10023D10(this, 50) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x85:
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
        goto LABEL_234;
      v122 = sub_1026A890(this + 605);
      v123 = __RTDynamicCast(
               v122,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseCombatWeapon `RTTI Type Descriptor',
               0);
      v124 = sub_100D1940(v123);
      v125 = this;
      if ( v124 )
        goto LABEL_164;
      goto LABEL_233;
    case 0x86:
    case 0x89:
      v103 = (_DWORD *)sub_1026A890(this + 605);
      if ( !v103 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 3);
        goto LABEL_234;
      }
      if ( sub_10019B00(v103) )
      {
LABEL_164:
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 2);
        goto LABEL_234;
      }
LABEL_215:
      if ( !sub_1007E000(this[647]) )
        goto LABEL_232;
      goto LABEL_234;
    case 0x8B:
      v126 = this[64];
      if ( (v126 & 1) != 0 )
        goto LABEL_232;
      if ( (v126 & 0x400) != 0 )
      {
        sub_100EA9A0(1024);
      }
      else if ( sub_10022810((float *)this) )
      {
        v127 = (float *)sub_1001F490(this);
        *(float *)&v160 = *v127 - 0.1;
        v161 = v127[1] - 0.1;
        v162 = v127[2] - 0.2;
        v128 = (float *)sub_1001F470(this);
        *(float *)&v155 = *v128 + 0.1;
        v156 = v128[1] + 0.1;
        v157 = v128[2];
        v129 = (float *)sub_10019640(this);
        v158 = *v129;
        *(float *)&v159 = v129[1];
        *((float *)&v159 + 1) = v129[2] + 0.1;
        v130 = sub_10019640(this);
        v163 = *v130;
        v164 = *((float *)v130 + 1);
        v165 = *((float *)v130 + 2) - 0.2;
        sub_10079F00(&v158, &v163, &v155, &v160, 33701899, v148);
        if ( v151 )
        {
          sub_101C73D0(v151);
LABEL_232:
          v125 = this;
LABEL_233:
          sub_10027CD0(v125, 0);
        }
        else
        {
          sub_10022750((float *)this, 4.0, 0.0);
        }
      }
LABEL_234:
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return;
    case 0x92:
      if ( sub_10022810((float *)this) )
        goto LABEL_232;
      goto LABEL_234;
    default:
      v131 = (const char *)(*(int (__thiscall **)(int *, _DWORD))(*this + 1316))(this, *a2);
      DevMsg("No RunTask entry for %s\n", v131);
      goto LABEL_232;
  }
}
