int *sub_1016ABC0()
{
  if ( (dword_106B5230 & 1) == 0 )
  {
    dword_106B5230 |= 1u;
    dword_106B5214 = (int)"CWeaponCycler";
    dword_106B521C = 0;
    dword_106B5220 = 0;
    dword_106B5224 = 0;
    dword_106B5228 = 0;
    dword_106B522C = 0;
    dword_106B5218 = 13;
    atexit(sub_10471C70);
  }
  dword_106291DC = (int)&dword_1060E7F4;
  dword_106291D4 = 2;
  dword_106291D0 = (int)&unk_1062945C;
  return &dword_106291D0;
}
