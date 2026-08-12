char __thiscall sub_1024DE00(float *this, char *String1, char *String)
{
  if ( String1 != "rotation" && _stricmp(String1, "rotation") )
    return sub_10246890((int)this, String1, String);
  this[224] = atof(String);
  return 1;
}
