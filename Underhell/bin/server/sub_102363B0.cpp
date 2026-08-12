int *sub_102363B0()
{
  if ( (dword_106C4A4C & 1) == 0 )
  {
    dword_106C4A4C |= 1u;
    dword_106C4A30 = (int)"CSimTimer";
    dword_106C4A38 = 0;
    dword_106C4A3C = 0;
    dword_106C4A40 = 0;
    dword_106C4A44 = 0;
    dword_106C4A48 = 0;
    dword_106C4A34 = 9;
    atexit(sub_10473EE0);
  }
  dword_1064A95C = (int)&dword_1064A938;
  dword_1064A954 = 1;
  dword_1064A950 = (int)&unk_1064AA64;
  return &dword_1064A950;
}
