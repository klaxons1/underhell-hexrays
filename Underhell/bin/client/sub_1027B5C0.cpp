unsigned int *sub_1027B5C0()
{
  unsigned int *result; // eax

  if ( (dword_10481938 & 1) != 0 )
    return (unsigned int *)dword_10481934;
  dword_10481938 |= 1u;
  result = sub_10242580("CItemButton");
  dword_10481934 = (int)result;
  return result;
}
