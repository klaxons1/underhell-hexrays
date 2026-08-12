int *sub_103D3A20()
{
  if ( (dword_106ECB80 & 1) == 0 )
  {
    dword_106ECB80 |= 1u;
    dword_106ECB64 = (int)"CPointCombineBallLauncher";
    dword_106ECB6C = 0;
    dword_106ECB70 = 0;
    dword_106ECB74 = 0;
    dword_106ECB78 = 0;
    dword_106ECB7C = 0;
    dword_106ECB68 = 25;
    atexit(sub_10479000);
  }
  dword_1067E5AC = (int)&dword_1067E588;
  dword_1067E5A4 = 4;
  dword_1067E5A0 = (int)&unk_1067E814;
  return &dword_1067E5A0;
}
