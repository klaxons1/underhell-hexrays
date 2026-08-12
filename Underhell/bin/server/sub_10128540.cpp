int *sub_10128540()
{
  if ( (dword_1069DC68 & 1) == 0 )
  {
    dword_1069DC68 |= 1u;
    dword_1069DC4C = (int)"CEnvMuzzleFlash";
    dword_1069DC54 = 0;
    dword_1069DC58 = 0;
    dword_1069DC5C = 0;
    dword_1069DC60 = 0;
    dword_1069DC64 = 0;
    dword_1069DC50 = 15;
    atexit(sub_10470A90);
  }
  dword_106199A4 = (int)&dword_1060F348;
  dword_1061999C = 3;
  dword_10619998 = (int)&unk_1061ACD4;
  return &dword_10619998;
}
