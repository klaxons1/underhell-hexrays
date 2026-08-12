unsigned int *sub_102608B0()
{
  unsigned int *result; // eax

  if ( (dword_104803FC & 1) != 0 )
    return (unsigned int *)dword_104803F8;
  dword_104803FC |= 1u;
  result = sub_10242580("ExpandButton");
  dword_104803F8 = (int)result;
  return result;
}
