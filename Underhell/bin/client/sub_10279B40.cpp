unsigned int *sub_10279B40()
{
  unsigned int *result; // eax

  if ( (dword_1048191C & 1) != 0 )
    return (unsigned int *)dword_10481918;
  dword_1048191C |= 1u;
  result = sub_10242540("CSectionHeader");
  dword_10481918 = (int)result;
  return result;
}
