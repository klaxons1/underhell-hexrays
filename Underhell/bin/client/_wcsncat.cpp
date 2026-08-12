wchar_t *__cdecl wcsncat(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // edx
  wchar_t *result; // eax
  wchar_t *v6; // edx
  wchar_t v8; // cx

  v3 = Destination;
  result = Destination;
  while ( *v3++ )
    ;
  v6 = v3 - 1;
  if ( Count )
  {
    while ( 1 )
    {
      v8 = *Source;
      --Count;
      *v6++ = *Source++;
      if ( !v8 )
        break;
      if ( !Count )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    *v6 = 0;
  }
  return result;
}
