char __thiscall sub_1011F140(_BYTE *this, char *String1, char *String)
{
  double v4; // st7
  char result; // al

  if ( String1 == "locked_sentence" || !_stricmp(String1, "locked_sentence") )
  {
    v4 = atof(String);
    result = 1;
    this[968] = (int)v4;
  }
  else if ( String1 == "unlocked_sentence" || !_stricmp(String1, "unlocked_sentence") )
  {
    this[969] = (int)atof(String);
    return 1;
  }
  else
  {
    return sub_10246890((int)this, String1, String);
  }
  return result;
}
