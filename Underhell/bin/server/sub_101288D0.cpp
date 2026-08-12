int *sub_101288D0()
{
  if ( (dword_1069DCE8 & 1) == 0 )
  {
    dword_1069DCE8 |= 1u;
    dword_1069DCCC = (int)"CEnvViewPunch";
    dword_1069DCD4 = 0;
    dword_1069DCD8 = 0;
    dword_1069DCDC = 0;
    dword_1069DCE0 = 0;
    dword_1069DCE4 = 0;
    dword_1069DCD0 = 13;
    atexit(sub_10470AD0);
  }
  dword_10619A08 = (int)&dword_1060F348;
  dword_10619A00 = 3;
  dword_106199FC = (int)&unk_1061B35C;
  return &dword_106199FC;
}
