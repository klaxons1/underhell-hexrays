int *sub_1027AAA0()
{
  if ( (dword_106D0C20 & 1) == 0 )
  {
    dword_106D0C20 |= 1u;
    dword_106D0C04 = (int)"CWeaponPistolDualies";
    dword_106D0C0C = 0;
    dword_106D0C10 = 0;
    dword_106D0C14 = 0;
    dword_106D0C18 = 0;
    dword_106D0C1C = 0;
    dword_106D0C08 = 20;
    atexit(sub_10475050);
  }
  dword_10657AE8 = (int)&dword_106609CC;
  dword_10657AE0 = 4;
  dword_10657ADC = (int)&unk_10657C3C;
  return &dword_10657ADC;
}
