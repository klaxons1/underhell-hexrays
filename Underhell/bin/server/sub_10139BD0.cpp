bool __thiscall sub_10139BD0(_BYTE *this, int a2, int a3, float *a4, float *a5)
{
  _BYTE *v5; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  float *v16; // ecx
  double v17; // st7

  v5 = this;
  if ( this[800] )
  {
    *a4 = 0.0;
    return 0;
  }
  if ( (this[248] & 0x40) != 0 && !a3 )
    return 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a2);
    if ( (v8 || (v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v9 = *(_DWORD *)(v8 + 12)) != 0 )
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    }
    else
    {
      v10 = 0;
    }
    v7 = v10;
  }
  v11 = *((_DWORD *)v5 + 211);
  if ( v11 != -1
    && off_1061BE18[4 * (*((_DWORD *)v5 + 211) & 0xFFF) + 2] == v11 >> 12
    && off_1061BE18[4 * (*((_DWORD *)v5 + 211) & 0xFFF) + 1]
    && (!v7 || !(unsigned __int8)sub_1013D760(v5, v7)) )
  {
    *a4 = 0.0;
    return 0;
  }
  if ( a5 )
  {
    v12 = *((_DWORD *)v5 + 201);
    if ( v12 == -1 || off_1061BE18[4 * (*((_DWORD *)v5 + 201) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*((_DWORD *)v5 + 201) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(v13);
    sub_1004BCD0(a5, (float *)(v13 + 580));
LABEL_31:
    v5 = this;
    goto LABEL_32;
  }
  if ( v7 )
  {
    v14 = sub_1026A890(v5 + 804);
    v15 = v14;
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    sub_1004BCD0(v16, (float *)(v15 + 580));
    goto LABEL_31;
  }
LABEL_32:
  if ( 0.0 != *((float *)v5 + 205) && *((float *)v5 + 205) < 0.0 )
    return 0;
  v17 = ((double (__stdcall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 48))(a3, 0.0) * *a4;
  *a4 = v17;
  return v17 > 0.0;
}
