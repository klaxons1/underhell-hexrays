int *sub_10134250()
{
  if ( (dword_106AFA8C & 1) == 0 )
  {
    dword_106AFA8C |= 1u;
    dword_106AFA70 = (int)"CEnvScreenEffect";
    dword_106AFA78 = 0;
    dword_106AFA7C = 0;
    dword_106AFA80 = 0;
    dword_106AFA84 = 0;
    dword_106AFA88 = 0;
    dword_106AFA74 = 16;
    atexit(sub_10470E70);
  }
  dword_1061F1B0 = (int)&dword_1060F348;
  dword_1061F1A8 = 5;
  dword_1061F1A4 = (int)&unk_1061F82C;
  return &dword_1061F1A4;
}
