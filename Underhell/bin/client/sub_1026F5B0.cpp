unsigned int *sub_1026F5B0()
{
  unsigned int *result; // eax

  if ( (dword_104805CC & 1) != 0 )
    return (unsigned int *)dword_104805C8;
  dword_104805CC |= 1u;
  result = sub_10242540("MenuItem");
  dword_104805C8 = (int)result;
  return result;
}
