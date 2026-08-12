double __thiscall sub_1032DCE0(int this, int a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // esi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  float v14; // [esp+0h] [ebp-10h]

  if ( a2 != 1 )
    goto LABEL_15;
  v4 = a3;
  if ( (*(_DWORD *)(a3 + 64) & 0x20000000) != 0 )
  {
    v5 = *(_DWORD *)(a3 + 44);
    if ( v5 == -1 )
      return sub_1001F850(a2, v4);
    v6 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v7 || !*v6 )
      return sub_1001F850(a2, v4);
    if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == v7 )
      v8 = *v6;
    else
      v8 = 0;
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 580) - *(float *)(v8 + 580);
    v10 = v9 * v9;
    v11 = *(float *)(this + 584) - *(float *)(v8 + 584);
    v12 = *(float *)(this + 588) - *(float *)(v8 + 588);
    v14 = v12 * v12 + v11 * v11 + v10;
    if ( off_10689708(v14) <= 96.0 )
      return 3.0;
LABEL_15:
    v4 = a3;
    return sub_1001F850(a2, v4);
  }
  return 2.0;
}
