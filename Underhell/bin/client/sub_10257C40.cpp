unsigned int *sub_10257C40()
{
  unsigned int *result; // eax

  if ( (dword_1047F630 & 1) != 0 )
    return (unsigned int *)dword_1047F62C;
  dword_1047F630 |= 1u;
  result = sub_10242580("RichTextInterior");
  dword_1047F62C = (int)result;
  return result;
}
