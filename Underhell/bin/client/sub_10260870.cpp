unsigned int *sub_10260870()
{
  unsigned int *result; // eax

  if ( (dword_104803F0 & 1) != 0 )
    return (unsigned int *)dword_104803EC;
  dword_104803F0 |= 1u;
  result = sub_10242540("ExpandButton");
  dword_104803EC = (int)result;
  return result;
}
