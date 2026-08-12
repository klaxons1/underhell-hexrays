int *sub_100EA0B0()
{
  if ( (dword_104357D8 & 1) == 0 )
  {
    dword_104357D8 |= 1u;
    dword_104357BC = (int)"CParticleProperty";
    dword_104357C4 = 0;
    dword_104357C8 = 0;
    dword_104357CC = 0;
    dword_104357D0 = 0;
    dword_104357D4 = 0;
    dword_104357C0 = 17;
    atexit(sub_102CAF40);
  }
  dword_103E15A4 = 0;
  dword_103E159C = 1;
  dword_103E1598 = (int)&unk_10435788;
  return &dword_103E1598;
}
