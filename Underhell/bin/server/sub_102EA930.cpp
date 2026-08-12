char __thiscall sub_102EA930(float *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // ecx
  int v9; // eax
  float *v10; // ecx
  int v11; // ecx
  double v12; // st7
  char v13; // bl
  double v14; // st6
  float *v15; // eax
  double v16; // st4
  double v17; // st7
  double v18; // st4
  double v19; // st5
  double v20; // st7
  double v21; // st3
  double v22; // st6
  double v23; // st3
  double v24; // st4
  double v25; // st6
  double v26; // st6
  char v27; // bl
  float *v28; // esi
  int v29; // edx
  int v30; // edx
  float v32; // [esp+4h] [ebp-50h]
  float v33; // [esp+8h] [ebp-4Ch]
  float v34; // [esp+Ch] [ebp-48h]
  float v35; // [esp+10h] [ebp-44h]
  float v36; // [esp+14h] [ebp-40h]
  float v37; // [esp+18h] [ebp-3Ch]
  float v38; // [esp+1Ch] [ebp-38h]
  float v39; // [esp+20h] [ebp-34h]
  float v40; // [esp+24h] [ebp-30h]
  float v41; // [esp+28h] [ebp-2Ch] BYREF
  float v42; // [esp+2Ch] [ebp-28h]
  float v43; // [esp+30h] [ebp-24h]
  float v44; // [esp+34h] [ebp-20h] BYREF
  float v45; // [esp+38h] [ebp-1Ch]
  float v46; // [esp+3Ch] [ebp-18h]
  float v47; // [esp+40h] [ebp-14h] BYREF
  float v48; // [esp+44h] [ebp-10h]
  int v49; // [esp+48h] [ebp-Ch]
  float v50; // [esp+4Ch] [ebp-8h] BYREF
  bool v51; // [esp+52h] [ebp-2h]
  char v52; // [esp+53h] [ebp-1h]
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(*((_DWORD *)this + 1) + 5144);
  if ( v2 == -1 )
    return v2;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(*((_DWORD *)this + 1) + 5144) & 0xFFF) + 1];
  v2 >>= 12;
  if ( v3[1] != v2 )
    return v2;
  v4 = (_DWORD *)*v3;
  if ( !*v3 )
    return v2;
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 140))(this);
  v5 = *((_DWORD *)this + 2);
  if ( (*(_BYTE *)(v5 + 36) & 2) != 0 )
  {
    LOBYTE(v2) = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
    return v2;
  }
  *(_DWORD *)(v5 + 40) &= ~2u;
  sub_101C73D0(*((unsigned int **)this + 1), 0);
  v6 = (float *)*((_DWORD *)this + 2);
  v38 = v6[16];
  v39 = v6[17];
  v40 = v6[18];
  v35 = v6[38];
  v36 = v6[39];
  v37 = v6[40];
  sub_1014EC90((int)v4, &v44);
  sub_1014ECE0((int)v4, &v41);
  sub_10425550(*((_DWORD *)this + 2) + 152, &v44, &v41, &v50);
  v7 = (float *)*((_DWORD *)this + 2);
  v8 = (float *)*((_DWORD *)this + 1);
  v7[16] = v7[16] + v8[116];
  v7[17] = v7[17] + v8[117];
  v7[18] = v7[18] + v8[118];
  (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 112))(this, 0, 0);
  v9 = *((_DWORD *)this + 2);
  v10 = (float *)*((_DWORD *)this + 1);
  *(float *)(v9 + 64) = *(float *)(v9 + 64) - v10[116];
  *(float *)(v9 + 68) = *(float *)(v9 + 68) - v10[117];
  *(float *)(v9 + 72) = *(float *)(v9 + 72) - v10[118];
  v11 = *((_DWORD *)this + 2);
  v12 = *(float *)(v11 + 44);
  LOBYTE(v49) = (*(_DWORD *)(v9 + 36) >> 5) & ((*(_DWORD *)(v9 + 36) >> 5) ^ (*(_DWORD *)(v9 + 40) >> 5)) & 1;
  if ( 0.0 == v12 && *(float *)(v11 + 48) == 0.0 )
  {
    v13 = 0;
  }
  else
  {
    v51 = 1;
    v13 = 1;
  }
  v32 = v44 - v41;
  v33 = v45 - v42;
  v34 = v46 - v43;
  v48 = off_10689714();
  v51 = 0;
  if ( v13 )
    v51 = fabs(this[7] * v33 + this[6] * v32 + this[8] * v34) > 0.89999998;
  sub_10425550(*((_DWORD *)this + 2) + 152, &v44, &v41, &v47);
  v52 = 0;
  v14 = 1.0 / v48;
  if ( v47 < -v14 )
  {
    if ( v47 < (double)v50 )
    {
      v52 = 1;
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( v47 > v14 + 1.0 )
  {
    if ( v47 <= (double)v50 )
    {
LABEL_15:
      v52 = 0;
      goto LABEL_19;
    }
    v52 = 1;
  }
LABEL_19:
  v15 = (float *)*((_DWORD *)this + 2);
  v16 = v44 - v15[38];
  v17 = v16 * v16;
  v18 = v45 - v15[39];
  v19 = v46 - v15[40];
  v20 = v19 * v19 + v18 * v18 + v17;
  v21 = v41 - v15[38];
  v22 = v21 * v21;
  v23 = v42 - v15[39];
  v24 = v43 - v15[40];
  v25 = v24 * v24 + v23 * v23 + v22;
  if ( v25 <= v20 )
    v20 = v25;
  v26 = *(float *)(dword_106E172C + 44) * *(float *)(dword_106B31C8 + 28);
  LOBYTE(v2) = v26 * v26 > v20 && *(_DWORD *)(dword_106E1774 + 48) && v13 && !v51;
  v27 = v49;
  if ( (_BYTE)v49 || (_BYTE)v2 )
    LOBYTE(v2) = 1;
  if ( *(_BYTE *)(*((_DWORD *)this + 1) + 447) == 3 )
  {
    if ( !(_BYTE)v2 )
    {
      LOBYTE(v2) = sub_102EA570((int *)this, (int)&savedregs, v4, 1, 0);
      if ( (_BYTE)v2 )
        return v2;
      goto LABEL_35;
    }
  }
  else if ( !(_BYTE)v2 )
  {
LABEL_35:
    if ( !v52 )
      return v2;
LABEL_36:
    v28 = (float *)*((_DWORD *)this + 2);
    v28[16] = v38;
    v28[17] = v39;
    v28[18] = v40;
    v28[38] = v35;
    v28[39] = v36;
    v28[40] = v37;
    return v2;
  }
  if ( v52 || v20 < 256.0 )
  {
    if ( (_BYTE)v49 )
    {
      *(_DWORD *)(*((_DWORD *)this + 2) + 40) |= 0x20u;
      *(_DWORD *)(*((_DWORD *)this + 1) + 3296) &= ~0x20u;
      *(_BYTE *)(*((_DWORD *)this + 1) + 5218) = 0;
    }
    LOBYTE(v2) = sub_102EA570((int *)this, (int)&savedregs, v4, 0, v49);
    if ( !(_BYTE)v2 && v52 )
    {
      if ( !v27 )
        goto LABEL_36;
      sub_100E0970(*((_DWORD *)this + 1), v30, 2, 0);
      sub_1015D550(*((_DWORD *)this + 1), 0);
      sub_102E8350(this, 0);
LABEL_49:
      v2 = *((_DWORD *)this + 2);
      *(float *)(v2 + 64) = this[6] * 100.0;
      *(float *)(v2 + 68) = this[7] * 100.0;
      *(float *)(v2 + 72) = 100.0 * this[8];
      *(float *)(v2 + 72) = 50.0;
    }
  }
  else if ( (_BYTE)v49 )
  {
    LOBYTE(v2) = sub_102EA570((int *)this, (int)&savedregs, v4, 0, 0);
    if ( !(_BYTE)v2 )
    {
      sub_100E0970(*((_DWORD *)this + 1), v29, 2, 0);
      sub_1015D550(*((_DWORD *)this + 1), 0);
      sub_102E8350(this, 0);
      *(_BYTE *)(*((_DWORD *)this + 1) + 5218) = 0;
      goto LABEL_49;
    }
  }
  return v2;
}
