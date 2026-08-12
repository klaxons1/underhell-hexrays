_DWORD *__thiscall sub_1019D410(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  if ( !a2 )
    return 0;
  result = (_DWORD *)this[(unsigned __int8)a2 + 9];
  if ( !result )
    return 0;
  while ( *result != a2 )
  {
    result = (_DWORD *)result[199];
    if ( !result )
      return 0;
  }
  return result;
}
