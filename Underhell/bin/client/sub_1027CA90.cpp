unsigned int *sub_1027CA90()
{
  unsigned int *result; // eax

  if ( (dword_10481944 & 1) != 0 )
    return (unsigned int *)dword_10481940;
  dword_10481944 |= 1u;
  result = sub_10242540("SectionedListPanel");
  dword_10481940 = (int)result;
  return result;
}
