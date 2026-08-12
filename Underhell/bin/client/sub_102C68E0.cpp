int sub_102C68E0()
{
  sub_100D3600(dword_1044F248, (int)"World lights");
  dword_1044F248[0] = (int)&CWorldLights::`vftable';
  dword_1044F254 = 0;
  dword_1044F258 = 0;
  return atexit(sub_102CE380);
}
