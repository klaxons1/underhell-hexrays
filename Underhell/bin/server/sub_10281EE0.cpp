int *sub_10281EE0()
{
  if ( (dword_106D22E0 & 1) == 0 )
  {
    dword_106D22E0 |= 1u;
    dword_106D22C4 = (int)"CDecal";
    dword_106D22CC = 0;
    dword_106D22D0 = 0;
    dword_106D22D4 = 0;
    dword_106D22D8 = 0;
    dword_106D22DC = 0;
    dword_106D22C8 = 6;
    atexit(sub_104754B0);
  }
  dword_10659DB4 = (int)&dword_1060F348;
  if ( (dword_106D22E0 & 2) == 0 )
  {
    dword_106D22E0 |= 2u;
    dword_1065A03C = (int)sub_100390B0((char **)&dword_106D22C4, "StaticDecal");
    word_1065A048 = 1;
    word_1065A04A = 32;
    dword_1065A040 = 0;
    dword_1065A044 = 0;
    dword_1065A04C = 0;
    dword_1065A050 = 0;
    dword_1065A054 = (int)&loc_10280F80;
    dword_1065A058 = 0;
    dword_1065A05C = 0;
    dword_1065A060 = 0;
    dword_1065A064 = 0;
    dword_1065A068 = 0;
    dword_1065A06C = 0;
    dword_1065A070 = (int)sub_100390B0((char **)&dword_106D22C4, "TriggerDecal");
    word_1065A07E = 32;
    dword_1065A074 = 0;
    dword_1065A078 = 0;
    word_1065A07C = 1;
    dword_1065A080 = 0;
    dword_1065A084 = 0;
    dword_1065A088 = (int)sub_10281720;
    dword_1065A08C = 0;
    dword_1065A090 = 0;
    dword_1065A094 = 0;
    dword_1065A098 = 0;
    dword_1065A09C = 0;
    dword_1065A0A0 = 0;
    dword_1065A0A4 = (int)"InputActivate";
    dword_1065A0A8 = 0;
    dword_1065A0AC = 0;
    dword_1065A0B0 = 524289;
    dword_1065A0B4 = (int)"Activate";
    dword_1065A0B8 = 0;
    dword_1065A0BC = (int)sub_102818E0;
    dword_1065A0C0 = 0;
    dword_1065A0C4 = 0;
    dword_1065A0C8 = 0;
    dword_1065A0CC = 0;
    dword_1065A0D0 = 0;
  }
  dword_10659DAC = 6;
  dword_10659DA8 = (int)&unk_10659F9C;
  return &dword_10659DA8;
}
