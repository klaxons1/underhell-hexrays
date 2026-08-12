unsigned int *sub_1025E5C0()
{
  unsigned int *result; // eax

  if ( (dword_1047FF40 & 1) != 0 )
    return (unsigned int *)dword_1047FF3C;
  dword_1047FF40 |= 1u;
  result = sub_10242580("AnimatingImagePanel");
  dword_1047FF3C = (int)result;
  return result;
}
