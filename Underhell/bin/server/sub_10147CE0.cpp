char __thiscall sub_10147CE0(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "StartOpen" && _stricmp(String1, "StartOpen") )
    return sub_100EBE90((int)this, String1, String);
  this[203] = atoi(String) != 0;
  return 1;
}
