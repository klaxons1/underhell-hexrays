void __thiscall sub_101F2120(int this, int a2)
{
  int v2; // ebx
  int v4; // eax
  int (__thiscall *v5)(int); // edx
  int i; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  void (__thiscall *v12)(int, int *, _DWORD); // edx
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // edx
  double v19; // st4
  double v20; // st7
  double v21; // st4
  double v22; // st5
  int v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  float *v26; // eax
  double v27; // st7
  double v28; // st4
  double v29; // st3
  double v30; // st2
  double v31; // st5
  bool v32; // zf
  double v33; // st6
  double v34; // st1
  double v35; // rt0
  double v36; // st1
  double v37; // st6
  double v38; // st1
  double v39; // rt1
  double v40; // st1
  int v41; // [esp+0h] [ebp-C0h]
  _DWORD *v42; // [esp+4h] [ebp-BCh]
  _BYTE v43[12]; // [esp+24h] [ebp-9Ch] BYREF
  int v44[10]; // [esp+30h] [ebp-90h] BYREF
  char v45; // [esp+5Ah] [ebp-66h]
  char v46; // [esp+5Bh] [ebp-65h]
  float v47; // [esp+78h] [ebp-48h]
  int v48; // [esp+7Ch] [ebp-44h] BYREF
  float v49; // [esp+80h] [ebp-40h]
  float v50; // [esp+84h] [ebp-3Ch]
  float v51; // [esp+88h] [ebp-38h]
  int v52[2]; // [esp+8Ch] [ebp-34h] BYREF
  float v53; // [esp+94h] [ebp-2Ch]
  float v54; // [esp+98h] [ebp-28h]
  float v55; // [esp+9Ch] [ebp-24h]
  int v56; // [esp+A0h] [ebp-20h] BYREF
  float v57; // [esp+A4h] [ebp-1Ch]
  float v58; // [esp+A8h] [ebp-18h]
  float v59; // [esp+ACh] [ebp-14h]
  float v60; // [esp+B0h] [ebp-10h] BYREF
  float v61; // [esp+B4h] [ebp-Ch]
  float v62; // [esp+B8h] [ebp-8h]
  bool v63; // [esp+BEh] [ebp-2h]
  char v64; // [esp+BFh] [ebp-1h]
  int v65; // [esp+C8h] [ebp+8h]
  int v66; // [esp+C8h] [ebp+8h]

  v2 = 0;
  if ( *(_DWORD *)(dword_106C1DF4 + 48) )
    return;
  v4 = (*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(this + 3588) + 24))(
         *(_DWORD *)(this + 3588),
         &v56,
         0);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 76);
  v63 = v4 > 0;
  if ( (v5(a2) & 0x40) != 0 )
  {
    v52[0] = 0;
    v52[1] = 0;
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
    sub_101BA6A0(this, v52);
    for ( i = LODWORD(v54) - 1; i >= 0; --i )
    {
      v7 = v52[0];
      if ( *(_BYTE *)(*(_DWORD *)(v52[0] + 4 * i) + 306) == 6 )
        *(_BYTE *)(this + 3624) = 1;
      v8 = sub_100D7680(*(_DWORD *)(v7 + 4 * i));
      if ( v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 1284))(v8);
    }
    sub_102375F0(v52);
  }
  v9 = *(_DWORD *)(this + 3416);
  v64 = 0;
  if ( (v9 & 0x20) != 0 )
  {
    v64 = 1;
    *(_DWORD *)(this + 3416) = v9 & 0xFFFFFFDF;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3588) + 12))(*(_DWORD *)(this + 3588))
    || (*(_BYTE *)(this + 3416) & 0x10) != 0 )
  {
    *(_BYTE *)(this + 3624) = 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1556))(this) )
    *(_BYTE *)(this + 3624) = 1;
  if ( *(_BYTE *)(this + 306) == 8 || *(_BYTE *)(this + 3244) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3600) = *(float *)(this + 580);
    *(float *)(this + 3604) = *(float *)(this + 584);
    *(float *)(this + 3608) = *(float *)(this + 588);
  }
  else
  {
    if ( 0.0 == *(float *)(dword_106B9F0C + 44) || !v63 )
      return;
    v10 = sub_101C5260((_DWORD *)this);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 306) == 6 )
      {
        v11 = *(_DWORD *)(v10 + 424);
        if ( v11 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 40))(v11) )
            v2 = v11;
        }
      }
    }
    v12 = *(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a2 + 188);
    v59 = *(float *)&v2;
    v12(a2, &v56, 0);
    (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 3588) + 36))(*(_DWORD *)(this + 3588), &v60);
    v48 = v56;
    v49 = v57;
    v50 = v58;
    if ( *(_DWORD *)(dword_106BBA3C + 48) )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
      v65 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BB20(this + 580, v65, v13, 255, 0, 0, 24, 15.0);
      v41 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
      sub_1011BB20((int)&v56, v14, v41, 0, 0, 255, 24, 15.0);
      v2 = LODWORD(v59);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v17 = *(float *)(this + 588) - v58;
    if ( !*(_BYTE *)(this + 3624) && (*(_BYTE *)(this + 256) & 1) == 0 )
      v17 = v17 * 0.5;
    v18 = *(_DWORD *)(this + 252) >> 12;
    v15 = *(float *)(this + 580) - *(float *)&v56;
    v16 = *(float *)(this + 584) - v57;
    v47 = v17 * v17 + v16 * v16 + v15 * v15;
    if ( (v18 & 1) != 0 )
      sub_100DAFD0(this);
    v19 = v60 - *(float *)(this + 476);
    v20 = v19 * v19;
    v21 = v61 - *(float *)(this + 480);
    v22 = v62 - *(float *)(this + 484);
    v51 = v22 * v22 + v21 * v21 + v20;
    v59 = 4.0;
    *(float *)&v66 = 100.0;
    if ( sub_101E2490((_DWORD *)this, v2) )
    {
      v59 = 1.0;
      *(float *)&v66 = 25.0;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3588) + 64))(*(_DWORD *)(this + 3588)) )
    {
LABEL_47:
      if ( v59 <= (double)v47 || *(float *)&v66 <= (double)v51 )
      {
        if ( *(_BYTE *)(this + 3624) )
        {
LABEL_57:
          if ( *(float *)&v66 <= (double)v51 && !*(_BYTE *)(this + 3625) )
          {
            v26 = (float *)sub_10019660((_DWORD *)this);
            v53 = *v26;
            v54 = v26[1];
            v55 = v26[2];
            v27 = off_10689714();
            v28 = v53;
            v29 = v54;
            v30 = v60 * v53 + v61 * v54 + v62 * v55;
            v31 = v55;
            if ( v30 <= v27 )
            {
              if ( -v27 > v30 )
                v30 = -v27;
            }
            else
            {
              v30 = v27;
            }
            v32 = (*(_BYTE *)(this + 3416) & 0x10) == 0;
            v33 = -v30;
            v60 = v60 + v33 * v28;
            v34 = v29 * v33 + v61;
            v61 = v34;
            v35 = v34;
            v36 = v33 * v31;
            v37 = v35;
            v38 = v36 + v62;
            v62 = v38;
            if ( !v32 )
            {
              v39 = v38;
              v40 = (v30 - v27) * 0.1 + v27 - v27;
              v60 = v28 * v40 + v60;
              v61 = v37 + v29 * v40;
              v62 = v40 * v31 + v39;
            }
            if ( !sub_101E2490((_DWORD *)this, v2) )
            {
              if ( (*(_BYTE *)(this + 3416) & 0x10) == 0 && sub_100EA2A0() )
              {
                v60 = v60 * 0.5;
                v61 = v61 * 0.5;
                v62 = 0.5 * v62;
              }
              sub_100EA150(this, &v60);
            }
          }
          sub_10265A60(this, &v56, &v56, 33636363, this, 8, v43);
          if ( !v45 && !v46 )
            sub_100E0D20(this, (float *)&v56);
          goto LABEL_73;
        }
      }
      else if ( !v2 || *(_BYTE *)(this + 3624) )
      {
        if ( *(_BYTE *)(this + 3624) )
        {
          v42 = sub_10019640((_DWORD *)this);
          v25 = sub_10019640((_DWORD *)this);
          sub_10265A60(this, v25, v42, 33636363, this, 8, v43);
          if ( v45 || v46 )
          {
            v48 = *(int *)(this + 3600);
            v49 = *(float *)(this + 3604);
            v50 = *(float *)(this + 3608);
            sub_100E0D20(this, (float *)&v56);
            goto LABEL_74;
          }
        }
LABEL_73:
        if ( !v64 )
        {
LABEL_81:
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          *(float *)(this + 3600) = *(float *)(this + 580);
          *(float *)(this + 3604) = *(float *)(this + 584);
          *(float *)(this + 3608) = *(float *)(this + 588);
          *(_BYTE *)(this + 3625) = 0;
          return;
        }
LABEL_74:
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_10265A60(this, this + 580, this + 580, 33636363, this, 8, v43);
        if ( v45 || v46 )
          sub_100E0D20(this, (float *)&v48);
        goto LABEL_81;
      }
      if ( !v2 )
        goto LABEL_74;
      goto LABEL_57;
    }
    v23 = *(_DWORD *)(this + 252) >> 11;
    *(_BYTE *)(this + 3625) = 1;
    if ( (v23 & 1) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10265A60(this, this + 580, this + 580, 33636363, this, 8, v43);
    if ( v46 )
    {
      v24 = sub_10019640((_DWORD *)this);
      sub_10265A60(this, &v56, v24, 33636363, this, 8, v43);
      if ( !v46 )
      {
        sub_100E0D20(this, (float *)v44);
        sub_101E5490(this, (int)v44, (int)&flt_106F1CA8, 0.0);
        return;
      }
      goto LABEL_47;
    }
  }
}
