int __cdecl UnDecorator::getNumberOfDimensions()
{
  char *v0; // ecx
  char v1; // dl
  int result; // eax
  char v3; // dl

  v0 = dword_10482860;
  v1 = *dword_10482860;
  if ( !*dword_10482860 )
    return 0;
  if ( v1 < 48 || v1 > 57 )
  {
    result = 0;
    while ( v1 != 64 )
    {
      if ( !v1 )
        return 0;
      if ( v1 < 65 || v1 > 80 )
        return -1;
      ++v0;
      result = v1 + 16 * result - 65;
      dword_10482860 = v0;
      v1 = *v0;
    }
    v3 = *v0;
    dword_10482860 = v0 + 1;
    if ( v3 == 64 )
      return result;
    return -1;
  }
  else
  {
    result = v1 - 47;
    ++dword_10482860;
  }
  return result;
}
