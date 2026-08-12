int *sub_1012EBF0()
{
  if ( (dword_106AE7D8 & 1) == 0 )
  {
    dword_106AE7D8 |= 1u;
    dword_106AE7BC = (int)"EntityParticleTrailInfo_t";
    dword_106AE7C4 = 0;
    dword_106AE7C8 = 0;
    dword_106AE7CC = 0;
    dword_106AE7D0 = 0;
    dword_106AE7D4 = 0;
    dword_106AE7C0 = 25;
    atexit(sub_10470CC0);
  }
  dword_1061E1B4 = 0;
  dword_1061E1AC = 4;
  dword_1061E1A8 = (int)&unk_1061E1FC;
  return &dword_1061E1A8;
}
