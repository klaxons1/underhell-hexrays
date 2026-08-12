char __thiscall sub_10124DC0(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "beveragetype" && _stricmp(String1, "beveragetype") )
    return sub_100EBE90((int)this, String1, String);
  this[201] = atoi(String);
  return 1;
}
