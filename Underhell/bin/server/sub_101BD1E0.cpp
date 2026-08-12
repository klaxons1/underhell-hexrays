int __thiscall sub_101BD1E0(int *this, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *i; // esi
  int *v5; // ecx
  int v6; // edx
  int v7; // ecx

  if ( !a2 )
    return -1;
  v3 = *this;
  result = 0;
  if ( *this <= 0 )
    return -1;
  for ( i = (_DWORD *)(this[1] + 4); ; i += 2 )
  {
    if ( *i != -1 )
    {
      v5 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      v6 = *i >> 12;
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          v7 = off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 ? *v5 : 0;
          if ( v7 == a2 )
            break;
        }
      }
    }
    if ( ++result >= v3 )
      return -1;
  }
  return result;
}
