char __thiscall sub_1005BC10(_BYTE *this, char *String1, char *String)
{
  bool v4; // al

  if ( String1 != "waitingtorappel" && _stricmp(String1, "waitingtorappel") )
    return 0;
  v4 = atoi(String) != 0;
  this[17] = v4;
  this[18] = !v4;
  return 1;
}
