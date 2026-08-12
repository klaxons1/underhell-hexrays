int *sub_101AF2A0()
{
  if ( (dword_106B9C04 & 1) == 0 )
  {
    dword_106B9C04 |= 1u;
    dword_106B9BE8 = (int)"CConstantForceController";
    dword_106B9BF0 = 0;
    dword_106B9BF4 = 0;
    dword_106B9BF8 = 0;
    dword_106B9BFC = 0;
    dword_106B9C00 = 0;
    dword_106B9BEC = 24;
    atexit(sub_10472C30);
  }
  dword_106355FC = 0;
  dword_106355F4 = 5;
  dword_106355F0 = (int)&unk_10635874;
  return &dword_106355F0;
}
