unsigned int *sub_10279B80()
{
  unsigned int *result; // eax

  if ( (dword_10481924 & 1) != 0 )
    return (unsigned int *)dword_10481920;
  dword_10481924 |= 1u;
  result = sub_10242580("CSectionHeader");
  dword_10481920 = (int)result;
  return result;
}
