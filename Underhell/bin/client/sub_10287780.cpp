unsigned int *sub_10287780()
{
  unsigned int *result; // eax

  if ( (dword_10481AE0 & 1) != 0 )
    return (unsigned int *)dword_10481ADC;
  dword_10481AE0 |= 1u;
  result = sub_10242580("PanelListPanel");
  dword_10481ADC = (int)result;
  return result;
}
