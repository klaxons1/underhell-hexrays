unsigned int *sub_10250040()
{
  unsigned int *result; // eax

  if ( (dword_1047EDA4 & 1) != 0 )
    return (unsigned int *)dword_1047EDA0;
  dword_1047EDA4 |= 1u;
  result = sub_10242580("FrameSystemButton");
  dword_1047EDA0 = (int)result;
  return result;
}
