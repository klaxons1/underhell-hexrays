unsigned int *sub_1025D3C0()
{
  unsigned int *result; // eax

  if ( (dword_1047FAFC & 1) != 0 )
    return (unsigned int *)dword_1047FAF8;
  dword_1047FAFC |= 1u;
  result = sub_10242580("ToggleButton");
  dword_1047FAF8 = (int)result;
  return result;
}
