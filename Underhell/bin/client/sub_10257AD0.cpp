unsigned int *sub_10257AD0()
{
  unsigned int *result; // eax

  if ( (dword_1047F61C & 1) != 0 )
    return (unsigned int *)dword_1047F618;
  dword_1047F61C |= 1u;
  result = sub_10242580("ClickPanel");
  dword_1047F618 = (int)result;
  return result;
}
