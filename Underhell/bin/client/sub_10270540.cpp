unsigned int *sub_10270540()
{
  unsigned int *result; // eax

  if ( (dword_10480604 & 1) != 0 )
    return (unsigned int *)dword_10480600;
  dword_10480604 |= 1u;
  result = sub_10242540("MessageBox");
  dword_10480600 = (int)result;
  return result;
}
