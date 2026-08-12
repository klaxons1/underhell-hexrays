unsigned int *sub_10278880()
{
  unsigned int *result; // eax

  if ( (dword_104813C8 & 1) != 0 )
    return (unsigned int *)dword_104813C4;
  dword_104813C8 |= 1u;
  result = sub_10242580("CTreeViewListControl");
  dword_104813C4 = (int)result;
  return result;
}
