float *__thiscall sub_100AA270(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st5
  double v8; // st3
  double v9; // st5
  double v10; // st4
  double v11; // rt2
  double v12; // st7
  float *v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st4
  float *v17; // eax
  double v18; // st7
  double v19; // rt0
  double v20; // st4
  double v21; // st7
  double v22; // st6
  double v23; // st7
  float *v24; // eax
  double v25; // st6
  double v26; // st6
  double v27; // st7
  float *v28; // eax
  float *v29; // ecx
  float *v30; // edi
  int v31; // ebx
  int (__thiscall *v32)(_DWORD *, _DWORD, int, _BYTE *); // edx
  double v33; // st7
  int v34; // eax
  int v35; // eax
  int v36; // edi
  int v37; // eax
  float *result; // eax
  int v39; // edx
  int v40; // eax
  float *v41; // esi
  _BYTE v42[12]; // [esp+8h] [ebp-BCh] BYREF
  _BYTE v43[12]; // [esp+14h] [ebp-B0h] BYREF
  float v44; // [esp+20h] [ebp-A4h]
  float v45; // [esp+24h] [ebp-A0h]
  float v46; // [esp+28h] [ebp-9Ch]
  float v47; // [esp+40h] [ebp-84h]
  char v48; // [esp+4Ah] [ebp-7Ah]
  char v49; // [esp+4Bh] [ebp-79h]
  float v50; // [esp+68h] [ebp-5Ch]
  float v51; // [esp+6Ch] [ebp-58h]
  float v52; // [esp+70h] [ebp-54h]
  float v53[6]; // [esp+74h] [ebp-50h] BYREF
  float v54[2]; // [esp+8Ch] [ebp-38h] BYREF
  float v55; // [esp+94h] [ebp-30h]
  float v56[2]; // [esp+98h] [ebp-2Ch] BYREF
  float v57; // [esp+A0h] [ebp-24h]
  float v58; // [esp+A4h] [ebp-20h]
  float v59; // [esp+A8h] [ebp-1Ch] BYREF
  float v60; // [esp+ACh] [ebp-18h]
  float v61; // [esp+B0h] [ebp-14h]
  float v62; // [esp+B4h] [ebp-10h]
  float v63; // [esp+B8h] [ebp-Ch]
  float v64; // [esp+BCh] [ebp-8h]
  float v65; // [esp+C0h] [ebp-4h]

  sub_101EE040(this[2] + 12, v54, v53, v42);
  v2 = this[2];
  v3 = *(float *)(v2 + 48) * v53[0] + *(float *)(v2 + 44) * v54[0];
  v63 = v3;
  v4 = *(float *)(v2 + 48) * v53[1] + *(float *)(v2 + 44) * v54[1];
  v64 = v4;
  v5 = *(float *)(v2 + 44) * v55 + *(float *)(v2 + 48) * v53[2];
  v65 = v5;
  if ( (*(_BYTE *)(v2 + 36) & 2) != 0 )
  {
    v6 = v5 + *(float *)(v2 + 60);
  }
  else if ( 0.0 == *(float *)(v2 + 44) && 0.0 == *(float *)(v2 + 48) && 0.0 == *(float *)(v2 + 52) )
  {
    v6 = v5 - 60.0;
  }
  else
  {
    v7 = 0.0;
    v8 = v55 * *(float *)(v2 + 44) + v55 * *(float *)(v2 + 44);
    if ( v8 <= *(float *)(v2 + 60) )
    {
      if ( v8 >= 0.0 )
        v7 = v8;
      v11 = v5;
      v10 = v7;
      v9 = v11;
    }
    else
    {
      v9 = v5;
      v10 = *(float *)(v2 + 60);
    }
    v6 = v9 + v10 + *(float *)(v2 + 52);
  }
  v65 = v6;
  v50 = v3;
  v51 = v4;
  v52 = v6;
  v12 = off_103EDFEC();
  v13 = (float *)this[2];
  if ( v12 > v13[14] )
  {
    v14 = v13[14] / v12;
    v63 = v63 * v14;
    v64 = v64 * v14;
    v65 = v14 * v65;
    v12 = v13[14];
  }
  v62 = v12 * 0.8;
  v53[3] = v13[16];
  v53[4] = v13[17];
  v53[5] = v13[18];
  v15 = off_103EDFEC();
  if ( 0.0 == v15 )
  {
    v21 = 0.0;
  }
  else
  {
    v16 = v15 - *((float *)off_103DC81C + 4) * v15 * *(float *)(dword_10434A7C + 44) * *(float *)(this[1] + 4676);
    if ( v16 < 0.1 )
      v16 = 0.0;
    v17 = (float *)this[2];
    v18 = v16 / v15;
    v17[16] = v17[16] * v18;
    v17[17] = v17[17] * v18;
    v19 = v16;
    v20 = v18 * v17[18];
    v21 = v19;
    v17[18] = v20;
  }
  if ( v62 >= 0.1 )
  {
    v22 = v62 - v21;
    v58 = v22;
    if ( v22 > 0.0 )
    {
      off_103EDFEC();
      v23 = *(float *)(dword_10434884 + 44) * v62 * *((float *)off_103DC81C + 4) * *(float *)(this[1] + 4676);
      if ( v58 < v23 )
        v23 = v58;
      v24 = (float *)this[2];
      v25 = v63 * v23;
      v24[16] = v24[16] + v25;
      v24[26] = v25 + v24[26];
      v26 = v64 * v23;
      v24[17] = v24[17] + v26;
      v24[27] = v26 + v24[27];
      v27 = v23 * v65;
      v24[18] = v24[18] + v27;
      v24[28] = v27 + v24[28];
    }
  }
  v28 = (float *)this[2];
  v29 = (float *)this[1];
  v30 = v28 + 38;
  v31 = *this;
  v28[16] = v28[16] + v29[71];
  v32 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(v31 + 44);
  v28[17] = v28[17] + v29[72];
  v28[18] = v28[18] + v29[73];
  v33 = *((float *)off_103DC81C + 4);
  v59 = v33 * v28[16] + v28[38];
  v60 = v28[17] * v33 + v28[39];
  v61 = v33 * v28[18] + v28[40];
  v34 = v32(this, 0, 8, v43);
  (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v31 + 40))(this, v30, &v59, v34);
  if ( 1.0 != v47 )
  {
    v40 = sub_100F7AF0(this[1]);
    v39 = *this;
    if ( v40 )
    {
      (*(void (__thiscall **)(_DWORD *, float *, _BYTE *))(v39 + 192))(this, &v59, v43);
      goto LABEL_35;
    }
LABEL_32:
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v39 + 112))(this, 0, 0);
LABEL_35:
    result = (float *)this[2];
    goto LABEL_36;
  }
  v35 = this[1];
  v56[0] = v59;
  v56[1] = v60;
  v57 = v61;
  if ( *(_BYTE *)(v35 + 3688) )
    v57 = *(float *)(v35 + 3684) + 1.0 + v61;
  v36 = *this;
  v37 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44))(this, 0, 8, v43);
  (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v36 + 40))(this, v56, &v59, v37);
  if ( v49 || v48 )
  {
    v39 = *this;
    goto LABEL_32;
  }
  *(float *)(this[2] + 100) = v46 - *(float *)(this[2] + 160) + *(float *)(this[2] + 100);
  result = (float *)this[2];
  result[38] = v44;
  result[39] = v45;
  result[40] = v46;
LABEL_36:
  v41 = (float *)this[1];
  result[16] = result[16] - v41[71];
  result[17] = result[17] - v41[72];
  result[18] = result[18] - v41[73];
  return result;
}
