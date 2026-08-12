void __thiscall sub_1034F890(int this)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  int v14; // edx
  int v15; // edi
  void (__noreturn ***v16)(); // eax
  double v17; // st7
  float v18; // edx
  float v19; // ecx
  float *v20; // ebx
  _DWORD *v21; // eax
  char v22; // bl
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  float *v25; // eax
  double v26; // st6
  double v27; // st7
  long double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st7
  double v33; // st7
  double v34; // st7
  double v35; // st7
  float v36; // eax
  float v37; // ecx
  long double v38; // st7
  float v39; // ecx
  float v40; // edx
  float v41; // edx
  float v42; // eax
  int v43; // edx
  int v44; // eax
  double v45; // st7
  double v46; // st6
  int v47; // edi
  void (__noreturn ***v48)(); // eax
  double v49; // st7
  float v50; // ecx
  void (__noreturn ***v51)(); // eax
  double v52; // st7
  int v53; // eax
  int v54; // eax
  double v55; // st7
  int v56; // eax
  void (__noreturn ***v57)(); // eax
  void (__thiscall *v58)(int, int); // edx
  bool v59; // zf
  int v60; // eax
  int v61; // eax
  int v62; // edx
  double v63; // st7
  int v64; // eax
  int v65; // edi
  void (__noreturn ***v66)(); // eax
  int v67; // eax
  int v68; // eax
  float *v69; // eax
  double v70; // st7
  int v71; // eax
  int v72; // eax
  int v73; // edi
  _DWORD *v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // edx
  unsigned int *v78; // eax
  void (__noreturn ***v79)(); // eax
  float v80; // [esp+28h] [ebp-138h]
  __int64 v81; // [esp+28h] [ebp-138h]
  _DWORD *v82; // [esp+28h] [ebp-138h]
  __int64 v83; // [esp+28h] [ebp-138h]
  float v84; // [esp+2Ch] [ebp-134h]
  float v85; // [esp+2Ch] [ebp-134h]
  float v86; // [esp+2Ch] [ebp-134h]
  int v87; // [esp+2Ch] [ebp-134h]
  float v88; // [esp+30h] [ebp-130h]
  float v89; // [esp+30h] [ebp-130h]
  float v90; // [esp+30h] [ebp-130h]
  int v91; // [esp+30h] [ebp-130h]
  int v92; // [esp+30h] [ebp-130h]
  _BYTE v93[44]; // [esp+40h] [ebp-120h] BYREF
  float v94; // [esp+6Ch] [ebp-F4h]
  int *v95; // [esp+8Ch] [ebp-D4h]
  _DWORD v96[20]; // [esp+94h] [ebp-CCh] BYREF
  float v97[3]; // [esp+E4h] [ebp-7Ch] BYREF
  float v98[3]; // [esp+F0h] [ebp-70h] BYREF
  float v99[3]; // [esp+FCh] [ebp-64h] BYREF
  float v100[3]; // [esp+108h] [ebp-58h] BYREF
  float v101[3]; // [esp+114h] [ebp-4Ch] BYREF
  int v102[3]; // [esp+120h] [ebp-40h] BYREF
  float v103[3]; // [esp+12Ch] [ebp-34h] BYREF
  float v104; // [esp+138h] [ebp-28h]
  float v105; // [esp+13Ch] [ebp-24h] BYREF
  float v106; // [esp+140h] [ebp-20h]
  float v107; // [esp+144h] [ebp-1Ch]
  float v108; // [esp+148h] [ebp-18h]
  float v109; // [esp+14Ch] [ebp-14h] BYREF
  float v110; // [esp+150h] [ebp-10h]
  float v111; // [esp+154h] [ebp-Ch] BYREF
  float v112; // [esp+158h] [ebp-8h]
  float v113; // [esp+15Ch] [ebp-4h]
  int savedregs; // [esp+160h] [ebp+0h] BYREF

  sub_10041D00((_DWORD *)this);
  if ( (*(_DWORD *)(this + 236) & 0x800000) != 0 )
  {
    v2 = *(_DWORD *)(this + 4016);
    if ( v2 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v2 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1] )
    {
      sub_102487B0((int)v96, this, this, &flt_106F1CA8, &flt_106F1CA8, 1000.0, 64, 0, 0);
      v3 = *(_DWORD *)(this + 4016);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
      sub_100D9E70(v4, this, v96);
    }
  }
  v110 = sub_10349D60(this);
  sub_103499B0((_DWORD *)this, v110);
  v109 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3940);
  v5 = *(_DWORD *)(this + 3960);
  *(float *)(this + 3940) = *(float *)(dword_106B31C8 + 12);
  switch ( v5 )
  {
    case 0:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        v6 = *(_DWORD *)(this + 2372);
        v7 = dword_106E66F8;
        if ( v6 != dword_106E66F8 )
        {
          v8 = dword_106E66F4;
          if ( v6 != dword_106E66F4 )
          {
            if ( sub_1026A890((unsigned int *)(this + 4016)) )
              sub_10039F40((int *)this, v8);
            else
              sub_10039F40((int *)this, v7);
          }
        }
      }
      goto LABEL_130;
    case 1:
    case 9:
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v9 = *(float *)(this + 3620) - *(float *)(this + 580);
      v10 = v9 * v9;
      v11 = *(float *)(this + 3624) - *(float *)(this + 584);
      v12 = *(float *)(this + 3628) - *(float *)(this + 588);
      v88 = v12 * v12 + v11 * v11 + v10;
      v13 = off_10689708(v88);
      v14 = *(_DWORD *)(this + 252);
      v110 = v13;
      if ( (v14 & 0x1000) != 0 )
        sub_100DAFD0(this);
      sub_100D7A40((float *)(this + 476));
      if ( v110 < 70.0 && v13 < 100.0 )
      {
        *(float *)(this + 3992) = v13;
        v15 = 10;
        if ( !sub_103491D0((_DWORD *)this) )
          v15 = 2;
        if ( *(_DWORD *)(this + 3960) != v15 )
        {
          if ( *(_DWORD *)(this + 4160) )
          {
            v16 = sub_1023DBA0();
            if ( *(_BYTE *)(this + 3868) )
              v17 = 0.0;
            else
              v17 = 1.0;
            v84 = v17;
            ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v16)[12])(
              v16,
              *(_DWORD *)(this + 4160),
              LODWORD(v84),
              0.30000001);
          }
          *(_DWORD *)(this + 3960) = v15;
        }
        v18 = *(float *)(this + 736);
        v19 = *(float *)(this + 732);
        v111 = *(float *)(this + 728);
        *(float *)(this + 3968) = v111;
        v113 = v18;
        v112 = v19;
        *(float *)(this + 3972) = v18;
      }
      goto LABEL_130;
    case 2:
    case 10:
      if ( v5 > 8 && v5 < 12 && (unsigned __int8)sub_103E0CF0(0) )
      {
        v20 = (float *)(sub_10019640((_DWORD *)this) + 2);
        v21 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4032));
        v110 = *v20 - *((float *)sub_10019640(v21) + 2);
      }
      v22 = 0;
      if ( sub_1026A890((unsigned int *)(this + 4032)) )
      {
        v23 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4032));
        v24 = sub_1001F410(v23);
        sub_10422220(v24, v103);
      }
      else
      {
        v25 = (float *)sub_10019640((_DWORD *)this);
        v26 = *(float *)(this + 3624) - v25[1];
        v27 = *(float *)(this + 3628) - v25[2];
        v103[0] = *(float *)(this + 3620) - *v25;
        v103[1] = v26;
        v103[2] = v27;
      }
      v108 = sub_10265030(v103);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v28 = v108;
      sub_10424C10(v108, *(float *)(this + 708));
      if ( fabs(v28) > 5.0 )
        v22 = 1;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v29 = *(float *)(this + 3620) - *(float *)(this + 580);
      v111 = v29;
      v30 = *(float *)(this + 3624) - *(float *)(this + 584);
      v112 = v30;
      v31 = *(float *)(this + 3628) - *(float *)(this + 588);
      v89 = v31 * v31 + v30 * v30 + v29 * v29;
      v32 = off_10689708(v89);
      v33 = 0.014285714 * v32 * *(float *)(this + 3992) / v32;
      v101[0] = v111 * v33;
      v101[1] = v33 * v112;
      v34 = v110 * 0.001953125;
      if ( v34 > 1.0 )
        v34 = 1.0;
      v35 = v34 * -300.0;
      if ( v35 > -75.0 )
        v35 = -75.0;
      v101[2] = v35;
      sub_100DD660(this, v101);
      if ( v110 >= 72.0 )
      {
        sub_10424B10(0.0, *(float *)(this + 3968), 1.0);
        *(float *)(this + 3968) = 0.0;
        sub_10424B10(0.0, *(float *)(this + 3972), 1.0);
        *(float *)(this + 3972) = 0.0;
        v39 = *(float *)(this + 732);
        v40 = *(float *)(this + 736);
        v111 = *(float *)(this + 728);
        v112 = v39;
        v113 = v40;
        v111 = sin(*(float *)(dword_106B31C8 + 12) * 3.5) * 2.5 + *(float *)(this + 3968);
        v38 = 2.5 * sin(*(float *)(dword_106B31C8 + 12) * 3.75) + 0.0;
      }
      else
      {
        v36 = *(float *)(this + 732);
        v37 = *(float *)(this + 736);
        v111 = *(float *)(this + 728);
        v112 = v36;
        v113 = v37;
        sub_10424B10(0.0, v111, 0.2);
        v111 = 0.0;
        v38 = 0.0;
        sub_10424B10(0.0, v113, 0.2);
      }
      v113 = v38;
      sub_100E11A0(this, &v111);
      sub_10349A60((float *)this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v41 = *(float *)(this + 580);
      v42 = *(float *)(this + 584);
      v113 = *(float *)(this + 588);
      v111 = v41;
      v43 = *(_DWORD *)(this + 320);
      v112 = v42;
      v44 = (*(int (__thiscall **)(int))(v43 + 4))(this + 320);
      v45 = *(float *)(v44 + 8) + v113;
      v113 = v45;
      v46 = v110 - 12.0;
      v108 = 0.0 * v46;
      v104 = v46 * -1.0;
      *(float *)v102 = 0.0 * v46 + v111;
      *(float *)&v102[1] = 0.0 * v46 + v112;
      *(float *)&v102[2] = v45 + v46 * -1.0;
      sub_1023D4B0(8, (float *)v102, 400, 0.1, this, 0, 0);
      sub_1023D4B0(1024, (float *)v102, 400, 0.1, this, 1, 0);
      v97[0] = -100.0;
      v97[1] = -80.0;
      v97[2] = -5.0;
      v98[0] = 100.0;
      v98[1] = 80.0;
      v98[2] = 5.0;
      v105 = v108 + v111;
      v106 = v108 + v112;
      v107 = v104 + v113;
      sub_100231A0((int)&savedregs, this, &v111, &v105, v97, v98, 33570827, this, 0, (int)v93);
      if ( v94 < 1.0 && v95 && *((_BYTE *)v95 + 225) )
      {
        v80 = v109 * 20.0;
        sub_10248110((int)v96, this, this, v80, 8, 0);
        sub_100D9E70(v95, this, v96);
      }
      if ( v22 || v110 > 0.5 && *(_DWORD *)(this + 3988) != -2 )
        goto LABEL_131;
      if ( sub_103491D0((_DWORD *)this) )
      {
        sub_100DD660(this, &flt_106F1CA8);
        v47 = 11;
        if ( *(_DWORD *)(this + 3960) == 11 )
          goto LABEL_75;
        if ( *(_DWORD *)(this + 4160) )
        {
          v48 = sub_1023DBA0();
          v49 = 0.0;
          v90 = 0.0;
LABEL_73:
          v85 = v49;
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, float))(*v48)[12])(
            v48,
            *(_DWORD *)(this + 4160),
            LODWORD(v85),
            COERCE_FLOAT(LODWORD(v90)));
        }
      }
      else
      {
        v47 = 3;
        if ( *(_DWORD *)(this + 3960) == 3 )
          goto LABEL_75;
        if ( *(_DWORD *)(this + 4160) )
        {
          v48 = sub_1023DBA0();
          if ( *(_BYTE *)(this + 3868) )
            v49 = 0.0;
          else
            v49 = 1.0;
          v90 = 0.30000001;
          goto LABEL_73;
        }
      }
      *(_DWORD *)(this + 3960) = v47;
