int *sub_10189030()
{
  if ( (dword_106B6EE8 & 1) == 0 )
  {
    dword_106B6EE8 |= 1u;
    dword_106B6ECC = (int)"CBaseMoveBehavior";
    dword_106B6ED4 = 0;
    dword_106B6ED8 = 0;
    dword_106B6EDC = 0;
    dword_106B6EE0 = 0;
    dword_106B6EE4 = 0;
    dword_106B6ED0 = 17;
    atexit(sub_104721C0);
  }
  dword_10631FEC = (int)&dword_10631FC8;
  dword_10631FE4 = 11;
  dword_10631FE0 = (int)&unk_106322AC;
  return &dword_10631FE0;
}
