unsigned int *sub_10260FD0()
{
  unsigned int *result; // eax

  if ( (dword_10480430 & 1) != 0 )
    return (unsigned int *)dword_1048042C;
  dword_10480430 |= 1u;
  result = sub_10242580("GraphPanel");
  dword_1048042C = (int)result;
  return result;
}
