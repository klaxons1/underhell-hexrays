char __thiscall sub_103D8940(_DWORD *this, char *String1, char *a3)
{
  if ( String1 != "groupname" && _stricmp(String1, "groupname") )
    return sub_100D7750(this, String1, a3);
  this[200] = *sub_10162BE0(&a3, a3);
  return 1;
}
