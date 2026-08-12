unsigned int *sub_10250000()
{
  unsigned int *result; // eax

  if ( (dword_1047ED9C & 1) != 0 )
    return (unsigned int *)dword_1047ED98;
  dword_1047ED9C |= 1u;
  result = sub_10242540("FrameSystemButton");
  dword_1047ED98 = (int)result;
  return result;
}
