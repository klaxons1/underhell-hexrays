int *sub_100FC930()
{
  if ( (dword_1069A478 & 1) == 0 )
  {
    dword_1069A478 |= 1u;
    dword_1069A45C = (int)"CFuncWall";
    dword_1069A464 = 0;
    dword_1069A468 = 0;
    dword_1069A46C = 0;
    dword_1069A470 = 0;
    dword_1069A474 = 0;
    dword_1069A460 = 9;
    atexit(sub_10470220);
  }
  dword_10613008 = (int)&dword_1060F348;
  dword_10613000 = 1;
  dword_10612FFC = (int)&unk_1061331C;
  return &dword_10612FFC;
}
