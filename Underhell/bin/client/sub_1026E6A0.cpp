unsigned int *sub_1026E6A0()
{
  unsigned int *result; // eax

  if ( (dword_104805A0 & 1) != 0 )
    return (unsigned int *)dword_1048059C;
  dword_104805A0 |= 1u;
  result = sub_10242580("MenuButton");
  dword_1048059C = (int)result;
  return result;
}
