int *sub_1040AAB0()
{
  if ( (dword_106F08F8 & 1) == 0 )
  {
    dword_106F08F8 |= 1u;
    dword_106F08DC = (int)"CWeaponSMG1";
    dword_106F08E4 = 0;
    dword_106F08E8 = 0;
    dword_106F08EC = 0;
    dword_106F08F0 = 0;
    dword_106F08F4 = 0;
    dword_106F08E0 = 11;
    atexit(sub_10479AE0);
  }
  dword_10687518 = (int)&dword_10660834;
  dword_10687510 = 2;
  dword_1068750C = (int)&unk_1068779C;
  return &dword_1068750C;
}
