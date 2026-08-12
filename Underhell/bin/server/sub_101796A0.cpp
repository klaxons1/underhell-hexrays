int *sub_101796A0()
{
  if ( (dword_106B6328 & 1) == 0 )
  {
    dword_106B6328 |= 1u;
    dword_106B630C = (int)"CLogicAchievement";
    dword_106B6314 = 0;
    dword_106B6318 = 0;
    dword_106B631C = 0;
    dword_106B6320 = 0;
    dword_106B6324 = 0;
    dword_106B6310 = 17;
    atexit(sub_10471EE0);
  }
  dword_1062C32C = (int)&dword_1060F348;
  if ( (dword_106B6328 & 2) == 0 )
  {
    dword_106B6328 |= 2u;
    dword_1062C514 = (int)off_10614A2C;
    dword_1062C518 = 0;
    dword_1062C51C = 0;
    dword_1062C520 = 0;
    dword_1062C524 = 0;
    dword_1062C528 = 0;
    dword_1062C52C = 0;
  }
  dword_1062C324 = 7;
  dword_1062C320 = (int)&unk_1062C3C4;
  return &dword_1062C320;
}
