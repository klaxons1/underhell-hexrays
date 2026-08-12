int __thiscall sub_100FD050(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  _DWORD *i; // ecx

  v2 = this[3];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  v4 = *this;
  for ( i = (_DWORD *)(*this + 8); *i != a2; i += 14 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return v4 + 56 * v3;
}
