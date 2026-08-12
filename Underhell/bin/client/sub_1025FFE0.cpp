unsigned int *sub_1025FFE0()
{
  unsigned int *result; // eax

  if ( (dword_10480390 & 1) != 0 )
    return (unsigned int *)dword_1048038C;
  dword_10480390 |= 1u;
  result = sub_10242580("ComboBox");
  dword_1048038C = (int)result;
  return result;
}
