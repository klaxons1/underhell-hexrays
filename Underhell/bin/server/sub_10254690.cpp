char __thiscall sub_10254690(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "Speed" && _stricmp(String1, "Speed") )
    return sub_100EBE90((int)this, String1, String);
  this[203] = atoi(String);
  return 1;
}
