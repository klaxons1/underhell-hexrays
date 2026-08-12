const char *__cdecl _getenv_helper_nolock(char *Str)
{
  const char **v1; // esi
  size_t v3; // edi

  v1 = (const char **)dword_10701174;
  if ( !dword_10709CA8 )
    return 0;
  if ( dword_10701174 || dword_1070117C && !__wtomb_environ() && (v1 = (const char **)dword_10701174) != 0 )
  {
    if ( Str )
    {
      v3 = strlen(Str);
      while ( *v1 )
      {
        if ( strlen(*v1) > v3
          && (*v1)[v3] == 61
          && !_mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)Str, v3) )
        {
          return &(*v1)[v3 + 1];
        }
        ++v1;
      }
    }
  }
  return 0;
}
