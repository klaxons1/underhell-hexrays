int __fastcall sub_10199DB0(int a1, int a2, int a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  int v9; // ebx
  int *v10; // edi
  char v11; // al
  bool v12; // zf
  float *v13; // ebx
  double v14; // st7
  int v15; // edi
  int v16; // edi
  float v17; // edx
  float v18; // eax
  double v19; // st7
  double v20; // st5
  double v21; // st6
  double v22; // st7
  int (__thiscall *v23)(int); // edx
  int v24; // edi
  void (__thiscall *v25)(int, _DWORD); // edx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  void (__thiscall *v29)(int, int, int); // eax
  int v30; // eax
  float v31; // edx
  float v32; // eax
  double v33; // st7
  double v34; // st5
  double v35; // st6
  double v36; // st7
  double v37; // st7
  _DWORD *v38; // eax
  int v39; // edx
  _DWORD *v40; // ecx
  int (__thiscall *v41)(_DWORD *, const char *, _DWORD, int); // eax
  int v42; // eax
  double v43; // st7
  int v44; // eax
  float v46; // [esp+98h] [ebp-140h]
  float v47; // [esp+A4h] [ebp-134h]
  float v48[21]; // [esp+B4h] [ebp-124h] BYREF
  float v49; // [esp+108h] [ebp-D0h]
  float v50; // [esp+114h] [ebp-C4h]
  float v51; // [esp+120h] [ebp-B8h]
  float v52; // [esp+12Ch] [ebp-ACh]
  float v53; // [esp+138h] [ebp-A0h]
  float v54[6]; // [esp+168h] [ebp-70h] BYREF
  __int16 v55; // [esp+180h] [ebp-58h]
  int v56; // [esp+184h] [ebp-54h] BYREF
  float v57; // [esp+188h] [ebp-50h]
  float v58; // [esp+18Ch] [ebp-4Ch]
  float v59; // [esp+190h] [ebp-48h]
  float v60; // [esp+194h] [ebp-44h]
  float v61; // [esp+198h] [ebp-40h]
  __int16 v62; // [esp+19Ch] [ebp-3Ch]
  float v63; // [esp+1A0h] [ebp-38h]
  int v64; // [esp+1A4h] [ebp-34h]
  int v65; // [esp+1A8h] [ebp-30h]
  int v66; // [esp+1ACh] [ebp-2Ch]
  __int16 v67; // [esp+1B0h] [ebp-28h]
  char v68; // [esp+1B2h] [ebp-26h]
  int v69; // [esp+1B4h] [ebp-24h] BYREF
  int v70; // [esp+1B8h] [ebp-20h] BYREF
  float v71; // [esp+1BCh] [ebp-1Ch]
  float v72; // [esp+1C0h] [ebp-18h]
  float v73; // [esp+1C4h] [ebp-14h]
  float v74; // [esp+1C8h] [ebp-10h]
  int v75; // [esp+1CCh] [ebp-Ch] BYREF
  int v76; // [esp+1D0h] [ebp-8h]
  char v77; // [esp+1D5h] [ebp-3h]
  char v78; // [esp+1D6h] [ebp-2h]
  bool v79; // [esp+1D7h] [ebp-1h]

  if ( !*(_BYTE *)(a1 + 16) )
    return 1;
  v4 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(a1 + 8));
  if ( v4 )
    (*(void (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)(v4 + 4) + 148))(
      v4 + 4,
      *(_DWORD *)(a1 + 12),
      a1 + 28,
      &v70);
  v5 = 0.0;
  if ( *(float *)(a1 + 76) > 0.0 && *(float *)(a1 + 24) > 0.0 )
  {
    v6 = *(float *)(a1 + 76) - *((float *)off_103DC81C + 3);
    if ( v6 >= 0.0 )
      v5 = v6;
    v7 = *(float *)(a1 + 24) - v5;
    if ( v7 <= *(float *)(a1 + 20) )
      goto LABEL_16;
    goto LABEL_9;
  }
  v8 = *((float *)off_103DC81C + 4) + *(float *)(a1 + 20);
  *(float *)(a1 + 20) = v8;
  v7 = v8;
  if ( *(float *)(a1 + 24) > 0.0 )
  {
    if ( *(float *)(a1 + 24) >= v8 )
    {
      if ( v8 < 0.0 )
        v7 = 0.0;
    }
    else
    {
      v7 = *(float *)(a1 + 24);
    }
LABEL_9:
    *(float *)(a1 + 20) = v7;
    *(float *)(a1 + 56) = *(float *)(a1 + 28);
    *(float *)(a1 + 60) = *(float *)(a1 + 32);
    *(float *)(a1 + 64) = *(float *)(a1 + 36);
  }
