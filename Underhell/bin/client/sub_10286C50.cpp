unsigned int *sub_10286C50()
{
  unsigned int *result; // eax

  if ( (dword_10481ABC & 1) != 0 )
    return (unsigned int *)dword_10481AB8;
  dword_10481ABC |= 1u;
  result = sub_10242540("ScrollBarSlider");
  dword_10481AB8 = (int)result;
  return result;
}
