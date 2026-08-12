int *sub_1016AC40()
{
  if ( (dword_106B5250 & 1) == 0 )
  {
    dword_106B5250 |= 1u;
    dword_106B5234 = (int)"CWreckage";
    dword_106B523C = 0;
    dword_106B5240 = 0;
    dword_106B5244 = 0;
    dword_106B5248 = 0;
    dword_106B524C = 0;
    dword_106B5238 = 9;
    atexit(sub_10471C80);
  }
  dword_106291F4 = (int)&dword_105FE114;
  dword_106291EC = 2;
  dword_106291E8 = (int)&unk_106294FC;
  return &dword_106291E8;
}
