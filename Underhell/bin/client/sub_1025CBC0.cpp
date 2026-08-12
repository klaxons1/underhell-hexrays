unsigned int *sub_1025CBC0()
{
  unsigned int *result; // eax

  if ( (dword_1047FAC8 & 1) != 0 )
    return (unsigned int *)dword_1047FAC4;
  dword_1047FAC8 |= 1u;
  result = sub_10242580("CheckButton");
  dword_1047FAC4 = (int)result;
  return result;
}
