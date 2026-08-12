char __thiscall sub_1019C390(float *this, char *String1, char *String)
{
  int v5; // [esp-4h] [ebp-10h]

  if ( String1 == "mins.x" || !_stricmp(String1, "mins.x") )
  {
    this[200] = atof(String);
    sub_100D5D10((int)(this + 200), (int)(this + 203));
  }
  else if ( String1 == "mins.y" || !_stricmp(String1, "mins.y") )
  {
    this[201] = atof(String);
    sub_100D5D10((int)(this + 200), (int)(this + 203));
  }
  else
  {
    if ( String1 != "mins.z" && _stricmp(String1, "mins.z") )
    {
      if ( String1 == "maxs.x" || !_stricmp(String1, "maxs.x") )
      {
        this[203] = atof(String);
        v5 = (int)(this + 203);
      }
      else
      {
        if ( String1 == "maxs.y" || !_stricmp(String1, "maxs.y") )
        {
          this[204] = atof(String);
        }
        else
        {
          if ( !sub_10043F40(String1, "maxs.z") )
            return sub_100EBE90((int)this, String1, String);
          this[205] = atof(String);
        }
        v5 = (int)(this + 203);
      }
      sub_100D5D10((int)(this + 200), v5);
      return sub_100EBE90((int)this, String1, String);
    }
    this[202] = atof(String);
    sub_100D5D10((int)(this + 200), (int)(this + 203));
  }
  return sub_100EBE90((int)this, String1, String);
}
