unsigned int *sub_10272410()
{
  unsigned int *result; // eax

  if ( (dword_104812E0 & 1) != 0 )
    return (unsigned int *)dword_104812DC;
  dword_104812E0 |= 1u;
  result = sub_10242580("ScalableImagePanel");
  dword_104812DC = (int)result;
  return result;
}
