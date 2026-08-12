unsigned int *sub_102718C0()
{
  unsigned int *result; // eax

  if ( (dword_10480EA0 & 1) != 0 )
    return (unsigned int *)dword_10480E9C;
  dword_10480EA0 |= 1u;
  result = sub_10242540("RadioButton");
  dword_10480E9C = (int)result;
  return result;
}
