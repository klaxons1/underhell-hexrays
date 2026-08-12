int *sub_10460610()
{
  int *result; // eax
  int i; // ecx

  result = dword_106CF898;
  for ( i = 16; i >= 0; --i )
  {
    if ( result )
      *result = 0;
    ++result;
  }
  return result;
}
