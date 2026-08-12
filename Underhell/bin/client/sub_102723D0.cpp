unsigned int *sub_102723D0()
{
  unsigned int *result; // eax

  if ( (dword_104812D8 & 1) != 0 )
    return (unsigned int *)dword_104812D4;
  dword_104812D8 |= 1u;
  result = sub_10242540("ScalableImagePanel");
  dword_104812D4 = (int)result;
  return result;
}
