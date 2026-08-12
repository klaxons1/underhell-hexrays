int *sub_1023D8F0()
{
  if ( (dword_106C5010 & 1) == 0 )
  {
    dword_106C5010 |= 1u;
    dword_106C4FF4 = (int)"CSoundEnt";
    dword_106C4FFC = 0;
    dword_106C5000 = 0;
    dword_106C5004 = 0;
    dword_106C5008 = 0;
    dword_106C500C = 0;
    dword_106C4FF8 = 9;
    atexit(sub_10474030);
  }
  dword_1064C450 = (int)&dword_1060F348;
  dword_1064C448 = 4;
  dword_1064C444 = (int)&unk_1064C7AC;
  return &dword_1064C444;
}
