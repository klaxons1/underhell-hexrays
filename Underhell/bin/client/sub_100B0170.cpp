void __userpurge sub_100B0170(int a1@<ecx>, _DWORD **a2@<edi>, char a3)
{
  double v4; // st7
  float *v5; // eax
  double v6; // st6
  float *v7; // eax
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  float *v14; // eax
  double v15; // st5
  double v16; // rt2
  double v17; // st5
  double v18; // rtt
  double v19; // st5
  float *v20; // eax
  float *v21; // eax
  double v22; // st5
  double v23; // rt2
  double v24; // st5
  double v25; // rtt
  double v26; // st5
  float *v27; // eax
  float *v28; // eax
  double v29; // st5
  double v30; // rt2
  double v31; // st5
  double v32; // rtt
  double v33; // st5
  float *v34; // eax
  float *v35; // eax
  double v36; // st5
  double v37; // rt2
  double v38; // st5
  double v39; // rtt
  double v40; // st5
  float *v41; // eax
  int v42; // eax
  int v43; // esi
  int v44; // esi
  double v45; // st5
  double v46; // rt2
  double v47; // st5
  double v48; // rtt
  double v49; // st5
  float *v50; // eax
  float *v51; // eax
  double v52; // st5
  double v53; // rt1
  double v54; // st5
  double v55; // rt2
  double v56; // st5
  float *v57; // eax
  double v58; // st5
  double v59; // rt0
  double v60; // st5
  double v61; // rt1
  double v62; // st5
  float *v63; // eax
  double v64; // st5
  double v65; // rtt
  double v66; // st5
  double v67; // rt0
  double v68; // st5
  float v69; // [esp+44h] [ebp-45Ch]
  float v70; // [esp+44h] [ebp-45Ch]
  _DWORD *v72[44]; // [esp+54h] [ebp-44Ch] BYREF
  char v73; // [esp+104h] [ebp-39Ch]
  int v74; // [esp+108h] [ebp-398h]
  int v75; // [esp+10Ch] [ebp-394h]
  char v76; // [esp+110h] [ebp-390h]
  _DWORD *v77; // [esp+114h] [ebp-38Ch]
  char v78; // [esp+120h] [ebp-380h]
  int v79; // [esp+124h] [ebp-37Ch]
  int v80; // [esp+128h] [ebp-378h]
  int v81; // [esp+12Ch] [ebp-374h]
  _DWORD *v82; // [esp+130h] [ebp-370h]
  int v83; // [esp+134h] [ebp-36Ch]
  char v84; // [esp+144h] [ebp-35Ch]
  _DWORD v85[46]; // [esp+148h] [ebp-358h] BYREF
  float *v86; // [esp+200h] [ebp-2A0h]
  unsigned int *v87; // [esp+228h] [ebp-278h]
  _DWORD *v88[44]; // [esp+23Ch] [ebp-264h] BYREF
  char v89; // [esp+2ECh] [ebp-1B4h]
  int v90; // [esp+2F0h] [ebp-1B0h]
  int v91; // [esp+2F4h] [ebp-1ACh]
  char v92; // [esp+2F8h] [ebp-1A8h]
  _DWORD *v93; // [esp+2FCh] [ebp-1A4h] BYREF
  char v94; // [esp+308h] [ebp-198h]
  int v95; // [esp+30Ch] [ebp-194h]
  int v96; // [esp+310h] [ebp-190h]
  int v97; // [esp+314h] [ebp-18Ch]
  _DWORD *v98; // [esp+318h] [ebp-188h]
  int v99; // [esp+31Ch] [ebp-184h]
  char v100; // [esp+32Ch] [ebp-174h]
  _DWORD v101[44]; // [esp+330h] [ebp-170h] BYREF
  int v102; // [esp+3E0h] [ebp-C0h]
  float *v103; // [esp+3E8h] [ebp-B8h]
  float *v104; // [esp+3F0h] [ebp-B0h]
  int *v105; // [esp+410h] [ebp-90h]
  int v106; // [esp+424h] [ebp-7Ch] BYREF
  float v107; // [esp+428h] [ebp-78h]
  int v108; // [esp+42Ch] [ebp-74h] BYREF
  _DWORD *v109; // [esp+430h] [ebp-70h]
  int v110; // [esp+434h] [ebp-6Ch]
  float v111; // [esp+438h] [ebp-68h] BYREF
  float v112; // [esp+43Ch] [ebp-64h]
  float v113; // [esp+440h] [ebp-60h]
  float v114; // [esp+444h] [ebp-5Ch]
  float v115; // [esp+448h] [ebp-58h]
  float v116; // [esp+44Ch] [ebp-54h]
  float v117; // [esp+450h] [ebp-50h]
  float v118; // [esp+454h] [ebp-4Ch]
  float v119; // [esp+458h] [ebp-48h]
  int v120; // [esp+45Ch] [ebp-44h]
  float v121; // [esp+460h] [ebp-40h] BYREF
  float v122; // [esp+464h] [ebp-3Ch]
  float v123; // [esp+468h] [ebp-38h]
  float v124; // [esp+46Ch] [ebp-34h]
  int v125; // [esp+470h] [ebp-30h] BYREF
  float v126; // [esp+474h] [ebp-2Ch]
  float v127; // [esp+478h] [ebp-28h]
  float v128; // [esp+47Ch] [ebp-24h] BYREF
  float v129; // [esp+480h] [ebp-20h]
  float v130; // [esp+484h] [ebp-1Ch]
  float v131; // [esp+488h] [ebp-18h] BYREF
  float v132; // [esp+48Ch] [ebp-14h]
  float v133; // [esp+490h] [ebp-10h]
  float v134; // [esp+494h] [ebp-Ch]
  float v135; // [esp+498h] [ebp-8h]
  float v136; // [esp+49Ch] [ebp-4h]
  char v137; // [esp+4ABh] [ebp+Bh]

  v120 = a1;
  if ( *(_DWORD *)(dword_104113F4 + 48) )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      v111 = *(float *)(a1 + 20);
      v112 = *(float *)(a1 + 24);
      v4 = *(float *)(a1 + 28);
    }
    else
    {
      v5 = (float *)sub_101422C0();
      v6 = *(float *)(a1 + 8) - v5[1];
      v4 = *(float *)(a1 + 12) - v5[2];
      v111 = *(float *)(a1 + 4) - *v5;
      v112 = v6;
    }
    v113 = v4;
    off_103EDFEC();
    v7 = (float *)sub_101422E0();
    v107 = v7[1] * v112 + *v7 * v111 + v7[2] * v113;
    sub_100AFE60(a1, &v111, a3);
    if ( 0.0 != *(float *)(a1 + 148) )
    {
      if ( (unsigned __int8)sub_100EC2E0() || (v137 = 0, *(_DWORD *)(dword_104113F4 + 48) == 2) )
        v137 = 1;
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v9 = v8;
      if ( v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
      v110 = 0;
      if ( *(int *)(a1 + 136) > 0 )
      {
        v10 = (_DWORD *)(a1 + 60);
        v109 = v10;
        do
        {
          (*(void (__stdcall **)(float, _DWORD *, int *, int *, float *))(*(_DWORD *)v120 + 8))(
            COERCE_FLOAT(LODWORD(v107)),
            v10 - 5,
            &v106,
            &v108,
            &v121);
          if ( v121 * v121 + v122 * v122 + v123 * v123 >= 0.0000099999997 )
          {
            (*(void (__thiscall **)(int, float *, int, int, int *, float *, float *))(*(_DWORD *)v120 + 12))(
              v120,
              &v111,
              v106,
              v108,
              &v125,
              &v128,
              &v131);
            v69 = (v128 + v131) * (v128 + v131) + (v129 + v132) * (v129 + v132) + (v130 + v133) * (v130 + v133);
            v70 = off_103EDFE0(v69);
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 40))(dword_10439968);
            if ( !(unsigned __int8)sub_10135B60(v11, 5, (int)&v125, v70) )
            {
              if ( !*v10 )
                *v10 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                           + 280))(
                         dword_1047C96C,
                         "sprites/light_glow02_add_noz",
                         "ClientEffect textures",
                         1,
                         0);
              v12 = (*(int (__thiscall **)(_DWORD, const char *, void *, _DWORD **))(*(_DWORD *)*v10 + 188))(
                      *v10,
                      "$hdrcolorscale",
                      &unk_1042F7F0,
                      a2);
              if ( v12 )
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 12))(v12, *(float *)(v120 + 144));
              v13 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 224))(
                      v9,
                      0,
                      0,
                      0,
                      *v10);
              sub_10016C20((int)v88);
              v90 = v13;
              v92 = 1;
              v91 = 7;
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 40))(v13, 2);
              (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v90 + 68))(v90, 4, 6, v88);
              v98 = v88[39];
              v95 = v13 + 4;
              v94 = v89;
              v97 = 0;
              v96 = 6;
              v100 = 0;
              v93 = v88[41];
              v99 = 0;
              sub_10016990((int)v101, v13, 4, v88);
              v99 = 0;
              sub_10016A00(v101);
              v14 = v103;
              v15 = *(float *)&v125 - v131 + v128;
              v114 = v15;
              v16 = v15;
              v17 = v126 - v132 + v129;
              v115 = v17;
              v18 = v17;
              v19 = v127 - v133 + v130;
              v116 = v19;
              *v103 = v16;
              v14[1] = v18;
              v14[2] = v19;
              v136 = v123 * 255.0 + 8388608.0;
              v135 = v122 * 255.0 + 8388608.0;
              v134 = 255.0 * v121 + 8388608.0;
              v124 = 8388863.0;
              *v105 = LOBYTE(v136) | ((LOBYTE(v135) | ((LOBYTE(v134) | (LOBYTE(v124) << 8)) << 8)) << 8);
              v20 = v104;
              *v104 = 0.0;
              v20[1] = 1.0;
              sub_10016A80(v101);
              v21 = v103;
              v22 = *(float *)&v125 + v131 + v128;
              v114 = v22;
              v23 = v22;
              v24 = v126 + v132 + v129;
              v115 = v24;
              v25 = v24;
              v26 = v127 + v133 + v130;
              v116 = v26;
              *v103 = v23;
              v21[1] = v25;
              v21[2] = v26;
              v124 = v123 * 255.0 + 8388608.0;
              v134 = v122 * 255.0 + 8388608.0;
              v135 = 255.0 * v121 + 8388608.0;
              v136 = 8388863.0;
              *v105 = LOBYTE(v124) | ((LOBYTE(v134) | ((LOBYTE(v135) | (LOBYTE(v136) << 8)) << 8)) << 8);
              v27 = v104;
              *v104 = 1.0;
              v27[1] = 1.0;
              sub_10016A80(v101);
              v28 = v103;
              v29 = *(float *)&v125 + v131 - v128;
              v114 = v29;
              v30 = v29;
              v31 = v126 + v132 - v129;
              v115 = v31;
              v32 = v31;
              v33 = v127 + v133 - v130;
              v116 = v33;
              *v103 = v30;
              v28[1] = v32;
              v28[2] = v33;
              v124 = v123 * 255.0 + 8388608.0;
              v134 = v122 * 255.0 + 8388608.0;
              v135 = 255.0 * v121 + 8388608.0;
              v136 = 8388863.0;
              *v105 = LOBYTE(v124) | ((LOBYTE(v134) | ((LOBYTE(v135) | (LOBYTE(v136) << 8)) << 8)) << 8);
              v34 = v104;
              *v104 = 1.0;
              v34[1] = 0.0;
              sub_10016A80(v101);
              v35 = v103;
              v36 = *(float *)&v125 - v131 - v128;
              v114 = v36;
              v37 = v36;
              v38 = v126 - v132 - v129;
              v115 = v38;
              v39 = v38;
              v40 = v127 - v133 - v130;
              v116 = v40;
              *v103 = v37;
              v35[1] = v39;
              v35[2] = v40;
              v124 = v123 * 255.0 + 8388608.0;
              v134 = v122 * 255.0 + 8388608.0;
              v135 = 255.0 * v121 + 8388608.0;
              v136 = 8388863.0;
              *v105 = LOBYTE(v124) | ((LOBYTE(v134) | ((LOBYTE(v135) | (LOBYTE(v136) << 8)) << 8)) << 8);
              v41 = v104;
              *v104 = 0.0;
              v41[1] = 0.0;
              sub_10016A80(v101);
              if ( v92 )
              {
                switch ( v91 )
                {
                  case 4:
                    v42 = 2 * v102 - 2;
                    break;
                  case 5:
                    v42 = 2 * v102;
                    break;
                  case 6:
                    v42 = 3 * v102 - 6;
                    break;
                  case 7:
                    v42 = 6 * v102 / 4;
                    break;
                  case 8:
                    v42 = 0;
                    break;
                  default:
                    v42 = v102;
                    break;
                }
                sub_10016B00(&v93, v91, v42);
              }
              a2 = v88;
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v90 + 80))(v90, v102, v97);
              v95 = 0;
              v96 = 0;
              v101[43] = 0;
              v101[41] = 0;
              v101[19] = -1;
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v90 + 48))(v90, -1, 0);
              v90 = 0;
              if ( v137 )
              {
                v43 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                          + 280))(
                        dword_1047C96C,
                        "debug/debugwireframevertexcolor",
                        "Other textures",
                        1,
                        0);
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 36))(v9, v43, 0);
                v44 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v9 + 224))(v9, 0, 0, 0, v43);
                sub_10016C20((int)v72);
                v74 = v44;
                v76 = 1;
                v75 = 7;
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v44 + 40))(v44, 2);
                (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v74 + 68))(v74, 4, 6, v72);
                v82 = v72[39];
                v79 = v44 + 4;
                v81 = 0;
                v80 = 6;
                v84 = 0;
                v77 = v72[41];
                v78 = v73;
                v83 = 0;
                sub_10016990((int)v85, v44, 4, v72);
                v83 = 0;
                sub_10016A00(v85);
                v45 = *(float *)&v125 - v131 + v128;
                v117 = v45;
                v46 = v45;
                v47 = v126 - v132 + v129;
                v118 = v47;
                v48 = v47;
                v49 = v127 - v133 + v130;
                v119 = v49;
                v50 = v86;
                *v86 = v46;
                v50[1] = v48;
                v50[2] = v49;
                v134 = 8388608.0;
                v135 = 8388608.0;
                v136 = 8388863.0;
                *v87 = LOBYTE(v134) | ((LOBYTE(v135) | ((LOBYTE(v136) | 0xFFFFFF00) << 8)) << 8);
                sub_10016A80(v85);
                v51 = v86;
                v52 = *(float *)&v125 + v131 + v128;
                v117 = v52;
                v53 = v52;
                v54 = v126 + v132 + v129;
                v118 = v54;
                v55 = v54;
                v56 = v127 + v133 + v130;
                v119 = v56;
                *v86 = v53;
                v51[1] = v55;
                v51[2] = v56;
                v134 = 8388608.0;
                v135 = 8388608.0;
                v136 = 8388863.0;
                *v87 = LOBYTE(v134) | ((LOBYTE(v135) | ((LOBYTE(v136) | 0xFFFFFF00) << 8)) << 8);
                sub_10016A80(v85);
                v57 = v86;
                v58 = *(float *)&v125 + v131 - v128;
                v117 = v58;
                v59 = v58;
                v60 = v126 + v132 - v129;
                v118 = v60;
                v61 = v60;
                v62 = v127 + v133 - v130;
                v119 = v62;
                *v86 = v59;
                v57[1] = v61;
                v57[2] = v62;
                v134 = 8388608.0;
                v135 = 8388608.0;
                v136 = 8388863.0;
                *v87 = LOBYTE(v134) | ((LOBYTE(v135) | ((LOBYTE(v136) | 0xFFFFFF00) << 8)) << 8);
                sub_10016A80(v85);
                v63 = v86;
                v64 = *(float *)&v125 - v131 - v128;
                v117 = v64;
                v65 = v64;
                v66 = v126 - v132 - v129;
                v118 = v66;
                v67 = v66;
                v68 = v127 - v133 - v130;
                v119 = v68;
                *v86 = v65;
                v63[1] = v67;
                v63[2] = v68;
                v134 = 8388608.0;
                v135 = 8388608.0;
                v136 = 8388863.0;
                *v87 = LOBYTE(v134) | ((LOBYTE(v135) | ((LOBYTE(v136) | 0xFFFFFF00) << 8)) << 8);
                sub_10016A80(v85);
                sub_10016E00((int)v72, 0, 1);
                sub_10016BC0(v72);
              }
              sub_10016BC0(v88);
              v10 = v109;
            }
          }
          v10 += 6;
          ++v110;
          v109 = v10;
        }
        while ( v110 < *(_DWORD *)(v120 + 136) );
      }
      if ( v9 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
      }
    }
  }
}
