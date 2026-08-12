int *sub_1012A8E0()
{
  if ( (dword_1069E230 & 1) == 0 )
  {
    dword_1069E230 |= 1u;
    dword_1069E214 = (int)"CEntityDissolve";
    dword_1069E21C = 0;
    dword_1069E220 = 0;
    dword_1069E224 = 0;
    dword_1069E228 = 0;
    dword_1069E22C = 0;
    dword_1069E218 = 15;
    atexit(sub_10470B30);
  }
  dword_1061B878 = (int)&dword_1060F348;
  if ( (dword_1069E230 & 2) == 0 )
  {
    dword_1069E230 |= 2u;
    dword_1061BB48 = (int)sub_100390B0((char **)&dword_1069E214, "DissolveThink");
    dword_1061BB4C = 0;
    dword_1061BB50 = 0;
    dword_1061BB54 = 2097153;
    dword_1061BB58 = 0;
    dword_1061BB5C = 0;
    dword_1061BB60 = (int)sub_1012A730;
    dword_1061BB64 = 0;
    dword_1061BB68 = 0;
    dword_1061BB6C = 0;
    dword_1061BB70 = 0;
    dword_1061BB74 = 0;
    dword_1061BB78 = 0;
    dword_1061BB7C = (int)sub_100390B0((char **)&dword_1069E214, "ElectrocuteThink");
    dword_1061BB80 = 0;
    dword_1061BB84 = 0;
    dword_1061BB88 = 2097153;
    dword_1061BB8C = 0;
    dword_1061BB90 = 0;
    dword_1061BB94 = (int)sub_1012A0C0;
    dword_1061BB98 = 0;
    dword_1061BB9C = 0;
    dword_1061BBA0 = 0;
    dword_1061BBA4 = 0;
    dword_1061BBA8 = 0;
    dword_1061BBAC = 2;
    dword_1061BBB0 = (int)"InputDissolve";
    dword_1061BBB4 = 0;
    dword_1061BBB8 = 0;
    dword_1061BBBC = 524289;
    dword_1061BBC0 = (int)"Dissolve";
    dword_1061BBC4 = 0;
    dword_1061BBC8 = (int)sub_10129D80;
    dword_1061BBCC = 0;
    dword_1061BBD0 = 0;
    dword_1061BBD4 = 0;
    dword_1061BBD8 = 0;
    dword_1061BBDC = 0;
  }
  dword_1061B870 = 13;
  dword_1061B86C = (int)&unk_1061B93C;
  return &dword_1061B86C;
}
