unsigned int *sub_10275490()
{
  unsigned int *result; // eax

  if ( (dword_10481374 & 1) != 0 )
    return (unsigned int *)dword_10481370;
  dword_10481374 |= 1u;
  result = sub_10242580("TreeNode");
  dword_10481370 = (int)result;
  return result;
}
