unsigned int *sub_10282240()
{
  unsigned int *result; // eax

  if ( (dword_10481A40 & 1) != 0 )
    return (unsigned int *)dword_10481A3C;
  dword_10481A40 |= 1u;
  result = sub_10242540("BuildModeDialog");
  dword_10481A3C = (int)result;
  return result;
}
