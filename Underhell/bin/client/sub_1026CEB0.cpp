unsigned int *sub_1026CEB0()
{
  unsigned int *result; // eax

  if ( (dword_10480538 & 1) != 0 )
    return (unsigned int *)dword_10480534;
  dword_10480538 |= 1u;
  result = sub_10242580("Menu");
  dword_10480534 = (int)result;
  return result;
}
