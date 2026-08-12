int __usercall sub_10018260@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        int a9,
        int a10,
        float *a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        int a17,
        char a18,
        float *a19,
        int a20,
        float a21)
{
  int result; // eax
  int v22; // esi
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // edi
  int v29; // esi
  double v30; // st7
  int v31; // edi
  double v32; // st7
  int v33; // eax
  double v34; // st4
  double v35; // st5
  int v36; // esi
  double v37; // st7
  double v38; // st6
  int v39; // eax
  double v40; // st7
  int v41; // eax
  double v42; // st6
  double v43; // st5
  double v44; // st4
  double v45; // st3
  double v46; // st2
  double v47; // st1
  int v48; // eax
  double v49; // st7
  double v50; // st7
  double v51; // st6
  int v52; // ebx
  double v53; // st5
  double v54; // st4
  double v55; // rt0
  double v56; // st4
  int v57; // esi
  double v58; // st6
  double v59; // st5
  int v60; // esi
  int v61; // edi
  int v62; // ebx
  float *v63; // eax
  long double v64; // st7
  float *v65; // eax
  double v66; // st7
  float *v67; // eax
  double v68; // st7
  float *v69; // eax
  float *v70; // eax
  double v71; // st7
  float v72; // [esp+1Ch] [ebp-324h]
  float v73; // [esp+1Ch] [ebp-324h]
  int v74; // [esp+20h] [ebp-320h]
  void **v76; // [esp+2Ch] [ebp-314h] BYREF
  char v77[208]; // [esp+38h] [ebp-308h] BYREF
  int v78; // [esp+108h] [ebp-238h]
  int v79; // [esp+1D0h] [ebp-170h]
  int v80; // [esp+258h] [ebp-E8h]
  int v81; // [esp+25Ch] [ebp-E4h] BYREF
  float v82; // [esp+260h] [ebp-E0h]
  float v83; // [esp+264h] [ebp-DCh]
  float v84; // [esp+268h] [ebp-D8h]
  float v85; // [esp+26Ch] [ebp-D4h]
  int v86; // [esp+270h] [ebp-D0h]
  int v87; // [esp+274h] [ebp-CCh]
  int v88[4]; // [esp+278h] [ebp-C8h] BYREF
  float v89; // [esp+288h] [ebp-B8h]
  float v90; // [esp+28Ch] [ebp-B4h]
  float v91; // [esp+290h] [ebp-B0h]
  float v92; // [esp+294h] [ebp-ACh]
  float *v93; // [esp+298h] [ebp-A8h]
  int v94[3]; // [esp+29Ch] [ebp-A4h] BYREF
  float v95; // [esp+2A8h] [ebp-98h]
  float v96; // [esp+2ACh] [ebp-94h]
  float v97; // [esp+2B0h] [ebp-90h]
  float v98; // [esp+2B4h] [ebp-8Ch]
  float v99; // [esp+2B8h] [ebp-88h]
  float v100; // [esp+2BCh] [ebp-84h]
  int v101; // [esp+2C0h] [ebp-80h] BYREF
  int v102; // [esp+2C4h] [ebp-7Ch]
  int v103; // [esp+2C8h] [ebp-78h]
  float v104; // [esp+2CCh] [ebp-74h]
  float v105; // [esp+2D0h] [ebp-70h]
  int v106; // [esp+2D4h] [ebp-6Ch] BYREF
  float v107; // [esp+2D8h] [ebp-68h]
  float v108; // [esp+2DCh] [ebp-64h]
  float v109; // [esp+2E0h] [ebp-60h]
  int v110; // [esp+2E4h] [ebp-5Ch] BYREF
  float v111; // [esp+2E8h] [ebp-58h]
  int v112; // [esp+2ECh] [ebp-54h]
  int v113; // [esp+2F0h] [ebp-50h]
  float v114; // [esp+2F4h] [ebp-4Ch] BYREF
  float v115; // [esp+2F8h] [ebp-48h]
  float v116; // [esp+2FCh] [ebp-44h]
  int v117; // [esp+300h] [ebp-40h]
  float v118; // [esp+304h] [ebp-3Ch] BYREF
  int v119; // [esp+308h] [ebp-38h]
  int v120; // [esp+30Ch] [ebp-34h]
  int v121; // [esp+310h] [ebp-30h]
  int v122; // [esp+314h] [ebp-2Ch]
  int v123; // [esp+318h] [ebp-28h] BYREF
  int v124; // [esp+31Ch] [ebp-24h]
  int v125; // [esp+320h] [ebp-20h]
  int v126; // [esp+324h] [ebp-1Ch]
  float v127; // [esp+328h] [ebp-18h]
  float v128; // [esp+32Ch] [ebp-14h]
  float v129; // [esp+330h] [ebp-10h]
  float v130; // [esp+334h] [ebp-Ch]
  float v131; // [esp+338h] [ebp-8h]
  int v132; // [esp+33Ch] [ebp-4h]
  int v133; // [esp+354h] [ebp+14h]
  int v134; // [esp+35Ch] [ebp+1Ch]
  int v135; // [esp+35Ch] [ebp+1Ch]
  float v136; // [esp+35Ch] [ebp+1Ch]
  float v137; // [esp+35Ch] [ebp+1Ch]

  result = sub_10017240(a2, a5, (int)a8, a9);
  v22 = result;
  if ( result )
  {
    v23 = a17;
    if ( a17 >= 2 )
    {
      v24 = *(_DWORD *)(result + 16);
      if ( v24 )
      {
        v25 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v24 + 188))(
                v24,
                "$hdrcolorscale",
                &unk_10403220);
        if ( v25 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 12))(v25, LODWORD(a21));
      }
      if ( a17 > a3 )
      {
        a17 = a3;
        v23 = a3;
      }
      if ( (a18 & 0x10) != 0 && v23 < 16 )
        a17 = 16;
      v26 = *(_DWORD *)(v22 + 16);
      v27 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970, a1);
      v28 = v27;
      v113 = v27;
      if ( v27 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
      v76 = &CBeamSegDraw::`vftable';
      sub_10016C20((int)v77);
      v132 = a17 - 1;
      v117 = a10 - 1;
      v80 = 0;
      sub_10233F90(v28, (a10 - 1) * (a17 - 1), v26, 0, 0);
      v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 40))(dword_10413178, a6);
      v122 = 0;
      if ( v29 )
      {
        sub_10124880(3);
        v122 = *(_DWORD *)(v29 + 16);
      }
      if ( a13 == a12 )
        v30 = 0.0;
      else
        v30 = (a13 - a12) / (double)a10;
      v31 = (int)a11;
      v105 = v30;
      v32 = *a11 - a11[3 * a10 - 3];
      v33 = (int)&a11[3 * a10 - 3];
      v34 = a11[1] - *(float *)(v33 + 4);
      v35 = a11[2] - *(float *)(v33 + 8);
      v72 = v35 * v35 + v34 * v34 + v32 * v32;
      off_103EDFE0(v72);
      v36 = 0;
      *(float *)&v119 = 0.0;
      v134 = 0;
      *(float *)&v120 = 0.0;
      *(float *)&v121 = 0.0;
      if ( v117 > 0 )
      {
        v109 = 1.0 / (double)v132;
        v84 = fmod(a15 * a16, 1.0);
        v86 = a18 & 0x40;
        v90 = (float)(a3 - 1);
        do
        {
          if ( v36 )
          {
            v39 = v31 + 12 * v36;
            v110 = *(int *)(v39 - 12);
            v111 = *(float *)(v39 - 8);
            v112 = *(int *)(v39 - 4);
          }
          else
          {
            v37 = *(float *)v31;
            v110 = *(int *)v31;
            v38 = *(float *)(v31 + 4);
            v111 = *(float *)(v31 + 4);
            v112 = *(int *)(v31 + 8);
            v121 = v112;
            *(float *)&v119 = v37;
            *(float *)&v120 = v38;
          }
          v40 = *(float *)(v31 + 12 * v36);
          v41 = v31 + 12 * v36;
          v88[0] = *(int *)v41;
          v42 = *(float *)(v41 + 4);
          v88[1] = *(int *)(v41 + 4);
          v43 = *(float *)(v41 + 8);
          v88[2] = *(int *)(v41 + 8);
          v44 = *(float *)(v41 + 12);
          v94[0] = *(int *)(v41 + 12);
          v45 = *(float *)(v41 + 16);
          v94[1] = *(int *)(v41 + 16);
          v46 = *(float *)(v41 + 20);
          v94[2] = *(int *)(v41 + 20);
          if ( v36 + 2 < v117 )
          {
            v48 = v31 + 12 * (v36 + 2);
            v106 = *(int *)v48;
            v107 = *(float *)(v48 + 4);
            v47 = *(float *)(v48 + 8);
          }
          else
          {
            v106 = *(int *)(v41 + 12);
            v107 = *(float *)(v41 + 16);
            v47 = *(float *)(v41 + 20);
          }
          v108 = v47;
          v73 = (v46 - v43) * (v46 - v43) + (v45 - v42) * (v45 - v42) + (v44 - v40) * (v44 - v40);
          v49 = off_103EDFE0(v73) * 0.01;
          *(float *)&v133 = v49;
          if ( v49 < 0.5 )
          {
            v49 = 0.5;
            *(float *)&v133 = 0.5;
          }
          v85 = v109 * v49;
          v115 = v84;
          if ( (a18 & 0x10) != 0 )
          {
            v50 = v109;
            a14 = a14 * 100.0;
            *(float *)&v133 = (double)a17 * 0.1;
          }
          else
          {
            v51 = v49;
            v50 = v109;
            a14 = v51 * a14;
          }
          v87 = (int)(v90 * v50 * 65536.0);
          v52 = v87;
          if ( (a18 & 0x10) != 0 )
            v52 = 0;
          if ( v86 )
          {
            v53 = 0.0;
            v54 = 0.0;
          }
          else
          {
            v54 = 1.0;
            v53 = 0.0;
          }
          v55 = v54;
          v131 = 1.0;
          v56 = *a19;
          v132 = v36 + 1;
          v57 = 1;
          *(float *)&v81 = v56 * v55;
          v82 = v55 * a19[1];
          v83 = v55 * a19[2];
          v128 = v83;
          v126 = v81;
          v58 = v53;
          v127 = v82;
          v59 = (double)v134;
          v135 = 1;
          v89 = v59 * v105 + a12;
          v91 = a12 + v105 * (double)v132;
          v104 = v58;
          if ( a17 > 1 )
          {
            while ( 1 )
            {
              v116 = v50 * (double)v135;
              *(float *)&v101 = v58;
              v102 = v101;
              v103 = v101;
              sub_101EF230((int)&v110, (int)v88, (int)v94, (int)&v106, v116, (int)&v101);
              v123 = v101;
              v124 = v102;
              v125 = v103;
              if ( v122 )
              {
                v95 = *(float *)&v101 - *(float *)&v119;
                v96 = *(float *)&v102 - *(float *)&v120;
                v97 = *(float *)&v103 - *(float *)&v121;
                off_103EDFEC();
                v63 = (float *)sub_101422C0();
                v98 = *v63 - *(float *)&v123;
                v99 = v63[1] - *(float *)&v124;
                v100 = v63[2] - *(float *)&v125;
                off_103EDFEC();
                v64 = fabs(v98 * v95 + v99 * v96 + v100 * v97);
                if ( flt_103D7A94 < v64 && v104 < v64 )
                  v104 = v64;
                v119 = v123;
                v120 = v124;
                v121 = v125;
              }
              if ( 0.0 != a14 )
              {
                v136 = a14 * *(float *)(a4 + 4 * (v52 >> 16));
                if ( (a18 & 0x10) != 0 )
                {
                  v93 = &v118;
                  v88[3] = (int)&v114;
                  v92 = v116 * 3.141592653589793 * *(float *)&v133 + a15;
                  v118 = cos(v92);
                  v114 = sin(v92);
                  v65 = (float *)sub_10142300();
                  v66 = v114 * v136;
                  *(float *)&v123 = *v65 * v66 + *(float *)&v123;
                  *(float *)&v124 = v65[1] * v66 + *(float *)&v124;
                  *(float *)&v125 = v66 * v65[2] + *(float *)&v125;
                  v67 = (float *)sub_101422F0();
                  v31 = (int)a11;
                  v68 = v118 * v136;
                  *(float *)&v123 = *v67 * v68 + *(float *)&v123;
                  *(float *)&v124 = v67[1] * v68 + *(float *)&v124;
                  *(float *)&v125 = v68 * v67[2] + *(float *)&v125;
                }
                else
                {
                  v69 = (float *)sub_10142300();
                  *(float *)&v123 = *v69 * v136 + *(float *)&v123;
                  *(float *)&v124 = v69[1] * v136 + *(float *)&v124;
                  *(float *)&v125 = v136 * v69[2] + *(float *)&v125;
                  v137 = cos(v116 * 3.141592653589793 * 3.0 + a15) * (a14 * *(float *)(a4 + 4 * (v52 >> 16)));
                  v70 = (float *)sub_101422F0();
                  v31 = (int)a11;
                  *(float *)&v123 = v137 * *v70 + *(float *)&v123;
                  *(float *)&v124 = v70[1] * v137 + *(float *)&v124;
                  *(float *)&v125 = v137 * v70[2] + *(float *)&v125;
                }
              }
              v71 = a12;
              if ( a13 != a12 )
                v71 = v89 + (v91 - v89) * v116;
              v130 = v71 + v71;
              v129 = v115;
              sub_10234090(&v123);
              v52 += v87;
              v135 = ++v57;
              v115 = v115 + v85;
              if ( v57 >= a17 )
                break;
              v50 = v109;
              v58 = 0.0;
            }
          }
          v36 = v132;
          v134 = v132;
        }
        while ( v132 < v117 );
      }
      result = sub_10233EF0(&v76);
      v60 = v122;
      v61 = v113;
      v62 = v74;
      if ( v122 )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v113 + 36))(v113, v122, 0);
        result = sub_10017340(v62, v60, (float *)v94, a7, (float *)&v81, a21);
      }
      if ( v79 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v79 + 8))(v79);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v79 + 16))(v79);
      }
      if ( v78 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v78 + 8))(v78);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v78 + 16))(v78);
      }
      if ( v61 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v61 + 12))(v61);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 4))(v61);
      }
    }
  }
  return result;
}
