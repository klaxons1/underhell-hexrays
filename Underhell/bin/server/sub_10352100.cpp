void __thiscall sub_10352100(_DWORD *this, float a2, float *a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // esi

  v4 = this[1056];
  if ( v4 != -1 && (v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1], v6 = v4 >> 12, v5[1] == v6) && *v5 )
  {
    if ( v5[1] == v6 )
      v7 = *v5;
    else
      v7 = 0;
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    sub_102B6400((int)this, (int)this, a2, (float *)(v7 + 580));
  }
  else
  {
    sub_102B6400((int)this, (int)this, a2, a3);
  }
}
