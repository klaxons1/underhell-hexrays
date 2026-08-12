unsigned int *sub_10270EB0()
{
  unsigned int *result; // eax

  if ( (dword_10480A5C & 1) != 0 )
    return (unsigned int *)dword_10480A58;
  dword_10480A5C |= 1u;
  result = sub_10242580("ProgressBar");
  dword_10480A58 = (int)result;
  return result;
}
