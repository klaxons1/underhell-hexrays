int __stdcall sub_100A7550(char *String1)
{
  int result; // eax

  result = _stricmp(String1, "NONE");
  if ( result )
  {
    if ( !_stricmp(String1, "IDLE") )
    {
      return 1;
    }
    else if ( !_stricmp(String1, "COMBAT") )
    {
      return 3;
    }
    else if ( !_stricmp(String1, "PRONE") )
    {
      return 6;
    }
    else if ( !_stricmp(String1, "ALERT") )
    {
      return 2;
    }
    else if ( !_stricmp(String1, "SCRIPT") )
    {
      return 4;
    }
    else if ( !_stricmp(String1, "PLAYDEAD") )
    {
      return 5;
    }
    else
    {
      return _stricmp(String1, "DEAD") != 0 ? -1 : 7;
    }
  }
  return result;
}
