int *sub_10210010()
{
  if ( (dword_106C2620 & 1) == 0 )
  {
    dword_106C2620 |= 1u;
    dword_106C2604 = (int)"locksound_t";
    dword_106C260C = 0;
    dword_106C2610 = 0;
    dword_106C2614 = 0;
    dword_106C2618 = 0;
    dword_106C261C = 0;
    dword_106C2608 = 11;
    atexit(sub_10473AE0);
  }
  dword_10643020 = 0;
  dword_10643018 = 10;
  dword_10643014 = (int)&unk_1064357C;
  return &dword_10643014;
}
