unsigned int *__cdecl sub_10242540(char *String1)
{
  if ( (dword_1047CC04 & 1) == 0 )
  {
    dword_1047CC04 |= 1u;
    sub_10242180(dword_1047CBB0);
    atexit(sub_102CE610);
  }
  return sub_102423B0((unsigned int *)dword_1047CBB0, String1);
}
