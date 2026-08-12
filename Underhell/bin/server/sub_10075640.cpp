int *sub_10075640()
{
  if ( (dword_106931D4 & 1) == 0 )
  {
    dword_106931D4 |= 1u;
    dword_106931B8 = (int)"CAI_LookTarget";
    dword_106931C0 = 0;
    dword_106931C4 = 0;
    dword_106931C8 = 0;
    dword_106931CC = 0;
    dword_106931D0 = 0;
    dword_106931BC = 14;
    atexit(sub_1046F220);
  }
  dword_10607D68 = (int)&dword_1060F348;
  dword_10607D60 = 5;
  dword_10607D5C = (int)&unk_10607DAC;
  return &dword_10607D5C;
}
