int *sub_101B4AF0()
{
  if ( (dword_106B9DA0 & 1) == 0 )
  {
    dword_106B9DA0 |= 1u;
    dword_106B9D84 = (int)"CPhysPulley";
    dword_106B9D8C = 0;
    dword_106B9D90 = 0;
    dword_106B9D94 = 0;
    dword_106B9D98 = 0;
    dword_106B9D9C = 0;
    dword_106B9D88 = 11;
    atexit(sub_10472D20);
  }
  dword_106363FC = (int)&dword_106363A8;
  dword_106363F4 = 4;
  dword_106363F0 = (int)&unk_10637314;
  return &dword_106363F0;
}
