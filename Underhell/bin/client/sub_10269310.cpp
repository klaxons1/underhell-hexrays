unsigned int *sub_10269310()
{
  unsigned int *result; // eax

  if ( (dword_104804D8 & 1) != 0 )
    return (unsigned int *)dword_104804D4;
  dword_104804D8 |= 1u;
  result = sub_10242580("ListViewPanel");
  dword_104804D4 = (int)result;
  return result;
}
