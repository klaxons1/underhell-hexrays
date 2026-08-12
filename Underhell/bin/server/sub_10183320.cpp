int *sub_10183320()
{
  if ( (dword_106B679C & 1) == 0 )
  {
    dword_106B679C |= 1u;
    dword_106B6780 = (int)"CGameEnd";
    dword_106B6788 = 0;
    dword_106B678C = 0;
    dword_106B6790 = 0;
    dword_106B6794 = 0;
    dword_106B6798 = 0;
    dword_106B6784 = 8;
    atexit(sub_10472060);
  }
  dword_1062FFA4 = (int)&dword_1062FF68;
  dword_1062FF9C = 1;
  dword_1062FF98 = (int)&unk_106303AC;
  return &dword_1062FF98;
}
