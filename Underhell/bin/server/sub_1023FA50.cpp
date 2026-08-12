char __thiscall sub_1023FA50(_DWORD *this, char *String1, char *a3)
{
  if ( String1 != "soundscape" && _stricmp(String1, "soundscape") )
    return sub_100D7750(this, String1, a3);
  this[207] = *sub_10162BE0(&a3, a3);
  return 1;
}
