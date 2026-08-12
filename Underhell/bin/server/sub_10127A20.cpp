int *sub_10127A20()
{
  if ( (dword_1069DA34 & 1) == 0 )
  {
    dword_1069DA34 |= 1u;
    dword_1069DA18 = (int)"CEnvTracer";
    dword_1069DA20 = 0;
    dword_1069DA24 = 0;
    dword_1069DA28 = 0;
    dword_1069DA2C = 0;
    dword_1069DA30 = 0;
    dword_1069DA1C = 10;
    atexit(sub_104709D0);
  }
  dword_10619878 = (int)&dword_1060F348;
  if ( (dword_1069DA34 & 2) == 0 )
  {
    dword_1069DA34 |= 2u;
    dword_1061A3A8 = (int)sub_100390B0((char **)&dword_1069DA18, "TracerThink");
    dword_1061A3AC = 0;
    dword_1061A3B0 = 0;
    dword_1061A3B4 = 2097153;
    dword_1061A3B8 = 0;
    dword_1061A3BC = 0;
    dword_1061A3C0 = (int)sub_10124830;
    dword_1061A3C4 = 0;
    dword_1061A3C8 = 0;
    dword_1061A3CC = 0;
    dword_1061A3D0 = 0;
    dword_1061A3D4 = 0;
  }
  dword_10619870 = 3;
  dword_1061986C = (int)&unk_1061A33C;
  return &dword_1061986C;
}
