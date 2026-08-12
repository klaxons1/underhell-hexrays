unsigned int *sub_1027CAD0()
{
  unsigned int *result; // eax

  if ( (dword_1048194C & 1) != 0 )
    return (unsigned int *)dword_10481948;
  dword_1048194C |= 1u;
  result = sub_10242580("SectionedListPanel");
  dword_10481948 = (int)result;
  return result;
}
