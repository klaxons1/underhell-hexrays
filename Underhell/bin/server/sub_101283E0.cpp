int *sub_101283E0()
{
  if ( (dword_1069DC28 & 1) == 0 )
  {
    dword_1069DC28 |= 1u;
    dword_1069DC0C = (int)"CEmbers";
    dword_1069DC14 = 0;
    dword_1069DC18 = 0;
    dword_1069DC1C = 0;
    dword_1069DC20 = 0;
    dword_1069DC24 = 0;
    dword_1069DC10 = 7;
    atexit(sub_10470A70);
  }
  dword_10619970 = (int)&dword_1060F348;
  if ( (dword_1069DC28 & 2) == 0 )
  {
    dword_1069DC28 |= 2u;
    dword_1061AC08 = (int)sub_100390B0((char **)&dword_1069DC0C, "EmberUse");
    dword_1061AC0C = 0;
    dword_1061AC10 = 0;
    dword_1061AC14 = 2097153;
    dword_1061AC18 = 0;
    dword_1061AC1C = 0;
    dword_1061AC20 = (int)sub_101271C0;
    dword_1061AC24 = 0;
    dword_1061AC28 = 0;
    dword_1061AC2C = 0;
    dword_1061AC30 = 0;
    dword_1061AC34 = 0;
  }
  dword_10619968 = 5;
  dword_10619964 = (int)&unk_1061AB34;
  return &dword_10619964;
}
