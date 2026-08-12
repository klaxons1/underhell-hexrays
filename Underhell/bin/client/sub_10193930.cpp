// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10193930@<eax>(
        float *a1@<eax>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        float a5,
        float a6,
        float a7)
{
  float *v8; // eax
  float *v9; // eax
  double v10; // st7
  double v11; // st4
  double v12; // st3
  double v13; // st1
  double v14; // st6
  double v15; // st2
  double v16; // st5
  float *v17; // eax
  double v18; // st4
  double v19; // st2
  double v20; // rt1
  int v21; // eax
  int (__thiscall *v22)(int, int, int, int); // edx
  int v23; // ebx
  int v24; // ebx
  int v25; // edi
  float *v26; // eax
  double v27; // st7
  double v28; // st6
  double v29; // rt2
  double v30; // st5
  double v31; // st4
  double v32; // st6
  double v33; // st3
  float *v34; // eax
  double v35; // st5
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  double v41; // st6
  double v42; // st7
  double v43; // st5
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  double v49; // st6
  double v50; // st7
  double v51; // st5
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  float *v56; // eax
  double v57; // st6
  double v58; // st7
  double v59; // st5
  float *v60; // eax
  float *v61; // eax
  float *v62; // eax
  int v63; // eax
  int v64; // esi
  _DWORD v67[44]; // [esp+0h] [ebp-23Ch] BYREF
  char v68; // [esp+B0h] [ebp-18Ch]
  int v69; // [esp+B4h] [ebp-188h]
  int v70; // [esp+B8h] [ebp-184h]
  char v71; // [esp+BCh] [ebp-180h]
  int v72[3]; // [esp+C0h] [ebp-17Ch] BYREF
  char v73; // [esp+CCh] [ebp-170h]
  int v74; // [esp+D0h] [ebp-16Ch]
  int v75; // [esp+D4h] [ebp-168h]
  int v76; // [esp+D8h] [ebp-164h]
  int v77; // [esp+DCh] [ebp-160h]
  int v78; // [esp+E0h] [ebp-15Ch]
  char v79; // [esp+F0h] [ebp-14Ch]
  _DWORD v80[14]; // [esp+F4h] [ebp-148h] BYREF
  int v81; // [esp+12Ch] [ebp-110h]
  int v82; // [esp+130h] [ebp-10Ch]
  int v83; // [esp+140h] [ebp-FCh]
  int v84; // [esp+180h] [ebp-BCh]
  int v85; // [esp+184h] [ebp-B8h]
  int v86; // [esp+198h] [ebp-A4h]
  int v87; // [esp+1A0h] [ebp-9Ch]
  int v88; // [esp+1A4h] [ebp-98h]
  int v89; // [esp+1A8h] [ebp-94h]
  float *v90; // [esp+1ACh] [ebp-90h]
  float *v91; // [esp+1B0h] [ebp-8Ch]
  float *v92; // [esp+1B4h] [ebp-88h]
  int *v93; // [esp+1D4h] [ebp-68h]
  float v94; // [esp+1E8h] [ebp-54h]
  int v95; // [esp+1ECh] [ebp-50h]
  float v96; // [esp+1F0h] [ebp-4Ch]
  float v97; // [esp+1F4h] [ebp-48h]
  float v98; // [esp+1F8h] [ebp-44h]
  float v99; // [esp+1FCh] [ebp-40h]
  float v100; // [esp+200h] [ebp-3Ch]
  float v101; // [esp+204h] [ebp-38h]
  float v102; // [esp+208h] [ebp-34h]
  float v103; // [esp+20Ch] [ebp-30h]
  float v104; // [esp+210h] [ebp-2Ch]
  float v105; // [esp+214h] [ebp-28h]
  float v106; // [esp+218h] [ebp-24h]
  float v107; // [esp+21Ch] [ebp-20h]
  float v108; // [esp+220h] [ebp-1Ch]
  float v109; // [esp+224h] [ebp-18h]
  float v110; // [esp+228h] [ebp-14h]
  float v111; // [esp+22Ch] [ebp-10h]
  float v112; // [esp+230h] [ebp-Ch]
  float v113; // [esp+234h] [ebp-8h]
  float v114; // [esp+238h] [ebp-4h]
  float v115; // [esp+244h] [ebp+8h]
  float v116; // [esp+248h] [ebp+Ch]

  v115 = a5 * 0.5;
  v114 = a7;
  v116 = 0.5 * a6;
  v111 = 1.0;
  v112 = 0.0;
  v113 = 0.0;
  v108 = 0.0;
  v110 = 0.0;
  v109 = 1.0;
  v8 = sub_101422C0();
  v105 = *v8 - *a1;
  v106 = v8[1] - a1[1];
  v107 = v8[2] - a1[2];
  if ( off_103EDFEC() < 0.001 )
  {
    v16 = v105;
    v18 = v110;
    v10 = v106;
    v14 = v109;
    v19 = v107;
    v12 = v108;
  }
  else
  {
    v9 = (float *)sub_10142300();
    v111 = v9[1] * v107 - v9[2] * v106;
    v112 = v9[2] * v105 - v107 * *v9;
    v113 = v106 * *v9 - v105 * v9[1];
    if ( off_103EDFEC() >= 0.001 )
    {
      v10 = v106;
      v11 = v107;
      v12 = v106 * v113 - v107 * v112;
      v108 = v12;
      v13 = v107 * v111 - v113 * v105;
      v109 = v13;
      v14 = v13;
      v15 = v112 * v105 - v111 * v106;
      v16 = v105;
      v110 = v15;
      goto LABEL_7;
    }
    v17 = (float *)sub_101422F0();
    v108 = v106 * v17[2] - v107 * v17[1];
    v109 = v107 * *v17 - v105 * v17[2];
    v110 = v105 * v17[1] - v106 * *v17;
    off_103EDFEC();
    v111 = v107 * v109 - v106 * v110;
    v12 = v108;
    v112 = v110 * v105 - v107 * v108;
    v113 = v106 * v108 - v109 * v105;
    v10 = v106;
    v14 = v109;
    v18 = v110;
    v19 = v107;
    v16 = v105;
  }
  v20 = v19;
  v15 = v18;
  v11 = v20;
LABEL_7:
  v21 = *(_DWORD *)dword_1047C96C;
  v102 = -v111;
  v22 = *(int (__thiscall **)(int, int, int, int))(v21 + 380);
  v103 = -v112;
  v104 = -v113;
  v99 = -v12;
  v100 = -v14;
  v101 = -v15;
  v96 = -v16;
  v97 = -v10;
  v98 = -v11;
  v23 = v22(dword_1047C96C, a3, a2, a4);
  v95 = v23;
  if ( v23 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
  sub_10016C20((int)v67);
  v24 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v23 + 224))(v23, 1, 0, 0, 0);
  v69 = v24;
  v71 = 1;
  v70 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 40))(v24, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v69 + 68))(v69, 4, 6, v67);
  v77 = v67[39];
  v74 = v24 + 4;
  v73 = v68;
  v76 = 0;
  v75 = 6;
  v79 = 0;
  v72[0] = v67[41];
  v78 = 0;
  sub_10016990((int)v80, v24, 4, v67);
  v78 = 0;
  sub_10016A00(v80);
  v25 = BYTE2(v114) | ((BYTE1(v114) | ((LOBYTE(v114) | (HIBYTE(v114) << 8)) << 8)) << 8);
  *v93 = v25;
  v26 = v92;
  *v92 = 0.0;
  v26[1] = 1.0;
  v27 = -v116;
  v94 = v27;
  v28 = v108 * v27 + *a1;
  v29 = v109 * v27 + a1[1];
  v30 = v27 * v110 + a1[2];
  v31 = -v115;
  v114 = v31;
  v32 = v28 + v111 * v31;
  v33 = v112 * v31;
  v34 = (float *)(v84 + v89 * v81);
  v35 = v30 + v31 * v113;
  *v34 = v102;
  v34[1] = v103;
  v34[2] = v104;
  v36 = (float *)(v85 + v89 * v82);
  *v36 = v99;
  v36[1] = v100;
  v36[2] = v101;
  v37 = v91;
  *v91 = v96;
  v37[1] = v97;
  v37[2] = v98;
  v38 = v90;
  *v90 = v32;
  v38[1] = v29 + v33;
  v38[2] = v35;
  sub_10016A80(v80);
  *v93 = v25;
  v39 = v92;
  *v92 = 0.0;
  v39[1] = 0.0;
  v40 = (float *)(v84 + v89 * v81);
  v41 = v108 * v116 + *a1 + v111 * v114;
  v42 = v109 * v116 + a1[1] + v112 * v114;
  v43 = v116 * v110 + a1[2] + v114 * v113;
  *v40 = v102;
  v40[1] = v103;
  v40[2] = v104;
  v44 = (float *)(v85 + v89 * v82);
  *v44 = v99;
  v44[1] = v100;
  v44[2] = v101;
  v45 = v91;
  *v91 = v96;
  v45[1] = v97;
  v45[2] = v98;
  v46 = v90;
  *v90 = v41;
  v46[1] = v42;
  v46[2] = v43;
  sub_10016A80(v80);
  *v93 = v25;
  v47 = v92;
  *v92 = 1.0;
  v47[1] = 0.0;
  v48 = (float *)(v84 + v89 * v81);
  v49 = v108 * v116 + *a1 + v111 * v115;
  v50 = v109 * v116 + a1[1] + v112 * v115;
  v51 = v116 * v110 + a1[2] + v115 * v113;
  *v48 = v102;
  v48[1] = v103;
  v48[2] = v104;
  v52 = (float *)(v85 + v89 * v82);
  *v52 = v99;
  v52[1] = v100;
  v52[2] = v101;
  v53 = v91;
  *v91 = v96;
  v53[1] = v97;
  v53[2] = v98;
  v54 = v90;
  *v90 = v49;
  v54[1] = v50;
  v54[2] = v51;
  sub_10016A80(v80);
  *v93 = v25;
  v55 = v92;
  *v92 = 1.0;
  v55[1] = 1.0;
  v56 = (float *)(v84 + v89 * v81);
  v57 = v108 * v94 + *a1 + v111 * v115;
  v58 = v109 * v94 + a1[1] + v112 * v115;
  v59 = v94 * v110 + a1[2] + v115 * v113;
  *v56 = v102;
  v56[1] = v103;
  v56[2] = v104;
  v60 = (float *)(v85 + v89 * v82);
  *v60 = v99;
  v60[1] = v100;
  v60[2] = v101;
  v61 = v91;
  *v91 = v96;
  v61[1] = v97;
  v61[2] = v98;
  v62 = v90;
  *v90 = v57;
  v62[1] = v58;
  v62[2] = v59;
  sub_10016A80(v80);
  if ( v71 )
  {
    switch ( v70 )
    {
      case 4:
        v63 = 2 * v88 - 2;
        break;
      case 5:
        v63 = 2 * v88;
        break;
      case 6:
        v63 = 3 * v88 - 6;
        break;
      case 7:
        v63 = 6 * v88 / 4;
        break;
      case 8:
        v63 = 0;
        break;
      default:
        v63 = v88;
        break;
    }
    sub_10016B00(v72, v70, v63);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v69 + 80))(v69, v88);
  v74 = 0;
  v75 = 0;
  v87 = 0;
  v86 = 0;
  v83 = -1;
  v69 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v24 + 48))(v24, -1, 0);
  if ( v86 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v86 + 8))(v86) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v86 + 16))(v86);
  if ( v74 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v74 + 8))(v74) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v74 + 16))(v74);
  v64 = v95;
  (*(void (__thiscall **)(int))(*(_DWORD *)v95 + 12))(v95);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v64 + 4))(v64);
}
