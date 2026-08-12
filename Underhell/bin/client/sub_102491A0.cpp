unsigned int *sub_102491A0()
{
  unsigned int *result; // eax

  if ( (dword_1047D128 & 1) != 0 )
    return (unsigned int *)dword_1047D124;
  dword_1047D128 |= 1u;
  result = sub_10242540("ImagePanel");
  dword_1047D124 = (int)result;
  return result;
}
