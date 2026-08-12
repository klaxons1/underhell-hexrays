char __thiscall sub_102305C0(int this, char *String1, char *String)
{
  double v4; // st7
  char result; // al

  if ( String1 != "volume" && _stricmp(String1, "volume") )
    return sub_100D7750((_DWORD *)this, String1, String);
  v4 = atof(String);
  result = 1;
  *(float *)(this + 828) = v4 * 0.1;
  return result;
}
