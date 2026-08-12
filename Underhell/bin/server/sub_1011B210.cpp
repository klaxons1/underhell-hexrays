int *sub_1011B210()
{
  if ( (dword_1069C4C0 & 1) == 0 )
  {
    dword_1069C4C0 |= 1u;
    dword_1069C4A4 = (int)"CTargetChangeGravity";
    dword_1069C4AC = 0;
    dword_1069C4B0 = 0;
    dword_1069C4B4 = 0;
    dword_1069C4B8 = 0;
    dword_1069C4BC = 0;
    dword_1069C4A8 = 20;
    atexit(sub_10470780);
  }
  dword_106165A0 = (int)&dword_1060F348;
  dword_10616598 = 4;
  dword_10616594 = (int)&unk_1061673C;
  return &dword_10616594;
}
