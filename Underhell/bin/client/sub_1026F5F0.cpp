unsigned int *sub_1026F5F0()
{
  unsigned int *result; // eax

  if ( (dword_104805D8 & 1) != 0 )
    return (unsigned int *)dword_104805D4;
  dword_104805D8 |= 1u;
  result = sub_10242580("MenuItem");
  dword_104805D4 = (int)result;
  return result;
}
