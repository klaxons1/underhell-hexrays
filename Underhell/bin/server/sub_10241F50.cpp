int *sub_10241F50()
{
  if ( (dword_106C5598 & 1) == 0 )
  {
    dword_106C5598 |= 1u;
    dword_106C557C = (int)"CSpotlightEnd";
    dword_106C5584 = 0;
    dword_106C5588 = 0;
    dword_106C558C = 0;
    dword_106C5590 = 0;
    dword_106C5594 = 0;
    dword_106C5580 = 13;
    atexit(sub_104741C0);
  }
  dword_1064D9BC = (int)&dword_1060F348;
  dword_1064D9B4 = 4;
  dword_1064D9B0 = (int)&unk_1064DA54;
  return &dword_1064D9B0;
}
