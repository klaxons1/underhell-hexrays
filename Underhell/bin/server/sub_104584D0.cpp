int sub_104584D0()
{
  sub_10170440(dword_106B4F98, (int)"CGlobalState");
  dword_106B4F98[0] = (int)&CGlobalState::`vftable';
  sub_1042F8A0((int)&unk_106B4FA4, 0, 32, 0);
  byte_106B4FDC = 0;
  dword_106B4FE0 = 0;
  dword_106B4FE4 = 0;
  dword_106B4FE8 = 0;
  dword_106B4FEC = 0;
  dword_106B4FF0 = 0;
  return atexit(sub_10471BA0);
}
