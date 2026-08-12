void __thiscall sub_10055500(_DWORD *this, float a2)
{
  _DWORD *v2; // esi
  int (__thiscall *v3)(_DWORD *); // edx
  float *v4; // edi
  float *v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st6
  bool v10; // c0
  bool v11; // c3
  double v12; // st6
  double v13; // st5
  double v14; // st5
  double v15; // st7
  double v16; // st5
  int v17; // edi
  double v18; // st6
  double v19; // st7
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  float v23; // edi
  int v24; // ecx
  int v25; // ebx
  int v26; // edi
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ebx
  int v32; // esi
  int v33; // edi
  int v34; // ebx
  int v35; // ecx
  int v36; // eax
  int v37; // esi
  int v38; // eax
  bool v39; // zf
  int v40; // esi
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  float v44; // edi
  double v45; // st7
  float *v46; // ebx
  double v47; // st7
  int v48; // eax
  double v49; // st7
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  float *v53; // edx
  long double v54; // st6
  long double v55; // rt1
  long double v56; // st6
  double v57; // st6
  float *v58; // edi
  double v59; // st7
  double v60; // st3
  double v61; // st4
  double v62; // st1
  double v63; // st2
  double v64; // st5
  float *v65; // ebx
  double v66; // rt0
  double v67; // st2
  double v68; // st7
  double v69; // st5
  double v70; // st6
  float v71; // [esp+0h] [ebp-B4h]
  float v72; // [esp+10h] [ebp-A4h]
  float v73; // [esp+18h] [ebp-9Ch]
  float v74; // [esp+1Ch] [ebp-98h]
  float v75; // [esp+20h] [ebp-94h]
  float v76; // [esp+2Ch] [ebp-88h]
  float v77; // [esp+30h] [ebp-84h]
  int v78; // [esp+34h] [ebp-80h] BYREF
  int v79; // [esp+38h] [ebp-7Ch]
  int v80; // [esp+3Ch] [ebp-78h] BYREF
  _DWORD v81[3]; // [esp+40h] [ebp-74h]
  int v82; // [esp+4Ch] [ebp-68h] BYREF
  int v83; // [esp+50h] [ebp-64h]
  int v84; // [esp+54h] [ebp-60h] BYREF
  int v85; // [esp+58h] [ebp-5Ch]
  int v86; // [esp+5Ch] [ebp-58h] BYREF
  int v87; // [esp+60h] [ebp-54h]
  int v88; // [esp+64h] [ebp-50h] BYREF
  int v89; // [esp+68h] [ebp-4Ch]
  int v90; // [esp+6Ch] [ebp-48h]
  float v91; // [esp+70h] [ebp-44h]
  float v92; // [esp+74h] [ebp-40h]
  int v93; // [esp+78h] [ebp-3Ch]
  float v94; // [esp+7Ch] [ebp-38h]
  int v95; // [esp+80h] [ebp-34h]
  int v96; // [esp+84h] [ebp-30h]
  int v97; // [esp+88h] [ebp-2Ch]
  float v98; // [esp+8Ch] [ebp-28h] BYREF
  float v99; // [esp+90h] [ebp-24h]
  float v100; // [esp+94h] [ebp-20h]
  float v101; // [esp+98h] [ebp-1Ch] BYREF
  float v102; // [esp+9Ch] [ebp-18h]
  float v103; // [esp+A0h] [ebp-14h]
  _DWORD *v104; // [esp+A4h] [ebp-10h]
  int v105; // [esp+A8h] [ebp-Ch]
  float v106; // [esp+ACh] [ebp-8h]
  char v107; // [esp+B3h] [ebp-1h]

  v2 = this;
  v3 = *(int (__thiscall **)(_DWORD *))(*(this - 298) + 36);
  v104 = this;
  v4 = (float *)v3(this - 298);
  v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*(v2 - 298) + 40))(v2 - 298);
  v6 = 0.1;
  if ( fabs(*v4 - *((float *)v2 + 147)) > 0.1
    || fabs(v4[1] - *((float *)v2 + 148)) > 0.1
    || fabs(v4[2] - *((float *)v2 + 149)) > 0.1
    || fabs(*v5 - *((float *)v2 + 150)) > 0.1
    || fabs(v5[1] - *((float *)v2 + 151)) > 0.1
    || fabs(v5[2] - *((float *)v2 + 152)) > 0.1
    || *((_BYTE *)v2 + 612) )
  {
    *((_BYTE *)v2 + 612) = 0;
    *((float *)v2 + 150) = *v5;
    *((float *)v2 + 151) = v5[1];
    *((float *)v2 + 152) = v5[2];
    *((float *)v2 + 147) = *v4;
    *((float *)v2 + 148) = v4[1];
    *((float *)v2 + 149) = v4[2];
    sub_1008EA70(v2 - 208, v2 - 205, &v101, &v98);
    v7 = *((float *)v2 + 133);
    v101 = v101 - v7;
    v102 = v102 - v7;
    v103 = v103 - v7;
    v8 = *((float *)v2 + 133);
    v98 = v8 + v98;
    v99 = v8 + v99;
    v100 = v8 + v100;
    sub_100EC3F0(&v101, &v98, 1);
    v6 = 0.1;
  }
  v9 = *((float *)v2 + 130);
  v10 = v9 < *((float *)v2 + 132);
  v11 = v9 == *((float *)v2 + 132);
  v12 = a2;
  if ( v10 || v11 )
  {
    if ( *((float *)v2 + 130) < (double)*((float *)v2 + 132) )
    {
      v14 = *((float *)v2 + 132) - *((float *)v2 + 127) * v12;
      *((float *)v2 + 132) = v14;
      if ( v14 < *((float *)v2 + 130) )
        goto LABEL_14;
    }
  }
  else
  {
    v13 = *((float *)v2 + 127) * v12 + *((float *)v2 + 132);
    *((float *)v2 + 132) = v13;
    if ( v13 > *((float *)v2 + 130) )
LABEL_14:
      *((float *)v2 + 132) = *((float *)v2 + 130);
  }
  if ( 0.0 != *((float *)v2 + 132) )
  {
    v15 = v6 + *((float *)v2 + 129);
    v16 = *((float *)v2 + 126);
    v17 = 0;
    v81[0] = -1;
    v81[1] = 0;
    v81[2] = 1;
    v18 = v16 / v15;
    v19 = a2;
    v91 = v18;
    v92 = v18 * 0.5;
    if ( (LODWORD(v91) & 0x7F800000) != 0x7F800000 && (LODWORD(v92) & 0x7F800000) != 0x7F800000 )
    {
      v20 = 0;
      v87 = v2[137] * v2[138] * v2[139];
      v105 = 0;
      if ( v87 > 0 )
      {
        v90 = 0;
        while ( 1 )
        {
          v21 = v2[136];
          v22 = *(_DWORD *)(v17 + v21);
          LODWORD(v23) = v21 + v17;
          v94 = v23;
          if ( !v22 )
            goto LABEL_50;
          v24 = *(_DWORD *)(LODWORD(v23) + 4);
          if ( v24 == -1 )
            break;
          v46 = (float *)(v21 + 24 * v24);
          if ( LODWORD(v23) < (unsigned int)v46 )
          {
            v47 = v19 + v46[2];
            v48 = v105;
            v46[2] = v47;
            *(float *)(LODWORD(v23) + 8) = v47;
            sub_10054C60(v2 - 298, v48, &v84, &v80, &v86);
            sub_100550F0((float *)v2 - 298, &v98, v84, v80, v86);
            sub_10054C60(v2 - 298, *(_DWORD *)(LODWORD(v23) + 4), &v88, &v82, &v78);
            sub_100550F0((float *)v2 - 298, &v101, v88, v82, v78);
            if ( *(float *)(LODWORD(v23) + 12) > (double)*(float *)(LODWORD(v23) + 8) )
            {
              v53 = *(float **)LODWORD(v23);
              v54 = (cos(
                       (*(float *)(LODWORD(v23) + 8) + *(float *)(LODWORD(v23) + 8))
                     * 1.5707964
                     / *(float *)(LODWORD(v23) + 12))
                   + 1.0)
                  * 0.5;
              v106 = v54;
              v55 = v54;
              v56 = 1.0 - v54;
              v94 = v56;
              v53[8] = v56 * (v46[4] - *(float *)(LODWORD(v23) + 16)) + *(float *)(LODWORD(v23) + 16);
              *(float *)(*(_DWORD *)v46 + 32) = v55 * (v46[4] - *(float *)(LODWORD(v23) + 16))
                                              + *(float *)(LODWORD(v23) + 16);
              v71 = v56;
              sub_10159040(v71);
              sub_10159040(v106);
              v57 = v98;
              v58 = *(float **)LODWORD(v23);
              v59 = v101 - v98;
              v60 = v102 - v99;
              v61 = v99;
              v76 = v60;
              v62 = v103 - v100;
              v63 = v100;
              v77 = v62;
              v74 = v59 * v94;
              v75 = v76 * v94;
              v72 = v74 + v98;
              v64 = v75 + v99;
              v73 = v94 * v77 + v100;
              v58[3] = v72;
              v58[4] = v64;
              v58[5] = v73;
              v65 = *(float **)v46;
              v2 = v104;
              v66 = v63;
              v67 = v59 * v106;
              v68 = v66 + v62 * v106;
              v69 = v57 + v67;
              v70 = v61 + v60 * v106;
              v65[3] = v69;
              v65[4] = v70;
              v65[5] = v68;
            }
            else
            {
              v49 = v101;
              v46[1] = NAN;
              *(_DWORD *)(LODWORD(v23) + 4) = -1;
              v50 = *(float **)LODWORD(v23);
              v50[3] = v49;
              v50[4] = v102;
              v50[5] = v103;
              v51 = *(float **)v46;
              v51[3] = v98;
              v51[4] = v99;
              v51[5] = v100;
              v52 = *(float **)LODWORD(v23);
              *(_DWORD *)LODWORD(v23) = *(_DWORD *)v46;
              *(_DWORD *)v46 = v52;
            }
          }
LABEL_50:
          v20 = v105 + 1;
          v17 = v90 + 24;
          v105 = v20;
          v90 += 24;
          if ( v20 >= v87 )
            return;
          v19 = a2;
        }
        v25 = v105;
        *(float *)(v22 + 32) = *(float *)(LODWORD(v23) + 16);
        *(_BYTE *)(*(_DWORD *)LODWORD(v23) + 37) = *(_BYTE *)(LODWORD(v23) + 20);
        *(_BYTE *)(*(_DWORD *)LODWORD(v23) + 38) = *(_BYTE *)(LODWORD(v23) + 21);
        *(_BYTE *)(*(_DWORD *)LODWORD(v23) + 39) = *(_BYTE *)(LODWORD(v23) + 22);
        v26 = v2[137];
        v27 = v26 * v2[138];
        v28 = v20 / v27;
        v29 = v20 / v27 * v27;
        v89 = v28;
        v30 = (v25 - v29) / v26;
        v31 = v25 - v30 * v26 - v29;
        v93 = v30;
        v97 = v31;
        v83 = sub_10115FB0();
        v79 = sub_10115FB0();
        v85 = sub_10115FB0();
        v107 = 0;
        v95 = 0;
LABEL_24:
        if ( v107 )
          goto LABEL_50;
        v96 = 0;
LABEL_26:
        if ( v107 )
          goto LABEL_44;
        *(float *)&v32 = 0.0;
        v106 = 0.0;
        v33 = v31 + v81[(v95 + v83) % 3];
        v34 = v93 + v81[(v79 + v96) % 3];
        while ( 1 )
        {
          v35 = v89 + v81[(v32 + v85) % 3];
          if ( (v33 != v97 || v34 != v93 || v35 != v89) && v33 >= 0 && v34 >= 0 && v35 >= 0 && v33 < v104[137] )
          {
            v36 = v104[138];
            if ( v34 < v36 && v35 < v104[139] )
            {
              v37 = v104[136];
              v38 = 3 * (v33 + v104[137] * (v34 + v35 * v36));
              v39 = *(_DWORD *)(v37 + 8 * v38) == 0;
              v40 = v37 + 8 * v38;
              if ( !v39 && *(_DWORD *)(v40 + 4) == -1 )
              {
                v41 = v35 * v104[138];
                v42 = v105;
                v43 = v33 + v104[137] * (v34 + v41);
                v44 = v94;
                *(_DWORD *)(LODWORD(v94) + 4) = v43;
                *(_DWORD *)(v40 + 4) = v42;
                *(float *)(v40 + 8) = 0.0;
                *(float *)(LODWORD(v44) + 8) = 0.0;
                v106 = COERCE_FLOAT(sub_10115FB0());
                v107 = 1;
                v45 = v92 + (v91 - v92) * ((double)SLODWORD(v106) * 0.000030518509);
                *(float *)(LODWORD(v44) + 12) = v45;
                *(float *)(v40 + 12) = v45;
LABEL_43:
                v2 = v104;
                v31 = v97;
                if ( ++v96 >= 3 )
                {
LABEL_44:
                  if ( ++v95 >= 3 )
                    goto LABEL_50;
                  goto LABEL_24;
                }
                goto LABEL_26;
              }
              *(float *)&v32 = v106;
            }
          }
          ++v32;
          v106 = *(float *)&v32;
          if ( v32 >= 3 )
            goto LABEL_43;
        }
      }
    }
  }
}
