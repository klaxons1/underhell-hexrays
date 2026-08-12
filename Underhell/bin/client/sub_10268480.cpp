unsigned int *sub_10268480()
{
  unsigned int *result; // eax

  if ( (dword_104804BC & 1) != 0 )
    return (unsigned int *)dword_104804B8;
  dword_104804BC |= 1u;
  result = sub_10242540("ListViewItem");
  dword_104804B8 = (int)result;
  return result;
}
