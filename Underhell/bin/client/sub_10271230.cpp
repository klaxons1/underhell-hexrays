unsigned int *sub_10271230()
{
  unsigned int *result; // eax

  if ( (dword_10480A74 & 1) != 0 )
    return (unsigned int *)dword_10480A70;
  dword_10480A74 |= 1u;
  result = sub_10242580("ContinuousProgressBar");
  dword_10480A70 = (int)result;
  return result;
}
