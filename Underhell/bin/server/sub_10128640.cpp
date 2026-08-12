int *sub_10128640()
{
  if ( (dword_1069DCA8 & 1) == 0 )
  {
    dword_1069DCA8 |= 1u;
    dword_1069DC8C = (int)"CEnvGunfire";
    dword_1069DC94 = 0;
    dword_1069DC98 = 0;
    dword_1069DC9C = 0;
    dword_1069DCA0 = 0;
    dword_1069DCA4 = 0;
    dword_1069DC90 = 11;
    atexit(sub_10470AB0);
  }
  dword_106199D4 = (int)&dword_1060F348;
  if ( (dword_1069DCA8 & 2) == 0 )
  {
    dword_1069DCA8 |= 2u;
    dword_1061B188 = (int)sub_100390B0((char **)&dword_1069DC8C, "ShootThink");
    word_1061B194 = 1;
    dword_1061B1A4 = 0;
    dword_1061B1A8 = 0;
    dword_1061B1AC = 0;
    dword_1061B1B0 = 0;
    dword_1061B1B4 = 0;
    word_1061B1CA = 8;
    dword_1061B18C = 0;
    dword_1061B190 = 0;
    word_1061B196 = 32;
    dword_1061B198 = 0;
    dword_1061B19C = 0;
    dword_1061B1A0 = (int)sub_101266D0;
    dword_1061B1B8 = 0;
    dword_1061B1BC = (int)"InputEnable";
    dword_1061B1C0 = 0;
    dword_1061B1C4 = 0;
    word_1061B1C8 = 1;
    dword_1061B1CC = (int)"Enable";
    dword_1061B1D0 = 0;
    dword_1061B1D4 = (int)sub_10127320;
    dword_1061B1D8 = 0;
    dword_1061B1DC = 0;
    dword_1061B1E0 = 0;
    dword_1061B1E4 = 0;
    dword_1061B1E8 = 0;
    dword_1061B1EC = 0;
    dword_1061B1F0 = (int)"InputDisable";
    dword_1061B1F4 = 0;
    dword_1061B1F8 = 0;
    dword_1061B1FC = 524289;
    dword_1061B200 = (int)"Disable";
    dword_1061B204 = 0;
    dword_1061B208 = (int)sub_101245B0;
    dword_1061B20C = 0;
    dword_1061B210 = 0;
    dword_1061B214 = 0;
    dword_1061B218 = 0;
    dword_1061B21C = 0;
  }
  dword_106199CC = 19;
  dword_106199C8 = (int)&unk_1061AE44;
  return &dword_106199C8;
}
