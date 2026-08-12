int *sub_10368E60()
{
  if ( (dword_106E7FE0 & 1) == 0 )
  {
    dword_106E7FE0 |= 1u;
    dword_106E7FC4 = (int)"CFastZombie";
    dword_106E7FCC = 0;
    dword_106E7FD0 = 0;
    dword_106E7FD4 = 0;
    dword_106E7FD8 = 0;
    dword_106E7FDC = 0;
    dword_106E7FC8 = 11;
    atexit(sub_10478230);
  }
  dword_10673488 = (int)&dword_1066E1D0;
  if ( (dword_106E7FE0 & 2) == 0 )
  {
    dword_106E7FE0 |= 2u;
    dword_1067375C = (int)sub_100390B0((char **)&dword_106E7FC4, "LeapAttackTouch");
    dword_10673760 = 0;
    dword_10673764 = 0;
    dword_10673768 = 2097153;
    dword_1067376C = 0;
    dword_10673770 = 0;
    dword_10673774 = (int)sub_10367520;
    dword_10673778 = 0;
    dword_1067377C = 0;
    dword_10673780 = 0;
    dword_10673784 = 0;
    dword_10673788 = 0;
    dword_1067378C = 0;
    dword_10673790 = (int)sub_100390B0((char **)&dword_106E7FC4, "ClimbTouch");
    dword_10673794 = 0;
    dword_10673798 = 0;
    dword_1067379C = 2097153;
    dword_106737A0 = 0;
    dword_106737A4 = 0;
    dword_106737A8 = (int)sub_10366AA0;
    dword_106737AC = 0;
    dword_106737B0 = 0;
    dword_106737B4 = 0;
    dword_106737B8 = 0;
    dword_106737BC = 0;
    dword_106737C0 = 11;
    dword_106737C4 = (int)"m_pLayer2";
    dword_106737C8 = 4016;
    dword_106737CC = 0;
    dword_106737D0 = 131073;
    dword_106737D4 = 0;
    dword_106737D8 = (int)sub_1023DBB0();
    dword_106737DC = 0;
    dword_106737E0 = 0;
    dword_106737E4 = 0;
    dword_106737E8 = 0;
    dword_106737EC = 0;
    dword_106737F0 = 0;
    dword_106737F4 = 0;
    dword_106737F8 = (int)sub_100390B0((char **)&dword_106E7FC4, "VehicleLeapAttackTouch");
    dword_106737FC = 0;
    dword_10673800 = 0;
    dword_10673804 = 2097153;
    dword_10673808 = 0;
    dword_1067380C = 0;
    dword_10673810 = (int)sub_10366730;
    dword_10673814 = 0;
    dword_10673818 = 0;
    dword_1067381C = 0;
    dword_10673820 = 0;
    dword_10673824 = 0;
    dword_10673828 = 2;
    dword_1067382C = (int)"InputAttachToVehicle";
    dword_10673830 = 0;
    dword_10673834 = 0;
    dword_10673838 = 524289;
    dword_1067383C = (int)"AttachToVehicle";
    dword_10673840 = 0;
    dword_10673844 = (int)sub_103685E0;
    dword_10673848 = 0;
    dword_1067384C = 0;
    dword_10673850 = 0;
    dword_10673854 = 0;
    dword_10673858 = 0;
  }
  dword_10673480 = 16;
  dword_1067347C = (int)&unk_1067351C;
  return &dword_1067347C;
}
