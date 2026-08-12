int *sub_1013D5F0()
{
  if ( (dword_106B00D8 & 1) == 0 )
  {
    dword_106B00D8 |= 1u;
    dword_106B00BC = (int)"CEnvExplosion";
    dword_106B00C4 = 0;
    dword_106B00C8 = 0;
    dword_106B00CC = 0;
    dword_106B00D0 = 0;
    dword_106B00D4 = 0;
    dword_106B00C0 = 13;
    atexit(sub_10471000);
  }
  dword_10621FA4 = (int)&dword_1060F348;
  if ( (dword_106B00D8 & 2) == 0 )
  {
    dword_106B00D8 |= 2u;
    dword_10622290 = (int)sub_100390B0((char **)&dword_106B00BC, "Smoke");
    word_1062229C = 1;
    dword_10622294 = 0;
    dword_10622298 = 0;
    word_1062229E = 32;
    dword_106222A0 = 0;
    dword_106222A4 = 0;
    dword_106222A8 = (int)sub_1013CB10;
    dword_106222AC = 0;
    dword_106222B0 = 0;
    dword_106222B4 = 0;
    dword_106222B8 = 0;
    dword_106222BC = 0;
    dword_106222C0 = 0;
    dword_106222C4 = (int)"InputExplode";
    dword_106222C8 = 0;
    dword_106222CC = 0;
    dword_106222D0 = 524289;
    dword_106222D4 = (int)"Explode";
    dword_106222D8 = 0;
    dword_106222DC = (int)sub_1013CE20;
    dword_106222E0 = 0;
    dword_106222E4 = 0;
    dword_106222E8 = 0;
    dword_106222EC = 0;
    dword_106222F0 = 0;
  }
  dword_10621F9C = 12;
  dword_10621F98 = (int)&unk_10622084;
  return &dword_10621F98;
}
