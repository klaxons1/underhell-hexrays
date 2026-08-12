int __thiscall sub_10085FA0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int result; // eax
  int v5; // edx

  if ( a2 == -1 )
    return -1;
  v3 = (_DWORD *)this[3];
  if ( !v3 )
  {
    DevMsg("ERROR: Trying to get WC ID with no table!\n");
    return -1;
  }
  v5 = *(_DWORD *)(this[5] + 4);
  if ( !v5 )
  {
    DevMsg("ERROR: Trying to get WC ID with no network!\n");
    return -1;
  }
  result = 0;
  if ( v5 <= 0 )
    return -1;
  while ( *v3 != a2 )
  {
    ++result;
    ++v3;
    if ( result >= v5 )
      return -1;
  }
  return result;
}
