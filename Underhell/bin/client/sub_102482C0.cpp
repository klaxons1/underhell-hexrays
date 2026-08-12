unsigned int *sub_102482C0()
{
  unsigned int *result; // eax

  if ( (dword_1047CC5C & 1) != 0 )
    return (unsigned int *)dword_1047CC58;
  dword_1047CC5C |= 1u;
  result = sub_10242580("AnimationController");
  dword_1047CC58 = (int)result;
  return result;
}
