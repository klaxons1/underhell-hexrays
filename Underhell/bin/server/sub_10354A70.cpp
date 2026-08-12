void __thiscall sub_10354A70(int this)
{
  double (__thiscall *v2)(int); // eax
  double v3; // st7
  unsigned int v4; // eax
  double v5; // st7
  unsigned int v6; // eax
  int v7; // edx
  double v8; // st7
  int v9; // eax
  double v10; // st7
  int v11; // ecx
  bool v12; // zf
  double v13; // st7
  unsigned int v14; // eax
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  unsigned int v19; // eax
  long double v20; // st7
  long double v21; // st6
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st4
  double v32; // st5
  double v33; // st3
  double v34; // rtt
  double v35; // st3
  double v36; // st7
  double v37; // st5
  double v38; // rt1
  double v39; // st5
  double v40; // st4
  double v41; // st6
  double v42; // st7
  double v43; // st4
  double v44; // st3
  double v45; // st5
  double v46; // rt1
  double v47; // st3
  double v48; // st6
  double v49; // rt2
  double v50; // st3
  double v51; // st7
  float v52; // ecx
  double v53; // st7
  double v54; // st5
  float v55; // edx
  double v56; // st6
  double v57; // rt2
  double v58; // st6
  long double v59; // st7
  unsigned int v60; // eax
  long double v61; // st7
  long double v62; // st7
  int v63; // ecx
  float v64; // edx
  float v65; // eax
  double v66; // st7
  double v67; // st5
  double v68; // st4
  double v69; // st6
  double v70; // st2
  double v71; // st3
  double v72; // st1
  double v73; // rt2
  double v74; // st1
  double v75; // rtt
  double v76; // st1
  double v77; // st2
  double v78; // rt2
  double v79; // st1
  double v80; // st0
  double v81; // st7
  double v82; // st7
  int v83; // edi
  int v84; // edx
  _DWORD *v85; // eax
  int v86; // ebx
  double v87; // st7
  double v88; // st7
  int v89; // edi
  int v90; // edx
  _DWORD *v91; // eax
  int v92; // ebx
  float v93; // [esp+10h] [ebp-D0h]
  float v94; // [esp+14h] [ebp-CCh]
  float v95; // [esp+14h] [ebp-CCh]
  float v96; // [esp+20h] [ebp-C0h]
  float v97; // [esp+20h] [ebp-C0h]
  float v98; // [esp+20h] [ebp-C0h]
  float v99; // [esp+20h] [ebp-C0h]
  float v100[3]; // [esp+28h] [ebp-B8h] BYREF
  float v101[3]; // [esp+34h] [ebp-ACh] BYREF
  float v102[2]; // [esp+40h] [ebp-A0h] BYREF
  float v103; // [esp+48h] [ebp-98h]
  float v104; // [esp+4Ch] [ebp-94h]
  float v105; // [esp+50h] [ebp-90h]
  float v106; // [esp+54h] [ebp-8Ch]
  int v107; // [esp+58h] [ebp-88h] BYREF
  float v108; // [esp+5Ch] [ebp-84h]
  float v109; // [esp+60h] [ebp-80h]
  int v110; // [esp+64h] [ebp-7Ch] BYREF
  float v111; // [esp+68h] [ebp-78h]
  float v112; // [esp+6Ch] [ebp-74h]
  float v113; // [esp+70h] [ebp-70h] BYREF
  float v114; // [esp+74h] [ebp-6Ch]
  float v115; // [esp+78h] [ebp-68h]
  float v116; // [esp+7Ch] [ebp-64h]
  float v117; // [esp+80h] [ebp-60h]
  float v118; // [esp+84h] [ebp-5Ch]
  float v119; // [esp+88h] [ebp-58h]
  float v120; // [esp+8Ch] [ebp-54h]
  float v121; // [esp+90h] [ebp-50h]
  float v122; // [esp+94h] [ebp-4Ch] BYREF
  float v123; // [esp+98h] [ebp-48h]
  float v124; // [esp+9Ch] [ebp-44h]
  float v125; // [esp+A0h] [ebp-40h]
  float v126; // [esp+A4h] [ebp-3Ch]
  float v127; // [esp+A8h] [ebp-38h]
  int v128; // [esp+ACh] [ebp-34h] BYREF
  float v129; // [esp+B0h] [ebp-30h]
  float v130; // [esp+B4h] [ebp-2Ch]
  int v131; // [esp+B8h] [ebp-28h]
  float v132; // [esp+BCh] [ebp-24h] BYREF
  float v133; // [esp+C0h] [ebp-20h]
  float v134; // [esp+C4h] [ebp-1Ch]
  float v135; // [esp+C8h] [ebp-18h]
  int v136; // [esp+CCh] [ebp-14h]
  float v137; // [esp+D0h] [ebp-10h]
  float v138; // [esp+D4h] [ebp-Ch]
  float v139; // [esp+D8h] [ebp-8h]
  float v140; // [esp+DCh] [ebp-4h]

  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
    sub_101C73D0((unsigned int *)this, 0);
  if ( *(_DWORD *)(dword_106E6A14 + 48) == 2 )
    sub_1011BC50((float *)(this + 716), (float *)(this + 3620), 0, 0, 255, 1, 0.1);
  v2 = *(double (__thiscall **)(int))(*(_DWORD *)this + 2328);
  *(float *)&v136 = 500.0;
  v3 = v2(this);
  v135 = v3;
  if ( *(_BYTE *)(this + 224) == 1 )
  {
    v4 = *(_DWORD *)(this + 4228);
    if ( v4 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 1] )
    {
      *(float *)&v136 = 1000.0;
      v135 = v3 * 4.0;
    }
  }
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v96 = *(float *)(this + 480) * *(float *)(this + 480)
      + *(float *)(this + 476) * *(float *)(this + 476)
      + *(float *)(this + 484) * *(float *)(this + 484);
  v5 = off_10689708(v96) + *(float *)&v136;
  if ( v135 <= v5 )
    v5 = v135;
  if ( *(_BYTE *)(this + 224) == 1
    || (v6 = *(_DWORD *)(this + 4092), v6 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(this + 4092) & 0xFFF) + 2] == v6 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4092) & 0xFFF) + 1] )
  {
    v128 = *(int *)(this + 3620);
    v129 = *(float *)(this + 3624);
    v130 = *(float *)(this + 3628);
  }
  else
  {
    v93 = v5;
    sub_102B3500((float *)this, v93, 1.0, 0.0, (float *)&v128, COERCE_FLOAT(1));
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = *(_DWORD *)(this + 252) >> 12;
  *(float *)&v128 = *(float *)&v128 - *(float *)(this + 580);
  v129 = v129 - *(float *)(this + 584);
  v130 = v130 - *(float *)(this + 588);
  if ( (v7 & 1) != 0 )
    sub_100DAFD0(this);
  v8 = *(float *)&v128 - *(float *)(this + 476);
  v9 = *(_DWORD *)(this + 252) >> 12;
  v137 = v8 + v8;
  if ( (v9 & 1) != 0 )
    sub_100DAFD0(this);
  v10 = v129 - *(float *)(this + 480);
  v11 = *(_DWORD *)(this + 252) >> 12;
  v138 = v10 + v10;
  if ( (v11 & 1) != 0 )
    sub_100DAFD0(this);
  v12 = *(_BYTE *)(this + 224) == 1;
  v13 = v130 - *(float *)(this + 484) + 192.0;
  v139 = v13 + v13;
  *(float *)&v131 = 0.0;
  if ( !v12 )
  {
    v14 = *(_DWORD *)(this + 3644);
    if ( v14 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v14 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1] )
    {
      sub_100B6940(this, v101);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v116 = v101[0] - *(float *)(this + 580);
      v117 = v101[1] - *(float *)(this + 584);
      v118 = v101[2] - *(float *)(this + 588);
      v15 = off_10689714();
      *(float *)&v131 = v15;
      if ( v15 > 800.0 )
      {
        v16 = (v15 - 800.0) * 0.0049999999;
        if ( v16 <= 1.0 )
        {
          if ( v16 < 0.0 )
            v16 = 0.0;
        }
        else
        {
          v16 = 1.0;
        }
        v17 = v16 * 200.0;
        v137 = v116 * v17 + v137;
        v138 = v117 * v17 + v138;
        v139 = v17 * v118 + v139;
      }
    }
  }
  sub_10318800(this, 350.0, COERCE_INT(2.0), (float *)&v110);
  v137 = *(float *)&v110 + v137;
  v138 = v111 + v138;
  v139 = v112 + v139;
  sub_10318A30(this, 350.0, 2.0, (float *)&v110);
  v12 = *(_BYTE *)(this + 224) == 1;
  v137 = *(float *)&v110 + v137;
  v138 = v111 + v138;
  v18 = v112 + v139;
  v139 = v18;
  if ( !v12
    || (v19 = *(_DWORD *)(this + 4228), v19 == -1)
    || off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 2] != v19 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 1] )
  {
    if ( v18 <= 768.0 )
    {
      if ( v18 >= 76.80000000000001 )
        v139 = v18;
      else
        v139 = 76.80000000000001;
    }
    else
    {
      v139 = 768.0;
    }
  }
  (*(void (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)this + 528))(this, v102, &v113, v100);
  v120 = v138;
  v119 = v137;
  v121 = v139;
  off_10689714();
  v135 = asin(v102[1] * v120 + v119 * v102[0] + v121 * v103) * 57.29578;
  v140 = sub_10265030((float *)(this + 3796));
  v20 = asin(v114 * v120 + v113 * v119 + v121 * v115) * 57.29578;
  *(float *)&v136 = v20;
  if ( v135 <= 60.0 )
  {
    v21 = -45.0;
    if ( v135 < -45.0 )
      v135 = -45.0;
  }
  else
  {
    v21 = -45.0;
    v135 = 60.0;
  }
  if ( v20 <= 45.0 )
  {
    if ( v21 > v20 )
      *(float *)&v136 = v21;
  }
  else
  {
    *(float *)&v136 = 45.0;
  }
  v22 = *(float *)(this + 728);
  sub_10424CA0(*(float *)(this + 728));
  v97 = v22;
  v23 = v135;
  sub_10424C10(v135, v97);
  *(float *)&v107 = (v23 - *(float *)(this + 488) * 0.60000002 + v23 - *(float *)(this + 488) * 0.60000002) * 2.7777777;
  v24 = *(float *)(this + 732);
  sub_10424CA0(*(float *)(this + 732));
  v98 = v24;
  v25 = v140;
  sub_10424C10(v140, v98);
  v108 = (v25 - *(float *)(this + 492) * 0.60000002 + v25 - *(float *)(this + 492) * 0.60000002) * 2.7777777;
  v26 = *(float *)(this + 736);
  sub_10424CA0(*(float *)(this + 736));
  v99 = v26;
  v27 = *(float *)&v136;
  sub_10424C10(*(float *)&v136, v99);
  v28 = v27 - *(float *)(this + 496) * 0.60000002;
  v29 = (v28 + v28) * 2.7777777;
  v30 = 300.0;
  v31 = -300.0;
  if ( *(float *)&v107 <= 300.0 )
  {
    if ( *(float *)&v107 >= -300.0 )
      v31 = *(float *)&v107;
    v32 = -300.0;
  }
  else
  {
    v32 = -300.0;
    v31 = 300.0;
  }
  v33 = 120.0;
  if ( v108 <= 120.0 )
  {
    v33 = -120.0;
    if ( v108 >= -120.0 )
      v33 = v108;
  }
  v34 = v33;
  v35 = v29;
  v36 = v34;
  if ( v35 <= 300.0 )
  {
    if ( v35 >= v32 )
      v32 = v35;
    v38 = v32;
    v37 = v31;
    v30 = v38;
  }
  else
  {
    v37 = v31;
  }
  v39 = (v37 - *(float *)(this + 4112)) * 10.0;
  v40 = v30;
  v41 = (v36 - *(float *)(this + 4116)) * 10.0;
  v42 = 10.0 * (v40 - *(float *)(this + 4120));
  v43 = 1000.0;
  v44 = -1000.0;
  if ( v39 <= 1000.0 )
  {
    if ( v39 >= -1000.0 )
      v44 = v39;
    v45 = -1000.0;
  }
  else
  {
    v45 = -1000.0;
    v44 = 1000.0;
  }
  v46 = v44;
  v47 = v41;
  v48 = v46;
  if ( v47 <= 1000.0 )
  {
    if ( v47 < v45 )
      v47 = v45;
  }
  else
  {
    v47 = 1000.0;
  }
  v49 = v47;
  v50 = v42;
  v51 = v49;
  if ( v50 > 1000.0 || (v43 = v50, v50 >= v45) )
    v45 = v43;
  *(float *)(this + 4112) = v48 * 0.1 + *(float *)(this + 4112);
  *(float *)(this + 4116) = v51 * 0.1 + *(float *)(this + 4116);
  *(float *)(this + 4120) = v45 * 0.1 + *(float *)(this + 4120);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 2284))(this, &v113);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2288))(this);
  v52 = *(float *)(this + 492);
  v53 = *(float *)(this + 4112) * 0.1;
  v54 = *(float *)(this + 4116);
  v55 = *(float *)(this + 496);
  v122 = *(float *)(this + 488);
  v123 = v52;
  v56 = 0.1 * *(float *)(this + 4120);
  v122 = v53 + v122;
  v57 = v56;
  v58 = v54 * 0.1 + v52;
  v123 = v58;
  v124 = v57 + v55;
  if ( v58 <= 120.0 )
  {
    if ( v58 < -120.0 )
      v123 = -120.0;
  }
  else
  {
    v123 = 120.0;
  }
  sub_100D7260((float *)this, &v122);
  v59 = (fabs(v137) * 0.1 + v139 + fabs(v138) * 0.1) * 0.1 * 0.2 + *(float *)(this + 3788) * 0.8;
  *(float *)(this + 3788) = v59;
  v60 = *(_DWORD *)(this + 4228);
  v132 = v100[0] * v59;
  v133 = v100[1] * v59;
  v61 = v59 * v100[2];
  v134 = v61;
  if ( v60 != -1 && off_1061BE18[4 * (v60 & 0xFFF) + 2] == v60 >> 12 && off_1061BE18[4 * (v60 & 0xFFF) + 1]
    || *(_BYTE *)(this + 224) != 1
    || *(_DWORD *)(dword_10698344 + 48) )
  {
    v62 = v61 - 38.4;
  }
  else
  {
    v62 = -10.0;
  }
  v63 = *(_DWORD *)(this + 252);
  v134 = v62;
  if ( (v63 & 0x1000) != 0 )
    sub_100DAFD0(this);
  v64 = *(float *)(this + 476);
  v65 = *(float *)(this + 480);
  v127 = *(float *)(this + 484);
  v125 = v64;
  v126 = v65;
  off_10689714();
  if ( *(float *)&v131 > 400.0 )
  {
    v66 = v133;
    v67 = v117;
    v68 = v132;
    v69 = v116;
    v70 = v118;
    v71 = v134;
    v72 = v118 * v134 + v132 * v116 + v133 * v117;
    if ( v72 < 0.0 )
    {
      v73 = v72 * -0.1;
      v74 = v68 + v73 * v69;
      v132 = v74;
      v75 = v74;
      v76 = v66 + v73 * v67;
      v133 = v76;
      v77 = v71 + v73 * v70;
      v134 = v77;
      v78 = v77;
      v66 = v76;
      v68 = v75;
      v70 = v118;
      v71 = v78;
    }
    v79 = v126 * v67 + v125 * v69 + v70 * v127;
    if ( v79 < 0.0 )
    {
      v80 = v79 * -0.1;
      v132 = v68 + v69 * v80;
      v133 = v66 + v67 * v80;
      v134 = v70 * v80 + v71;
    }
  }
  v106 = v134;
  v104 = v132;
  v105 = v133;
  off_10689714();
  v106 = 0.0;
  v127 = 0.0;
  v103 = 0.0;
  v115 = 0.0;
  v81 = ((v104 * v125 + v105 * v126) * *(float *)(this + 3788) - -60.0) * 0.0083333338;
  v140 = (3.0 * (v81 * v81) - v81 * (v81 * v81 * 2.0)) * 2.0 - 1.0;
  v94 = sub_100BE820(this, dword_106E68C8);
  v82 = v140;
  sub_10424B10(v140, v94, 0.5);
  v83 = dword_10700AC8;
  *(float *)&v131 = v82;
  v84 = *(_DWORD *)dword_10700AC8;
  v136 = dword_106E68C8;
  (*(void (__thiscall **)(int))(v84 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v85 = *(_DWORD **)(this + 1100);
  if ( v85 && *v85 )
  {
    v86 = *(_DWORD *)(this + 1100);
  }
  else
  {
    v140 = 0.0;
    v86 = 0;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v83 + 104))(v83);
  sub_100BE7D0((_DWORD *)this, v86, v136, *(float *)&v131);
  v87 = ((v126 * v114 + v125 * v113 + v115 * v127) * *(float *)(this + 3788) - -60.0) * 0.0083333338;
  v140 = (3.0 * (v87 * v87) - v87 * (v87 * v87 * 2.0)) * 2.0 - 1.0;
  v95 = sub_100BE820(this, dword_106E68CC);
  v88 = v140;
  sub_10424B10(v140, v95, 0.5);
  v89 = dword_10700AC8;
  v140 = v88;
  v90 = *(_DWORD *)dword_10700AC8;
  v131 = dword_106E68CC;
  (*(void (__thiscall **)(int))(v90 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v91 = *(_DWORD **)(this + 1100);
  if ( v91 && *v91 )
    v92 = *(_DWORD *)(this + 1100);
  else
    v92 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v89 + 104))(v89);
  sub_100BE7D0((_DWORD *)this, v92, v131, v140);
  if ( *(_DWORD *)(dword_106E6A14 + 48) == 2 )
  {
    *(float *)&v107 = v132 + *(float *)(this + 716);
    v108 = *(float *)(this + 720) + v133;
    v109 = *(float *)(this + 724) + v134;
    sub_1011BC50((float *)(this + 716), (float *)&v107, 255, 0, 0, 1, 0.1);
  }
  sub_100EA150(this, &v132);
}
