int *sub_101B3FD0()
{
  int v0; // eax

  if ( (dword_106B9D20 & 1) == 0 )
  {
    dword_106B9D20 |= 1u;
    dword_106B9D04 = (int)"CPhysConstraintSystem";
    dword_106B9D0C = 0;
    dword_106B9D10 = 0;
    dword_106B9D14 = 0;
    dword_106B9D18 = 0;
    dword_106B9D1C = 0;
    dword_106B9D08 = 21;
    atexit(sub_10472CE0);
  }
  dword_1063639C = (int)&dword_1060F348;
  if ( (dword_106B9D20 & 2) == 0 )
  {
    dword_106B9D20 |= 2u;
    v0 = sub_101D3250(4);
    flt_10636918 = 0.0;
    dword_106368CC = v0;
    dword_106368D0 = 0;
    dword_106368D4 = 0;
    dword_106368D8 = 0;
    dword_106368DC = 0;
    dword_106368E0 = 0;
    dword_106368E4 = 0;
    dword_106368E8 = 5;
    dword_106368EC = (int)"m_additionalIterations";
    dword_106368F0 = 804;
    dword_106368F4 = 0;
    dword_106368F8 = 393217;
    dword_106368FC = (int)"additionaliterations";
    dword_10636900 = 0;
    dword_10636904 = 0;
    dword_10636908 = 0;
    dword_1063690C = 4;
    dword_10636910 = 0;
    dword_10636914 = 0;
  }
  dword_10636394 = 2;
  dword_10636390 = (int)&unk_106368B4;
  return &dword_10636390;
}
