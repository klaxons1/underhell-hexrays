unsigned int *sub_10276770()
{
  unsigned int *result; // eax

  if ( (dword_10481388 & 1) != 0 )
    return (unsigned int *)dword_10481384;
  dword_10481388 |= 1u;
  result = sub_10242580("TreeView");
  dword_10481384 = (int)result;
  return result;
}
