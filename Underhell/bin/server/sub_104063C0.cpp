void __usercall sub_104063C0(int a1@<ecx>, int a2@<ebp>)
{
  double v3; // st7
  int i; // esi
  unsigned int v5; // eax
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  int v11; // eax
  int v12; // ecx
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  int *v15; // edx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  int v18; // edx
  int v19; // esi
  float *v20; // eax
  double v21; // st6
  double v22; // st5
  bool v23; // c0
  double v24; // st7
  double v25; // st5
  double v26; // st4
  double v27; // st7
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // ecx
  float v31; // eax
  float v32; // edx
  double v33; // st7
  float *v34; // eax
  int v35; // edx
  int v36; // eax
  float v37; // [esp+34h] [ebp-140h]
  float v38; // [esp+34h] [ebp-140h]
  float v39; // [esp+34h] [ebp-140h]
  float v40[22]; // [esp+48h] [ebp-12Ch] BYREF
  _BYTE v41[12]; // [esp+A0h] [ebp-D4h] BYREF
  float v42[20]; // [esp+ACh] [ebp-C8h] BYREF
  float v43[3]; // [esp+FCh] [ebp-78h] BYREF
  float v44[3]; // [esp+108h] [ebp-6Ch] BYREF
  float v45[3]; // [esp+114h] [ebp-60h] BYREF
  float v46; // [esp+120h] [ebp-54h] BYREF
  float v47; // [esp+124h] [ebp-50h]
  float v48; // [esp+128h] [ebp-4Ch]
  float v49; // [esp+12Ch] [ebp-48h] BYREF
  float v50; // [esp+130h] [ebp-44h]
  float v51; // [esp+134h] [ebp-40h]
  float v52; // [esp+138h] [ebp-3Ch] BYREF
  float v53; // [esp+13Ch] [ebp-38h]
  float v54; // [esp+140h] [ebp-34h]
  int v55; // [esp+144h] [ebp-30h]
  int v56; // [esp+148h] [ebp-2Ch]
  float v57; // [esp+14Ch] [ebp-28h] BYREF
  float v58; // [esp+150h] [ebp-24h] BYREF
  float v59; // [esp+154h] [ebp-20h]
  float v60; // [esp+158h] [ebp-1Ch]
  float v61; // [esp+15Ch] [ebp-18h]
  int v62; // [esp+160h] [ebp-14h]
  int v63; // [esp+164h] [ebp-10h]
  _DWORD v64[3]; // [esp+168h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+174h] [ebp+0h]

  v64[0] = a2;
  v64[1] = retaddr;
  v61 = 56755.84;
  v3 = *(float *)(a1 + 2124);
  v63 = 0;
  if ( 0.0 != v3 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 2124) )
  {
    sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) & 0xFFFB);
    *(float *)(a1 + 2124) = 0.0;
  }
  for ( i = dword_106F04AC; i; i = *(_DWORD *)(i + 900) )
  {
    if ( *(_BYTE *)(i + 897) )
    {
      v5 = *(_DWORD *)(i + 412);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(i + 412) & 0xFFF) + 2] != v5 >> 12 )
        v62 = 0;
      else
        v62 = off_1061BE18[4 * (*(_DWORD *)(i + 412) & 0xFFF) + 1];
      if ( v62 == sub_10019B00((_DWORD *)a1) )
      {
        if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
          sub_100DAE60(i);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v6 = *(float *)(a1 + 580) - *(float *)(i + 580);
        v7 = v6 * v6;
        v8 = *(float *)(a1 + 584) - *(float *)(i + 584);
        v9 = *(float *)(a1 + 588) - *(float *)(i + 588);
        v37 = v9 * v9 + v8 * v8 + v7;
        v10 = off_10689708(v37);
        if ( v61 > v10 )
        {
          v61 = v10;
          v63 = i;
        }
      }
    }
  }
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    v38 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
        + *(float *)(a1 + 476) * *(float *)(a1 + 476)
        + *(float *)(a1 + 484) * *(float *)(a1 + 484);
    if ( off_10689708(v38) * 2.5 >= v61 )
    {
      if ( (*(_DWORD *)(v63 + 252) & 0x800) != 0 )
        sub_100DAE60(v63);
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)a1 + 544))(a1, v63 + 580, 16449, 0) )
      {
        if ( (*(_DWORD *)(v63 + 252) & 0x800) != 0 )
          sub_100DAE60(v63);
        sub_1023D4B0(8, (float *)(v63 + 580), 200, 0.2, v63, 2, 0);
      }
    }
  }
  if ( *(_DWORD *)(dword_106F066C + 48) )
  {
    v11 = dword_106F06B0 - 1;
    v56 = dword_106F06B0 - 1;
    if ( dword_106F06B0 - 1 >= 0 )
    {
      v12 = 12 * v11;
      v55 = 12 * v11;
      do
      {
        v13 = (unsigned int *)(dword_106F06A4 + v12);
        v14 = *v13;
        v62 = (int)v13;
        if ( v14 != -1 && (v15 = &off_1061BE18[4 * (v14 & 0xFFF) + 1], v16 = v14 >> 12, v15[1] == v16) && *v15 )
        {
          if ( v15[1] == v16 )
            v18 = *v15;
          else
            v18 = 0;
          v19 = v18 + 320;
          v61 = COERCE_FLOAT(sub_10022D70());
          v20 = (float *)sub_10022D70();
          v39 = v61;
          *v20 = (*(float *)(v19 + 20) - *(float *)(v19 + 8)) * 0.5 + *(float *)(v19 + 8);
          v20[1] = (*(float *)(v19 + 24) - *(float *)(v19 + 12)) * 0.5 + *(float *)(v19 + 12);
          v20[2] = 0.5 * (*(float *)(v19 + 28) - *(float *)(v19 + 16)) + *(float *)(v19 + 16);
          sub_100E8D90((_BYTE *)v19, v20, (float *)LODWORD(v39));
          if ( *(float *)(v62 + 8) <= 0.0 )
          {
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            v24 = *(float *)(a1 + 580) - *(float *)LODWORD(v61);
            v25 = *(float *)(a1 + 588) - *(float *)(LODWORD(v61) + 8);
            v26 = *(float *)(a1 + 584) - *(float *)(LODWORD(v61) + 4);
            v23 = v25 * v25 + v26 * v26 + v24 * v24 < *(float *)(v62 + 4);
LABEL_49:
            if ( v23 )
              goto LABEL_53;
            goto LABEL_50;
          }
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          if ( fabs(*(float *)(LODWORD(v61) + 8) - *(float *)(a1 + 588)) < *(float *)(v62 + 8) )
          {
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            v21 = *(float *)(a1 + 584) - *(float *)(LODWORD(v61) + 4);
            v22 = *(float *)(a1 + 580) - *(float *)LODWORD(v61);
            v23 = v22 * v22 + v21 * v21 < *(float *)(v62 + 4);
            goto LABEL_49;
          }
        }
        else if ( dword_106F06B0 > 0 )
        {
          v17 = (unsigned int *)(dword_106F06A4 + 12 * dword_106F06B0 - 12);
          *v13 = *v17;
          v13[1] = v17[1];
          v13[2] = v17[2];
          --dword_106F06B0;
        }
LABEL_50:
        v12 = v55 - 12;
        --v56;
        v55 -= 12;
      }
      while ( v56 >= 0 );
    }
  }
  if ( v63 )
  {
    (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)a1 + 1152))(a1, v63, v44, &v57);
    if ( sub_100EA2A0() )
      v57 = v57 + v57;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v19 = a1 + 580;
    v49 = v44[0] - *(float *)(a1 + 580);
    v50 = v44[1] - *(float *)(a1 + 584);
    v51 = v44[2] - *(float *)(a1 + 588);
    v27 = off_10689714();
    *(float *)&v55 = v27;
    v28 = *(_DWORD *)(v63 + 892);
    if ( v28 != -1
      && off_1061BE18[4 * (*(_DWORD *)(v63 + 892) & 0xFFF) + 2] == v28 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v63 + 892) & 0xFFF) + 1]
      && v27 <= 240.0
      && *(_DWORD *)(dword_10698344 + 48) )
    {
      v29 = *(_DWORD *)(v63 + 892);
      if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(v63 + 892) & 0xFFF) + 2] != v29 >> 12 )
        v30 = 0;
      else
        v30 = off_1061BE18[4 * (*(_DWORD *)(v63 + 892) & 0xFFF) + 1];
      if ( *(char **)(v30 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v30, "npc_strider") )
        v57 = v57 * 1.75;
    }
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    v31 = *(float *)(a1 + 476);
    v32 = *(float *)(a1 + 484);
    v53 = *(float *)(a1 + 480);
    v52 = v31;
    v54 = v32;
    v33 = off_10689714();
    *(float *)&v56 = v33;
    v58 = v52;
    v59 = v53;
    v60 = v54;
    if ( *(float *)(dword_106B31C8 + 16) > 0.0 )
    {
      if ( 0.0 == v33 )
      {
        v58 = v49;
        v59 = v50;
        v60 = v51;
      }
      else
      {
        v58 = v52 * (1.0 - v57) + v49 * v57;
        v59 = v53 * (1.0 - v57) + v50 * v57;
        v60 = (1.0 - v57) * v54 + v57 * v51;
        if ( off_10689714() < 0.001 )
        {
          v34 = &v49;
          if ( 0.0 == *(float *)&v55 )
            v34 = &v52;
          v58 = *v34;
          v59 = v34[1];
          v60 = v34[2];
        }
      }
    }
    sub_10422540(&v58, v43);
    sub_100E0EA0(a1, v43);
    v58 = v58 * *(float *)&v56;
    v59 = v59 * *(float *)&v56;
    v60 = *(float *)&v56 * v60;
    sub_100DD660(a1, &v58);
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    if ( *(float *)(a1 + 476) == flt_106F1CA8
      && *(float *)(a1 + 480) == flt_106F1CAC
      && *(float *)(a1 + 484) == flt_106F1CB0 )
    {
LABEL_53:
      sub_10406170((float *)a1, (int)v64, a1, v19);
    }
    else
    {
      sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
      if ( *(_BYTE *)(a1 + 2128) == 1 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
          sub_100DAFD0(a1);
        v35 = *(_DWORD *)(a1 + 252) >> 11;
        v46 = *(float *)(a1 + 476) * 0.5;
        v47 = *(float *)(a1 + 480) * 0.5;
        v48 = 0.5 * *(float *)(a1 + 484);
        if ( (v35 & 1) != 0 )
          sub_100DAE60(a1);
        v36 = *(_DWORD *)(a1 + 252) >> 11;
        v45[0] = v46 + *(float *)v19;
        v45[1] = v47 + *(float *)(a1 + 584);
        v45[2] = v48 + *(float *)(a1 + 588);
        if ( (v36 & 1) != 0 )
          sub_100DAE60(a1);
        sub_1001F180(v40, (float *)(a1 + 580), v45);
        sub_10265570(&v46, a1, 0);
        (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v40,
          33570827,
          &v46,
          v41);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v41, (int)v42, 255, 0, 0, 1, 5.0);
        sub_1023D4B0(8, v42, 100, 0.2, a1, 2, 0);
      }
    }
  }
  else
  {
    sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
  }
}
