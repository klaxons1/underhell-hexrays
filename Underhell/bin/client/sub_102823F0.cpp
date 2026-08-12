unsigned int *sub_102823F0()
{
  unsigned int *result; // eax

  if ( (dword_10481A60 & 1) != 0 )
    return (unsigned int *)dword_10481A5C;
  dword_10481A60 |= 1u;
  result = sub_10242580("CSmallTextEntry");
  dword_10481A5C = (int)result;
  return result;
}
