int *sub_1014E9B0()
{
  if ( (dword_106B2164 & 1) == 0 )
  {
    dword_106B2164 |= 1u;
    dword_106B2148 = (int)"CEnvDustPuff";
    dword_106B2150 = 0;
    dword_106B2154 = 0;
    dword_106B2158 = 0;
    dword_106B215C = 0;
    dword_106B2160 = 0;
    dword_106B214C = 12;
    atexit(sub_10471490);
  }
  dword_106262C8 = (int)&dword_1060F348;
  dword_106262C0 = 3;
  dword_106262BC = (int)&unk_1062675C;
  return &dword_106262BC;
}
