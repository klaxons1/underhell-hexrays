int *sub_1033B3D0()
{
  if ( (dword_106E6504 & 1) == 0 )
  {
    dword_106E6504 |= 1u;
    dword_106E64E8 = (int)"CCitizenResponseSystem";
    dword_106E64F0 = 0;
    dword_106E64F4 = 0;
    dword_106E64F8 = 0;
    dword_106E64FC = 0;
    dword_106E6500 = 0;
    dword_106E64EC = 22;
    atexit(sub_10477F90);
  }
  dword_1066E98C = (int)&dword_1060F348;
  if ( (dword_106E6504 & 2) == 0 )
  {
    dword_106E6504 |= 2u;
    dword_1066F65C = (int)sub_100390B0((char **)&dword_106E64E8, "ResponseThink");
    dword_1066F660 = 0;
    dword_1066F664 = 0;
    dword_1066F668 = 2097153;
    dword_1066F66C = 0;
    dword_1066F670 = 0;
    dword_1066F674 = (int)sub_10334A40;
    dword_1066F678 = 0;
    dword_1066F67C = 0;
    dword_1066F680 = 0;
    dword_1066F684 = 0;
    dword_1066F688 = 0;
  }
  dword_1066E984 = 4;
  dword_1066E980 = (int)&unk_1066F5BC;
  return &dword_1066E980;
}
