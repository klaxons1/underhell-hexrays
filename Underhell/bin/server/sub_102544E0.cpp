char __thiscall sub_102544E0(int this, char *String1, char *String)
{
  if ( String1 == "wait" || !_stricmp(String1, "wait") )
  {
    *(float *)(this + 816) = atof(String);
    return 1;
  }
  else if ( String1 == "moveto" || !_stricmp(String1, "moveto") )
  {
    *(_DWORD *)(this + 812) = *sub_10162BE0(&String, String);
    return 1;
  }
  else if ( String1 == "acceleration" || !_stricmp(String1, "acceleration") )
  {
    *(float *)(this + 840) = atof(String);
    return 1;
  }
  else if ( String1 == "deceleration" || !_stricmp(String1, "deceleration") )
  {
    *(float *)(this + 844) = atof(String);
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, String);
  }
}
