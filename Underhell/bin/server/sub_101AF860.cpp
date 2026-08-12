int *sub_101AF860()
{
  if ( (dword_106B9C84 & 1) == 0 )
  {
    dword_106B9C84 |= 1u;
    dword_106B9C68 = (int)"CMotorController";
    dword_106B9C70 = 0;
    dword_106B9C74 = 0;
    dword_106B9C78 = 0;
    dword_106B9C7C = 0;
    dword_106B9C80 = 0;
    dword_106B9C6C = 16;
    atexit(sub_10472C70);
  }
  dword_1063565C = 0;
  dword_10635654 = 8;
  dword_10635650 = (int)&unk_10635CBC;
  return &dword_10635650;
}
