unsigned int *sub_1025D380()
{
  unsigned int *result; // eax

  if ( (dword_1047FAF4 & 1) != 0 )
    return (unsigned int *)dword_1047FAF0;
  dword_1047FAF4 |= 1u;
  result = sub_10242540("ToggleButton");
  dword_1047FAF0 = (int)result;
  return result;
}
