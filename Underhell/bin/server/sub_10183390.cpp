int *sub_10183390()
{
  if ( (dword_106B67BC & 1) == 0 )
  {
    dword_106B67BC |= 1u;
    dword_106B67A0 = (int)"CGameText";
    dword_106B67A8 = 0;
    dword_106B67AC = 0;
    dword_106B67B0 = 0;
    dword_106B67B4 = 0;
    dword_106B67B8 = 0;
    dword_106B67A4 = 9;
    atexit(sub_10472070);
  }
  dword_1062FFBC = (int)&dword_1062FF68;
  dword_1062FFB4 = 11;
  dword_1062FFB0 = (int)&unk_10630414;
  return &dword_1062FFB0;
}
