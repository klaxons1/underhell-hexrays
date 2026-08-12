char __thiscall sub_101774A0(_DWORD *this, char *String1, char *String)
{
  if ( String1 != "type" && _stricmp(String1, "type") )
    return sub_100EBE90((int)this, String1, String);
  this[280] = atoi(String);
  return 1;
}
