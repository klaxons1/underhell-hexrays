bool __thiscall sub_102E9E90(int this)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  int *v4; // edi
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  bool result; // al
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi
  char v13; // bl
  _DWORD *v14; // edi
  int v15; // edx
  int v16; // edi
  int v17; // edx
  double v18; // st6
  double v19; // st5
  double v20; // st4
  int v21; // ecx
  int v22; // eax
  float v23; // eax
  float v24; // ecx
  int v25; // edx
  double v26; // st7
  float *v27; // eax
  double v28; // st7
  double v29; // st5
  double v30; // st4
  double v31; // st6
  int v32; // eax
  int v33; // edx
  double v34; // st7
  double v35; // st6
  double v36; // st4
  double v37; // st5
  double v38; // st2
  double v39; // st7
  double v40; // st2
  bool v41; // c0
  bool v42; // c3
  double v43; // st5
  double v44; // st6
  double v45; // st4
  double v46; // rtt
  float *v47; // esi
  double v48; // st6
  float v49[3]; // [esp+18h] [ebp-40h] BYREF
  float v50[3]; // [esp+24h] [ebp-34h] BYREF
  int v51[3]; // [esp+30h] [ebp-28h] BYREF
  float v52; // [esp+3Ch] [ebp-1Ch] BYREF
  float v53; // [esp+40h] [ebp-18h]
  float v54; // [esp+44h] [ebp-14h]
  float v55; // [esp+48h] [ebp-10h]
  float v56; // [esp+4Ch] [ebp-Ch]
  float v57; // [esp+50h] [ebp-8h]
  int v58; // [esp+54h] [ebp-4h] BYREF
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 4);
  if ( *(_BYTE *)(v2 + 306) == 8 )
  {
    v3 = *(_DWORD *)(v2 + 5144);
    if ( v3 != -1 )
    {
      v4 = off_1061BE18;
LABEL_4:
      if ( v4[4 * (v3 & 0xFFF) + 2] == v3 >> 12 )
      {
        v5 = (_DWORD *)v4[4 * (v3 & 0xFFF) + 1];
        if ( v5 )
          sub_1014EB10(v5, v2);
      }
    }
LABEL_7:
    v6 = (_DWORD *)(*(_DWORD *)(this + 4) + 5144);
    if ( *v6 != -1 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v6 - 16))(v6 - 16, v6);
      *v6 = -1;
    }
    return 0;
  }
  v8 = *(_DWORD *)(v2 + 2180);
  v4 = off_1061BE18;
  if ( v8 != -1
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2180) & 0xFFF) + 2] == v8 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2180) & 0xFFF) + 1] )
  {
    v3 = *(_DWORD *)(v2 + 5144);
    if ( v3 != -1 )
      goto LABEL_4;
    goto LABEL_7;
  }
  if ( v2 )
    v2 += 5148;
  if ( *(_BYTE *)v2 )
  {
    if ( sub_102E8D10((_DWORD *)this) )
      return 1;
    v4 = off_1061BE18;
  }
  v9 = *(_DWORD *)(this + 4);
  *(float *)v51 = 0.0;
  *(float *)&v58 = 0.0;
  *(float *)&v51[1] = 0.0;
  *(float *)&v51[2] = 0.0;
  v10 = *(_DWORD *)(v9 + 5144);
  if ( v10 == -1 || v4[4 * (*(_DWORD *)(v9 + 5144) & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = v4[4 * (*(_DWORD *)(v9 + 5144) & 0xFFF) + 1];
  v12 = v11;
  if ( !v11 )
    goto LABEL_29;
  if ( *(_BYTE *)(v11 + 856)
    || *(float *)(v9 + 468) * *(float *)(v9 + 468)
     + *(float *)(v9 + 464) * *(float *)(v9 + 464)
     + *(float *)(v9 + 472) * *(float *)(v9 + 472) > 1.0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 1252))(v9);
    v12 = 0;
LABEL_29:
    sub_102E8EA0((int *)this, (int)&savedregs, 64.0, &v58, (float *)v51, 0);
    if ( !v12 && *(float *)&v58 != 0.0 && *(_DWORD *)(dword_106E1804 + 48) )
      sub_102DCF40(*(_DWORD *)(this + 4));
  }
  v13 = (*(_DWORD *)(*(_DWORD *)(this + 8) + 36) >> 5)
      & ((*(_DWORD *)(*(_DWORD *)(this + 8) + 36) >> 5)
       ^ (*(_DWORD *)(*(_DWORD *)(this + 8) + 40) >> 5))
      & 1;
  if ( !v12 )
  {
    if ( !v13 )
      return !*(_DWORD *)(dword_106E1804 + 48)
          && ((!sub_101C5260(*(_DWORD **)(this + 4)) || *(float *)(*(_DWORD *)(this + 8) + 44) > 0.0)
           && sub_102E9C20(this, (_DWORD *)v58, (float *)v51, 15.0, 32.0)
           || *(float *)(*(_DWORD *)(this + 8) + 44) > 0.0 && sub_102E9AB0(this, (_DWORD *)v58, (float *)v51));
    v14 = (_DWORD *)v58;
    if ( sub_102E84A0(this, v58) )
    {
      if ( sub_102E9E60((int *)this, v14, (float *)v51) )
        return 1;
    }
  }
  v16 = sub_102E81E0((_DWORD *)this);
  if ( !v16 )
    return 0;
  if ( v13 )
  {
    v15 = *(_DWORD *)(this + 4);
    *(_BYTE *)(v15 + 5218) = 0;
  }
  sub_100E0970(*(_DWORD *)(this + 4), v15, 9, 0);
  sub_1015D550(*(_DWORD *)(this + 4), 0);
  *(float *)(*(_DWORD *)(this + 4) + 552) = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = *(float *)(*(_DWORD *)(this + 4) + 4132);
  v21 = *(_DWORD *)(this + 8);
  v22 = *(_DWORD *)(v21 + 36);
  if ( (v22 & 0x10) != 0 )
    v18 = -v20;
  if ( (v22 & 8) != 0 )
    v18 = v18 + v20;
  if ( (v22 & 0x200) != 0 )
    v19 = -v20;
  if ( (v22 & 0x400) != 0 )
    v19 = v19 + v20;
  if ( (v22 & 2) == 0 )
  {
    if ( 0.0 == v18 && 0.0 == v19 )
    {
      *(float *)(v21 + 64) = 0.0;
      result = 1;
      *(float *)(v21 + 68) = 0.0;
      *(float *)(v21 + 72) = 0.0;
      return result;
    }
    v28 = v19;
    v29 = v18 * *(float *)(this + 24);
    v30 = *(float *)(this + 28) * v18;
    v31 = v18 * *(float *)(this + 32);
    v55 = v29 + *(float *)(this + 36) * v28;
    v56 = v30 + *(float *)(this + 40) * v28;
    v57 = v28 * *(float *)(this + 44) + v31;
    off_10689714();
    sub_1014ED30(v16, &v52);
    off_10689714();
    sub_1014EC90(v16, v50);
    sub_1014ECE0(v16, v49);
    v32 = *(_DWORD *)(this + 8);
    *(float *)&v58 = 0.0;
    if ( sub_10425550(v32 + 152, v50, v49, &v58) > 36.0 )
    {
      sub_100E0970(*(_DWORD *)(this + 4), v33, 2, 0);
      sub_102E8350((_DWORD *)this, 0);
      return 0;
    }
    if ( fabs(v50[2] - v49[2]) >= 64.0 )
      v34 = 0.30000001;
    else
      v34 = 0.0;
    v35 = 1.0;
    v36 = v53;
    v37 = v57 * v54 + v56 * v53 + v55 * v52;
    if ( v57 < 0.0 )
    {
      if ( -v37 <= v34 )
      {
        v39 = v52;
        v36 = v53;
        v43 = v54;
        goto LABEL_76;
      }
      v44 = v53;
      v39 = v52;
      v45 = -1.0;
      v43 = v54;
    }
    else
    {
      v38 = v34;
      v39 = v52;
      v40 = -v38;
      v41 = v40 < v37;
      v42 = v40 == v37;
      v43 = v54;
      if ( v41 || v42 )
      {
LABEL_76:
        v47 = *(float **)(this + 8);
        v48 = v35 * *(float *)(dword_106E172C + 44);
        v47[16] = v39 * v48;
        v47[17] = v36 * v48;
        v47[18] = v48 * v43;
        return 1;
      }
      v44 = v53;
      v45 = -1.0;
    }
    v46 = v45;
    v36 = v44;
    v35 = v46;
    goto LABEL_76;
  }
  sub_100E0970(*(_DWORD *)(this + 4), v17, 2, 0);
  sub_102E8350((_DWORD *)this, 0);
  v23 = *(float *)(this + 28);
  v24 = *(float *)(this + 32);
  v55 = *(float *)(this + 24);
  v25 = *(_DWORD *)(this + 8);
  v56 = v23;
  v57 = v24;
  if ( *(float *)(v25 + 44) < 0.0 )
  {
    v55 = -v55;
    v56 = -v56;
    v57 = -v57;
  }
  off_10689714();
  v26 = *(float *)(dword_106E172C + 44);
  v27 = (float *)(*(_DWORD *)(this + 8) + 64);
  *v27 = v55 * v26;
  v27[1] = v56 * v26;
  v27[2] = v26 * v57;
  if ( *(float *)(this + 32) >= 0.0 )
    *(float *)(*(_DWORD *)(this + 8) + 72) = *(float *)(*(_DWORD *)(this + 8) + 72) + 50.0;
  return 0;
}
