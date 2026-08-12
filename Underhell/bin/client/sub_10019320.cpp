float *__usercall sub_10019320@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        void (__cdecl *a5)(int, int, _DWORD),
        int a6,
        float a7,
        int a8,
        float *a9,
        float *a10,
        float a11,
        float a12,
        float a13,
        float a14,
        int a15,
        float *a16,
        float a17)
{
  float *result; // eax
  int v18; // ecx
  int v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  int v23; // edi
  double v24; // st7
  double v25; // st5
  double v26; // st6
  double v27; // st5
  double v28; // rt1
  double v29; // st5
  double v30; // st7
  int v31; // eax
  int v32; // esi
  int v33; // ebx
  int v34; // edi
  double v35; // st7
  long double v36; // st7
  float *v37; // eax
  float *v38; // edi
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  double v43; // st7
  double v44; // st6
  double v45; // rt0
  double v46; // st5
  double v47; // st0
  double v48; // st2
  double v49; // st3
  double v50; // st5
  double v51; // st4
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  bool v56; // zf
  int v57; // eax
  int v58; // esi
  float v59; // [esp+40h] [ebp-2C8h]
  float v60; // [esp+48h] [ebp-2C0h]
  _DWORD *v61[44]; // [esp+4Ch] [ebp-2BCh] BYREF
  char v62; // [esp+FCh] [ebp-20Ch]
  int v63; // [esp+100h] [ebp-208h]
  int v64; // [esp+104h] [ebp-204h]
  char v65; // [esp+108h] [ebp-200h]
  _DWORD *v66; // [esp+10Ch] [ebp-1FCh] BYREF
  char v67; // [esp+118h] [ebp-1F0h]
  int v68; // [esp+11Ch] [ebp-1ECh]
  int v69; // [esp+120h] [ebp-1E8h]
  int v70; // [esp+124h] [ebp-1E4h]
  _DWORD *v71; // [esp+128h] [ebp-1E0h]
  int v72; // [esp+12Ch] [ebp-1DCh]
  char v73; // [esp+13Ch] [ebp-1CCh]
  _DWORD v74[44]; // [esp+140h] [ebp-1C8h] BYREF
  int v75; // [esp+1F0h] [ebp-118h]
  float *v76; // [esp+1F8h] [ebp-110h]
  float *v77; // [esp+200h] [ebp-108h]
  unsigned int *v78; // [esp+220h] [ebp-E8h]
  float v79; // [esp+234h] [ebp-D4h]
  float v80; // [esp+238h] [ebp-D0h]
  float v81; // [esp+23Ch] [ebp-CCh]
  float v82; // [esp+240h] [ebp-C8h]
  float v83; // [esp+244h] [ebp-C4h]
  float v84; // [esp+248h] [ebp-C0h]
  float v85; // [esp+24Ch] [ebp-BCh]
  float v86; // [esp+250h] [ebp-B8h]
  float v87; // [esp+254h] [ebp-B4h]
  int v88; // [esp+258h] [ebp-B0h]
  float v89; // [esp+25Ch] [ebp-ACh]
  float *v90; // [esp+260h] [ebp-A8h]
  int v91; // [esp+264h] [ebp-A4h]
  float v92; // [esp+268h] [ebp-A0h]
  float v93; // [esp+26Ch] [ebp-9Ch]
  float *v94; // [esp+274h] [ebp-94h]
  float v95; // [esp+278h] [ebp-90h]
  float v96; // [esp+27Ch] [ebp-8Ch]
  float v97; // [esp+280h] [ebp-88h]
  int v98; // [esp+284h] [ebp-84h]
  int v99; // [esp+288h] [ebp-80h]
  float v100; // [esp+28Ch] [ebp-7Ch]
  float v101; // [esp+290h] [ebp-78h]
  float v102; // [esp+294h] [ebp-74h]
  float v103; // [esp+298h] [ebp-70h]
  float v104; // [esp+29Ch] [ebp-6Ch]
  float v105; // [esp+2A0h] [ebp-68h]
  float v106; // [esp+2A4h] [ebp-64h] BYREF
  float v107; // [esp+2A8h] [ebp-60h] BYREF
  float v108; // [esp+2ACh] [ebp-5Ch]
  float v109; // [esp+2B0h] [ebp-58h]
  int v110; // [esp+2B4h] [ebp-54h]
  float v111; // [esp+2B8h] [ebp-50h] BYREF
  float v112; // [esp+2BCh] [ebp-4Ch]
  float v113; // [esp+2C0h] [ebp-48h]
  int v114; // [esp+2C4h] [ebp-44h]
  float v115; // [esp+2C8h] [ebp-40h]
  float v116; // [esp+2CCh] [ebp-3Ch] BYREF
  float v117; // [esp+2D0h] [ebp-38h]
  float v118; // [esp+2D4h] [ebp-34h]
  float v119; // [esp+2D8h] [ebp-30h]
  float v120; // [esp+2DCh] [ebp-2Ch]
  float v121; // [esp+2E0h] [ebp-28h]
  float v122; // [esp+2E4h] [ebp-24h]
  float v123; // [esp+2E8h] [ebp-20h]
  float v124; // [esp+2ECh] [ebp-1Ch]
  float v125; // [esp+2F0h] [ebp-18h]
  float v126; // [esp+2F4h] [ebp-14h] BYREF
  float v127; // [esp+2F8h] [ebp-10h]
  float v128; // [esp+2FCh] [ebp-Ch]
  float v129; // [esp+300h] [ebp-8h]
  float v130; // [esp+304h] [ebp-4h]
  float v131; // [esp+320h] [ebp+18h]
  float v132; // [esp+320h] [ebp+18h]
  int v133; // [esp+320h] [ebp+18h]

  v92 = 0.0;
  v93 = 0.0;
  result = (float *)sub_10017240(a2, a6, (int)a7, a8);
  if ( result )
  {
    v18 = *((_DWORD *)result + 4);
    if ( v18 )
    {
      v19 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v18 + 188))(
              v18,
              "$hdrcolorscale",
              &unk_1040322C);
      if ( v19 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 12))(v19, LODWORD(a17));
    }
    result = a10;
    v20 = *a10;
    v119 = *a10;
    v21 = a10[1];
    v120 = a10[1];
    v22 = a10[2];
    v121 = a10[2];
    if ( a15 >= 2 )
    {
      v23 = (int)((double)a15 * 3.141592653589793);
      if ( v23 > 8 * a3 )
        v23 = 8 * a3;
      v59 = v20 * v20 + v21 * v21 + v22 * v22;
      v24 = off_103EDFE0(v59) * 0.01 * 3.141592653589793;
      v131 = v24;
      if ( v24 < 0.5 )
      {
        v24 = 0.5;
        v131 = 0.5;
      }
      v25 = 1.0 / (double)(v23 - 1);
      v125 = v25;
      v89 = v24 * v25 * 0.125;
      v113 = fmod(a13 * a14, 1.0);
      v112 = v131 * a12 * 0.125;
      v26 = v119 * 0.5;
      v99 = 8 * (int)((double)(a3 - 1) * v125 * 65536.0);
      v119 = v26;
      v27 = v120 * 0.5;
      v114 = 0;
      v120 = v27;
      v28 = v27;
      v29 = 0.5 * v121;
      v121 = v29;
      v100 = *a9 + v26;
      v101 = a9[1] + v28;
      v102 = a9[2] + v29;
      v85 = 0.0;
      v86 = 0.0;
      v87 = 1.0;
      v79 = v26;
      v80 = v28;
      v81 = v29;
      v60 = v26 * v26 + v28 * v28 + v29 * v29;
      v30 = off_103EDFE0(v60);
      v132 = v30;
      v103 = v30;
      v104 = v30;
      v105 = v112;
      v116 = v100 + v30;
      v117 = v101 + v30;
      v118 = v102 + v112;
      v107 = v100 - v30;
      v108 = v101 - v30;
      v109 = v102 - v112;
      result = (float *)(*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 124))(
                          dword_1041315C,
                          &v107,
                          &v116);
      if ( result )
      {
        result = (float *)(*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 132))(
                            dword_1041315C,
                            &v107,
                            &v116);
        if ( !(_BYTE)result )
        {
          v122 = v120;
          v123 = -v119;
          v124 = 0.0;
          off_103EDFEC();
          v122 = v122 * v132;
          v91 = v23 / 8;
          v110 = v23 / 8;
          v123 = v123 * v132;
          v124 = v132 * v124;
          v31 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
          v32 = v31;
          v88 = v31;
          if ( v31 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31);
          v33 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v32 + 224))(
                  v32,
                  1,
                  0,
                  0,
                  0,
                  a1);
          sub_10016C20((int)v61);
          v63 = v33;
          v65 = 1;
          v64 = 3;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 40))(v33, 3);
          (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v63 + 68))(v63, 2 * v23 + 2, 2 * v23 + 2, v61);
          v66 = v61[41];
          v71 = v61[39];
          v68 = v33 + 4;
          v67 = v62;
          v70 = 0;
          v69 = 2 * v23 + 2;
          v73 = 0;
          v72 = 0;
          sub_10016990((int)v74, v33, v69, v61);
          v72 = 0;
          sub_10016A00(v74);
          v34 = v23 + 1;
          v133 = 0;
          v98 = v34;
          if ( v34 > 0 )
          {
            v94 = &v111;
            v90 = &v106;
            do
            {
              v35 = (double)v133 * v125;
              v129 = v35;
              v130 = (v35 + v35) * 3.141592653589793;
              v36 = sin(v130);
              v37 = v90;
              *v94 = cos(v130);
              *v37 = v36;
              v126 = v119 * v106 + v122 * v111 + v100;
              v127 = v123 * v111 + v120 * v106 + v101;
              v128 = v106 * v121 + v111 * v124 + v102;
              if ( 0.0 != v112 )
              {
                v38 = (float *)(a4 + 4 * ((v114 >> 16) & 0x7F));
                v130 = v112 * *v38;
                v39 = (float *)sub_10142300();
                v126 = *v39 * v130 + v126;
                v127 = v39[1] * v130 + v127;
                v128 = v130 * v39[2] + v128;
                v130 = cos(v129 * 3.141592653589793 * 3.0 * 8.0 + a13) * (*v38 * v112);
                v40 = (float *)sub_101422F0();
                v34 = v98;
                v126 = v130 * *v40 + v126;
                v127 = v40[1] * v130 + v127;
                v128 = v130 * v40[2] + v128;
              }
              sub_1013B9F0(&v126, &v107);
              if ( v133 )
              {
                v116 = v107 - v92;
                v117 = v108 - v93;
                v118 = 0.0;
                off_103EDFEC();
                v129 = v116;
                v41 = (float *)sub_10142300();
                v95 = *v41 * v129;
                v96 = v41[1] * v129;
                v97 = v129 * v41[2];
                v42 = (float *)sub_101422F0();
                v43 = -v117;
                v44 = v43 * *v42 + v95;
                v45 = v42[1] * v43 + v96;
                v46 = v43 * v42[2] + v97;
                v103 = v44 * a11 + v126;
                v104 = v45 * a11 + v127;
                v105 = v46 * a11 + v128;
                v47 = -a11;
                v48 = v126 + v44 * v47;
                v82 = v48;
                v49 = v127 + v45 * v47;
                v83 = v49;
                v50 = v47 * v46 + v128;
                v84 = v50;
                v51 = v113 + v89;
                v113 = v51;
                v115 = a16[2] * 255.0 + 8388608.0;
                v130 = a16[1] * 255.0 + 8388608.0;
                v129 = 255.0 * *a16 + 8388608.0;
                *v78 = LOBYTE(v115) | ((LOBYTE(v130) | ((LOBYTE(v129) | 0xFFFFFF00) << 8)) << 8);
                v52 = v77;
                *v77 = 1.0;
                v52[1] = v51;
                v53 = v76;
                *v76 = v48;
                v53[1] = v49;
                v53[2] = v50;
                sub_10016A80(v74);
                v130 = a16[2] * 255.0 + 8388608.0;
                v129 = a16[1] * 255.0 + 8388608.0;
                v115 = 255.0 * *a16 + 8388608.0;
                *v78 = LOBYTE(v130) | ((LOBYTE(v129) | ((LOBYTE(v115) | 0xFFFFFF00) << 8)) << 8);
                v54 = v77;
                *v77 = 0.0;
                v54[1] = v113;
                v55 = v76;
                *v76 = v103;
                v55[1] = v104;
                v55[2] = v105;
                sub_10016A80(v74);
              }
              v114 += v99;
              v92 = v107;
              v56 = v110-- == 1;
              v93 = v108;
              if ( v56 && 0.0 != a12 )
              {
                v110 = v91;
                a5(a4, a3, 1.0);
              }
              ++v133;
            }
            while ( v133 < v34 );
          }
          if ( v65 )
          {
            switch ( v64 )
            {
              case 4:
                v57 = 2 * v75 - 2;
                break;
              case 5:
                v57 = 2 * v75;
                break;
              case 6:
                v57 = 3 * v75 - 6;
                break;
              case 7:
                v57 = 6 * v75 / 4;
                break;
              case 8:
                v57 = 0;
                break;
              default:
                v57 = v75;
                break;
            }
            sub_10016B00(&v66, v64, v57);
          }
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v63 + 80))(v63, v75, v70);
          v68 = 0;
          v69 = 0;
          v74[43] = 0;
          v74[41] = 0;
          v74[19] = -1;
          v63 = 0;
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v33 + 48))(v33, -1, 0);
          sub_10016BC0(v61);
          v58 = v88;
          (*(void (__thiscall **)(int))(*(_DWORD *)v88 + 12))(v88);
          return (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v58 + 4))(v58);
        }
      }
    }
  }
  return result;
}
