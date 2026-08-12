int *sub_103337A0()
{
  if ( (dword_106E5AE8 & 1) == 0 )
  {
    dword_106E5AE8 |= 1u;
    dword_106E5ACC = (int)"CNPC_Bullseye";
    dword_106E5AD4 = 0;
    dword_106E5AD8 = 0;
    dword_106E5ADC = 0;
    dword_106E5AE0 = 0;
    dword_106E5AE4 = 0;
    dword_106E5AD0 = 13;
    atexit(sub_10477D70);
  }
  dword_1066E64C = (int)&dword_105FE114;
  if ( (dword_106E5AE8 & 2) == 0 )
  {
    dword_106E5AE8 |= 2u;
    dword_1066E7B8 = (int)sub_100390B0((char **)&dword_106E5ACC, "BullseyeThink");
    word_1066E7C4 = 1;
    dword_1066E7D4 = 0;
    dword_1066E7D8 = 0;
    dword_1066E7DC = 0;
    dword_1066E7E0 = 0;
    dword_1066E7E4 = 0;
    dword_1066E7EC = (int)"InputTargeted";
    dword_1066E7FC = (int)"InputTargeted";
    dword_1066E808 = 0;
    dword_1066E80C = 0;
    dword_1066E810 = 0;
    dword_1066E814 = 0;
    dword_1066E818 = 0;
    word_1066E7C6 = 32;
    dword_1066E820 = (int)"InputReleased";
    dword_1066E830 = (int)"InputReleased";
    word_1066E7FA = 8;
    word_1066E82E = 8;
    dword_1066E83C = 0;
    dword_1066E840 = 0;
    dword_1066E844 = 0;
    dword_1066E848 = 0;
    dword_1066E84C = 0;
    word_1066E7F8 = 1;
    word_1066E82C = 1;
    word_1066E860 = 1;
    word_1066E862 = 22;
    dword_1066E7BC = 0;
    dword_1066E7C0 = 0;
    dword_1066E7C8 = 0;
    dword_1066E7CC = 0;
    dword_1066E7D0 = (int)sub_10332C30;
    dword_1066E7E8 = 0;
    dword_1066E7F0 = 0;
    dword_1066E7F4 = 0;
    dword_1066E800 = 0;
    dword_1066E804 = (int)sub_10332C50;
    dword_1066E81C = 0;
    dword_1066E824 = 0;
    dword_1066E828 = 0;
    dword_1066E834 = 0;
    dword_1066E838 = (int)sub_10332C80;
    dword_1066E850 = 11;
    dword_1066E854 = (int)"m_OnTargeted";
    dword_1066E858 = 3624;
    dword_1066E85C = 0;
    dword_1066E864 = (int)"OnTargeted";
    dword_1066E868 = (int)off_10614A2C;
    dword_1066E86C = 0;
    dword_1066E870 = 0;
    dword_1066E874 = 0;
    dword_1066E878 = 0;
    dword_1066E87C = 0;
    dword_1066E880 = 0;
    dword_1066E884 = 11;
    dword_1066E888 = (int)"m_OnReleased";
    dword_1066E88C = 3648;
    dword_1066E890 = 0;
    dword_1066E894 = 1441793;
    dword_1066E898 = (int)"OnReleased";
    dword_1066E89C = (int)off_10614A2C;
    dword_1066E8A0 = 0;
    dword_1066E8A4 = 0;
    dword_1066E8A8 = 0;
    dword_1066E8AC = 0;
    dword_1066E8B0 = 0;
    dword_1066E8B4 = 0;
  }
  dword_1066E644 = 9;
  dword_1066E640 = (int)asc_1066E6E4;
  return &dword_1066E640;
}
