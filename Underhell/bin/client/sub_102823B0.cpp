unsigned int *sub_102823B0()
{
  unsigned int *result; // eax

  if ( (dword_10481A58 & 1) != 0 )
    return (unsigned int *)dword_10481A54;
  dword_10481A58 |= 1u;
  result = sub_10242540("CSmallTextEntry");
  dword_10481A54 = (int)result;
  return result;
}
