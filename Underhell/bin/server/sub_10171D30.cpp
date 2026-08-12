int __thiscall sub_10171D30(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  _DWORD *i; // ecx

  result = 0;
  v2 = 0;
  for ( i = this + 1233; *(i - 1); i += 4 )
  {
    if ( !*i )
      return ++result;
    if ( !i[1] )
    {
      result += 2;
      return result;
    }
    if ( !i[2] )
    {
      result += 3;
      return result;
    }
    v2 += 4;
    result += 4;
    if ( v2 >= 28 )
      return result;
  }
  return result;
}
