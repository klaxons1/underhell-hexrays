int __stdcall sub_100A77C0(char *String1)
{
  int result; // eax

  result = _stricmp(String1, "TRAVEL");
  if ( result )
  {
    if ( !_stricmp(String1, "LOS") )
      return 1;
    else
      return _stricmp(String1, "COVER") != 0 ? -1 : 2;
  }
  return result;
}
