char __thiscall sub_102CA130(float *this, char *String1, char *String)
{
  if ( String1 == "barrel" || !_stricmp(String1, "barrel") )
  {
    this[255] = atof(String);
    return 1;
  }
  else if ( String1 == "barrely" || !_stricmp(String1, "barrely") )
  {
    this[256] = atof(String);
    return 1;
  }
  else if ( String1 == "barrelz" || !_stricmp(String1, "barrelz") )
  {
    this[257] = atof(String);
    return 1;
  }
  else
  {
    return sub_100EBE90((int)this, String1, String);
  }
}
