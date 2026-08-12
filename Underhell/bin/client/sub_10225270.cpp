int __thiscall sub_10225270(float *this, int a2, int a3, int *a4, int a5)
{
  float v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // ecx
  float v10; // edx
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int (__thiscall *v17)(int *, int, _DWORD, _DWORD, _DWORD); // eax
  int v18; // esi
  void (__thiscall *v19)(int, int); // eax
  int v20; // edi
  double v21; // st7
  double v22; // st6
  int v23; // ebp
  char v24; // dl
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  double v28; // st5
  double v29; // st4
  double v30; // rt1
  double v31; // st6
  double v32; // st7
  double v33; // st6
  int v34; // ecx
  double v35; // st4
  double v36; // st3
  double v37; // st5
  double v38; // st2
  double v39; // st7
  float *v40; // esi
  long double v41; // st4
  long double v42; // st5
  long double v43; // st4
  double v44; // st7
  double v45; // st7
  int v46; // eax
  int v47; // ecx
  float *v48; // eax
  long double v49; // st3
  int v50; // edi
  double v51; // st7
  float *v52; // eax
  float *v53; // eax
  double v54; // st7
  double v55; // st7
  float *v56; // eax
  float *v57; // eax
  double v58; // st7
  double v59; // st7
  float *v60; // eax
  float *v61; // eax
  double v62; // st7
  float *v63; // eax
  int v64; // eax
  float v66; // [esp+40h] [ebp-2C4h]
  int v67; // [esp+58h] [ebp-2ACh]
  float v68; // [esp+58h] [ebp-2ACh]
  char v69; // [esp+5Fh] [ebp-2A5h]
  float v70; // [esp+60h] [ebp-2A4h]
  float v71; // [esp+60h] [ebp-2A4h]
  float v72; // [esp+64h] [ebp-2A0h]
  float v73; // [esp+64h] [ebp-2A0h]
  float v74; // [esp+64h] [ebp-2A0h]
  float v75; // [esp+68h] [ebp-29Ch]
  float v76; // [esp+6Ch] [ebp-298h]
  float v77; // [esp+70h] [ebp-294h]
  int v78; // [esp+74h] [ebp-290h]
  int v79; // [esp+74h] [ebp-290h]
  int v80; // [esp+78h] [ebp-28Ch]
  float v81; // [esp+7Ch] [ebp-288h]
  int v82; // [esp+80h] [ebp-284h]
  int v83; // [esp+84h] [ebp-280h] BYREF
  int v84; // [esp+88h] [ebp-27Ch]
  int v85; // [esp+8Ch] [ebp-278h]
  int v86; // [esp+90h] [ebp-274h]
  int v87; // [esp+94h] [ebp-270h]
  float v88; // [esp+98h] [ebp-26Ch]
  float v89; // [esp+9Ch] [ebp-268h]
  float v90; // [esp+A0h] [ebp-264h]
  float v91; // [esp+A4h] [ebp-260h]
  int v92; // [esp+A8h] [ebp-25Ch]
  unsigned int v93; // [esp+ACh] [ebp-258h]
  float v94; // [esp+B0h] [ebp-254h]
  float v95; // [esp+B4h] [ebp-250h]
  int v96; // [esp+B8h] [ebp-24Ch]
  float v97; // [esp+BCh] [ebp-248h]
  float v98; // [esp+C0h] [ebp-244h]
  float v99; // [esp+C4h] [ebp-240h]
  float *v100; // [esp+C8h] [ebp-23Ch]
  float v101; // [esp+CCh] [ebp-238h]
  float v102; // [esp+D0h] [ebp-234h]
  float v103; // [esp+D4h] [ebp-230h]
  float v104; // [esp+D8h] [ebp-22Ch]
  float v105[16]; // [esp+DCh] [ebp-228h] BYREF
  _DWORD v106[44]; // [esp+11Ch] [ebp-1E8h] BYREF
  int v107; // [esp+1CCh] [ebp-138h]
  int v108; // [esp+1D0h] [ebp-134h]
  int v109; // [esp+1D4h] [ebp-130h]
  int v110; // [esp+1D8h] [ebp-12Ch]
  int v111[3]; // [esp+1DCh] [ebp-128h] BYREF
  char v112; // [esp+1E8h] [ebp-11Ch]
  int v113; // [esp+1ECh] [ebp-118h]
  int v114; // [esp+1F0h] [ebp-114h]
  int v115; // [esp+1F4h] [ebp-110h]
  int v116; // [esp+1F8h] [ebp-10Ch]
  int v117; // [esp+1FCh] [ebp-108h]
  int v118; // [esp+200h] [ebp-104h]
  int v119; // [esp+204h] [ebp-100h]
  int v120; // [esp+208h] [ebp-FCh]
  char v121; // [esp+20Ch] [ebp-F8h]
  _DWORD v122[41]; // [esp+210h] [ebp-F4h] BYREF
  int v123; // [esp+2B4h] [ebp-50h]
  int v124; // [esp+2B8h] [ebp-4Ch]
  int v125; // [esp+2BCh] [ebp-48h]
  int v126; // [esp+2C0h] [ebp-44h]
  int v127; // [esp+2C4h] [ebp-40h]
  float *v128; // [esp+2C8h] [ebp-3Ch]
  float *v129; // [esp+2D0h] [ebp-34h]
  int *v130; // [esp+2F0h] [ebp-14h]
  int v131; // [esp+2F4h] [ebp-10h]
  int v132; // [esp+2F8h] [ebp-Ch]
  int v133; // [esp+2FCh] [ebp-8h]

  v100 = this;
  v80 = sub_10227A90(a4, 1, &v83, a3 + 8);
  (*(void (__thiscall **)(int *, _DWORD, float *))(*a4 + 120))(a4, 0, v105);
  (*(void (__thiscall **)(int *, int))(*a4 + 348))(a4, 1);
  (*(void (__thiscall **)(int *, float *))(*a4 + 352))(a4, v105);
  (*(void (__thiscall **)(int *, _DWORD))(*a4 + 80))(a4, 0);
  (*(void (__thiscall **)(int *))(*a4 + 84))(a4);
  (*(void (__thiscall **)(int *))(*a4 + 124))(a4);
  LODWORD(v98) = *(_DWORD *)(a2 + 6324) >> 2;
  v89 = *(float *)(a2 + 6068);
  v6 = *(float *)(a2 + 6084);
  v7 = *(_DWORD *)(a2 + 6092);
  v87 = *(_DWORD *)(a2 + 6340) >> 2;
  LODWORD(v97) = *(_DWORD *)(a2 + 6348) >> 2;
  LODWORD(v95) = *(_DWORD *)(a2 + 6356) >> 2;
  v101 = *(float *)(a2 + 6100);
  v85 = *(_DWORD *)(a2 + 6360) >> 2;
  v8 = *(_DWORD *)(a2 + 6328);
  v91 = v6;
  v9 = *(_DWORD *)(a2 + 6104);
  v92 = v7;
  v10 = *(float *)(a2 + 6072);
  v86 = v9;
  v93 = v8 >> 2;
  v11 = *a4;
  v99 = v10;
  v12 = (*(int (__thiscall **)(int *, int))(v11 + 516))(a4, a5);
  v13 = (*(int (__thiscall **)(int *))(*a4 + 520))(a4) / 6;
  v14 = v12 / 4;
  if ( v12 / 4 >= v13 )
  {
    v82 = v13;
    v14 = v13;
  }
  else
  {
    v82 = v12 / 4;
  }
  v84 = *(_DWORD *)(a2 + 8);
  v15 = v83;
  if ( v83 )
  {
    while ( 1 )
    {
      if ( v14 >= v15 )
      {
        v67 = v15;
        v16 = v15;
      }
      else
      {
        v16 = v14;
        v67 = v14;
      }
      v17 = *(int (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD))(*a4 + 224);
      v83 = v15 - v16;
      v18 = v17(a4, 1, 0, 0, 0);
      v119 = -1;
      v132 = -1;
      v122[19] = -1;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v117 = 0;
      v118 = 0;
      v120 = 0;
      v123 = 0;
      v133 = 0;
      v126 = 0;
      v127 = 0;
      v125 = 0;
      v131 = 0;
      v108 = v18;
      LOBYTE(v110) = 1;
      v109 = 7;
      v19 = *(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 40);
      v78 = 4 * v16;
      v96 = v18;
      v20 = 6 * v16;
      v19(v18, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v108 + 68))(v108, v78, v20, v106);
      v113 = v18 + 4;
      v116 = v106[39];
      v112 = v107;
      v114 = v20;
      v123 = v18;
      v115 = 0;
      v121 = 0;
      v111[0] = v106[41];
      qmemcpy(v122, v106, sizeof(v122));
      v125 = 4 * v67;
      v122[20] = v106[20] != 0 ? 2 : 0;
      v126 = 0;
      LOBYTE(v124) = 0;
      if ( v132 == -1 )
      {
        v131 = 0;
        v132 = v106[40];
        v133 = v106[39];
      }
      v117 = 0;
      sub_10016A00(v122);
      if ( v67 > 0 )
      {
        v21 = 8388608.0;
        v79 = v67;
        v22 = 255.0;
        do
        {
          v23 = *(_DWORD *)(v80 - 12);
          v80 -= 16;
          v24 = *(_BYTE *)(v80 + 12);
          v25 = v23 / 4;
          v26 = v23 & 3;
          v69 = v24;
          if ( v24 )
          {
            v27 = v26 + 4 * LODWORD(v97) * v25;
            v28 = *(float *)(v92 + 4 * v27 + 16);
            v29 = *(float *)(v92 + 4 * (v27 + 8));
            v88 = *(float *)(v92 + 4 * v27) * v22 + v21;
            v90 = v28 * v22 + v21;
            v30 = v22;
            v31 = v21 + v29 * v22;
            v32 = v30;
            v72 = v31;
            v33 = *(float *)(v80 + 8);
            v34 = v26 + 4 * LODWORD(v98) * v25;
            v81 = *(float *)(v80 + 8);
            v35 = *(float *)(LODWORD(v89) + 4 * v34 + 16);
            v36 = *(float *)(LODWORD(v89) + 4 * v34);
            v37 = *(float *)(LODWORD(v89) + 4 * (v34 + 8));
            v102 = *(float *)(LODWORD(v89) + 4 * v34);
            v103 = v35;
            v104 = v37;
            v38 = v105[0] * v36 + v105[2] * v37 + v105[1] * v35 + v105[3];
            v75 = v38;
            v76 = v105[4] * v36 + v105[6] * v37 + v105[5] * v35 + v105[7];
            v77 = v36 * v105[8] + v35 * v105[9] + v37 * v105[10] + v105[11];
            v70 = v38;
            if ( (LODWORD(v70) & 0x7F800000) == 0x7F800000 )
            {
              v22 = v32;
              v21 = 8388608.0;
            }
            else
            {
              v39 = v38;
              v40 = (float *)&unk_103FB670;
              v41 = cos(*(float *)(LODWORD(v91) + 4 * (v26 + 4 * v87 * v25)));
              v71 = v41;
              v42 = v41;
              v43 = sin(*(float *)(LODWORD(v91) + 4 * (v26 + 4 * v87 * v25)));
              v68 = v43;
              if ( v84 )
              {
                if ( *((_BYTE *)v100 + 92) )
                {
                  v44 = *(float *)(LODWORD(v99) + 4 * (v26 + 4 * v93 * v25));
                  if ( v44 <= 0.0 )
                    v45 = 0.0;
                  else
                    v45 = 1.0 / v44 * 1024.0;
                }
                else
                {
                  v45 = v100[21] * 1024.0;
                  if ( *((_BYTE *)v100 + 93) )
                    v45 = v45 / *(float *)(v84 + 4 * (int)*(float *)(v86 + 4 * (v26 + 4 * v85 * v25)) + 644);
                }
                v66 = v45;
                v46 = sub_10220FD0(
                        v84,
                        *(float *)(LODWORD(v101) + 4 * (v26 + 4 * LODWORD(v95) * v25)),
                        *(float *)(a2 + 36),
                        v66,
                        (int)*(float *)(v86 + 4 * (v26 + 4 * v85 * v25)));
                v24 = v69;
                v40 = (float *)v46;
                v39 = v75;
                v33 = v81;
                v43 = v68;
                v42 = v71;
              }
              v47 = LOBYTE(v90);
              v48 = v128 + 1;
              v49 = (v43 - v42) * v33;
              v94 = v49;
              *v128 = v39 + v49;
              *v48 = (-v43 - v42) * v33 + v76;
              v48[1] = v77;
              BYTE1(v48) = v24;
              LOBYTE(v48) = LOBYTE(v88);
              v50 = LOBYTE(v72) | ((v47 | ((unsigned __int16)v48 << 8)) << 8);
              *v130 = v50;
              v51 = v40[3];
              v52 = v129;
              *v129 = *v40;
              v52[1] = v51;
              sub_10016A80(v122);
              v53 = v128 + 1;
              *v128 = (-v71 - v68) * v81 + v75;
              v54 = (v71 - v68) * v81;
              v73 = v54;
              *v53 = v54 + v76;
              v53[1] = v77;
              *v130 = v50;
              v55 = v40[1];
              v56 = v129;
              *v129 = *v40;
              v56[1] = v55;
              sub_10016A80(v122);
              v57 = v128 + 1;
              *v128 = v73 + v75;
              v58 = (v68 + v71) * v81;
              v74 = v58;
              *v57 = v58 + v76;
              v57[1] = v77;
              *v130 = v50;
              v59 = v40[1];
              v60 = v129;
              *v129 = v40[2];
              v60[1] = v59;
              sub_10016A80(v122);
              v61 = v128 + 1;
              *v128 = v74 + v75;
              *v61 = v94 + v76;
              v61[1] = v77;
              *v130 = v50;
              v62 = v40[3];
              v63 = v129;
              *v129 = v40[2];
              v63[1] = v62;
              sub_10016A80(v122);
              v21 = 8388608.0;
              v22 = 255.0;
            }
          }
          --v79;
        }
        while ( v79 );
      }
      if ( (_BYTE)v110 )
      {
        switch ( v109 )
        {
          case 4:
            v64 = 2 * v126 - 2;
            break;
          case 5:
            v64 = 2 * v126;
            break;
          case 6:
            v64 = 3 * v126 - 6;
            break;
          case 7:
            v64 = 6 * v126 / 4;
            break;
          case 8:
            v64 = 0;
            break;
          default:
            v64 = v126;
            break;
        }
        sub_10016B00(v111, v109, v64);
      }
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v108 + 80))(v108, v126, v115, v106);
      v113 = 0;
      v114 = 0;
      v125 = 0;
      v123 = 0;
      v122[19] = -1;
      v108 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v96 + 48))(v96, -1, 0);
      if ( v123 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v123 + 8))(v123) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v123 + 16))(v123);
      if ( v113 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v113 + 8))(v113) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v113 + 16))(v113);
      v15 = v83;
      if ( !v83 )
        break;
      v14 = v82;
    }
  }
  (*(void (__thiscall **)(int *, _DWORD))(*a4 + 348))(a4, 0);
  (*(void (__thiscall **)(int *, _DWORD))(*a4 + 80))(a4, 0);
  return (*(int (__thiscall **)(int *))(*a4 + 88))(a4);
}
