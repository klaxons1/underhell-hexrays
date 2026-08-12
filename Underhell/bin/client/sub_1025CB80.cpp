unsigned int *sub_1025CB80()
{
  unsigned int *result; // eax

  if ( (dword_1047FABC & 1) != 0 )
    return (unsigned int *)dword_1047FAB8;
  dword_1047FABC |= 1u;
  result = sub_10242540("CheckButton");
  dword_1047FAB8 = (int)result;
  return result;
}
