char __thiscall sub_102EFF50(_DWORD *this, char *String1, char *String)
{
  if ( String1 == "style"
    || !_stricmp(String1, "style")
    || String1 == "height"
    || !_stricmp(String1, "height")
    || String1 == "value1"
    || !_stricmp(String1, "value1")
    || String1 == "value2"
    || !_stricmp(String1, "value2")
    || String1 == "value3"
    || !_stricmp(String1, "value3") )
  {
    return 1;
  }
  if ( sub_10043F40(String1, "dmdelay") )
  {
    this[230] = atoi(String);
    return 1;
  }
  return sub_10246890((int)this, String1, String);
}
