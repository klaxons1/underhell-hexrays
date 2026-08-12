int *sub_1005FB70()
{
  if ( (dword_10692414 & 1) == 0 )
  {
    dword_10692414 |= 1u;
    dword_106923F8 = (int)"AI_StandoffParams_t";
    dword_10692400 = 0;
    dword_10692404 = 0;
    dword_10692408 = 0;
    dword_1069240C = 0;
    dword_10692410 = 0;
    dword_106923FC = 19;
    atexit(sub_1046ED20);
  }
  dword_10605748 = 0;
  dword_10605740 = 10;
  dword_1060573C = (int)&unk_10605B24;
  return &dword_1060573C;
}