LABEL_16:
  v75 = *(int *)(a1 + 20);
  v78 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v9 = 0;
  v10 = (int *)&unk_10448978;
  *(float *)&v76 = COERCE_FLOAT(v48);
  do
  {
    v11 = sub_1011FDF0(v10, (float *)v76, *(float *)&v75);
    v12 = v78 == 0;
    *((_BYTE *)&v64 + v9) = v11;
    if ( !v12 || (v78 = 0, v11) )
      v78 = 1;
    v76 += 12;
    v10 += 5;
    ++v9;
  }
  while ( (int)v10 < (int)dword_10448AA4 );
  v13 = (float *)(a1 + 28);
  v54[0] = *(float *)(a1 + 28);
  v54[1] = *(float *)(a1 + 32);
  v54[2] = *(float *)(a1 + 36);
  v55 = 1;
  v54[3] = 4.0;
  v54[4] = 1.0;
  v54[5] = 0.0625;
  v14 = sub_1005BF10(v54, (int *)(a1 + 68));
  v63 = v14;
  v79 = v14 > 0.0;
  if ( BYTE2(v65) && HIBYTE(v65) )
  {
    v15 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "sprites/bluelaser1",
            "ClientEffect textures",
            1,
            0);
    sub_101989A0(&v75, (unsigned __int8 *)&dword_103EB358, v48[18]);
    v46 = v49 + v49;
    sub_10179D80((float *)(a1 + 56), (float *)(a1 + 44), v46, v15, (unsigned __int8 *)&v75, 8.0);
  }
  if ( (_BYTE)v66 && BYTE1(v66) )
  {
    v16 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "effects/blueblacklargebeam",
            "ClientEffect textures",
            1,
            0);
    *(float *)&v76 = v51 * 16.0;
    sub_101989A0(&v75, (unsigned __int8 *)&dword_103EB358, v50);
    v17 = *(float *)(a1 + 60);
    v18 = *(float *)(a1 + 64);
    v70 = *(int *)(a1 + 56);
    v71 = v17;
    v72 = v18;
    if ( HIBYTE(v66) )
    {
      v19 = 1.0 - v53;
      v20 = *(float *)(a1 + 44) * v19 + *(float *)(a1 + 56) * v53;
      v21 = *(float *)(a1 + 48) * v19 + *(float *)(a1 + 60) * v53;
      v22 = v19 * *(float *)(a1 + 52) + v53 * *(float *)(a1 + 64);
      *(float *)&v70 = v20;
      v71 = v21;
      v72 = v22;
    }
    sub_10179D80((float *)&v70, (float *)(a1 + 44), *(float *)&v76, v16, (unsigned __int8 *)&v75, 8.0);
  }
  v23 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
  v77 = 0;
  v24 = v23(dword_1047C96C);
  if ( v24 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24);
  if ( (_BYTE)v64 && !(_BYTE)v65 && v79 )
  {
    v25 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 16);
    v77 = 1;
    v25(v24, 0);
    sub_100ECE60(v24);
    v26 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "effects/strider_pinch_dudv",
            "ClientEffect textures",
            1,
            0);
    v27 = *(_DWORD *)v24;
    v28 = v26;
    *(float *)&v76 = v48[0] * 0.075000003 * v63;
    v29 = *(void (__thiscall **)(int, int, int))(v27 + 36);
    v75 = v28;
    v29(v24, v28, a1 != 4 ? a1 : 0);
    v30 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v75 + 44))(v75, "$refractamount", 0, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 12))(v30, v76);
    sub_10199640((int)v13, v24, a1, (float *)(a1 + 28), 512.0, 512.0, *(float *)&dword_103EB358);
  }
  if ( BYTE2(v64) && HIBYTE(v64) && BYTE1(v64) && v79 )
  {
    v69 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "effects/blueblackflash",
            "ClientEffect textures",
            1,
            0);
    v73 = v48[9] * 128.0;
    v47 = v48[6] * v63;
    sub_101989A0(&v75, (unsigned __int8 *)&dword_103EB358, v47);
    LODWORD(v74) = (int)(v48[3] * 255.0);
    HIBYTE(v75) = LOBYTE(v74);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 36))(v24, v69, a1 != 4 ? a1 : 0);
    sub_10199640((int)v13, v24, a1, (float *)(a1 + 28), v73, v73, *(float *)&v75);
  }
  if ( (_BYTE)v65 )
  {
    v31 = *(float *)(a1 + 60);
    v32 = *(float *)(a1 + 64);
    v70 = *(int *)(a1 + 56);
    v71 = v31;
    v72 = v32;
    if ( HIBYTE(v66) )
    {
      v33 = 1.0 - v53;
      v34 = *(float *)(a1 + 44) * v33 + *(float *)(a1 + 56) * v53;
      v35 = *(float *)(a1 + 48) * v33 + *(float *)(a1 + 60) * v53;
      v36 = v33 * *(float *)(a1 + 52) + v53 * *(float *)(a1 + 64);
      *(float *)&v70 = v34;
      v71 = v35;
      v72 = v36;
    }
    v56 = v70;
    v57 = v71;
    v62 = 1;
    v58 = v72;
    v59 = 4.0;
    v60 = 0.001;
    v61 = 0.0625;
    v37 = sub_1005BF10((float *)&v56, (int *)(a1 + 72));
    v73 = v37;
    if ( v37 > 0.0 )
    {
      if ( !v77 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 16))(v24, 0);
        sub_100ECE60(v24);
      }
      v38 = (_DWORD *)(*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                          + 280))(
                        dword_1047C96C,
                        "effects/strider_bulge_dudv",
                        "ClientEffect textures",
                        1,
                        0);
      v39 = *v38;
      v73 = v48[15] * v73;
      v69 = (int)v38;
      v40 = v38;
      v41 = *(int (__thiscall **)(_DWORD *, const char *, _DWORD, int))(v39 + 44);
      v74 = v48[12] * 256.0;
      v42 = v41(v40, "$refractamount", 0, 1);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v42 + 12))(v42, COERCE_FLOAT(LODWORD(v73)));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 36))(v24, v69, a1 != 4 ? a1 : 0);
      sub_10199640((int)v13, v24, a1, (float *)&v70, v74, v74, *(float *)&dword_103EB358);
    }
  }
  else
  {
    v56 = *(int *)(a1 + 56);
    v57 = *(float *)(a1 + 60);
    v43 = *(float *)(a1 + 64);
    v62 = 1;
    v58 = v43;
    v59 = 4.0;
    v60 = 0.001;
    v61 = 0.0625;
    sub_1005BF10((float *)&v56, (int *)(a1 + 72));
  }
  if ( BYTE2(v66) && v79 )
  {
    v73 = COERCE_FLOAT(
            (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "effects/blueblackflash",
              "ClientEffect textures",
              1,
              0));
    v74 = v52 * v63;
    sub_101989A0(&v69, (unsigned __int8 *)&dword_103EB358, v74);
    (*(void (__thiscall **)(int, float, int))(*(_DWORD *)v24 + 36))(v24, COERCE_FLOAT(LODWORD(v73)), a1 != 4 ? a1 : 0);
    sub_10199640((int)v13, v24, a1, (float *)(a1 + 28), 64.0, 64.0, *(float *)&v69);
    v44 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, *(_DWORD *)(a1 + 8));
    *(float *)(v44 + 4) = *v13;
    *(float *)(v44 + 8) = *(float *)(a1 + 32);
    *(float *)(v44 + 12) = *(float *)(a1 + 36);
    *(_DWORD *)(v44 + 20) = 100613160;
    *(float *)(v44 + 16) = v74 * 128.0;
    *(float *)(v44 + 24) = *((float *)off_103DC81C + 3) + 0.001;
  }
  if ( *(float *)(a1 + 20) >= 4.0 && !v78 )
    (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 48))(a1 - 4);
  if ( v24 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 12))(v24);
    (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 4))(v24);
  }
  return 1;
}