LABEL_75:
      v50 = *(float *)(this + 732);
      v111 = 0.0;
      v112 = v50;
      v113 = 0.0;
      sub_100E11A0(this, &v111);
      return;
    case 3:
    case 11:
      if ( *(_BYTE *)(this + 4028) || v5 > 8 && v5 < 12 )
        return;
      if ( v5 != 4 )
      {
        if ( *(_DWORD *)(this + 4160) )
        {
          v51 = sub_1023DBA0();
          if ( *(_BYTE *)(this + 3868) )
            v52 = 0.0;
          else
            v52 = 1.0;
          v86 = v52;
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v51)[12])(
            v51,
            *(_DWORD *)(this + 4160),
            LODWORD(v86),
            0.30000001);
        }
        *(_DWORD *)(this + 3960) = 4;
      }
      if ( *(_DWORD *)(this + 3952) && sub_1026A890((unsigned int *)(this + 4016)) )
      {
        *(float *)(this + 3924) = 0.0;
        *(float *)(this + 3928) = 0.0;
        v53 = sub_1026A890((unsigned int *)(this + 4016));
        v91 = sub_100BDF40(v53, "open_idle");
        v54 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100C1170(v54, v91);
        *(_DWORD *)(this + 4116) = 0;
        sub_1034CF90(this, this);
      }
      else
      {
        if ( *(int *)(this + 3988) < 0 )
          v55 = *(float *)(dword_106B31C8 + 12) + 0.5;
        else
          v55 = *(float *)(dword_106B31C8 + 12) + 5.0;
        *(float *)(this + 3924) = v55;
      }
      goto LABEL_131;
    case 4:
      if ( 0.0 == *(float *)(this + 3924) )
      {
        sub_100195B0(0.2, *(float *)(this + 3964), 0.039999999);
        *(float *)(this + 3964) = 0.2;
        if ( sub_102DC130((unsigned int *)(this + 4120))
          || (v56 = sub_1026A890((unsigned int *)(this + 4120)),
              !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v56 + 264))(v56)) )
        {
          if ( *(_DWORD *)(this + 4116) >= *(_DWORD *)(this + 3952) )
            *(float *)(this + 3924) = *(float *)(dword_106B31C8 + 12) + 0.5;
          else
            sub_1034CF90(this, this);
        }
      }
      else if ( *(float *)(this + 3924) >= (double)*(float *)(dword_106B31C8 + 12) )
      {
        if ( *(float *)(this + 3924) - *(float *)(dword_106B31C8 + 12) < 0.5 )
        {
          sub_100195B0(1.0, *(float *)(this + 3964), 0.1);
          *(float *)(this + 3964) = 1.0;
LABEL_130:
          sub_10349A60((float *)this);
        }
      }
      else
      {
        if ( *(_DWORD *)(this + 4160) )
        {
          v57 = sub_1023DBA0();
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v57)[12])(
            v57,
            *(_DWORD *)(this + 4160),
            0.0,
            0.0);
        }
        v58 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
        *(_DWORD *)(this + 3960) = 6;
        v58(this, dword_106E66E8);
        v59 = *(_BYTE *)(this + 3977) == 0;
        *(float *)(this + 3964) = 1.0;
        if ( !v59 )
          sub_10349280(this);
        if ( sub_1026A890((unsigned int *)(this + 4016)) && *(_BYTE *)(this + 3984) )
        {
          v60 = sub_1026A890((unsigned int *)(this + 4016));
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v60 + 140))(v60, 0, -1);
          v87 = *(_DWORD *)(this + 4024);
          v61 = sub_1026A890((unsigned int *)(this + 4016));
          sub_100E0970(v61, v62, v87, 0);
          v63 = *((float *)sub_10019660((_DWORD *)this) + 2);
          v111 = 0.0;
          v112 = 0.0;
          v113 = v63;
          if ( v63 > 0.0 )
            v113 = 0.0;
          v64 = sub_1026A890((unsigned int *)(this + 4016));
          sub_100DD660(v64, &v111);
          v65 = *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 424);
          if ( v65 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v65 + 284))(v65);
            (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v65 + 196))(v65, &v111, &flt_106F1CA8);
          }
          v100[0] = 40.0;
          v100[1] = 40.0;
          v100[2] = 40.0;
          v99[0] = -40.0;
          *(_DWORD *)(this + 4016) = -1;
          v99[1] = -40.0;
          v99[2] = 0.0;
          sub_1025F360((_DWORD *)this, (int)v99, (int)v100);
        }
      }
