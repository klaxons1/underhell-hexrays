int *sub_103D3AD0()
{
  if ( (dword_106ECBA0 & 1) == 0 )
  {
    dword_106ECBA0 |= 1u;
    dword_106ECB84 = (int)"CFilterCombineBall";
    dword_106ECB8C = 0;
    dword_106ECB90 = 0;
    dword_106ECB94 = 0;
    dword_106ECB98 = 0;
    dword_106ECB9C = 0;
    dword_106ECB88 = 18;
    atexit(sub_10479010);
  }
  dword_1067E5C4 = (int)&dword_106222FC;
  dword_1067E5BC = 1;
  dword_1067E5B8 = (int)&unk_1067E91C;
  return &dword_1067E5B8;
}
