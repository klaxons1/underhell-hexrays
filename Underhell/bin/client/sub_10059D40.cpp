double __usercall sub_10059D40@<st0>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        int a11,
        float a12)
{
  double v12; // st7
  float *v13; // eax
  float *v14; // eax
  double (__thiscall *v15)(int, float *, _DWORD); // edx
  double v16; // st7
  float *v17; // eax
  double v18; // st7
  float *v19; // eax
  double v20; // st6
  double v21; // st7
  float *v22; // eax
  float *v23; // eax
  double v24; // st4
  double v25; // st7
  float *v26; // eax
  float *v27; // eax
  double v28; // st4
  double v29; // st7
  float *v30; // eax
  float *v31; // eax
  double v32; // st6
  double v33; // st7
  float *v34; // eax
  float *v35; // eax
  int v36; // edi
  double v37; // st7
  double v38; // st6
  double v39; // st4
  double v40; // st3
  double v42; // st2
  double v43; // rt1
  double v44; // st3
  double v45; // st7
  double v46; // st6
  double v47; // st3
  double v48; // st5
  int (__thiscall *v49)(int, _DWORD, _DWORD, _DWORD, int); // edx
  float v50; // esi
  void (__thiscall *v51)(_DWORD, int); // edx
  float *v52; // eax
  int v53; // edi
  float *v54; // esi
  float *v55; // eax
  float *v56; // ecx
  float *v57; // eax
  int v58; // eax
  float v59; // [esp+14h] [ebp-284h]
  float v60; // [esp+18h] [ebp-280h] BYREF
  float v61; // [esp+1Ch] [ebp-27Ch]
  float v62; // [esp+24h] [ebp-274h]
  float v63; // [esp+40h] [ebp-258h]
  _DWORD v64[44]; // [esp+48h] [ebp-250h] BYREF
  char v65; // [esp+F8h] [ebp-1A0h]
  float v66; // [esp+FCh] [ebp-19Ch]
  int v67; // [esp+100h] [ebp-198h]
  char v68; // [esp+104h] [ebp-194h]
  _DWORD v69[3]; // [esp+108h] [ebp-190h] BYREF
  char v70; // [esp+114h] [ebp-184h]
  int v71; // [esp+118h] [ebp-180h]
  int v72; // [esp+11Ch] [ebp-17Ch]
  int v73; // [esp+120h] [ebp-178h]
  int v74; // [esp+124h] [ebp-174h]
  int v75; // [esp+128h] [ebp-170h]
  int v76; // [esp+12Ch] [ebp-16Ch]
  int v77; // [esp+130h] [ebp-168h]
  int v78; // [esp+134h] [ebp-164h]
  char v79; // [esp+138h] [ebp-160h]
  _DWORD v80[41]; // [esp+13Ch] [ebp-15Ch] BYREF
  float v81; // [esp+1E0h] [ebp-B8h]
  char v82; // [esp+1E4h] [ebp-B4h]
  int v83; // [esp+1E8h] [ebp-B0h]
  int v84; // [esp+1ECh] [ebp-ACh]
  int v85; // [esp+1F0h] [ebp-A8h]
  float *v86; // [esp+1F4h] [ebp-A4h]
  int v87; // [esp+1F8h] [ebp-A0h]
  int v88; // [esp+1FCh] [ebp-9Ch]
  int v89; // [esp+200h] [ebp-98h]
  int v90; // [esp+204h] [ebp-94h]
  int v91; // [esp+208h] [ebp-90h]
  int v92; // [esp+20Ch] [ebp-8Ch]
  int v93; // [esp+210h] [ebp-88h]
  int v94; // [esp+214h] [ebp-84h]
  int v95; // [esp+218h] [ebp-80h]
  int v96; // [esp+21Ch] [ebp-7Ch]
  int v97; // [esp+220h] [ebp-78h]
  int v98; // [esp+224h] [ebp-74h]
  int v99; // [esp+228h] [ebp-70h]
  float v100[3]; // [esp+230h] [ebp-68h] BYREF
  float v101; // [esp+23Ch] [ebp-5Ch]
  float v102; // [esp+240h] [ebp-58h]
  float v103; // [esp+244h] [ebp-54h]
  float v104; // [esp+248h] [ebp-50h] BYREF
  float v105[11]; // [esp+24Ch] [ebp-4Ch] BYREF
  float v106; // [esp+278h] [ebp-20h]
  float v107; // [esp+27Ch] [ebp-1Ch]
  float v108; // [esp+280h] [ebp-18h]
  float v109; // [esp+284h] [ebp-14h]
  float v110; // [esp+288h] [ebp-10h]
  float v111; // [esp+28Ch] [ebp-Ch]
  float v112; // [esp+290h] [ebp-8h]
  float v113; // [esp+294h] [ebp-4h]

  v106 = a9;
  v12 = ((double (__thiscall *)(int, float *, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)a4 + 344))(
          a4,
          &a6,
          1.0,
          a2,
          a3,
          a1);
  v110 = v12;
  if ( v12 <= 0.000099999997 )
  {
    v12 = 0.000099999997;
    v110 = 0.000099999997;
  }
  if ( LOBYTE(a12) )
  {
    v13 = (float *)sub_101422E0();
    v111 = *v13;
    v112 = v13[1];
    v113 = v13[2];
    v14 = (float *)sub_101422C0();
    v100[0] = *v14 + v111;
    v100[1] = v14[1] + v112;
    v15 = *(double (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a4 + 344);
    v100[2] = v14[2] + v113;
    v59 = a9 * 0.5;
    v16 = v15(a4, v100, LODWORD(v59));
    a9 = v16 / v110;
  }
  else if ( a9 * v12 < 5.0 )
  {
    a9 = 5.0 / v12;
  }
  v17 = (float *)sub_101422C0();
  v107 = a6 - *v17;
  v108 = a7 - v17[1];
  v109 = a8 - v17[2];
  off_103EDFEC();
  a6 = a6 - v107 * v106;
  a7 = a7 - v108 * v106;
  a8 = a8 - v106 * v109;
  v18 = a9 * 0.70710677;
  a9 = v18;
  a12 = v18 / a10;
  v19 = (float *)sub_101422E0();
  v20 = a8 - 0.0 * v19[2];
  v21 = a7 - v19[1] * 0.0;
  v101 = a6 - *v19 * 0.0;
  v102 = v21;
  v103 = v20;
  v22 = (float *)sub_101422F0();
  v111 = *v22 * a9;
  v112 = v22[1] * a9;
  v113 = a9 * v22[2];
  v23 = (float *)sub_10142300();
  v24 = v23[2];
  v25 = v23[1] * a12 + a7 - v112;
  v104 = *v23 * a12 + a6 - v111;
  v105[0] = v25;
  v105[1] = a12 * v24 + a8 - v113;
  v26 = (float *)sub_101422F0();
  v111 = *v26 * a9;
  v112 = v26[1] * a9;
  v113 = a9 * v26[2];
  v27 = (float *)sub_10142300();
  v28 = v27[2];
  v29 = v27[1] * a12 + a7 + v112;
  v105[2] = *v27 * a12 + a6 + v111;
  v105[3] = v29;
  v105[4] = a12 * v28 + a8 + v113;
  v30 = (float *)sub_101422F0();
  v111 = *v30 * a9;
  v112 = v30[1] * a9;
  v113 = a9 * v30[2];
  v31 = (float *)sub_10142300();
  v32 = a7 - v31[1] * a12 + v112;
  v33 = a8 - a12 * v31[2] + v113;
  v105[5] = a6 - *v31 * a12 + v111;
  v105[6] = v32;
  v105[7] = v33;
  v34 = (float *)sub_101422F0();
  v111 = *v34 * a9;
  v112 = v34[1] * a9;
  v113 = a9 * v34[2];
  v35 = (float *)sub_10142300();
  v36 = 0;
  v37 = a7 - v35[1] * a12 - v112;
  v38 = a8 - a12 * v35[2] - v113;
  v105[8] = a6 - a12 * *v35 - v111;
  v105[9] = v37;
  v105[10] = v38;
  do
  {
    if ( sub_1013B9F0(&v105[v36 - 1], (char *)&v60 + v36 * 4) )
      return -1.0;
    v36 += 3;
  }
  while ( v36 < 12 );
  a9 = v62 - v60;
  v39 = v63;
  a12 = v61 - v63;
  v40 = 1.0;
  if ( v62 <= 1.0 )
    v40 = v62;
  v42 = -1.0;
  if ( v60 >= -1.0 )
    v42 = v60;
  v43 = v40 - v42;
  v44 = 1.0;
  v45 = v43;
  if ( v61 <= 1.0 )
    v44 = v61;
  v46 = v44;
  if ( v39 < -1.0 )
    v39 = -1.0;
  v47 = a12 * a9;
  a12 = 0.0;
  if ( 0.0 != v47 )
  {
    v48 = v45 * (v46 - v39) / v47;
    a12 = v48;
    if ( v48 <= 1.0 )
    {
      if ( v48 < 0.0 )
        a12 = 0.0;
    }
    else
    {
      a12 = 1.0;
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 320))(a4, a5);
  v77 = -1;
  v98 = -1;
  v80[19] = -1;
  v49 = *(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a4 + 224);
  v66 = 0.0;
  v68 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v76 = 0;
  v78 = 0;
  v81 = 0.0;
  v99 = 0;
  v84 = 0;
  v85 = 0;
  v83 = 0;
  v97 = 0;
  v50 = COERCE_FLOAT(v49(a4, 0, 0, 0, a11));
  v66 = v50;
  v68 = 1;
  v67 = 2;
  v51 = *(void (__thiscall **)(_DWORD, int))(*(_DWORD *)LODWORD(v50) + 40);
  a9 = v50;
  v51(LODWORD(v50), 2);
  (*(void (__thiscall **)(float, int, int, _DWORD *))(*(_DWORD *)LODWORD(v66) + 68))(
    COERCE_FLOAT(LODWORD(v66)),
    12,
    12,
    v64);
  v71 = LODWORD(v50) + 4;
  v74 = v64[39];
  v70 = v65;
  v81 = v50;
  v73 = 0;
  v72 = 12;
  v79 = 0;
  v69[0] = v64[41];
  qmemcpy(v80, v64, sizeof(v80));
  v83 = 12;
  v80[20] = v64[20] != 0 ? 2 : 0;
  v84 = 0;
  v82 = 0;
  if ( v98 == -1 )
  {
    v97 = 0;
    v98 = v64[40];
    v99 = v64[39];
  }
  v52 = (float *)v80[21];
  v87 = v80[24];
  v88 = v80[27];
  v89 = v80[28];
  v90 = v80[29];
  v91 = v80[30];
  v92 = v80[31];
  v93 = v80[32];
  v94 = v80[33];
  v75 = 0;
  v85 = 0;
  v86 = (float *)v80[21];
  v95 = v80[34];
  v96 = v80[25];
  v53 = 0;
  v54 = v105;
  while ( 1 )
  {
    *v52 = v101;
    v52[1] = v102;
    v52[2] = v103;
    sub_10016A80(v80);
    v55 = v86;
    *v86 = *(v54 - 1);
    v55[1] = *v54;
    v55[2] = v54[1];
    sub_10016A80(v80);
    ++v53;
    v56 = v86;
    v57 = &v105[3 * (v53 % 4) - 1];
    *v86 = *v57;
    v56[1] = v57[1];
    v56[2] = v57[2];
    sub_10016A80(v80);
    v54 += 3;
    if ( v53 >= 4 )
      break;
    v52 = v86;
  }
  if ( v68 )
  {
    switch ( v67 )
    {
      case 4:
        v58 = 2 * v84 - 2;
        break;
      case 5:
        v58 = 2 * v84;
        break;
      case 6:
        v58 = 3 * v84 - 6;
        break;
      case 7:
        v58 = 6 * v84 / 4;
        break;
      case 8:
        v58 = 0;
        break;
      default:
        v58 = v84;
        break;
    }
    sub_10016B00(v69, v67, v58);
  }
  (*(void (__thiscall **)(float, int, int, _DWORD *))(*(_DWORD *)LODWORD(v66) + 80))(
    COERCE_FLOAT(LODWORD(v66)),
    v84,
    v73,
    v64);
  v71 = 0;
  v72 = 0;
  v83 = 0;
  v81 = 0.0;
  v80[19] = -1;
  v66 = 0.0;
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)LODWORD(a9) + 48))(LODWORD(a9), -1, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 324))(a4, a5);
  if ( v81 != 0.0
    && (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v81) + 8))(COERCE_FLOAT(LODWORD(v81))) )
  {
    (*(void (__thiscall **)(float))(*(_DWORD *)LODWORD(v81) + 16))(COERCE_FLOAT(LODWORD(v81)));
  }
  if ( v71 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v71 + 8))(v71) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v71 + 16))(v71);
  }
  return a12;
}
