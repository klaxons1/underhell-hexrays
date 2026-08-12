unsigned int *sub_10270580()
{
  unsigned int *result; // eax

  if ( (dword_10480610 & 1) != 0 )
    return (unsigned int *)dword_1048060C;
  dword_10480610 |= 1u;
  result = sub_10242580("MessageBox");
  dword_1048060C = (int)result;
  return result;
}
