int *sub_101F2910()
{
  if ( (dword_106BCFC0 & 1) == 0 )
  {
    dword_106BCFC0 |= 1u;
    dword_106BCFA4 = (int)"CObjectivesState";
    dword_106BCFAC = 0;
    dword_106BCFB0 = 0;
    dword_106BCFB4 = 0;
    dword_106BCFB8 = 0;
    dword_106BCFBC = 0;
    dword_106BCFA8 = 16;
    atexit(sub_10473580);
  }
  dword_1063C530 = 0;
  dword_1063C528 = 2;
  dword_1063C524 = (int)&unk_1063C904;
  return &dword_1063C524;
}
