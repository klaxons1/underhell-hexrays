unsigned int *sub_10273100()
{
  unsigned int *result; // eax

  if ( (dword_1048133C & 1) != 0 )
    return (unsigned int *)dword_10481338;
  dword_1048133C |= 1u;
  result = sub_10242580("ScrollBar");
  dword_10481338 = (int)result;
  return result;
}
