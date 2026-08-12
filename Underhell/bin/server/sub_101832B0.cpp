int *sub_101832B0()
{
  if ( (dword_106B677C & 1) == 0 )
  {
    dword_106B677C |= 1u;
    dword_106B6760 = (int)"CGameScore";
    dword_106B6768 = 0;
    dword_106B676C = 0;
    dword_106B6770 = 0;
    dword_106B6774 = 0;
    dword_106B6778 = 0;
    dword_106B6764 = 10;
    atexit(sub_10472050);
  }
  dword_1062FF8C = (int)&dword_1062FF68;
  dword_1062FF84 = 1;
  dword_1062FF80 = (int)&unk_10630344;
  return &dword_1062FF80;
}
