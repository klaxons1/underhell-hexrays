bool __thiscall sub_10262370(_DWORD *this, int a2)
{
  int v2; // ecx
  bool v3; // zf
  int v4; // ecx
  bool result; // al

  result = 0;
  if ( a2 >= 0 && a2 < this[73] && a2 <= this[79] )
  {
    v2 = this[72];
    v3 = *(_DWORD *)(v2 + 12 * a2 + 4) == a2;
    v4 = v2 + 12 * a2;
    if ( !v3 || *(_DWORD *)(v4 + 8) == a2 )
      return 1;
  }
  return result;
}
