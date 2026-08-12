int *sub_1013E770()
{
  if ( (dword_106B0384 & 1) == 0 )
  {
    dword_106B0384 |= 1u;
    dword_106B0368 = (int)"FilterTeam";
    dword_106B0370 = 0;
    dword_106B0374 = 0;
    dword_106B0378 = 0;
    dword_106B037C = 0;
    dword_106B0380 = 0;
    dword_106B036C = 10;
    atexit(sub_10471050);
  }
  dword_10622368 = (int)&dword_106222FC;
  dword_10622360 = 1;
  dword_1062235C = (int)&unk_106229F4;
  return &dword_1062235C;
}
