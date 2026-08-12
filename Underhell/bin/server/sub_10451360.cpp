int sub_10451360()
{
  sub_10170440(dword_10692E1C, (int)"CAI_SystemHook");
  dword_10692E1C[0] = (int)&CAI_SystemHook::`vftable';
  return atexit(sub_1046F0E0);
}
