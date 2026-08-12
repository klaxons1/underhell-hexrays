char __thiscall sub_10182780(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "points" && _stricmp(String1, "points") )
    return sub_100EBE90((int)this, String1, String);
  this[201] = atoi(String);
  return 1;
}
