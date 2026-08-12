unsigned int *sub_1027EA10()
{
  unsigned int *result; // eax

  if ( (dword_10481968 & 1) != 0 )
    return (unsigned int *)dword_10481964;
  dword_10481968 |= 1u;
  result = sub_10242540("HTML");
  dword_10481964 = (int)result;
  return result;
}
