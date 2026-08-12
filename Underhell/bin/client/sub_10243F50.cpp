unsigned int *sub_10243F50()
{
  unsigned int *result; // eax

  if ( (dword_1047CC34 & 1) != 0 )
    return (unsigned int *)dword_1047CC30;
  dword_1047CC34 |= 1u;
  if ( (dword_1047CBA4 & 1) == 0 )
  {
    dword_1047CBA4 |= 1u;
    sub_102421D0(dword_1047CB50);
    atexit(sub_102CE5D0);
  }
  result = sub_10242450((unsigned int *)dword_1047CB50, "CDragDropHelperPanel");
  dword_1047CC30 = (int)result;
  return result;
}
