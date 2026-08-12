void __usercall sub_100A1210(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  double v4; // st7
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  double v7; // st6
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  bool v13; // zf
  int v14; // eax
  int v15; // edi
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edi
  double v28; // st6
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st7
  double v33; // st7
  double v34; // st7
  double v35; // st7
  char v36; // al
  double v37; // st7
  double v38; // st7
  long double v39; // st7
  float *v40; // eax
  double v41; // st7
  double v42; // st6
  double v43; // st7
  int v44; // eax
  int v45; // esi
  double v46; // st7
  double v47; // st7
  double v48; // st7
  char v49; // al
  double v50; // st7
  int v51; // eax
  int v52; // eax
  int v53; // edi
  double v54; // st6
  long double v55; // st6
  long double v56; // st7
  char v57; // al
  int v58; // eax
  char v59; // al
  double v60; // st7
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // edi
  double v65; // st6
  long double v66; // st6
  long double v67; // st7
  char v68; // al
  int v69; // eax
  unsigned __int8 v70; // al
  double v71; // st7
  float v72; // [esp+11Ch] [ebp-9Ch]
  int v73; // [esp+11Ch] [ebp-9Ch]
  _BYTE v76[12]; // [esp+130h] [ebp-88h] BYREF
  _BYTE v77[12]; // [esp+13Ch] [ebp-7Ch] BYREF
  float v78; // [esp+148h] [ebp-70h] BYREF
  float v79; // [esp+14Ch] [ebp-6Ch]
  float v80; // [esp+150h] [ebp-68h]
  float v81; // [esp+154h] [ebp-64h] BYREF
  float v82; // [esp+158h] [ebp-60h]
  float v83; // [esp+15Ch] [ebp-5Ch]
  float v84; // [esp+160h] [ebp-58h] BYREF
  float v85; // [esp+164h] [ebp-54h]
  float v86; // [esp+168h] [ebp-50h]
  float v87; // [esp+16Ch] [ebp-4Ch] BYREF
  float v88; // [esp+170h] [ebp-48h] BYREF
  float v89; // [esp+174h] [ebp-44h]
  float v90; // [esp+178h] [ebp-40h] BYREF
  float v91; // [esp+17Ch] [ebp-3Ch]
  float v92; // [esp+180h] [ebp-38h]
  float v93; // [esp+184h] [ebp-34h] BYREF
  int v94; // [esp+188h] [ebp-30h] BYREF
  _DWORD *v95; // [esp+18Ch] [ebp-2Ch]
  float v96; // [esp+190h] [ebp-28h]
  float v97; // [esp+194h] [ebp-24h] BYREF
  float v98; // [esp+198h] [ebp-20h]
  float v99; // [esp+19Ch] [ebp-1Ch]
  int v100; // [esp+1A0h] [ebp-18h]
  float v101; // [esp+1A4h] [ebp-14h]
  int v102; // [esp+1A8h] [ebp-10h] BYREF
  float v103; // [esp+1ACh] [ebp-Ch]
  float *v104; // [esp+1B0h] [ebp-8h]
  int v105; // [esp+1B4h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(a1 + 32) & 0x40) == 0 )
  {
    v4 = *(float *)(a1 + 28);
    v101 = *(float *)(a1 + 28);
    if ( v4 >= 2.0 )
    {
      if ( v4 > 2.0 )
      {
        v4 = 2.0;
        v101 = 2.0;
      }
    }
    else
    {
      v4 = 2.0;
      v101 = 2.0;
    }
    v96 = 1.0 - v4 * 0.15000001;
    v5 = (_DWORD *)sub_100DDA40(260);
    if ( v5 )
    {
      sub_100F2BA0("exp_smoke");
      *v5 = &CExplosionParticle::`vftable';
    }
    else
    {
      v5 = 0;
    }
    v6 = 0;
    v95 = 0;
    if ( v5 )
    {
      sub_100F2950(v5);
      v95 = v5;
      v6 = v5;
    }
    sub_100F3060(a1 + 4);
    sub_100F29C0(64.0, 128.0);
    v84 = *(float *)(a1 + 4) + 128.0;
    v85 = *(float *)(a1 + 8) + 128.0;
    v86 = *(float *)(a1 + 12) + 128.0;
    v78 = *(float *)(a1 + 4) - 128.0;
    v79 = *(float *)(a1 + 8) - 128.0;
    v80 = *(float *)(a1 + 12) - 128.0;
    sub_100EC3F0(&v78, &v84, 1);
    if ( !*(_DWORD *)(a1 + 36) )
      *(_DWORD *)(a1 + 36) = dword_1043DF24;
    v7 = *(float *)(a1 + 20) * 32.0 + *(float *)(a1 + 8);
    v8 = 32.0 * *(float *)(a1 + 24) + *(float *)(a1 + 12);
    v97 = *(float *)(a1 + 16) * 32.0 + *(float *)(a1 + 4);
    v98 = v7;
    v99 = v8;
    (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, &v90, &v97, 1);
    v9 = flt_10459240;
    if ( v90 == flt_10459240
      && (v10 = *(float *)&qword_10459244, v91 == *(float *)&qword_10459244)
      && (v11 = *((float *)&qword_10459244 + 1), v92 == *((float *)&qword_10459244 + 1)) )
    {
      v12 = 0.0;
    }
    else
    {
      sub_100A64D0(&v90, &v81, &v93);
      v10 = v82;
      v9 = v81;
      v12 = v93;
      v11 = v83;
    }
    v13 = *(_BYTE *)(a1 + 32) >= 0;
    v81 = v9 * 0.25 + 0.75;
    v82 = v10 * 0.25 + 0.75;
    v83 = v11 * 0.25 + 0.75;
    v93 = v12 * 255.0;
    if ( v13 )
    {
      v94 = 4;
      do
      {
        v14 = sub_100F2B60(60, *(_DWORD *)(a1 + 36), a1 + 4);
        v15 = v14;
        if ( v14 )
        {
          *(float *)(v14 + 44) = 0.0;
          *(float *)(v14 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   2.0,
                                   3.0);
          v72 = -v96;
          sub_10041FA0((float *)(v15 + 24), v72, v96);
          v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  6.0);
          v17 = v16 * *(float *)(a1 + 16);
          v18 = *(float *)(a1 + 20) * v16;
          v19 = v16 * *(float *)(a1 + 24);
          *(float *)(v15 + 24) = v17 + *(float *)(v15 + 24);
          *(float *)(v15 + 28) = v18 + *(float *)(v15 + 28);
          *(float *)(v15 + 32) = v19 + *(float *)(v15 + 32);
          off_103EDFEC();
          v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  750.0);
          *(float *)&v102 = v20 * v101;
          sub_100A0B60((float *)(v15 + 24), (float *)(a1 + 16), v96, (float *)&v102);
          v21 = *(float *)&v102;
          *(float *)(v15 + 24) = *(float *)(v15 + 24) * *(float *)&v102;
          *(float *)(v15 + 28) = *(float *)(v15 + 28) * v21;
          *(float *)(v15 + 32) = v21 * *(float *)(v15 + 32);
          v22 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          (int)(v93 * 0.5),
                          (int)v93);
          *(_BYTE *)(v15 + 48) = (int)(v90 * v22);
          *(_BYTE *)(v15 + 49) = (int)(v91 * v22);
          v23 = v22 * v92;
          *(_DWORD *)(v15 + 51) = -1874329345;
          v105 = (int)v23;
          *(_BYTE *)(v15 + 50) = (int)v23;
          *(float *)&v105 = COERCE_FLOAT(
                              (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                0,
                                360));
          *(float *)(v15 + 36) = (float)v105;
          *(float *)(v15 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   -2.0,
                                   2.0);
        }
        --v94;
      }
      while ( *(float *)&v94 != 0.0 );
      v100 = 8;
      do
      {
        *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
        v97 = (double)v105 * 0.000030518509 * 32.0 - 16.0;
        *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
        v98 = (double)v105 * 0.000030518509 * 32.0 - 16.0;
        v24 = sub_10115FB0();
        v25 = *(_DWORD *)(a1 + 36);
        v105 = v24;
        v97 = v97 + *(float *)(a1 + 4);
        v98 = v98 + *(float *)(a1 + 8);
        v99 = (double)v24 * 0.000030518509 * 32.0 - 16.0 + *(float *)(a1 + 12);
        v26 = sub_100F2B60(60, v25, &v97);
        v27 = v26;
        if ( v26 )
        {
          *(float *)(v26 + 44) = 0.0;
          *(float *)(v26 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.5,
                                   1.0);
          v28 = -v96;
          *(float *)&v102 = v28;
          v103 = v96 - v28;
          *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
          *(float *)(v27 + 24) = (double)v105 * 0.000030518509 * v103 + *(float *)&v102;
          *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
          *(float *)(v27 + 28) = (double)v105 * 0.000030518509 * v103 + *(float *)&v102;
          *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
          *(float *)(v27 + 32) = (double)v105 * 0.000030518509 * v103 + *(float *)&v102;
          v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  6.0);
          v30 = v29 * *(float *)(a1 + 16);
          v31 = *(float *)(a1 + 20) * v29;
          v32 = v29 * *(float *)(a1 + 24);
          *(float *)(v27 + 24) = v30 + *(float *)(v27 + 24);
          *(float *)(v27 + 28) = v31 + *(float *)(v27 + 28);
          *(float *)(v27 + 32) = v32 + *(float *)(v27 + 32);
          off_103EDFEC();
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  2000.0);
          *(float *)&v94 = v33 * v101;
          sub_100A0B60((float *)(v27 + 24), (float *)(a1 + 16), v96, (float *)&v94);
          v34 = *(float *)&v94;
          *(float *)(v27 + 24) = *(float *)(v27 + 24) * *(float *)&v94;
          *(float *)(v27 + 28) = *(float *)(v27 + 28) * v34;
          *(float *)(v27 + 32) = v34 * *(float *)(v27 + 32);
          v35 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          (int)(v93 * 0.5),
                          (int)v93);
          *(_BYTE *)(v27 + 48) = (int)(v90 * v35);
          *(_BYTE *)(v27 + 49) = (int)(v91 * v35);
          v105 = (int)(v35 * v92);
          *(_BYTE *)(v27 + 50) = v105;
          v36 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
          *(_BYTE *)(v27 + 53) = v36;
          *(_BYTE *)(v27 + 54) = 2 * v36;
          v37 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  128.0,
                  255.0);
          *(_BYTE *)(v27 + 52) = 0;
          v105 = (int)v37;
          *(_BYTE *)(v27 + 51) = (int)v37;
          *(float *)&v105 = COERCE_FLOAT(
                              (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                0,
                                360));
          *(float *)(v27 + 36) = (float)v105;
          *(float *)(v27 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   -8.0,
                                   8.0);
        }
        --v100;
      }
      while ( *(float *)&v100 != 0.0 );
      sub_101EDAE0(a1 + 16, v76, v77);
      v38 = 0.0;
      v104 = &v87;
      *(float *)&v102 = COERCE_FLOAT(&v88);
      v94 = 32;
      while ( 1 )
      {
        *(float *)&v100 = v38 + 0.19634955;
        v39 = sin(*(float *)&v100);
        v40 = (float *)v102;
        *v104 = cos(*(float *)&v100);
        *v40 = v39;
        v89 = 0.0;
        v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                8.0,
                16.0);
        v84 = v87 * v41;
        v85 = v88 * v41;
        v86 = v41 * v89;
        *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
        v78 = (double)v105 * 0.000030518509 * 8.0 - 4.0;
        *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
        v79 = (double)v105 * 0.000030518509 * 8.0 - 4.0;
        *(float *)&v105 = COERCE_FLOAT(sub_10115FB0());
        v73 = *(_DWORD *)(a1 + 36);
        v42 = v79 + *(float *)(a1 + 8) + v85;
        v43 = (double)v105 * 0.000030518509 * 8.0 - 4.0 + *(float *)(a1 + 12) + v86;
        v97 = v78 + *(float *)(a1 + 4) + v84;
        v98 = v42;
        v99 = v43;
        v44 = sub_100F2B60(60, v73, &v97);
        v45 = v44;
        if ( v44 )
        {
          *(float *)(v44 + 44) = 0.0;
          *(float *)(v44 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.5,
                                   1.5);
          *(float *)(v45 + 24) = v87;
          *(float *)(v45 + 28) = v88;
          *(float *)(v45 + 32) = v89;
          v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  500.0,
                  2000.0);
          *(float *)&v105 = v46 * v101;
          sub_100A0B60((float *)(v45 + 24), (float *)(v45 + 24), v96, (float *)&v105);
          v47 = *(float *)&v105;
          *(float *)(v45 + 24) = *(float *)(v45 + 24) * *(float *)&v105;
          *(float *)(v45 + 28) = *(float *)(v45 + 28) * v47;
          *(float *)(v45 + 32) = v47 * *(float *)(v45 + 32);
          v48 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          (int)(v93 * 0.5),
                          (int)v93);
          *(_BYTE *)(v45 + 48) = (int)(v90 * v48);
          *(_BYTE *)(v45 + 49) = (int)(v91 * v48);
          v105 = (int)(v48 * v92);
          *(_BYTE *)(v45 + 50) = v105;
          v49 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
          *(_BYTE *)(v45 + 53) = v49;
          *(_BYTE *)(v45 + 54) = 4 * v49;
          v50 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  16.0,
                  32.0);
          *(_BYTE *)(v45 + 52) = 0;
          v105 = (int)v50;
          *(_BYTE *)(v45 + 51) = (int)v50;
          *(float *)&v105 = COERCE_FLOAT(
                              (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                0,
                                360));
          *(float *)(v45 + 36) = (float)v105;
          *(float *)(v45 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   -8.0,
                                   8.0);
        }
        v13 = v94-- == 1;
        v6 = v95;
        if ( v13 )
          break;
        v38 = *(float *)&v100;
      }
    }
    if ( !*(_DWORD *)(a1 + 40) )
      *(_DWORD *)(a1 + 40) = sub_100F29B0("effects/fire_embers1");
    if ( !*(_DWORD *)(a1 + 44) )
      *(_DWORD *)(a1 + 44) = sub_100F29B0("effects/fire_embers2");
    v100 = 16;
    do
    {
      v104 = (float *)sub_10115FB0();
      v97 = (double)(int)v104 * 0.000030518509 * 64.0 - 32.0;
      v104 = (float *)sub_10115FB0();
      v98 = (double)(int)v104 * 0.000030518509 * 64.0 - 32.0;
      v104 = (float *)sub_10115FB0();
      v97 = v97 + *(float *)(a1 + 4);
      v98 = v98 + *(float *)(a1 + 8);
      v99 = (double)(int)v104 * 0.000030518509 * 64.0 - 32.0 + *(float *)(a1 + 12);
      v51 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v52 = sub_100F2B60(60, *(_DWORD *)(a1 + 4 * v51 + 40), &v97);
      v53 = v52;
      if ( v52 )
      {
        *(float *)(v52 + 44) = 0.0;
        *(float *)(v52 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                                + 4))(
                                 dword_10413198,
                                 2.0,
                                 3.0,
                                 a2,
                                 a3);
        v54 = -2.0 * v96;
        v101 = v54;
        *(float *)&v102 = v96 + v96 - v54;
        v104 = (float *)sub_10115FB0();
        *(float *)(v53 + 24) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        v104 = (float *)sub_10115FB0();
        *(float *)(v53 + 28) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        v104 = (float *)sub_10115FB0();
        *(float *)(v53 + 32) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        *(float *)(v53 + 24) = *(float *)(v53 + 24) + *(float *)(a1 + 16);
        *(float *)(v53 + 28) = *(float *)(a1 + 20) + *(float *)(v53 + 28);
        *(float *)(v53 + 32) = *(float *)(a1 + 24) + *(float *)(v53 + 32);
        off_103EDFEC();
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4))(dword_10413198, 1.0, 400.0);
        if ( *(float *)(v53 + 24) == flt_10459240
          && *(float *)(v53 + 28) == *(float *)&qword_10459244
          && *(float *)(v53 + 32) == *((float *)&qword_10459244 + 1)
          || *(float *)(a1 + 16) == flt_10459240
          && *(float *)(a1 + 20) == *(float *)&qword_10459244
          && *(float *)(a1 + 24) == *((float *)&qword_10459244 + 1) )
        {
          v55 = 1.0;
        }
        else
        {
          v55 = fabs(
                  *(float *)(v53 + 24) * *(float *)(a1 + 16)
                + *(float *)(a1 + 20) * *(float *)(v53 + 28)
                + *(float *)(a1 + 24) * *(float *)(v53 + 32))
              * v96;
        }
        *(float *)&v105 = v55;
        v56 = 1.0 * (v55 * v55 * 0.5 * 16.0);
        *(float *)(v53 + 24) = *(float *)(v53 + 24) * v56;
        *(float *)(v53 + 28) = v56 * *(float *)(v53 + 28);
        *(float *)(v53 + 32) = v56 * *(float *)(v53 + 32);
        v57 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 192, 255);
        *(_BYTE *)(v53 + 50) = v57;
        *(_BYTE *)(v53 + 49) = v57;
        *(_BYTE *)(v53 + 48) = v57;
        v58 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 8, 16);
        v104 = (float *)(int)((double)v58 * *(float *)&v105);
        v59 = (char)v104;
        *(_BYTE *)(v53 + 53) = (_BYTE)v104;
        if ( (unsigned __int8)v59 <= 0x20u )
        {
          if ( (unsigned __int8)v59 < 4u )
            v59 = 4;
        }
        else
        {
          v59 = 32;
        }
        *(_BYTE *)(v53 + 53) = v59;
        *(_BYTE *)(v53 + 54) = v59;
        *(_WORD *)(v53 + 51) = 255;
        a3 = 360;
        a2 = 0;
        v104 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        *(float *)(v53 + 36) = (float)(int)v104;
        v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -8.0,
                8.0);
        v6 = v95;
        *(float *)(v53 + 56) = v60;
      }
      --v100;
    }
    while ( *(float *)&v100 != 0.0 );
    if ( !*(_DWORD *)(a1 + 48) )
      *(_DWORD *)(a1 + 48) = sub_100F29B0("effects/fire_cloud2");
    v100 = 32;
    do
    {
      v104 = (float *)sub_10115FB0();
      v97 = (double)(int)v104 * 0.000030518509 * 96.0 - 48.0;
      v104 = (float *)sub_10115FB0();
      v98 = (double)(int)v104 * 0.000030518509 * 96.0 - 48.0;
      v61 = sub_10115FB0();
      v62 = *(_DWORD *)(a1 + 48);
      v104 = (float *)v61;
      v97 = v97 + *(float *)(a1 + 4);
      v98 = v98 + *(float *)(a1 + 8);
      v99 = (double)v61 * 0.000030518509 * 96.0 - 48.0 + *(float *)(a1 + 12);
      v63 = sub_100F2B60(60, v62, &v97);
      v64 = v63;
      if ( v63 )
      {
        *(float *)(v63 + 44) = 0.0;
        *(float *)(v63 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                                + 4))(
                                 dword_10413198,
                                 0.2,
                                 0.40000001,
                                 a2,
                                 a3);
        v65 = -0.75 * v96;
        v101 = v65;
        *(float *)&v102 = v96 * 0.75 - v65;
        v104 = (float *)sub_10115FB0();
        *(float *)(v64 + 24) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        v104 = (float *)sub_10115FB0();
        *(float *)(v64 + 28) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        v104 = (float *)sub_10115FB0();
        *(float *)(v64 + 32) = (double)(int)v104 * 0.000030518509 * *(float *)&v102 + v101;
        *(float *)(v64 + 24) = *(float *)(v64 + 24) + *(float *)(a1 + 16);
        *(float *)(v64 + 28) = *(float *)(a1 + 20) + *(float *)(v64 + 28);
        *(float *)(v64 + 32) = *(float *)(a1 + 24) + *(float *)(v64 + 32);
        off_103EDFEC();
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4))(dword_10413198, 400.0, 800.0);
        if ( *(float *)(v64 + 24) == flt_10459240
          && *(float *)(v64 + 28) == *(float *)&qword_10459244
          && *(float *)(v64 + 32) == *((float *)&qword_10459244 + 1)
          || *(float *)(a1 + 16) == flt_10459240
          && *(float *)(a1 + 20) == *(float *)&qword_10459244
          && *(float *)(a1 + 24) == *((float *)&qword_10459244 + 1) )
        {
          v66 = 1.0;
        }
        else
        {
          v66 = fabs(
                  *(float *)(a1 + 20) * *(float *)(v64 + 28)
                + *(float *)(v64 + 24) * *(float *)(a1 + 16)
                + *(float *)(a1 + 24) * *(float *)(v64 + 32))
              * v96;
        }
        *(float *)&v105 = v66;
        v67 = 400.0 * (v66 * v66 * 0.5 * 16.0);
        *(float *)(v64 + 24) = *(float *)(v64 + 24) * v67;
        *(float *)(v64 + 28) = v67 * *(float *)(v64 + 28);
        *(float *)(v64 + 32) = v67 * *(float *)(v64 + 32);
        v68 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 128, 255);
        *(_BYTE *)(v64 + 50) = v68;
        *(_BYTE *)(v64 + 49) = v68;
        *(_BYTE *)(v64 + 48) = v68;
        v69 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 85);
        v104 = (float *)(int)((double)v69 * *(float *)&v105);
        v70 = (unsigned __int8)v104;
        *(_BYTE *)(v64 + 53) = (_BYTE)v104;
        if ( v70 <= 0x55u )
        {
          if ( v70 < 0x20u )
            v70 = 32;
        }
        else
        {
          v70 = 85;
        }
        *(_BYTE *)(v64 + 53) = v70;
        *(_WORD *)(v64 + 51) = 255;
        a3 = 360;
        a2 = 0;
        v104 = (float *)(int)((double)v70 * 1.5);
        *(_BYTE *)(v64 + 54) = (_BYTE)v104;
        v104 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        *(float *)(v64 + 36) = (float)(int)v104;
        v71 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -16.0,
                16.0);
        v6 = v95;
        *(float *)(v64 + 56) = v71;
      }
      --v100;
    }
    while ( *(float *)&v100 != 0.0 );
    if ( v6 )
      sub_100F2FF0(v6);
  }
}
