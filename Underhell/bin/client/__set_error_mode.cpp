int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_10481B20;
      dword_10481B20 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_10481B20;
  }
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}
