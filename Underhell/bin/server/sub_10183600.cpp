int *sub_10183600()
{
  if ( (dword_106B67FC & 1) == 0 )
  {
    dword_106B67FC |= 1u;
    dword_106B67E0 = (int)"CGamePlayerEquip";
    dword_106B67E8 = 0;
    dword_106B67EC = 0;
    dword_106B67F0 = 0;
    dword_106B67F4 = 0;
    dword_106B67F8 = 0;
    dword_106B67E4 = 16;
    atexit(sub_10472090);
  }
  dword_1062FFEC = (int)&dword_1062FF68;
  dword_1062FFE4 = 2;
  dword_1062FFE0 = (int)&unk_106307BC;
  return &dword_1062FFE0;
}
