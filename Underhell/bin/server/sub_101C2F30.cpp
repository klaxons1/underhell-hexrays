char __thiscall sub_101C2F30(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  _DWORD *i; // ecx

  v3 = this[4] - 1;
  if ( v3 < 0 )
    return 0;
  for ( i = (_DWORD *)(this[1] + 4 * v3); *i != a2; --i )
  {
    if ( --v3 < 0 )
      return 0;
  }
  return 1;
}
