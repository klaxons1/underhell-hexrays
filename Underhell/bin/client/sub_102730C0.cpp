unsigned int *sub_102730C0()
{
  unsigned int *result; // eax

  if ( (dword_10481334 & 1) != 0 )
    return (unsigned int *)dword_10481330;
  dword_10481334 |= 1u;
  result = sub_10242540("ScrollBar");
  dword_10481330 = (int)result;
  return result;
}
