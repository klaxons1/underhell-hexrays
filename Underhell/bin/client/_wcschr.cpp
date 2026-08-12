wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *result; // eax

  for ( result = (wchar_t *)Str; *result; ++result )
  {
    if ( *result == Ch )
      return result;
  }
  if ( *result != Ch )
    return 0;
  return result;
}
