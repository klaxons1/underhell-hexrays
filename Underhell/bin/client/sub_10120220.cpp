int *sub_10120220()
{
  if ( (dword_10437784 & 1) == 0 )
  {
    dword_10437784 |= 1u;
    dword_10437768 = (int)"CSimpleSimTimer";
    dword_10437770 = 0;
    dword_10437774 = 0;
    dword_10437778 = 0;
    dword_1043777C = 0;
    dword_10437780 = 0;
    dword_1043776C = 15;
    atexit(sub_102CB770);
  }
  dword_103E536C = 0;
  dword_103E5364 = 1;
  dword_103E5360 = (int)&unk_103E5424;
  return &dword_103E5360;
}
