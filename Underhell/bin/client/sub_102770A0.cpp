unsigned int *sub_102770A0()
{
  unsigned int *result; // eax

  if ( (dword_10481390 & 1) != 0 )
    return (unsigned int *)dword_1048138C;
  dword_10481390 |= 1u;
  result = sub_10242540("TreeNodeText");
  dword_1048138C = (int)result;
  return result;
}
