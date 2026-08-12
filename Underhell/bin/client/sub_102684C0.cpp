unsigned int *sub_102684C0()
{
  unsigned int *result; // eax

  if ( (dword_104804C4 & 1) != 0 )
    return (unsigned int *)dword_104804C0;
  dword_104804C4 |= 1u;
  result = sub_10242580("ListViewItem");
  dword_104804C0 = (int)result;
  return result;
}
