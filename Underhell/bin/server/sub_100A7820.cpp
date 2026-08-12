int __stdcall sub_100A7820(char *String1)
{
  int result; // eax

  result = _stricmp(String1, "ENEMY");
  if ( result )
  {
    if ( !_stricmp(String1, "ENEMY_LKP") )
    {
      return 2;
    }
    else if ( !_stricmp(String1, "TARGET") )
    {
      return 1;
    }
    else
    {
      return _stricmp(String1, "SAVED_POSITION") != 0 ? -1 : 3;
    }
  }
  return result;
}
