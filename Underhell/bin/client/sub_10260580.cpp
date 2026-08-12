unsigned int *sub_10260580()
{
  unsigned int *result; // eax

  if ( (dword_104803C8 & 1) != 0 )
    return (unsigned int *)dword_104803C4;
  dword_104803C8 |= 1u;
  result = sub_10242580("Divider");
  dword_104803C4 = (int)result;
  return result;
}
