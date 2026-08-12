void __userpurge sub_1019BB60(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int (__thiscall *v5)(int); // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  float *v9; // ecx
  double v10; // st5
  bool v11; // c3
  double v12; // st7
  int v13; // eax
  int v14; // eax
  bool v15; // c0
  double v16; // st7
  int v17; // edi
  float *v18; // eax
  double v19; // st7
  char v20; // al
  double v21; // st6
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st5
  float *v26; // eax
  double v27; // st5
  float *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ebx
  int v33; // ecx
  void (__thiscall *v34)(int, int, float *, _BYTE *, int); // eax
  double v35; // st6
  double v36; // st7
  double v37; // st7
  char v38; // al
  double v39; // st6
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ebx
  char v44; // al
  double v45; // st7
  double v46; // st6
  float *v47; // eax
  float *v48; // eax
  float *v49; // edi
  float *v50; // eax
  double v51; // st7
  unsigned __int8 v52; // al
  float *v53; // eax
  double v54; // st7
  double v55; // st6
  double v56; // st5
  float *v57; // eax
  double v58; // st5
  float *v59; // eax
  int v60; // eax
  int v61; // ecx
  int v62; // [esp+5Ch] [ebp-84h]
  float v63; // [esp+60h] [ebp-80h]
  float v64; // [esp+60h] [ebp-80h]
  float v65; // [esp+64h] [ebp-7Ch]
  int v66; // [esp+68h] [ebp-78h]
  float v67; // [esp+68h] [ebp-78h]
  float v69[6]; // [esp+74h] [ebp-6Ch] BYREF
  __int16 v70; // [esp+8Ch] [ebp-54h]
  _BYTE v71[12]; // [esp+90h] [ebp-50h] BYREF
  float v72; // [esp+9Ch] [ebp-44h] BYREF
  float v73; // [esp+A0h] [ebp-40h]
  float v74; // [esp+A4h] [ebp-3Ch]
  float v75; // [esp+A8h] [ebp-38h] BYREF
  float v76; // [esp+ACh] [ebp-34h]
  float v77; // [esp+B0h] [ebp-30h]
  float v78; // [esp+B4h] [ebp-2Ch] BYREF
  float v79; // [esp+B8h] [ebp-28h]
  float v80; // [esp+BCh] [ebp-24h]
  float v81; // [esp+C0h] [ebp-20h] BYREF
  float v82; // [esp+C4h] [ebp-1Ch]
  float v83; // [esp+C8h] [ebp-18h]
  int v84; // [esp+CCh] [ebp-14h]
  int v85; // [esp+D0h] [ebp-10h]
  float v86; // [esp+D4h] [ebp-Ch]
  float v87; // [esp+D8h] [ebp-8h]
  char v88; // [esp+DFh] [ebp-1h]
  float v89; // [esp+E8h] [ebp+8h]

  if ( *(_WORD *)(a1 - 3234) == 0xFFFF )
    return;
  nullsub_5(a4);
  sub_1019B7A0((_DWORD *)(a1 - 3352), a3);
  if ( *(float *)&a4 <= 0.0 )
    return;
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36);
  LOBYTE(v70) = 0;
  v6 = (float *)v5(a1 - 3352);
  v69[0] = *v6;
  v69[1] = v6[1];
  v69[2] = v6[2];
  v70 = 1;
  v69[4] = 1.0;
  v69[5] = 0.0625;
  v69[3] = 8.0;
  v7 = sub_1005BF10(v69, (int *)(a1 + 276));
  v86 = v7;
  v8 = *(float *)(a1 + 264);
  v9 = (float *)off_103DC81C;
  v87 = *(float *)(a1 + 264);
  if ( -1.0 != *(float *)(a1 + 260) )
  {
    v10 = *(float *)(a1 + 260) - *((float *)off_103DC81C + 3);
    if ( v10 <= 10.0 )
    {
      v8 = v8 * (v10 * 0.1);
      v87 = v8;
    }
  }
  if ( v8 < 0.0099999998 )
  {
    v12 = 0.0099999998;
    goto LABEL_10;
  }
  v11 = 0.0 == v7;
  v12 = 0.0099999998;
  if ( v11 )
  {
LABEL_10:
    v88 = 0;
    goto LABEL_11;
  }
  v88 = 1;
