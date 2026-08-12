unsigned int *sub_102770E0()
{
  unsigned int *result; // eax

  if ( (dword_10481398 & 1) != 0 )
    return (unsigned int *)dword_10481394;
  dword_10481398 |= 1u;
  result = sub_10242580("TreeNodeText");
  dword_10481394 = (int)result;
  return result;
}
