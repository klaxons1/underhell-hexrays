int *sub_10287B60()
{
  if ( (dword_106D4B28 & 1) == 0 )
  {
    dword_106D4B28 |= 1u;
    dword_106D4B0C = (int)"CSpriteTrail";
    dword_106D4B14 = 0;
    dword_106D4B18 = 0;
    dword_106D4B1C = 0;
    dword_106D4B20 = 0;
    dword_106D4B24 = 0;
    dword_106D4B10 = 12;
    atexit(sub_104757F0);
  }
  dword_1065BFEC = (int)&dword_1064DB24;
  dword_1065BFE4 = 10;
  dword_1065BFE0 = (int)&unk_1065C084;
  return &dword_1065BFE0;
}
