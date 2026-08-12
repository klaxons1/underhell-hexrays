int *sub_100C3680()
{
  if ( (dword_10695FA4 & 1) == 0 )
  {
    dword_10695FA4 |= 1u;
    dword_10695F88 = (int)"CInfoLightingRelative";
    dword_10695F90 = 0;
    dword_10695F94 = 0;
    dword_10695F98 = 0;
    dword_10695F9C = 0;
    dword_10695FA0 = 0;
    dword_10695F8C = 21;
    atexit(sub_1046F8C0);
  }
  dword_1060D0EC = (int)&dword_1060F348;
  dword_1060D0E4 = 2;
  dword_1060D0E0 = (int)&unk_1060D2AC;
  return &dword_1060D0E0;
}
