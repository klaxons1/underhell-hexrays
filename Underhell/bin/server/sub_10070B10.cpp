char __thiscall sub_10070B10(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx

  v3 = this[215];
  if ( v3 == -1 || off_1061BE18[4 * (this[215] & 0xFFF) + 2] != this[215] >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[215] & 0xFFF) + 1];
  if ( v4 != a2 && v3 != -1 && off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 && off_1061BE18[4 * (v3 & 0xFFF) + 1] )
    return 0;
  if ( a2 )
    this[215] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[215] = -1;
  return 1;
}
