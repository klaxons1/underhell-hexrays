unsigned int *sub_10282280()
{
  unsigned int *result; // eax

  if ( (dword_10481A4C & 1) != 0 )
    return (unsigned int *)dword_10481A48;
  dword_10481A4C |= 1u;
  result = sub_10242580("BuildModeDialog");
  dword_10481A48 = (int)result;
  return result;
}
