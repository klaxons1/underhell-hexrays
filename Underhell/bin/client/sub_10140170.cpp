int __thiscall sub_10140170(char *this)
{
  int (__thiscall *v2)(int); // edx
  int v3; // ebx
  float v4; // esi
  bool v5; // zf
  int v6; // eax
  float *v7; // edi
  int v8; // eax
  float v9; // eax
  double v10; // st5
  char *v11; // edi
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  double v15; // st7
  int v16; // ecx
  double v17; // st7
  int v18; // edx
  char *v19; // esi
  int v20; // eax
  int *v21; // ecx
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int *v26; // ecx
  double v27; // st7
  float v28; // esi
  int v29; // eax
  double v30; // st7
  double v31; // st6
  double v32; // st5
  double v33; // st6
  int v34; // edi
  double v35; // st5
  int v36; // edi
  double v37; // st7
  double v38; // st7
  int v39; // esi
  double v40; // st7
  float *v41; // eax
  _BYTE v43[136]; // [esp+178h] [ebp-B8h] BYREF
  _BYTE v44[4]; // [esp+200h] [ebp-30h] BYREF
  _BYTE v45[4]; // [esp+204h] [ebp-2Ch] BYREF
  int v46; // [esp+208h] [ebp-28h] BYREF
  int v47; // [esp+20Ch] [ebp-24h] BYREF
  char *v48; // [esp+210h] [ebp-20h]
  int v49; // [esp+214h] [ebp-1Ch]
  float v50; // [esp+218h] [ebp-18h]
  int v51; // [esp+21Ch] [ebp-14h]
  int v52; // [esp+220h] [ebp-10h]
  float v53; // [esp+224h] [ebp-Ch] BYREF
  float v54; // [esp+228h] [ebp-8h]
  float v55; // [esp+22Ch] [ebp-4h] BYREF

  v2 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
  v48 = this;
  v3 = v2(dword_1047C96C);
  v4 = 0.0;
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 432))(v3);
  v5 = *(_DWORD *)(dword_1043B094 + 48) == 1;
  v6 = 30;
  v52 = 30;
  if ( v5 )
  {
    v52 = 16;
    v6 = 16;
  }
  v50 = 0.0;
  v51 = 0;
  v7 = (float *)(this + 16);
  v54 = *(float *)&v6;
  do
  {
    v8 = *((_DWORD *)v7 - 4);
    if ( v8 == 3 || v8 == 2 )
    {
      v9 = *v7;
      v51 += *(_DWORD *)v7;
      if ( SLODWORD(v9) > SLODWORD(v50) )
        v50 = v9;
    }
    v10 = (v7[2] - v7[1]) * 500.0;
    if ( v10 < 1.0 )
      v10 = 1.0;
    v7 += 11;
    v5 = LODWORD(v54)-- == 1;
    LODWORD(v4) += (int)v10 + 2;
  }
  while ( !v5 );
  v11 = v48;
  v54 = v4;
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int *, int *))(*(_DWORD *)v3 + 156))(v3, v45, v44, &v47, &v46);
  (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1041315C + 116))(
    dword_1041315C,
    17,
    "(All values in linear space)");
  v12 = sub_1013E5D0(v11, 50.0, -1.0);
  v13 = v12 > 0.0;
  v14 = 0.0 == v12;
  v15 = 0.0;
  if ( v13 || v14 )
    v15 = sub_1013E5D0(v11, 50.0, -1.0);
  LODWORD(v55) = v46 * v47;
  (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
    dword_1041315C,
    21,
    "AvgLum @ %4.2f%%  mat_tonemap_min_avglum = %4.2f%%  Using %d pixels of %d pixels on screen (%3d%%)",
    v15 * 100.0,
    *(float *)(dword_1043B16C + 44),
    v51,
    v46 * v47,
    (int)((double)v51 * 100.0 / (double)(v46 * v47)));
  v55 = *(float *)(dword_1043AE54 + 44);
  v53 = *(float *)(dword_1043AE9C + 44);
  if ( *((int *)off_103DC81C + 5) > 1 && (v16 = sub_100422D0()) != 0 && *(float *)(v16 + 3952) > 0.0 )
  {
    v17 = *(float *)(v16 + 3952);
  }
  else if ( byte_1043A87A )
  {
    v17 = flt_1043A884;
  }
  else
  {
    v17 = *(float *)(dword_1043A8FC + 44);
  }
  (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
    dword_1041315C,
    23,
    "BloomScale = %4.2f  mat_hdr_manual_tonemap_rate = %4.2f  mat_accelerate_adjust_exposure_down = %4.2f",
    v17,
    v53,
    v55);
  if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
  {
    v18 = v52;
    v19 = v48;
    v20 = 0;
    if ( v52 >= 4 )
    {
      v21 = (int *)&v48[44 * v52 - 72];
      do
      {
        v22 = (double)v21[11];
        *(float *)&v43[4 * v20 + 12] = v22;
        if ( v20 > 0 )
          *(float *)&v43[4 * v20 + 12] = v22 + *(float *)&v43[4 * v20 + 8];
        v23 = (double)*v21;
        *(float *)&v43[4 * v20 + 16] = v23;
        if ( v20 + 1 > 0 )
          *(float *)&v43[4 * v20 + 16] = v23 + *(float *)&v43[4 * v20 + 12];
        v24 = (double)*(v21 - 11);
        *(float *)&v43[4 * v20 + 20] = v24;
        if ( v20 > -2 )
          *(float *)&v43[4 * v20 + 20] = v24 + *(float *)&v43[4 * v20 + 16];
        v25 = (double)*(v21 - 22);
        *(float *)&v43[4 * v20 + 24] = v25;
        if ( v20 + 3 > 0 )
          *(float *)&v43[4 * v20 + 24] = v25 + *(float *)&v43[4 * v20 + 20];
        v20 += 4;
        v21 -= 44;
      }
      while ( v20 < v18 - 3 );
    }
    if ( v20 < v18 )
    {
      v26 = (int *)&v19[44 * (v18 - v20) - 28];
      do
      {
        v27 = (double)*v26;
        *(float *)&v43[4 * v20 + 12] = v27;
        if ( v20 > 0 )
          *(float *)&v43[4 * v20 + 12] = v27 + *(float *)&v43[4 * v20 + 8];
        ++v20;
        v26 -= 11;
      }
      while ( v20 < v18 );
    }
  }
  else
  {
    (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1041315C + 116))(dword_1041315C, 17, Locale);
    (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1041315C + 116))(dword_1041315C, 15, Locale);
    v18 = v52;
    v19 = v48;
  }
  v49 = v47 - LODWORD(v54) - 10;
  v51 = v49;
  if ( v18 > 0 )
  {
    LODWORD(v28) = v19 + 24;
    v53 = v28;
    v55 = *(float *)&v52;
    do
    {
      v29 = *(_DWORD *)(LODWORD(v28) - 24);
      v30 = 200.0;
      *(float *)&v52 = 0.0;
      if ( v29 == 3 || v29 == 2 )
        v52 = *(int *)(LODWORD(v28) - 8);
      v31 = (*(float *)LODWORD(v28) - *(float *)(LODWORD(v28) - 4)) * 500.0;
      v32 = 1.0;
      if ( v31 >= 1.0 )
        v32 = v31;
      v33 = 1.0;
      v34 = (int)v32;
      if ( *(float *)&v52 == 0.0 )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v3 + 288))(v3, 0, 0, 255);
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, v51, 203, (int)v32, 1);
        (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
      }
      else
      {
        v35 = (double)v52 / (double)SLODWORD(v50) * 200.0;
        if ( v35 <= 200.0 && v35 < 1.0 || (v33 = v35, v35 <= 200.0) )
          v30 = v33;
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 288))(v3, 255, 0, 0);
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, v51, 204 - (int)v30, v34, (int)v30);
        (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
        v28 = v53;
      }
      LODWORD(v28) += 44;
      v5 = LODWORD(v55)-- == 1;
      v51 += v34 + 2;
      v53 = v28;
    }
    while ( !v5 );
    v19 = v48;
  }
  if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
  {
    v36 = dword_1043B0DC;
    v55 = *(float *)(dword_1043B16C + 44);
    v54 = (float)SLODWORD(v54);
    v50 = (float)v49;
    v37 = sub_1013E5D0(v19, *(float *)(dword_1043B124 + 44), *(float *)(dword_1043B0DC + 44));
    *(float *)&v49 = v37 * v54 + v50;
    v38 = sub_1013E5D0(v19, 50.0, -1.0);
    v39 = *(_DWORD *)v3;
    v53 = v38 * v54 + v50;
    (*(void (__thiscall **)(int, int, int, int, int))(v39 + 152))(
      v3,
      (int)(v50 + v54 * *(float *)(v36 + 44) * 0.0099999998),
      4,
      4,
      200);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 288))(v3, 200, 200, 0);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, (int)*(float *)&v49, 4, 4, 200);
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v3 + 288))(v3, 0, 255, 0);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(
      v3,
      (int)(v54 * v55 * 0.0099999998 + v50),
      4,
      4,
      200);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 288))(v3, 200, 200, 0);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, (int)v53, 4, 4, 200);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v3 + 288))(v3, 0, 200, 200);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
  }
  sub_1013E7A0(&v53, &v55);
  v40 = (double)v47 - 600.0 - 10.0;
  *(float *)&v49 = v40;
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, (int)v40, 275, 600, 4);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v3 + 288))(v3, 200, 200, 200);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(v3, (int)v40, 276, 600, 2);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 288))(v3, 0, 0, 0);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
  v41 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 612))(v3, v43);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v3 + 152))(
    v3,
    (int)((*v41 - v53) / (v55 - v53) * 600.0 + *(float *)&v49),
    269,
    4,
    16);
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 288))(v3, 255, 0, 0);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
  (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
    dword_1041315C,
    26,
    "%.2f                                                                                       %.2f                     "
    "                                                                      %.2f",
    v53,
    (v55 + v53) * 0.5,
    v55);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v3 + 152))(v3, 0, 0, 1, 1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 288))(v3, 0, 0, 0);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 1, 1, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 436))(v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
