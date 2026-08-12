char __thiscall sub_10254EA0(char *this, char *String1, char *Source)
{
  if ( String1 == "map" || !_stricmp(String1, "map") )
  {
    if ( strlen(Source) >= 0x20 )
      Warning("Map name '%s' too long (32 chars)\n", Source);
    sub_104299C0(this + 1092, Source, 0x20u);
    return 1;
  }
  else if ( String1 == "landmark" || !_stricmp(String1, "landmark") )
  {
    if ( strlen(Source) >= 0x20 )
      Warning("Landmark name '%s' too long (32 chars)\n", Source);
    sub_104299C0(this + 1124, Source, 0x20u);
    return 1;
  }
  else
  {
    return sub_10246890((int)this, String1, Source);
  }
}
