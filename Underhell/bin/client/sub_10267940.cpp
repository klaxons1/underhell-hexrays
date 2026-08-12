unsigned int *sub_10267940()
{
  unsigned int *result; // eax

  if ( (dword_10480490 & 1) != 0 )
    return (unsigned int *)dword_1048048C;
  dword_10480490 |= 1u;
  result = sub_10242580("ListPanel");
  dword_1048048C = (int)result;
  return result;
}
