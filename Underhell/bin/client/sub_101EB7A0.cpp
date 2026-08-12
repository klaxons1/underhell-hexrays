int __thiscall sub_101EB7A0(_DWORD *this, int a2)
{
  int v3; // edx
  int result; // eax
  _DWORD *i; // ecx

  v3 = this[36];
  result = 0;
  if ( v3 > 0 )
  {
    for ( i = (_DWORD *)this[33]; a2 != *i; ++i )
    {
      if ( ++result >= v3 )
        return result;
    }
    if ( result != -1 )
    {
      if ( v3 - result - 1 > 0 )
        result = (int)memcpy(
                        (void *)(this[33] + 4 * result),
                        (const void *)(this[33] + 4 * result + 4),
                        4 * (v3 - result - 1));
      --this[36];
    }
  }
  return result;
}
