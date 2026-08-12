int *sub_1005AAB0()
{
  if ( (dword_10692290 & 1) == 0 )
  {
    dword_10692290 |= 1u;
    dword_10692274 = (int)"CAI_LeadBehavior";
    dword_1069227C = 0;
    dword_10692280 = 0;
    dword_10692284 = 0;
    dword_10692288 = 0;
    dword_1069228C = 0;
    dword_10692278 = 16;
    atexit(sub_1046ECB0);
  }
  dword_106045F8 = (int)&dword_10601D54;
  dword_106045F0 = 22;
  dword_106045EC = (int)&unk_10604904;
  return &dword_106045EC;
}
