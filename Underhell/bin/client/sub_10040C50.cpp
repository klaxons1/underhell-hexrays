int *sub_10040C50()
{
  if ( (dword_10407368 & 1) == 0 )
  {
    dword_10407368 |= 1u;
    dword_1040734C = (int)"flexweight_t";
    dword_10407354 = 0;
    dword_10407358 = 0;
    dword_1040735C = 0;
    dword_10407360 = 0;
    dword_10407364 = 0;
    dword_10407350 = 12;
    atexit(sub_102C86E0);
  }
  dword_103D9488 = 0;
  dword_103D9480 = 3;
  dword_103D947C = (int)&unk_103D9954;
  return &dword_103D947C;
}
