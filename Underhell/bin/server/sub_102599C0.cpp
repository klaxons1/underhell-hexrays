int *sub_102599C0()
{
  if ( (dword_106C78D4 & 1) == 0 )
  {
    dword_106C78D4 |= 1u;
    dword_106C78B8 = (int)"CTriggerTeleport";
    dword_106C78C0 = 0;
    dword_106C78C4 = 0;
    dword_106C78C8 = 0;
    dword_106C78CC = 0;
    dword_106C78D0 = 0;
    dword_106C78BC = 16;
    atexit(sub_104747B0);
  }
  dword_106515D0 = (int)&dword_1065151C;
  dword_106515C8 = 1;
  dword_106515C4 = (int)&unk_10652474;
  return &dword_106515C4;
}
