int __thiscall sub_102A2740(int this, int a2, int a3, int a4)
{
  int v6; // edi
  unsigned int v7; // eax
  int v8; // esi

  if ( a3 != 100005 )
  {
    if ( a3 != 100006 )
      return sub_1029EBB0((_BYTE *)this, a2, a3, a4);
LABEL_3:
    *(float *)(this + 208) = *(float *)(dword_106B31C8 + 12) + 3.0;
    return sub_1029EBB0((_BYTE *)this, a2, a3, a4);
  }
  if ( *(_DWORD *)(this + 16) )
    return 81;
  v6 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  v7 = *(_DWORD *)(this + 68);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  if ( fabs(*(float *)(v8 + 584) - *(float *)(v6 + 584))
     + fabs(*(float *)(v8 + 580) - *(float *)(v6 + 580))
     + fabs(*(float *)(v8 + 588) - *(float *)(v6 + 588)) <= 64.0 )
    goto LABEL_3;
  return 100008;
}
