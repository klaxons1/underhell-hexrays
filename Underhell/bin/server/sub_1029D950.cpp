char __thiscall sub_1029D950(int this)
{
  unsigned int v2; // eax
  int v3; // ebx
  int *v4; // ecx
  int v5; // ecx
  int v6; // esi
  float *v7; // eax
  double v8; // st6
  double v9; // st4
  double v10; // rt0
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  _BYTE v16[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 24);
  v3 = *(_DWORD *)(this + 4);
  if ( v2 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1], v4[1] != v2 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 1432))(v3, v5, 0) )
    goto LABEL_27;
  if ( *(_DWORD *)(this + 24) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != *(_DWORD *)(this + 24) >> 12 )
  {
    v6 = 0;
  }
  else
  {
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1];
  }
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 504))(v3, v16);
  v8 = v7[1] - *(float *)(v6 + 584);
  v9 = *v7 - *(float *)(v6 + 580);
  v10 = v7[2] - *(float *)(v6 + 588);
  if ( v9 * v9 + v8 * v8 + v10 * v10 <= 14400.0
    || ((v11 = *(_DWORD *)(this + 24), v11 == -1) || off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v11 >> 12
      ? (v12 = 0)
      : (v12 = off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1]),
        (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 876))(v3, v12)
     && ((v13 = *(_DWORD *)(this + 24), v13 == -1)
      || off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v13 >> 12
       ? (v14 = 0)
       : (v14 = off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1]),
         (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 548))(v3, v14, 16449, 0))) )
  {
    if ( !*(_BYTE *)(this + 36) )
    {
      sub_1001EDC0((float *)(this + 32), 0.30000001, 0.31);
      return 0;
    }
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 32) > -0.001 )
      return 1;
  }
  else
  {
LABEL_27:
    *(_BYTE *)(this + 36) = 0;
  }
  return 0;
}
