int *sub_101396A0()
{
  if ( (dword_106AFF88 & 1) == 0 )
  {
    dword_106AFF88 |= 1u;
    dword_106AFF6C = (int)"CCredits";
    dword_106AFF74 = 0;
    dword_106AFF78 = 0;
    dword_106AFF7C = 0;
    dword_106AFF80 = 0;
    dword_106AFF84 = 0;
    dword_106AFF70 = 8;
    atexit(sub_10470F70);
  }
  dword_10620BD4 = (int)&dword_1060F348;
  if ( (dword_106AFF88 & 2) == 0 )
  {
    dword_106AFF88 |= 2u;
    flt_10620DD8 = 0.0;
    dword_10620D8C = (int)off_10614A2C;
    flt_10620E0C = 0.0;
    dword_10620D90 = 0;
    dword_10620D94 = 0;
    dword_10620D98 = 0;
    dword_10620D9C = 0;
    dword_10620DA0 = 0;
    dword_10620DA4 = 0;
    dword_10620DA8 = 6;
    dword_10620DAC = (int)"m_bRolledOutroCredits";
    dword_10620DB0 = 824;
    dword_10620DB4 = 0;
    word_10620DB8 = 1;
    word_10620DBA = 2;
    dword_10620DBC = 0;
    dword_10620DC0 = 0;
    dword_10620DC4 = 0;
    dword_10620DC8 = 0;
    dword_10620DCC = 1;
    dword_10620DD0 = 0;
    dword_10620DD4 = 0;
    dword_10620DDC = 1;
    dword_10620DE0 = (int)"m_flLogoLength";
    dword_10620DE4 = 828;
    dword_10620DE8 = 0;
    dword_10620DEC = 131073;
    dword_10620DF0 = 0;
    dword_10620DF4 = 0;
    dword_10620DF8 = 0;
    dword_10620DFC = 0;
    dword_10620E00 = 4;
    dword_10620E04 = 0;
    dword_10620E08 = 0;
  }
  dword_10620BCC = 7;
  dword_10620BC8 = (int)&unk_10620CA4;
  return &dword_10620BC8;
}