LABEL_11:
  if ( !*(_BYTE *)(a1 + 271) && !v88 )
  {
    v13 = *(_DWORD *)(a1 + 292);
    if ( v13 )
    {
      *(float *)(v13 + 40) = *((float *)off_103DC81C + 3);
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 54) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 53) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 48) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 49) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 50) = 0;
      v9 = (float *)off_103DC81C;
    }
    v14 = *(_DWORD *)(a1 + 296);
    if ( v14 )
    {
      *(float *)(v14 + 40) = v9[3];
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 54) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 53) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 48) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 49) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 50) = 0;
    }
  }
  v15 = v8 < v12;
  v16 = v8;
  if ( v15 )
    return;
  v66 = a3;
  if ( *(_BYTE *)(a1 + 268) )
  {
    v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, *(_DWORD *)(a1 - 3272));
    if ( !*(_BYTE *)(a1 + 270) )
    {
      v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36))(a1 - 3352);
      *(float *)(v17 + 4) = *v18;
      *(float *)(v17 + 8) = v18[1];
      *(float *)(v17 + 12) = v18[2];
      *(_BYTE *)(v17 + 20) = -1;
      *(float *)(v17 + 24) = *((float *)off_103DC81C + 3) + 0.1;
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              110.0,
              128.0);
      *(float *)(v17 + 16) = v19 * v87;
      v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
      *(_BYTE *)(v17 + 22) = v20;
      *(_BYTE *)(v17 + 21) = v20;
LABEL_21:
      v16 = v87;
      goto LABEL_22;
    }
    if ( *(_DWORD *)(a1 + 288) == -1 )
      *(_DWORD *)(a1 + 288) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(a1 - 3348) + 140))(
                                a1 - 3348,
                                "fuse");
    if ( *(_DWORD *)(a1 + 288) == -1 )
      goto LABEL_21;
    v33 = a1 - 3348;
    v62 = *(_DWORD *)(a1 + 288);
    v34 = *(void (__thiscall **)(int, int, float *, _BYTE *, int))(*(_DWORD *)(a1 - 3348) + 148);
    if ( *(_BYTE *)(a1 + 271) )
    {
      v34(v33, v62, &v78, v71, v66);
      v39 = v79;
      v40 = v80 + 4.0;
      *(float *)(v17 + 4) = v78;
      *(float *)(v17 + 8) = v39;
      *(float *)(v17 + 12) = v40;
      switch ( *(_DWORD *)(a1 + 272) )
      {
        case 0:
          *(_BYTE *)(v17 + 20) = 0;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = 255;
          break;
        case 2:
          *(_BYTE *)(v17 + 20) = -1;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = 0;
          break;
        case 4:
          *(_BYTE *)(v17 + 20) = 80;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = -86;
          break;
        case 6:
          *(_BYTE *)(v17 + 20) = -16;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = 13050;
          break;
        case 8:
          *(_BYTE *)(v17 + 20) = -56;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = -4071;
          break;
        default:
          *(_BYTE *)(v17 + 20) = -1;
          v41 = *((float *)off_103DC81C + 3);
          *(_WORD *)(v17 + 21) = -1;
          break;
      }
      *(float *)(v17 + 24) = v41 + 0.1;
      *(float *)(v17 + 16) = v87 * 256.0;
    }
    else
    {
      v34(v33, v62, &v78, v71, v66);
      v35 = v79;
      v36 = v80 + 4.0;
      *(float *)(v17 + 4) = v78;
      *(float *)(v17 + 8) = v35;
      *(float *)(v17 + 12) = v36;
      *(_BYTE *)(v17 + 20) = -1;
      *(float *)(v17 + 24) = *((float *)off_103DC81C + 3) + 0.1;
      v67 = *(float *)(dword_10448EB4 + 44) + 80.0;
      v37 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              *(float *)(dword_10448EB4 + 44),
              LODWORD(v67));
      *(float *)(v17 + 16) = v37 * v87;
      v38 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 95, 128);
      *(_BYTE *)(v17 + 22) = v38;
      *(_BYTE *)(v17 + 21) = v38;
    }
    v42 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 20))(dword_10413164, *(_DWORD *)(a1 - 3272));
    v43 = v42;
    if ( *(_BYTE *)(a1 + 271) )
      goto LABEL_21;
    *(float *)(v42 + 4) = v78;
    *(float *)(v42 + 8) = v79;
    *(float *)(v42 + 12) = v80;
    *(_BYTE *)(v42 + 20) = -1;
    v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 95, 128);
    *(_BYTE *)(v17 + 22) = v44;
    *(_BYTE *)(v43 + 21) = v44;
    v45 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            260.0,
            290.0);
    v46 = v45 * v87;
    v16 = v87;
    *(float *)(v43 + 16) = v46;
    *(float *)(v43 + 24) = *((float *)off_103DC81C + 3) + 0.1;
  }
