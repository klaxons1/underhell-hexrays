int *sub_102820B0()
{
  if ( (dword_106D2300 & 1) == 0 )
  {
    dword_106D2300 |= 1u;
    dword_106D22E4 = (int)"CProjectedDecal";
    dword_106D22EC = 0;
    dword_106D22F0 = 0;
    dword_106D22F4 = 0;
    dword_106D22F8 = 0;
    dword_106D22FC = 0;
    dword_106D22E8 = 15;
    atexit(sub_104754C0);
  }
  dword_10659DCC = (int)&dword_1060F348;
  if ( (dword_106D2300 & 2) == 0 )
  {
    dword_106D2300 |= 2u;
    dword_1065A178 = (int)sub_100390B0((char **)&dword_106D22E4, "StaticDecal");
    word_1065A184 = 1;
    word_1065A186 = 32;
    dword_1065A17C = 0;
    dword_1065A180 = 0;
    dword_1065A188 = 0;
    dword_1065A18C = 0;
    dword_1065A190 = (int)sub_10280D20;
    dword_1065A194 = 0;
    dword_1065A198 = 0;
    dword_1065A19C = 0;
    dword_1065A1A0 = 0;
    dword_1065A1A4 = 0;
    dword_1065A1A8 = 0;
    dword_1065A1AC = (int)sub_100390B0((char **)&dword_106D22E4, "TriggerDecal");
    word_1065A1BA = 32;
    dword_1065A1B0 = 0;
    dword_1065A1B4 = 0;
    word_1065A1B8 = 1;
    dword_1065A1BC = 0;
    dword_1065A1C0 = 0;
    dword_1065A1C4 = (int)sub_10280CB0;
    dword_1065A1C8 = 0;
    dword_1065A1CC = 0;
    dword_1065A1D0 = 0;
    dword_1065A1D4 = 0;
    dword_1065A1D8 = 0;
    dword_1065A1DC = 0;
    dword_1065A1E0 = (int)"InputActivate";
    dword_1065A1E4 = 0;
    dword_1065A1E8 = 0;
    dword_1065A1EC = 524289;
    dword_1065A1F0 = (int)"Activate";
    dword_1065A1F4 = 0;
    dword_1065A1F8 = (int)sub_10281300;
    dword_1065A1FC = 0;
    dword_1065A200 = 0;
    dword_1065A204 = 0;
    dword_1065A208 = 0;
    dword_1065A20C = 0;
  }
  dword_10659DC4 = 5;
  dword_10659DC0 = (int)&unk_1065A10C;
  return &dword_10659DC0;
}