LABEL_131:
      if ( (dword_1069042C & 1) == 0 )
        sub_1034C540(this);
      if ( *(_DWORD *)(this + 2372) != *(_DWORD *)(this + 2380) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1416))(this, *(_DWORD *)(this + 2380));
      return;
    case 6:
      if ( v110 > 120.0 )
      {
        if ( *(_DWORD *)(this + 4160) )
        {
          v66 = sub_1023DBA0();
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v66)[12])(
            v66,
            *(_DWORD *)(this + 4160),
            0.0,
            0.0);
        }
        *(_DWORD *)(this + 3960) = 0;
        HIDWORD(v81) = this;
        *(_DWORD *)(this + 4032) = -1;
        LODWORD(v81) = this;
        *(_BYTE *)(this + 3985) = 1;
        sub_1010DD80((_DWORD *)(this + 4168), v81, 0.0);
      }
      if ( sub_1026A890((unsigned int *)(this + 4016)) )
      {
        v67 = sub_1026A890((unsigned int *)(this + 4016));
        v92 = sub_100BDF40(v67, "close_idle");
        v68 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100C1170(v68, v92);
      }
      goto LABEL_131;
    case 7:
      if ( sub_102DC130((unsigned int *)(this + 4020)) )
        goto LABEL_137;
      v69 = (float *)sub_10019640((_DWORD *)this);
      v105 = *(float *)(this + 3620) - *v69;
      v106 = *(float *)(this + 3624) - v69[1];
      v70 = *(float *)(this + 3628) - v69[2];
      v107 = v70;
      sub_100D7A40(&v105);
      if ( v70 < 50.0 )
      {
        *(_DWORD *)(this + 4016) = *(_DWORD *)(this + 4020);
        *(_DWORD *)(this + 4020) = -1;
        v71 = sub_1026A890((unsigned int *)(this + 4016));
        v59 = *(_BYTE *)(this + 4000) == 0;
        *(_DWORD *)(this + 4024) = *(unsigned __int8 *)(v71 + 306);
        if ( !v59 && sub_1026A890((unsigned int *)(this + 4016)) )
        {
          v109 = 0.0;
          v72 = sub_1026A890((unsigned int *)(this + 4016));
          sub_100317D0((_BYTE *)(v72 + 225), (char *)&v109);
        }
        v73 = *(_DWORD *)(sub_1026A890((unsigned int *)(this + 4016)) + 424);
        if ( v73 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v73 + 60))(v73, 1);
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v73 + 268))(
            v73,
            10000.0,
            10000.0,
            0,
            0);
          v109 = *(float *)v73;
          v82 = sub_1001F410((_DWORD *)this);
          v74 = sub_10019640((_DWORD *)this);
          (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD, _DWORD))(LODWORD(v109) + 272))(v73, v74, v82, 0, 0.0);
        }
        v75 = sub_1026A890((unsigned int *)(this + 4016));
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v75 + 140))(v75, this, 0);
        v76 = sub_1026A890((unsigned int *)(this + 4016));
        sub_100E0970(v76, v77, 7, 0);
        v78 = (unsigned int *)sub_1026A890((unsigned int *)(this + 4016));
        sub_101C73D0(v78, 0);
        HIDWORD(v83) = this;
        LODWORD(v83) = this;
        sub_1010DD80((_DWORD *)(this + 4192), v83, 0.0);
        if ( *(_DWORD *)(this + 3960) )
        {
LABEL_137:
          if ( *(_DWORD *)(this + 4160) )
          {
            v79 = sub_1023DBA0();
            ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v79)[12])(
              v79,
              *(_DWORD *)(this + 4160),
              0.0,
              0.0);
          }
          *(_DWORD *)(this + 3960) = 0;
        }
      }
      goto LABEL_130;
    default:
      goto LABEL_131;
  }
}
