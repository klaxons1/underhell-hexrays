unsigned int *sub_1025E580()
{
  unsigned int *result; // eax

  if ( (dword_1047FF38 & 1) != 0 )
    return (unsigned int *)dword_1047FF34;
  dword_1047FF38 |= 1u;
  result = sub_10242540("AnimatingImagePanel");
  dword_1047FF34 = (int)result;
  return result;
}
