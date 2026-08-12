unsigned int *sub_1026DFB0()
{
  unsigned int *result; // eax

  if ( (dword_10480568 & 1) != 0 )
    return (unsigned int *)dword_10480564;
  dword_10480568 |= 1u;
  result = sub_10242580("MenuBar");
  dword_10480564 = (int)result;
  return result;
}
