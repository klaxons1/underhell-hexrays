int __thiscall sub_100F52B0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // esi

  result = 0;
  v3 = 0;
  for ( i = this + 4; ; i += 4 )
  {
    if ( !*i && !result )
      result = (int)(i - 1);
    if ( *i == a2 )
      break;
    if ( (unsigned int)++v3 >= 8 )
      return result;
  }
  return (int)&this[4 * v3 + 3];
}
