void __thiscall sub_102F1F40(void *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  char *v4; // eax
  _DWORD *v5; // eax
  unsigned int v6; // eax
  float *v7; // eax
  bool v8; // zf
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // rt0
  double v13; // st5
  double v14; // rt1
  double v15; // st5
  double v16; // rt2
  unsigned int v17; // eax
  int v18; // edi
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // rt0
  double v23; // st7
  double v24; // st7
  double v25; // st6
  unsigned int v26; // eax
  int v27; // edi
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  float v31; // [esp+4h] [ebp-40h]
  float v32; // [esp+8h] [ebp-3Ch]
  _BYTE v33[12]; // [esp+10h] [ebp-34h] BYREF
  float v34[3]; // [esp+1Ch] [ebp-28h] BYREF
  float v35; // [esp+28h] [ebp-1Ch]
  float v36; // [esp+2Ch] [ebp-18h]
  float v37; // [esp+30h] [ebp-14h]
  float v38; // [esp+34h] [ebp-10h]
  float v39; // [esp+38h] [ebp-Ch]
  float v40; // [esp+3Ch] [ebp-8h]
  float v41; // [esp+40h] [ebp-4h]

  v2 = *((_DWORD *)this + 254);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
        goto LABEL_12;
    }
  }
  v4 = (char *)*((_DWORD *)this + 53);
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  *((_DWORD *)this + 254) = v5 ? *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5) : -1;
  v6 = *((_DWORD *)this + 254);
  if ( v6 != -1
    && off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 2] == v6 >> 12
    && off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 1] )
  {
LABEL_12:
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v7 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
    v8 = (*((_DWORD *)this + 62) & 0x8000) == 0;
    v9 = *v7 - *((float *)this + 145);
    v38 = v9;
    v10 = v7[1] - *((float *)this + 146);
    v39 = v10;
    v11 = v7[2] - *((float *)this + 147);
    v40 = v11;
    if ( !v8 )
    {
      v12 = v11;
      v13 = v9 + *((float *)this + 207);
      v38 = v13;
      v14 = v13;
      v15 = v10 + *((float *)this + 208);
      v39 = v15;
      v16 = v15;
      v11 = v12 + *((float *)this + 209);
      v40 = v11;
      v9 = v14;
      v10 = v16;
    }
    v41 = 0.0;
    if ( *((float *)this + 251) <= 0.0 )
    {
      v24 = 0.0;
    }
    else
    {
      v17 = *((_DWORD *)this + 254);
      if ( v17 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 2] != v17 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v18);
        v9 = v38;
        v11 = v40;
        v10 = v39;
      }
      v19 = *(float *)(v18 + 584) - v10;
      v20 = v19 * v19;
      v21 = *(float *)(v18 + 580) - v9;
      v22 = *(float *)(v18 + 588) - v11;
      v31 = v21 * v21 + v20 + v22 * v22;
      v23 = off_10689708(v31) - *((float *)this + 252);
      if ( v23 < 0.0 )
        v23 = 0.0;
      if ( *((float *)this + 251) <= v23 )
      {
        v24 = 0.0;
      }
      else if ( (*((_DWORD *)this + 62) & 0x2000) != 0 )
      {
        v24 = 0.0;
        v41 = 1.0;
      }
      else
      {
        v25 = v23;
        v24 = 0.0;
        v41 = 1.0 - v25 / *((float *)this + 251);
      }
    }
    if ( v24 < *((float *)this + 253) )
    {
      v26 = *((_DWORD *)this + 254);
      if ( v26 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 2] != v26 >> 12 )
        v27 = 0;
      else
        v27 = off_1061BE18[4 * (*((_DWORD *)this + 254) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v27 + 924))(v27, v34);
      v28 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v27 + 504))(v27, v33);
      v35 = v38 - *v28;
      v36 = v39 - v28[1];
      v37 = v40 - v28[2];
      off_10689714();
      v29 = v34[1] * v36 + v35 * v34[0] + v34[2] * v37;
      if ( v29 >= *((float *)this + 253) )
        v24 = (v29 - *((float *)this + 253)) / (1.0 - *((float *)this + 253));
      else
        v24 = 0.0;
    }
    v30 = v24 + v41;
    if ( v30 > 1.0 )
      v30 = 1.0;
    if ( (*((_DWORD *)this + 62) & 0x4000) != 0 )
      v32 = 1.0 - v30;
    else
      v32 = v30;
    sub_10151080((int)this, v32);
  }
}
