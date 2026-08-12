unsigned int *sub_10243EF0()
{
  unsigned int *result; // eax

  if ( (dword_1047CC2C & 1) != 0 )
    return (unsigned int *)dword_1047CC28;
  dword_1047CC2C |= 1u;
  if ( (dword_1047CC04 & 1) == 0 )
  {
    dword_1047CC04 |= 1u;
    sub_10242180(dword_1047CBB0);
    atexit(sub_102CE610);
  }
  result = sub_102423B0((unsigned int *)dword_1047CBB0, "CDragDropHelperPanel");
  dword_1047CC28 = (int)result;
  return result;
}
