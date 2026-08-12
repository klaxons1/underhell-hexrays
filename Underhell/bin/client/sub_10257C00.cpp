unsigned int *sub_10257C00()
{
  unsigned int *result; // eax

  if ( (dword_1047F628 & 1) != 0 )
    return (unsigned int *)dword_1047F624;
  dword_1047F628 |= 1u;
  result = sub_10242540("RichTextInterior");
  dword_1047F624 = (int)result;
  return result;
}
