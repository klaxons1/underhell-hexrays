int *sub_1011B770()
{
  if ( (dword_1069C4E8 & 1) == 0 )
  {
    dword_1069C4E8 |= 1u;
    dword_1069C4CC = (int)"CRagdollMagnet";
    dword_1069C4D4 = 0;
    dword_1069C4D8 = 0;
    dword_1069C4DC = 0;
    dword_1069C4E0 = 0;
    dword_1069C4E4 = 0;
    dword_1069C4D0 = 14;
    atexit(sub_104707A0);
  }
  dword_10616818 = (int)&dword_1060F348;
  dword_10616810 = 6;
  dword_1061680C = (int)&unk_106168B4;
  return &dword_1061680C;
}
