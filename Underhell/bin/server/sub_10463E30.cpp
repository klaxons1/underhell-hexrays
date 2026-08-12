int sub_10463E30()
{
  sub_10170440(dword_106DB10C, (int)"CActBusyAnimData");
  dword_106DB10C[0] = (int)&CActBusyAnimData::`vftable';
  dword_106DB118 = 0;
  dword_106DB11C = 0;
  dword_106DB120 = 0;
  dword_106DB124 = 0;
  dword_106DB128 = 0;
  return atexit(sub_104765A0);
}
