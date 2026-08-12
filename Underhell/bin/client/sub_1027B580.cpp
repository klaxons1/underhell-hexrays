unsigned int *sub_1027B580()
{
  unsigned int *result; // eax

  if ( (dword_10481930 & 1) != 0 )
    return (unsigned int *)dword_1048192C;
  dword_10481930 |= 1u;
  result = sub_10242540("CItemButton");
  dword_1048192C = (int)result;
  return result;
}
