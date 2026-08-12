unsigned int *sub_1026B300()
{
  unsigned int *result; // eax

  if ( (dword_10480520 & 1) != 0 )
    return (unsigned int *)dword_1048051C;
  dword_10480520 |= 1u;
  result = sub_10242580("MenuSeparator");
  dword_1048051C = (int)result;
  return result;
}
