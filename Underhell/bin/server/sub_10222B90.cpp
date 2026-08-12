int *sub_10222B90()
{
  if ( (dword_106C34A4 & 1) == 0 )
  {
    dword_106C34A4 |= 1u;
    dword_106C3488 = (int)"SaveRestoreBlockHeader_t";
    dword_106C3490 = 0;
    dword_106C3494 = 0;
    dword_106C3498 = 0;
    dword_106C349C = 0;
    dword_106C34A0 = 0;
    dword_106C348C = 24;
    atexit(sub_10473CC0);
  }
  dword_106466F8 = 0;
  dword_106466F0 = 3;
  dword_106466EC = (int)&unk_10646B4C;
  return &dword_106466EC;
}
