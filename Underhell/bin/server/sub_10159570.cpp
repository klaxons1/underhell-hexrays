void __thiscall sub_10159570(int *this)
{
  int v2; // edi
  int v3; // ecx
  double v4; // st7
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int v8; // edi
  int v9; // edx
  double v10; // st7
  float *v11; // ecx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st7
  double v16; // st6
  int v17; // edx
  double v18; // st6
  double v19; // rt1
  int v20; // edx
  float *v21; // eax
  float *v22; // ecx
  double v23; // st7
  double v24; // st7
  float *v25; // eax
  float *v26; // esi
  float *v27; // edi
  int v28; // ebx
  int v29; // eax
  float *v30; // eax
  double v31; // st6
  double v32; // st7
  float *v33; // eax
  int v34; // eax
  float *v35; // esi
  float *v36; // ecx
  float *v37; // esi
  float *v38; // ecx
  float v39; // [esp+8h] [ebp-B8h]
  float v40; // [esp+Ch] [ebp-B4h]
  float v41; // [esp+Ch] [ebp-B4h]
  float v42; // [esp+Ch] [ebp-B4h]
  float v43; // [esp+Ch] [ebp-B4h]
  _BYTE v44[12]; // [esp+18h] [ebp-A8h] BYREF
  float v45; // [esp+24h] [ebp-9Ch]
  float v46; // [esp+28h] [ebp-98h]
  float v47; // [esp+2Ch] [ebp-94h]
  float v48; // [esp+44h] [ebp-7Ch]
  _BYTE v49[12]; // [esp+6Ch] [ebp-54h] BYREF
  float v50[3]; // [esp+78h] [ebp-48h] BYREF
  float v51[3]; // [esp+84h] [ebp-3Ch] BYREF
  float v52; // [esp+90h] [ebp-30h] BYREF
  float v53; // [esp+94h] [ebp-2Ch]
  float v54; // [esp+98h] [ebp-28h]
  float v55[2]; // [esp+9Ch] [ebp-24h] BYREF
  float v56; // [esp+A4h] [ebp-1Ch]
  float v57[2]; // [esp+A8h] [ebp-18h] BYREF
  float v58; // [esp+B0h] [ebp-10h]
  float v59; // [esp+B4h] [ebp-Ch]
  float v60; // [esp+B8h] [ebp-8h]
  float v61; // [esp+BCh] [ebp-4h]

  if ( *(_DWORD *)(dword_106B367C + 48) == 1
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 320))(dword_106B31D0) )
  {
    v2 = this[1];
    v3 = *(_DWORD *)(v2 + 252) >> 12;
    v61 = sin(*(float *)(dword_106B36C4 + 44) * *(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B3874 + 44));
    if ( (v3 & 1) != 0 )
      sub_100DAFD0(v2);
    v40 = *(float *)(v2 + 480) * *(float *)(v2 + 480)
        + *(float *)(v2 + 476) * *(float *)(v2 + 476)
        + *(float *)(v2 + 484) * *(float *)(v2 + 484);
    v4 = off_10689708(v40);
    v5 = this[1];
    v60 = v4 * v61 * *(float *)(dword_106B379C + 44) * 0.0099999998;
    v6 = *(_DWORD *)(v5 + 252) >> 12;
    v61 = sin(*(float *)(dword_106B370C + 44) * *(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B38BC + 44));
    if ( (v6 & 1) != 0 )
      sub_100DAFD0(v5);
    v41 = *(float *)(v5 + 480) * *(float *)(v5 + 480)
        + *(float *)(v5 + 476) * *(float *)(v5 + 476)
        + *(float *)(v5 + 484) * *(float *)(v5 + 484);
    v7 = off_10689708(v41);
    v8 = this[1];
    v61 = v7 * v61 * *(float *)(dword_106B37E4 + 44) * 0.0099999998;
    v9 = *(_DWORD *)(v8 + 252) >> 12;
    v59 = sin(*(float *)(dword_106B3754 + 44) * *(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B3904 + 44));
    if ( (v9 & 1) != 0 )
      sub_100DAFD0(v8);
    v42 = *(float *)(v8 + 480) * *(float *)(v8 + 480)
        + *(float *)(v8 + 476) * *(float *)(v8 + 476)
        + *(float *)(v8 + 484) * *(float *)(v8 + 484);
    v10 = off_10689708(v42);
    v50[0] = v60;
    v50[1] = v61;
    v11 = (float *)this[1];
    v50[2] = v10 * v59 * *(float *)(dword_106B382C + 44) * 0.0099999998;
    sub_100F7A60(v11, v50);
  }
  sub_104222B0(this[2] + 12, v57, v55, v49);
  v12 = sub_101C5260(this[1]);
  if ( v12 )
    v61 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
  else
    v61 = NAN;
  v13 = this[2];
  v60 = *(float *)(v13 + 44);
  v59 = *(float *)(v13 + 48);
  if ( !byte_10627EF5 )
  {
    v58 = 0.0;
    v56 = 0.0;
    off_10689714();
    goto LABEL_19;
  }
  v14 = 0.0;
  if ( 0.0 != v58 )
  {
    v58 = 0.0;
    off_10689714();
    v14 = 0.0;
  }
  if ( v14 != v56 )
  {
    v56 = v14;
LABEL_19:
    off_10689714();
    v14 = 0.0;
  }
  v52 = v57[0] * v60 + v55[0] * v59;
  v53 = v60 * v57[1] + v59 * v55[1];
  v54 = v14;
  v15 = off_10689714();
  v60 = v15;
  v16 = 0.0;
  if ( 0.0 != v15 )
  {
    v17 = this[2];
    if ( *(float *)(v17 + 56) < v15 )
    {
      v18 = *(float *)(v17 + 56);
      v60 = *(float *)(v17 + 56);
      v19 = v18;
      v16 = 0.0;
      v15 = v19;
    }
  }
  v20 = *this;
  *(float *)(this[2] + 72) = v16;
  v39 = v15;
  (*(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(v20 + 80))(
    this,
    &v52,
    LODWORD(v39),
    *(float *)(dword_106B714C + 44));
  v21 = (float *)this[2];
  v21[18] = 0.0;
  v22 = (float *)this[1];
  v23 = v21[16] + v22[116];
  v22 += 116;
  v21[16] = v23;
  v21[17] = v21[17] + v22[1];
  v21[18] = v21[18] + v22[2];
  v43 = v21[17] * v21[17] + v21[16] * v21[16] + v21[18] * v21[18];
  v24 = off_10689708(v43);
  v25 = (float *)this[2];
  if ( v24 < 1.0 )
  {
    v26 = (float *)this[1];
    v25[16] = 0.0;
    v25[17] = 0.0;
    v25[18] = 0.0;
    v25[16] = v25[16] - v26[116];
    v25[17] = v25[17] - v26[117];
    v25[18] = v25[18] - v26[118];
    return;
  }
  v27 = v25 + 38;
  v28 = *this;
  v51[0] = v25[16] * *(float *)(dword_106B31C8 + 16) + v25[38];
  v51[1] = v25[17] * *(float *)(dword_106B31C8 + 16) + v25[39];
  v51[2] = v25[40];
  v29 = (*(int (__thiscall **)(int *, _DWORD, int, _BYTE *))(v28 + 44))(this, 0, 8, v44);
  (*(void (__thiscall **)(int *, float *, float *, int))(v28 + 40))(this, v27, v51, v29);
  v30 = (float *)this[2];
  v31 = v60 * v54;
  v32 = v53 * v60;
  v30[26] = v52 * v60 + v30[26];
  v30[27] = v32 + v30[27];
  v30[28] = v31 + v30[28];
  if ( 1.0 == v48 )
  {
    v33 = (float *)this[2];
    v33[38] = v45;
    v33[39] = v46;
    v33[40] = v47;
  }
  else
  {
    if ( v61 == NAN
      || off_1061BE18[4 * (LOWORD(v61) & 0xFFF) + 2] != LODWORD(v61) >> 12
      || !off_1061BE18[4 * (LOWORD(v61) & 0xFFF) + 1] )
    {
      v34 = this[1];
      if ( !*(_BYTE *)(v34 + 447) )
      {
        v35 = (float *)this[2];
        v35[16] = v35[16] - *(float *)(v34 + 464);
        v35[17] = v35[17] - *(float *)(v34 + 468);
        v35[18] = v35[18] - *(float *)(v34 + 472);
        return;
      }
    }
    v36 = (float *)this[1];
    if ( 0.0 != v36[1034] )
    {
      v37 = (float *)this[2];
      v37[16] = v37[16] - v36[116];
      v37[17] = v37[17] - v36[117];
      v37[18] = v37[18] - v36[118];
      return;
    }
    (*(void (__thiscall **)(int *, float *, _BYTE *))(*this + 192))(this, v51, v44);
    v33 = (float *)this[2];
  }
  v38 = (float *)this[1];
  v33[16] = v33[16] - v38[116];
  v33[17] = v33[17] - v38[117];
  v33[18] = v33[18] - v38[118];
  sub_10159450(this);
}
