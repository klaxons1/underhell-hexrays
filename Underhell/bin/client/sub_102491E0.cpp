unsigned int *sub_102491E0()
{
  unsigned int *result; // eax

  if ( (dword_1047D134 & 1) != 0 )
    return (unsigned int *)dword_1047D130;
  dword_1047D134 |= 1u;
  result = sub_10242580("ImagePanel");
  dword_1047D130 = (int)result;
  return result;
}
