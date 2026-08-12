int __thiscall sub_101B50A0(_DWORD *this, int a2)
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
    if ( (unsigned int)++v3 >= 4 )
      return result;
  }
  return (int)&this[4 * v3 + 3];
}
