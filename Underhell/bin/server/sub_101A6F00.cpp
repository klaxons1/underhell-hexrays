int *sub_101A6F00()
{
  if ( (dword_106B9418 & 1) == 0 )
  {
    dword_106B9418 |= 1u;
    dword_106B93FC = (int)"CNPC_UH_Infected";
    dword_106B9404 = 0;
    dword_106B9408 = 0;
    dword_106B940C = 0;
    dword_106B9410 = 0;
    dword_106B9414 = 0;
    dword_106B9400 = 16;
    atexit(sub_10472AE0);
  }
  dword_10633274 = (int)&dword_1066E1D0;
  if ( (dword_106B9418 & 2) == 0 )
  {
    dword_106B9418 |= 2u;
    dword_1063381C = (int)sub_100390B0((char **)&dword_106B93FC, "ClimbTouch");
    dword_10633820 = 0;
    dword_10633824 = 0;
    dword_10633828 = 2097153;
    dword_1063382C = 0;
    dword_10633830 = 0;
    dword_10633834 = (int)sub_101A5A10;
    dword_10633838 = 0;
    dword_1063383C = 0;
    dword_10633840 = 0;
    dword_10633844 = 0;
    dword_10633848 = 0;
  }
  dword_1063326C = 26;
  dword_10633268 = (int)&unk_10633304;
  return &dword_10633268;
}
