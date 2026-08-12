int *sub_10259AB0()
{
  if ( (dword_106C7914 & 1) == 0 )
  {
    dword_106C7914 |= 1u;
    dword_106C78F8 = (int)"CTriggerSave";
    dword_106C7900 = 0;
    dword_106C7904 = 0;
    dword_106C7908 = 0;
    dword_106C790C = 0;
    dword_106C7910 = 0;
    dword_106C78FC = 12;
    atexit(sub_104747D0);
  }
  dword_10651600 = (int)&dword_1065151C;
  dword_106515F8 = 3;
  dword_106515F4 = (int)&unk_106525AC;
  return &dword_106515F4;
}
