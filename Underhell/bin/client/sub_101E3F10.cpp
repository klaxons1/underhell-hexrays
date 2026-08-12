int __thiscall sub_101E3F10(_DWORD *this, int a2)
{
  int v2; // edx
  _DWORD **v3; // ecx
  int result; // eax
  _DWORD *i; // esi

  v2 = this[89];
  v3 = (_DWORD **)(this + 86);
  result = 0;
  if ( v2 <= 0 )
    return sub_10258C50(v2, &a2);
  for ( i = *v3; *i != a2; ++i )
  {
    if ( ++result >= v2 )
      return sub_10258C50(v2, &a2);
  }
  if ( result == -1 )
    return sub_10258C50(v2, &a2);
  return result;
}
