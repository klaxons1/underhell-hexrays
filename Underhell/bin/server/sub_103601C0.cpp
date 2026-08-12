void __thiscall sub_103601C0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  unsigned int v5; // eax

  v2 = this[1047];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[1047] & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v4 = sub_10261B20();
    else
      v4 = 0;
    if ( v4 )
      this[1047] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      this[1047] = -1;
  }
  v5 = this[1047];
  if ( v5 == -1 || off_1061BE18[4 * (this[1047] & 0xFFF) + 2] != v5 >> 12 )
    sub_100218B0(this, 0);
  else
    sub_100218B0(this, off_1061BE18[4 * (this[1047] & 0xFFF) + 1]);
}
