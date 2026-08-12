int *sub_10131840()
{
  if ( (dword_106AF0C4 & 1) == 0 )
  {
    dword_106AF0C4 |= 1u;
    dword_106AF0A8 = (int)"CEnvParticleScript";
    dword_106AF0B0 = 0;
    dword_106AF0B4 = 0;
    dword_106AF0B8 = 0;
    dword_106AF0BC = 0;
    dword_106AF0C0 = 0;
    dword_106AF0AC = 18;
    atexit(sub_10470D80);
  }
  dword_1061E854 = (int)&dword_1060D0FC;
  dword_1061E84C = 2;
  dword_1061E848 = (int)&unk_1061E8FC;
  return &dword_1061E848;
}
