unsigned int *sub_10278D10()
{
  unsigned int *result; // eax

  if ( (dword_104817F0 & 1) != 0 )
    return (unsigned int *)dword_104817EC;
  dword_104817F0 |= 1u;
  result = sub_10242540("URLLabel");
  dword_104817EC = (int)result;
  return result;
}
