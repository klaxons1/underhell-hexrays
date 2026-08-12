int *sub_1013E850()
{
  if ( (dword_106B03C4 & 1) == 0 )
  {
    dword_106B03C4 |= 1u;
    dword_106B03A8 = (int)"FilterDamageType";
    dword_106B03B0 = 0;
    dword_106B03B4 = 0;
    dword_106B03B8 = 0;
    dword_106B03BC = 0;
    dword_106B03C0 = 0;
    dword_106B03AC = 16;
    atexit(sub_10471070);
  }
  dword_10622398 = (int)&dword_106222FC;
  dword_10622390 = 1;
  dword_1062238C = (int)&unk_10622AC4;
  return &dword_1062238C;
}
