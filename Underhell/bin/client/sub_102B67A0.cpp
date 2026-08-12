int sub_102B67A0()
{
  sub_100D3600(dword_1042F7F8, (int)"CGlowOverlaySystem");
  dword_1042F7F8[0] = (int)&CGlowOverlaySystem::`vftable';
  dword_1042F804 = 0;
  dword_1042F808 = 0;
  dword_1042F80C = 0;
  word_1042F818 = -1;
  dword_1042F810 = -1;
  dword_1042F814 = 0xFFFF;
  dword_1042F81C = 0;
  return atexit(sub_102C9B30);
}
