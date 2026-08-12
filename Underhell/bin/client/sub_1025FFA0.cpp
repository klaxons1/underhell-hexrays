unsigned int *sub_1025FFA0()
{
  unsigned int *result; // eax

  if ( (dword_10480384 & 1) != 0 )
    return (unsigned int *)dword_10480380;
  dword_10480384 |= 1u;
  result = sub_10242540("ComboBox");
  dword_10480380 = (int)result;
  return result;
}
