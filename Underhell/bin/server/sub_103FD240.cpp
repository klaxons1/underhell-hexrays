int *sub_103FD240()
{
  char *v0; // eax

  if ( (dword_106F0308 & 1) == 0 )
  {
    dword_106F0308 |= 1u;
    dword_106F02EC = (int)"CPlayerPickupController";
    dword_106F02F4 = 0;
    dword_106F02F8 = 0;
    dword_106F02FC = 0;
    dword_106F0300 = 0;
    dword_106F0304 = 0;
    dword_106F02F0 = 23;
    atexit(sub_10479910);
  }
  dword_10685640 = (int)&dword_1060F348;
  if ( (dword_106F0308 & 2) == 0 )
  {
    dword_106F0308 |= 2u;
    v0 = sub_101D3250(8);
    flt_10685ED4 = 0.0;
    dword_10685E88 = (int)v0;
    dword_10685E8C = 0;
    dword_10685E90 = 0;
    dword_10685E94 = 0;
    dword_10685E98 = 0;
    dword_10685E9C = 0;
    dword_10685EA0 = 0;
    dword_10685EA4 = 12;
    dword_10685EA8 = (int)"m_pPlayer";
    dword_10685EAC = 9128;
    dword_10685EB0 = 0;
    dword_10685EB4 = 131073;
    dword_10685EB8 = 0;
    dword_10685EBC = 0;
    dword_10685EC0 = 0;
    dword_10685EC4 = 0;
    dword_10685EC8 = 4;
    dword_10685ECC = 0;
    dword_10685ED0 = 0;
  }
  dword_10685638 = 3;
  dword_10685634 = (int)&unk_10685E3C;
  return &dword_10685634;
}
