unsigned int *sub_10248290()
{
  unsigned int *result; // eax

  if ( (dword_1047CC54 & 1) != 0 )
    return (unsigned int *)dword_1047CC50;
  dword_1047CC54 |= 1u;
  result = sub_10242540("AnimationController");
  dword_1047CC50 = (int)result;
  return result;
}
