int *sub_10286C10()
{
  if ( (dword_106D47D8 & 1) == 0 )
  {
    dword_106D47D8 |= 1u;
    dword_106D47BC = (int)"CSmokeStack";
    dword_106D47C4 = 0;
    dword_106D47C8 = 0;
    dword_106D47CC = 0;
    dword_106D47D0 = 0;
    dword_106D47D4 = 0;
    dword_106D47C0 = 11;
    atexit(sub_104757B0);
  }
  dword_1065BA34 = (int)&dword_1060F348;
  dword_1065BA2C = 21;
  dword_1065BA28 = (int)&unk_1065BB9C;
  return &dword_1065BA28;
}
