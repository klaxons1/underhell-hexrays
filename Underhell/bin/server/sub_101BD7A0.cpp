int *sub_101BD7A0()
{
  if ( (dword_106BA448 & 1) == 0 )
  {
    dword_106BA448 |= 1u;
    dword_106BA42C = (int)"physfollower_t";
    dword_106BA434 = 0;
    dword_106BA438 = 0;
    dword_106BA43C = 0;
    dword_106BA440 = 0;
    dword_106BA444 = 0;
    dword_106BA430 = 14;
    atexit(sub_10472F20);
  }
  dword_10637A90 = 0;
  dword_10637A88 = 2;
  dword_10637A84 = (int)&unk_10637BCC;
  return &dword_10637A84;
}
