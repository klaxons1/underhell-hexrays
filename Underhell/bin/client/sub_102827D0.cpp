unsigned int *sub_102827D0()
{
  unsigned int *result; // eax

  if ( (dword_10481A6C & 1) != 0 )
    return (unsigned int *)dword_10481A68;
  dword_10481A6C |= 1u;
  result = sub_10242540("CBuildModeNavCombo");
  dword_10481A68 = (int)result;
  return result;
}
