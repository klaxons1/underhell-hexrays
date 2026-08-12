unsigned int *sub_102711F0()
{
  unsigned int *result; // eax

  if ( (dword_10480A6C & 1) != 0 )
    return (unsigned int *)dword_10480A68;
  dword_10480A6C |= 1u;
  result = sub_10242540("ContinuousProgressBar");
  dword_10480A68 = (int)result;
  return result;
}
