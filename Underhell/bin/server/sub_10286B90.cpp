int *sub_10286B90()
{
  if ( (dword_106D47B8 & 1) == 0 )
  {
    dword_106D47B8 |= 1u;
    dword_106D479C = (int)"CSmokeStackLightInfo";
    dword_106D47A4 = 0;
    dword_106D47A8 = 0;
    dword_106D47AC = 0;
    dword_106D47B0 = 0;
    dword_106D47B4 = 0;
    dword_106D47A0 = 20;
    atexit(sub_104757A0);
  }
  dword_1065BA1C = 0;
  dword_1065BA14 = 3;
  dword_1065BA10 = (int)&unk_1065BACC;
  return &dword_1065BA10;
}
