int *sub_101E0B20()
{
  if ( (dword_106BB1C0 & 1) == 0 )
  {
    dword_106BB1C0 |= 1u;
    dword_106BB1A4 = (int)"CPhysImpact";
    dword_106BB1AC = 0;
    dword_106BB1B0 = 0;
    dword_106BB1B4 = 0;
    dword_106BB1B8 = 0;
    dword_106BB1BC = 0;
    dword_106BB1A8 = 11;
    atexit(sub_10473230);
  }
  dword_1063B080 = (int)&dword_1060F348;
  if ( (dword_106BB1C0 & 2) == 0 )
  {
    dword_106BB1C0 |= 2u;
    dword_1063BEEC = (int)sub_100390B0((char **)&dword_106BB1A4, "PointAtEntity");
    word_1063BEF8 = 1;
    dword_1063BEF0 = 0;
    dword_1063BEF4 = 0;
    word_1063BEFA = 32;
    dword_1063BEFC = 0;
    dword_1063BF00 = 0;
    dword_1063BF04 = (int)sub_101DD000;
    dword_1063BF08 = 0;
    dword_1063BF0C = 0;
    dword_1063BF10 = 0;
    dword_1063BF14 = 0;
    dword_1063BF18 = 0;
    dword_1063BF1C = 0;
    dword_1063BF20 = (int)"InputImpact";
    dword_1063BF24 = 0;
    dword_1063BF28 = 0;
    dword_1063BF2C = 524289;
    dword_1063BF30 = (int)"Impact";
    dword_1063BF34 = 0;
    dword_1063BF38 = (int)sub_101DDF40;
    dword_1063BF3C = 0;
    dword_1063BF40 = 0;
    dword_1063BF44 = 0;
    dword_1063BF48 = 0;
    dword_1063BF4C = 0;
  }
  dword_1063B078 = 5;
  dword_1063B074 = (int)&unk_1063BE4C;
  return &dword_1063B074;
}
