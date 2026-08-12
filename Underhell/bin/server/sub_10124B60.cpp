char __thiscall sub_10124B60(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "color" && _stricmp(String1, "color") )
    return sub_100D7750(this, String1, String);
  if ( atoi(String) == 1 )
    this[204] = 1;
  return 1;
}
