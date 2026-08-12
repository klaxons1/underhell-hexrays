unsigned int *sub_10260F90()
{
  unsigned int *result; // eax

  if ( (dword_10480428 & 1) != 0 )
    return (unsigned int *)dword_10480424;
  dword_10480428 |= 1u;
  result = sub_10242540("GraphPanel");
  dword_10480424 = (int)result;
  return result;
}
