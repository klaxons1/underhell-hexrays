unsigned int *sub_10270E70()
{
  unsigned int *result; // eax

  if ( (dword_10480A50 & 1) != 0 )
    return (unsigned int *)dword_10480A4C;
  dword_10480A50 |= 1u;
  result = sub_10242540("ProgressBar");
  dword_10480A4C = (int)result;
  return result;
}
