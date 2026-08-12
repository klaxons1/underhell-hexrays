char *__cdecl _strlwr(char *String)
{
  char *result; // eax
  char *i; // edx
  char v3; // cl

  if ( dword_10481B60 )
  {
    _strlwr_s_l(String, 0xFFFFFFFF, 0);
    return String;
  }
  else
  {
    result = String;
    if ( String )
    {
      for ( i = String; *i; ++i )
      {
        v3 = *i;
        if ( *i >= 65 && v3 <= 90 )
          *i = v3 + 32;
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
  }
  return result;
}
