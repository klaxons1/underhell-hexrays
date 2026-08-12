int *sub_102227D0()
{
  if ( (dword_106C3484 & 1) == 0 )
  {
    dword_106C3484 |= 1u;
    dword_106C3468 = (int)"entitytable_t";
    dword_106C3470 = 0;
    dword_106C3474 = 0;
    dword_106C3478 = 0;
    dword_106C347C = 0;
    dword_106C3480 = 0;
    dword_106C346C = 13;
    atexit(sub_10473CB0);
  }
  dword_106466E0 = 0;
  dword_106466D8 = 10;
  dword_106466D4 = (int)&unk_1064690C;
  return &dword_106466D4;
}
