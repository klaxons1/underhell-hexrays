int *sub_101B4B70()
{
  if ( (dword_106B9DC0 & 1) == 0 )
  {
    dword_106B9DC0 |= 1u;
    dword_106B9DA4 = (int)"CPhysLength";
    dword_106B9DAC = 0;
    dword_106B9DB0 = 0;
    dword_106B9DB4 = 0;
    dword_106B9DB8 = 0;
    dword_106B9DBC = 0;
    dword_106B9DA8 = 11;
    atexit(sub_10472D30);
  }
  dword_10636414 = (int)&dword_106363A8;
  dword_1063640C = 5;
  dword_10636408 = (int)&unk_1063741C;
  return &dword_10636408;
}
