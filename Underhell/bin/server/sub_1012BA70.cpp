int *sub_1012BA70()
{
  if ( (dword_1069E36C & 1) == 0 )
  {
    dword_1069E36C |= 1u;
    dword_1069E350 = (int)"CEntityFlame";
    dword_1069E358 = 0;
    dword_1069E35C = 0;
    dword_1069E360 = 0;
    dword_1069E364 = 0;
    dword_1069E368 = 0;
    dword_1069E354 = 12;
    atexit(sub_10470B70);
  }
  dword_1061BBEC = (int)&dword_1060F348;
  if ( (dword_1069E36C & 2) == 0 )
  {
    dword_1069E36C |= 2u;
    dword_1061BDB0 = (int)sub_100390B0((char **)&dword_1069E350, "FlameThink");
    word_1061BDBC = 1;
    dword_1061BDB4 = 0;
    dword_1061BDB8 = 0;
    word_1061BDBE = 32;
    dword_1061BDC0 = 0;
    dword_1061BDC4 = 0;
    dword_1061BDC8 = (int)sub_1012B310;
    dword_1061BDCC = 0;
    dword_1061BDD0 = 0;
    dword_1061BDD4 = 0;
    dword_1061BDD8 = 0;
    dword_1061BDDC = 0;
    dword_1061BDE0 = 0;
    dword_1061BDE4 = (int)"InputIgnite";
    dword_1061BDE8 = 0;
    dword_1061BDEC = 0;
    dword_1061BDF0 = 524289;
    dword_1061BDF4 = (int)"Ignite";
    dword_1061BDF8 = 0;
    dword_1061BDFC = (int)sub_1012B970;
    dword_1061BE00 = 0;
    dword_1061BE04 = 0;
    dword_1061BE08 = 0;
    dword_1061BE0C = 0;
    dword_1061BE10 = 0;
  }
  dword_1061BBE4 = 8;
  dword_1061BBE0 = (int)&unk_1061BC74;
  return &dword_1061BBE0;
}
