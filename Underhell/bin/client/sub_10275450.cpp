unsigned int *sub_10275450()
{
  unsigned int *result; // eax

  if ( (dword_1048136C & 1) != 0 )
    return (unsigned int *)dword_10481368;
  dword_1048136C |= 1u;
  result = sub_10242540("TreeNode");
  dword_10481368 = (int)result;
  return result;
}
