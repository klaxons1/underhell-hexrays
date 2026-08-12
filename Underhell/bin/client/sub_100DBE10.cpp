char *__cdecl sub_100DBE10(char *a1, char *String1)
{
  char *v2; // esi
  int v4; // ebx

  v2 = a1;
  if ( !a1 )
    return 0;
  v4 = 1;
  while ( 1 )
  {
    v2 = sub_100DBA50(v2, String1);
    if ( _stricmp(String1, "{") )
      break;
    ++v4;
LABEL_8:
    if ( !v2 )
      return 0;
  }
  if ( _stricmp(String1, "}") )
    goto LABEL_8;
  if ( --v4 )
    goto LABEL_8;
  return v2;
}
