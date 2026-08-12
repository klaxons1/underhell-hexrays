double __thiscall sub_1032EBA0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi
  float *v6; // eax

  v2 = *(_DWORD *)(this + 3796);
  if ( v2 == -1 )
    return 81.0;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 81.0;
  if ( v3[1] == v4 )
    v5 = *v3;
  else
    v5 = 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  return fabs(*(float *)(this + 584) - v6[1]) + fabs(*(float *)(this + 580) - *v6);
}
