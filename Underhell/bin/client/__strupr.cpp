char *__cdecl _strupr(char *String)
{
  char *result; // eax
  char *i; // edx
  char v3; // cl

  if ( dword_10481B60 )
  {
    _strupr_s_l(String, 0xFFFFFFFF, 0);
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
        if ( *i >= 97 && v3 <= 122 )
          *i = v3 - 32;
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
