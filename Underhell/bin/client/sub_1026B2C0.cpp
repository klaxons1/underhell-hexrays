unsigned int *sub_1026B2C0()
{
  unsigned int *result; // eax

  if ( (dword_10480518 & 1) != 0 )
    return (unsigned int *)dword_10480514;
  dword_10480518 |= 1u;
  result = sub_10242540("MenuSeparator");
  dword_10480514 = (int)result;
  return result;
}
