int *sub_1023F1D0()
{
  if ( (dword_106C519C & 1) == 0 )
  {
    dword_106C519C |= 1u;
    dword_106C5180 = (int)"SoundCommand_t";
    dword_106C5188 = 0;
    dword_106C518C = 0;
    dword_106C5190 = 0;
    dword_106C5194 = 0;
    dword_106C5198 = 0;
    dword_106C5184 = 14;
    atexit(sub_104740C0);
  }
  dword_1064CA74 = 0;
  dword_1064CA6C = 4;
  dword_1064CA68 = (int)&unk_1064D0A4;
  return &dword_1064CA68;
}
