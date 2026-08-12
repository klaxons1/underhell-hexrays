unsigned int *sub_10276730()
{
  unsigned int *result; // eax

  if ( (dword_10481380 & 1) != 0 )
    return (unsigned int *)dword_1048137C;
  dword_10481380 |= 1u;
  result = sub_10242540("TreeView");
  dword_1048137C = (int)result;
  return result;
}
