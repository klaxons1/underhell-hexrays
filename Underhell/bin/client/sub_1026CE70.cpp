unsigned int *sub_1026CE70()
{
  unsigned int *result; // eax

  if ( (dword_10480530 & 1) != 0 )
    return (unsigned int *)dword_1048052C;
  dword_10480530 |= 1u;
  result = sub_10242540("Menu");
  dword_1048052C = (int)result;
  return result;
}
