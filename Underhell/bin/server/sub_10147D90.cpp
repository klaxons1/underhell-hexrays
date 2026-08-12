int *sub_10147D90()
{
  if ( (dword_106B1468 & 1) == 0 )
  {
    dword_106B1468 |= 1u;
    dword_106B144C = (int)"CAreaPortal";
    dword_106B1454 = 0;
    dword_106B1458 = 0;
    dword_106B145C = 0;
    dword_106B1460 = 0;
    dword_106B1464 = 0;
    dword_106B1450 = 11;
    atexit(sub_104712D0);
  }
  dword_10624F14 = (int)&dword_10625138;
  dword_10624F0C = 7;
  dword_10624F08 = (int)&unk_10624FCC;
  return &dword_10624F08;
}
