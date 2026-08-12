char __thiscall sub_10103220(float *this, char *String1, char *String)
{
  int v4; // eax
  char result; // al

  if ( !_stricmp(String1, "model") )
  {
    v4 = sub_100AF260(String);
    sub_10034E80(this, v4);
    return 1;
  }
  result = sub_100101A0(this, String1, String);
  if ( result )
    return 1;
  return result;
}
