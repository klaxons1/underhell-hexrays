unsigned int *sub_10257A90()
{
  unsigned int *result; // eax

  if ( (dword_1047F614 & 1) != 0 )
    return (unsigned int *)dword_1047F610;
  dword_1047F614 |= 1u;
  result = sub_10242540("ClickPanel");
  dword_1047F610 = (int)result;
  return result;
}
