unsigned int *sub_102692D0()
{
  unsigned int *result; // eax

  if ( (dword_104804D0 & 1) != 0 )
    return (unsigned int *)dword_104804CC;
  dword_104804D0 |= 1u;
  result = sub_10242540("ListViewPanel");
  dword_104804CC = (int)result;
  return result;
}
