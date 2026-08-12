char __thiscall sub_10246890(int this, char *String1, char *String)
{
  if ( String1 == "lip" || !_stricmp(String1, "lip") )
  {
    *(float *)(this + 812) = atof(String);
    return 1;
  }
  else if ( String1 == "wait" || !_stricmp(String1, "wait") )
  {
    *(float *)(this + 808) = atof(String);
    return 1;
  }
  else if ( String1 == "master" || !_stricmp(String1, "master") )
  {
    *(_DWORD *)(this + 912) = *sub_10162BE0(&String, String);
    return 1;
  }
  else if ( String1 == "distance" || !_stricmp(String1, "distance") )
  {
    *(float *)(this + 804) = atof(String);
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, String);
  }
}
