int *sub_100F2240()
{
  if ( (dword_106989F8 & 1) == 0 )
  {
    dword_106989F8 |= 1u;
    dword_106989DC = (int)"flexsetting_t";
    dword_106989E4 = 0;
    dword_106989E8 = 0;
    dword_106989EC = 0;
    dword_106989F0 = 0;
    dword_106989F4 = 0;
    dword_106989E0 = 13;
    atexit(sub_10470020);
  }
  dword_1061169C = 0;
  dword_10611694 = 6;
  dword_10611690 = (int)&unk_10611CC4;
  return &dword_10611690;
}
