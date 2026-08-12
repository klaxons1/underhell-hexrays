unsigned int *sub_10287740()
{
  unsigned int *result; // eax

  if ( (dword_10481AD8 & 1) != 0 )
    return (unsigned int *)dword_10481AD4;
  dword_10481AD8 |= 1u;
  result = sub_10242540("PanelListPanel");
  dword_10481AD4 = (int)result;
  return result;
}
