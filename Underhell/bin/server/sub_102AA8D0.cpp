int *sub_102AA8D0()
{
  if ( (dword_106DB8EC & 1) == 0 )
  {
    dword_106DB8EC |= 1u;
    dword_106DB8D0 = (int)"CAI_Spotlight";
    dword_106DB8D8 = 0;
    dword_106DB8DC = 0;
    dword_106DB8E0 = 0;
    dword_106DB8E4 = 0;
    dword_106DB8E8 = 0;
    dword_106DB8D4 = 13;
    atexit(sub_10476700);
  }
  dword_1065FB10 = 0;
  dword_1065FB08 = 9;
  dword_1065FB04 = (int)&unk_1065FB74;
  return &dword_1065FB04;
}
