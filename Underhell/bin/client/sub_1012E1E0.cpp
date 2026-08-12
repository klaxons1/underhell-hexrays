int *sub_1012E1E0()
{
  if ( (dword_104392E4 & 1) == 0 )
  {
    dword_104392E4 |= 1u;
    dword_104392C8 = (int)"ViewSmoothingData_t";
    dword_104392D0 = 0;
    dword_104392D4 = 0;
    dword_104392D8 = 0;
    dword_104392DC = 0;
    dword_104392E0 = 0;
    dword_104392CC = 19;
    atexit(sub_102CBAD0);
  }
  dword_103E6F84 = 0;
  dword_103E6F7C = 9;
  dword_103E6F78 = (int)&unk_103E6FC4;
  return &dword_103E6F78;
}
