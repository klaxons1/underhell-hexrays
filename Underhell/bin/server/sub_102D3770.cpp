int *sub_102D3770()
{
  if ( (dword_106DE544 & 1) == 0 )
  {
    dword_106DE544 |= 1u;
    dword_106DE528 = (int)"CMortarShell";
    dword_106DE530 = 0;
    dword_106DE534 = 0;
    dword_106DE538 = 0;
    dword_106DE53C = 0;
    dword_106DE540 = 0;
    dword_106DE52C = 12;
    atexit(sub_10476C60);
  }
  dword_10662DE0 = (int)&dword_1060F348;
  if ( (dword_106DE544 & 2) == 0 )
  {
    dword_106DE544 |= 2u;
    dword_10665310 = (int)sub_100390B0((char **)&dword_106DE528, "FlyThink");
    word_1066531C = 1;
    word_1066531E = 32;
    dword_10665314 = 0;
    dword_10665318 = 0;
    dword_10665320 = 0;
    dword_10665324 = 0;
    dword_10665328 = (int)sub_102D25E0;
    dword_1066532C = 0;
    dword_10665330 = 0;
    dword_10665334 = 0;
    dword_10665338 = 0;
    dword_1066533C = 0;
    dword_10665340 = 0;
    dword_10665344 = (int)sub_100390B0((char **)&dword_106DE528, "FadeThink");
    dword_10665348 = 0;
    dword_1066534C = 0;
    dword_10665350 = 2097153;
    dword_10665354 = 0;
    dword_10665358 = 0;
    dword_1066535C = (int)sub_102CF520;
    dword_10665360 = 0;
    dword_10665364 = 0;
    dword_10665368 = 0;
    dword_1066536C = 0;
    dword_10665370 = 0;
  }
  dword_10662DD8 = 16;
  dword_10662DD4 = (int)&unk_10665034;
  return &dword_10662DD4;
}
