char __thiscall sub_10202E30(int this, char *String1, char *String)
{
  double v4; // st7
  char result; // al

  if ( String1 != "tolerance" && _stricmp(String1, "tolerance") )
    return sub_100D7750((_DWORD *)this, String1, String);
  v4 = atof(String);
  result = 1;
  *(float *)(this + 820) = cos(v4 * 0.017453292);
  return result;
}
