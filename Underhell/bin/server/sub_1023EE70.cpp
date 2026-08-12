int *sub_1023EE70()
{
  if ( (dword_106C517C & 1) == 0 )
  {
    dword_106C517C |= 1u;
    dword_106C5160 = (int)"CSoundPatch";
    dword_106C5168 = 0;
    dword_106C516C = 0;
    dword_106C5170 = 0;
    dword_106C5174 = 0;
    dword_106C5178 = 0;
    dword_106C5164 = 11;
    atexit(sub_104740B0);
  }
  dword_1064CA5C = 0;
  dword_1064CA54 = 15;
  dword_1064CA50 = (int)&unk_1064CD64;
  return &dword_1064CA50;
}
