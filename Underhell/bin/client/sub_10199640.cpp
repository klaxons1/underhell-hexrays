int __usercall sub_10199640@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float *a4, float a5, float a6, float a7)
{
  float *v7; // eax
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
  int v21; // ebx
  int v22; // ebx
  int v23; // edi
  float *v24; // eax
  double v25; // st7
  double v26; // rt2
  double v27; // st4
  double v28; // st6
  double v29; // st3
  float *v30; // eax
  double v31; // st5
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  double v37; // st6
  double v38; // st7
  double v39; // st5
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  double v45; // st6
  double v46; // st7
  double v47; // st5
  float *v48; // eax
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  double v53; // st6
  double v54; // st7
  double v55; // st5
  float *v56; // eax
  float *v57; // eax
  float *v58; // eax
  int v59; // eax
  int v60; // esi
  int result; // eax
  _DWORD v63[44]; // [esp+0h] [ebp-238h] BYREF
  char v64; // [esp+B0h] [ebp-188h]
  int v65; // [esp+B4h] [ebp-184h]
  int v66; // [esp+B8h] [ebp-180h]
  char v67; // [esp+BCh] [ebp-17Ch]
  int v68[3]; // [esp+C0h] [ebp-178h] BYREF
  char v69; // [esp+CCh] [ebp-16Ch]
  int v70; // [esp+D0h] [ebp-168h]
  int v71; // [esp+D4h] [ebp-164h]
  int v72; // [esp+D8h] [ebp-160h]
  int v73; // [esp+DCh] [ebp-15Ch]
  int v74; // [esp+E0h] [ebp-158h]
  char v75; // [esp+F0h] [ebp-148h]
  _DWORD v76[14]; // [esp+F4h] [ebp-144h] BYREF
  int v77; // [esp+12Ch] [ebp-10Ch]
  int v78; // [esp+130h] [ebp-108h]
  int v79; // [esp+140h] [ebp-F8h]
  int v80; // [esp+180h] [ebp-B8h]
  int v81; // [esp+184h] [ebp-B4h]
  int v82; // [esp+198h] [ebp-A0h]
  int v83; // [esp+1A0h] [ebp-98h]
  int v84; // [esp+1A4h] [ebp-94h]
  int v85; // [esp+1A8h] [ebp-90h]
  float *v86; // [esp+1ACh] [ebp-8Ch]
  float *v87; // [esp+1B0h] [ebp-88h]
  float *v88; // [esp+1B4h] [ebp-84h]
  int *v89; // [esp+1D4h] [ebp-64h]
  int v90; // [esp+1E8h] [ebp-50h]
  float v91; // [esp+1ECh] [ebp-4Ch]
  float v92; // [esp+1F0h] [ebp-48h]
  float v93; // [esp+1F4h] [ebp-44h]
  float v94; // [esp+1F8h] [ebp-40h]
  float v95; // [esp+1FCh] [ebp-3Ch]
  float v96; // [esp+200h] [ebp-38h]
  float v97; // [esp+204h] [ebp-34h]
  float v98; // [esp+208h] [ebp-30h]
  float v99; // [esp+20Ch] [ebp-2Ch]
  float v100; // [esp+210h] [ebp-28h]
  float v101; // [esp+214h] [ebp-24h]
  float v102; // [esp+218h] [ebp-20h]
  float v103; // [esp+21Ch] [ebp-1Ch]
  float v104; // [esp+220h] [ebp-18h]
  float v105; // [esp+224h] [ebp-14h]
  float v106; // [esp+228h] [ebp-10h]
  float v107; // [esp+22Ch] [ebp-Ch]
  float v108; // [esp+230h] [ebp-8h]
  float v109; // [esp+234h] [ebp-4h]
  float v110; // [esp+240h] [ebp+8h]
  float v111; // [esp+244h] [ebp+Ch]
  float v112; // [esp+248h] [ebp+10h]

  v109 = a7;
  v111 = a5 * 0.5;
  v112 = 0.5 * a6;
  v103 = 1.0;
  v104 = 0.0;
  v105 = 0.0;
  v106 = 0.0;
  v108 = 0.0;
  v107 = 1.0;
  v7 = sub_101422C0();
  v100 = *v7 - *a4;
  v101 = v7[1] - a4[1];
  v102 = v7[2] - a4[2];
  if ( off_103EDFEC() < 0.001 )
  {
    v16 = v100;
    v18 = v108;
    v10 = v101;
    v14 = v107;
    v19 = v102;
    v12 = v106;
  }
  else
  {
    v9 = (float *)sub_10142300();
    v103 = v9[1] * v102 - v9[2] * v101;
    v104 = v9[2] * v100 - v102 * *v9;
    v105 = v101 * *v9 - v100 * v9[1];
    if ( off_103EDFEC() >= 0.001 )
    {
      v10 = v101;
      v11 = v102;
      v12 = v101 * v105 - v102 * v104;
      v106 = v12;
      v13 = v102 * v103 - v105 * v100;
      v107 = v13;
      v14 = v13;
      v15 = v104 * v100 - v103 * v101;
      v16 = v100;
      v108 = v15;
      goto LABEL_7;
    }
    v17 = (float *)sub_101422F0();
    v106 = v101 * v17[2] - v102 * v17[1];
    v107 = v102 * *v17 - v100 * v17[2];
    v108 = v100 * v17[1] - v101 * *v17;
    off_103EDFEC();
    v103 = v102 * v107 - v101 * v108;
    v12 = v106;
    v104 = v108 * v100 - v102 * v106;
    v105 = v101 * v106 - v107 * v100;
    v10 = v101;
    v14 = v107;
    v18 = v108;
    v19 = v102;
    v16 = v100;
  }
  v20 = v19;
  v15 = v18;
  v11 = v20;
LABEL_7:
  v91 = -v103;
  v92 = -v104;
  v93 = -v105;
  v97 = -v12;
  v98 = -v14;
  v99 = -v15;
  v94 = -v16;
  v95 = -v10;
  v96 = -v11;
  sub_10016C20((int)v63);
  v21 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3, a1);
  v90 = v21;
  if ( v21 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 8))(v21);
  v22 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v21 + 224))(v21, 1, 0, 0, 0);
  v65 = v22;
  v67 = 1;
  v66 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 40))(v22, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v65 + 68))(v65, 4, 6, v63);
  v73 = v63[39];
  v70 = v22 + 4;
  v69 = v64;
  v72 = 0;
  v71 = 6;
  v75 = 0;
  v68[0] = v63[41];
  v74 = 0;
  sub_10016990((int)v76, v22, 4, v63);
  v74 = 0;
  sub_10016A00(v76);
  v23 = BYTE2(v109) | ((BYTE1(v109) | ((LOBYTE(v109) | (HIBYTE(v109) << 8)) << 8)) << 8);
  *v89 = v23;
  v24 = v88;
  *v88 = 0.0;
  v24[1] = 1.0;
  v25 = -v112;
  v109 = v25;
  v26 = v107 * v25 + a4[1];
  v27 = -v111;
  v110 = v27;
  v28 = v106 * v25 + *a4 + v103 * v27;
  v29 = v104 * v27;
  v30 = (float *)(v80 + v85 * v77);
  v31 = v25 * v108 + a4[2] + v27 * v105;
  *v30 = v91;
  v30[1] = v92;
  v30[2] = v93;
  v32 = (float *)(v81 + v85 * v78);
  *v32 = v97;
  v32[1] = v98;
  v32[2] = v99;
  v33 = v87;
  *v87 = v94;
  v33[1] = v95;
  v33[2] = v96;
  v34 = v86;
  *v86 = v28;
  v34[1] = v26 + v29;
  v34[2] = v31;
  sub_10016A80(v76);
  *v89 = v23;
  v35 = v88;
  *v88 = 0.0;
  v35[1] = 0.0;
  v36 = (float *)(v80 + v85 * v77);
  v37 = v106 * v112 + *a4 + v103 * v110;
  v38 = v107 * v112 + a4[1] + v104 * v110;
  v39 = v112 * v108 + a4[2] + v110 * v105;
  *v36 = v91;
  v36[1] = v92;
  v36[2] = v93;
  v40 = (float *)(v81 + v85 * v78);
  *v40 = v97;
  v40[1] = v98;
  v40[2] = v99;
  v41 = v87;
  *v87 = v94;
  v41[1] = v95;
  v41[2] = v96;
  v42 = v86;
  *v86 = v37;
  v42[1] = v38;
  v42[2] = v39;
  sub_10016A80(v76);
  *v89 = v23;
  v43 = v88;
  *v88 = 1.0;
  v43[1] = 0.0;
  v44 = (float *)(v80 + v85 * v77);
  v45 = v106 * v112 + *a4 + v103 * v111;
  v46 = v107 * v112 + a4[1] + v104 * v111;
  v47 = v112 * v108 + a4[2] + v111 * v105;
  *v44 = v91;
  v44[1] = v92;
  v44[2] = v93;
  v48 = (float *)(v81 + v85 * v78);
  *v48 = v97;
  v48[1] = v98;
  v48[2] = v99;
  v49 = v87;
  *v87 = v94;
  v49[1] = v95;
  v49[2] = v96;
  v50 = v86;
  *v86 = v45;
  v50[1] = v46;
  v50[2] = v47;
  sub_10016A80(v76);
  *v89 = v23;
  v51 = v88;
  *v88 = 1.0;
  v51[1] = 1.0;
  v52 = (float *)(v80 + v85 * v77);
  v53 = v106 * v109 + *a4 + v103 * v111;
  v54 = v107 * v109 + a4[1] + v104 * v111;
  v55 = v109 * v108 + a4[2] + v111 * v105;
  *v52 = v91;
  v52[1] = v92;
  v52[2] = v93;
  v56 = (float *)(v81 + v85 * v78);
  *v56 = v97;
  v56[1] = v98;
  v56[2] = v99;
  v57 = v87;
  *v87 = v94;
  v57[1] = v95;
  v57[2] = v96;
  v58 = v86;
  *v86 = v53;
  v58[1] = v54;
  v58[2] = v55;
  sub_10016A80(v76);
  if ( v67 )
  {
    switch ( v66 )
    {
      case 4:
        v59 = 2 * v84 - 2;
        break;
      case 5:
        v59 = 2 * v84;
        break;
      case 6:
        v59 = 3 * v84 - 6;
        break;
      case 7:
        v59 = 6 * v84 / 4;
        break;
      case 8:
        v59 = 0;
        break;
      default:
        v59 = v84;
        break;
    }
    sub_10016B00(v68, v66, v59);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v65 + 80))(v65, v84, v72, v63);
  v70 = 0;
  v71 = 0;
  v83 = 0;
  v82 = 0;
  v79 = -1;
  v65 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v22 + 48))(v22, -1, 0);
  v60 = v90;
  (*(void (__thiscall **)(int))(*(_DWORD *)v90 + 12))(v90);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v60 + 4))(v60);
  if ( v82 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v82 + 8))(v82);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v82 + 16))(v82);
  }
  if ( v70 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v70 + 8))(v70);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v70 + 16))(v70);
  }
  return result;
}
