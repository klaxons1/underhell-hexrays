unsigned int *sub_10267900()
{
  unsigned int *result; // eax

  if ( (dword_10480488 & 1) != 0 )
    return (unsigned int *)dword_10480484;
  dword_10480488 |= 1u;
  result = sub_10242540("ListPanel");
  dword_10480484 = (int)result;
  return result;
}
