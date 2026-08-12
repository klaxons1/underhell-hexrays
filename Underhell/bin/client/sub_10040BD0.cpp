int *sub_10040BD0()
{
  if ( (dword_10407348 & 1) == 0 )
  {
    dword_10407348 |= 1u;
    dword_1040732C = (int)"flexsetting_t";
    dword_10407334 = 0;
    dword_10407338 = 0;
    dword_1040733C = 0;
    dword_10407340 = 0;
    dword_10407344 = 0;
    dword_10407330 = 13;
    atexit(sub_102C86D0);
  }
  dword_103D9470 = 0;
  dword_103D9468 = 6;
  dword_103D9464 = (int)&unk_103D97E4;
  return &dword_103D9464;
}
