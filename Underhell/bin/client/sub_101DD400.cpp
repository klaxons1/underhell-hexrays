double __cdecl sub_101DD400(
        int a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        float *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11)
{
  int v11; // edx
  _DWORD *v12; // eax
  char *v13; // ecx
  double v14; // st7
  int v15; // ebx
  int v16; // eax
  int v17; // esi
  double v18; // st7
  float *v19; // edi
  _BYTE *v20; // esi
  int v21; // ebx
  double result; // st7
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  double v26; // st7
  double v27; // st6
  double v28; // st5
  double v29; // st5
  int v30; // esi
  double v31; // st7
  float *v32; // edi
  float *v33; // ebx
  int v34; // eax
  double v35; // st6
  float *v36; // ecx
  double v37; // st4
  double v38; // st6
  float *v39; // ecx
  double v40; // st4
  double v41; // st7
  double v42; // st6
  double v43; // st5
  double v44; // st7
  double v45; // rt0
  double v46; // st5
  int v47; // esi
  double v48; // st7
  float *v49; // edi
  int v50; // eax
  double v51; // st6
  int v52; // ecx
  double v53; // st4
  double v54; // st6
  int v55; // ecx
  double v56; // st4
  double v57; // st7
  double v58; // st6
  double v59; // st5
  double v60; // st7
  double v61; // rt1
  double v62; // st5
  int v63; // edi
  int v64; // esi
  float *v65; // ebx
  double v66; // st7
  int v67; // ecx
  double v68; // st5
  float *v69; // edx
  float *v70; // edx
  double v71; // st5
  int v72; // edx
  char *v73; // edi
  int v74; // esi
  int v75; // eax
  int v76; // ecx
  double v77; // st7
  float v78; // [esp+Ch] [ebp-2604h]
  float v79; // [esp+Ch] [ebp-2604h]
  float v80; // [esp+Ch] [ebp-2604h]
  float v81; // [esp+Ch] [ebp-2604h]
  float v82; // [esp+Ch] [ebp-2604h]
  float v83; // [esp+Ch] [ebp-2604h]
  float v84; // [esp+Ch] [ebp-2604h]
  float v85; // [esp+Ch] [ebp-2604h]
  float v86; // [esp+Ch] [ebp-2604h]
  float v87; // [esp+Ch] [ebp-2604h]
  float v88; // [esp+Ch] [ebp-2604h]
  float v89; // [esp+10h] [ebp-2600h]
  float v90; // [esp+10h] [ebp-2600h]
  float v91; // [esp+10h] [ebp-2600h]
  float v92; // [esp+10h] [ebp-2600h]
  float v93; // [esp+10h] [ebp-2600h]
  float v94; // [esp+10h] [ebp-2600h]
  float v95; // [esp+10h] [ebp-2600h]
  float v96; // [esp+10h] [ebp-2600h]
  float v97; // [esp+10h] [ebp-2600h]
  float v98; // [esp+10h] [ebp-2600h]
  float v99; // [esp+14h] [ebp-25FCh]
  int v100; // [esp+14h] [ebp-25FCh]
  int v101; // [esp+18h] [ebp-25F8h]
  int v102; // [esp+18h] [ebp-25F8h]
  int v103; // [esp+20h] [ebp-25F0h] BYREF
  int v104; // [esp+24h] [ebp-25ECh]
  int v105; // [esp+28h] [ebp-25E8h]
  float *v106; // [esp+2Ch] [ebp-25E4h]
  float v107; // [esp+30h] [ebp-25E0h]
  int v108; // [esp+34h] [ebp-25DCh]
  int v109; // [esp+38h] [ebp-25D8h]
  int v110; // [esp+3Ch] [ebp-25D4h]
  float v111; // [esp+40h] [ebp-25D0h]
  int v112; // [esp+44h] [ebp-25CCh]
  int v113; // [esp+48h] [ebp-25C8h]
  float v114; // [esp+4Ch] [ebp-25C4h]
  float v115; // [esp+50h] [ebp-25C0h]
  float v116; // [esp+54h] [ebp-25BCh]
  double v117; // [esp+58h] [ebp-25B8h]
  float v118; // [esp+60h] [ebp-25B0h]
  _BYTE *v119; // [esp+68h] [ebp-25A8h]
  char *v120; // [esp+6Ch] [ebp-25A4h]
  double v121; // [esp+70h] [ebp-25A0h]
  double v122; // [esp+78h] [ebp-2598h]
  double v123; // [esp+80h] [ebp-2590h]
  float v124[2]; // [esp+88h] [ebp-2588h] BYREF
  float v125; // [esp+90h] [ebp-2580h]
  float v126; // [esp+94h] [ebp-257Ch]
  float v127; // [esp+98h] [ebp-2578h]
  float v128; // [esp+9Ch] [ebp-2574h]
  double v129; // [esp+A8h] [ebp-2568h]
  _BYTE v130[8]; // [esp+B0h] [ebp-2560h] BYREF
  char v131[8]; // [esp+B8h] [ebp-2558h] BYREF
  char v132[16]; // [esp+C0h] [ebp-2550h] BYREF
  double v133; // [esp+D0h] [ebp-2540h]
  double v134; // [esp+D8h] [ebp-2538h]
  double v135; // [esp+E0h] [ebp-2530h]
  double v136; // [esp+E8h] [ebp-2528h]
  float v137[5]; // [esp+F0h] [ebp-2520h] BYREF
  float v138[3]; // [esp+104h] [ebp-250Ch]
  float v139[16]; // [esp+110h] [ebp-2500h] BYREF
  float v140[16]; // [esp+150h] [ebp-24C0h] BYREF
  float v141[32]; // [esp+190h] [ebp-2480h] BYREF
  float v142; // [esp+210h] [ebp-2400h] BYREF
  char v143; // [esp+214h] [ebp-23FCh] BYREF
  _BYTE v144[1272]; // [esp+218h] [ebp-23F8h] BYREF
  _BYTE v145[4096]; // [esp+710h] [ebp-1F00h] BYREF
  _BYTE v146[3840]; // [esp+1710h] [ebp-F00h] BYREF

  v11 = a5;
  v12 = a3;
  if ( a5 > 0 )
  {
    v13 = (char *)((char *)&v142 - (char *)a3);
    do
    {
      *(_DWORD *)((char *)v12 + (_DWORD)v13) = *v12;
      *(_DWORD *)((char *)v12 + (_DWORD)v13 + 4) = v12[1];
      *(_DWORD *)((char *)v12 + (_DWORD)v13 + 8) = v12[2];
      v12 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( a7 )
  {
    v116 = *a7;
    v114 = a7[1];
    v14 = a7[2];
  }
  else
  {
    v14 = 1.0;
    v116 = 1.0;
    v114 = 1.0;
  }
  v115 = v14;
  v118 = (float)(1 << (8 - a8));
  *((float *)&v117 + 1) = (float)(1 << (8 - a9));
  v120 = (char *)v124 - a1;
  *(float *)&v117 = (float)(1 << (8 - a10));
  v15 = a1;
  v101 = 2;
  do
  {
    v16 = v15;
    v17 = 3;
    do
    {
      v18 = *(float *)(a2 - a1 + v16);
      v16 += 8;
      --v17;
      v99 = v18;
      *(float *)(v16 - 8) = v99;
      *(float *)((char *)&v124[-2] + v16 - a1) = v99;
      *(float *)((char *)&v137[-2] + v16 - a1) = v99;
    }
    while ( v17 );
    v15 += 4;
    --v101;
  }
  while ( v101 );
  sub_101E1780(&v103, v130, v124, a8, a9, a10);
  v19 = v139;
  v20 = v130;
  v21 = 3;
  do
  {
    sub_101E18E0(v19, v20, a6);
    v20 += 8;
    v19 += 16;
    --v21;
  }
  while ( v21 );
  v107 = sub_101D9530(a4, (int)v139, a5, a6, v103, a7);
  result = v107;
  if ( v107 != 0.0 && a11 )
  {
    v23 = a11;
    if ( a11 >= 8u )
      v23 = 8;
    v24 = -v23;
    v104 = v24;
    v25 = a11;
    if ( a11 >= 8u )
      v25 = 8;
    v105 = v25;
    v102 = v24;
    if ( v24 <= v25 )
    {
      v122 = *((float *)&v117 + 1);
      v135 = v137[2];
      v133 = v137[3];
      v134 = v137[0];
      v123 = *(float *)&v117;
      v136 = v137[1];
      v129 = v137[4];
      v121 = v118;
      v117 = v138[0];
      while ( 1 )
      {
        v26 = 0.0;
        v27 = 255.0;
        v28 = (double)v102 * v122 + v135;
        if ( v28 > 0.0 && v28 >= 255.0 )
          break;
        if ( v28 > 0.0 )
          goto LABEL_26;
        v109 = v104;
        v125 = 0.0;
LABEL_28:
        while ( 2 )
        {
          v29 = (double)v109 * v122 + v133;
          if ( v29 > v26 && v29 >= v27 || (v27 = v29, v29 > v26) )
            v26 = v27;
          v126 = v26;
          sub_101E1780(&v103, v130, v124, a8, a9, a10);
          sub_101E18E0(v140, v131, a6);
          v30 = 0;
          if ( a5 > 0 )
          {
            v31 = v114;
            v32 = (float *)&v143;
            v33 = (float *)v145;
            do
            {
              v34 = 0;
              if ( a6 >= 4u )
              {
                v35 = *v32;
                v36 = v33;
                do
                {
                  v37 = v140[v34];
                  v34 += 4;
                  v36 += 256;
                  v78 = v37 - v35;
                  *(v36 - 320) = v78 * v78 * v31;
                  v79 = v139[v34 + 13] - v35;
                  *(v36 - 256) = v79 * v79 * v31;
                  v80 = v139[v34 + 14] - v35;
                  *(v36 - 192) = v80 * v80 * v31;
                  v81 = v139[v34 + 15] - v35;
                  *(v36 - 128) = v81 * v81 * v31;
                }
                while ( v34 < a6 - 3 );
              }
              if ( v34 < a6 )
              {
                v38 = *v32;
                v39 = (float *)&v144[256 * v34 + 1016 + 4 * v30];
                do
                {
                  v40 = v140[v34++];
                  v39 += 64;
                  v82 = v40 - v38;
                  *(v39 - 64) = v82 * v82 * v31;
                }
                while ( v34 < a6 );
              }
              ++v30;
              ++v33;
              v32 += 4;
            }
            while ( v30 < a5 );
          }
          v112 = v104;
          do
          {
            v41 = (double)v112 * v123 + v134;
            v42 = 0.0;
            if ( v41 <= 0.0 )
            {
              v43 = 255.0;
            }
            else
            {
              v43 = 255.0;
              if ( v41 >= 255.0 )
              {
                v44 = 255.0;
                goto LABEL_45;
              }
            }
            v45 = v43;
            v43 = v41;
            v44 = v45;
            if ( v43 <= 0.0 )
            {
              v108 = v104;
              v124[0] = 0.0;
              goto LABEL_50;
            }
LABEL_45:
            v124[0] = v43;
            v108 = v104;
LABEL_50:
            while ( 2 )
            {
              v46 = (double)v108 * v123 + v136;
              if ( v46 <= v42 || v46 < v44 )
              {
                v44 = v46;
                if ( v42 >= v46 )
                  v44 = v42;
              }
              v124[1] = v44;
              sub_101E1780(&v103, v130, v124, a8, a9, a10);
              sub_101E18E0(v139, v130, a6);
              v47 = 0;
              if ( a5 > 0 )
              {
                v48 = v115;
                v49 = &v142;
                do
                {
                  v50 = 0;
                  if ( a6 >= 4u )
                  {
                    v51 = *v49;
                    v52 = 4 * v47;
                    do
                    {
                      v53 = v139[v50];
                      v50 += 4;
                      v52 += 1024;
                      v83 = v53 - v51;
                      *(float *)&v145[v52 + 2816] = v83 * v83 * v48 + *(float *)((char *)&v142 + v52);
                      v84 = v138[v50] - v51;
                      *(float *)&v145[v52 + 3072] = v84 * v84 * v48 + *(float *)&v144[v52 + 248];
                      v85 = v138[v50 + 1] - v51;
                      *(float *)&v145[v52 + 3328] = v85 * v85 * v48 + *(float *)&v144[v52 + 504];
                      v86 = v138[v50 + 2] - v51;
                      *(float *)&v145[v52 + 3584] = v86 * v86 * v48 + *(float *)&v144[v52 + 760];
                    }
                    while ( v50 < a6 - 3 );
                  }
                  if ( v50 < a6 )
                  {
                    v54 = *v49;
                    v55 = 4 * (v47 + (v50 << 6));
                    do
                    {
                      v56 = v139[v50++];
                      v55 += 256;
                      v87 = v56 - v54;
                      *(float *)&v145[v55 + 3584] = v87 * v87 * v48 + *(float *)&v144[v55 + 760];
                    }
                    while ( v50 < a6 );
                  }
                  ++v47;
                  v49 += 4;
                }
                while ( v47 < a5 );
              }
              v110 = v104;
              do
              {
                v57 = (double)v110 * v121 + v129;
                v58 = 0.0;
                if ( v57 <= 0.0 )
                {
                  v59 = 255.0;
                }
                else
                {
                  v59 = 255.0;
                  if ( v57 >= 255.0 )
                  {
                    v60 = 255.0;
LABEL_67:
                    v127 = v59;
                    v113 = v104;
                    goto LABEL_72;
                  }
                }
                v61 = v59;
                v59 = v57;
                v60 = v61;
                if ( v59 > 0.0 )
                  goto LABEL_67;
                v113 = v104;
                v127 = 0.0;
                while ( 1 )
                {
LABEL_72:
                  v62 = (double)v113 * v121 + v117;
                  if ( v62 <= v58 || v62 < v60 )
                  {
                    v60 = v62;
                    if ( v58 >= v62 )
                      v60 = v58;
                  }
                  v128 = v60;
                  sub_101E1780(&v103, v130, v124, a8, a9, a10);
                  sub_101E18E0(v141, v132, a6);
                  v111 = 0.0;
                  v63 = 1;
                  if ( !(_BYTE)v103 )
                    v63 = a6;
                  v64 = 0;
                  v100 = 0;
                  if ( a5 > 0 )
                  {
                    v65 = (float *)a4;
                    v66 = v116;
                    v106 = (float *)v144;
                    v119 = &v146[-a4];
                    do
                    {
                      v67 = 0;
                      v88 = 10000000.0;
                      if ( v63 >= 4 )
                      {
                        v68 = *v106;
                        v69 = (float *)((int)v65 + (_DWORD)v119);
                        do
                        {
                          v89 = v141[v67] - v68;
                          v90 = v89 * v89 * v66 + *(v69 - 64);
                          if ( v90 <= (double)v88 )
                            v88 = v90;
                          v91 = v141[v67 + 1] - v68;
                          v92 = v91 * v91 * v66 + *v69;
                          if ( v92 <= (double)v88 )
                            v88 = v92;
                          v93 = v141[v67 + 2] - v68;
                          v94 = v93 * v93 * v66 + v69[64];
                          if ( v94 <= (double)v88 )
                            v88 = v94;
                          v95 = v141[v67 + 3] - v68;
                          v96 = v95 * v95 * v66 + v69[128];
                          if ( v96 <= (double)v88 )
                            v88 = v96;
                          v67 += 4;
                          v69 += 256;
                        }
                        while ( v67 < v63 - 3 );
                        v64 = v100;
                      }
                      if ( v67 < v63 )
                      {
                        v70 = (float *)&v145[256 * v67 + 3840 + 4 * v64];
                        do
                        {
                          v97 = v141[v67] - *v106;
                          v98 = v97 * v97 * v66 + *v70;
                          if ( v98 <= (double)v88 )
                            v88 = v98;
                          ++v67;
                          v70 += 64;
                        }
                        while ( v67 < v63 );
                      }
                      v71 = *v65;
                      v106 += 4;
                      ++v64;
                      ++v65;
                      v100 = v64;
                      v111 = v71 * v88 + v111;
                    }
                    while ( v64 < a5 );
                  }
                  if ( v107 > (double)v111 )
                  {
                    v72 = a1;
                    v107 = v111;
                    v73 = v120;
                    v74 = 2;
                    do
                    {
                      v75 = v72;
                      v76 = 3;
                      do
                      {
                        v77 = *(float *)&v73[v75];
                        v75 += 8;
                        --v76;
                        *(float *)(v75 - 8) = v77;
                      }
                      while ( v76 );
                      v72 += 4;
                      --v74;
                    }
                    while ( v74 );
                  }
                  if ( ++v113 > v105 )
                    break;
                  v60 = 255.0;
                  v58 = 0.0;
                }
                ++v110;
              }
              while ( v110 <= v105 );
              if ( ++v108 <= v105 )
              {
                v44 = 255.0;
                v42 = 0.0;
                continue;
              }
              break;
            }
            ++v112;
          }
          while ( v112 <= v105 );
          if ( ++v109 <= v105 )
          {
            v26 = 0.0;
            v27 = 255.0;
            continue;
          }
          break;
        }
        if ( ++v102 > v105 )
          return v107;
      }
      v28 = 255.0;
LABEL_26:
      v125 = v28;
      v109 = v104;
      goto LABEL_28;
    }
  }
  return result;
}
