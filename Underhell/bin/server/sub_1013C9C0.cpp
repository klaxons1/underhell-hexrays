char __thiscall sub_1013C9C0(_DWORD *this, char *String1, char *a3)
{
  if ( String1 != "fireballsprite" && _stricmp(String1, "fireballsprite") )
    return sub_100D7750(this, String1, a3);
  this[204] = *(_DWORD *)sub_10162BE0(&a3, a3);
  return 1;
}
