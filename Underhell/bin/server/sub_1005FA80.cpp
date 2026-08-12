int *sub_1005FA80()
{
  if ( (dword_106923F4 & 1) == 0 )
  {
    dword_106923F4 |= 1u;
    dword_106923D8 = (int)"CAI_BattleLine";
    dword_106923E0 = 0;
    dword_106923E4 = 0;
    dword_106923E8 = 0;
    dword_106923EC = 0;
    dword_106923F0 = 0;
    dword_106923DC = 14;
    atexit(sub_1046ED10);
  }
  dword_10605730 = (int)&dword_1060F348;
  if ( (dword_106923F4 & 2) == 0 )
  {
    dword_106923F4 |= 2u;
    dword_10605AC0 = (int)sub_100390B0((char **)&dword_106923D8, "MovementThink");
    dword_10605AC4 = 0;
    dword_10605AC8 = 0;
    dword_10605ACC = 2097153;
    dword_10605AD0 = 0;
    dword_10605AD4 = 0;
    dword_10605AD8 = (int)sub_1005D9F0;
    dword_10605ADC = 0;
    dword_10605AE0 = 0;
    dword_10605AE4 = 0;
    dword_10605AE8 = 0;
    dword_10605AEC = 0;
  }
  dword_10605728 = 7;
  dword_10605724 = (int)&unk_10605984;
  return &dword_10605724;
}
