int *sub_1019D320()
{
  if ( (dword_106B8364 & 1) == 0 )
  {
    dword_106B8364 |= 1u;
    dword_106B8348 = (int)"CInfoLadder";
    dword_106B8350 = 0;
    dword_106B8354 = 0;
    dword_106B8358 = 0;
    dword_106B835C = 0;
    dword_106B8360 = 0;
    dword_106B834C = 11;
    atexit(sub_10472570);
  }
  dword_1063273C = (int)&dword_1060F348;
  dword_10632734 = 2;
  dword_10632730 = (int)&unk_106327B4;
  return &dword_10632730;
}
