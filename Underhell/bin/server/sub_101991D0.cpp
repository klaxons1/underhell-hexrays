// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_101991D0@<eax>(int a1@<ebp>)
{
  int result; // eax
  double v2; // st7
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // rt0
  double v11; // st4
  double v12; // st5
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // st1
  float *v17; // eax
  char *v18; // esi
  double v19; // st7
  int i; // edi
  int v21; // eax
  char *v22; // ecx
  char *v23; // ecx
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // st4
  double v28; // rt2
  double v29; // st4
  double v30; // st6
  double v31; // st4
  double v32; // st3
  double v33; // st3
  double v34; // st2
  double v35; // st1
  float *v36; // eax
  char *v37; // esi
  double v38; // st7
  int v39; // eax
  int v40; // edi
  int v41; // eax
  char *v42; // ecx
  char *v43; // ecx
  double v44; // st6
  double v45; // st5
  double v46; // st4
  double v47; // rt0
  double v48; // st4
  double v49; // st5
  double v50; // st4
  double v51; // st3
  double v52; // st2
  double v53; // st1
  float *v54; // eax
  char *v55; // esi
  double v56; // st7
  int v57; // eax
  int v58; // edi
  int v59; // eax
  char *v60; // ecx
  char *v61; // ecx
  double v62; // st6
  double v63; // st5
  double v64; // st4
  double v65; // st4
  double v66; // rtt
  double v67; // st4
  double v68; // st6
  double v69; // st4
  double v70; // st3
  double v71; // st3
  double v72; // st2
  double v73; // st1
  float *v74; // eax
  char *v75; // esi
  double v76; // st7
  int v77; // [esp+58h] [ebp-18Ch] BYREF
  int v78; // [esp+64h] [ebp-180h] BYREF
  int v79; // [esp+70h] [ebp-174h] BYREF
  int v80; // [esp+7Ch] [ebp-168h] BYREF
  _BYTE v81[12]; // [esp+88h] [ebp-15Ch] BYREF
  _BYTE v82[32]; // [esp+94h] [ebp-150h] BYREF
  float v83; // [esp+B4h] [ebp-130h]
  float v84[3]; // [esp+E4h] [ebp-100h] BYREF
  float v85[3]; // [esp+F0h] [ebp-F4h] BYREF
  float v86[3]; // [esp+FCh] [ebp-E8h] BYREF
  float v87[3]; // [esp+108h] [ebp-DCh] BYREF
  int v88; // [esp+114h] [ebp-D0h]
  float v89; // [esp+118h] [ebp-CCh]
  float v90; // [esp+11Ch] [ebp-C8h]
  float v91; // [esp+120h] [ebp-C4h]
  float v92; // [esp+124h] [ebp-C0h]
  float v93; // [esp+128h] [ebp-BCh]
  float v94; // [esp+12Ch] [ebp-B8h]
  float v95; // [esp+130h] [ebp-B4h]
  float v96; // [esp+134h] [ebp-B0h]
  float v97; // [esp+138h] [ebp-ACh]
  float v98; // [esp+13Ch] [ebp-A8h]
  float v99; // [esp+140h] [ebp-A4h]
  float v100; // [esp+144h] [ebp-A0h]
  float v101; // [esp+148h] [ebp-9Ch] BYREF
  float v102; // [esp+14Ch] [ebp-98h]
  float v103; // [esp+150h] [ebp-94h]
  float v104; // [esp+158h] [ebp-8Ch]
  float v105; // [esp+15Ch] [ebp-88h]
  float v106; // [esp+160h] [ebp-84h]
  float v107; // [esp+168h] [ebp-7Ch]
  float v108; // [esp+16Ch] [ebp-78h]
  float v109; // [esp+170h] [ebp-74h]
  float v110; // [esp+178h] [ebp-6Ch]
  float v111; // [esp+17Ch] [ebp-68h]
  float v112; // [esp+180h] [ebp-64h]
  char v113; // [esp+188h] [ebp-5Ch]
  bool v114; // [esp+189h] [ebp-5Bh]
  float v115; // [esp+19Ch] [ebp-48h] BYREF
  float v116; // [esp+1A0h] [ebp-44h]
  float v117; // [esp+1A4h] [ebp-40h]
  float v118; // [esp+1A8h] [ebp-3Ch] BYREF
  float v119; // [esp+1ACh] [ebp-38h]
  float v120; // [esp+1B0h] [ebp-34h]
  float v121; // [esp+1B4h] [ebp-30h] BYREF
  float v122; // [esp+1B8h] [ebp-2Ch]
  float v123; // [esp+1BCh] [ebp-28h]
  float v124; // [esp+1C0h] [ebp-24h] BYREF
  float v125; // [esp+1C4h] [ebp-20h]
  float v126; // [esp+1C8h] [ebp-1Ch]
  char *v127; // [esp+1CCh] [ebp-18h]
  int v128; // [esp+1D0h] [ebp-14h]
  char *v129; // [esp+1D4h] [ebp-10h]
  int v130; // [esp+1D8h] [ebp-Ch]
  void *v131; // [esp+1DCh] [ebp-8h]
  void *retaddr; // [esp+1E4h] [ebp+0h]

  v130 = a1;
  v131 = retaddr;
  Msg("Connecting navigation areas...\n");
  result = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v2 = 0.0;
    do
    {
      v88 = 12 * result;
      v3 = *(_DWORD *)(12 * result + dword_10632624);
      v4 = *(_DWORD *)(v3 + 740);
      v129 = (char *)v3;
      if ( v4 != *(_DWORD *)(v3 + 744) )
      {
        do
        {
          v5 = *(_DWORD *)(v4 + 24);
          if ( v5 && (v6 = *(char **)(v5 + 64)) != 0 && *(_DWORD *)(v5 + 32) == v4 )
          {
            v128 = 0;
            v127 = v6;
LABEL_19:
            sub_1018F770(v129, v127, v128);
          }
          else
          {
            v7 = *(float *)v4;
            v95 = *(float *)v4;
            v8 = *(float *)(v4 + 4);
            v124 = v95;
            v9 = *(float *)(v4 + 8) + 36.0;
            v97 = v9;
            v10 = v9;
            v11 = v8;
            v12 = v10;
            v126 = v97;
            v13 = v11 - 12.5;
            v128 = 1;
            v96 = v13;
            v125 = v96;
            while ( 1 )
            {
              v14 = v125 - 25.0;
              v125 = v14;
              v15 = v124 - v7;
              v104 = v15;
              v105 = v14 - v13;
              v16 = v126 - v12;
              v106 = v16;
              v114 = v2 != v15 * v15 + (v14 - v13) * (v14 - v13) + v16 * v16;
              v112 = v2;
              v113 = 1;
              v111 = v2;
              v110 = v2;
              v109 = v2;
              v108 = v2;
              v107 = v2;
              v101 = v7;
              v102 = v13;
              v103 = v12;
              sub_10265570(0, 0);
              (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                dword_106B31F4,
                &v101,
                81931,
                &v79,
                v81);
              if ( *(_DWORD *)(dword_106CE63C + 48) )
                sub_101A0AD0((int)v81, (int)v82, 255, 0, 0, 1, 5.0);
              if ( v83 < 1.0 )
                break;
              v17 = (float *)sub_1019E380((int)&v124, 200.0);
              v18 = (char *)v17;
              if ( v17 )
              {
                v19 = v124;
                v86[0] = v124;
                v86[1] = v125;
                sub_1018AE30(v17, v124, v125);
                v86[2] = v19;
                if ( sub_101990E0((float *)v4, v86) && v18 != v129 )
                {
                  v128 = 0;
                  v127 = v18;
                  goto LABEL_19;
                }
                break;
              }
              if ( ++v128 > 4 )
                break;
              v2 = 0.0;
              v7 = v95;
              v12 = v97;
              v13 = v96;
            }
          }
          v4 = *(_DWORD *)(v4 + 28);
          v2 = 0.0;
        }
        while ( v4 != *((_DWORD *)v129 + 186) );
      }
      for ( i = *((_DWORD *)v129 + 185); i != *((_DWORD *)v129 + 188); v2 = 0.0 )
      {
        v21 = *(_DWORD *)(i + 36);
        if ( v21 && (v22 = *(char **)(v21 + 64)) != 0 && *(_DWORD *)(v21 + 28) == i )
        {
          v128 = 3;
          v127 = v22;
          v23 = v129;
LABEL_37:
          sub_1018F770(v23, v127, v128);
        }
        else
        {
          v24 = *(float *)i;
          v25 = *(float *)(i + 4);
          v93 = *(float *)(i + 4);
          v26 = *(float *)(i + 8);
          v116 = v93;
          v27 = v26 + 36.0;
          v128 = 1;
          v94 = v27;
          v28 = v27;
          v29 = v24;
          v30 = v28;
          v117 = v94;
          v31 = v29 - 12.5;
          v92 = v31;
          v115 = v92;
          while ( 1 )
          {
            v32 = v115 - 25.0;
            v115 = v32;
            v33 = v32 - v31;
            v104 = v33;
            v34 = v116 - v25;
            v105 = v34;
            v35 = v117 - v30;
            v106 = v35;
            v114 = v2 != v33 * v33 + v34 * v34 + v35 * v35;
            v112 = v2;
            v113 = 1;
            v111 = v2;
            v110 = v2;
            v109 = v2;
            v108 = v2;
            v107 = v2;
            v101 = v31;
            v102 = v25;
            v103 = v30;
            sub_10265570(0, 0);
            (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
              dword_106B31F4,
              &v101,
              81931,
              &v80,
              v81);
            if ( *(_DWORD *)(dword_106CE63C + 48) )
              sub_101A0AD0((int)v81, (int)v82, 255, 0, 0, 1, 5.0);
            if ( v83 < 1.0 )
              break;
            v36 = (float *)sub_1019E380((int)&v115, 200.0);
            v37 = (char *)v36;
            if ( v36 )
            {
              v38 = v115;
              v84[0] = v115;
              v84[1] = v116;
              sub_1018AE30(v36, v115, v116);
              v84[2] = v38;
              if ( sub_101990E0((float *)i, v84) )
              {
                v23 = v129;
                if ( v37 != v129 )
                {
                  v128 = 3;
                  v127 = v37;
                  goto LABEL_37;
                }
              }
              break;
            }
            if ( ++v128 > 4 )
              break;
            v2 = 0.0;
            v25 = v93;
            v31 = v92;
            v30 = v94;
          }
        }
        i = *(_DWORD *)(i + 32);
      }
      v39 = *((_DWORD *)v129 + 188);
      if ( v39 )
      {
        v40 = *(_DWORD *)(v39 + 24);
        if ( v40 )
        {
          v127 = *(char **)(*((_DWORD *)v129 + 187) + 24);
          do
          {
            if ( (char *)v40 == v127 )
              break;
            v41 = *(_DWORD *)(v40 + 32);
            if ( v41 && (v42 = *(char **)(v41 + 64)) != 0 && *(_DWORD *)(v41 + 24) == v40 )
            {
              v128 = 2;
              v127 = v42;
              v43 = v129;
LABEL_58:
              sub_1018F770(v43, v127, v128);
            }
            else
            {
              v44 = *(float *)v40;
              v98 = *(float *)v40;
              v45 = *(float *)(v40 + 4);
              v121 = v98;
              v46 = *(float *)(v40 + 8) + 36.0;
              v100 = v46;
              v47 = v46;
              v48 = v45;
              v49 = v47;
              v123 = v100;
              v50 = v48 + 12.5;
              v128 = 1;
              v99 = v50;
              v122 = v99;
              while ( 1 )
              {
                v51 = v122 + 25.0;
                v122 = v51;
                v52 = v121 - v44;
                v104 = v52;
                v105 = v51 - v50;
                v53 = v123 - v49;
                v106 = v53;
                v114 = v2 != v52 * v52 + (v51 - v50) * (v51 - v50) + v53 * v53;
                v112 = v2;
                v113 = 1;
                v111 = v2;
                v110 = v2;
                v109 = v2;
                v108 = v2;
                v107 = v2;
                v101 = v44;
                v102 = v50;
                v103 = v49;
                sub_10265570(0, 0);
                (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                  dword_106B31F4,
                  &v101,
                  81931,
                  &v77,
                  v81);
                if ( *(_DWORD *)(dword_106CE63C + 48) )
                  sub_101A0AD0((int)v81, (int)v82, 255, 0, 0, 1, 5.0);
                if ( v83 < 1.0 )
                  break;
                v54 = (float *)sub_1019E380((int)&v121, 200.0);
                v55 = (char *)v54;
                if ( v54 )
                {
                  v56 = v121;
                  v85[0] = v121;
                  v85[1] = v122;
                  sub_1018AE30(v54, v121, v122);
                  v85[2] = v56;
                  if ( sub_101990E0((float *)v40, v85) )
                  {
                    v43 = v129;
                    if ( v55 != v129 )
                    {
                      v128 = 2;
                      v127 = v55;
                      goto LABEL_58;
                    }
                  }
                  break;
                }
                if ( ++v128 > 4 )
                  break;
                v2 = 0.0;
                v44 = v98;
                v50 = v99;
                v49 = v100;
              }
            }
            v40 = *(_DWORD *)(v40 + 28);
            v2 = 0.0;
          }
          while ( v40 );
        }
      }
      v57 = *((_DWORD *)v129 + 186);
      if ( v57 )
      {
        v58 = *(_DWORD *)(v57 + 36);
        if ( v58 )
        {
          v127 = *(char **)(*((_DWORD *)v129 + 187) + 36);
          do
          {
            if ( (char *)v58 == v127 )
              break;
            v59 = *(_DWORD *)(v58 + 28);
            if ( v59 && (v60 = *(char **)(v59 + 64)) != 0 && *(_DWORD *)(v59 + 36) == v58 )
            {
              v128 = 1;
              v127 = v60;
              v61 = v129;
LABEL_79:
              sub_1018F770(v61, v127, v128);
            }
            else
            {
              v62 = *(float *)v58;
              v63 = *(float *)(v58 + 4);
              v90 = *(float *)(v58 + 4);
              v64 = *(float *)(v58 + 8);
              v119 = v90;
              v65 = v64 + 36.0;
              v128 = 1;
              v91 = v65;
              v66 = v65;
              v67 = v62;
              v68 = v66;
              v120 = v91;
              v69 = v67 + 12.5;
              v89 = v69;
              v118 = v89;
              while ( 1 )
              {
                v70 = v118 + 25.0;
                v118 = v70;
                v71 = v70 - v69;
                v104 = v71;
                v72 = v119 - v63;
                v105 = v72;
                v73 = v120 - v68;
                v106 = v73;
                v114 = v2 != v71 * v71 + v72 * v72 + v73 * v73;
                v112 = v2;
                v113 = 1;
                v111 = v2;
                v110 = v2;
                v109 = v2;
                v108 = v2;
                v107 = v2;
                v101 = v69;
                v102 = v63;
                v103 = v68;
                sub_10265570(0, 0);
                (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                  dword_106B31F4,
                  &v101,
                  81931,
                  &v78,
                  v81);
                if ( *(_DWORD *)(dword_106CE63C + 48) )
                  sub_101A0AD0((int)v81, (int)v82, 255, 0, 0, 1, 5.0);
                if ( v83 < 1.0 )
                  break;
                v74 = (float *)sub_1019E380((int)&v118, 200.0);
                v75 = (char *)v74;
                if ( v74 )
                {
                  v76 = v118;
                  v87[0] = v118;
                  v87[1] = v119;
                  sub_1018AE30(v74, v118, v119);
                  v87[2] = v76;
                  if ( sub_101990E0((float *)v58, v87) )
                  {
                    v61 = v129;
                    if ( v75 != v129 )
                    {
                      v128 = 1;
                      v127 = v75;
                      goto LABEL_79;
                    }
                  }
                  break;
                }
                if ( ++v128 > 4 )
                  break;
                v2 = 0.0;
                v63 = v90;
                v69 = v89;
                v68 = v91;
              }
            }
            v58 = *(_DWORD *)(v58 + 32);
            v2 = 0.0;
          }
          while ( v58 );
        }
      }
      result = *(_DWORD *)(v88 + dword_10632624 + 8);
    }
    while ( result != -1 );
  }
  return result;
}
