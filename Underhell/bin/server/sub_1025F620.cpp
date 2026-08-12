char *__cdecl sub_1025F620(_BYTE *a1, char *a2, char a3)
{
  char *result; // eax
  char v4; // cl
  _BYTE *v5; // esi

  result = a2;
  if ( a2 && (v4 = *a2) != 0 )
  {
    v5 = a1;
    if ( v4 != a3 )
    {
      do
      {
        if ( !v4 )
          break;
        ++result;
        *v5 = v4;
        v4 = *result;
        ++v5;
      }
      while ( *result != a3 );
    }
    *v5 = 0;
    if ( *result )
      ++result;
  }
  else
  {
    *a1 = 0;
    return 0;
  }
  return result;
}
