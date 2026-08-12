unsigned int *sub_10282810()
{
  unsigned int *result; // eax

  if ( (dword_10481A74 & 1) != 0 )
    return (unsigned int *)dword_10481A70;
  dword_10481A74 |= 1u;
  result = sub_10242580("CBuildModeNavCombo");
  dword_10481A70 = (int)result;
  return result;
}
