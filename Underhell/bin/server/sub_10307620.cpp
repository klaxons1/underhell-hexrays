int *sub_10307620()
{
  if ( (dword_106E2E68 & 1) == 0 )
  {
    dword_106E2E68 |= 1u;
    dword_106E2E4C = (int)"CGrubNugget";
    dword_106E2E54 = 0;
    dword_106E2E58 = 0;
    dword_106E2E5C = 0;
    dword_106E2E60 = 0;
    dword_106E2E64 = 0;
    dword_106E2E50 = 11;
    atexit(sub_104778A0);
  }
  dword_1066B6D8 = (int)&dword_1062B92C;
  dword_1066B6D0 = 1;
  dword_1066B6CC = (int)&unk_1066B7D4;
  return &dword_1066B6CC;
}
