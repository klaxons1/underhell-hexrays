unsigned int *__cdecl sub_10242580(char *String1)
{
  if ( (dword_1047CBA4 & 1) == 0 )
  {
    dword_1047CBA4 |= 1u;
    sub_102421D0(dword_1047CB50);
    atexit(sub_102CE5D0);
  }
  return sub_10242450((unsigned int *)dword_1047CB50, String1);
}
