char __thiscall sub_10194AB0(int *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edx

  v3 = this[3];
  if ( v3 == -1 )
    return 0;
  v4 = *this;
  while ( *(_DWORD *)(v4 + 12 * v3) != *a2 )
  {
    v3 = *(_DWORD *)(v4 + 12 * v3 + 8);
    if ( v3 == -1 )
      return 0;
  }
  sub_1018ED30(this, v3);
  *(_DWORD *)(*this + 12 * v3 + 8) = this[5];
  this[5] = v3;
  return 1;
}
