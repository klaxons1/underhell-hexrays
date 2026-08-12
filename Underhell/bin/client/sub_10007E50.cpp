int __thiscall sub_10007E50(int *this, char *String1)
{
  int v4; // esi
  const char **i; // edi

  if ( !String1 )
    return -1;
  v4 = 1;
  if ( this[1] <= 1 )
    return -1;
  for ( i = (const char **)(this + 15); _stricmp(String1, *i); i += 13 )
  {
    if ( ++v4 >= this[1] )
      return -1;
  }
  return v4;
}
