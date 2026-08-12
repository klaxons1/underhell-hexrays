_DWORD *__cdecl sub_10069A30(int a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = (_DWORD *)dword_10692E2C;
  if ( !dword_10692E2C )
    return 0;
  while ( 1 )
  {
    v3 = result[203];
    if ( a1 == v3 && a2 == result[204] )
      break;
    if ( a1 == result[204] && a2 == v3 )
      break;
    result = (_DWORD *)result[200];
    if ( !result )
      return 0;
  }
  return result;
}
