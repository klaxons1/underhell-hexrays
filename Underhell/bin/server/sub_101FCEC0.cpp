int *sub_101FCEC0()
{
  if ( (dword_106C0ECC & 1) == 0 )
  {
    dword_106C0ECC |= 1u;
    dword_106C0EB0 = (int)"audioparams_t";
    dword_106C0EB8 = 0;
    dword_106C0EBC = 0;
    dword_106C0EC0 = 0;
    dword_106C0EC4 = 0;
    dword_106C0EC8 = 0;
    dword_106C0EB4 = 13;
    atexit(sub_104736E0);
  }
  dword_1063ED94 = 0;
  dword_1063ED8C = 4;
  dword_1063ED88 = (int)&unk_1063F5AC;
  return &dword_1063ED88;
}
