_DWORD *__thiscall sub_1042A260(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)this[6];
  if ( !result )
    return 0;
  while ( *result != a2 )
  {
    result = (_DWORD *)result[5];
    if ( !result )
      return 0;
  }
  return result;
}
