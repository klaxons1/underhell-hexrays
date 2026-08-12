int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_10700B24;
      dword_10700B24 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_10700B24;
  }
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}
