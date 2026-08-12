char __thiscall sub_100FB950(float *this, char *String1, char *String)
{
  double v4; // st7
  char result; // al
  double v6; // st7

  if ( String1 == "fanfriction" || !_stricmp(String1, "fanfriction") )
  {
    v4 = atof(String);
    result = 1;
    this[203] = v4 * 0.01;
  }
  else if ( String1 == "Volume" || !_stricmp(String1, "Volume") )
  {
    v6 = atof(String) * 0.1;
    this[205] = v6;
    if ( v6 <= 1.0 )
    {
      if ( v6 < 0.0 )
        v6 = 0.0;
      this[205] = v6;
      return 1;
    }
    else
    {
      result = 1;
      this[205] = 1.0;
    }
  }
  else
  {
    return sub_100EBE90((int)this, String1, String);
  }
  return result;
}
