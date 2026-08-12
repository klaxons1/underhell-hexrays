unsigned int *sub_10278840()
{
  unsigned int *result; // eax

  if ( (dword_104813C0 & 1) != 0 )
    return (unsigned int *)dword_104813BC;
  dword_104813C0 |= 1u;
  result = sub_10242540("CTreeViewListControl");
  dword_104813BC = (int)result;
  return result;
}
