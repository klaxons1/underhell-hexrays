char __thiscall sub_1017BE30(_DWORD *this, char *String1, char *a3)
{
  if ( String1 == "style"
    || !_stricmp(String1, "style")
    || String1 == "height"
    || !_stricmp(String1, "height")
    || String1 == "killtarget"
    || !_stricmp(String1, "killtarget")
    || String1 == "value1"
    || !_stricmp(String1, "value1")
    || String1 == "value2"
    || !_stricmp(String1, "value2")
    || sub_10043F40(String1, "value3") )
  {
    return 1;
  }
  else
  {
    return sub_100D7750(this, String1, a3);
  }
}
