int *sub_100FC9A0()
{
  if ( (dword_1069A498 & 1) == 0 )
  {
    dword_1069A498 |= 1u;
    dword_1069A47C = (int)"CFuncWallToggle";
    dword_1069A484 = 0;
    dword_1069A488 = 0;
    dword_1069A48C = 0;
    dword_1069A490 = 0;
    dword_1069A494 = 0;
    dword_1069A480 = 15;
    atexit(sub_10470230);
  }
  dword_10613020 = (int)&dword_10612FFC;
  dword_10613018 = 1;
  dword_10613014 = (int)&unk_10613384;
  return &dword_10613014;
}
