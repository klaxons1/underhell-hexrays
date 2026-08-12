char __thiscall sub_100D0B60(_WORD *this, _DWORD *a2)
{
  unsigned __int16 v3; // si
  int v4; // edx

  v3 = this[6];
  if ( v3 == 0xFFFF )
    return 0;
  v4 = *(_DWORD *)this;
  while ( *(_DWORD *)(v4 + 8 * v3) != *a2 )
  {
    v3 = *(_WORD *)(v4 + 8 * v3 + 6);
    if ( v3 == 0xFFFF )
      return 0;
  }
  sub_10399E70(v3);
  *(_WORD *)(*(_DWORD *)this + 8 * v3 + 6) = this[8];
  this[8] = v3;
  return 1;
}
