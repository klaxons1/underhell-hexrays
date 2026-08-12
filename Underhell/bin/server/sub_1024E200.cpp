char __thiscall sub_1024E200(float *this, char *String1, char *String)
{
  double v4; // st7
  char result; // al

  if ( String1 != "volume" && _stricmp(String1, "volume") )
    return sub_100EBE90((int)this, String1, String);
  v4 = (double)atoi(String);
  result = 1;
  this[212] = v4 * 0.1;
  return result;
}
