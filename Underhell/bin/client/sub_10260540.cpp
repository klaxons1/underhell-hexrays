unsigned int *sub_10260540()
{
  unsigned int *result; // eax

  if ( (dword_104803BC & 1) != 0 )
    return (unsigned int *)dword_104803B8;
  dword_104803BC |= 1u;
  result = sub_10242540("Divider");
  dword_104803B8 = (int)result;
  return result;
}
