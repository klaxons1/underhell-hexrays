unsigned int *sub_1026DF70()
{
  unsigned int *result; // eax

  if ( (dword_10480560 & 1) != 0 )
    return (unsigned int *)dword_1048055C;
  dword_10480560 |= 1u;
  result = sub_10242540("MenuBar");
  dword_1048055C = (int)result;
  return result;
}
