int *sub_102056A0()
{
  if ( (dword_106C1AA8 & 1) == 0 )
  {
    dword_106C1AA8 |= 1u;
    dword_106C1A8C = (int)"CPointVelocitySensor";
    dword_106C1A94 = 0;
    dword_106C1A98 = 0;
    dword_106C1A9C = 0;
    dword_106C1AA0 = 0;
    dword_106C1AA4 = 0;
    dword_106C1A90 = 20;
    atexit(sub_10473880);
  }
  dword_10641D24 = (int)&dword_1060F348;
  if ( (dword_106C1AA8 & 2) == 0 )
  {
    dword_106C1AA8 |= 2u;
    dword_106422FC = (int)off_10614A2C;
    dword_10642300 = 0;
    dword_10642304 = 0;
    dword_10642308 = 0;
    dword_1064230C = 0;
    dword_10642310 = 0;
    dword_10642314 = 0;
    dword_10642318 = 0;
    dword_1064231C = (int)"InputEnable";
    dword_10642320 = 0;
    dword_10642324 = 0;
    word_10642328 = 1;
    word_1064232A = 8;
    dword_1064232C = (int)"Enable";
    dword_10642330 = 0;
    dword_10642334 = (int)sub_10204600;
    dword_10642338 = 0;
    dword_1064233C = 0;
    dword_10642340 = 0;
    dword_10642344 = 0;
    dword_10642348 = 0;
    dword_1064234C = 0;
    dword_10642350 = (int)"InputDisable";
    dword_10642354 = 0;
    dword_10642358 = 0;
    dword_1064235C = 524289;
    dword_10642360 = (int)"Disable";
    dword_10642364 = 0;
    dword_10642368 = (int)sub_102043E0;
    dword_1064236C = 0;
    dword_10642370 = 0;
    dword_10642374 = 0;
    dword_10642378 = 0;
    dword_1064237C = 0;
  }
  dword_10641D1C = 7;
  dword_10641D18 = (int)&unk_10642214;
  return &dword_10641D18;
}
