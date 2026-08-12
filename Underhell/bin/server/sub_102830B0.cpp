int *sub_102830B0()
{
  if ( (dword_106D2A60 & 1) == 0 )
  {
    dword_106D2A60 |= 1u;
    dword_106D2A44 = (int)"CPlasma";
    dword_106D2A4C = 0;
    dword_106D2A50 = 0;
    dword_106D2A54 = 0;
    dword_106D2A58 = 0;
    dword_106D2A5C = 0;
    dword_106D2A48 = 7;
    atexit(sub_104755E0);
  }
  dword_1065A834 = (int)&dword_10623614;
  dword_1065A82C = 3;
  dword_1065A828 = (int)&unk_1065A8C4;
  return &dword_1065A828;
}
