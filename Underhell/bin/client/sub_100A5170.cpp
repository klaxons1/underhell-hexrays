void __userpurge sub_100A5170(int a1@<ecx>, int a2@<ebx>, double a3)
{
  double v4; // st7
  bool v5; // zf
  double v6; // st7
  double v7; // st7
  int v8; // ebx
  int v9; // ebx
  double v10; // st7
  double v11; // st6
  double v12; // st5
  long double v13; // st7
  long double v14; // st5
  long double v15; // st1
  long double v16; // st3
  long double v17; // st7
  long double v18; // st5
  long double v19; // st6
  long double v20; // st1
  long double v21; // st4
  long double v22; // st2
  long double v23; // rtt
  long double v24; // st1
  double v25; // st2
  long double v26; // st4
  double v27; // st6
  long double v28; // rt0
  long double v29; // st4
  long double v30; // rt1
  long double v31; // st4
  float *v32; // eax
  double v33; // rt2
  double v34; // st2
  double v35; // st3
  double v36; // st2
  long double v37; // rt0
  long double v38; // st3
  long double v39; // st4
  long double v40; // st5
  long double v41; // st6
  long double v42; // rt0
  long double v43; // st5
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  double v47; // st7
  double v48; // st6
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  double v52; // st7
  double v53; // st6
  float *v54; // eax
  float *v55; // eax
  float *v56; // eax
  double v57; // st7
  double v58; // st6
  float *v59; // eax
  float *v60; // eax
  int v61; // eax
  int v62; // esi
  float v63; // [esp+1Ch] [ebp-258h]
  float v64; // [esp+1Ch] [ebp-258h]
  _DWORD v65[44]; // [esp+2Ch] [ebp-248h] BYREF
  char v66; // [esp+DCh] [ebp-198h]
  int v67; // [esp+E0h] [ebp-194h]
  int v68; // [esp+E4h] [ebp-190h]
  char v69; // [esp+E8h] [ebp-18Ch]
  int v70[3]; // [esp+ECh] [ebp-188h] BYREF
  char v71; // [esp+F8h] [ebp-17Ch]
  int v72; // [esp+FCh] [ebp-178h]
  int v73; // [esp+100h] [ebp-174h]
  int v74; // [esp+104h] [ebp-170h]
  int v75; // [esp+108h] [ebp-16Ch]
  int v76; // [esp+10Ch] [ebp-168h]
  char v77; // [esp+11Ch] [ebp-158h]
  _DWORD v78[41]; // [esp+120h] [ebp-154h] BYREF
  int v79; // [esp+1C4h] [ebp-B0h]
  int v80; // [esp+1CCh] [ebp-A8h]
  int v81; // [esp+1D0h] [ebp-A4h]
  float *v82; // [esp+1D8h] [ebp-9Ch]
  float *v83; // [esp+1DCh] [ebp-98h]
  float *v84; // [esp+1E0h] [ebp-94h]
  int *v85; // [esp+200h] [ebp-74h]
  float v86; // [esp+214h] [ebp-60h]
  float v87; // [esp+218h] [ebp-5Ch]
  int v88; // [esp+220h] [ebp-54h]
  float v89; // [esp+224h] [ebp-50h]
  float v90; // [esp+228h] [ebp-4Ch]
  float v91; // [esp+22Ch] [ebp-48h]
  float v92; // [esp+234h] [ebp-40h]
  float v93; // [esp+238h] [ebp-3Ch] BYREF
  float v94; // [esp+23Ch] [ebp-38h]
  float v95; // [esp+240h] [ebp-34h]
  float v96; // [esp+244h] [ebp-30h]
  float v97; // [esp+248h] [ebp-2Ch]
  float v98; // [esp+24Ch] [ebp-28h] BYREF
  float v99; // [esp+250h] [ebp-24h]
  float v100; // [esp+254h] [ebp-20h]
  float v101; // [esp+258h] [ebp-1Ch]
  float v102; // [esp+25Ch] [ebp-18h]
  float v103; // [esp+260h] [ebp-14h]
  float v104; // [esp+264h] [ebp-10h]
  float v105; // [esp+268h] [ebp-Ch]
  float v106; // [esp+26Ch] [ebp-8h]
  float v107; // [esp+270h] [ebp-4h]
  float v108; // [esp+280h] [ebp+Ch]
  float v109; // [esp+280h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_Quad::Draw", 0, "Particle/Effect_Rendering", 0, 4);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 20))(a1, LODWORD(a3), HIDWORD(a3));
  v4 = *(float *)(a1 + 56) / *(float *)(a1 + 52);
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
    v63 = v4;
    sub_101EE8A0(v63, *(float *)(a1 + 88));
  }
  v5 = (*(_BYTE *)(a1 + 12) & 2) == 0;
  v97 = v4 * (*(float *)(a1 + 48) - *(float *)(a1 + 44)) + *(float *)(a1 + 44);
  v6 = *(float *)(a1 + 56) / *(float *)(a1 + 52);
  if ( !v5 )
  {
    v64 = v6;
    sub_101EE8A0(v64, *(float *)(a1 + 92));
  }
  v7 = v6 * (*(float *)(a1 + 64) - *(float *)(a1 + 60)) + *(float *)(a1 + 60);
  v107 = v7;
  if ( v7 <= 1.0 )
  {
    if ( v7 < 0.0 )
      v107 = 0.0;
  }
  else
  {
    v107 = 1.0;
  }
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
  v88 = v8;
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  v9 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 224))(
         v8,
         1,
         0,
         0,
         *(_DWORD *)(a1 + 16));
  sub_10016C20((int)v65);
  v67 = v9;
  v69 = 1;
  v68 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 40))(v9, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v67 + 68))(v67, 4, 6, v65);
  v75 = v65[39];
  v72 = v9 + 4;
  v71 = v66;
  v74 = 0;
  v73 = 6;
  v77 = 0;
  v70[0] = v65[41];
  v76 = 0;
  sub_10016990((int)v78, v9, 4, v65);
  v76 = 0;
  sub_10016A00(v78);
  v5 = (*(_BYTE *)(a1 + 12) & 4) == 0;
  *(float *)(a1 + 80) = (double)(unsigned __int16)(int)((*(float *)(a1 + 84) * a3 + *(float *)(a1 + 80)) * 182.04445)
                      * 0.0054931641;
  v10 = *(float *)(a1 + 68);
  v89 = *(float *)(a1 + 68);
  v11 = *(float *)(a1 + 72);
  v90 = *(float *)(a1 + 72);
  v12 = *(float *)(a1 + 76);
  v91 = *(float *)(a1 + 76);
  if ( !v5 )
  {
    v89 = v10 * v107;
    v90 = v11 * v107;
    v91 = v107 * v12;
  }
  sub_101EDAE0(a1 + 32, &v98, &v93);
  v13 = *(float *)(a1 + 80) * 0.017453292;
  v14 = sin(v13);
  v15 = cos(v13);
  v101 = v98 * v15;
  v102 = v99 * v15;
  v16 = v101 - v93 * v14;
  v17 = v102 - v94 * v14;
  v18 = v15 * v100 - v14 * v95;
  v19 = 0.017453292 * (*(float *)(a1 + 80) + 90.0);
  v20 = sin(v19);
  v21 = v93 * v20;
  v22 = v94 * v20;
  v23 = v20 * v95;
  v24 = cos(v19);
  v86 = v98 * v24;
  v87 = v99 * v24;
  v101 = v86 - v21;
  v102 = v87 - v22;
  v103 = v24 * v100 - v23;
  v25 = v97 * 0.5;
  v26 = v16 * v25;
  v27 = v25;
  v98 = v26;
  v28 = v26;
  v29 = v17 * v25;
  v99 = v29;
  v30 = v29;
  v31 = v18 * v25;
  v100 = v31;
  v32 = v82;
  v33 = v102 * v25;
  v34 = v25 * v101;
  v93 = v34;
  v35 = v34;
  v94 = v33;
  v36 = v27 * v103;
  v95 = v36;
  v37 = v28 + *(float *)(a1 + 20) - v35;
  v38 = v30 + *(float *)(a1 + 24);
  v39 = v31 + *(float *)(a1 + 28);
  v101 = v37;
  v40 = v38 - v33;
  v41 = v37;
  v102 = v40;
  v42 = v40;
  v43 = v39 - v36;
  v103 = v43;
  *v82 = v41;
  v32[1] = v42;
  v32[2] = v43;
  v44 = v83;
  *v83 = *(float *)(a1 + 32);
  v44[1] = *(float *)(a1 + 36);
  v44[2] = *(float *)(a1 + 40);
  v45 = v84;
  *v84 = 1.0;
  v45[1] = 1.0;
  v108 = v91 * 255.0 + 8388608.0;
  v106 = v108;
  v92 = v90 * 255.0 + 8388608.0;
  v105 = v92;
  v97 = v89 * 255.0 + 8388608.0;
  v104 = v97;
  v107 = 255.0 * v107 + 8388608.0;
  v96 = v107;
  *v85 = LOBYTE(v106) | ((LOBYTE(v105) | ((LOBYTE(v104) | (LOBYTE(v96) << 8)) << 8)) << 8);
  sub_10016A80(v78);
  v46 = v82;
  v47 = *(float *)(a1 + 24) - v99 - v94;
  v48 = *(float *)(a1 + 28) - v100 - v95;
  v101 = *(float *)(a1 + 20) - v98 - v93;
  v102 = v47;
  v103 = v48;
  *v82 = v101;
  v46[1] = v47;
  v46[2] = v48;
  v49 = v83;
  *v83 = *(float *)(a1 + 32);
  v49[1] = *(float *)(a1 + 36);
  v49[2] = *(float *)(a1 + 40);
  v50 = v84;
  *v84 = 0.0;
  v50[1] = 1.0;
  v96 = v108;
  v104 = v92;
  v105 = v97;
  v106 = v107;
  *v85 = LOBYTE(v96) | ((LOBYTE(v104) | ((LOBYTE(v105) | (LOBYTE(v106) << 8)) << 8)) << 8);
  sub_10016A80(v78);
  v51 = v82;
  v52 = *(float *)(a1 + 24) - v99 + v94;
  v53 = *(float *)(a1 + 28) - v100 + v95;
  v101 = *(float *)(a1 + 20) - v98 + v93;
  v102 = v52;
  v103 = v53;
  *v82 = v101;
  v51[1] = v52;
  v51[2] = v53;
  v54 = v83;
  *v83 = *(float *)(a1 + 32);
  v54[1] = *(float *)(a1 + 36);
  v54[2] = *(float *)(a1 + 40);
  v55 = v84;
  *v84 = 0.0;
  v55[1] = 0.0;
  v96 = v108;
  v104 = v92;
  v105 = v97;
  v106 = v107;
  *v85 = LOBYTE(v96) | ((LOBYTE(v104) | ((LOBYTE(v105) | (LOBYTE(v106) << 8)) << 8)) << 8);
  sub_10016A80(v78);
  v56 = v82;
  v57 = v99 + *(float *)(a1 + 24) + v94;
  v58 = v100 + *(float *)(a1 + 28) + v95;
  v101 = *(float *)(a1 + 20) + v98 + v93;
  v102 = v57;
  v103 = v58;
  *v82 = v101;
  v56[1] = v57;
  v56[2] = v58;
  v59 = v83;
  *v83 = *(float *)(a1 + 32);
  v59[1] = *(float *)(a1 + 36);
  v59[2] = *(float *)(a1 + 40);
  v60 = v84;
  *v84 = 1.0;
  v60[1] = 0.0;
  v104 = v108;
  v105 = v92;
  v106 = v97;
  v109 = v107;
  *v85 = LOBYTE(v104) | ((LOBYTE(v105) | ((LOBYTE(v106) | (LOBYTE(v109) << 8)) << 8)) << 8);
  sub_10016A80(v78);
  if ( v69 )
  {
    switch ( v68 )
    {
      case 4:
        v61 = 2 * v81 - 2;
        break;
      case 5:
        v61 = 2 * v81;
        break;
      case 6:
        v61 = 3 * v81 - 6;
        break;
      case 7:
        v61 = 6 * v81 / 4;
        break;
      case 8:
        v61 = 0;
        break;
      default:
        v61 = v81;
        break;
    }
    sub_10016B00(v70, v68, v61);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v67 + 80))(v67, v81, v74);
  v72 = 0;
  v73 = 0;
  v80 = 0;
  v79 = 0;
  v78[19] = -1;
  v67 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 48))(v9, -1, 0);
  if ( v79 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v79 + 8))(v79) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v79 + 16))(v79);
  if ( v72 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v72 + 8))(v72) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v72 + 16))(v72);
  v62 = v88;
  (*(void (__thiscall **)(int))(*(_DWORD *)v88 + 12))(v88);
  (*(void (__thiscall **)(int))(*(_DWORD *)v62 + 4))(v62);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
