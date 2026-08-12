unsigned int *sub_10278D50()
{
  unsigned int *result; // eax

  if ( (dword_104817FC & 1) != 0 )
    return (unsigned int *)dword_104817F8;
  dword_104817FC |= 1u;
  result = sub_10242580("URLLabel");
  dword_104817F8 = (int)result;
  return result;
}
