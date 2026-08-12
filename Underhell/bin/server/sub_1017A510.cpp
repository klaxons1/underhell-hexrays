int *sub_1017A510()
{
  if ( (dword_106B6370 & 1) == 0 )
  {
    dword_106B6370 |= 1u;
    dword_106B6354 = (int)"CLogicNavigation";
    dword_106B635C = 0;
    dword_106B6360 = 0;
    dword_106B6364 = 0;
    dword_106B6368 = 0;
    dword_106B636C = 0;
    dword_106B6358 = 16;
    atexit(sub_10471F00);
  }
  dword_1062C95C = (int)&dword_1060F348;
  dword_1062C954 = 5;
  dword_1062C950 = (int)&unk_1062C9F4;
  return &dword_1062C950;
}
