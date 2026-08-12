int *sub_10258890()
{
  if ( (dword_106C7784 & 1) == 0 )
  {
    dword_106C7784 |= 1u;
    dword_106C7768 = (int)"CTriggerRemove";
    dword_106C7770 = 0;
    dword_106C7774 = 0;
    dword_106C7778 = 0;
    dword_106C777C = 0;
    dword_106C7780 = 0;
    dword_106C776C = 14;
    atexit(sub_10474750);
  }
  dword_10651540 = (int)&dword_1065151C;
  if ( (dword_106C7784 & 2) == 0 )
  {
    dword_106C7784 |= 2u;
    dword_10652114 = (int)off_10614A2C;
    dword_10652118 = 0;
    dword_1065211C = 0;
    dword_10652120 = 0;
    dword_10652124 = 0;
    dword_10652128 = 0;
    dword_1065212C = 0;
  }
  dword_10651538 = 1;
  dword_10651534 = (int)&unk_106520FC;
  return &dword_10651534;
}
