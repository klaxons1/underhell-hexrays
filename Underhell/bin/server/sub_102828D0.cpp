int *sub_102828D0()
{
  if ( (dword_106D258C & 1) == 0 )
  {
    dword_106D258C |= 1u;
    dword_106D2570 = (int)"CParticleFire";
    dword_106D2578 = 0;
    dword_106D257C = 0;
    dword_106D2580 = 0;
    dword_106D2584 = 0;
    dword_106D2588 = 0;
    dword_106D2574 = 13;
    atexit(sub_10475560);
  }
  dword_1065A5A0 = (int)&dword_1060F348;
  dword_1065A598 = 2;
  dword_1065A594 = (int)&unk_1065A634;
  return &dword_1065A594;
}
