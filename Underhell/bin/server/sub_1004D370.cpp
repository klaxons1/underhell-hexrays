char __thiscall sub_1004D370(int this)
{
  unsigned int v2; // eax
  int v3; // edi
  float *v4; // ebx
  int v5; // edi
  double v6; // st6
  double v7; // st4
  double v8; // rt0
  _BYTE *v9; // ecx
  void (*v10)(void); // eax
  _BYTE *v12; // esi
  unsigned __int8 (__thiscall *v13)(_BYTE *); // eax

  if ( !sub_1004CA30(this) )
    return 0;
  if ( *(_DWORD *)(this + 28) == 3
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) == this
    && *(_BYTE *)(this + 36)
    || *(_DWORD *)(this + 32) == *(_DWORD *)(this + 28) )
  {
    v2 = *(_DWORD *)(this + 20);
  }
  else
  {
    v2 = *(_DWORD *)(this + 24);
  }
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (v2 & 0xFFF) + 1];
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v4 = (float *)(v3 + 580);
  v5 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  v6 = *(float *)(v5 + 584) - v4[1];
  v7 = *(float *)(v5 + 580) - *v4;
  v8 = *(float *)(v5 + 588) - v4[2];
  if ( v7 * v7 + v6 * v6 + v8 * v8 >= 4096.0 )
  {
    v12 = *(_BYTE **)(this + 4);
    v13 = *(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 2168);
    v12[3547] = 0;
    if ( v13(v12) )
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 2176))(v12);
    return 1;
  }
  else
  {
    v9 = *(_BYTE **)(this + 4);
    v10 = *(void (**)(void))(*(_DWORD *)v9 + 2172);
    v9[3547] = 1;
    v10();
    return 1;
  }
}
