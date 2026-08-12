int *sub_101BE860()
{
  if ( (dword_106BA4E0 & 1) == 0 )
  {
    dword_106BA4E0 |= 1u;
    dword_106BA4C4 = (int)"CThrustController";
    dword_106BA4CC = 0;
    dword_106BA4D0 = 0;
    dword_106BA4D4 = 0;
    dword_106BA4D8 = 0;
    dword_106BA4DC = 0;
    dword_106BA4C8 = 17;
    atexit(sub_10472F50);
  }
  dword_10637DE8 = 0;
  dword_10637DE0 = 3;
  dword_10637DDC = (int)&unk_10637EBC;
  return &dword_10637DDC;
}
