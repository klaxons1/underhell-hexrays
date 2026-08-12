int __usercall sub_10196820@<eax>(int a1@<ebx>, float *a2, float a3, float *a4, float a5)
{
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  double v9; // st7
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st6
  double v16; // st5
  double v17; // st5
  double v18; // st4
  double v19; // st4
  double v20; // st3
  double v21; // rt1
  double v22; // st4
  double v23; // st3
  double v24; // rt2
  double v25; // st4
  double v26; // rtt
  double v27; // st4
  double v28; // st5
  float *v29; // eax
  float *v30; // eax
  double v31; // st6
  double v32; // st6
  double v33; // st5
  double v34; // rt1
  double v35; // st5
  double v36; // rt2
  double v37; // st5
  double v38; // rtt
  double v39; // st5
  double v40; // st6
  double v41; // st5
  float *v42; // eax
  double v43; // st7
  float *v44; // eax
  double v45; // st6
  double v46; // st5
  double v47; // st3
  double v48; // st4
  double v49; // st3
  double v50; // rt1
  double v51; // st4
  double v52; // rt2
  double v53; // st4
  double v54; // st5
  float *v55; // eax
  float *v56; // eax
  double v57; // st7
  double v58; // st6
  int v59; // eax
  int v60; // esi
  _DWORD v62[44]; // [esp+8h] [ebp-248h] BYREF
  char v63; // [esp+B8h] [ebp-198h]
  int v64; // [esp+BCh] [ebp-194h]
  int v65; // [esp+C0h] [ebp-190h]
  char v66; // [esp+C4h] [ebp-18Ch]
  int v67[3]; // [esp+C8h] [ebp-188h] BYREF
  char v68; // [esp+D4h] [ebp-17Ch]
  int v69; // [esp+D8h] [ebp-178h]
  int v70; // [esp+DCh] [ebp-174h]
  int v71; // [esp+E0h] [ebp-170h]
  int v72; // [esp+E4h] [ebp-16Ch]
  int v73; // [esp+E8h] [ebp-168h]
  char v74; // [esp+F8h] [ebp-158h]
  _DWORD v75[41]; // [esp+FCh] [ebp-154h] BYREF
  int v76; // [esp+1A0h] [ebp-B0h]
  int v77; // [esp+1A8h] [ebp-A8h]
  int v78; // [esp+1ACh] [ebp-A4h]
  float *v79; // [esp+1B4h] [ebp-9Ch]
  float *v80; // [esp+1BCh] [ebp-94h]
  unsigned int *v81; // [esp+1DCh] [ebp-74h]
  float v82[3]; // [esp+1F0h] [ebp-60h] BYREF
  int v83; // [esp+1FCh] [ebp-54h]
  float v84; // [esp+200h] [ebp-50h]
  float v85; // [esp+204h] [ebp-4Ch]
  float v86; // [esp+208h] [ebp-48h]
  float v87; // [esp+20Ch] [ebp-44h]
  float v88; // [esp+210h] [ebp-40h]
  float v89; // [esp+214h] [ebp-3Ch]
  float v90; // [esp+218h] [ebp-38h]
  float v91; // [esp+21Ch] [ebp-34h]
  float v92; // [esp+220h] [ebp-30h]
  float v93; // [esp+224h] [ebp-2Ch]
  float v94; // [esp+228h] [ebp-28h]
  float v95; // [esp+22Ch] [ebp-24h]
  float v96; // [esp+230h] [ebp-20h]
  float v97; // [esp+234h] [ebp-1Ch]
  float v98; // [esp+238h] [ebp-18h]
  float v99; // [esp+23Ch] [ebp-14h]
  float v100; // [esp+240h] [ebp-10h] BYREF
  float v101; // [esp+244h] [ebp-Ch]
  float v102; // [esp+248h] [ebp-8h]
  float v103; // [esp+24Ch] [ebp-4h]
  float v104; // [esp+258h] [ebp+8h]
  float v105; // [esp+258h] [ebp+8h]
  float v106; // [esp+258h] [ebp+8h]
  float v107; // [esp+258h] [ebp+8h]
  float v108; // [esp+258h] [ebp+8h]
  float v109; // [esp+258h] [ebp+8h]
  float v110; // [esp+25Ch] [ebp+Ch]
  float v111; // [esp+260h] [ebp+10h]
  float v112; // [esp+260h] [ebp+10h]
  float v113; // [esp+260h] [ebp+10h]
  float v114; // [esp+260h] [ebp+10h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v6 = 0;
  v83 = v5;
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  v7 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0, a1);
  sub_10016C20((int)v62);
  v64 = v7;
  v66 = 1;
  v65 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 40))(v7, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v64 + 68))(v64, 4, 6, v62);
  v72 = v62[39];
  v69 = v7 + 4;
  v68 = v63;
  v71 = 0;
  v70 = 6;
  v74 = 0;
  v67[0] = v62[41];
  v73 = 0;
  sub_10016990((int)v75, v7, 4, v62);
  v73 = 0;
  sub_10016A00(v75);
  sub_1013B9F0(a2, v82);
  v103 = COERCE_FLOAT(&v100);
  v100 = cos(a5);
  v101 = sin(a5);
  do
  {
    v104 = *(float *)((char *)sub_101422F0() + v6);
    *(float *)((char *)&v92 + v6) = *(float *)((char *)sub_10142300() + v6) * v101 + v104 * v100;
    v105 = *(float *)((char *)sub_101422F0() + v6);
    v9 = *(float *)((char *)sub_10142300() + v6);
    v6 += 4;
    *(float *)((char *)&v88 + v6) = v9 * v100 - v105 * v101;
  }
  while ( v6 < 12 );
  v103 = a4[2] * 255.0 + 8388608.0;
  v111 = a4[1] * 255.0 + 8388608.0;
  v106 = 255.0 * *a4 + 8388608.0;
  *v81 = LOBYTE(v103) | ((LOBYTE(v111) | ((LOBYTE(v106) | 0xFFFFFF00) << 8)) << 8);
  v11 = v80;
  *v80 = 0.0;
  v11[1] = 1.0;
  v12 = v79;
  v13 = -a3;
  v14 = v89 * v13;
  v88 = v14;
  v15 = v14 + *a2;
  v16 = v13 * v90;
  v85 = v16;
  v17 = v16 + a2[1];
  v18 = v13 * v91;
  v86 = v18;
  v19 = v18 + a2[2];
  v20 = v13 * v92;
  v84 = v20;
  v21 = v19;
  v22 = v15 + v20;
  v95 = v22;
  v23 = v13 * v93;
  v87 = v23;
  v24 = v22;
  v25 = v17 + v23;
  v96 = v25;
  v26 = v25;
  v27 = v13 * v94;
  v102 = v27;
  v28 = v21 + v27;
  v97 = v28;
  *v79 = v24;
  v12[1] = v26;
  v12[2] = v28;
  sub_10016A80(v75);
  v103 = a4[2] * 255.0 + 8388608.0;
  v112 = a4[1] * 255.0 + 8388608.0;
  v107 = 255.0 * *a4 + 8388608.0;
  *v81 = LOBYTE(v103) | ((LOBYTE(v112) | ((LOBYTE(v107) | 0xFFFFFF00) << 8)) << 8);
  v29 = v80;
  *v80 = 0.0;
  v29[1] = 0.0;
  v30 = v79;
  v31 = v89 * a3;
  v103 = v31;
  v32 = v31 + *a2;
  v33 = v90 * a3;
  v99 = v33;
  v34 = v33 + a2[1];
  v35 = a3 * v91;
  v98 = v35;
  v36 = v35 + a2[2];
  v37 = v32 + v84;
  v95 = v37;
  v38 = v37;
  v39 = v34 + v87;
  v96 = v39;
  v40 = v39;
  v41 = v36 + v102;
  v97 = v41;
  *v79 = v38;
  v30[1] = v40;
  v30[2] = v41;
  sub_10016A80(v75);
  v102 = a4[2] * 255.0 + 8388608.0;
  v113 = a4[1] * 255.0 + 8388608.0;
  v108 = 255.0 * *a4 + 8388608.0;
  *v81 = LOBYTE(v102) | ((LOBYTE(v113) | ((LOBYTE(v108) | 0xFFFFFF00) << 8)) << 8);
  v42 = v80;
  *v80 = 1.0;
  v42[1] = 0.0;
  v43 = v103 + *a2;
  v44 = v79;
  v45 = v99 + a2[1];
  v46 = v98 + a2[2];
  v47 = v92 * a3;
  v98 = v47;
  v48 = v43 + v47;
  v95 = v48;
  v49 = v93 * a3;
  v99 = v49;
  v50 = v48;
  v51 = v45 + v49;
  v96 = v51;
  v52 = v51;
  v53 = a3 * v94;
  v102 = v53;
  v54 = v46 + v53;
  v97 = v54;
  *v79 = v50;
  v44[1] = v52;
  v44[2] = v54;
  sub_10016A80(v75);
  v114 = a4[2] * 255.0 + 8388608.0;
  v109 = a4[1] * 255.0 + 8388608.0;
  v110 = 255.0 * *a4 + 8388608.0;
  *v81 = LOBYTE(v114) | ((LOBYTE(v109) | ((LOBYTE(v110) | 0xFFFFFF00) << 8)) << 8);
  v55 = v80;
  *v80 = 1.0;
  v55[1] = 1.0;
  v56 = v79;
  v57 = v85 + a2[1] + v99;
  v58 = v86 + a2[2] + v102;
  *v79 = *a2 + v88 + v98;
  v56[1] = v57;
  v56[2] = v58;
  sub_10016A80(v75);
  if ( v66 )
  {
    switch ( v65 )
    {
      case 4:
        v59 = 2 * v78 - 2;
        break;
      case 5:
        v59 = 2 * v78;
        break;
      case 6:
        v59 = 3 * v78 - 6;
        break;
      case 7:
        v59 = 6 * v78 / 4;
        break;
      case 8:
        v59 = 0;
        break;
      default:
        v59 = v78;
        break;
    }
    sub_10016B00(v67, v65, v59);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v64 + 80))(v64, v78, v71);
  v69 = 0;
  v70 = 0;
  v77 = 0;
  v76 = 0;
  v75[19] = -1;
  v64 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 48))(v7, -1, 0);
  if ( v76 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v76 + 8))(v76) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v76 + 16))(v76);
  if ( v69 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v69 + 8))(v69) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v69 + 16))(v69);
  v60 = v83;
  (*(void (__thiscall **)(int))(*(_DWORD *)v83 + 12))(v83);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v60 + 4))(v60);
}
