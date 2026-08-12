char __thiscall sub_101084D0(_BYTE *this, char *String1, char *String)
{
  double v4; // st7
  char result; // al
  double v6; // st7
  double v7; // st7

  if ( String1 == "locked_sound" || !_stricmp(String1, "locked_sound") )
  {
    v4 = atof(String);
    result = 1;
    this[972] = (int)v4;
  }
  else if ( String1 == "locked_sentence" || !_stricmp(String1, "locked_sentence") )
  {
    this[973] = (int)atof(String);
    return 1;
  }
  else if ( String1 == "unlocked_sound" || !_stricmp(String1, "unlocked_sound") )
  {
    v6 = atof(String);
    result = 1;
    this[974] = (int)v6;
  }
  else if ( String1 == "unlocked_sentence" || !_stricmp(String1, "unlocked_sentence") )
  {
    v7 = atof(String);
    result = 1;
    this[975] = (int)v7;
  }
  else
  {
    return sub_10246890((int)this, String1, String);
  }
  return result;
}
