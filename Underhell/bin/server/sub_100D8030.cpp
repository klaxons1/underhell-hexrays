bool __thiscall sub_100D8030(const char **this, char *String1)
{
  char *v2; // eax

  if ( !String1 )
    return 0;
  v2 = (char *)this[53];
  if ( !v2 )
    return 0;
  return String1 == v2 || !_stricmp(String1, this[53]);
}
