unsigned int *sub_1027EA50()
{
  unsigned int *result; // eax

  if ( (dword_10481970 & 1) != 0 )
    return (unsigned int *)dword_1048196C;
  dword_10481970 |= 1u;
  result = sub_10242580("HTML");
  dword_1048196C = (int)result;
  return result;
}
