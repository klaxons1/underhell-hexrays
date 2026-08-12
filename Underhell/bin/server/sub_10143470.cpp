int *sub_10143470()
{
  if ( (dword_106B0CF4 & 1) == 0 )
  {
    dword_106B0CF4 |= 1u;
    dword_106B0CD8 = (int)"CFish";
    dword_106B0CE0 = 0;
    dword_106B0CE4 = 0;
    dword_106B0CE8 = 0;
    dword_106B0CEC = 0;
    dword_106B0CF0 = 0;
    dword_106B0CDC = 5;
    atexit(sub_104711F0);
  }
  dword_10623938 = (int)&dword_1060D0FC;
  dword_10623930 = 14;
  dword_1062392C = (int)asc_10623A94;
  return &dword_1062392C;
}
