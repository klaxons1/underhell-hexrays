char __thiscall sub_103D0D70(int this, char *String1, char *String)
{
  if ( String1 == "barrel" || !_stricmp(String1, "barrel") )
  {
    *(float *)(this + 832) = atof(String);
    return 1;
  }
  else if ( String1 == "barrely" || !_stricmp(String1, "barrely") )
  {
    *(float *)(this + 836) = atof(String);
    return 1;
  }
  else if ( String1 == "barrelz" || !_stricmp(String1, "barrelz") )
  {
    *(float *)(this + 840) = atof(String);
    return 1;
  }
  else
  {
    return sub_100D7750((_DWORD *)this, String1, String);
  }
}
