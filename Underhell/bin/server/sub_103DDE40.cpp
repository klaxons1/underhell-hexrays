int *sub_103DDE40()
{
  if ( (dword_106ED52C & 1) == 0 )
  {
    dword_106ED52C |= 1u;
    dword_106ED510 = (int)"CRotorWashEmitter";
    dword_106ED518 = 0;
    dword_106ED51C = 0;
    dword_106ED520 = 0;
    dword_106ED524 = 0;
    dword_106ED528 = 0;
    dword_106ED514 = 17;
    atexit(sub_10479140);
  }
  dword_10680758 = (int)&dword_1060F348;
  dword_10680750 = 2;
  dword_1068074C = (int)&unk_106807F4;
  return &dword_1068074C;
}
