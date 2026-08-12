int *sub_1025ABB0()
{
  if ( (dword_106C7C1C & 1) == 0 )
  {
    dword_106C7C1C |= 1u;
    dword_106C7C00 = (int)"CTriggerPlayerMovement";
    dword_106C7C08 = 0;
    dword_106C7C0C = 0;
    dword_106C7C10 = 0;
    dword_106C7C14 = 0;
    dword_106C7C18 = 0;
    dword_106C7C04 = 22;
    atexit(sub_10474860);
  }
  dword_106516D8 = (int)&dword_1065151C;
  dword_106516D0 = 1;
  dword_106516CC = (int)&unk_106C7BCC;
  return &dword_106516CC;
}
