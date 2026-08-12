int __thiscall sub_102093B0(int *this)
{
  bool v2; // zf
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx

  v2 = this[388] == 0;
  v3 = this + 388;
  if ( v2 )
    return this[106];
  v4 = *(_DWORD *)(sub_101BCB30(v3, 0) + 4);
  if ( v4 == -1 )
    return this[106];
  if ( off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    return this[106];
  v5 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
  if ( !v5 )
    return this[106];
  else
    return *(_DWORD *)(v5 + 424);
}
