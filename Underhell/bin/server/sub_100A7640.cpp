unsigned int __stdcall sub_100A7640(char *String1)
{
  if ( !_stricmp(String1, "PROVOKED") )
    return 1;
  if ( !_stricmp(String1, "INCOVER") )
    return 2;
  if ( !_stricmp(String1, "SUSPICIOUS") )
    return 4;
  if ( !_stricmp(String1, "PATH_FAILED") )
    return 32;
  if ( !_stricmp(String1, "FLINCHED") )
    return 64;
  if ( !_stricmp(String1, "TOURGUIDE") )
    return 256;
  if ( !_stricmp(String1, "LOCKED_HINT") )
    return 1024;
  if ( !_stricmp(String1, "TURNING") )
    return 0x2000;
  if ( !_stricmp(String1, "TURNHACK") )
    return 0x4000;
  if ( !_stricmp(String1, "CUSTOM4") )
    return 0x10000000;
  if ( !_stricmp(String1, "CUSTOM3") )
    return 0x20000000;
  if ( !_stricmp(String1, "CUSTOM2") )
    return 0x40000000;
  return _stricmp(String1, "CUSTOM1") != 0 ? -1 : 0x80000000;
}
