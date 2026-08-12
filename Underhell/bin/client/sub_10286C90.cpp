unsigned int *sub_10286C90()
{
  unsigned int *result; // eax

  if ( (dword_10481AC4 & 1) != 0 )
    return (unsigned int *)dword_10481AC0;
  dword_10481AC4 |= 1u;
  result = sub_10242580("ScrollBarSlider");
  dword_10481AC0 = (int)result;
  return result;
}
