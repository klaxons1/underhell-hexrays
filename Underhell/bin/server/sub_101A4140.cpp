int *sub_101A4140()
{
  if ( (dword_106B90F8 & 1) == 0 )
  {
    dword_106B90F8 |= 1u;
    dword_106B90DC = (int)"CNPC_UH_Butcher";
    dword_106B90E4 = 0;
    dword_106B90E8 = 0;
    dword_106B90EC = 0;
    dword_106B90F0 = 0;
    dword_106B90F4 = 0;
    dword_106B90E0 = 15;
    atexit(sub_10472A40);
  }
  dword_10632B84 = (int)&dword_1066E1D0;
  dword_10632B7C = 29;
  dword_10632B78 = (int)&unk_10632C64;
  return &dword_10632B78;
}
