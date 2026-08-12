int *sub_102598B0()
{
  if ( (dword_106C78B4 & 1) == 0 )
  {
    dword_106C78B4 |= 1u;
    dword_106C7898 = (int)"CTriggerPush";
    dword_106C78A0 = 0;
    dword_106C78A4 = 0;
    dword_106C78A8 = 0;
    dword_106C78AC = 0;
    dword_106C78B0 = 0;
    dword_106C789C = 12;
    atexit(sub_104747A0);
  }
  dword_106515B8 = (int)&dword_1065151C;
  dword_106515B0 = 2;
  dword_106515AC = (int)&unk_106523D4;
  return &dword_106515AC;
}
