int *sub_101831D0()
{
  if ( (dword_106B673C & 1) == 0 )
  {
    dword_106B673C |= 1u;
    dword_106B6720 = (int)"CRuleEntity";
    dword_106B6728 = 0;
    dword_106B672C = 0;
    dword_106B6730 = 0;
    dword_106B6734 = 0;
    dword_106B6738 = 0;
    dword_106B6724 = 11;
    atexit(sub_10472030);
  }
  dword_1062FF5C = (int)&dword_1060F348;
  dword_1062FF54 = 1;
  dword_1062FF50 = (int)&unk_10630274;
  return &dword_1062FF50;
}
