int *sub_10120470()
{
  if ( (dword_10437824 & 1) == 0 )
  {
    dword_10437824 |= 1u;
    dword_10437808 = (int)"CRandStopwatch";
    dword_10437810 = 0;
    dword_10437814 = 0;
    dword_10437818 = 0;
    dword_1043781C = 0;
    dword_10437820 = 0;
    dword_1043780C = 14;
    atexit(sub_102CB7C0);
  }
  dword_103E53E4 = (int)&dword_103E53A8;
  dword_103E53DC = 2;
  dword_103E53D8 = (int)&unk_103E5664;
  return &dword_103E53D8;
}
