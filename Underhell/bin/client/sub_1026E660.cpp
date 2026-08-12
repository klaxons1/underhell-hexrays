unsigned int *sub_1026E660()
{
  unsigned int *result; // eax

  if ( (dword_10480594 & 1) != 0 )
    return (unsigned int *)dword_10480590;
  dword_10480594 |= 1u;
  result = sub_10242540("MenuButton");
  dword_10480590 = (int)result;
  return result;
}
