int *sub_101FCE40()
{
  if ( (dword_106C0EAC & 1) == 0 )
  {
    dword_106C0EAC |= 1u;
    dword_106C0E90 = (int)"sky3dparams_t";
    dword_106C0E98 = 0;
    dword_106C0E9C = 0;
    dword_106C0EA0 = 0;
    dword_106C0EA4 = 0;
    dword_106C0EA8 = 0;
    dword_106C0E94 = 13;
    atexit(sub_104736D0);
  }
  dword_1063ED7C = 0;
  dword_1063ED74 = 4;
  dword_1063ED70 = (int)&unk_1063F4A4;
  return &dword_1063ED70;
}
