int *sub_1005AA30()
{
  if ( (dword_10692270 & 1) == 0 )
  {
    dword_10692270 |= 1u;
    dword_10692254 = (int)"AI_LeadArgs_t";
    dword_1069225C = 0;
    dword_10692260 = 0;
    dword_10692264 = 0;
    dword_10692268 = 0;
    dword_1069226C = 0;
    dword_10692258 = 13;
    atexit(sub_1046ECA0);
  }
  dword_106045E0 = 0;
  dword_106045D8 = 6;
  dword_106045D4 = (int)&unk_10604794;
  return &dword_106045D4;
}
