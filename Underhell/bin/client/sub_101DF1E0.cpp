double __usercall sub_101DF1E0@<st0>(
        int a1@<edx>,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        float *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11)
{
  float *v12; // ebx
  float *v13; // ecx
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  double v17; // st7
  char *v18; // esi
  int v19; // ecx
  char *v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  double v24; // st7
  float *v25; // edi
  _BYTE *v26; // esi
  int v27; // ebx
  double result; // st7
  int v29; // eax
  int v30; // esi
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st5
  double v35; // st7
  int v36; // edi
  float *v37; // ebx
  int v38; // eax
  double v39; // st6
  float *v40; // ecx
  double v41; // st4
  double v42; // st6
  float *v43; // ecx
  double v44; // st4
  double v45; // st7
  double v46; // st6
  double v47; // st5
  double v48; // st7
  double v49; // rt0
  double v50; // st5
  int v51; // ebx
  double v52; // st7
  int v53; // edi
  int v54; // ecx
  double v55; // st6
  int v56; // eax
  double v57; // st4
  double v58; // st6
  int v59; // eax
  double v60; // st4
  double v61; // st7
  double v62; // st6
  double v63; // st5
  double v64; // st7
  double v65; // rt1
  double v66; // st5
  __m128 v67; // xmm7
  __m128 *v68; // esi
  __m128 v69; // xmm0
  __m128 *v70; // edi
  __m128 v71; // xmm0
  int v72; // edx
  __m128 *v73; // ecx
  __m128 *v74; // eax
  __m128 v75; // xmm0
  __m128 v76; // xmm0
  __m128 v77; // xmm2
  __m128 v78; // xmm0
  __m128 v79; // xmm5
  __m128 v80; // xmm0
  __m128 v81; // xmm2
  __m128 v82; // xmm0
  __m128 v83; // xmm2
  __m128 v84; // xmm2
  __m128 v85; // xmm3
  __m128 v86; // xmm2
  __m128 v87; // xmm6
  __m128 v88; // xmm2
  __m128 v89; // xmm3
  __m128 v90; // xmm0
  bool v91; // zf
  int v92; // edx
  char *v93; // esi
  int v94; // edi
  int v95; // eax
  int v96; // ecx
  double v97; // st7
  float *v98; // edi
  _BYTE *v99; // esi
  int v100; // ebx
  float v101; // [esp+Ch] [ebp-2A74h]
  float v102; // [esp+Ch] [ebp-2A74h]
  float v103; // [esp+Ch] [ebp-2A74h]
  float v104; // [esp+Ch] [ebp-2A74h]
  float v105; // [esp+Ch] [ebp-2A74h]
  float v106; // [esp+Ch] [ebp-2A74h]
  float v107; // [esp+Ch] [ebp-2A74h]
  float v108; // [esp+Ch] [ebp-2A74h]
  float v109; // [esp+Ch] [ebp-2A74h]
  float v110; // [esp+Ch] [ebp-2A74h]
  int v111; // [esp+Ch] [ebp-2A74h]
  float v112; // [esp+10h] [ebp-2A70h]
  float v113; // [esp+10h] [ebp-2A70h]
  int v114; // [esp+10h] [ebp-2A70h]
  float v115; // [esp+10h] [ebp-2A70h]
  int v116; // [esp+14h] [ebp-2A6Ch]
  int v117; // [esp+14h] [ebp-2A6Ch]
  float *v118; // [esp+18h] [ebp-2A68h]
  int v119; // [esp+18h] [ebp-2A68h]
  int v120; // [esp+1Ch] [ebp-2A64h] BYREF
  int v121; // [esp+20h] [ebp-2A60h]
  int v122; // [esp+24h] [ebp-2A5Ch]
  int v123; // [esp+28h] [ebp-2A58h]
  int v124; // [esp+2Ch] [ebp-2A54h]
  int v125; // [esp+30h] [ebp-2A50h]
  float v126; // [esp+34h] [ebp-2A4Ch]
  int v127; // [esp+38h] [ebp-2A48h]
  float v128; // [esp+3Ch] [ebp-2A44h]
  float v129; // [esp+40h] [ebp-2A40h]
  int v130; // [esp+44h] [ebp-2A3Ch]
  float v131; // [esp+48h] [ebp-2A38h]
  int v132; // [esp+4Ch] [ebp-2A34h]
  double v133; // [esp+50h] [ebp-2A30h]
  float v134; // [esp+58h] [ebp-2A28h]
  char *v135; // [esp+60h] [ebp-2A20h]
  int v136; // [esp+64h] [ebp-2A1Ch]
  double v137; // [esp+68h] [ebp-2A18h]
  double v138; // [esp+70h] [ebp-2A10h]
  float v139[2]; // [esp+78h] [ebp-2A08h] BYREF
  float v140; // [esp+80h] [ebp-2A00h]
  float v141; // [esp+84h] [ebp-29FCh]
  float v142; // [esp+88h] [ebp-29F8h]
  float v143; // [esp+8Ch] [ebp-29F4h]
  double v144; // [esp+98h] [ebp-29E8h]
  _BYTE v145[8]; // [esp+A0h] [ebp-29E0h] BYREF
  char v146[8]; // [esp+A8h] [ebp-29D8h] BYREF
  char v147[16]; // [esp+B0h] [ebp-29D0h] BYREF
  __m128 v148; // [esp+C0h] [ebp-29C0h] BYREF
  float v149; // [esp+D0h] [ebp-29B0h]
  float v150; // [esp+D4h] [ebp-29ACh]
  double v151; // [esp+E8h] [ebp-2998h]
  double v152; // [esp+F0h] [ebp-2990h]
  double v153; // [esp+F8h] [ebp-2988h]
  double v154; // [esp+100h] [ebp-2980h]
  double v155; // [esp+108h] [ebp-2978h]
  __m128 v156; // [esp+110h] [ebp-2970h]
  __m128 v157; // [esp+120h] [ebp-2960h]
  __m128 v158; // [esp+130h] [ebp-2950h]
  __m128 v159; // [esp+140h] [ebp-2940h]
  __m128 v160; // [esp+150h] [ebp-2930h]
  float v161[16]; // [esp+160h] [ebp-2920h] BYREF
  float v162[16]; // [esp+1A0h] [ebp-28E0h] BYREF
  _BYTE v163[128]; // [esp+1E0h] [ebp-28A0h] BYREF
  float v164[272]; // [esp+260h] [ebp-2820h] BYREF
  char v165; // [esp+6A0h] [ebp-23E0h] BYREF
  char v166; // [esp+1660h] [ebp-1420h] BYREF
  _BYTE v167[516]; // [esp+1860h] [ebp-1220h] BYREF
  char v168; // [esp+1A64h] [ebp-101Ch] BYREF
  __m128 v169; // [esp+2A60h] [ebp-20h]
  __m128 v170; // [esp+2A70h] [ebp-10h]

  v136 = a1;
  v132 = (a5 + 3) / 4;
  if ( a5 > 0 )
  {
    v118 = (float *)&v166;
    v12 = v164;
    v116 = a5;
    do
    {
      v13 = v118;
      v14 = v12;
      v15 = 3;
      do
      {
        v16 = *(float *)((char *)v14++ + a3 - (_DWORD)v164);
        v112 = v16;
        v13 += 64;
        --v15;
        *(v14 - 1) = v112;
        *(v13 - 64) = v112;
      }
      while ( v15 );
      ++v118;
      v12 += 4;
      --v116;
    }
    while ( v116 );
  }
  if ( a7 )
  {
    v128 = *a7;
    v129 = a7[1];
    v17 = a7[2];
  }
  else
  {
    v17 = 1.0;
    v128 = 1.0;
    v129 = 1.0;
  }
  v131 = v17;
  v134 = (float)(1 << (8 - a8));
  *((float *)&v133 + 1) = (float)(1 << (8 - a9));
  v18 = (char *)v139 - a1;
  v19 = a2 - a1;
  v135 = (char *)v139 - a1;
  *(float *)&v133 = (float)(1 << (8 - a10));
  v20 = (char *)&v148 - a1;
  v21 = a1;
  v117 = 2;
  do
  {
    v22 = v21;
    v23 = 3;
    do
    {
      v24 = *(float *)(v19 + v22);
      v22 += 8;
      --v23;
      v113 = v24;
      *(float *)(v22 - 8) = v113;
      *(float *)&v18[v22 - 8] = v113;
      *(float *)&v20[v22 - 8] = v113;
    }
    while ( v23 );
    v21 += 4;
    --v117;
  }
  while ( v117 );
  sub_101E1780(&v120, v145, v139, a8, a9, a10);
  v25 = v161;
  v26 = v145;
  v27 = 3;
  do
  {
    sub_101E18E0(v25, v26, a6);
    v26 += 8;
    v25 += 16;
    --v27;
  }
  while ( v27 );
  v126 = sub_101D9530(a4, (int)v161, a5, a6, v120, a7);
  result = v126;
  if ( v126 != 0.0 && a11 )
  {
    v29 = a11;
    if ( a11 >= 8u )
      v29 = 8;
    v122 = -v29;
    v30 = a11;
    if ( a11 >= 8u )
      v30 = 8;
    v119 = v30;
    v130 = (a6 + 3) / 4;
    v123 = -v29;
    if ( -v29 > v30 )
      goto LABEL_96;
    v144 = *((float *)&v133 + 1);
    v158 = 0;
    v153 = v148.m128_f32[2];
    v154 = v148.m128_f32[3];
    v152 = v148.m128_f32[0];
    v138 = *(float *)&v133;
    v151 = v148.m128_f32[1];
    v155 = v149;
    v137 = v134;
    v133 = v150;
    while ( 1 )
    {
      v31 = 0.0;
      v32 = 255.0;
      v33 = (double)v123 * v144 + v153;
      if ( v33 > 0.0 && v33 >= 255.0 )
        break;
      if ( v33 > 0.0 )
        goto LABEL_28;
      v125 = v122;
      v140 = 0.0;
LABEL_30:
      while ( 2 )
      {
        v34 = (double)v125 * v144 + v154;
        if ( v34 > v31 && v34 >= v32 || (v32 = v34, v34 > v31) )
          v31 = v32;
        v141 = v31;
        sub_101E1780(&v120, v145, v139, a8, a9, a10);
        sub_101E18E0(v162, v146, a6);
        if ( a5 > 0 )
        {
          v35 = v129;
          v36 = 0;
          v37 = (float *)&v168;
          v121 = a5;
          do
          {
            v38 = 0;
            if ( a6 >= 4u )
            {
              v39 = v164[v36 + 1];
              v40 = v37;
              do
              {
                v41 = v162[v38];
                v38 += 4;
                v40 += 4;
                v101 = v41 - v39;
                *(v40 - 5) = v101 * v101 * v35;
                v102 = v161[v38 + 13] - v39;
                *(v40 - 4) = v102 * v102 * v35;
                v103 = v161[v38 + 14] - v39;
                *(v40 - 3) = v103 * v103 * v35;
                v104 = v161[v38 + 15] - v39;
                *(v40 - 2) = v104 * v104 * v35;
              }
              while ( v38 < a6 - 3 );
            }
            if ( v38 < a6 )
            {
              v42 = v164[v36 + 1];
              v43 = (float *)&v167[4 * v38 + 512 + 1 * v36];
              do
              {
                v44 = v162[v38++];
                ++v43;
                v105 = v44 - v42;
                *(v43 - 1) = v105 * v105 * v35;
              }
              while ( v38 < a6 );
            }
            v37 += 16;
            v36 += 4;
            --v121;
          }
          while ( v121 );
        }
        v121 = v122;
        do
        {
          v45 = (double)v121 * v138 + v152;
          v46 = 0.0;
          if ( v45 <= 0.0 )
          {
            v47 = 255.0;
          }
          else
          {
            v47 = 255.0;
            if ( v45 >= 255.0 )
            {
              v48 = 255.0;
              goto LABEL_47;
            }
          }
          v49 = v47;
          v47 = v45;
          v48 = v49;
          if ( v47 <= 0.0 )
          {
            v127 = v122;
            v139[0] = 0.0;
            goto LABEL_52;
          }
LABEL_47:
          v139[0] = v47;
          v127 = v122;
LABEL_52:
          while ( 2 )
          {
            v50 = (double)v127 * v138 + v151;
            if ( v50 <= v46 || v50 < v48 )
            {
              v48 = v50;
              if ( v46 >= v50 )
                v48 = v46;
            }
            v139[1] = v48;
            sub_101E1780(&v120, v145, v139, a8, a9, a10);
            sub_101E18E0(v161, v145, a6);
            v51 = 0;
            if ( a5 > 0 )
            {
              v52 = v131;
              v53 = 0;
              do
              {
                v54 = 0;
                if ( a6 >= 4u )
                {
                  v55 = v164[v53];
                  v56 = v51 << 6;
                  do
                  {
                    v57 = v161[v54];
                    v54 += 4;
                    v56 += 16;
                    v106 = v57 - v55;
                    *(float *)((char *)&v164[252] + v56) = v106 * v106 * v52 + *(float *)&v167[v56 + 496];
                    v107 = v160.m128_f32[v54 + 1] - v55;
                    *(float *)((char *)&v164[253] + v56) = v107 * v107 * v52 + *(float *)&v167[v56 + 500];
                    v108 = v160.m128_f32[v54 + 2] - v55;
                    *(float *)((char *)&v164[254] + v56) = v108 * v108 * v52 + *(float *)&v167[v56 + 504];
                    v109 = v160.m128_f32[v54 + 3] - v55;
                    *(float *)((char *)&v164[255] + v56) = v109 * v109 * v52 + *(float *)&v167[v56 + 508];
                  }
                  while ( v54 < a6 - 3 );
                }
                if ( v54 < a6 )
                {
                  v58 = v164[v53];
                  v59 = v53 * 4 + v54;
                  do
                  {
                    v60 = v161[v54++];
                    ++v59;
                    v110 = v60 - v58;
                    v164[v59 + 255] = v110 * v110 * v52 + *(float *)&v167[v59 * 4 + 508];
                  }
                  while ( v54 < a6 );
                }
                ++v51;
                v53 += 4;
              }
              while ( v51 < a5 );
            }
            v124 = v122;
            do
            {
              v61 = (double)v124 * v137 + v155;
              v62 = 0.0;
              if ( v61 <= 0.0 )
              {
                v63 = 255.0;
              }
              else
              {
                v63 = 255.0;
                if ( v61 >= 255.0 )
                {
                  v64 = 255.0;
LABEL_69:
                  v142 = v63;
                  v111 = v122;
                  goto LABEL_74;
                }
              }
              v65 = v63;
              v63 = v61;
              v64 = v65;
              if ( v63 > 0.0 )
                goto LABEL_69;
              v111 = v122;
              v142 = 0.0;
              while ( 1 )
              {
LABEL_74:
                v66 = (double)v111 * v137 + v133;
                if ( v66 <= v62 || v66 < v64 )
                {
                  v64 = v66;
                  if ( v62 >= v66 )
                    v64 = v62;
                }
                v143 = v64;
                sub_101E1780(&v120, v145, v139, a8, a9, a10);
                sub_101E18E0(v163, v147, a6);
                v169 = v158;
                v67 = _mm_shuffle_ps((__m128)LODWORD(v128), (__m128)LODWORD(v128), 0);
                if ( v132 > 0 )
                {
                  v68 = (__m128 *)a4;
                  v69 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
                  v156 = v69;
                  v70 = (__m128 *)&v165;
                  v114 = v132;
                  while ( 1 )
                  {
                    v170 = v69;
                    if ( v130 > 0 )
                    {
                      v71 = *(__m128 *)&v167[(_DWORD)v68 - a4];
                      v72 = v130;
                      v157 = _mm_shuffle_ps(v71, v71, 0);
                      v160 = _mm_shuffle_ps(v71, v71, 85);
                      v159 = _mm_shuffle_ps(v71, v71, 170);
                      v148 = _mm_shuffle_ps(v71, v71, 255);
                      v73 = (__m128 *)v163;
                      v74 = v70;
                      do
                      {
                        v75 = _mm_sub_ps(v157, *v73);
                        v76 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v75, v75), v67), v74[-4]);
                        v77 = _mm_min_ps(_mm_shuffle_ps(v76, v158, 254), v76);
                        v78 = _mm_sub_ps(v160, *v73);
                        v79 = _mm_min_ps(_mm_shuffle_ps(v77, v158, 253), v77);
                        v80 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v78, v78), v67), *v74);
                        v81 = _mm_min_ps(_mm_shuffle_ps(v80, v158, 254), v80);
                        v82 = _mm_min_ps(_mm_shuffle_ps(v81, v158, 243), v81);
                        v83 = _mm_sub_ps(v159, *v73);
                        v84 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v83, v83), v67), v74[4]);
                        v85 = _mm_min_ps(_mm_shuffle_ps(v158, v84, 79), v84);
                        v86 = _mm_sub_ps(v148, *v73);
                        v87 = _mm_min_ps(_mm_shuffle_ps(v158, v85, 63), v85);
                        v88 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v86, v86), v67), v74[8]);
                        v89 = _mm_min_ps(_mm_shuffle_ps(v158, v88, 79), v88);
                        ++v73;
                        ++v74;
                        --v72;
                        v170 = _mm_min_ps(
                                 v170,
                                 _mm_add_ps(
                                   _mm_min_ps(_mm_shuffle_ps(v158, v89, 143), v89),
                                   _mm_add_ps(_mm_add_ps(v82, v79), v87)));
                      }
                      while ( v72 );
                    }
                    v90 = _mm_add_ps(_mm_mul_ps(*v68, v170), v169);
                    v70 += 16;
                    ++v68;
                    v91 = v114-- == 1;
                    v169 = v90;
                    if ( v91 )
                      break;
                    v69 = v156;
                  }
                }
                v115 = v169.m128_f32[1] + v169.m128_f32[0] + v169.m128_f32[2] + v169.m128_f32[3];
                if ( v126 > (double)v115 )
                {
                  v92 = v136;
                  v126 = v169.m128_f32[1] + v169.m128_f32[0] + v169.m128_f32[2] + v169.m128_f32[3];
                  v93 = v135;
                  v94 = 2;
                  do
                  {
                    v95 = v92;
                    v96 = 3;
                    do
                    {
                      v97 = *(float *)&v93[v95];
                      v95 += 8;
                      --v96;
                      *(float *)(v95 - 8) = v97;
                    }
                    while ( v96 );
                    v92 += 4;
                    --v94;
                  }
                  while ( v94 );
                }
                if ( ++v111 > v119 )
                  break;
                v64 = 255.0;
                v62 = 0.0;
              }
              ++v124;
            }
            while ( v124 <= v119 );
            if ( ++v127 <= v119 )
            {
              v48 = 255.0;
              v46 = 0.0;
              continue;
            }
            break;
          }
          ++v121;
        }
        while ( v121 <= v119 );
        if ( ++v125 <= v119 )
        {
          v31 = 0.0;
          v32 = 255.0;
          continue;
        }
        break;
      }
      if ( ++v123 > v119 )
      {
LABEL_96:
        sub_101E1780(&v120, v145, v139, a8, a9, a10);
        v98 = v161;
        v99 = v145;
        v100 = 3;
        do
        {
          sub_101E18E0(v98, v99, a6);
          v99 += 8;
          v98 += 16;
          --v100;
        }
        while ( v100 );
        return sub_101D9530(a4, (int)v161, a5, a6, v120, a7);
      }
    }
    v33 = 255.0;
LABEL_28:
    v140 = v33;
    v125 = v122;
    goto LABEL_30;
  }
  return result;
}
