int *sub_10040B50()
{
  if ( (dword_10407328 & 1) == 0 )
  {
    dword_10407328 |= 1u;
    dword_1040730C = (int)"flexsettinghdr_t";
    dword_10407314 = 0;
    dword_10407318 = 0;
    dword_1040731C = 0;
    dword_10407320 = 0;
    dword_10407324 = 0;
    dword_10407310 = 16;
    atexit(sub_102C86C0);
  }
  dword_103D9458 = 0;
  dword_103D9450 = 12;
  dword_103D944C = (int)&unk_103D953C;
  return &dword_103D944C;
}
