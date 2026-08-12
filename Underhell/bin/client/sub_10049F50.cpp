int __thiscall sub_10049F50(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  bool v11; // zf
  int v12; // ebx
  double v13; // st7
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v20; // st7
  int (__thiscall *v21)(int, _DWORD, int); // edx
  int v22; // esi
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  int v30; // eax
  double v31; // st7
  int v32; // ebx
  double v33; // st7
  double v34; // st7
  double v35; // st5
  double v36; // rtt
  double v37; // st5
  double v38; // rt0
  double v39; // st5
  int v40; // esi
  double v41; // st7
  double v42; // st7
  double v43; // st6
  double v44; // st5
  double v45; // st7
  float v46; // [esp+1Ch] [ebp-308h]
  float v47; // [esp+20h] [ebp-304h]
  _DWORD v48[128]; // [esp+30h] [ebp-2F4h] BYREF
  float v49[3]; // [esp+230h] [ebp-F4h] BYREF
  float v50; // [esp+23Ch] [ebp-E8h]
  float v51; // [esp+240h] [ebp-E4h]
  float v52[3]; // [esp+248h] [ebp-DCh] BYREF
  float v53[3]; // [esp+254h] [ebp-D0h] BYREF
  float v54; // [esp+260h] [ebp-C4h]
  float v55; // [esp+264h] [ebp-C0h]
  float v56[3]; // [esp+26Ch] [ebp-B8h] BYREF
  float v57; // [esp+278h] [ebp-ACh]
  float v58; // [esp+27Ch] [ebp-A8h]
  float v59; // [esp+280h] [ebp-A4h]
  float v60; // [esp+284h] [ebp-A0h]
  float v61; // [esp+288h] [ebp-9Ch]
  float v62; // [esp+28Ch] [ebp-98h]
  float v63; // [esp+290h] [ebp-94h]
  float v64; // [esp+294h] [ebp-90h]
  float v65; // [esp+298h] [ebp-8Ch]
  float v66; // [esp+29Ch] [ebp-88h]
  float v67; // [esp+2A0h] [ebp-84h]
  float v68; // [esp+2A4h] [ebp-80h]
  float v69; // [esp+2A8h] [ebp-7Ch]
  int v70; // [esp+2ACh] [ebp-78h]
  int v71; // [esp+2B0h] [ebp-74h]
  float v72; // [esp+2B4h] [ebp-70h]
  float v73; // [esp+2B8h] [ebp-6Ch]
  float v74; // [esp+2BCh] [ebp-68h]
  float v75; // [esp+2C0h] [ebp-64h]
  float v76; // [esp+2C4h] [ebp-60h]
  float v77; // [esp+2C8h] [ebp-5Ch]
  float v78; // [esp+2CCh] [ebp-58h]
  float v79; // [esp+2D0h] [ebp-54h]
  float v80; // [esp+2D4h] [ebp-50h]
  float v81; // [esp+2D8h] [ebp-4Ch]
  float v82; // [esp+2DCh] [ebp-48h]
  int v83; // [esp+2E0h] [ebp-44h]
  float v84; // [esp+2E4h] [ebp-40h]
  float v85; // [esp+2E8h] [ebp-3Ch]
  int v86; // [esp+2ECh] [ebp-38h]
  float v87; // [esp+2F0h] [ebp-34h]
  float v88; // [esp+2F4h] [ebp-30h] BYREF
  float v89; // [esp+2F8h] [ebp-2Ch]
  float v90; // [esp+2FCh] [ebp-28h]
  float v91; // [esp+300h] [ebp-24h]
  float v92; // [esp+304h] [ebp-20h]
  float v93; // [esp+308h] [ebp-1Ch]
  int v94; // [esp+30Ch] [ebp-18h]
  float v95; // [esp+310h] [ebp-14h]
  int v96; // [esp+314h] [ebp-10h]
  int v97; // [esp+318h] [ebp-Ch]
  int v98; // [esp+31Ch] [ebp-8h]

  if ( 0.0 == *((float *)off_103DC81C + 4) || !*(_BYTE *)(this + 116) )
    return 0;
  if ( *(_DWORD *)(this + 320) == -1 )
    return 0;
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 320) & 0xFFF) + 2) != *(_DWORD *)(this + 320) >> 12 )
    return 0;
  if ( !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 320) & 0xFFF) + 1) )
    return 0;
  v3 = sub_1000EF90((_DWORD *)(this - 4));
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 164))(v3);
  v5 = (_DWORD *)v4;
  if ( !v4 || !sub_10028810(v4, v48) )
    return 0;
  v7 = *(_DWORD *)dword_10413178;
  v8 = (*(int (__thiscall **)(_DWORD *))(v5[1] + 36))(v5 + 1);
  v9 = (*(int (__thiscall **)(int, int))(v7 + 112))(dword_10413178, v8);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(v9 + 176) + 12 * sub_10025760(v5);
  v11 = v9 + v10 == 0;
  v12 = v9 + v10;
  v71 = v12;
  if ( v11 )
    return 0;
  sub_10049ED0((_DWORD *)(this - 4));
  v13 = sub_10049070((float *)(this - 4));
  if ( v13 >= 1.0 )
    v13 = sub_100490E0((float *)(this - 4));
  *(float *)&v97 = v13;
  if ( v13 < 0.99000001 )
  {
    v14 = *(_DWORD *)(this + 1220);
    if ( v14 == 1 || v14 == 2 )
    {
      sub_10049D60(this - 4, v12, (int)v48);
      v13 = *(float *)&v97;
    }
  }
  *(float *)&v94 = 8.0 - (1.0 - v13) * 32.0;
  v15 = (float *)sub_101422E0();
  v72 = *v15 * *(float *)&v94;
  v73 = v15[1] * *(float *)&v94;
  v74 = *(float *)&v94 * v15[2];
  v16 = (*((float *)off_103DC81C + 3) - *(float *)(this + 1192)) / *(float *)(this + 1200);
  v95 = v16;
  if ( v16 <= 1.0 )
  {
    if ( v16 < 0.75 )
      v95 = 0.75;
  }
  else
  {
    v95 = 1.0;
  }
  if ( !dword_10445298 )
  {
    sub_100F0920();
    dword_10445298 = sub_100F0950("effects/spark");
  }
  if ( !dword_10409678 )
  {
    sub_100F0920();
    dword_10409678 = sub_100F0950("effects/combinemuzzle2");
  }
  *(float *)&v94 = 0.0;
  if ( *(int *)(v12 + 4) <= 0 )
    return 1;
  v83 = 0;
  v60 = *(float *)&v97 * 3.0;
  while ( 2 )
  {
    sub_10049470(
      (float *)(v12 + v83 + *(_DWORD *)(v12 + 8)),
      v48[*(_DWORD *)(v12 + v83 + *(_DWORD *)(v12 + 8))],
      &v88,
      v52,
      v49);
    v79 = v52[0];
    v80 = v52[1];
    v81 = v52[2];
    v75 = off_103EDFEC() * 0.75;
    v76 = v49[0];
    v77 = v49[1];
    v78 = v49[2];
    v17 = off_103EDFEC() * 0.75;
    *(float *)&v96 = v17;
    v18 = 3.0;
    if ( v60 <= 3.0 )
    {
      v18 = v60;
      if ( v60 < 0.0 )
        v18 = 0.0;
    }
    v11 = *(_DWORD *)(this + 1220) == 3;
    v97 = (int)v18;
    v86 = 2;
    if ( v11 && *(_BYTE *)(this + 1244) == 1 )
    {
      v97 = 15;
      v86 = 20;
    }
    v70 = 0;
    v82 = v17 * 0.5;
    v85 = v17 * -0.5;
    v87 = 0.5 * v75;
    v84 = -0.5 * v75;
    do
    {
      v19 = v85;
      sub_100EB300(v85, v82);
      v61 = v76 * v19;
      v62 = v77 * v19;
      v63 = v19 * v78;
      v20 = v84;
      sub_100EB300(v84, v87);
      v21 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8);
      v91 = v79 * v20 + v61 + v72;
      v92 = v80 * v20 + v62 + v73;
      v93 = v20 * v81 + v63 + v74;
      if ( v21(dword_10413198, 0, 2) )
        goto LABEL_51;
      v56[0] = v88 + v91;
      v56[1] = v89 + v92;
      v56[2] = v90 + v93;
      v22 = sub_100F2B60(60, dword_10445298, v56);
      if ( !v22 )
        return 1;
      sub_100EB300(-4.0, 4.0);
      v54 = -4.0;
      sub_100EB300(-4.0, 4.0);
      v55 = -4.0;
      sub_100EB300(16.0, 64.0);
      *(float *)(v22 + 24) = v54;
      *(float *)(v22 + 28) = v55;
      *(float *)(v22 + 32) = 16.0;
      if ( *(_DWORD *)(this + 1220) == 3 && *(_BYTE *)(this + 1244) == 1 )
      {
        v67 = v88 + v91 - *(float *)(this + 1228);
        v68 = v89 + v92 - *(float *)(this + 1232);
        v69 = v90 + v93 - *(float *)(this + 1236);
        off_103EDFEC();
        v23 = (double)*(int *)(this + 1240);
        v24 = v67 * v23;
        v25 = v68 * v23;
        v26 = v23 * v69;
        *(float *)(v22 + 24) = v24;
        *(float *)(v22 + 28) = v25;
        *(float *)(v22 + 32) = v26;
      }
      if ( *(float *)(v22 + 32) <= 0.0 )
      {
        v98 = (int)(v95 + v95);
      }
      else
      {
        v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                4.0,
                6.0);
        v98 = (int)(v27 * v95);
      }
      *(_BYTE *)(v22 + 53) = v98;
      v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.40000001,
              0.5);
      *(float *)(v22 + 40) = v28;
      if ( *(float *)&v97 == 0.0 )
      {
        *(float *)(v22 + 40) = v28 * 2.0;
        v98 = (int)(2.0 * v95);
        *(_BYTE *)(v22 + 53) = v98;
        sub_100EB300(-4.0, 4.0);
        *(float *)(v22 + 56) = -4.0;
        if ( *(_DWORD *)(this + 1220) != 3 || *(_BYTE *)(this + 1244) != 1 )
          goto LABEL_50;
        *(float *)(v22 + 40) = *(float *)(v22 + 40) + *(float *)(v22 + 40);
        v47 = 1.0;
        v29 = -1.0;
      }
      else
      {
        v47 = 8.0;
        v29 = -8.0;
      }
      v46 = v29;
      sub_100EB300(v46, v47);
      *(float *)(v22 + 56) = v29;
