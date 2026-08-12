int __thiscall sub_101876E0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int result; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx

  v3 = this[1444];
  result = 0;
  if ( v3 > 0 )
  {
    v5 = (_DWORD *)this[1441];
    for ( i = v5; *i != a2; i += 24 )
    {
      if ( ++result >= v3 )
        return result;
    }
    result = (int)&v5[24 * result];
    if ( result )
      *(_DWORD *)(result + 88) = a3;
  }
  return result;
}
