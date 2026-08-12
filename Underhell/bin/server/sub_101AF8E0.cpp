int *sub_101AF8E0()
{
  if ( (dword_106B9CA4 & 1) == 0 )
  {
    dword_106B9CA4 |= 1u;
    dword_106B9C88 = (int)"CPhysMotor";
    dword_106B9C90 = 0;
    dword_106B9C94 = 0;
    dword_106B9C98 = 0;
    dword_106B9C9C = 0;
    dword_106B9CA0 = 0;
    dword_106B9C8C = 10;
    atexit(sub_10472C80);
  }
  dword_10635674 = (int)&dword_1060F348;
  if ( (dword_106B9CA4 & 2) == 0 )
  {
    dword_106B9CA4 |= 2u;
    dword_10635FE4 = sub_101D3250(5);
    dword_10635FEC = 0;
    dword_10635FF0 = 0;
    dword_10635FF4 = 0;
    dword_10635FF8 = 0;
    dword_10635FFC = 0;
    dword_10635FE8 = 0;
    dword_10636000 = 11;
    dword_10636004 = (int)"m_pController";
    dword_10636008 = 828;
    dword_1063600C = 0;
    word_10636010 = 1;
    word_10636012 = 2;
    dword_10636014 = 0;
    dword_10636018 = sub_101D3250(8);
    dword_10636020 = 0;
    dword_10636024 = 0;
    dword_10636028 = 0;
    dword_1063602C = 0;
    dword_10636030 = 0;
    word_10636046 = 8;
    dword_10636054 = 0;
    dword_10636058 = 0;
    dword_1063605C = 0;
    dword_10636060 = 0;
    dword_10636064 = 0;
    dword_10636088 = 0;
    dword_1063608C = 0;
    dword_10636090 = 0;
    dword_10636094 = 0;
    dword_10636098 = 0;
    word_10636044 = 1;
    word_10636078 = 1;
    word_106360AC = 1;
    dword_1063601C = 0;
    dword_10636034 = 1;
    dword_10636038 = (int)"InputSetTargetSpeed";
    dword_1063603C = 0;
    dword_10636040 = 0;
    dword_10636048 = (int)"SetSpeed";
    dword_1063604C = 0;
    dword_10636050 = (int)sub_101ADDC0;
    dword_10636068 = 0;
    dword_1063606C = (int)"InputTurnOn";
    dword_10636070 = 0;
    dword_10636074 = 0;
    word_1063607A = 8;
    dword_1063607C = (int)"TurnOn";
    dword_10636080 = 0;
    dword_10636084 = (int)sub_101AE590;
    dword_1063609C = 0;
    dword_106360A0 = (int)"InputTurnOff";
    dword_106360A4 = 0;
    dword_106360A8 = 0;
    word_106360AE = 8;
    dword_106360B0 = (int)"TurnOff";
    dword_106360B4 = 0;
    dword_106360B8 = (int)sub_101ADA10;
    dword_106360BC = 0;
    dword_106360C0 = 0;
    dword_106360C4 = 0;
    dword_106360C8 = 0;
    dword_106360CC = 0;
    dword_106360D0 = 10;
    flt_10636100 = 0.0;
    dword_106360D4 = (int)"m_motor";
    dword_106360D8 = 832;
    dword_106360DC = 0;
    dword_106360E0 = 131073;
    dword_106360E4 = 0;
    dword_106360E8 = 0;
    dword_106360EC = 0;
    dword_106360F0 = (int)&dword_10635650;
    dword_106360F4 = 44;
    dword_106360F8 = 0;
    dword_106360FC = 0;
  }
  dword_1063566C = 12;
  dword_10635668 = (int)&unk_10635E94;
  return &dword_10635668;
}
