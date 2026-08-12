int *sub_1000A180()
{
  if ( (dword_104011BC & 1) == 0 )
  {
    dword_104011BC |= 1u;
    dword_104011A0 = (int)"CFailableAchievement";
    dword_104011A8 = 0;
    dword_104011AC = 0;
    dword_104011B0 = 0;
    dword_104011B4 = 0;
    dword_104011B8 = 0;
    dword_104011A4 = 20;
    atexit(sub_102C8030);
  }
  dword_103D647C = (int)&dword_103D6458;
  dword_103D6474 = 2;
  dword_103D6470 = (int)&unk_103D6534;
  return &dword_103D6470;
}
