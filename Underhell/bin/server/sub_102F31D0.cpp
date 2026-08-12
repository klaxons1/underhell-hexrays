int *sub_102F31D0()
{
  if ( (dword_106E26AC & 1) == 0 )
  {
    dword_106E26AC |= 1u;
    dword_106E2690 = (int)"CAdvisorLevitate";
    dword_106E2698 = 0;
    dword_106E269C = 0;
    dword_106E26A0 = 0;
    dword_106E26A4 = 0;
    dword_106E26A8 = 0;
    dword_106E2694 = 16;
    atexit(sub_104776E0);
  }
  dword_10669C54 = 0;
  dword_10669C4C = 4;
  dword_10669C48 = (int)&unk_10669DA4;
  return &dword_10669C48;
}
