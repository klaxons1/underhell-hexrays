int *sub_102E7640()
{
  if ( (dword_106E16C0 & 1) == 0 )
  {
    dword_106E16C0 |= 1u;
    dword_106E16A4 = (int)"CWateryDeathLeech";
    dword_106E16AC = 0;
    dword_106E16B0 = 0;
    dword_106E16B4 = 0;
    dword_106E16B8 = 0;
    dword_106E16BC = 0;
    dword_106E16A8 = 17;
    atexit(sub_104774E0);
  }
  dword_10667818 = (int)&dword_1060D0FC;
  if ( (dword_106E16C0 & 2) == 0 )
  {
    dword_106E16C0 |= 2u;
    dword_106E1640 = (int)sub_100390B0((char **)&dword_106E16A4, "LeechThink");
    flt_106E16A0 = 0.0;
    dword_106E1644 = 0;
    dword_106E1648 = 0;
    dword_106E164C = 2097153;
    dword_106E1650 = 0;
    dword_106E1654 = 0;
    dword_106E1658 = (int)sub_102E6A20;
    dword_106E165C = 0;
    dword_106E1660 = 0;
    dword_106E1664 = 0;
    dword_106E1668 = 0;
    dword_106E166C = 0;
    dword_106E1670 = 5;
    dword_106E1674 = (int)"m_iFadeState";
    dword_106E1678 = 1120;
    dword_106E167C = 0;
    dword_106E1680 = 131073;
    dword_106E1684 = 0;
    dword_106E1688 = 0;
    dword_106E168C = 0;
    dword_106E1690 = 0;
    dword_106E1694 = 4;
    dword_106E1698 = 0;
    dword_106E169C = 0;
  }
  dword_10667810 = 2;
  dword_1066780C = (int)&unk_106E163C;
  return &dword_1066780C;
}
