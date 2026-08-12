char __thiscall sub_103E6B90(unsigned int this, __int16 a2, __int16 a3, float a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7
  unsigned int v8; // eax
  long double v9; // st7
  void **v10; // ecx
  long double v11; // st4
  void *v12; // ecx
  double v13; // st7
  double v14; // st6
  double v15; // st5
  unsigned int v16; // eax
  float *v17; // ecx
  int v18; // eax
  long double v19; // st7
  double v20; // st6
  bool v21; // zf
  int v22; // eax
  void (__thiscall *v23)(unsigned int, float *); // edx
  char result; // al
  float v25; // [esp+0h] [ebp-3Ch]
  float v26; // [esp+0h] [ebp-3Ch]
  float v27; // [esp+4h] [ebp-38h]
  float v28; // [esp+8h] [ebp-34h]
  float v29; // [esp+8h] [ebp-34h]
  float v30; // [esp+8h] [ebp-34h]
  float v31; // [esp+8h] [ebp-34h]
  float v32; // [esp+8h] [ebp-34h]
  float v33[3]; // [esp+18h] [ebp-24h] BYREF
  bool v34; // [esp+24h] [ebp-18h]
  int v35; // [esp+25h] [ebp-17h]
  float v36[3]; // [esp+2Ch] [ebp-10h] BYREF
  char v37; // [esp+3Bh] [ebp-1h]

  v37 = *(_BYTE *)(this + 1656);
  if ( (a2 & 0x200) != 0 )
  {
    v5 = a4;
    if ( 0.0 == a4 )
    {
      v6 = *(float *)(this + 1704);
      if ( *(float *)(this + 1652) < 0.0 && v6 <= *(float *)(this + 1708) )
        v6 = *(float *)(this + 1708);
      v28 = v6 * *(float *)(dword_106B31C8 + 16);
      v5 = *(float *)(this + 1692);
      sub_10424B10(*(float *)(this + 1692), *(float *)(this + 1652), v28);
      *(_DWORD *)(this + 1644) = 1;
    }
    else
    {
      *(_DWORD *)(this + 1644) = 1;
    }
  }
  else if ( (a2 & 0x400) != 0 )
  {
    v5 = a4;
    if ( 0.0 == a4 )
    {
      v7 = *(float *)(this + 1704);
      if ( *(float *)(this + 1652) > 0.0 && v7 <= *(float *)(this + 1708) )
        v7 = *(float *)(this + 1708);
      v29 = v7 * *(float *)(dword_106B31C8 + 16);
      v5 = -*(float *)(this + 1692);
      v25 = v5;
      sub_10424B10(v25, *(float *)(this + 1652), v29);
      *(_DWORD *)(this + 1644) = 2;
    }
    else
    {
      *(_DWORD *)(this + 1644) = 2;
    }
  }
  else
  {
    v30 = *(float *)(this + 1708) * *(float *)(dword_106B31C8 + 16);
    v5 = 0.0;
    sub_10424B10(0.0, *(float *)(this + 1652), v30);
    *(_DWORD *)(this + 1644) = 0;
  }
  *(float *)(this + 1652) = v5;
  v8 = *(_DWORD *)(this + 1564);
  v9 = 1.0;
  if ( v8 != -1 )
  {
    v10 = (void **)&off_1061BE18[4 * (*(_DWORD *)(this + 1564) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1564) & 0xFFF) + 2] == *(_DWORD *)(this + 1564) >> 12 )
    {
      if ( *v10 )
      {
        v11 = fabs(*(float *)(this + 1652)) / *(float *)(this + 1692);
        if ( v11 < 1.0 )
          v9 = v11;
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1564) & 0xFFF) + 2] == v8 >> 12 )
          v12 = *v10;
        else
          v12 = 0;
        sub_101E3110(v12, 0xEu, (int)((flt_10681E50 + (flt_10681E54 - flt_10681E50) * v9) * 100.0), 8u);
      }
    }
  }
  v36[0] = 0.0;
  v36[1] = *(float *)(this + 1652) * 10.0;
  v36[2] = 0.0;
  sub_100D7260((float *)this, v36);
  if ( (a2 & 8) != 0 )
  {
    v13 = *(float *)(this + 1688);
    v14 = *(float *)(this + 1664);
    v15 = *(float *)(this + 1696) * *(float *)(dword_106B31C8 + 16);
LABEL_27:
    v31 = v15;
    v27 = v14;
    v26 = v13;
    sub_10424B10(v26, v27, v31);
    *(_BYTE *)(this + 1656) = 1;
    goto LABEL_31;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v13 = -*(float *)(this + 1688);
    v14 = *(float *)(this + 1664);
    v15 = *(float *)(this + 1696) * *(float *)(dword_106B31C8 + 16);
    goto LABEL_27;
  }
  v32 = *(float *)(this + 1700) * *(float *)(dword_106B31C8 + 16);
  v13 = 0.0;
  sub_10424B10(0.0, *(float *)(this + 1664), v32);
  *(_BYTE *)(this + 1656) = 0;
LABEL_31:
  *(float *)(this + 1664) = v13;
  if ( (a3 & 0x801) != 0 )
  {
    v16 = *(_DWORD *)(this + 1716);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v16 >> 12 )
      v17 = 0;
    else
      v17 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
    if ( 0.0 == sub_101DC8E0(v17) )
    {
      if ( !*(_BYTE *)(this + 1668) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1680) )
      {
        sub_103E6570(this);
        *(_BYTE *)(this + 1668) = 1;
        *(_BYTE *)(sub_1026A890((unsigned int *)(this + 1716)) + 1213) = 0;
        v18 = sub_1026A890((unsigned int *)(this + 1720));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v18 + 1120) + 8))(*(_DWORD *)(v18 + 1120), 30.0);
        (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 272))(this + 1124, 5);
      }
    }
    else
    {
      sub_103E6680(this);
    }
  }
  v19 = fabs(*(float *)(this + 1652)) / *(float *)(this + 1692);
  if ( v19 <= 1.0 )
  {
    v20 = 0.0;
    if ( v19 < 0.0 )
      v19 = 0.0;
  }
  else
  {
    v19 = 1.0;
    v20 = 0.0;
  }
  v21 = *(_DWORD *)(this + 1644) == 0;
  v22 = *(_DWORD *)(this + 1124);
  v33[0] = *(float *)(dword_106B31C8 + 16);
  v33[1] = v19;
  v34 = !v21;
  v23 = *(void (__thiscall **)(unsigned int, float *))(v22 + 268);
  v33[2] = v20;
  v35 = 0;
  v23(this + 1124, v33);
  result = *(_BYTE *)(this + 1656);
  if ( result )
  {
    if ( !v37 )
    {
      (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 276))(this + 1124, 4);
      return (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 272))(this + 1124, 3);
    }
  }
  else if ( v37 )
  {
    (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 276))(this + 1124, 3);
    return (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 272))(this + 1124, 4);
  }
  return result;
}
