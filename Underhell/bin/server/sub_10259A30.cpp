int *sub_10259A30()
{
  if ( (dword_106C78F4 & 1) == 0 )
  {
    dword_106C78F4 |= 1u;
    dword_106C78D8 = (int)"CTriggerToggleSave";
    dword_106C78E0 = 0;
    dword_106C78E4 = 0;
    dword_106C78E8 = 0;
    dword_106C78EC = 0;
    dword_106C78F0 = 0;
    dword_106C78DC = 18;
    atexit(sub_104747C0);
  }
  dword_106515E8 = (int)&dword_1065151C;
  dword_106515E0 = 3;
  dword_106515DC = (int)&unk_106524DC;
  return &dword_106515DC;
}
