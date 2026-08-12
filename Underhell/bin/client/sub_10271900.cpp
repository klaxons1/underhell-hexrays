unsigned int *sub_10271900()
{
  unsigned int *result; // eax

  if ( (dword_10480EAC & 1) != 0 )
    return (unsigned int *)dword_10480EA8;
  dword_10480EAC |= 1u;
  result = sub_10242580("RadioButton");
  dword_10480EA8 = (int)result;
  return result;
}