LABEL_22:
  v21 = *(float *)&a4;
  if ( !*(_BYTE *)(a1 + 271) && *(_BYTE *)(a1 + 269) )
  {
    while ( v21 >= *(float *)(a1 + 284) )
    {
      *(float *)&v84 = v21 - *(float *)(a1 + 284);
      *(float *)(a1 + 284) = *(float *)(a1 + 280);
      v47 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36))(a1 - 3352);
      v81 = *v47;
      v82 = v47[1];
      v83 = v47[2];
      v48 = sub_101356D0();
      v72 = v81 - *v48;
      v73 = v82 - v48[1];
      v74 = v83 - v48[2];
      off_103EDFEC();
      v81 = v72 * 2.0 + v81;
      v82 = v73 * 2.0 + v82;
      v83 = 2.0 * v74 + v83 + v87 * 4.0;
      v49 = sub_100F2B60(a1, a1, 60, dword_1043DF24, &v81);
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3) == 1 )
      {
        v50 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36))(a1 - 3352);
        sub_1017ADB0((int)v49, v50, 1, 1, &v72);
      }
      if ( !v49 )
        return;
      v49[11] = 0.0;
      v49[10] = 1.0;
      v89 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -16.0,
              16.0,
              v66,
              a2);
      *(float *)&v85 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                         dword_10413198,
                         -16.0,
                         16.0);
      v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              16.0);
      v49[6] = v89;
      v49[7] = *(float *)&v85;
      v49[8] = v51 + 32.0;
      if ( *(_BYTE *)(a1 + 270) )
      {
        *((_WORD *)v49 + 24) = 25855;
        *((_BYTE *)v49 + 50) = 100;
      }
      else
      {
        *((_WORD *)v49 + 24) = 12543;
        *((_BYTE *)v49 + 50) = 48;
      }
      a2 = 90;
      v66 = 64;
      *((_BYTE *)v49 + 51) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
      *((_BYTE *)v49 + 52) = 0;
      v52 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 4);
      *((_BYTE *)v49 + 53) = v52;
      v85 = (int)((double)v52 * 8.0);
      *((_BYTE *)v49 + 54) = v85;
      v49[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 6);
      v49[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -0.52359879,
                  0.52359879);
      v21 = *(float *)&v84;
      v16 = v87;
    }
    *(float *)(a1 + 284) = *(float *)(a1 + 284) - v21;
  }
  if ( v88 && !*(_BYTE *)(a1 + 271) )
  {
    v65 = 0.5 * v16;
    v63 = v16 * -0.5;
    sub_10041FA0(&v75, v63, v65);
    v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36))(a1 - 3352);
    v23 = v75 + *v22;
    v75 = v23;
    v24 = v22[1] + v76;
    v76 = v24;
    v25 = v22[2];
    v26 = *(float **)(a1 + 292);
    v27 = v25 + v77;
    v77 = v27;
    if ( v26 )
    {
      v26[3] = v23;
      v26[4] = v24;
      v26[5] = v27;
      *(float *)(*(_DWORD *)(a1 + 292) + 44) = 0.0;
      *(float *)(*(_DWORD *)(a1 + 292) + 40) = 2.0;
      v28 = *(float **)(a1 + 292);
      v28[6] = 0.0;
      v28[7] = 0.0;
      v28[8] = 0.0;
      v29 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 100, 128);
      v84 = (int)((double)v29 * v86);
      LOBYTE(v29) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 48) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 49) = v29;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 50) = v29;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 51) = v29;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 52) = v29;
      v30 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 48);
      v31 = *(_DWORD *)(a1 + 292);
      v84 = (int)((double)v30 * v87);
      *(_BYTE *)(v31 + 53) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 292) + 54) = *(_BYTE *)(*(_DWORD *)(a1 + 292) + 53);
      *(float *)(*(_DWORD *)(a1 + 292) + 56) = 0.0;
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 4) == 3 )
      {
        v32 = *(_DWORD *)(a1 + 292);
        *(float *)(v32 + 36) = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                         dword_10413198,
                                         2,
                                         8)
                             + *(float *)(v32 + 36);
      }
    }
    v64 = v87 * -1.0;
    sub_10041FA0(&v75, v64, v87);
    v53 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 3352) + 36))(a1 - 3352);
    v54 = *v53 + v75;
    v55 = v53[1] + v76;
    v56 = v53[2];
    v57 = *(float **)(a1 + 296);
    v58 = v56 + v77;
    if ( v57 )
    {
      v57[3] = v54;
      v57[4] = v55;
      v57[5] = v58;
      *(float *)(*(_DWORD *)(a1 + 296) + 44) = 0.0;
      *(float *)(*(_DWORD *)(a1 + 296) + 40) = 2.0;
      v59 = *(float **)(a1 + 296);
      v59[6] = 0.0;
      v59[7] = 0.0;
      v59[8] = 0.0;
      v84 = (int)(v86 * 255.0);
      LOBYTE(v59) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 48) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 49) = (_BYTE)v59;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 50) = (_BYTE)v59;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 51) = (_BYTE)v59;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 52) = (_BYTE)v59;
      v60 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 4);
      v61 = *(_DWORD *)(a1 + 296);
      v84 = (int)((double)v60 * v87);
      *(_BYTE *)(v61 + 53) = v84;
      *(_BYTE *)(*(_DWORD *)(a1 + 296) + 54) = *(_BYTE *)(*(_DWORD *)(a1 + 292) + 53);
      *(float *)(*(_DWORD *)(a1 + 296) + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198
                                                                                              + 8))(
                                                        dword_10413198,
                                                        0,
                                                        360);
    }
  }
}
