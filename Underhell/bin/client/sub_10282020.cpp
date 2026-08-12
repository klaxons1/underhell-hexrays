int __thiscall sub_10282020(int *this, char *String1)
{
  int result; // eax

  result = _stricmp(String1, "None");
  if ( result )
    return sub_10281EA0((int)this, (int)String1, this[193], this[194]);
  return result;
}
