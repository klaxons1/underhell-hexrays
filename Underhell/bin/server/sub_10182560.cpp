char *__cdecl sub_10182560(char *a1, char *String1)
{
  char *v2; // edi
  int v4; // ebx

  v2 = a1;
  if ( !a1 )
    return 0;
  v4 = 1;
  while ( 1 )
  {
    v2 = sub_10181EC0(v2, String1);
    if ( String1 != "{" )
    {
      if ( _stricmp(String1, "{") )
        break;
    }
    ++v4;
LABEL_10:
    if ( !v2 )
      return 0;
  }
  if ( String1 != "}" && _stricmp(String1, "}") )
    goto LABEL_10;
  if ( --v4 )
    goto LABEL_10;
  return v2;
}
