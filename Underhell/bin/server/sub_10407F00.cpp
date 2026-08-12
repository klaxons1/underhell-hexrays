int *sub_10407F00()
{
  if ( (dword_106F0580 & 1) == 0 )
  {
    dword_106F0580 |= 1u;
    dword_106F0564 = (int)"CInfoAPCMissileHint";
    dword_106F056C = 0;
    dword_106F0570 = 0;
    dword_106F0574 = 0;
    dword_106F0578 = 0;
    dword_106F057C = 0;
    dword_106F0568 = 19;
    atexit(sub_10479A30);
  }
  dword_10686710 = (int)&dword_1060F348;
  dword_10686708 = 1;
  dword_10686704 = (int)&unk_106869FC;
  return &dword_10686704;
}
