char __cdecl sub_1025F5E0(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = a1;
  result = *a1;
  v4 = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == 35 )
        break;
      v2[a2 - a1] = result;
      result = *++v2;
      ++v4;
    }
    while ( result );
    a2[v4] = 0;
  }
  else
  {
    result = (char)a2;
    *a2 = 0;
  }
  return result;
}