LABEL_50:
      *(float *)(v22 + 44) = 0.0;
      v30 = sub_100EB330(0, 360);
      v98 = v30;
      *(_DWORD *)(v22 + 48) = -1;
      *(_BYTE *)(v22 + 52) = 0;
      *(float *)(v22 + 36) = (float)v30;
      *(_BYTE *)(v22 + 54) = 0;
LABEL_51:
      ++v70;
    }
    while ( v70 < v86 );
    v31 = *(float *)&v96;
    v32 = 0;
    if ( v97 <= 0 )
    {
LABEL_59:
      v83 += 68;
      if ( ++v94 < *(_DWORD *)(v71 + 4) )
      {
        v12 = v71;
        continue;
      }
    }
    else
    {
      v82 = v31 * 0.5;
      v85 = v31 * -0.5;
      v87 = 0.5 * v75;
      v84 = -0.5 * v75;
      while ( 1 )
      {
        v33 = v85;
        sub_100EB300(v85, v82);
        v57 = v76 * v33;
        v58 = v77 * v33;
        v59 = v33 * v78;
        v34 = v84;
        sub_100EB300(v84, v87);
        v35 = v79 * v34 + v57 + v72;
        v91 = v35;
        v36 = v35;
        v37 = v80 * v34 + v58 + v73;
        v92 = v37;
        v38 = v37;
        v39 = v34 * v81 + v59 + v74;
        v93 = v39;
        v53[0] = v36 + v88;
        v53[1] = v38 + v89;
        v53[2] = v39 + v90;
        v40 = sub_100F2B60(60, dword_10409678, v53);
        if ( !v40 )
          break;
        sub_100EB300(-4.0, 4.0);
        v50 = -4.0;
        sub_100EB300(-4.0, 4.0);
        v51 = -4.0;
        sub_100EB300(-64.0, 128.0);
        *(float *)(v40 + 24) = v50;
        *(float *)(v40 + 28) = v51;
        *(float *)(v40 + 32) = -64.0;
        v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                8.0,
                12.0);
        v96 = (int)(v41 * v95);
        *(_BYTE *)(v40 + 53) = v96;
        *(float *)(v40 + 40) = 0.1;
        *(float *)(v40 + 44) = 0.0;
        *(float *)&v96 = COERCE_FLOAT(sub_100EB330(0, 360));
        *(float *)(v40 + 36) = (float)v96;
        sub_100EB300(-2.0, 2.0);
        *(float *)(v40 + 56) = -2.0;
        *(_DWORD *)(v40 + 48) = -1;
        *(_BYTE *)(v40 + 52) = 0;
        *(_BYTE *)(v40 + 54) = 0;
        if ( *(_DWORD *)(this + 1220) == 3 && *(_BYTE *)(this + 1244) == 1 )
        {
          v64 = v88 + v91 - *(float *)(this + 1228);
          v65 = v89 + v92 - *(float *)(this + 1232);
          v66 = v90 + v93 - *(float *)(this + 1236);
          off_103EDFEC();
          v42 = (double)*(int *)(this + 1240);
          v43 = v64 * v42;
          v44 = v65 * v42;
          v45 = v42 * v66;
          *(float *)(v40 + 24) = v43;
          *(float *)(v40 + 28) = v44;
          *(float *)(v40 + 32) = v45;
          *(float *)(v40 + 40) = 0.5;
        }
        if ( ++v32 >= v97 )
          goto LABEL_59;
      }
    }
    return 1;
  }
}
