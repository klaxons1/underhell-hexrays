_DWORD *sub_10460670()
{
  _DWORD *result; // eax
  int i; // ecx

  result = dword_106CF928;
  for ( i = 16; i >= 0; --i )
  {
    if ( result )
      *result = 0;
    ++result;
  }
  return result;
}
