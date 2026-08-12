void __thiscall sub_1018DD90(float *this, int a2, float a3)
{
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int i; // esi
  float *v22; // eax
  double v23; // st4
  double v24; // st7
  double v25; // st7
  double v26; // st6
  float *v27; // eax
  double v28; // st7
  float *v29; // eax
  _DWORD *v30; // esi
  double v31; // st6
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  int v38; // ebx
  int v39; // edi
  int j; // esi
  float *v41; // eax
  double v42; // st4
  double v43; // st7
  double v44; // st7
  double v45; // st6
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  _DWORD *v49; // esi
  double v50; // st6
  int v51; // edi
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // ecx
  int v56; // eax
  int v57; // ebx
  int v58; // edi
  int k; // esi
  float *v60; // eax
  double v61; // st4
  double v62; // st7
  double v63; // st7
  double v64; // st6
  float *v65; // ecx
  double v66; // st7
  double v67; // st6
  _DWORD *v68; // esi
  int v69; // edi
  int v70; // eax
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  int v76; // ebx
  int v77; // edi
  int m; // esi
  float *v79; // eax
  double v80; // st4
  double v81; // st7
  float v82; // [esp+0h] [ebp-74h]
  float v83; // [esp+0h] [ebp-74h]
  float v84; // [esp+0h] [ebp-74h]
  float v85; // [esp+0h] [ebp-74h]
  float v86; // [esp+18h] [ebp-5Ch]
  float v87; // [esp+18h] [ebp-5Ch]
  float v88; // [esp+18h] [ebp-5Ch]
  float v89; // [esp+18h] [ebp-5Ch]
  float v90; // [esp+1Ch] [ebp-58h] BYREF
  float v91; // [esp+20h] [ebp-54h]
  float v92; // [esp+24h] [ebp-50h]
  float v93[2]; // [esp+28h] [ebp-4Ch] BYREF
  float v94; // [esp+30h] [ebp-44h]
  float v95[2]; // [esp+34h] [ebp-40h] BYREF
  float v96; // [esp+3Ch] [ebp-38h]
  float v97; // [esp+40h] [ebp-34h] BYREF
  float v98; // [esp+44h] [ebp-30h]
  float v99; // [esp+48h] [ebp-2Ch]
  float v100; // [esp+4Ch] [ebp-28h]
  float v101; // [esp+50h] [ebp-24h]
  float v102; // [esp+54h] [ebp-20h]
  float v103; // [esp+58h] [ebp-1Ch]
  float v104; // [esp+5Ch] [ebp-18h]
  int v105; // [esp+60h] [ebp-14h]
  _DWORD *v106; // [esp+64h] [ebp-10h]
  int v107; // [esp+68h] [ebp-Ch]
  int v108; // [esp+6Ch] [ebp-8h]
  float *v109; // [esp+70h] [ebp-4h]
  int v110; // [esp+7Ch] [ebp+8h]
  int v111; // [esp+7Ch] [ebp+8h]
  float v112; // [esp+80h] [ebp+Ch]
  int v113; // [esp+80h] [ebp+Ch]
  float v114; // [esp+80h] [ebp+Ch]
  int v115; // [esp+80h] [ebp+Ch]
  float v116; // [esp+80h] [ebp+Ch]
  int v117; // [esp+80h] [ebp+Ch]
  int v118; // [esp+80h] [ebp+Ch]

  v4 = a3 + this[1];
  v109 = this;
  v97 = v4;
  v98 = this[2] + a3;
  v99 = this[3];
  v90 = this[4] - a3;
  v91 = this[5] - a3;
  v92 = this[6];
  v95[0] = v90;
  v95[1] = v98;
  v96 = this[13];
  v93[0] = v4;
  v93[1] = v91;
  v94 = this[14];
  if ( !a2 || a2 == 4 )
  {
    v112 = sub_1018B7B0(COERCE_FLOAT(&v97), v95);
    v5 = sub_1018B7B0(COERCE_FLOAT(&v97), v93);
    if ( fabs(v112 - v5) <= 18.0 )
    {
      v5 = v112;
      v6 = v99;
    }
    else
    {
      v6 = v99;
      if ( fabs(v99 - v5) >= fabs(v99 - v112) )
        v5 = v112;
    }
    v7 = (double)(int)(v5 - v6);
    v104 = v7;
    v8 = this[3] + v7;
    this[3] = v8;
    this[7] = (this[4] + this[1]) * 0.5;
    this[8] = (this[5] + this[2]) * 0.5;
    this[9] = (v8 + this[6]) * 0.5;
    if ( *(float *)(dword_106B7B0C + 44) > 0.0 )
    {
      if ( !++dword_10632620 )
        dword_10632620 = 1;
      v9 = v109;
      *((_DWORD *)v109 + 123) = dword_10632620;
      v105 = *(int *)(dword_106B7B0C + 44);
      if ( (dword_106B7B8C & 1) == 0 )
        dword_106B7B8C |= 1u;
      v10 = v9[1];
      v11 = v9[2];
      v12 = (_DWORD *)dword_106B8370;
      v102 = v9[3];
      v100 = v10;
      v101 = v11;
      v102 = v102 - v7;
      v13 = (int)((v10 - *(float *)(dword_106B8370 + 20)) / *(float *)(dword_106B8370 + 8));
      if ( v13 >= 0 )
      {
        v14 = *(_DWORD *)(dword_106B8370 + 12);
        if ( v13 >= v14 )
          v13 = v14 - 1;
      }
      else
      {
        v13 = 0;
      }
      v15 = (int)((v101 - *(float *)(dword_106B8370 + 24)) / *(float *)(dword_106B8370 + 8));
      v107 = v15;
      if ( v15 >= 0 )
      {
        v16 = *(_DWORD *)(dword_106B8370 + 16);
        if ( v15 >= v16 )
          v107 = v16 - 1;
      }
      else
      {
        v107 = 0;
      }
      v108 = v13 - 1;
      LODWORD(v103) = v13 + 1;
      if ( !__OFSUB__(v13 - 1, v13 + 1) || v13 - 1 == v13 + 1 )
      {
        v17 = dword_10632620;
        do
        {
          if ( v108 >= 0 && v108 < v12[3] )
          {
            v113 = v107 - 1;
            if ( !__OFSUB__(v107 - 1, v107 + 1) || v107 - 1 == v107 + 1 )
            {
              do
              {
                if ( v113 >= 0 && v113 < v12[4] )
                {
                  v106 = (_DWORD *)(v12[1] + 36 * (v108 + v113 * v12[3]));
                  v18 = v106[3];
                  if ( v18 != -1 )
                  {
                    do
                    {
                      v19 = 12 * v18;
                      v20 = *(_DWORD *)(12 * v18 + *v106);
                      if ( *(_DWORD *)(v20 + 492) != v17 )
                      {
                        *(_DWORD *)(v20 + 492) = v17;
                        for ( i = 0; i < 4; ++i )
                        {
                          v22 = sub_1018B480((float *)v20, i);
                          v86 = v22[2];
                          v23 = *v22 - v100;
                          v82 = (v86 - v102) * (v86 - v102) + v23 * v23 + (v22[1] - v101) * (v22[1] - v101);
                          v24 = off_10689708(v82);
                          if ( v24 < *(float *)&v105 )
                            sub_1018DAE0(v20, i, (int)(v104 + v102 - v86), 0);
                        }
                        v17 = dword_10632620;
                      }
                      v18 = *(_DWORD *)(v19 + *v106 + 8);
                    }
                    while ( v18 != -1 );
                    v12 = (_DWORD *)dword_106B8370;
                  }
                }
                ++v113;
              }
              while ( v113 <= v107 + 1 );
            }
          }
          ++v108;
        }
        while ( v108 <= SLODWORD(v103) );
      }
    }
  }
  if ( a2 == 1 || a2 == 4 )
  {
    v114 = sub_1018B7B0(COERCE_FLOAT(v95), &v97);
    v25 = sub_1018B7B0(COERCE_FLOAT(v95), &v90);
    if ( fabs(v114 - v25) <= 18.0 )
    {
      v25 = v114;
      v26 = v96;
    }
    else
    {
      v26 = v96;
      if ( fabs(v96 - v25) >= fabs(v96 - v114) )
        v25 = v114;
    }
    v27 = v109;
    v28 = (double)(int)(v25 - v26);
    v104 = v28;
    v109[13] = v28 + v109[13];
    v27[7] = (v27[4] + v27[1]) * 0.5;
    v27[8] = (v27[5] + v27[2]) * 0.5;
    v27[9] = 0.5 * (v27[6] + v27[3]);
    if ( *(float *)(dword_106B7B0C + 44) > 0.0 )
    {
      if ( !++dword_10632620 )
        dword_10632620 = 1;
      v29 = v109;
      *((_DWORD *)v109 + 123) = dword_10632620;
      v103 = *(float *)(dword_106B7B0C + 44);
      if ( (dword_106B7B8C & 1) == 0 )
        dword_106B7B8C |= 1u;
      v30 = (_DWORD *)dword_106B8370;
      flt_106B7B80 = v29[4];
      flt_106B7B84 = v29[2];
      v31 = v29[13];
      flt_106B7B88 = v29[13];
      v100 = flt_106B7B80;
      v101 = flt_106B7B84;
      v102 = v31 - v28;
      v32 = (int)((flt_106B7B80 - *(float *)(dword_106B8370 + 20)) / *(float *)(dword_106B8370 + 8));
      if ( v32 >= 0 )
      {
        v33 = *(_DWORD *)(dword_106B8370 + 12);
        if ( v32 >= v33 )
          v32 = v33 - 1;
      }
      else
      {
        v32 = 0;
      }
      v34 = (int)((v101 - *(float *)(dword_106B8370 + 24)) / *(float *)(dword_106B8370 + 8));
      v107 = v34;
      if ( v34 >= 0 )
      {
        v35 = *(_DWORD *)(dword_106B8370 + 16);
        if ( v34 >= v35 )
          v107 = v35 - 1;
      }
      else
      {
        v107 = 0;
      }
      v108 = v32 - 1;
      v105 = v32 + 1;
      if ( !__OFSUB__(v32 - 1, v32 + 1) || v32 - 1 == v32 + 1 )
      {
        v36 = dword_10632620;
        do
        {
          if ( v108 >= 0 && v108 < v30[3] )
          {
            v115 = v107 - 1;
            if ( !__OFSUB__(v107 - 1, v107 + 1) || v107 - 1 == v107 + 1 )
            {
              do
              {
                if ( v115 >= 0 && v115 < v30[4] )
                {
                  v106 = (_DWORD *)(v30[1] + 36 * (v108 + v115 * v30[3]));
                  v37 = v106[3];
                  if ( v37 != -1 )
                  {
                    do
                    {
                      v38 = 12 * v37;
                      v39 = *(_DWORD *)(12 * v37 + *v106);
                      if ( *(_DWORD *)(v39 + 492) != v36 )
                      {
                        *(_DWORD *)(v39 + 492) = v36;
                        for ( j = 0; j < 4; ++j )
                        {
                          v41 = sub_1018B480((float *)v39, j);
                          v87 = v41[2];
                          v42 = v41[1] - v101;
                          v83 = v42 * v42 + (*v41 - v100) * (*v41 - v100) + (v87 - v102) * (v87 - v102);
                          v43 = off_10689708(v83);
                          if ( v43 < v103 )
                            sub_1018DAE0(v39, j, (int)(v104 + v102 - v87), 0);
                        }
                        v36 = dword_10632620;
                      }
                      v37 = *(_DWORD *)(v38 + *v106 + 8);
                    }
                    while ( v37 != -1 );
                    v30 = (_DWORD *)dword_106B8370;
                  }
                }
                ++v115;
              }
              while ( v115 <= v107 + 1 );
            }
          }
          ++v108;
        }
        while ( v108 <= v105 );
      }
    }
  }
  if ( a2 == 3 || a2 == 4 )
  {
    v116 = sub_1018B7B0(COERCE_FLOAT(v93), &v97);
    v44 = sub_1018B7B0(COERCE_FLOAT(v93), &v90);
    if ( fabs(v116 - v44) <= 18.0 )
    {
      v44 = v116;
      v45 = v94;
    }
    else
    {
      v45 = v94;
      if ( fabs(v94 - v44) >= fabs(v94 - v116) )
        v44 = v116;
    }
    v46 = v109;
    v47 = (double)(int)(v44 - v45);
    v104 = v47;
    v109[14] = v47 + v109[14];
    v46[7] = (v46[4] + v46[1]) * 0.5;
    v46[8] = (v46[2] + v46[5]) * 0.5;
    v46[9] = 0.5 * (v46[6] + v46[3]);
    if ( *(float *)(dword_106B7B0C + 44) > 0.0 )
    {
      if ( !++dword_10632620 )
        dword_10632620 = 1;
      v48 = v109;
      *((_DWORD *)v109 + 123) = dword_10632620;
      v103 = *(float *)(dword_106B7B0C + 44);
      if ( (dword_106B7B8C & 1) == 0 )
        dword_106B7B8C |= 1u;
      v49 = (_DWORD *)dword_106B8370;
      flt_106B7B80 = v48[1];
      flt_106B7B84 = v48[5];
      v50 = v48[14];
      flt_106B7B88 = v48[14];
      v100 = flt_106B7B80;
      v101 = flt_106B7B84;
      v102 = v50 - v47;
      v51 = (int)((flt_106B7B80 - *(float *)(dword_106B8370 + 20)) / *(float *)(dword_106B8370 + 8));
      if ( v51 >= 0 )
      {
        v52 = *(_DWORD *)(dword_106B8370 + 12);
        if ( v51 >= v52 )
          v51 = v52 - 1;
      }
      else
      {
        v51 = 0;
      }
      v53 = (int)((v101 - *(float *)(dword_106B8370 + 24)) / *(float *)(dword_106B8370 + 8));
      v107 = v53;
      if ( v53 >= 0 )
      {
        v54 = *(_DWORD *)(dword_106B8370 + 16);
        if ( v53 >= v54 )
          v107 = v54 - 1;
      }
      else
      {
        v107 = 0;
      }
      v108 = v51 - 1;
      v105 = v51 + 1;
      if ( !__OFSUB__(v51 - 1, v51 + 1) || v51 - 1 == v51 + 1 )
      {
        v55 = dword_10632620;
        do
        {
          if ( v108 >= 0 && v108 < v49[3] )
          {
            v117 = v107 - 1;
            if ( !__OFSUB__(v107 - 1, v107 + 1) || v107 - 1 == v107 + 1 )
            {
              do
              {
                if ( v117 >= 0 && v117 < v49[4] )
                {
                  v106 = (_DWORD *)(v49[1] + 36 * (v108 + v117 * v49[3]));
                  v56 = v106[3];
                  if ( v56 != -1 )
                  {
                    do
                    {
                      v57 = 12 * v56;
                      v58 = *(_DWORD *)(12 * v56 + *v106);
                      if ( *(_DWORD *)(v58 + 492) != v55 )
                      {
                        *(_DWORD *)(v58 + 492) = v55;
                        for ( k = 0; k < 4; ++k )
                        {
                          v60 = sub_1018B480((float *)v58, k);
                          v88 = v60[2];
                          v61 = *v60 - v100;
                          v84 = (v88 - v102) * (v88 - v102) + v61 * v61 + (v60[1] - v101) * (v60[1] - v101);
                          v62 = off_10689708(v84);
                          if ( v62 < v103 )
                            sub_1018DAE0(v58, k, (int)(v104 + v102 - v88), 0);
                        }
                        v55 = dword_10632620;
                      }
                      v56 = *(_DWORD *)(v57 + *v106 + 8);
                    }
                    while ( v56 != -1 );
                    v49 = (_DWORD *)dword_106B8370;
                  }
                }
                ++v117;
              }
              while ( v117 <= v107 + 1 );
            }
          }
          ++v108;
        }
        while ( v108 <= v105 );
      }
    }
  }
  if ( a2 == 2 || a2 == 4 )
  {
    *(float *)&v110 = sub_1018B7B0(COERCE_FLOAT(&v90), v95);
    v63 = sub_1018B7B0(COERCE_FLOAT(&v90), v93);
    if ( fabs(*(float *)&v110 - v63) <= 18.0 )
    {
      v63 = *(float *)&v110;
      v64 = v92;
    }
    else
    {
      v64 = v92;
      if ( fabs(v92 - v63) >= fabs(v92 - *(float *)&v110) )
        v63 = *(float *)&v110;
    }
    v65 = v109;
    v66 = (double)(int)(v63 - v64);
    v104 = v66;
    v67 = v66 + v109[6];
    v109[6] = v67;
    v65[7] = (v65[4] + v65[1]) * 0.5;
    v65[8] = (v65[5] + v65[2]) * 0.5;
    v65[9] = (v67 + v65[3]) * 0.5;
    if ( *(float *)(dword_106B7B0C + 44) > 0.0 )
    {
      if ( !++dword_10632620 )
        dword_10632620 = 1;
      *((_DWORD *)v65 + 123) = dword_10632620;
      v103 = *(float *)(dword_106B7B0C + 44);
      if ( (dword_106B7B8C & 1) == 0 )
        dword_106B7B8C |= 1u;
      v68 = (_DWORD *)dword_106B8370;
      v100 = v65[4];
      v102 = v65[6];
      v101 = v65[5];
      v102 = v102 - v66;
      v69 = (int)((v100 - *(float *)(dword_106B8370 + 20)) / *(float *)(dword_106B8370 + 8));
      if ( v69 >= 0 )
      {
        v70 = *(_DWORD *)(dword_106B8370 + 12);
        if ( v69 >= v70 )
          v69 = v70 - 1;
      }
      else
      {
        v69 = 0;
      }
      v71 = (int)((v101 - *(float *)(dword_106B8370 + 24)) / *(float *)(dword_106B8370 + 8));
      v107 = v71;
      if ( v71 >= 0 )
      {
        v72 = *(_DWORD *)(dword_106B8370 + 16);
        if ( v71 >= v72 )
          v107 = v72 - 1;
      }
      else
      {
        v107 = 0;
      }
      v73 = v69 - 1;
      v118 = v69 - 1;
      v105 = v69 + 1;
      if ( !__OFSUB__(v69 - 1, v69 + 1) || v69 - 1 == v69 + 1 )
      {
        v74 = dword_10632620;
        while ( 1 )
        {
          if ( v73 >= 0 && v118 < v68[3] )
          {
            v111 = v107 - 1;
            if ( !__OFSUB__(v107 - 1, v107 + 1) || v107 - 1 == v107 + 1 )
            {
              do
              {
                if ( v111 >= 0 && v111 < v68[4] )
                {
                  v106 = (_DWORD *)(v68[1] + 36 * (v118 + v111 * v68[3]));
                  v75 = v106[3];
                  if ( v75 != -1 )
                  {
                    do
                    {
                      v76 = 12 * v75;
                      v77 = *(_DWORD *)(12 * v75 + *v106);
                      if ( *(_DWORD *)(v77 + 492) != v74 )
                      {
                        *(_DWORD *)(v77 + 492) = v74;
                        for ( m = 0; m < 4; ++m )
                        {
                          v79 = sub_1018B480((float *)v77, m);
                          v89 = v79[2];
                          v80 = *v79 - v100;
                          v85 = (v89 - v102) * (v89 - v102) + v80 * v80 + (v79[1] - v101) * (v79[1] - v101);
                          v81 = off_10689708(v85);
                          if ( v81 < v103 )
                            sub_1018DAE0(v77, m, (int)(v104 + v102 - v89), 0);
                        }
                        v74 = dword_10632620;
                      }
                      v75 = *(_DWORD *)(v76 + *v106 + 8);
                    }
                    while ( v75 != -1 );
                    v68 = (_DWORD *)dword_106B8370;
                  }
                }
                ++v111;
              }
              while ( v111 <= v107 + 1 );
            }
          }
          if ( ++v118 > v105 )
            break;
          v73 = v118;
        }
      }
    }
  }
}
