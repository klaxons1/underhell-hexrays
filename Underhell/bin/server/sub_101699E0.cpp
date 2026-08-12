char __thiscall sub_101699E0(_DWORD *this, char *String1, char *String)
{
  if ( String1 == "lowboundary" || !_stricmp(String1, "lowboundary") )
  {
    this[906] = atoi(String);
    return 1;
  }
  else if ( String1 == "highboundary" || !_stricmp(String1, "highboundary") )
  {
    this[907] = atoi(String);
    return 1;
  }
  else if ( String1 == "blendspeed" || !_stricmp(String1, "blendspeed") )
  {
    this[909] = atoi(String);
    return 1;
  }
  else if ( String1 == "blendsequence" || !_stricmp(String1, "blendsequence") )
  {
    this[910] = *sub_10162BE0(&String, String);
    return 1;
  }
  else
  {
    return sub_10021EA0(this, String1, String);
  }
}
