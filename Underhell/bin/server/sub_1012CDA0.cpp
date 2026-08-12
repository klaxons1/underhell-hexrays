int __thiscall sub_1012CDA0(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx

  v2 = this[4];
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD *)this[1]; *i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 && result < v2 )
    {
      *(_DWORD *)(this[1] + 4 * result) = *(_DWORD *)(this[1] + 4 * v2 - 4);
      --this[4];
    }
  }
  return result;
}
