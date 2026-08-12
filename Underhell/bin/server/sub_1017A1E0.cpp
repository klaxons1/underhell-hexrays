char __thiscall sub_1017A1E0(_DWORD *this, char *String1, char *a3)
{
  if ( String1 != "navprop" && _stricmp(String1, "navprop") )
    return sub_100D7750(this, String1, a3);
  if ( a3 == "Ignore" || !_stricmp(a3, "Ignore") )
  {
    this[202] = 1;
    return 1;
  }
  else
  {
    DevMsg(1, "Unknown nav property %s\n", a3);
    return 1;
  }
}
